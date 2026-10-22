# mariposa (0.7.4)

* GitHub: <https://github.com/YannickDiehl/mariposa>
* Email: <mailto:yannick.diehl@gmail.com>
* GitHub mirror: <https://github.com/cran/mariposa>

Run `revdepcheck::revdep_details(, "mariposa")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-wilcoxon-test-spss-validation.R:286:3',
         'test-wilcoxon-test-spss-validation.R:292:3',
         'test-wilcoxon-test-spss-validation.R:302:5',
         'test-wilcoxon-test-spss-validation.R:354:3',
         'test-wilcoxon-test-spss-validation.R:361:3',
         'test-wilcoxon-test-spss-validation.R:368:3',
         'test-wilcoxon-test-spss-validation.R:383:3'
       • R/ sources not available (1): 'test-practice-PAR.R:775:3'
       • R/ sources not available (installed package) (2):
         'test-console-discipline.R:39:3', 'test-practice-X3.R:135:3'
       • VALIDATION_EXCEPTIONS.md is not part of this checkout (.claude/ is local).
         (1): 'test-validation-discipline.R:276:5'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-audit-regressions.R:945:3'): to_label() keeps the original codes for to_numeric() and to_labelled() ──
       Expected `as.vector(to_numeric(d2$x))` to equal `c(6, 42, 90, 91, 6)`.
       Differences:
         `actual`: 3.0  4.0  5.0  6.0 3.0
       `expected`: 6.0 42.0 90.0 91.0 6.0
       
       
       [ FAIL 1 | WARN 0 | SKIP 340 | PASS 6678 ]
       Error:
       ! Test failures.
       Execution halted
     ```

