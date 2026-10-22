# broom (1.0.13)

* GitHub: <https://github.com/tidymodels/broom>
* Email: <mailto:emil.hvitfeldt@posit.co>
* GitHub mirror: <https://github.com/cran/broom>

Run `revdepcheck::revdep_details(, "broom")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `names(expected$statistic)` is a character vector ('value')
       
       `names(actual$p.value)` is absent
       `names(expected$p.value)` is a character vector ('value')
       
       `names(actual$df)` is absent
       `names(expected$df)` is a character vector ('numdf')
       
       ── Failure ('test-stats-summary-lm.R:40:3'): glance.summary.lm ─────────────────
       Expected `dplyr::select(gl2, -c("logLik", "AIC", "BIC", "deviance"))` to equal `sgl2`.
       Differences:
       `names(actual$statistic)` is absent
       `names(expected$statistic)` is a character vector ('value')
       
       `names(actual$p.value)` is absent
       `names(expected$p.value)` is a character vector ('value')
       
       `names(actual$df)` is absent
       `names(expected$df)` is a character vector ('numdf')
       
       
       [ FAIL 2 | WARN 0 | SKIP 99 | PASS 1007 ]
       Error:
       ! Test failures.
       Execution halted
     ```

