# raretrans (1.0.5)

* GitHub: <https://github.com/atiretoo/raretrans>
* Email: <mailto:raymond.tremblay@upr.edu>
* GitHub mirror: <https://github.com/cran/raretrans>

Run `revdepcheck::revdep_details(, "raretrans")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      11.           │ ├─base::tryCatch(...)
      12.           │ │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
      13.           │ │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
      14.           │ │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
      15.           │ └─base::withCallingHandlers(...)
      16.           └─ggplot2 (local) f(l = layers[[i]], d = data[[i]])
      17.             └─l$layer_data(plot@data)
      18.               └─ggplot2::layer_data(..., self = self)
      19.                 └─ggplot2:::unrowname(data)
      20.                   ├─base::.set_row_names(.row_names_info(x, 2L))
      21.                   └─base::.row_names_info(x, 2L)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'transition_priors.Rmd' failed with diagnostics:
     Problem while computing layer data.
     ℹ Error occurred in the 2nd layer.
     Caused by error:
     ! GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘transition_priors.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘transition_priors.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

