# grobblR (0.2.2)

* GitHub: <https://github.com/calvinmfloyd/grobblR>
* Email: <mailto:calvin.michael.floyd@gmail.com>
* GitHub mirror: <https://github.com/cran/grobblR>

Run `revdepcheck::revdep_details(, "grobblR")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: add_aesthetic
     > ### Title: Add an Aesthetic
     > ### Aliases: add_aesthetic
     > 
     > ### ** Examples
     > 
     > 
     > df = data.frame(var1 = c(5, 14, 6, 10), var2 = c(3, 30, 17, 7))
     > df %>%
     +   grob_matrix() %>% 
     +   add_aesthetic(aesthetic = 'text_color', value = 'red', group = 'cells') %>%
     +   view_grob()
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpr5dTs9/working_dir/Rtmp3q4KR5/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        11. └─grobblR (local) `<fn>`()
        12.   ├─default[["value"]]
        13.   └─tibble:::`[[.tbl_df`(default, "value")
       ── Error ('test_matrix_aesthetics.R:84:5'): No errors when inputting a character string for font_face in alter_at() ('bold', 'italic', etc). ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
            ▆
         1. ├─testthat::expect_true(grid::is.grob(gl$grob)) at test_matrix_aesthetics.R:84:5
         2. │ └─testthat::quasi_label(enquo(object), label)
         3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
         4. ├─grid::is.grob(gl$grob)
         5. ├─grobblR (local) `<fn>`()
         6. │ └─grid::gList(raw_grobs, grob_row_clone$grob)
         7. ├─grobblR (local) `<fn>`()
         8. │ └─grid::gList(raw_grobs, grob_col_clone$grob)
         9. ├─grobblR (local) `<fn>`()
        10. │ └─grobblR:::convert_to_grob(...)
        11. └─grobblR (local) `<fn>`()
        12.   ├─default[["value"]]
        13.   └─tibble:::`[[.tbl_df`(default, "value")
       
       [ FAIL 4 | WARN 1 | SKIP 0 | PASS 16 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
          ▆
       1. ├─... %>% view_grob()
       2. ├─grobblR::view_grob(.)
       3. │ └─gridExtra::grid.arrange(grob$grob)
       4. │   └─gridExtra::arrangeGrob(...)
       5. ├─grobblR (local) `<fn>`()
       6. │ └─grid::gList(raw_grobs, grob_row_clone$grob)
       7. ├─grobblR (local) `<fn>`()
       8. │ └─grid::gList(raw_grobs, grob_col_clone$grob)
       9. ├─grobblR (local) `<fn>`()
      10. │ └─grobblR:::convert_to_grob(...)
      11. └─grobblR (local) `<fn>`()
      12.   ├─default[["value"]]
      13.   └─tibble:::`[[.tbl_df`(default, "value")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'grobblR.Rmd' failed with diagnostics:
     GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘grobblR.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘grob_layout.Rmd’ ‘grob_matrix.Rmd’ ‘grobblR.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

