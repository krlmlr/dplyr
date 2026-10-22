# MeasurementDiagnostics (0.3.0)

* GitHub: <https://github.com/ohdsi/MeasurementDiagnostics>
* Email: <mailto:nuria.mercadebesora@ndorms.ox.ac.uk>
* GitHub mirror: <https://github.com/cran/MeasurementDiagnostics>

Run `revdepcheck::revdep_details(, "MeasurementDiagnostics")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        13. │         │ └─rlang::try_fetch(rel, error = identity)
        14. │         │   ├─base::tryCatch(...)
        15. │         │   │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        16. │         │   │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        17. │         │   │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        18. │         │   └─base::withCallingHandlers(...)
        19. │         └─duckdb$rel_to_table(rel, schema_name, name, temporary)
        20. │           └─duckdb:::rethrow_rapi_rel_to_table(...)
        21. │             ├─rlang::try_fetch(...)
        22. │             │ ├─base::tryCatch(...)
        23. │             │ │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        24. │             │ │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        25. │             │ │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        26. │             │ └─base::withCallingHandlers(...)
        27. │             └─duckdb:::rapi_rel_to_table(rel, schema_name, table_name, temporary)
        28. └─base::.handleSimpleError(...)
        29.   └─rlang (local) h(simpleError(msg, call))
        30.     └─handlers[[1L]](cnd)
        31.       └─duckdb:::rethrow_error_from_rapi(e, call)
        32.         └─rlang::abort(msg, call = call)
       
       [ FAIL 4 | WARN 0 | SKIP 10 | PASS 4 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     Error: processing vignette 'a01_summariseMeasurementUse.Rmd' failed with diagnostics:
     argument is not a character vector
     --- failed re-building ‘a01_summariseMeasurementUse.Rmd’
     
     --- re-building ‘a02_summariseCohortMeasurementUse.Rmd’ using rmarkdown
     trying URL 'https://cdmconnectordata.blob.core.windows.net/cdmconnector-example-data/GiBleed_5.3.zip'
     Content type 'application/zip' length 6754786 bytes (6.4 MB)
     ==================================================
     downloaded 6.4 MB
     
     --- finished re-building ‘a02_summariseCohortMeasurementUse.Rmd’
     
     --- re-building ‘a03_resultsVisualisation.Rmd’ using rmarkdown
     trying URL 'https://cdmconnectordata.blob.core.windows.net/cdmconnector-example-data/GiBleed_5.3.zip'
     Content type 'application/zip' length 6754786 bytes (6.4 MB)
     ==================================================
     downloaded 6.4 MB
     
     --- finished re-building ‘a03_resultsVisualisation.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘a01_summariseMeasurementUse.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

