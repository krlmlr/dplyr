# tourr (1.2.8)

* GitHub: <https://github.com/ggobi/tourr>
* Email: <mailto:dicook@monash.edu>
* GitHub mirror: <https://github.com/cran/tourr>

Run `revdepcheck::revdep_details(, "tourr")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > ### Aliases: display_andrews animate_andrews
     > ### Keywords: hplot
     > 
     > ### ** Examples
     > 
     > animate_andrews(flea[, 1:6])
     Converting input data to the required matrix format.
     > animate_andrews(flea[, 1:6], grand_tour(d = 3))
     Converting input data to the required matrix format.
     > animate_andrews(flea[, 1:6], grand_tour(d = 6))
     Converting input data to the required matrix format.
     > 
     > # It's easy to experiment with different tour paths:
     > animate_andrews(flea[, 1:6], guided_tour(cmass()))
     Converting input data to the required matrix format.
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpWUrzU2/working_dir/RtmpGVrTiM/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       Backtrace:
           ▆
        1. └─tourr::save_history(dat, guided_tour(cmass()), max = 5) at test-tour-paths.R:174:3
        2.   └─tourr (local) tour(step_size)
        3.     └─tourr (local) tour_path(proj[[length(proj)]], data, ...)
        4.       └─tourr (local) generator(current, data, tries, ...)
        5.         └─tourr (local) search_f(...)
        6.           ├─utils::tail(peak$index_val, 1)
        7.           └─utils:::tail.default(peak$index_val, 1)
       ── Error ('test-tour-paths.R:186:3'): guided_tour index values are non-decreasing along saved path ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. └─tourr::save_history(dat, guided_tour(holes()), max = 8) at test-tour-paths.R:186:3
        2.   └─tourr (local) tour(step_size)
        3.     └─tourr (local) tour_path(proj[[length(proj)]], data, ...)
        4.       └─tourr (local) generator(current, data, tries, ...)
        5.         └─tourr (local) search_f(...)
        6.           ├─utils::tail(peak$index_val, 1)
        7.           └─utils:::tail.default(peak$index_val, 1)
       
       [ FAIL 3 | WARN 0 | SKIP 0 | PASS 1208 ]
       Error:
       ! Test failures.
       Execution halted
     ```

