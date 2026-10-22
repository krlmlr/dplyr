# ORFID (1.0.3)

* GitHub: <https://github.com/hugo-marques/ORFID>
* Email: <mailto:annika@instream.net>
* GitHub mirror: <https://github.com/cran/ORFID>

Run `revdepcheck::revdep_details(, "ORFID")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(ORFID)
       > 
       > test_check("ORFID")
       Saving _problems/test-import-ORFID-17.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 21 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-import-ORFID.R:16:3'): import_ORFID column classes of common columns are correct ──
       Expected `res` to equal `c(...)`.
       Differences:
       Lengths differ: 7 is not 8
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 21 ]
       Error:
       ! Test failures.
       Execution halted
     ```

