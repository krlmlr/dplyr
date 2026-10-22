# chms (7.2)

* GitHub: <https://github.com/statcan/chms>
* Email: <mailto:joel.barnes@statcan.gc.ca>
* GitHub mirror: <https://github.com/cran/chms>

Run `revdepcheck::revdep_details(, "chms")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     +   non_wear_algo = "barreira",
     +   start_date = meta$start_date,
     +   cpu_max = 1
     + )
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpS8rPuh/working_dir/RtmpVwkeoj/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     > 
     > # Run data processing pipeline (load, clean, classify and summarize data)
     > agd_data$run()
     
     ── 🍁chms::agd$run() method ──
     
     ℹ Crunching data for 2 participants across 1 CPU.
     
     Progress ■■■■■■■■■■■■■■■■                  50% | ETA: 43s
     Error in UseMethod("relocate") : 
       no applicable method for 'relocate' applied to an object of class "NULL"
     Calls: <Anonymous> -> <Anonymous>
     Execution halted
     ```

## In both

*   checking dependencies in R code ... NOTE
     ```
     Namespaces in Imports field not imported from:
       ‘R6’ ‘dbplyr’ ‘knitr’ ‘mirai’ ‘parallelly’ ‘readr’ ‘utils’
       All declared Imports should be used.
     ```

