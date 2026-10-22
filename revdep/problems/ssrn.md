# ssrn (0.1.0)

* GitHub: <https://github.com/uribo/ssrn>
* Email: <mailto:suika1127@gmail.com>
* GitHub mirror: <https://github.com/cran/ssrn>

Run `revdepcheck::revdep_details(, "ssrn")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
       "next_{col}")`.
     Caused by warning:
     ! Using `across()` without supplying `.cols` was deprecated in dplyr 1.1.0.
     ℹ Please supply `.cols` instead.
     Warning: There was 1 warning in `mutate()`.
     ℹ In argument: `dplyr::across(..., .fns = ~dplyr::lead(.x, n = 1L), .names =
       "next_{col}")`.
     Caused by warning:
     ! Using `across()` without supplying `.cols` was deprecated in dplyr 1.1.0.
     ℹ Please supply `.cols` instead.
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
          ▆
       1. ├─ssrn::make_adjacency_matrix(jreast_jt, st_code, next_st_code)
       2. │ └─... %>% tweak_matrix_names()
       3. ├─ssrn:::tweak_matrix_names(.)
       4. ├─base::as.matrix(.)
       5. ├─ssrn:::od_wider(...)
       6. │ └─... %>% tibble::column_to_rownames(var = names(d)[1])
       7. └─tibble::column_to_rownames(., var = names(d)[1])
       8.   └─tibble:::abort_already_has_rownames()
       9.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      10.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         7. └─tibble::column_to_rownames(., var = names(d)[1])
         8.   └─tibble:::abort_already_has_rownames()
         9.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        10.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Error ('test-matrix.R:30:3'): passenger works ───────────────────────────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., var = names(d)[1])`: `.data` must be a data frame without row names.
       Backtrace:
            ▆
         1. ├─jreast_jt_od %>% ... at test-matrix.R:30:3
         2. ├─ssrn::make_passenger_matrix(...)
         3. │ └─... %>% tweak_matrix_names()
         4. ├─ssrn:::tweak_matrix_names(.)
         5. ├─base::as.matrix(.)
         6. ├─ssrn:::od_wider(...)
         7. │ └─... %>% tibble::column_to_rownames(var = names(d)[1])
         8. └─tibble::column_to_rownames(., var = names(d)[1])
         9.   └─tibble:::abort_already_has_rownames()
        10.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        11.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 2 | WARN 4 | SKIP 0 | PASS 4 ]
       Error:
       ! Test failures.
       Execution halted
     ```

