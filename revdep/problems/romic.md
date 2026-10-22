# romic (1.3.3)

* GitHub: <https://github.com/shackett/romic>
* Email: <mailto:seanrhackett@gmail.com>
* GitHub mirror: <https://github.com/cran/romic>

Run `revdepcheck::revdep_details(, "romic")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-data_classes.R:230:1', 'test-data_classes.R:356:1',
         'test-data_classes.R:369:1', 'test-data_classes.R:394:1',
         'test-design.R:1:1', 'test-design.R:15:1', 'test-dim_reduction.R:45:1',
         'test-filters.R:1:1', 'test-filters.R:1:1', 'test-filters.R:1:1',
         'test-filters.R:1:1', 'test-mutates.R:14:1', 'test-mutates.R:37:1',
         'test-mutates.R:78:1', 'test-mutates.R:141:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-hclust.R:92:3'): downsampling features (for creating a heatmap works) ──
       Expected `nrow(downsampled_df)` to equal 3600.
       Differences:
         `actual`:   36.0
       `expected`: 3600.0
       
       ── Failure ('test-hclust.R:93:3'): downsampling features (for creating a heatmap works) ──
       Expected `length(unique(downsampled_df$name))` to equal 100.
       Differences:
         `actual`:   1.0
       `expected`: 100.0
       
       
       [ FAIL 2 | WARN 0 | SKIP 17 | PASS 137 ]
       Error:
       ! Test failures.
       Execution halted
     ```

