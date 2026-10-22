# tinyshinyserver (0.2.1)

* GitHub: <https://github.com/lab1702/tinyshinyserver>
* Email: <mailto:cran.sherry228@passinbox.com>
* GitHub mirror: <https://github.com/cran/tinyshinyserver>

Run `revdepcheck::revdep_details(, "tinyshinyserver")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-utils.R:265:3'): is_port_in_use detects open and closed ports without warnings ──
       Expected `is_port_in_use("127.0.0.1", backend$port)` to be FALSE.
       Differences:
       `actual`:   TRUE 
       `expected`: FALSE
       
       Backtrace:
            ▆
         1. ├─testthat::expect_no_warning(...) at test-utils.R:265:3
         2. │ └─testthat:::expect_no_(...)
         3. │   └─testthat:::quasi_capture(enquo(object), NULL, capture)
         4. │     ├─testthat (local) .capture(...)
         5. │     │ ├─base::withRestarts(...)
         6. │     │ │ └─base (local) withOneRestart(expr, restarts[[1L]])
         7. │     │ │   └─base (local) doWithOneRestart(return(expr), restart)
         8. │     │ └─base::withCallingHandlers(...)
         9. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        10. └─testthat::expect_false(is_port_in_use("127.0.0.1", backend$port))
       
       [ FAIL 1 | WARN 0 | SKIP 1 | PASS 1381 ]
       Error:
       ! Test failures.
       Execution halted
     ```

