# baizer (0.8.0)

* GitHub: <https://github.com/william-swl/baizer>
* Email: <mailto:william_swl@163.com>
* GitHub mirror: <https://github.com/cran/baizer>

Run `revdepcheck::revdep_details(, "baizer")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > 
     > ### ** Examples
     > 
     > cross_count(mini_diamond, cut, clarity)
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpOAyeW2/working_dir/RtmpATB3m1/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─baizer::cross_count(mini_diamond, cut, clarity)
      2. │ └─res %>% c2r(quo_name(row))
      3. ├─baizer::c2r(., quo_name(row))
      4. │ └─df %>% tibble::column_to_rownames(col)
      5. └─tibble::column_to_rownames(., col)
      6.   └─tibble:::abort_already_has_rownames()
      7.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      8.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        2. │ └─res %>% c2r(quo_name(row))
        3. ├─baizer::c2r(., quo_name(row))
        4. │ └─df %>% tibble::column_to_rownames(col)
        5. └─tibble::column_to_rownames(., col)
        6.   └─tibble:::abort_already_has_rownames()
        7.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        8.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Error ('test-dataframe.R:215:3'): cross_count, method='colr' ────────────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., col)`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─baizer::cross_count(mini_diamond, cut, clarity, method = "colr")
        2. │ └─res %>% c2r(quo_name(row))
        3. ├─baizer::c2r(., quo_name(row))
        4. │ └─df %>% tibble::column_to_rownames(col)
        5. └─tibble::column_to_rownames(., col)
        6.   └─tibble:::abort_already_has_rownames()
        7.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        8.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 2 | WARN 0 | SKIP 66 | PASS 220 ]
       Error:
       ! Test failures.
       Execution halted
     ```

