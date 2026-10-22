# iNZightTools (2.0.4)

* GitHub: <https://github.com/iNZightVIT/iNZightTools>
* Email: <mailto:tom.elliott@auckland.ac.nz>
* GitHub mirror: <https://github.com/cran/iNZightTools>

Run `revdepcheck::revdep_details(, "iNZightTools")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
           set_names
       
       The following objects are masked from 'package:testthat':
       
           equals, is_less_than, not
       
       [ FAIL 2 | WARN 0 | SKIP 4 | PASS 378 ]
       
       ══ Skipped tests (4) ═══════════════════════════════════════════════════════════
       • On CRAN (2): 'test_smart_read.R:29:5', 'test_smart_read.R:259:5'
       • URL not available. (1): 'test_smart_read.R:209:5'
       • {surveyspec} is not installed (1): 'test_survey_design.R:6:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test_aggregate_data.R:71:5'): Aggregating survey data is valid ────
       Expected `... <- NULL` to run silently.
       Actual noise: messages.
       ── Failure ('test_join_data.R:16:5'): Auto detection works ─────────────────────
       Expected `join_data(iris, iris)` to throw a warning.
       
       [ FAIL 2 | WARN 0 | SKIP 4 | PASS 378 ]
       Error:
       ! Test failures.
       Execution halted
     ```

