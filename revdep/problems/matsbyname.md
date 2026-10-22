# matsbyname (0.6.15)

* GitHub: <https://github.com/MatthewHeun/matsbyname>
* Email: <mailto:matthew.heun@me.com>
* GitHub mirror: <https://github.com/cran/matsbyname>

Run `revdepcheck::revdep_details(, "matsbyname")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     +             dimnames = list(c("p1", "p2"), c("i1", "i2"))) %>% 
     +   setrowtype("Products") %>% setcoltype("Industries")
     > m
        i1 i2
     p1  1  5
     p2  4  5
     attr(,"rowtype")
     [1] "Products"
     attr(,"coltype")
     [1] "Industries"
     > vectorize_byname(m, notation = RCLabels::arrow_notation)
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─matsbyname::vectorize_byname(m, notation = RCLabels::arrow_notation)
      2. │ └─matsbyname::unaryapply_byname(...)
      3. │   ├─base::do.call(FUN, c(list(a), lFUNdots))
      4. │   └─matsbyname (local) `<fn>`(`<dbl[,2]>`, notation = `<chr>`)
      5. │     └─... %>% tibble::column_to_rownames("vec_rowname")
      6. └─tibble::column_to_rownames(., "vec_rowname")
      7.   └─tibble:::abort_already_has_rownames()
      8.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      9.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        4. │   └─matsbyname (local) `<fn>`(`<dgeMatrx[,2]>`, notation = `<chr>`)
        5. │     └─... %>% tibble::column_to_rownames("vec_rowname")
        6. └─tibble::column_to_rownames(., "vec_rowname")
        7.   └─tibble:::abort_already_has_rownames()
        8.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        9.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Error ('test-Unary.R:1062:3'): vectorize_byname() and matricize_byname() are inverses of each other ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., "vec_rowname")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─matsbyname::vectorize_byname(m1, notation = RCLabels::arrow_notation) at test-Unary.R:1062:3
        2. │ └─matsbyname::unaryapply_byname(...)
        3. │   ├─base::do.call(FUN, c(list(a), lFUNdots))
        4. │   └─matsbyname (local) `<fn>`(`<dbl[,2]>`, notation = `<chr>`)
        5. │     └─... %>% tibble::column_to_rownames("vec_rowname")
        6. └─tibble::column_to_rownames(., "vec_rowname")
        7.   └─tibble:::abort_already_has_rownames()
        8.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        9.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 4 | WARN 0 | SKIP 1 | PASS 2212 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     <error/rlang_error>
     Error:
     ! GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     ---
     Backtrace:
         ▆
      1. ├─base::withVisible(knit_print(x, ...))
      2. ├─knitr::knit_print(x, ...)
      3. └─rmarkdown:::knit_print.data.frame(x, ...)
      4.   ├─context$df_print(x)
      5.   └─base::print.data.frame(x)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'matsbyname.Rmd' failed with diagnostics:
     GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘matsbyname.Rmd’
     
     --- re-building ‘using-summarise-in-matsbyname.Rmd’ using rmarkdown
     --- finished re-building ‘using-summarise-in-matsbyname.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘matsbyname.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

