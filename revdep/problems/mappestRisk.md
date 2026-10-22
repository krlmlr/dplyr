# mappestRisk (0.1.2)

* GitHub: <https://github.com/EcologyR/mappestRisk>
* Email: <mailto:dario.ssm2@gmail.com>
* GitHub mirror: <https://github.com/cran/mappestRisk>

Run `revdepcheck::revdep_details(, "mappestRisk")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       [ FAIL 2 | WARN 1 | SKIP 3 | PASS 110 ]
       
       ══ Skipped tests (3) ═══════════════════════════════════════════════════════════
       • On CRAN (3): 'test-map_risk.R:69:3', 'test-map_risk.R:104:3',
         'test-map_risk.R:157:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-predict_curves.R:25:3'): predict_curves output has correct structure ──
       Expected `max(curves$temp)` to equal 45.9.
       Differences:
         `actual`: 47.5
       `expected`: 45.9
       
       ── Failure ('test-predict_curves.R:28:3'): predict_curves output has correct structure ──
       Expected `all(curves$dev_rate >= 0)` to be TRUE.
       Differences:
       `actual`:   <NA>
       `expected`: TRUE
       
       
       [ FAIL 2 | WARN 1 | SKIP 3 | PASS 110 ]
       Error:
       ! Test failures.
       Execution halted
     ```

