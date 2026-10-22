# fastTS (1.0.3)

* GitHub: <https://github.com/petersonR/fastTS>
* Email: <mailto:ryan-peterson@uiowa.edu>
* GitHub mirror: <https://github.com/cran/fastTS>

Run `revdepcheck::revdep_details(, "fastTS")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(fastTS)
       > 
       > test_check("fastTS")
       Saving _problems/test-fastTS-9.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 246 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-fastTS.R:9:3'): fastTS works as expected, endogenous ─────────
       Expected `fit <- fastTS(y, gamma = c(0, 0.5))` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 246 ]
       Error:
       ! Test failures.
       Execution halted
     ```

