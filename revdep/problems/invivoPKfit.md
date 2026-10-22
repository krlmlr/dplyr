# invivoPKfit (2.0.2)

* Email: <mailto:wambaugh.john@epa.gov>
* GitHub mirror: <https://github.com/cran/invivoPKfit>

Run `revdepcheck::revdep_details(, "invivoPKfit")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         \- + Summary Group: [Route--Media--Dose]
       
       
       settings_preprocess(suppress.messages = TRUE): settings_preprocess already present; new settings_preprocess will replace the existing one
       v Current Modeling Structure:
       Data Group: [Chemical--Species]
       \- + Error Group: [Reference]
         \- + Summary Group: [Route--Media--Dose]
       
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 101 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-pk_methods_coef_sd.R:3:3'): coef_sd.pk() proceeds without error ──
       Expected `coef_sd(test_pk)` not to throw any errors.
       Actually got a <dplyr:::mutate_error> with message:
         i In argument: `sd_tbl = list(...)`.
         i In row 1.
         Caused by error in `data.frame()`:
         ! arguments imply differing number of rows: 0, 5
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 101 ]
       Error:
       ! Test failures.
       Execution halted
     ```

