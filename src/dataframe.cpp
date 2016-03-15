#include <dplyr.h>

using namespace Rcpp;
using namespace dplyr;


SEXP select_not_grouped( const DataFrame& df, const CharacterVector& keep, CharacterVector new_names ){
  CharacterVector names = df.names() ;
  IntegerVector positions = match( keep, names );
  int n = keep.size() ;
  List res(n) ;
  for( int i=0; i<n; i++){
      int pos = positions[i] ;
      if( pos < 1 || pos > df.size() ){
          std::stringstream s ;
          if( pos == NA_INTEGER ){
              s << "NA" ;
          } else {
              s << pos ;
          }
          stop( "invalid column index : %d for variable: %s = %s",
              s.str(), CHAR((SEXP)new_names[i]), CHAR((SEXP)keep[i]) );
      }
      res[i] = df[ pos-1 ] ;
  }
  copy_most_attributes(res, df) ;
  res.names() = new_names ;
  return res ;
}

DataFrame select_grouped( GroupedDataFrame gdf, const CharacterVector& keep, CharacterVector new_names ){
  int n = keep.size() ;
  DataFrame copy = select_not_grouped( gdf.data(), keep, new_names );

  // handle vars  attribute : make a shallow copy of the list and alter
  //   its names attribute
  List vars = shallow_copy( copy.attr("vars") );

  int nv = vars.size() ;
  for( int i=0; i<nv; i++){
    SEXP s = PRINTNAME(vars[i]) ;
    int j = 0;
    for( ; j < n; j++){
      if( s == keep[j] ){
        vars[i] = Rf_installChar( new_names[j] );
      }
    }
  }

  copy.attr("vars") = vars ;

  // hangle labels attribute
  //   make a shallow copy of the data frame and alter its names attributes
  if( !Rf_isNull( copy.attr("labels" ) ) ){

    DataFrame original_labels( copy.attr("labels" ) ) ;

    DataFrame labels( shallow_copy(original_labels));
    CharacterVector label_names = clone<CharacterVector>( labels.names() ) ;

    IntegerVector positions = match( label_names, keep );
    int nl = label_names.size() ;
    for( int i=0; i<nl; i++){
      label_names[i] = new_names[ positions[i]-1 ] ;
    }
    labels.names() = label_names ;
    labels.attr("vars") = vars ;
    copy.attr("labels") = labels ;
  }
  return copy ;
}

// [[Rcpp::export]]
DataFrame select_impl( DataFrame df, CharacterVector vars ){
  check_valid_colnames(df) ;
  if( is<GroupedDataFrame>(df) ){
    return select_grouped( GroupedDataFrame(df), vars, vars.names() ) ;
  } else {
    return select_not_grouped(df, vars, vars.names() ) ;
  }
}


typedef dplyr_hash_set<SEXP> SymbolSet ;

namespace dplyr {
  void strip_index(DataFrame x) {
    x.attr("indices") = R_NilValue ;
    x.attr("group_sizes") = R_NilValue ;
    x.attr("biggest_group_size") = R_NilValue ;
    x.attr("labels") = R_NilValue ;
  }
}

inline SEXP empty_subset( const DataFrame& df, CharacterVector columns, CharacterVector classes ){
    DataFrame res = DataFrameSubsetVisitors(df, columns).subset( EmptySubset(), classes) ;
    strip_index(res);
    return res;
}

SEXP assert_correct_filter_subcall(SEXP x, const SymbolSet& set, const Environment& env){
    switch(TYPEOF(x)){
    case LGLSXP: return x;
    case LANGSXP: return x ;
    case SYMSXP:
        {
            if( set.count(x) ) return x ;

            // look in the environment
            SEXP var = PROTECT( Rf_findVar( x, env ) ) ;
            SEXP res = Rf_duplicate(var) ;
            UNPROTECT(1) ;
            if( res == R_UnboundValue ){
                if( x == Rf_install("T") ){
                    return Rf_ScalarLogical(TRUE) ;
                } else if( x == Rf_install("F") ){
                    return Rf_ScalarLogical(FALSE) ;
                }
                stop( "unknown column : %s", CHAR(PRINTNAME(x)) );
            }
            return res ;
        }
    default:
        break ;
    }
    stop("incompatible expression in filter") ;
    return x ; // never happens
}

SEXP and_calls( const LazyDots& dots, const SymbolSet& set, const Environment& env ){
    int ncalls = dots.size() ;
    if( !ncalls ) {
        stop("incompatible input") ;
    }
    Shield<SEXP> call_( dots[0].expr() ) ;

    RObject res( assert_correct_filter_subcall(call_, set, env) ) ;

    SEXP and_symbol = Rf_install( "&" ) ;
    for( int i=1; i<ncalls; i++){
        Shield<SEXP> call( dots[i].expr() ) ;
        res = Rcpp_lang3( and_symbol, res, assert_correct_filter_subcall(call, set, env) ) ;
    }
    return res ;
}

void check_filter_result(const LogicalVector& test, int n){
    if( test.size() != n ) {
        stop( "incorrect length (%d), expecting: %d", test.size(), n );
    }
}

inline SEXP check_filter_logical_result(SEXP tmp){
    if( TYPEOF(tmp) != LGLSXP ){
        stop( "filter condition does not evaluate to a logical vector. " ) ;
    }
    return tmp ;
}

template <typename Data>
inline DataFrame grouped_subset( const Data& gdf, const LogicalVector& test, const CharacterVector& names, CharacterVector classes){
  DataFrame data = gdf.data() ;
  DataFrame res = subset( data, test, names, classes) ;
  res.attr("vars")   = data.attr("vars") ;
  strip_index(res);
  return Data(res).data() ;
}

template <typename Data, typename Subsets>
DataFrame filter_grouped_single_env( const Data& gdf, const LazyDots& dots){
    typedef GroupedCallProxy<Data, Subsets> Proxy ;
    Environment env = dots[0].env() ;

    const DataFrame& data = gdf.data() ;
    CharacterVector names = data.names() ;
    SymbolSet set ;
    for( int i=0; i<names.size(); i++){
        set.insert( Rf_installChar( names[i] ) ) ;
    }

    // a, b, c ->  a & b & c
    Call call( and_calls( dots, set, env ) ) ;

    int nrows = data.nrows() ;
    LogicalVector test(nrows, TRUE);

    LogicalVector g_test ;
    Proxy call_proxy( call, gdf, env ) ;

    int ngroups = gdf.ngroups() ;
    typename Data::group_iterator git = gdf.group_begin() ;
    for( int i=0; i<ngroups; i++, ++git){
        SlicingIndex indices = *git ;
        int chunk_size = indices.size() ;

        g_test = check_filter_logical_result( call_proxy.get( indices ) ) ;
        if( g_test.size() == 1 ){
            int val = g_test[0] == TRUE ;
            for( int j=0; j<chunk_size; j++){
                test[ indices[j] ] = val ;
            }
        } else {
            check_filter_result(g_test, chunk_size ) ;
            for( int j=0; j<chunk_size; j++){
                if( g_test[j] != TRUE ) test[ indices[j] ] = FALSE ;
            }
        }
    }
    return grouped_subset<Data>( gdf, test, names, classes_grouped<Data>() ) ;
}

// version of grouped filter when contributions to ... come from several environment
template <typename Data, typename Subsets>
DataFrame filter_grouped_multiple_env( const Data& gdf, const LazyDots& dots){
    const DataFrame& data = gdf.data() ;
    CharacterVector names = data.names() ;
    SymbolSet set ;
    for( int i=0; i<names.size(); i++){
        set.insert( Rf_installChar( names[i] ) ) ;
    }

    int nrows = data.nrows() ;
    LogicalVector test(nrows, TRUE);

    LogicalVector g_test ;

    for( int k=0; k<dots.size(); k++){
        Rcpp::checkUserInterrupt() ;
        const Lazy& lazy = dots[k] ;

        Call call( lazy.expr() ) ;
        GroupedCallProxy<Data, Subsets> call_proxy( call, gdf, lazy.env() ) ;
        int ngroups = gdf.ngroups() ;
        typename Data::group_iterator git = gdf.group_begin() ;
        for( int i=0; i<ngroups; i++, ++git){
            SlicingIndex indices = *git ;
            int chunk_size = indices.size() ;

            g_test  = check_filter_logical_result(call_proxy.get( indices ));
            if( g_test.size() == 1 ){
                if( g_test[0] != TRUE ){
                    for( int j=0; j<chunk_size; j++){
                        test[indices[j]] = FALSE ;
                    }
                }
            } else {
                check_filter_result(g_test, chunk_size ) ;
                for( int j=0; j<chunk_size; j++){
                    if( g_test[j] != TRUE ){
                        test[ indices[j] ] = FALSE ;
                    }
                }
            }
        }
    }
    return grouped_subset<Data>( gdf, test, names, classes_grouped<Data>() ) ;
}

template <typename Data, typename Subsets>
DataFrame filter_grouped( const Data& gdf, const LazyDots& dots){
    if( dots.single_env() ){
        return filter_grouped_single_env<Data, Subsets>(gdf, dots) ;
    } else {
        return filter_grouped_multiple_env<Data, Subsets>(gdf, dots) ;
    }
}

bool combine_and(LogicalVector& test, const LogicalVector& test2){
    int n = test.size() ;
    if(n == 1) {
        test = test2 ;
    } else {
        int n2 = test2.size() ;
        if( n2 == 1 ){
            if( !test2[0] ){
                return true ;
            }
        } else if( n2 == n) {
            for( int i=0; i<n; i++){
                test[i] = test[i] && test2[i] ;
            }
        } else {
            stop( "incompatible sizes" ) ;
        }
    }
    return false;
}

DataFrame filter_not_grouped( DataFrame df, const LazyDots& dots){
    CharacterVector names = df.names() ;
    SymbolSet set ;
    for( int i=0; i<names.size(); i++){
        set.insert( Rf_installChar( names[i] ) ) ;
    }
    if( dots.single_env() ){
        Environment env = dots[0].env() ;
        // a, b, c ->  a & b & c
        Shield<SEXP> call( and_calls( dots, set, env ) ) ;

        // replace the symbols that are in the data frame by vectors from the data frame
        // and evaluate the expression
        CallProxy proxy( (SEXP)call, df, env ) ;
        LogicalVector test = check_filter_logical_result(proxy.eval()) ;

        if( test.size() == 1){
            if( test[0] == TRUE ){
                return df ;
            } else {
                return empty_subset(df, df.names(), classes_not_grouped()) ;
            }
        } else {
            check_filter_result(test, df.nrows());
            return subset(df, test, classes_not_grouped() ) ;
        }
    } else {
        int nargs = dots.size() ;

        Call call(dots[0].expr());
        CallProxy first_proxy(call, df, dots[0].env() ) ;
        LogicalVector test = check_filter_logical_result(first_proxy.eval()) ;
        if( test.size() == 1 ) {
            if( !test[0] ){
                return empty_subset(df, df.names(), classes_not_grouped() ) ;
            }
        } else {
            check_filter_result(test, df.nrows());
        }

        for( int i=1; i<nargs; i++){
            Rcpp::checkUserInterrupt() ;

            Call call( dots[i].expr() ) ;
            CallProxy proxy(call, df, dots[i].env() ) ;
            LogicalVector test2 = check_filter_logical_result(proxy.eval()) ;
            if( combine_and(test, test2) ){
                return empty_subset(df, df.names(), classes_not_grouped() ) ;
            }
        }

        DataFrame res = subset( df, test, classes_not_grouped() ) ;
        return res ;
    }
}

// [[Rcpp::export]]
SEXP filter_impl( DataFrame df, LazyDots dots){
    if( df.nrows() == 0 || Rf_isNull(df) ) {
        return df ;
    }
    check_valid_colnames(df) ;
    assert_all_white_list(df) ;

    if( dots.size() == 0 ) return df ;

    // special case
    if( dots.size() == 1 && TYPEOF(dots[0].expr()) == LGLSXP){
        LogicalVector what = dots[0].expr() ;
        if( what.size() == 1 ){
            if( what[0] == TRUE ){
                return df ;
            } else {
                return empty_subset( df, df.names(), is<GroupedDataFrame>(df) ? classes_grouped<GroupedDataFrame>() : classes_not_grouped() ) ;
            }
        }
    }
    if( is<GroupedDataFrame>( df ) ){
        return filter_grouped<GroupedDataFrame, LazyGroupedSubsets>( GroupedDataFrame(df), dots);
    } else if( is<RowwiseDataFrame>(df) ){
        return filter_grouped<RowwiseDataFrame, LazyRowwiseSubsets>( RowwiseDataFrame(df), dots);
    } else {
        return filter_not_grouped( df, dots ) ;
    }
}


// [[Rcpp::export]]
List arrange_impl( DataFrame data, LazyDots dots ){
    if( data.size() == 0 ) return data ;
    check_valid_colnames(data) ;
    assert_all_white_list(data) ;

    if( dots.size() == 0 || data.nrows() == 0) return data ;

    int nargs = dots.size() ;
    List variables(nargs) ;
    LogicalVector ascending(nargs) ;

    for(int i=0; i<nargs; i++){
        const Lazy& lazy = dots[i] ;

        Shield<SEXP> call_( lazy.expr() ) ;
        SEXP call = call_ ;
        bool is_desc = TYPEOF(call) == LANGSXP && Rf_install("desc") == CAR(call) ;

        CallProxy call_proxy(is_desc ? CADR(call) : call, data, lazy.env()) ;

        Shield<SEXP> v(call_proxy.eval()) ;
        if( !white_list(v) ){
            stop( "cannot arrange column of class '%s'", get_single_class(v) ) ;
        }

        if( Rf_inherits(v, "data.frame" ) ){
            DataFrame df(v) ;
            int nr = df.nrows() ;
            if( nr != data.nrows() ){
                stop( "data frame column with incompatible number of rows (%d), expecting : %d", nr, data.nrows() );
            }
        } else if( Rf_isMatrix(v) ) {
            SEXP dim = Rf_getAttrib(v, Rf_install( "dim" ) ) ;
            int nr = INTEGER(dim)[0] ;
            if( nr != data.nrows() ){
                stop( "matrix column with incompatible number of rows (%d), expecting : %d", nr, data.nrows() ) ;
            }
        } else {
            if( Rf_length(v) != data.nrows() ){
                stop( "incorrect size (%d), expecting : %d", Rf_length(v), data.nrows() ) ;
            }
        }
        variables[i] = v ;
        ascending[i] = !is_desc ;
    }
    OrderVisitors o(variables, ascending, nargs) ;
    IntegerVector index = o.apply() ;

    DataFrameSubsetVisitors visitors( data, data.names() ) ;
    List res = visitors.subset(index, data.attr("class") ) ;

    if( is<GroupedDataFrame>(data) ){
        // so that all attributes are recalculated (indices ... )
        // see the lazyness feature in GroupedDataFrame
        // if we don't do that, we get the values of the un-arranged data
        // set for free from subset (#1064)
        res.attr("labels") = R_NilValue ;
        res.attr( "vars" )  = data.attr("vars" ) ;
        return GroupedDataFrame(res).data() ;
    }
    SET_ATTRIB(res, strip_group_attributes(res));
    return res ;
}


template <typename Data, typename Subsets>
SEXP summarise_grouped(const DataFrame& df, const LazyDots& dots){
    Data gdf(df) ;

    int nexpr = dots.size() ;
    int nvars = gdf.nvars() ;
    check_not_groups(dots, gdf);
    NamedListAccumulator<Data> accumulator ;

    int i=0;
    List results(nvars + nexpr) ;
    for( ; i<nvars; i++){
        results[i] = shared_SEXP(gdf.label(i)) ;
        accumulator.set( PRINTNAME(gdf.symbol(i)), results[i] ) ;
    }

    Subsets subsets(gdf) ;
    for( int k=0; k<nexpr; k++, i++ ){
        Rcpp::checkUserInterrupt() ;
        const Lazy& lazy = dots[k] ;
        const Environment& env = lazy.env() ;

        Shield<SEXP> expr_(lazy.expr()) ; SEXP expr = expr_ ;
        boost::scoped_ptr<Result> res( get_handler( expr, subsets, env ) );
        
        // if we could not find a direct Result
        // we can use a GroupedCallReducer which will callback to R
        if( !res ) {
            res.reset( new GroupedCallReducer<Data, Subsets>( lazy.expr(), subsets, env) );
        }
        RObject result = res->process(gdf)  ;
        results[i] = result ;
        accumulator.set( lazy.name(), result );
        subsets.input( lazy.name(), SummarisedVariable(result) ) ;

    }

    List out = accumulator ;
    copy_most_attributes( out, df) ;
    out.names() = accumulator.names() ;

    int nr = gdf.ngroups() ;
    set_rownames(out, nr ) ;

    if( gdf.nvars() > 1){
        out.attr( "class" ) = classes_grouped<Data>()  ;
        List vars = gdf.data().attr("vars") ;
        vars.erase( gdf.nvars() - 1) ;
        out.attr( "vars") = vars ;
        out.attr( "labels") = R_NilValue ;
        out.attr( "indices") = R_NilValue ;
        out.attr( "group_sizes") = R_NilValue ;
        out.attr( "biggest_group_size") = R_NilValue ;

        out.attr( "drop" ) = true ;
    } else {
        out.attr( "class" ) = classes_not_grouped()  ;
        SET_ATTRIB( out, strip_group_attributes(out) ) ;
    }

    return out ;
}


SEXP summarise_not_grouped(DataFrame df, const LazyDots& dots){
    int nexpr = dots.size() ;
    if( nexpr == 0) return DataFrame() ;

    LazySubsets subsets( df ) ;
    NamedListAccumulator<DataFrame> accumulator ;
    List results(nexpr) ;

    for( int i=0; i<nexpr; i++){
        Rcpp::checkUserInterrupt() ;

        const Lazy& lazy = dots[i] ;
        Environment env = lazy.env() ;
        Shield<SEXP> expr_(lazy.expr()) ; SEXP expr = expr_ ;
        boost::scoped_ptr<Result> res( get_handler( expr, subsets, env ) ) ;
        SEXP result ;
        if(res) {
            result = results[i] = res->process( FullDataFrame(df) ) ;
        } else {
            result = results[i] = CallProxy( lazy.expr(), subsets, env).eval() ;
        }
        if( Rf_length(result) != 1 ){
            stop( "expecting result of length one, got : %d", Rf_length(result) ) ;
        }
        accumulator.set(lazy.name(), result );
        subsets.input( lazy.name(), result ) ;
    }
    List data = accumulator ;
    copy_most_attributes(data, df) ;
    data.names() = accumulator.names() ;
    set_rownames(data, 1 ) ;
    return data ;
}

// [[Rcpp::export]]
SEXP summarise_impl( DataFrame df, LazyDots dots){
    if( df.size() == 0 ) return df ;
    check_valid_colnames(df) ;
    if( is<RowwiseDataFrame>(df) ){
        return summarise_grouped<RowwiseDataFrame, LazyRowwiseSubsets>( df, dots);
    } else if( is<GroupedDataFrame>( df ) ){
        return summarise_grouped<GroupedDataFrame, LazyGroupedSubsets>( df, dots);
    } else {
        return summarise_not_grouped( df, dots) ;
    }
}


// [[Rcpp::export]]
IntegerVector grouped_indices_grouped_df_impl( GroupedDataFrame gdf ){
    int n=gdf.nrows() ;
    IntegerVector res = no_init(n) ;
    int ngroups = gdf.ngroups() ;
    GroupedDataFrameIndexIterator it = gdf.group_begin() ;
    for(int i=0; i<ngroups; i++, ++it){
        SlicingIndex index = *it ;
        int n_index = index.size() ;
        for( int j=0; j<n_index; j++){
            res[ index[j] ] = i + 1 ;
        }
    }
    return res ;
}

// [[Rcpp::export]]
IntegerVector grouped_indices_impl( DataFrame data, ListOf<Symbol> symbols ){
    int nsymbols = symbols.size() ;
    if( nsymbols == 0 )
        return rep(1, data.nrows()) ;
    CharacterVector vars(nsymbols) ;
    for( int i=0; i<nsymbols; i++){
        vars[i] = PRINTNAME(symbols[i]) ;

        const char* name = vars[i] ;
        SEXP v  ;
        try{
            v = data[name] ;
        } catch(...){
            stop( "unknown column '%s'", name ) ;
        }
        if( !white_list(v) || TYPEOF(v) == VECSXP ){
            stop( "cannot group column %s, of class '%s'", name, get_single_class(v) ) ;
        }
    }

    DataFrameVisitors visitors(data, vars) ;
    ChunkIndexMap map( visitors ) ;
    int n = data.nrows() ;
    train_push_back( map, n ) ;

    DataFrame labels = DataFrameSubsetVisitors(data, vars).subset( map, "data.frame") ;
    IntegerVector labels_order = OrderVisitors(labels).apply() ;

    labels = DataFrameSubsetVisitors(labels).subset(labels_order, "data.frame" ) ;

    int ngroups = map.size() ;

    IntegerVector res = no_init(n) ;

    std::vector<const std::vector<int>* > chunks(ngroups) ;
    ChunkIndexMap::const_iterator it = map.begin() ;
    for( int i=0; i<ngroups; i++, ++it){
        chunks[i] = &it->second ;
    }

    for( int i=0; i<ngroups; i++){
        int idx = labels_order[i] ;
        const std::vector<int>& v = *chunks[idx] ;

        int n_index = v.size() ;
        for( int j=0; j<n_index; j++){
            res[ v[j] ] = i+1 ;
        }
    }

    return res ;
}


// [[Rcpp::export]]
SEXP distinct_impl( DataFrame df, CharacterVector vars, CharacterVector keep){
    if( df.size() == 0 )
        return df ;
    check_valid_colnames(df) ;
    if( !vars.size() ){
        vars = df.names() ;
    }
    DataFrameVisitors visitors(df, vars) ;

    std::vector<int> indices ;
    VisitorSetIndexSet<DataFrameVisitors> set(visitors) ;

    int n = df.nrows() ;
    for( int i=0; i<n; i++){
        if( set.insert(i).second ){
            indices.push_back(i) ;
        }
    }

    return DataFrameSubsetVisitors(df, keep).subset(indices, df.attr("class")) ;
}

namespace dplyr{

    inline bool is_bare_vector( SEXP x){
        SEXP att = ATTRIB(x) ;

        // only allow R_Names. as in R's do_isvector
        while( att != R_NilValue ){
            SEXP tag = TAG(att) ;
            if( !( tag == R_NamesSymbol || tag == Rf_install("comment") ) ) return false ;
            att = CDR(att) ;
        }

        return true ;
    }


    // -------------- (int,lgl)
    template <int LHS_RTYPE, int RHS_RTYPE>
    inline size_t hash_int_int( JoinVisitorImpl<LHS_RTYPE,RHS_RTYPE>& joiner, int i){
        return joiner.RHS_hash_fun( i>=0 ? joiner.left[i] : joiner.right[-i-1] ) ;
    }
    template <>
    inline size_t JoinVisitorImpl<INTSXP,LGLSXP>::hash( int i){
        return hash_int_int<INTSXP,LGLSXP>( *this, i) ;
    }
    template <>
    inline size_t JoinVisitorImpl<LGLSXP,INTSXP>::hash( int i){
        return hash_int_int<LGLSXP,INTSXP>( *this, i) ;
    }
    template <int LHS_RTYPE, int RHS_RTYPE>
    inline SEXP subset_join_int_int( JoinVisitorImpl<LHS_RTYPE,RHS_RTYPE>& joiner, const std::vector<int>& indices ){
        int n = indices.size() ;
        IntegerVector res = no_init(n) ;
        for( int i=0; i<n; i++) {
            int index = indices[i] ;
            if( index >= 0 ){
                res[i] = joiner.left[index] ;
            } else {
                res[i] = joiner.right[-index-1] ;
            }
        }
        return res ;
    }
    template <>
    inline SEXP JoinVisitorImpl<INTSXP,LGLSXP>::subset( const std::vector<int>& indices ){
        return subset_join_int_int<INTSXP,LGLSXP>( *this, indices ) ;
    }
    template <>
    inline SEXP JoinVisitorImpl<LGLSXP,INTSXP>::subset( const std::vector<int>& indices ){
        return subset_join_int_int<LGLSXP,INTSXP>( *this, indices ) ;
    }

    template <int LHS_RTYPE, int RHS_RTYPE>
    inline SEXP subset_join_int_int( JoinVisitorImpl<LHS_RTYPE,RHS_RTYPE>& joiner, const VisitorSetIndexSet<DataFrameJoinVisitors>& set ){
        int n = set.size() ;
        IntegerVector res = no_init(n) ;
        VisitorSetIndexSet<DataFrameJoinVisitors>::const_iterator it=set.begin() ;
        for( int i=0; i<n; i++, ++it) {
            int index = *it ;
            if( index >= 0 ){
                res[i] = joiner.left[index] ;
            } else {
                res[i] = joiner.right[-index-1] ;
            }
        }
        return res ;
    }
    template <>
    inline SEXP JoinVisitorImpl<INTSXP,LGLSXP>::subset( const VisitorSetIndexSet<DataFrameJoinVisitors>& set ){
        return subset_join_int_int<INTSXP,LGLSXP>( *this, set ) ;
    }
    template <>
    inline SEXP JoinVisitorImpl<LGLSXP,INTSXP>::subset( const VisitorSetIndexSet<DataFrameJoinVisitors>& set ){
        return subset_join_int_int<LGLSXP,INTSXP>( *this, set ) ;
    }


    // -------------- (int,double)
    template <int RTYPE>
    inline size_t hash_int_double( JoinVisitorImpl<RTYPE,REALSXP>& joiner, int i ){
        if( i>=0 ){
            int val = joiner.left[i] ;
            if( val == NA_INTEGER ) return joiner.RHS_hash_fun( NA_REAL );
            return joiner.RHS_hash_fun( (double)val );
        }
        return joiner.RHS_hash_fun( joiner.right[-i-1] ) ;
    }
    template <>
    inline size_t JoinVisitorImpl<INTSXP,REALSXP>::hash(int i){
        return  hash_int_double<INTSXP>( *this, i );
    }
    template <>
    inline size_t JoinVisitorImpl<LGLSXP,REALSXP>::hash(int i){
        return  hash_int_double<LGLSXP>( *this, i );
    }


    template <int RTYPE>
    inline SEXP subset_join_int_double( JoinVisitorImpl<RTYPE,REALSXP>& joiner, const std::vector<int>& indices ){
        int n = indices.size() ;
        NumericVector res = no_init(n) ;
        for( int i=0; i<n; i++) {
            int index = indices[i] ;
            if( index >= 0 ){
                res[i] = Rcpp::internal::r_coerce<INTSXP,REALSXP>( joiner.left[index] ) ;
            } else {
                res[i] = joiner.right[-index-1] ;
            }
        }
        return res ;
    }
    template <>
    inline SEXP JoinVisitorImpl<INTSXP,REALSXP>::subset( const std::vector<int>& indices ){
        return subset_join_int_double<INTSXP>( *this, indices ) ;
    }
    template <>
    inline SEXP JoinVisitorImpl<LGLSXP,REALSXP>::subset( const std::vector<int>& indices ){
        return subset_join_int_double<LGLSXP>( *this, indices ) ;
    }


    template <int RTYPE>
    inline SEXP subset_join_int_double( JoinVisitorImpl<RTYPE,REALSXP>& joiner, const VisitorSetIndexSet<DataFrameJoinVisitors>& set ){
        int n = set.size() ;
        NumericVector res = no_init(n) ;
        VisitorSetIndexSet<DataFrameJoinVisitors>::const_iterator it=set.begin() ;
        for( int i=0; i<n; i++, ++it) {
            int index = *it ;
            if( index >= 0){
                res[i] = Rcpp::internal::r_coerce<INTSXP,REALSXP>( joiner.left[index] ) ;
            } else {
                res[i] = joiner.right[-index-1] ;
            }
        }
        return res ;
    }
    template <>
    inline SEXP JoinVisitorImpl<INTSXP,REALSXP>::subset( const VisitorSetIndexSet<DataFrameJoinVisitors>& set ){
        return  subset_join_int_double<INTSXP>(*this, set );
    }
    template <>
    inline SEXP JoinVisitorImpl<LGLSXP,REALSXP>::subset( const VisitorSetIndexSet<DataFrameJoinVisitors>& set ){
        return  subset_join_int_double<LGLSXP>(*this, set );
    }

    // -------------- (double,int)
    template <int RTYPE>
    inline size_t hash_double_int( JoinVisitorImpl<REALSXP,RTYPE>& joiner, int i ){
        // if(i < 0) we need to take data in right
        if( i<0 ){
            int val = joiner.right[-i-1] ;
            if( val == NA_INTEGER ) return joiner.LHS_hash_fun( NA_REAL );
            return joiner.LHS_hash_fun( (double)val );
        }
        // otherwise take data in left
        return joiner.LHS_hash_fun( joiner.left[i] ) ;
    }
    template <>
    inline size_t JoinVisitorImpl<REALSXP,INTSXP>::hash(int i){
        size_t res = hash_double_int<INTSXP>( *this, i );
        return res ;
    }
    template <>
    inline size_t JoinVisitorImpl<REALSXP,LGLSXP>::hash(int i){
        return  hash_double_int<LGLSXP>( *this, i );
    }


    template <int RTYPE>
    inline SEXP subset_join_double_int( JoinVisitorImpl<REALSXP,RTYPE>& joiner, const std::vector<int>& indices ){
        int n = indices.size() ;
        NumericVector res = no_init(n) ;
        for( int i=0; i<n; i++) {
            int index = indices[i] ;
            if( index < 0 ){
                res[i] = Rcpp::internal::r_coerce<INTSXP,REALSXP>( joiner.right[-index-1] ) ;
            } else {
                res[i] = joiner.left[index] ;
            }
        }
        return res ;
    }
    template <>
    inline SEXP JoinVisitorImpl<REALSXP,INTSXP>::subset( const std::vector<int>& indices ){
        return subset_join_double_int<INTSXP>( *this, indices ) ;
    }
    template <>
    inline SEXP JoinVisitorImpl<REALSXP,LGLSXP>::subset( const std::vector<int>& indices ){
        return subset_join_double_int<LGLSXP>( *this, indices ) ;
    }


    template <int RTYPE>
    inline SEXP subset_join_double_int( JoinVisitorImpl<REALSXP,RTYPE>& joiner, const VisitorSetIndexSet<DataFrameJoinVisitors>& set ){
        int n = set.size() ;
        NumericVector res = no_init(n) ;
        VisitorSetIndexSet<DataFrameJoinVisitors>::const_iterator it=set.begin() ;
        for( int i=0; i<n; i++, ++it) {
            int index = *it ;
            if( index < 0){
                res[i] = Rcpp::internal::r_coerce<INTSXP,REALSXP>( joiner.right[-index-1] ) ;
            } else {
                res[i] = joiner.left[index] ;
            }
        }
        return res ;
    }
    template <>
    inline SEXP JoinVisitorImpl<REALSXP,INTSXP>::subset( const VisitorSetIndexSet<DataFrameJoinVisitors>& set ){
        return  subset_join_double_int<INTSXP>(*this, set );
    }
    template <>
    inline SEXP JoinVisitorImpl<REALSXP,LGLSXP>::subset( const VisitorSetIndexSet<DataFrameJoinVisitors>& set ){
        return  subset_join_double_int<LGLSXP>(*this, set );
    }



    // -----------------
    inline void incompatible_join_visitor(SEXP left, SEXP right, const std::string& name_left, const std::string& name_right) {
        stop( "Can't join on '%s' x '%s' because of incompatible types (%s / %s)",
            name_left, name_right, get_single_class(left), get_single_class(right)
        ) ;
    }

    JoinVisitor* join_visitor( SEXP left, SEXP right, const std::string& name_left, const std::string& name_right, bool warn_ ){
        // handle Date separately
        bool lhs_date = Rf_inherits( left, "Date") ;
        bool rhs_date = Rf_inherits( right, "Date") ;

        switch( lhs_date + rhs_date ){
          case 2: return new DateJoinVisitor( left, right ) ;
          case 1: stop( "cannot join a Date object with an object that is not a Date object" ) ;
          case 0: break ;
          default: break ;
        }

        bool lhs_time = Rf_inherits( left, "POSIXct" );
        bool rhs_time = Rf_inherits( right, "POSIXct" );
        switch( lhs_time + rhs_time ){
          case 2: return new POSIXctJoinVisitor( left, right) ;
          case 1: stop( "cannot join a POSIXct object with an object that is not a POSIXct object" ) ;
          case 0: break;
          default: break ;
        }

        switch( TYPEOF(left) ){
            case CPLXSXP:
                {
                    switch( TYPEOF(right) ){
                    case CPLXSXP: return new JoinVisitorImpl<CPLXSXP, CPLXSXP>( left, right ) ;
                    default:
                        break ;
                    }
                    break ;
                }
            case INTSXP:
                {
                    bool lhs_factor = Rf_inherits( left, "factor" ) ;
                    switch( TYPEOF(right) ){
                        case INTSXP:
                            {
                                bool rhs_factor = Rf_inherits( right, "factor" ) ;
                                if( lhs_factor && rhs_factor){
                                    if( same_levels(left, right) ){
                                        return new JoinFactorFactorVisitor_SameLevels(left, right) ;
                                    } else {
                                        if(warn_) Rf_warning( "joining factors with different levels, coercing to character vector" );
                                        return new JoinFactorFactorVisitor(left, right) ;
                                    }
                                } else if( !lhs_factor && !rhs_factor) {
                                    return new JoinVisitorImpl<INTSXP, INTSXP>( left, right ) ;
                                }
                                break ;
                            }
                        case REALSXP:
                            {
                                if( lhs_factor ){
                                    incompatible_join_visitor(left, right, name_left, name_right) ;
                                } else if( is_bare_vector(right) ) {
                                    return new JoinVisitorImpl<INTSXP, REALSXP>( left, right) ;
                                } else {
                                    incompatible_join_visitor(left, right, name_left, name_right) ;
                                }
                                break ;
                                // what else: perhaps we can have INTSXP which is a Date and REALSXP which is a Date too ?
                            }
                        case LGLSXP:
                            {
                                if( lhs_factor ){
                                    incompatible_join_visitor(left, right, name_left, name_right) ;
                                } else {
                                    return new JoinVisitorImpl<INTSXP, LGLSXP>( left, right) ;
                                }
                                break ;
                            }
                        case STRSXP:
                            {
                                if( lhs_factor ){
                                    if(warn_) Rf_warning( "joining factor and character vector, coercing into character vector" ) ;
                                    return new JoinFactorStringVisitor( left, right );
                                }
                            }
                        default: break ;
                    }
                    break ;
                }
            case REALSXP:
                {

                    switch( TYPEOF(right) ){
                    case REALSXP:
                        {
                            if( is_bare_vector( right ) ){
                                return new JoinVisitorImpl<REALSXP, REALSXP>( left, right) ;
                            }

                            break ;
                        }
                    case INTSXP:
                        {
                            if( is_bare_vector(right) ){
                                return new JoinVisitorImpl<REALSXP, INTSXP>( left, right) ;
                            }
                        }
                    default: break ;
                    }

                }
            case LGLSXP:
                {
                    switch( TYPEOF(right) ){
                    case LGLSXP:
                        {
                            return new JoinVisitorImpl<LGLSXP,LGLSXP> ( left, right ) ;
                        }
                    case INTSXP:
                        {
                            if( is_bare_vector(right) ){
                                return new JoinVisitorImpl<LGLSXP, INTSXP>( left, right ) ;
                            }
                            break ;
                        }
                    case REALSXP:
                        {
                            if( is_bare_vector(right) ){
                                return new JoinVisitorImpl<LGLSXP, REALSXP>( left, right ) ;
                            }
                        }
                    default: break ;
                    }
                    break ;
                }
            case STRSXP:
                {
                    switch( TYPEOF(right) ){
                    case INTSXP:
                        {
                            if( Rf_inherits(right, "factor" ) ){
                                if(warn_) Rf_warning( "joining character vector and factor, coercing into character vector" ) ;
                                return new JoinStringFactorVisitor( left, right ) ;
                            }
                            break ;
                        }
                    case STRSXP:
                        {
                            return new JoinStringStringVisitor( left, right ) ;
                        }
                    default: break ;
                    }
                    break ;
                }
            default: break ;
        }

        incompatible_join_visitor(left, right, name_left, name_right) ;
        return 0 ;
    }

}

//' Cumulativate versions of any, all, and mean
//'
//' dplyr adds \code{cumall}, \code{cumany}, and \code{cummean} to complete
//' R's set of cumulate functions to match the aggregation functions available
//' in most databases
//'
//' @param x For \code{cumall} & \code{cumany}, a logical vector; for
//'   \code{cummean} an integer or numeric vector
//' @export
// [[Rcpp::export]]
LogicalVector cumall(LogicalVector x) {
  int n = x.length();
  LogicalVector out(n, NA_LOGICAL);

  int current = out[0] = x[0];
  if( current == NA_LOGICAL) return out ;
  if( current == FALSE){
    std::fill( out.begin(), out.end(), FALSE ) ;
    return out ;
  }
  for (int i = 1; i < n; i++) {
    current = x[i] ;
    if( current == NA_LOGICAL ) break ;
    if( current == FALSE ){
      std::fill( out.begin() + i, out.end(), FALSE ) ;
      break ;
    }
    out[i] = current && out[i - 1];
  }
  return out;
}

//' @export
//' @rdname cumall
// [[Rcpp::export]]
LogicalVector cumany(LogicalVector x) {
  int n = x.length();
  LogicalVector out(n, NA_LOGICAL);

  int current = out[0] = x[0];
  if( current == NA_LOGICAL ) return out ;
  if( current == TRUE ){
    std::fill( out.begin(), out.end(), TRUE ) ;
    return out ;
  }
  for (int i = 1; i < n; i++) {
    current = x[i] ;
    if( current == NA_LOGICAL ) break ;
    if( current == TRUE ){
      std::fill( out.begin() + i, out.end(), TRUE ) ;
      break ;
    }
    out[i] = current || out[i - 1];
  }

  return out;
}

//' @export
//' @rdname cumall
// [[Rcpp::export]]
NumericVector cummean(NumericVector x) {
  int n = x.length();
  NumericVector out = no_init(n);

  double sum = out[0] = x[0];
  for (int i = 1; i < n; i++ ) {
    sum += x[i];
    out[i] = sum / (i + 1.0);
  }

  return out;
}

int vector_sign(IntegerVector x) {
  bool pos = false, neg = false;

  int n = x.size();
  for (int i = 0; i < n; ++i) {
    if (x[i] < 0) neg = true;
    if (x[i] > 0) pos = true;

    if (neg && pos) break;
  }

  if (neg == pos) {
    // Either mixed, or all zeros
    return 0;
  } else if (neg) {
    return -1;
  } else {
    return 1;
  }
}

class VarList {

  std::vector<int> out_indx;
  std::vector<String> out_name;

  int find(int i) {
    std::vector<int>::iterator pos = std::find(out_indx.begin(), out_indx.end(), i);
    if (pos == out_indx.end()) {
      return -1;
    } else {
      return pos - out_indx.begin();
    }
  }

public:
  VarList(int n) : out_indx(), out_name() {
    out_indx.reserve(n);
    out_name.reserve(n);
  }

  bool has(int i) {
    return find(i) != -1;
  }

  void add(int i, String name) {
    out_indx.push_back(i);
    out_name.push_back(name);
  }
  void remove(int i) {
    int pos = find(i);
    if (pos == -1) return;

    out_indx.erase(out_indx.begin() + pos);
    out_name.erase(out_name.begin() + pos);
  }
  void update(int i, String name) {
    int pos = find(i);
    if (pos == -1) {
      add(i, name);
    } else {
      out_name[pos] = name;
    }
  }

  operator SEXP() {
    IntegerVector out(out_indx.begin(), out_indx.end());
    CharacterVector out_names(out_name.begin(), out_name.end());
    out.names() = out_names;
    
    return out;
  }
};

// [[Rcpp::export]]
SEXP combine_vars(CharacterVector vars, ListOf<IntegerVector> xs) {
  VarList selected(vars.size());
  if (xs.size() == 0)
    return IntegerVector::create();

  // Workaround bug in ListOf<>; can't access attributes
  SEXP raw_names = Rf_getAttrib(xs, Rf_mkString("names"));
  CharacterVector xs_names;
  if (raw_names == R_NilValue) {
    xs_names = CharacterVector(xs.size(), "" );
  } else {
    xs_names = raw_names ;
  }
  
  // If first component is negative, pre-fill with existing vars
  if (vector_sign(xs[0]) == -1) {
    for (int j = 0; j < vars.size(); ++j) {
      selected.add(j + 1, vars[j]);
    }
  }

  for (int i = 0; i < xs.size(); ++i) {
    IntegerVector x = xs[i];
    if (x.size() == 0) continue;

    int sign = vector_sign(x);

    if (sign == 0)
      stop("Each argument must yield either positive or negative integers");

    if (sign == 1) {
      bool group_named = xs_names[i] != "";
      bool has_names = x.attr("names") != R_NilValue;
      if (group_named) {
        if (x.size() == 1) {
          selected.update(x[0], xs_names[i]);
        } else {
          // If the group is named, children are numbered sequentially
          for (int j = 0; j < x.size(); ++j) {
            std::stringstream out;
            out << xs_names[i] << j + 1;
            selected.update(x[j], out.str());
          }
        }
      } else if (has_names) {
        CharacterVector names = x.names() ;
        for (int j = 0; j < x.size(); ++j) {
          selected.update(x[j], names[j]);
        }
      } else {
        for (int j = 0; j < x.size(); ++j) {
          int pos = x[j];
          if (pos < 1 || pos > vars.size())
            stop("Position must be between 0 and n");

          // Add default name, if not all ready present
          if (!selected.has(pos))
            selected.update(pos, vars[pos - 1]);
        }
      }
    } else {
      for (int j = 0; j < x.size(); ++j) {
        selected.remove(-x[j]);
      }
    }
  }

  return selected;
}



class DataFrameAbleVector {
public:

  DataFrameAbleVector() : data(){}

  inline void push_back( SEXP x) {
    data.push_back( DataFrameAble(x) ) ;
  }

  inline const DataFrameAble& operator[]( int i) const {
    return data[i] ;
  }

  inline int size() const {
    return data.size() ;
  }

  ~DataFrameAbleVector(){
    while (data.size()) data.pop_back();
  }

private:
  std::vector<DataFrameAble> data ;
} ;

template <typename Dots>
List rbind__impl( Dots dots, SEXP id = R_NilValue ){
    int ndata = dots.size() ;
    int n = 0 ;
    DataFrameAbleVector chunks ;
    std::vector<int> df_nrows ;

    int k=0 ;
    for( int i=0; i<ndata; i++) {
      SEXP obj = dots[i] ;
      if( Rf_isNull(obj) ) continue ;
      chunks.push_back( obj ) ;
      int nrows = chunks[k].nrows() ;
      df_nrows.push_back(nrows) ;
      n += nrows ;
      k++ ;
    }
    ndata = chunks.size() ;
    pointer_vector<Collecter> columns ;

    std::vector<String> names ;

    k=0 ;
    Function enc2native( "enc2native" ) ;
    for( int i=0; i<ndata; i++){
        Rcpp::checkUserInterrupt() ;

        const DataFrameAble& df = chunks[i] ;
        if( !df.size() ) continue ;

        int nrows = df.nrows() ;

        CharacterVector df_names = enc2native(df.names()) ;
        for( int j=0; j<df.size(); j++){
            SEXP source = df.get(j) ;
            String name = df_names[j] ;

            Collecter* coll = 0;
            size_t index = 0 ;
            for( ; index < names.size(); index++){
                if( name == names[index] ){
                    coll = columns[index] ;
                    break ;
                }
            }
            if( ! coll ){
                coll = collecter( source, n ) ;
                columns.push_back( coll );
                names.push_back(name) ;
            }

            if( coll->compatible(source) ){
                // if the current source is compatible, collect
                coll->collect( SlicingIndex( k, nrows), source ) ;

            } else if( coll->can_promote(source) ) {
                // setup a new Collecter
                Collecter* new_collecter = promote_collecter(source, n, coll ) ;

                // import data from this chunk
                new_collecter->collect( SlicingIndex( k, nrows), source ) ;

                // import data from previous collecter
                new_collecter->collect( SlicingIndex(0, k), coll->get() ) ;

                // dispose the previous collecter and keep the new one.
                delete coll ;
                columns[index] = new_collecter ;

            } else if( all_na(source) ) {
                // do nothing, the collecter already initialized data with the
                // right NA
            } else if( coll->is_logical_all_na()  ) {
                Collecter* new_collecter = collecter( source, n ) ;
                new_collecter->collect( SlicingIndex(k, nrows), source ) ;
                delete coll ;
                columns[index] = new_collecter ;
            } else {
                std::string column_name(name) ;
                stop( "incompatible type (data index: %d, column: '%s', was collecting: %s (%s), incompatible with data of type: %s",
                    (i+1), column_name, coll->describe(), DEMANGLE(*coll), get_single_class(source) );

            }

        }

        k += nrows ;
    }

    int nc = columns.size() ;
    int has_id = Rf_isNull(id) ? 0 : 1;

    List out(nc + has_id) ;
    CharacterVector out_names(nc + has_id) ;
    for( int i=0; i<nc; i++){
        out[i + has_id] = columns[i]->get() ;
        out_names[i + has_id] = names[i] ;
    }

    // Add vector of identifiers if .id is supplied
    if (!Rf_isNull(id)) {
      CharacterVector df_names = dots.names() ;
      CharacterVector id_col = no_init(n) ;

      CharacterVector::iterator it = id_col.begin() ;
      for (int i=0; i<ndata; ++i) {
        std::fill( it, it + df_nrows[i], df_names[i] ) ;
        it += df_nrows[i] ;
      }
      out[0] = id_col ;
      out_names[0] = Rcpp::as<std::string>(id) ;
    }
    out.attr( "names" ) = out_names ;
    set_rownames( out, n ) ;

    // infer the classes and extra info (groups, etc ) from the first (#1692)
    if( ndata ){
      const DataFrameAble& first = chunks[0] ;
      if( first.is_dataframe() ){
        DataFrame df = first.get() ;
        out.attr("class") = df.attr("class") ;
        if( df.inherits("grouped_df") ){
          out.attr("vars") = df.attr("vars") ;
          out = GroupedDataFrame(out).data() ;
        }
      } else {
        out.attr( "class" ) = classes_not_grouped() ;
      }
    } else {
      out.attr( "class" ) = classes_not_grouped() ;
    }

    return out ;
}

// [[Rcpp::export]]
List bind_rows_( List dots, SEXP id = R_NilValue ){
    return rbind__impl(dots, id) ;
}

// [[Rcpp::export]]
List rbind_list__impl( Dots dots ){
    return rbind__impl(dots) ;
}

template <typename Dots>
List cbind__impl( Dots dots ){
  int n = dots.size() ;

  DataFrameAbleVector chunks ;
  for( int i=0; i<n; i++) {
    SEXP obj = dots[i] ;
    if( !Rf_isNull(obj) )
      chunks.push_back( dots[i] );
  }
  n = chunks.size() ;

  // first check that the number of rows is the same
  const DataFrameAble& df = chunks[0] ;
  int nrows = df.nrows() ;
  int nv = df.size() ;
  for( int i=1; i<n; i++){
    const DataFrameAble& current = chunks[i] ;
    if( current.nrows() != nrows ){
      stop( "incompatible number of rows (%d, expecting %d)", current.nrows(), nrows ) ;
    }
    nv += current.size() ;
  }

  // collect columns
  List out(nv) ;
  CharacterVector out_names(nv) ;

  // then do the subsequent dfs
  for( int i=0, k=0 ; i<n; i++){
      Rcpp::checkUserInterrupt() ;

      const DataFrameAble& current = chunks[i] ;
      CharacterVector current_names = current.names() ;
      int nc = current.size() ;
      for( int j=0; j<nc; j++, k++){
          out[k] = shared_SEXP(current.get(j)) ;
          out_names[k] = current_names[j] ;
      }
  }

  // infer the classes and extra info (groups, etc ) from the first (#1692)
  if( n ){
    const DataFrameAble& first = chunks[0] ;
    if( first.is_dataframe() ){
      DataFrame df = first.get() ;
      copy_most_attributes(out, df) ;
    } else {
      out.attr( "class" ) = classes_not_grouped() ;
    }
  } else {
    out.attr( "class" ) = classes_not_grouped() ;
  }
  out.names() = out_names ;
  set_rownames( out, nrows ) ;

  return out ;
}

// [[Rcpp::export]]
List cbind_all( List dots ){
    return cbind__impl( dots ) ;
}

// [[Rcpp::export]]
SEXP combine_all( List data ){
    int nv = data.size() ;
    if( nv == 0 ) stop("combine_all needs at least one vector") ;

    // get the size of the output
    int n = 0 ;
    for( int i=0; i<nv; i++){
        n += Rf_length(data[i]) ;
    }

    // go to the first non NULL
    int i=0;
    for( ; i<nv; i++){
      if( !Rf_isNull(data[i]) ) break ;
    }
    if( i == nv) stop( "no data to combine, all elements are NULL" ) ;

    // collect
    boost::scoped_ptr<Collecter> coll( collecter( data[i], n ) ) ;
    int k = Rf_length(data[i]) ;
    coll->collect( SlicingIndex(0, k), data[i] ) ;
    i++;

    for(; i<nv; i++){
        SEXP current = data[i] ;
        if( Rf_isNull(current)) continue ;
        int n_current= Rf_length(current) ;
        if( coll->compatible(current) ){
            coll->collect( SlicingIndex(k, n_current), current ) ;
        } else if( coll->can_promote(current) ) {
            Collecter* new_coll = promote_collecter(current, n, coll.get() ) ;
            new_coll->collect( SlicingIndex(k, n_current), current ) ;
            new_coll->collect( SlicingIndex(0, k), coll->get() ) ;
            coll.reset( new_coll ) ;
        } else {
            stop( "incompatible type at index %d : %s, was collecting : %s",
                (i+1), get_single_class(current), get_single_class(coll->get()) ) ;
        }
        k += n_current ;
    }

    return coll->get() ;
}

