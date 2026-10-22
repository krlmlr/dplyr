# SCpubr (3.0.1)

* GitHub: <https://github.com/enblacar/SCpubr>
* Email: <mailto:scpubr@gmail.com>
* GitHub mirror: <https://github.com/cran/SCpubr>

Run `revdepcheck::revdep_details(, "SCpubr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        4. ├─base::as.matrix(.)
        5. ├─base::as.data.frame(.)
        6. └─tibble::column_to_rownames(., var = "cell")
        7.   └─tibble:::abort_already_has_rownames()
        8.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        9.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Error ('test-do_SCExpressionHeatmap.R:5:5'): do_SCExpressionHeatmap: CRAN essentials ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., var = "cell")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─SCpubr::do_SCExpressionHeatmap(sample = sample, features = rownames(sample)[1:5]) at test-do_SCExpressionHeatmap.R:5:5
        2. │ └─... %>% t()
        3. ├─base::t(.)
        4. ├─base::as.matrix(.)
        5. ├─base::as.data.frame(.)
        6. └─tibble::column_to_rownames(., var = "cell")
        7.   └─tibble:::abort_already_has_rownames()
        8.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        9.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 4 | WARN 2 | SKIP 415 | PASS 101 ]
       Error:
       ! Test failures.
       Execution halted
     ```

