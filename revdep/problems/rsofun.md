# rsofun (5.1.0)

* GitHub: <https://github.com/geco-bern/rsofun>
* Email: <mailto:benjamin.stocker@gmail.com>
* GitHub mirror: <https://github.com/cran/rsofun>

Run `revdepcheck::revdep_details(, "rsofun")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `names(expected)` is absent
       
       ── Failure ('test-likelihoods.R:127:3'): test likelihood/RMSE calculations with pmodel ──
       Expected `ll_values3` to equal `c(...)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3', '4', '5')
       `names(expected)` is absent
       
       ── Failure ('test-likelihoods.R:139:3'): test likelihood/RMSE calculations with pmodel ──
       Expected `ll_values2` to equal `c(...)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3', '4', '5')
       `names(expected)` is absent
       
       ── Failure ('test-likelihoods.R:242:3'): test likelihood/RMSE calculations with BiomeE ──
       Expected `relError_values_BiomeE` to equal `c(0.42976158393698, 0.168135096963972, 0.152359273844623, 0.316205527799935)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3', '4')
       `names(expected)` is absent
       
       
       [ FAIL 5 | WARN 8 | SKIP 20 | PASS 3 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     ℹ In index: 1.
     Caused by error in `luc_forcing[, 1, 1]`:
     ! incorrect number of dimensions
     --- failed re-building ‘biomee_luluc.Rmd’
     
     --- re-building ‘biomee_use.Rmd’ using rmarkdown
     --- finished re-building ‘biomee_use.Rmd’
     
     --- re-building ‘data_format.Rmd’ using rmarkdown
     --- finished re-building ‘data_format.Rmd’
     
     --- re-building ‘new_cost_function.Rmd’ using rmarkdown
     --- finished re-building ‘new_cost_function.Rmd’
     
     --- re-building ‘pmodel_use.Rmd’ using rmarkdown
     --- finished re-building ‘pmodel_use.Rmd’
     
     --- re-building ‘sensitivity_analysis.Rmd’ using rmarkdown
     --- finished re-building ‘sensitivity_analysis.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘biomee_luluc.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

