# cbsREPS (0.1.0)

* Email: <mailto:v.gajadhar@cbs.nl>
* GitHub mirror: <https://github.com/cran/cbsREPS>

Run `revdepcheck::revdep_details(, "cbsREPS")` for more info

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
       > library(cbsREPS)
       > 
       > test_check("cbsREPS")
       Saving _problems/test-calculate_price_index-28.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 52 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-calculate_price_index.R:16:3'): Test calculate_price_index ───
       Expected `calculate_price_index(...)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 52 ]
       Error:
       ! Test failures.
       Execution halted
     ```

