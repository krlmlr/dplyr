# cvCovEst (1.2.2)

* GitHub: <https://github.com/PhilBoileau/cvCovEst>
* Email: <mailto:philippe_boileau@berkeley.edu>
* GitHub mirror: <https://github.com/cran/cvCovEst>

Run `revdepcheck::revdep_details(, "cvCovEst")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘spelling.R’
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(cvCovEst)
       cvCovEst v1.2.2: Cross-Validated Covariance Matrix Estimation
       > 
       > test_check("cvCovEst")
       Saving _problems/test-checkArgs-1173.R
       [ FAIL 1 | WARN 1 | SKIP 0 | PASS 178 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-checkArgs.R:1149:3'): checkArgs works well in cvCovEst Function ──
       Expected `cvCovEst(...)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 1 | SKIP 0 | PASS 178 ]
       Error:
       ! Test failures.
       Execution halted
     ```

