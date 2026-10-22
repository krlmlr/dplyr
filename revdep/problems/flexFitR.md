# flexFitR (1.2.4)

* GitHub: <https://github.com/AparicioJohan/flexFitR>
* Email: <mailto:aparicioarce@wisc.edu>
* GitHub mirror: <https://github.com/cran/flexFitR>

Run `revdepcheck::revdep_details(, "flexFitR")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      1. ├─stats::predict(mod, x = 4.5)
      2. └─flexFitR:::predict.modeler(mod, x = 4.5)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'how_to_start.Rmd' failed with diagnostics:
     x needs to be in the interval <1, 1>
     --- failed re-building ‘how_to_start.Rmd’
     
     --- re-building ‘maturity-model.Rmd’ using rmarkdown
     --- finished re-building ‘maturity-model.Rmd’
     
     --- re-building ‘modeling_soybean.Rmd’ using rmarkdown
     --- finished re-building ‘modeling_soybean.Rmd’
     
     --- re-building ‘plotting.Rmd’ using rmarkdown
     --- finished re-building ‘plotting.Rmd’
     
     --- re-building ‘predicted_values.Rmd’ using rmarkdown
     --- finished re-building ‘predicted_values.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘how_to_start.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

