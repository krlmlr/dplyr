# BRCore (2.0.7)

* GitHub: <https://github.com/germs-lab/BRCore>
* Email: <mailto:bolaponte@pm.me>
* GitHub mirror: <https://github.com/cran/BRCore>

Run `revdepcheck::revdep_details(, "BRCore")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > ### ** Examples
     > 
     > library(phyloseq)
     > library(BRCore)
     > 
     > # Adding metrics to a "phyloseq" object
     > bcse_metrics <- add_rarefaction_metrics(data = bcse)
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpEbYbFJ/working_dir/RtmpSvNEmL/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error in `column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. └─BRCore::add_rarefaction_metrics(data = bcse)
      2.   └─tibble::column_to_rownames(...)
      3.     └─tibble:::abort_already_has_rownames()
      4.       └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      5.         └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       =>-----------------------------    3% | ETA: 29s
       ==>----------------------------    6% | ETA: 33s
       ===>---------------------------   11% | ETA: 40s
       =====>-------------------------   15% | ETA: 45s
       ======>------------------------   18% | ETA: 50s
       ======>------------------------   21% | ETA:  1m
       =======>-----------------------   24% | ETA:  1m
       ========>----------------------   27% | ETA:  1m
       =========>---------------------   29% | ETA:  1m
       =========>---------------------   31% | ETA:  1m
       ==========>--------------------   33% | ETA:  1m
       ==========>--------------------   35% | ETA:  1m
       ===========>-------------------   36% | ETA:  1m
       ===========>-------------------   38% | ETA:  1m
       ============>------------------   39% | ETA:  1m
       ============>------------------   41% | ETA:  1m
       =============>-----------------   42% | ETA:  1m
       =============>-----------------   44% | ETA:  1m
       =============>-----------------   45% | ETA:  1m
       ==============>----------------   46% | ETA:  1m
       ==============>----------------   47% | ETA:  1m
       ===============>---------------   49% | ETA:  1m
       ===============>---------------   50% | ETA:  1m
       ===============>---------------   51% | ETA:  1m
       Killed
     ```

