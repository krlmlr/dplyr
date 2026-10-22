# DedooseR (2.0.0.2)

* GitHub: <https://github.com/abiraahmi/DedooseR>
* Email: <mailto:abiraahmi.shankar@nyu.edu>
* GitHub mirror: <https://github.com/cran/DedooseR>

Run `revdepcheck::revdep_details(, "DedooseR")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       Attaching package: 'dplyr'
       
       The following objects are masked from 'package:stats':
       
           filter, lag
       
       The following objects are masked from 'package:base':
       
           intersect, setdiff, setequal, union
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 177 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-clean_data.R:76:3'): rename_vars and relabel_vars correctly rename variables and update labels ──
       Expected `label_value` to equal "source document".
       Differences:
       `actual`:   "source_doc"     
       `expected`: "source document"
       
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 177 ]
       Error:
       ! Test failures.
       Execution halted
     ```

