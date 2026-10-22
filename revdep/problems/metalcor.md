# metalcor (1.0.2)

* GitHub: <https://github.com/OchoaLab/metalcor>
* Email: <mailto:alejandro.ochoa@duke.edu>
* GitHub mirror: <https://github.com/cran/metalcor>

Run `revdepcheck::revdep_details(, "metalcor")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
     Complete output:
       > # This file is part of the standard setup for testthat.
       > # It is recommended that you do not modify it.
       > #
       > # Where should you do additional test configuration?
       > # Learn more about the roles of various files in:
       > # * https://r-pkgs.org/testing-design.html#sec-tests-files-overview
       > # * https://testthat.r-lib.org/articles/special-files.html
       > 
       > library(testthat)
       > library(metalcor)
       > 
       > test_check("metalcor")
       Saving _problems/test-metalcor-229.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 176 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-metalcor.R:227:9'): metalcor works ───────────────────────────
       Expected `out <- metalcor(studies, median = median)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 176 ]
       Error:
       ! Test failures.
       Execution halted
     ```

