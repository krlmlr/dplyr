# metalite.ae (0.1.4)

* GitHub: <https://github.com/Merck/metalite.ae>
* Email: <mailto:yujie.zhao@merck.com>
* GitHub mirror: <https://github.com/cran/metalite.ae>

Run `revdepcheck::revdep_details(, "metalite.ae")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        [7] "Causality"                   - "AEREL"   [7] 
        [8] "Outcome of Adverse Event"    - "AEOUT"   [8] 
        [9] "subline"                     | "subline" [9] 
       [10] "TRTA"                        | "TRTA"    [10]
       
       ── Failure ('test-independent-testing-prepare_ae_listing.R:125:3'): Checking AE related records at WK12 ──
       Expected `get_label(prod_tbl)` to equal `get_label(listi)`.
       Differences:
            actual                        | expected      
        [1] "Unique Subject Identifier"   - "USUBJID" [1] 
        [2] "Analysis Start Relative Day" - "ASTDY"   [2] 
        [3] "Dictionary-Derived Term"     - "AEDECOD" [3] 
        [4] "AE Duration (N)"             - "ADURN"   [4] 
        [5] "Severity/Intensity"          - "AESEV"   [5] 
        [6] "Serious Event"               - "AESER"   [6] 
        [7] "Causality"                   - "AEREL"   [7] 
        [8] "Outcome of Adverse Event"    - "AEOUT"   [8] 
        [9] "subline"                     | "subline" [9] 
       [10] "TRTA"                        | "TRTA"    [10]
       
       
       [ FAIL 2 | WARN 0 | SKIP 13 | PASS 220 ]
       Error:
       ! Test failures.
       Execution halted
     ```

