# OlinkAnalyze (5.1.0)

* GitHub: <https://github.com/Olink-Proteomics/OlinkRPackage>
* Email: <mailto:biostattools@olink.com>
* GitHub mirror: <https://github.com/cran/OlinkAnalyze>

Run `revdepcheck::revdep_details(, "OlinkAnalyze")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         1. ├─testthat::expect_warning(...) at test-plot_umap.R:234:5
         2. │ └─testthat:::expect_condition_matching_(...)
         3. │   └─testthat:::quasi_capture(...)
         4. │     ├─testthat (local) .capture(...)
         5. │     │ └─base::withCallingHandlers(...)
         6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
         7. ├─testthat::expect_warning(...)
         8. │ └─testthat:::expect_condition_matching_(...)
         9. │   └─testthat:::quasi_capture(...)
        10. │     ├─testthat (local) .capture(...)
        11. │     │ └─base::withCallingHandlers(...)
        12. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        13. └─OlinkAnalyze::olink_umap_plot(...)
        14.   └─OlinkAnalyze:::olink_umap_plot.internal(...)
        15.     └─OlinkAnalyze:::npxProcessing_forDimRed(...)
        16.       ├─base::as.matrix(...)
        17.       └─tibble::column_to_rownames(dplyr::select(df_wide, -dplyr::all_of("colors")), var = "SampleID")
        18.         └─tibble:::abort_already_has_rownames()
        19.           └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        20.             └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 16 | WARN 0 | SKIP 296 | PASS 1870 ]
       Error:
       ! Test failures.
       Execution halted
     ```

