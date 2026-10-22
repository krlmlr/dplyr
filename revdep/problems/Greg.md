# Greg (2.0.3)

* GitHub: <https://github.com/gforge/Greg>
* Email: <mailto:max@gforge.se>
* GitHub mirror: <https://github.com/cran/Greg>

Run `revdepcheck::revdep_details(, "Greg")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Loading required package: htmlTable
       
       Attaching package: 'Gmisc'
       
       The following object is masked from 'package:base':
       
           append
       
       Loading required package: forestplot
       Loading required package: grid
       Loading required package: checkmate
       Loading required package: abind
       Saving _problems/test-forestplotCombineRegrObj-69.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 291 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-forestplotCombineRegrObj.R:66:3'): Test getModelData4Forestplot ──
       Expected `pluck(filter(data, column_term == "x2"), "estimate")` to equal `exp(coef(fit1)["x2"])`.
       Differences:
       names for current but not for target
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 291 ]
       Error:
       ! Test failures.
       Execution halted
     ```

