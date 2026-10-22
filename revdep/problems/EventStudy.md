# EventStudy (0.66.0)

* GitHub: <https://github.com/sipemu/eventstudy>
* Email: <mailto:sm@data-zoo.de>
* GitHub mirror: <https://github.com/cran/EventStudy>

Run `revdepcheck::revdep_details(, "EventStudy")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test_simulation.R:20:3', 'test_simulation.R:36:3', 'test_simulation.R:51:3',
         'test_simulation.R:62:3', 'test_simulation.R:81:3', 'test_simulation.R:98:3',
         'test_simulation.R:114:3', 'test_simulation.R:130:3',
         'test_simulation.R:152:3', 'test_simulation.R:166:3',
         'test_simulation.R:181:3', 'test_simulation.R:217:3'
       • R/report.R not found for non-ASCII check (2): 'test_es_report.R:290:3',
         'test_report_multiformat.R:457:3'
       • requireNamespace("rmarkdown", quietly = TRUE) is TRUE (1):
         'test_report.R:3:3'
       • requireNamespace("tidyquant", quietly = TRUE) || requireNamespace("quantmod",
         quietly = TRUE) is TRUE (1): 'test_data_download.R:51:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test_reeval_statistical_fixes.R:128:5'): A2: all-NA event excluded identically across CSectT/Patell/BMP/Sign/GSign/KP ──
       Expected `out$n` to equal 1.
       Differences:
         `actual`: 2.0
       `expected`: 1.0
       
       ckp_t
       
       [ FAIL 1 | WARN 14 | SKIP 73 | PASS 2696 ]
       Error:
       ! Test failures.
       Execution halted
     ```

