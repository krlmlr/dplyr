# IPEDSuploadables (3.0.1)

* GitHub: <https://github.com/AlisonLanski/IPEDSuploadables>
* Email: <mailto:alanski@nd.edu>
* GitHub mirror: <https://github.com/cran/IPEDSuploadables>

Run `revdepcheck::revdep_details(, "IPEDSuploadables")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(IPEDSuploadables)
       This version of IPEDSuploadables has been updated for 
       the 2025-2026 reporting cycle.
       If you are in a later cycle or want to capture any bug fixes,
       please update the package.
       > 
       > test_check("IPEDSuploadables")
       Saving _problems/test-prep-scripts-158.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 87 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-prep-scripts.R:158:3'): prep for COM handles CIPs appropriately ──
       Expected `toString(prep_com_data_frame(com_df2)$MAJORCIP)` to equal "00.0000, 11.1111, 04.0000".
       Differences:
       1/1 mismatches
       x[1]: "00.0000, 11.0000, 04.0000"
       y[1]: "00.0000, 11.1111, 04.0000"
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 87 ]
       Error:
       ! Test failures.
       Execution halted
     ```

