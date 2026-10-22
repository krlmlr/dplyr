# broom.helpers (1.23.0)

* GitHub: <https://github.com/larmarange/broom.helpers>
* Email: <mailto:joseph@larmarange.net>
* GitHub mirror: <https://github.com/cran/broom.helpers>

Run `revdepcheck::revdep_details(, "broom.helpers")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-tidy_plus_plus.R:996:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-add_variable_labels.R:156:3'): tidy_add_variable_labels() works with variables having non standard name ──
       Expected `res$var_label` to equal `c(...)`.
       Differences:
           actual                   | expected                          
       [1] "(Intercept)"            | "(Intercept)"                  [1]
       [2] "marker"                 - "Marker Level (ng/mL)"         [2]
       [3] "grade of kids"          - "Grade"                        [3]
       [4] "grade of kids"          - "Grade"                        [4]
       [5] "marker * grade of kids" - "Marker Level (ng/mL) * Grade" [5]
       [6] "marker * grade of kids" - "Marker Level (ng/mL) * Grade" [6]
       
       ── Failure ('test-identify_variables.R:15:3'): model_list_variables() tests ────
       Expected `res$var_class` to equal `c(...)`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('response', 'age', 'grade', 'trt', 'death', ...)
       
       
       [ FAIL 2 | WARN 0 | SKIP 99 | PASS 407 ]
       Error:
       ! Test failures.
       Execution halted
     ```

