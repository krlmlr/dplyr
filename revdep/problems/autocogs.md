# autocogs (0.1.5)

* GitHub: <https://github.com/schloerke/autocogs>
* Email: <mailto:rhafen@gmail.com>
* GitHub mirror: <https://github.com/cran/autocogs>

Run `revdepcheck::revdep_details(, "autocogs")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > # Where should you do additional test configuration?
       > # Learn more about the roles of various files in:
       > # * https://r-pkgs.org/testing-design.html#sec-tests-files-overview
       > # * https://testthat.r-lib.org/articles/special-files.html
       > 
       > library(testthat)
       > library(autocogs)
       > 
       > test_check("autocogs")
       Saving _problems/test-layers-12.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 252 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-layers.R:10:5'): ggplot2 layers ──────────────────────────────
       Expected `{ ... }` to run silently.
       Actual noise: messages.
       Backtrace:
           ▆
        1. └─autocogs (local) check_plot_count(TRUE, 2) at test-layers.R:16:3
        2.   └─testthat::expect_silent(...) at test-layers.R:10:5
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 252 ]
       Error:
       ! Test failures.
       Execution halted
     ```

