# predictrace (2.0.1)

* GitHub: <https://github.com/jacobkap/predictrace>
* Email: <mailto:jkkaplan6@gmail.com>
* GitHub mirror: <https://github.com/cran/predictrace>

Run `revdepcheck::revdep_details(, "predictrace")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘spelling.R’
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(predictrace)
       Thank you for using predictrace!
       To acknowledge our work, please cite the package:
       Kaplan, J (2023). predictrace: Predict the Race and Gender of a Given Name Using Census and Social Security Administration Data. Version 2.0.1. URL: https://github.com/jacobkap/predictrace, https://jacobkap.github.io/predictrace/.
       > 
       > test_check("predictrace")
       Saving _problems/test-error-silent-stop-3.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 173 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-error-silent-stop.R:3:3'): correct input works ───────────────
       Expected `predict_race("smith")` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 173 ]
       Error:
       ! Test failures.
       Execution halted
     ```

