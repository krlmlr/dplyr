# LongDat (1.1.4)

* GitHub: <https://github.com/CCY-dev/LongDat>
* Email: <mailto:jessica821112@gmail.com>
* GitHub mirror: <https://github.com/cran/LongDat>

Run `revdepcheck::revdep_details(, "LongDat")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     [1] "Finish unlisting tables from covariate model result."
     [1] "Start calculating effect size."
     [1] 1
     [1] 2
     [1] 3
     [1] "Finish calculating effect size."
     [1] "Start randomized negative control model test."
     [1] 1
     [1] 2
     [1] 3
     [1] 1
     [1] 2
     [1] 3
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─LongDat::longdat_disc(...)
      2. │ └─LongDat:::random_neg_ctrl_disc(...)
      3. │   └─... %>% tibble::column_to_rownames()
      4. └─tibble::column_to_rownames(.)
      5.   └─tibble:::abort_already_has_rownames()
      6.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      7.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     
     
     Quitting from LongDat_disc_tutorial.Rmd:107-115 [unnamed-chunk-7]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/tibble_error_already_has_rownames>
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     ---
     Backtrace:
         ▆
      1. ├─LongDat::longdat_disc(...)
      2. │ └─LongDat:::random_neg_ctrl_disc(...)
      3. │   └─... %>% tibble::column_to_rownames()
      4. └─tibble::column_to_rownames(.)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'LongDat_disc_tutorial.Rmd' failed with diagnostics:
     `.data` must be a data frame without row names.
     --- failed re-building ‘LongDat_disc_tutorial.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘LongDat_cont_tutorial.Rmd’ ‘LongDat_disc_tutorial.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

