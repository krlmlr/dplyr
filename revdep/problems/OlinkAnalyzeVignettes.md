# OlinkAnalyzeVignettes (1.1.0)

* GitHub: <https://github.com/Olink-Proteomics/OlinkRPackage>
* Email: <mailto:biostattools@olink.com>
* GitHub mirror: <https://github.com/cran/OlinkAnalyzeVignettes>

Run `revdepcheck::revdep_details(, "OlinkAnalyzeVignettes")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     <error/tibble_error_already_has_rownames>
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     ---
     Backtrace:
         ▆
      1. └─OlinkAnalyze::olink_pca_plot(...)
      2.   └─OlinkAnalyze:::olink_pca_plot.internal(...)
      3.     └─OlinkAnalyze:::npxProcessing_forDimRed(...)
      4.       ├─base::as.matrix(...)
      5.       └─tibble::column_to_rownames(dplyr::select(df_wide, -dplyr::all_of("colors")), var = "SampleID")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'outlier_exclusion.Rmd' failed with diagnostics:
     `.data` must be a data frame without row names.
     --- failed re-building ‘outlier_exclusion.Rmd’
     
     --- re-building ‘plate_randomizer.Rmd’ using rmarkdown
     --- finished re-building ‘plate_randomizer.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘bridging_introduction.Rmd’ ‘outlier_exclusion.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

