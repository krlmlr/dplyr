# obrasgovr (0.1.0)

* GitHub: <https://github.com/StrategicProjects/obrasgovr>
* Email: <mailto:leite@castlab.org>
* GitHub mirror: <https://github.com/cran/obrasgovr>

Run `revdepcheck::revdep_details(, "obrasgovr")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       4.     │ └─rlang::try_fetch(...)
       5.     │   └─base::withCallingHandlers(...)
       6.     └─purrr::map(...)
       7.       └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
       8.         ├─purrr:::with_indexed_errors(...)
       9.         │ └─base::withCallingHandlers(...)
      10.         ├─purrr:::call_with_cleanup(...)
      11.         └─tidyr (local) .f(.x[[i]], ...)
      12.           └─tidyr:::elt_to_wide(...)
      13.             └─tidyr:::stop_use_names_sep(error_call = error_call)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'pagination-and-nested-data.Rmd' failed with diagnostics:
     ℹ In column: `executores`.
     ℹ In row: 1.
     Caused by error:
     ! Can't unnest elements with missing names.
     ℹ Supply `names_sep` to generate automatic names.
     --- failed re-building ‘pagination-and-nested-data.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘pagination-and-nested-data.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

