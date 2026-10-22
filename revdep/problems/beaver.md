# beaver (1.0.0)

* GitHub: <https://github.com/rich-payne/beaver>
* Email: <mailto:hollins.showalter@gmail.com>
* GitHub mirror: <https://github.com/cran/beaver>

Run `revdepcheck::revdep_details(, "beaver")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-plot.R:622:3', 'test-plot.R:736:3', 'test-posterior.R:219:3',
         'test-posterior.R:430:3', 'test-posterior.R:641:3', 'test-posterior.R:812:3',
         'test-posterior.R:1345:3', 'test-posterior.R:2305:3', 'test-pr_eoi.R:4:3',
         'test-pr_eoi.R:465:3', 'test-pr_eoi.R:532:3', 'test-pr_eoi.R:755:3',
         'test-pr_eoi.R:1262:3', 'test-pr_eoi.R:1341:3', 'test-pr_eoi.R:1693:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-data.R:45:3'): data_negbin_emax produces an S3 data.frame object with correct properties ──
       Expected `data %>% dplyr::select(colnames(x))` to be identical to `x %>% tibble::as_tibble()`.
       Differences:
       `attr(actual$(Intercept), 'assign')` is absent
       `attr(expected$(Intercept), 'assign')` is an integer vector (0, 1)
       
       `attr(actual$log_age, 'assign')` is absent
       `attr(expected$log_age, 'assign')` is an integer vector (0, 1)
       
       Backtrace:
           ▆
        1. └─beaver:::data_negbin_emax_checks(...) at test-data.R:45:3
        2.   └─testthat::expect_identical(...) at ./helper-data.R:71:5
       
       [ FAIL 1 | WARN 0 | SKIP 18 | PASS 1630 ]
       Error:
       ! Test failures.
       Execution halted
     ```

