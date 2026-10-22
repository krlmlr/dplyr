# CDMConnector (2.8.0)

* GitHub: <https://github.com/darwin-eu/CDMConnector>
* Email: <mailto:g.inberg@erasmusmc.nl>
* GitHub mirror: <https://github.com/cran/CDMConnector>

Run `revdepcheck::revdep_details(, "CDMConnector")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        1. └─CDMConnector::cdmFromCon(con = pool, cdmSchema = "main", writeSchema = "main") at test-pool.R:14:3
        2.   └─rlang::abort("There were no cdm tables found in the cdm_schema!")
       ── Error ('test-writePrefixDropUseCase.R:11:3'): drop table works in opposition to insert table ──
       Error in `cdmFromCon(con = con, cdmSchema = "main", writeSchema = writeSchema, cdmName = "myDuckdbDatabase")`: There were no cdm tables found in the cdm_schema!
       Backtrace:
           ▆
        1. └─CDMConnector::cdmFromCon(con = con, cdmSchema = "main", writeSchema = writeSchema, cdmName = "myDuckdbDatabase") at test-writePrefixDropUseCase.R:11:3
        2.   └─rlang::abort("There were no cdm tables found in the cdm_schema!")
       ── Error ('test-writePrefixDropUseCase.R:52:3'): dropping all tables with write_prefix works as exepected ──
       Error in `cdmFromCon(con = con, cdmSchema = "main", writeSchema = writeSchema, cdmName = "myDuckdbDatabase")`: There were no cdm tables found in the cdm_schema!
       Backtrace:
           ▆
        1. └─CDMConnector::cdmFromCon(con = con, cdmSchema = "main", writeSchema = writeSchema, cdmName = "myDuckdbDatabase") at test-writePrefixDropUseCase.R:52:3
        2.   └─rlang::abort("There were no cdm tables found in the cdm_schema!")
       ── Error ('test-write_prefix.r:7:3'): write_prefix works with cdm_from_con ─────
       Error in `cdmFromCon(con, "main", "scratch", writePrefix = "tmp_")`: There were no cdm tables found in the cdm_schema!
       Backtrace:
           ▆
        1. └─CDMConnector::cdmFromCon(con, "main", "scratch", writePrefix = "tmp_") at test-write_prefix.r:7:3
        2.   └─rlang::abort("There were no cdm tables found in the cdm_schema!")
       
       [ FAIL 53 | WARN 1 | SKIP 45 | PASS 99 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       2. ├─DBI::dbConnect(duckdb::duckdb(), dbdir = eunomiaDir())
       3. │ └─duckdb (local) .local(drv, ...)
       4. │   └─duckdb:::path_normalize(dbdir)
       5. └─CDMConnector::eunomiaDir()
       6.   ├─DBI::dbCreateTable(...)
       7.   └─DBI::dbCreateTable(...)
       8.     ├─DBI::sqlCreateTable(...)
       9.     └─DBI::sqlCreateTable(...)
      10.       ├─DBI::dbQuoteIdentifier(con, names(fields))
      11.       └─duckdb::dbQuoteIdentifier(con, names(fields))
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'a06_using_cdm_attributes.Rmd' failed with diagnostics:
     argument is not a character vector
     --- failed re-building ‘a06_using_cdm_attributes.Rmd’
     
     --- re-building ‘a09_benchmarking.Rmd’ using rmarkdown
     --- finished re-building ‘a09_benchmarking.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘a01_getting-started.Rmd’ ‘a03_dbplyr.Rmd’
       ‘a06_using_cdm_attributes.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

