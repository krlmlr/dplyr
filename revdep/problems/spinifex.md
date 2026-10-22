# spinifex (0.3.10)

* GitHub: <https://github.com/nspyrison/spinifex>
* Email: <mailto:spyrison@gmail.com>
* GitHub mirror: <https://github.com/cran/spinifex>

Run `revdepcheck::revdep_details(, "spinifex")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘spinifex-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: basis_guided
     > ### Title: Solve for the last basis of a guided tour.
     > ### Aliases: basis_guided
     > 
     > ### ** Examples
     > 
     > dat <- scale_sd(wine[, 2:6])
     > basis_guided(data = dat, index_f = tourr::holes())
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        10.             └─utils:::tail.default(peak$index_val, 1)
       ── Error ('test-2_ggproto_visualize.r:15:3'): (code run outside of `test_that()`) ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
            ▆
         1. ├─spinifex::save_history(dat, guided_tour(holes()), max_bases = 3L) at test-2_ggproto_visualize.r:15:3
         2. │ ├─utils::capture.output(ret <- eval(.expr) %>% suppressMessages())
         3. │ │ └─base::withVisible(...elt(i))
         4. │ ├─eval(.expr) %>% suppressMessages()
         5. │ ├─base::eval(.expr)
         6. │ │ └─base::eval(.expr)
         7. │ └─tourr::save_history(...)
         8. │   └─tourr (local) tour(step_size)
         9. │     └─tourr (local) tour_path(proj[[length(proj)]], data, ...)
        10. │       └─tourr (local) generator(current, data, tries, ...)
        11. │         └─tourr (local) search_f(...)
        12. │           ├─utils::tail(peak$index_val, 1)
        13. │           └─utils:::tail.default(peak$index_val, 1)
        14. └─base::suppressMessages(.)
        15.   └─base::withCallingHandlers(...)
       
       [ FAIL 2 | WARN 1 | SKIP 0 | PASS 25 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
          ▆
       1. └─spinifex::basis_guided(dat_std, index_f = tourr::holes(), d = 2)
       2.   ├─utils::capture.output(...)
       3.   │ └─base::withVisible(...elt(i))
       4.   └─tourr::save_history(...)
       5.     └─tourr (local) tour(step_size)
       6.       └─tourr (local) tour_path(proj[[length(proj)]], data, ...)
       7.         └─tourr (local) generator(current, data, tries, ...)
       8.           └─tourr (local) search_f(...)
       9.             ├─utils::tail(peak$index_val, 1)
      10.             └─utils:::tail.default(peak$index_val, 1)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'getting_started_with_spinifex.Rmd' failed with diagnostics:
     GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘getting_started_with_spinifex.Rmd’
     
     --- re-building ‘ggproto_api.Rmd’ using rmarkdown
     --- finished re-building ‘ggproto_api.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘getting_started_with_spinifex.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

