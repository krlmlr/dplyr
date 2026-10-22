# iNEXT.beta3D (1.0.2)

* GitHub: <https://github.com/AnneChao/iNEXT.beta3D>
* Email: <mailto:chao@stat.nthu.edu.tw>
* GitHub mirror: <https://github.com/cran/iNEXT.beta3D>

Run `revdepcheck::revdep_details(, "iNEXT.beta3D")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     3   Marim Pooled assemblage 302   119 0.8550489 0.9691303 44 34 17  9  7
     4   Marim  Joint assemblage 302   164 0.6962636 0.8756356 92 41 15  9  1
     5  Rebio2              Edge 162    70 0.7543832 0.8953373 40 17  4  2  0
     6  Rebio2          Interior 168    74 0.7628279 0.8765096 40 13  8  4  4
     7  Rebio2 Pooled assemblage 330   118 0.8185128 0.9005247 60 18 15  5  3
     8  Rebio2  Joint assemblage 330   144 0.7581271 0.8859099 80 30 12  6  4
     > 
     > 
     > ## (Data Information) Taxonomic diversity for incidence data
     > data(Second_growth_forests)
     > info_TD_inci = DataInfobeta3D(data = Second_growth_forests, diversity = 'TD',
     +                               datatype = 'incidence_raw')
     Error in `column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─iNEXT.beta3D::DataInfobeta3D(...)
      2. │ └─base::lapply(...)
      3. │   └─iNEXT.beta3D (local) FUN(X[[i]], ...)
      4. │     └─tmp1 %>% column_to_rownames(var = "Species")
      5. └─tibble::column_to_rownames(., var = "Species")
      6.   └─tibble:::abort_already_has_rownames()
      7.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      8.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       > library(iNEXT.beta3D)
       > 
       > test_check("iNEXT.beta3D")
       Saving _problems/test-iNEXT.beta3D-33.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 10 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-iNEXT.beta3D.R:31:3'): iNEXTbeta3D ─────────────────────────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `column_to_rownames(.)`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─iNEXT.beta3D::iNEXTbeta3D(...) at test-iNEXT.beta3D.R:31:3
        2. │ └─pool.data %>% column_to_rownames() %>% rowSums
        3. ├─base::rowSums(.)
        4. │ └─base::is.data.frame(x)
        5. └─tibble::column_to_rownames(.)
        6.   └─tibble:::abort_already_has_rownames()
        7.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        8.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 10 ]
       Error:
       ! Test failures.
       Execution halted
     ```

