# amapGeocode (1.0.0)

* GitHub: <https://github.com/womeimingzi11/amapGeocode>
* Email: <mailto:chenhan28@gmail.com>
* GitHub mirror: <https://github.com/cran/amapGeocode>

Run `revdepcheck::revdep_details(, "amapGeocode")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘spelling.R’
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(amapGeocode)
       > 
       > test_check("amapGeocode")
       Saving _problems/test_getLocation-28.R
       Saving _problems/test_getLocation-64.R
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 144 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test_getLocation.R:28:3'): getLocation returns detail list-columns when requested ──
       Expected `res$pois[[1]]` to inherit from "tbl_df".
       Actual class: "data.frame".
       ── Failure ('test_getLocation.R:64:3'): extractLocation parses detail payload ──
       Expected `parsed$pois[[1]]` to inherit from "tbl_df".
       Actual class: "data.frame".
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 144 ]
       Error:
       ! Test failures.
       Execution halted
     ```

