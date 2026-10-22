# sov (2.0.0)

* GitHub: <https://github.com/spatial-voting-lab/sov>
* Email: <mailto:emma.bibina@uga.edu>
* GitHub mirror: <https://github.com/cran/sov>

Run `revdepcheck::revdep_details(, "sov")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
           ▆
        1. ├─sov::vs_sov(...) at test_vs_sov.R:39:3
        2. │ └─sov:::isolate.ideals(type, estimates, W)
        3. │   └─df_wide %>% dplyr::select(-theta) %>% ...
        4. └─tibble::column_to_rownames(., "group")
        5.   └─tibble:::abort_already_has_rownames()
        6.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        7.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Error ('test_vs_sov.R:64:3'): vs_sov (MCMC, 1D) handles zero midpoint by defaulting normal to +e1 and finds pivot ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `column_to_rownames(., "group")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─sov::vs_sov(...) at test_vs_sov.R:64:3
        2. │ └─sov:::isolate.ideals(type, estimates, W)
        3. │   └─df_wide %>% dplyr::select(-theta) %>% ...
        4. └─tibble::column_to_rownames(., "group")
        5.   └─tibble:::abort_already_has_rownames()
        6.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        7.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 7 | WARN 0 | SKIP 3 | PASS 439 ]
       Error:
       ! Test failures.
       Execution halted
     ```

