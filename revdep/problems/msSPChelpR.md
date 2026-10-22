# msSPChelpR (0.9.1)

* GitHub: <https://github.com/marianschmidt/msSPChelpR>
* Email: <mailto:marian.eberl@tum.de>
* GitHub mirror: <https://github.com/cran/msSPChelpR>

Run `revdepcheck::revdep_details(, "msSPChelpR")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     Error(s) in re-building vignettes:
       ...
     --- re-building ‘introduction.Rmd’ using rmarkdown
     
     Quitting from introduction.Rmd:221-231 [unnamed-chunk-9]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error in `if (fu_end_status != fu_end_param) ...`:
     ! argument is of length zero
     ---
     Backtrace:
         ▆
      1. ├─usdata_wide %>% ...
      2. └─msSPChelpR::calc_futime(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'introduction.Rmd' failed with diagnostics:
     argument is of length zero
     --- failed re-building ‘introduction.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘introduction.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

