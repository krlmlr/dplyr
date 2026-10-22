# libr (1.4.2)

* GitHub: <https://github.com/dbosak01/libr>
* Email: <mailto:dbosak01@gmail.com>
* GitHub mirror: <https://github.com/cran/libr>

Run `revdepcheck::revdep_details(, "libr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > library(testthat)
       > library(libr)
       Loading required package: common
       > 
       > test_check("libr")
       Saving _problems/test-datastep-367.R
       # library 'dat': 2 items
       - attributes: csv not loaded
       - path: ./data
       - items:
                Name Extension Rows Cols    Size        LastModified
       1 demo_studya       csv   10    9 11.7 Kb 2026-10-22 11:44:51
       2 demo_studyb       csv    2    9 10.7 Kb 2026-10-22 11:44:51
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 573 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-datastep.R:367:3'): ds15: datastep() attributes on data are maintained. ──
       Expected `attr(prep$USUBJID, "label")` to equal "Unique Subject Identifier".
       Differences:
       target is NULL, current is character
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 573 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

