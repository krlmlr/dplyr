# HaploVar (0.1.2)

* Email: <mailto:tessamacnish@gmail.com>
* GitHub mirror: <https://github.com/cran/HaploVar>

Run `revdepcheck::revdep_details(, "HaploVar")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     Quitting from introduction.Rmd:78-82 [define_haplotypes]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/tibble_error_already_has_rownames>
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     ---
     Backtrace:
         ▆
      1. ├─HaploVar::define_haplotypes(vcf, LD, epsilon = 0.8)
      2. │ └─... %>% ...
      3. ├─dplyr::mutate_all(...)
      4. │ └─dplyr:::check_grouped(.tbl, "mutate", "all", alt = TRUE)
      5. │   └─dplyr::is_grouped_df(tbl)
      6. └─tibble::column_to_rownames(., "ID")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'introduction.Rmd' failed with diagnostics:
     `.data` must be a data frame without row names.
     --- failed re-building ‘introduction.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘introduction.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

