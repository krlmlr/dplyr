# TreatmentPatterns (3.1.2)

* GitHub: <https://github.com/darwin-eu/TreatmentPatterns>
* Email: <mailto:m.l.vankessel@erasmusmc.nl>
* GitHub mirror: <https://github.com/cran/TreatmentPatterns>

Run `revdepcheck::revdep_details(, "TreatmentPatterns")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         27.  └─rlang::abort(...)
         Ran 4/4 deferred expressions
         No deferred expressions to run
         
       Backtrace:
            ▆
         1. └─testthat::test_check("TreatmentPatterns")
         2.   └─testthat::test_dir(...)
         3.     └─testthat:::test_files(...)
         4.       └─testthat:::test_files_parallel(...)
         5.         ├─withr::with_dir(...)
         6.         │ └─base::force(code)
         7.         ├─testthat::with_reporter(...)
         8.         │ └─base::tryCatch(...)
         9.         │   └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        10.         │     └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        11.         │       └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        12.         └─testthat:::parallel_event_loop_chunky(queue, reporters, ".")
        13.           └─queue$poll(Inf)
        14.             └─base::lapply(...)
        15.               └─testthat (local) FUN(X[[i]], ...)
        16.                 └─private$handle_error(msg, i)
        17.                   └─cli::cli_abort(...)
        18.                     └─rlang::abort(...)
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       4. │   └─duckdb:::path_normalize(dbdir)
       5. └─CDMConnector::eunomiaDir()
       6.   ├─DBI::dbCreateTable(...)
       7.   └─DBI::dbCreateTable(...)
       8.     ├─DBI::sqlCreateTable(...)
       9.     └─DBI::sqlCreateTable(...)
      10.       ├─DBI::dbQuoteIdentifier(con, names(fields))
      11.       └─duckdb::dbQuoteIdentifier(con, names(fields))
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'a030_Evaluating_Output.Rmd' failed with diagnostics:
     argument is not a character vector
     --- failed re-building ‘a030_Evaluating_Output.Rmd’
     
     --- re-building ‘a998_Strategus.Rmd’ using rmarkdown
     --- finished re-building ‘a998_Strategus.Rmd’
     
     --- re-building ‘a999_Publications-Presentations.Rmd’ using rmarkdown
     --- finished re-building ‘a999_Publications-Presentations.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘a010_Computing_Pathways.Rmd’ ‘a030_Evaluating_Output.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

