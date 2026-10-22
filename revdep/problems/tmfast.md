# tmfast (0.1.1)

* GitHub: <https://github.com/dhicks/tmfast>
* Email: <mailto:hicks.daniel.j@gmail.com>
* GitHub mirror: <https://github.com/cran/tmfast>

Run `revdepcheck::revdep_details(, "tmfast")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘tmfast-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: journal_specific
     > ### Title: "Journal-specific" simulation scenario
     > ### Aliases: journal_specific
     > 
     > ### ** Examples
     > 
     > journal_specific(k = 2, Mj = 10, vocab = 50, verbose = FALSE)
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. └─tmfast::journal_specific(k = 2, Mj = 10, vocab = 50, verbose = FALSE)
      2.   ├─base::as.matrix(...)
      3.   └─tibble::column_to_rownames(...)
      4.     └─tibble:::abort_already_has_rownames()
      5.       └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      6.         └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Saving _problems/test-generators-69.R
       [ FAIL 1 | WARN 1 | SKIP 0 | PASS 161 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-generators.R:69:5'): journal_specific: returns tibble with expected columns and valid values ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(dplyr::select(tidyr::pivot_wider(tidyr::complete(dplyr::arrange(dplyr::mutate(beta, token = as.integer(.data$token)), .data$token), token = 1:vocab), names_from = "topic", values_from = "beta", values_fill = 0, names_sort = TRUE), !"NA"), "token")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. └─tmfast::journal_specific(k = 2, Mj = 10, vocab = 50, verbose = FALSE) at test-generators.R:69:5
        2.   ├─base::as.matrix(...)
        3.   └─tibble::column_to_rownames(...)
        4.     └─tibble:::abort_already_has_rownames()
        5.       └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        6.         └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 1 | WARN 1 | SKIP 0 | PASS 161 ]
       Error:
       ! Test failures.
       Execution halted
     ```

