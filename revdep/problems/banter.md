# banter (0.9.8)

* GitHub: <https://github.com/SWFSC/banter>
* Email: <mailto:eric.ivan.archer@gmail.com>
* GitHub mirror: <https://github.com/cran/banter>

Run `revdepcheck::revdep_details(, "banter")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Saving _problems/test-accessors-8.R
       [ FAIL 1 | WARN 2 | SKIP 0 | PASS 2 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-accessors.R:4:1'): (code run outside of `test_that()`) ─────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(dplyr::mutate(dplyr::mutate(dplyr::filter(df, .data$species %in% names(sampsize)), species = factor(.data$species)), id = paste0(.data$event.id, ".", .data$call.id)), "id")`: `.data` must be a data frame without row names.
       Backtrace:
            ▆
         1. └─banter::addBanterDetector(...) at test-accessors.R:4:1
         2.   └─base::sapply(...)
         3.     └─base::lapply(X = X, FUN = FUN, ...)
         4.       └─banter (local) FUN(X[[i]], ...)
         5.         └─banter:::.runDetectorModel(...)
         6.           ├─base::droplevels(...)
         7.           ├─base::as.data.frame(...)
         8.           └─tibble::column_to_rownames(...)
         9.             └─tibble:::abort_already_has_rownames()
        10.               └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        11.                 └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 1 | WARN 2 | SKIP 0 | PASS 2 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking examples ... ERROR
     ```
     ...
     +   data = train.data$detectors$bp, 
     +   name = "bp",
     +   ntree = 50, sampsize = 1, num.cores = 1
     + )
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpO85wEA/working_dir/Rtmp3HBd1x/duckdb
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
      1. └─banter::addBanterDetector(...)
      2.   └─banter:::.runDetectorModel(...)
      3.     ├─base::droplevels(...)
      4.     ├─base::as.data.frame(...)
      5.     └─tibble::column_to_rownames(...)
      6.       └─tibble:::abort_already_has_rownames()
      7.         └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      8.           └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

