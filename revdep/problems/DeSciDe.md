# DeSciDe (1.0.3)

* GitHub: <https://github.com/camdouglas/DeSciDe>
* Email: <mailto:camerondouglas@ufl.edu>
* GitHub mirror: <https://github.com/cran/DeSciDe>

Run `revdepcheck::revdep_details(, "DeSciDe")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: plot_heatmap
     > ### Title: Plot Heatmap
     > ### Aliases: plot_heatmap
     > 
     > ### ** Examples
     > 
     > # Example data frame
     > data <- data.frame(Gene = c("Gene1", "Gene2"),
     +                    Term1 = c(10, 20),
     +                    Term2 = c(5, 15),
     +                    Total = c(15, 35),
     +                    PubMed_Rank = c(1, 2))
     > plot_heatmap(data, file_directory = tempdir(), export = FALSE)
     Error in `column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─DeSciDe::plot_heatmap(data, file_directory = tempdir(), export = FALSE)
      2. │ └─... %>% column_to_rownames("Gene")
      3. └─tibble::column_to_rownames(., "Gene")
      4.   └─tibble:::abort_already_has_rownames()
      5.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      6.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       ...
     --- re-building ‘DeSciDe-vignette.Rmd’ using rmarkdown
     
     Quitting from DeSciDe-vignette.Rmd:86-88 [unnamed-chunk-7]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/tibble_error_already_has_rownames>
     Error in `column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     ---
     Backtrace:
         ▆
      1. ├─DeSciDe::plot_heatmap(results$pubmed_results)
      2. │ └─... %>% column_to_rownames("Gene")
      3. └─tibble::column_to_rownames(., "Gene")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'DeSciDe-vignette.Rmd' failed with diagnostics:
     `.data` must be a data frame without row names.
     --- failed re-building ‘DeSciDe-vignette.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘DeSciDe-vignette.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

