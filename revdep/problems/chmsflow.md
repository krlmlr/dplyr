# chmsflow (0.1.0)

* GitHub: <https://github.com/Big-Life-Lab/chmsflow>
* Email: <mailto:raislam@ohri.ca>
* GitHub mirror: <https://github.com/cran/chmsflow>

Run `revdepcheck::revdep_details(, "chmsflow")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > library(chmsflow)
       > 
       > test_check("chmsflow")
       Saving _problems/test-blood-pressure-25.R
       Saving _problems/test-blood-pressure-51.R
       [ FAIL 2 | WARN 241 | SKIP 0 | PASS 565 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-blood-pressure.R:25:3'): adjust_sbp returns correct adjusted systolic blood pressure ──
       Expected `haven::is_tagged_na(result[3], "a")` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       ── Failure ('test-blood-pressure.R:51:3'): adjust_dbp returns correct adjusted diastolic blood pressure ──
       Expected `haven::is_tagged_na(result[3], "a")` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       
       [ FAIL 2 | WARN 241 | SKIP 0 | PASS 565 ]
       Error:
       ! Test failures.
       Execution halted
     ```

