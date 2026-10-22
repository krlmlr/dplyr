# testdat (0.4.4)

* GitHub: <https://github.com/socialresearchcentre/testdat>
* Email: <mailto:danny@gorcha.org>
* GitHub mirror: <https://github.com/cran/testdat>

Run `revdepcheck::revdep_details(, "testdat")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(testdat)
       > 
       > test_check("testdat")
       Saving _problems/test-chk_filter-17.R
       Saving _problems/test-chk_filter-22.R
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 184 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-chk_filter.R:14:3'): chk_filter ──────────────────────────────
       Expected `chk_filter_all(...)` to be identical to `c(!as.logical(test_df$b[1:5]), rep(NA, 5))`.
       Differences:
       names for target but not for current
       ── Failure ('test-chk_filter.R:19:3'): chk_filter ──────────────────────────────
       Expected `chk_filter_any(...)` to be identical to `c(rep(TRUE, 5), rep(NA, 5))`.
       Differences:
       names for target but not for current
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 184 ]
       Error:
       ! Test failures.
       Execution halted
     ```

