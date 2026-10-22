# pandemonium (1.0.2)

* Email: <mailto:gabe.mccoy02@gmail.com>
* GitHub mirror: <https://github.com/cran/pandemonium>

Run `revdepcheck::revdep_details(, "pandemonium")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-plotting.R:32:3'): radial tour works with ppi basis ────────────
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
            ▆
         1. ├─testthat::expect_message(...) at test-plotting.R:32:3
         2. │ └─testthat:::expect_condition_matching_(...)
         3. │   └─testthat:::quasi_capture(...)
         4. │     ├─testthat (local) .capture(...)
         5. │     │ └─base::withCallingHandlers(...)
         6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
         7. └─pandemonium::makePlots(...)
         8.   └─pandemonium:::tourMaker(...)
         9.     └─tourr::save_history(...)
        10.       └─tourr (local) tour(step_size)
        11.         └─tourr (local) tour_path(proj[[length(proj)]], data, ...)
        12.           └─tourr (local) generator(current, data, tries, ...)
        13.             └─tourr (local) search_f(...)
        14.               ├─utils::tail(peak$index_val, 1)
        15.               └─utils:::tail.default(peak$index_val, 1)
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 9 ]
       Error:
       ! Test failures.
       Execution halted
     ```

