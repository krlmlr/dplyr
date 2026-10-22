# tidyheatmaps (0.2.1)

* GitHub: <https://github.com/jbengler/tidyheatmaps>
* Email: <mailto:broder.engler@gmail.com>
* GitHub mirror: <https://github.com/cran/tidyheatmaps>

Run `revdepcheck::revdep_details(, "tidyheatmaps")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     +             scale = "row",
     +             colors = c("#145afc","#ffffff","#ee4445")
     + )
     > 
     > # Add row and column annotation
     > tidyheatmap(data_exprs,
     +             rows = external_gene_name,
     +             columns = sample,
     +             values = expression,
     +             scale = "row",
     +             annotation_col = c(sample_type, condition, group),
     +             annotation_row = c(is_immune_gene, direction)
     + )
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─tidyheatmaps::tidyheatmap(...)
      2. │ └─tidyheatmaps:::wrangle_data(...)
      3. │   └─... %>% tibble::column_to_rownames(colnames(.)[1])
      4. └─tibble::column_to_rownames(., colnames(.)[1])
      5.   └─tibble:::abort_already_has_rownames()
      6.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      7.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       Saving _problems/test-tidyheatmap-37.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 7 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-tidyheatmap.R:30:3'): gtable output is produced ────────────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., colnames(.)[1])`: `.data` must be a data frame without row names.
       Backtrace:
            ▆
         1. ├─testthat::expect_equal(...) at test-tidyheatmap.R:30:3
         2. │ └─testthat::quasi_label(enquo(object), label)
         3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
         4. ├─... %>% .[1]
         5. ├─tidyheatmaps::tidyheatmap(...)
         6. │ └─tidyheatmaps:::wrangle_data(...)
         7. │   └─... %>% tibble::column_to_rownames(colnames(.)[1])
         8. └─tibble::column_to_rownames(., colnames(.)[1])
         9.   └─tibble:::abort_already_has_rownames()
        10.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        11.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 7 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     --- re-building ‘tidyheatmaps.Rmd’ using rmarkdown
     
     Quitting from tidyheatmaps.Rmd:125-134 [unnamed-chunk-11]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/tibble_error_already_has_rownames>
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     ---
     Backtrace:
         ▆
      1. ├─tidyheatmaps::tidyheatmap(...)
      2. │ └─tidyheatmaps:::wrangle_data(...)
      3. │   └─... %>% tibble::column_to_rownames(colnames(.)[1])
      4. └─tibble::column_to_rownames(., colnames(.)[1])
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'tidyheatmaps.Rmd' failed with diagnostics:
     `.data` must be a data frame without row names.
     --- failed re-building ‘tidyheatmaps.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘tidyheatmaps.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

