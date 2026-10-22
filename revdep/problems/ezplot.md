# ezplot (0.8.2)

* GitHub: <https://github.com/wkostelecki/ezplot>
* Email: <mailto:wojtek.kostelecki@gmail.com>
* GitHub mirror: <https://github.com/cran/ezplot>

Run `revdepcheck::revdep_details(, "ezplot")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(ezplot)
       > suppressPackageStartupMessages(library(tsibble))
       > 
       > test_check("ezplot")
       Saving _problems/test-classification_plot-9.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 93 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-classification_plot.R:9:3'): pr_plot ─────────────────────────
       Expected `nrow(g$data)` to equal 11.
       Differences:
       1/1 mismatches
       [1] 12 - 11 == 1
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 93 ]
       Error:
       ! Test failures.
       Execution halted
     ```

