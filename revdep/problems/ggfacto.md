# ggfacto (0.4.0)

* GitHub: <https://github.com/BriceNocenti/ggfacto>
* Email: <mailto:brice.nocenti@gmail.com>
* GitHub mirror: <https://github.com/cran/ggfacto>

Run `revdepcheck::revdep_details(, "ggfacto")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(dplyr::select(X.ind.sup, "name", tidyselect::all_of(active_vars)), "name")`: `.data` must be a data frame without row names.
       Backtrace:
            ▆
         1. ├─testthat::expect_s3_class(quietly(ggpca_3d(fx_pca())), "plotly") at test-plots.R:362:3
         2. │ └─testthat::quasi_label(enquo(object))
         3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
         4. ├─ggfacto:::quietly(ggpca_3d(fx_pca()))
         5. │ ├─utils::capture.output(out <- suppressMessages(force(expr))) at ./helper-fixtures.R:145:3
         6. │ │ └─base::withVisible(...elt(i))
         7. │ ├─base::suppressMessages(force(expr))
         8. │ │ └─base::withCallingHandlers(...)
         9. │ └─base::force(expr)
        10. └─ggfacto::ggpca_3d(fx_pca())
        11.   └─ggfacto:::PCA_ind.sup_coord(...)
        12.     ├─base::as.matrix(...)
        13.     └─tibble::column_to_rownames(...)
        14.       └─tibble:::abort_already_has_rownames()
        15.         └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        16.           └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 1 | WARN 0 | SKIP 9 | PASS 2487 ]
       Error:
       ! Test failures.
       Execution halted
     ```

