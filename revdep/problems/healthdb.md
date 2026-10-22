# healthdb (0.5.1)

* GitHub: <https://github.com/KevinHzq/healthdb>
* Email: <mailto:kevin.hu@bccdc.ca>
* GitHub mirror: <https://github.com/cran/healthdb>

Run `revdepcheck::revdep_details(, "healthdb")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       i Identify records with condition(s):
       * where at least one of the diagx, diagx_1, diagx_2 column(s) in each record
       * contains a value exactly matched values in set: letters
       i Identify records with condition(s):
       * where at least one of the diagx, diagx_1, diagx_2 column(s) in each record
       * contains a value exactly matched values in set: 1:10
       [ FAIL 1 | WARN 125 | SKIP 7 | PASS 282 ]
       
       ══ Skipped tests (7) ═══════════════════════════════════════════════════════════
       • On CRAN (7): 'test-define_case.R:42:3', 'test-define_case_with_age.R:69:3',
         'test-if_dates.R:2:3', 'test-if_dates.R:26:3', 'test-if_dates.R:33:3',
         'test-restrict_dates_sql.R:26:3', 'test-restrict_dates_sql.R:101:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-fetch_var.R:115:3'): not one to one warning works ────────────
       Expected `.` to throw a warning.
       Backtrace:
           ▆
        1. ├─... %>% expect_warning() at test-fetch_var.R:115:3
        2. └─testthat::expect_warning(.)
       
       [ FAIL 1 | WARN 125 | SKIP 7 | PASS 282 ]
       Error:
       ! Test failures.
       Execution halted
     ```

