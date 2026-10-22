# fishmechr (1.0.3)

* GitHub: <https://github.com/tytell/fishmechr>
* Email: <mailto:eric.tytell@tufts.edu>
* GitHub mirror: <https://github.com/cran/fishmechr>

Run `revdepcheck::revdep_details(, "fishmechr")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     --- re-building ‘prickleback_swimming.Rmd’ using rmarkdown
     --- finished re-building ‘prickleback_swimming.Rmd’
     
     --- re-building ‘process_sleap_data.Rmd’ using rmarkdown
     
     Quitting from process_sleap_data.Rmd:209-225 [unnamed-chunk-19]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error in `if (...) NULL`:
     ! missing value where TRUE/FALSE needed
     ---
     Backtrace:
         ▆
      1. └─fishmechr::get_primary_swimming_axis_df(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'process_sleap_data.Rmd' failed with diagnostics:
     missing value where TRUE/FALSE needed
     --- failed re-building ‘process_sleap_data.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘process_sleap_data.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

