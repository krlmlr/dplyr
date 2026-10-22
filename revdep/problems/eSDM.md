# eSDM (0.4.4)

* GitHub: <https://github.com/swfsc/eSDM>
* Email: <mailto:sam.woodman@noaa.gov>
* GitHub mirror: <https://github.com/cran/eSDM>

Run `revdepcheck::revdep_details(, "eSDM")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     Error(s) in re-building vignettes:
       ...
     --- re-building ‘example-analysis.Rmd’ using rmarkdown
     
     Quitting from example-analysis.Rmd:328-351 [unnamed-chunk-19]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error:
     ! 'predictions' contains NA.
     ---
     Backtrace:
         ▆
      1. └─eSDM::evaluation_metrics(over1.sf, 1, valid.data, "pres_abs")
      2.   └─ROCR::prediction(xy.data.overlap[[1]], xy.data.overlap[[2]])
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'example-analysis.Rmd' failed with diagnostics:
     'predictions' contains NA.
     --- failed re-building ‘example-analysis.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘example-analysis.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

