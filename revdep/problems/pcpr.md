# pcpr (1.0.0)

* GitHub: <https://github.com/Columbia-PRIME/pcpr>
* Email: <mailto:lawrencechillrud@gmail.com>
* GitHub mirror: <https://github.com/cran/pcpr>

Run `revdepcheck::revdep_details(, "pcpr")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      14. │           └─tidyselect:::eval_context(expr, context_mask, call = error_call)
      15. │             ├─tidyselect:::with_chained_errors(...)
      16. │             │ └─base::withCallingHandlers(...)
      17. │             └─rlang::eval_tidy(as_quosure(expr, env), context_mask)
      18. └─tidyselect::all_of(colnames(D))
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'pcp-applied.Rmd' failed with diagnostics:
     ℹ In argument: `tidyselect::all_of(colnames(D))`.
     Caused by error in `tidyselect::all_of()`:
     ! Can't subset elements that don't exist.
     ✖ Elements `1`, `2`, `3`, `4`, `5`, etc. don't exist.
     --- failed re-building ‘pcp-applied.Rmd’
     
     --- re-building ‘pcp-quickstart.Rmd’ using rmarkdown
     --- finished re-building ‘pcp-quickstart.Rmd’
     
     --- re-building ‘theory-crash-course.Rmd’ using rmarkdown
     --- finished re-building ‘theory-crash-course.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘pcp-applied.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

