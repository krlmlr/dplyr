# tidycomm (0.4.2)

* GitHub: <https://github.com/tidycomm/tidycomm>
* Email: <mailto:julian.unkel@gmail.com>
* GitHub mirror: <https://github.com/cran/tidycomm>

Run `revdepcheck::revdep_details(, "tidycomm")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-tab_percentiles.R:6:3'): tab_percentiles calculates correct percentiles ──
       Expected `result$p10` to equal `quantile(data$autonomy_emphasis, 0.1, na.rm = TRUE)`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('10%')
       
       ── Failure ('test-tab_percentiles.R:14:3'): tab_percentiles calculates custom percentile levels correctly ──
       Expected `result$p25` to equal `quantile(data$autonomy_emphasis, 0.25, na.rm = TRUE)`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('25%')
       
       ── Failure ('test-tab_percentiles.R:15:3'): tab_percentiles calculates custom percentile levels correctly ──
       Expected `result$p75` to equal `quantile(data$autonomy_emphasis, 0.75, na.rm = TRUE)`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('75%')
       
       
       [ FAIL 3 | WARN 3 | SKIP 0 | PASS 388 ]
       Error:
       ! Test failures.
       Execution halted
     ```

