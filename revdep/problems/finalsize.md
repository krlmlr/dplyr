# finalsize (0.2.1)

* GitHub: <https://github.com/epiverse-trace/finalsize>
* Email: <mailto:pratik.gupte@lshtm.ac.uk>
* GitHub mirror: <https://github.com/cran/finalsize>

Run `revdepcheck::revdep_details(, "finalsize")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      2. ├─base::as.matrix(.)
      3. └─tibble::column_to_rownames(., var = "age_group")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'susceptibility_matrices.Rmd' failed with diagnostics:
     `.data` must be a data frame without row names.
     --- failed re-building ‘susceptibility_matrices.Rmd’
     
     --- re-building ‘theoretical_background.Rmd’ using rmarkdown
     --- finished re-building ‘theoretical_background.Rmd’
     
     --- re-building ‘uncertainty_params.Rmd’ using rmarkdown
     --- finished re-building ‘uncertainty_params.Rmd’
     
     --- re-building ‘varying_contacts.Rmd’ using rmarkdown
     --- finished re-building ‘varying_contacts.Rmd’
     
     --- re-building ‘varying_susceptibility.Rmd’ using rmarkdown
     --- finished re-building ‘varying_susceptibility.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘susceptibility_matrices.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

