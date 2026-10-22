# aNCA (0.1.0)

* GitHub: <https://github.com/pharmaverse/aNCA>
* Email: <mailto:anca.pharmaverse@gmail.com>
* GitHub mirror: <https://github.com/cran/aNCA>

Run `revdepcheck::revdep_details(, "aNCA")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        [9] NA     - "Result or Finding in Original Units" [9]            
       [10] NA     - "Original Units"                      [10]           
        ... ...      ...                                   and 11 more ...
       
       ── Failure ('test-export_cdisc.R:89:5'): export_cdisc / exports a ADPP dataset with CDISC labels ──
       Expected `unname(formatters::var_labels(adpp))` to equal `translate_terms(names(adpp), "Variable", "Label", metadata_nca_variables)`.
       Differences:
            actual | expected                                             
        [1] NA     - "Domain Abbreviation"                 [1]            
        [2] NA     - "Unique Subject Identifier"           [2]            
        [3] NA     - "Subject Identifier for the Study"    [3]            
        [4] NA     - "Sequence Number"                     [4]            
        [5] NA     - "Group ID"                            [5]            
        [6] NA     - "Parameter Short Name"                [6]            
        [7] NA     - "Parameter Name"                      [7]            
        [8] NA     - "Parameter Category"                  [8]            
        [9] NA     - "Parameter Subcategory"               [9]            
       [10] NA     - "Result or Finding in Original Units" [10]           
        ... ...      ...                                   and 15 more ...
       
       
       [ FAIL 2 | WARN 0 | SKIP 19 | PASS 744 ]
       Error:
       ! Test failures.
       Execution halted
     ```

