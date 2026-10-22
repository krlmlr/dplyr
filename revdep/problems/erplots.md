# erplots (0.2.0)

* GitHub: <https://github.com/djnavarro/erplots>
* Email: <mailto:djnavarro@protonmail.com>
* GitHub mirror: <https://github.com/cran/erplots>

Run `revdepcheck::revdep_details(, "erplots")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `expected` is a character vector ('Weight')
       
       ── Failure ('test-er-plot-layer.R:411:3'): .layer_group constructs the correct data structure ──
       Expected `attr(fct1s, "label")` to equal `attr(er_test_data$sex, "label")`.
       Differences:
       `actual` is NULL
       `expected` is a character vector ('Sex')
       
       ── Failure ('test-er-plot-layer.R:440:3'): er_plot_add_groups() forwards ties/quantile_type/labeller to cut_exposure_quantile()/cut_quantile() ──
       Expected `attr(fct_exposure, "ties")` to equal "downward".
       Differences:
       `actual` is NULL
       `expected` is a character vector ('downward')
       
       ── Failure ('test-er-plot-layer.R:442:3'): er_plot_add_groups() forwards ties/quantile_type/labeller to cut_exposure_quantile()/cut_quantile() ──
       Expected `attr(fct_covariate, "ties")` to equal "downward".
       Differences:
       `actual` is NULL
       `expected` is a character vector ('downward')
       
       
       [ FAIL 7 | WARN 6 | SKIP 41 | PASS 1568 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking for unstated dependencies in ‘tests’ ... WARNING
     ```
     '::' or ':::' import not declared from: ‘ertte’
     ```

