# MLMES (0.1.2)

* Email: <mailto:chengxb@uw.edu>
* GitHub mirror: <https://github.com/cran/MLMES>

Run `revdepcheck::revdep_details(, "MLMES")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(MLMES)
       > 
       > test_check("MLMES")
       Saving _problems/test-glmer-10.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 85 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-glmer.R:5:3'): 2-level logistic functions satisfy their output contracts ──
       Expected `variance_components <- glmerVarComp(two_level_binomial_fit, verbose = FALSE)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 85 ]
       Error:
       ! Test failures.
       Execution halted
     ```

