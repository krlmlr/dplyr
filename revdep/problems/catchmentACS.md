# catchmentACS (0.6.0)

* GitHub: <https://github.com/joonho112/catchmentACS>
* Email: <mailto:jlee296@ua.edu>
* GitHub mirror: <https://github.com/cran/catchmentACS>

Run `revdepcheck::revdep_details(, "catchmentACS")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-regression-isochrone-geometry-byte-identity.R:65:3',
         'test-regression-isochrone-geometry-byte-identity.R:97:3'
       • file.exists(.src) is not TRUE (2): 'test-issue002-osrm-demo-budget.R:93:3',
         'test-issue004-track2-print.R:56:3'
       • print.cacs_run_result.Rd not generated (1):
         'test-issue004-track2-print.R:70:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-integration-run.R:1071:3'): T24-10 output = 'list_column' produces the Sec. 12.3.2 8-col schema ──
       Expected `all(vapply(out$acs_estimates, inherits, logical(1L), "tbl_df"))` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       ── Failure ('test-integration-run.R:1072:3'): T24-10 output = 'list_column' produces the Sec. 12.3.2 8-col schema ──
       Expected `all(vapply(out$derived_rates, inherits, logical(1L), "tbl_df"))` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       
       [ FAIL 2 | WARN 0 | SKIP 52 | PASS 3523 ]
       Error:
       ! Test failures.
       Execution halted
     ```

