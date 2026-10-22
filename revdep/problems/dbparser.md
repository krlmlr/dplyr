# dbparser (2.2.1)

* GitHub: <https://github.com/ropensci/dbparser>
* Email: <mailto:moh_fcis@yahoo.com>
* GitHub mirror: <https://github.com/cran/dbparser>

Run `revdepcheck::revdep_details(, "dbparser")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     <error/tibble_error_already_has_rownames>
     Error in `column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     ---
     Backtrace:
         ▆
      1. ├─... %>% column_to_rownames("type")
      2. └─tibble::column_to_rownames(., "type")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'dbparser.Rmd' failed with diagnostics:
     `.data` must be a data frame without row names.
     --- failed re-building ‘dbparser.Rmd’
     
     --- re-building ‘dbparser_2_2.Rmd’ using rmarkdown
     --- finished re-building ‘dbparser_2_2.Rmd’
     
     --- re-building ‘drugbank_nside.Rmd’ using rmarkdown
     --- finished re-building ‘drugbank_nside.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘dbparser.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

