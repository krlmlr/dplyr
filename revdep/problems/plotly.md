# plotly (4.12.1)

* GitHub: <https://github.com/plotly/plotly.R>
* Email: <mailto:cpsievert1@gmail.com>
* GitHub mirror: <https://github.com/cran/plotly>

Run `revdepcheck::revdep_details(, "plotly")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-ggplot-heatmap.R:12:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-ggplot-lines.R:139:3'): NA values do not cause a lot of warnings when ploting (#1299) ──
       Error: GetQueryResult: Error evaluating duckdb query: Binder Error: ENUM type requires at least one argument
       Backtrace:
            ▆
         1. ├─testthat::expect_warning(plotly_build(p), "Ignoring") at test-ggplot-lines.R:139:3
         2. │ └─testthat:::quasi_capture(...)
         3. │   ├─testthat (local) .capture(...)
         4. │   │ └─base::withCallingHandlers(...)
         5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
         6. ├─plotly::plotly_build(p)
         7. └─plotly:::plotly_build.plotly(p)
         8.   └─base::Map(...)
         9.     └─base::mapply(FUN = f, ..., SIMPLIFY = FALSE)
        10.       └─plotly (local) `<fn>`(dots[[1L]][[1L]], dots[[2L]][[1L]])
        11.         └─base::lengths(trace)
       
       [ FAIL 1 | WARN 23 | SKIP 63 | PASS 1458 ]
       Deleting unused snapshots: 'ggplot-contour/contour.svg' and
       'ggplot-heatmap/heatmap.svg'
       Error:
       ! Test failures.
       Execution halted
     ```

