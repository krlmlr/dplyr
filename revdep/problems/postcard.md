# postcard (1.1.0)

* GitHub: <https://github.com/NovoNordisk-OpenSource/postcard>
* Email: <mailto:mathiasljeppesen@outlook.com>
* GitHub mirror: <https://github.com/cran/postcard>

Run `revdepcheck::revdep_details(, "postcard")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      1. ├─postcard::rctglm_with_prognosticscore(...)
      2. │ └─postcard::fit_best_learner(...)
      3. │   └─postcard:::get_best_learner(...)
      4. │     └─... %>% dplyr::pull("wflow_id")
      5. ├─dplyr::pull(., "wflow_id")
      6. ├─dplyr::filter(., dplyr::row_number() == 1)
      7. ├─dplyr::select(...)
      8. └─workflowsets::rank_results(., rank_metric = "rmse")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'model-fit.Rmd' failed with diagnostics:
     "rmse" was not in the metric set. Please choose from: .
     --- failed re-building ‘model-fit.Rmd’
     
     --- re-building ‘postcard.Rmd’ using rmarkdown
     --- finished re-building ‘postcard.Rmd’
     
     --- re-building ‘prospective-power.Rmd’ using rmarkdown
     --- finished re-building ‘prospective-power.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘model-fit.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

