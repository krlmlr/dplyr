# tglkmeans (0.6.1)

* GitHub: <https://github.com/tanaylab/tglkmeans>
* Email: <mailto:aviezer.lifshitz@weizmann.ac.il>
* GitHub mirror: <https://github.com/cran/tglkmeans>

Run `revdepcheck::revdep_details(, "tglkmeans")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        2. └─tibble::column_to_rownames(., "id")
        3.   └─tibble:::abort_already_has_rownames()
        4.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        5.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Failure ('test-clustering.R:118:5'): non tidy version works ─────────────────
       Expected `res_tidy$centers %>% select(starts_with("V")) %>% as.matrix()` to equal `res$centers`.
       Differences:
       `dimnames(actual)[[1]]` is a character vector ('1', '2', '3', '4', '5', ...)
       `dimnames(expected)[[1]]` is NULL
       
       ── Error ('test-clustering.R:146:5'): add_to_data works ────────────────────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., "id")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─... %>% tibble::column_to_rownames("id") at test-clustering.R:146:5
        2. └─tibble::column_to_rownames(., "id")
        3.   └─tibble:::abort_already_has_rownames()
        4.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        5.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 3 | WARN 0 | SKIP 6 | PASS 253 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

