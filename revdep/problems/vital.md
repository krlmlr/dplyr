# vital (2.1.0)

* GitHub: <https://github.com/robjhyndman/vital>
* Email: <mailto:Rob.Hyndman@monash.edu>
* GitHub mirror: <https://github.com/cran/vital>

Run `revdepcheck::revdep_details(, "vital")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
           filter, lag
       
       The following objects are masked from 'package:base':
       
           intersect, setdiff, setequal, union
       
       > 
       > test_check("vital")
       Saving _problems/test-STMOMO-179.R
       [ FAIL 1 | WARN 0 | SKIP 2 | PASS 708 ]
       
       ══ Skipped tests (2) ═══════════════════════════════════════════════════════════
       • On CRAN (2): 'test-hmd.R:4:3', 'test-model-parallel.R:58:7'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-STMOMO.R:179:3'): tidy() returns GAPC coefficients in long form ──
       Expected `td$estimate[td$term == "gc"]` to equal `cohort_components(select(mod, apc))$gc`.
       Differences:
       names for target but not for current
       
       [ FAIL 1 | WARN 0 | SKIP 2 | PASS 708 ]
       Error:
       ! Test failures.
       Execution halted
     ```

