# CodelistGenerator (4.1.0)

* GitHub: <https://github.com/darwin-eu/CodelistGenerator>
* Email: <mailto:edward.burn@ndorms.ox.ac.uk>
* GitHub mirror: <https://github.com/cran/CodelistGenerator>

Run `revdepcheck::revdep_details(, "CodelistGenerator")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     ---
     Backtrace:
          ▆
       1. ├─DBI::dbConnect(duckdb(), eunomiaDir("synpuf-1k", "5.3"))
       2. ├─duckdb::dbConnect(duckdb(), eunomiaDir("synpuf-1k", "5.3"))
       3. │ └─duckdb (local) .local(drv, ...)
       4. │   └─duckdb:::path_normalize(dbdir)
       5. └─CDMConnector::eunomiaDir("synpuf-1k", "5.3")
       6.   ├─DBI::dbCreateTable(...)
       7.   └─DBI::dbCreateTable(...)
       8.     ├─DBI::sqlCreateTable(...)
       9.     └─DBI::sqlCreateTable(...)
      10.       ├─DBI::dbQuoteIdentifier(con, names(fields))
      11.       └─duckdb::dbQuoteIdentifier(con, names(fields))
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'a10_CodelistGeneratorBenchmark.Rmd' failed with diagnostics:
     argument is not a character vector
     --- failed re-building ‘a10_CodelistGeneratorBenchmark.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘a10_CodelistGeneratorBenchmark.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

