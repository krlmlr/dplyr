# bml (0.9.0)

* GitHub: <https://github.com/benrosche/bml>
* Email: <mailto:benrosche@nyu.edu>
* GitHub mirror: <https://github.com/cran/bml>

Run `revdepcheck::revdep_details(, "bml")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Error in `tibble::column_to_rownames(., var = "name")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─bml:::formatJags(...) at test-formatJags.R:439:3
        2. │ └─... %>% tibble::column_to_rownames(var = "name")
        3. └─tibble::column_to_rownames(., var = "name")
        4.   └─tibble:::abort_already_has_rownames()
        5.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        6.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Error ('test-formatJags.R:474:3'): formatJags() handles fixed main-level variables ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., var = "name")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─bml:::formatJags(...) at test-formatJags.R:474:3
        2. │ └─... %>% tibble::column_to_rownames(var = "name")
        3. └─tibble::column_to_rownames(., var = "name")
        4.   └─tibble:::abort_already_has_rownames()
        5.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        6.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 11 | WARN 1 | SKIP 15 | PASS 404 ]
       Error:
       ! Test failures.
       Execution halted
     ```

