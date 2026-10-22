# CohortSymmetry (0.3.0)

* GitHub: <https://github.com/OHDSI/CohortSymmetry>
* Email: <mailto:danielle.newby@ndorms.ox.ac.uk>
* GitHub mirror: <https://github.com/cran/CohortSymmetry>

Run `revdepcheck::revdep_details(, "CohortSymmetry")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       2. ├─DBI::dbConnect(duckdb::duckdb(), dbdir = CDMConnector::eunomiaDir())
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
     
     Error: processing vignette 'a06_Visualise_temporal_symmetry.Rmd' failed with diagnostics:
     argument is not a character vector
     --- failed re-building ‘a06_Visualise_temporal_symmetry.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘a02_Generate_a_sequence_cohort.Rmd’
       ‘a03_Summarise_sequence_ratios.Rmd’
       ‘a04_Visualise_sequence_ratios.Rmd’
       ‘a05_Summarise_temporal_symmetry.Rmd’
       ‘a06_Visualise_temporal_symmetry.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

