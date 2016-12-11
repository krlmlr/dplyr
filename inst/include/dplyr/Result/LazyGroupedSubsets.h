#ifndef dplyr_LazyGroupedSubsets_H
#define dplyr_LazyGroupedSubsets_H

#include <tools/SymbolMap.h>

#include <dplyr/GroupedDataFrame.h>
#include <dplyr/SummarisedVariable.h>

#include <dplyr/Result/GroupedSubset.h>
#include <dplyr/Result/ILazySubsets.h>

namespace dplyr {

  class LazyGroupedSubsets : public ILazySubsets {
  public:
    LazyGroupedSubsets(const GroupedDataFrame& gdf_) :
      gdf(gdf_),
      subsets(),
      symbol_map(),
      resolved(),
      owner(true)
    {
      const DataFrame& data = gdf.data();
      CharacterVector names = data.names();
      int n = data.size();
      LOG_INFO << "processing " << n << " vars: " << names;
      for (int i=0; i<n; i++) {
        input(names[i], data[i]);
      }
    }

    LazyGroupedSubsets(const LazyGroupedSubsets& other) :
      gdf(other.gdf),
      subsets(other.subsets),
      symbol_map(other.symbol_map),
      resolved(other.resolved),
      owner(false)
    {}

    virtual ~LazyGroupedSubsets() {
      if (owner) {
        for (size_t i=0; i<subsets.size(); i++) {
          delete subsets[i];
        }
      }
    }

  public:
    virtual CharacterVector get_variable_names() const {
      return symbol_map.get_names();
    }

    virtual SEXP get_variable(SEXP symbol) const {
      return subsets[symbol_map.get(symbol)]->get_variable();
    }

    virtual bool is_summary(SEXP symbol) const {
      return subsets[symbol_map.get(symbol)]->is_summary();
    }

    virtual int count(SEXP head) const {
      int res = symbol_map.has(head);
      return res;
    }

    virtual void input(SEXP symbol, SEXP x) {
      input_subset(symbol, grouped_subset(x, gdf.max_group_size()));
    }

    virtual int size() const {
      return subsets.size();
    }

    virtual int nrows() const {
      return gdf.nrows();
    }

  public:
    void clear() {
      for (size_t i=0; i<resolved.size(); i++) {
        resolved[i] = R_NilValue;
      }
    }

    SEXP get(SEXP symbol, const SlicingIndex& indices) {
      int idx = symbol_map.get(symbol);

      SEXP value = resolved[idx];
      if (value == R_NilValue) {
        resolved[idx] = value = subsets[idx]->get(indices);
      }
      return value;
    }

    void input_summarised(SEXP symbol, SummarisedVariable x) {
      input_subset(symbol, summarised_subset(x));
    }

  private:
    const GroupedDataFrame& gdf;
    std::vector<GroupedSubset*> subsets;
    SymbolMap symbol_map;
    std::vector<SEXP> resolved;

    bool owner;

    void input_subset(const Symbol& symbol, GroupedSubset* sub) {
      SymbolMapIndex index = symbol_map.insert(symbol);
      if (index.origin == NEW) {
        subsets.push_back(sub);
        resolved.push_back(R_NilValue);
      } else {
        int idx = index.pos;
        delete subsets[idx];
        subsets[idx] = sub;
        resolved[idx] = R_NilValue;
      }
    }
  };

}
#endif
