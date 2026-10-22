# crosstable (0.9.0)

* GitHub: <https://github.com/DanChaltiel/crosstable>
* Email: <mailto:dan.chaltiel@gmail.com>
* GitHub mirror: <https://github.com/cran/crosstable>

Run `revdepcheck::revdep_details(, "crosstable")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-crosstable.R:137:1', 'test-flextable.R:10:1', 'test-flextable.R:18:1',
         'test-flextable.R:31:1', 'test-flextable.R:42:1', 'test-flextable.R:57:1',
         'test-flextable.R:67:1', 'test-flextable.R:80:1', 'test-flextable.R:87:1',
         'test-format.R:4:1', 'test-format.R:65:1', 'test-labels.R:7:1',
         'test-labels.R:40:1', 'test-labels.R:197:3', 'test-labels.R:212:1',
         'test-methods.R:14:1', 'test-by_factor.R:11:1', 'test-by_factor.R:26:1',
         'test-by_factor.R:44:1', 'test-by_factor.R:63:1', 'test-by_factor.R:83:1',
         'test-by_factor.R:119:1', 'test-by_factor.R:149:1', 'test-by_factor.R:201:1',
         'test-by_factor.R:251:1', 'test-by_factor.R:270:1', 'test-by_factor.R:289:1',
         'test-by_factor.R:334:1', 'test-options.R:10:3', 'test-options.R:70:1',
         'test-quick_surv.R:1:1', 'test-pivot.R:16:1', 'test-tests.R:85:3',
         'test-tests.R:104:1', 'test-selection.R:243:1', 'test-selection.R:259:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-methods.R:53:3'): transpose errors ───────────────────────────
       Expected `.` to throw a error with class <crosstable_transpose_labels>.
       Backtrace:
           ▆
        1. ├─... %>% expect_error(class = "crosstable_transpose_labels") at test-methods.R:53:3
        2. └─testthat::expect_error(., class = "crosstable_transpose_labels")
       
       [ FAIL 1 | WARN 0 | SKIP 44 | PASS 350 ]
       Error:
       ! Test failures.
       Execution halted
     ```

