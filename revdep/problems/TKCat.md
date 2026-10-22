# TKCat (1.3.0)

* GitHub: <https://github.com/patzaw/TKCat>
* Email: <mailto:patrice.godard@gmail.com>
* GitHub mirror: <https://github.com/cran/TKCat>

Run `revdepcheck::revdep_details(, "TKCat")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     Quitting from TKCat.Rmd:938-944 [unnamed-chunk-55]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error:
     ! GetQueryResult: Error evaluating duckdb query: Conversion Error: Could not convert string 'Condition' to BOOL when casting from source column collection
     ---
     Backtrace:
         ▆
      1. ├─base::merge(file_hpo, file_clinvar, by = sel_coll, dmAutoLayout = igraph_available)
      2. └─TKCat:::merge.MDB(file_hpo, file_clinvar, by = sel_coll, dmAutoLayout = igraph_available)
      3.   └─base::nrow(ic)
      4.     ├─base::dim(x)
      5.     └─base::dim.data.frame(x)
      6.       └─base::.row_names_info(x, 2L)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'TKCat.Rmd' failed with diagnostics:
     GetQueryResult: Error evaluating duckdb query: Conversion Error: Could not convert string 'Condition' to BOOL when casting from source column collection
     --- failed re-building ‘TKCat.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘TKCat.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmprjbeBe/working_dir/RtmpBLYaHN/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

