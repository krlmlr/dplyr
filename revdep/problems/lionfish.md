# lionfish (1.0.27)

* Email: <mailto:matthias.medl@chello.at>
* GitHub mirror: <https://github.com/cran/lionfish>

Run `revdepcheck::revdep_details(, "lionfish")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘lionfish-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: get_guided_holes_better_history
     > ### Title: Get Guided Tour-Holes-Better History
     > ### Aliases: get_guided_holes_better_history
     > 
     > ### ** Examples
     > 
     > data("flea", package = "tourr")
     > flea <- flea[-7]
     > get_guided_holes_better_history(flea, 2)
     Converting input data to the required matrix format.
     Target: 0.723, try: 1
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmprYIYcF/working_dir/RtmpIaO2fJ/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     <error/rlang_error>
     Error:
     ! GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     ---
     Backtrace:
         ▆
      1. └─tourr::save_history(flea, tour_path = guided_tour(holes(), 1))
      2.   └─tourr (local) tour(step_size)
      3.     └─tourr (local) tour_path(proj[[length(proj)]], data, ...)
      4.       └─tourr (local) generator(current, data, tries, ...)
      5.         └─tourr (local) search_f(...)
      6.           ├─utils::tail(peak$index_val, 1)
      7.           └─utils:::tail.default(peak$index_val, 1)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'Plot-objects.Rmd' failed with diagnostics:
     GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘Plot-objects.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘Bioprocess-Optimization.Rmd’ ‘General-interactivity.Rmd’
       ‘Market-segmentation.Rmd’ ‘Plot-objects.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

