# walkboutr (0.6.0)

* GitHub: <https://github.com/rwalkbout/walkboutr>
* Email: <mailto:wilnerl@uw.edu>
* GitHub mirror: <https://github.com/cran/walkboutr>

Run `revdepcheck::revdep_details(, "walkboutr")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘walkboutr-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: make_full_walk_bout_df
     > ### Title: Create a data frame of walking bouts with GPS data
     > ### Aliases: make_full_walk_bout_df
     > 
     > ### ** Examples
     > 
     > make_full_walk_bout_df()
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpCoDxXy/working_dir/Rtmp7YMrkI/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error in validate_accelerometry_data(accelerometry_counts) : 
       Error: time is not provided in date-time format. class of time variable should be: `POSIXct` `POSIXt`
     Calls: make_full_walk_bout_df ... process_accelerometry_counts_into_bouts -> validate_accelerometry_data
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        2.   └─walkboutr::process_accelerometry_counts_into_bouts(accelerometry_counts)
        3.     └─walkboutr::validate_accelerometry_data(accelerometry_counts)
       ── Error ('test-process_bouts_and_gps_epochs_into_walkbouts.R:66:3'): generate_bout_category correctly categorizes bouts ──
       Error in `validate_accelerometry_data(accelerometry_counts)`: Error: time is not provided in date-time format. class of time variable should be: `POSIXct` `POSIXt`
       Backtrace:
           ▆
        1. └─walkboutr::make_full_walk_bout_df() at test-process_bouts_and_gps_epochs_into_walkbouts.R:66:3
        2.   └─walkboutr::process_accelerometry_counts_into_bouts(accelerometry_counts)
        3.     └─walkboutr::validate_accelerometry_data(accelerometry_counts)
       ── Error ('test-process_bouts_and_gps_epochs_into_walkbouts.R:85:3'): generate_bout_category results in a df with no NA bout labels ──
       Error in `validate_accelerometry_data(accelerometry_counts)`: Error: time is not provided in date-time format. class of time variable should be: `POSIXct` `POSIXt`
       Backtrace:
           ▆
        1. └─walkboutr::make_full_walk_bout_df() at test-process_bouts_and_gps_epochs_into_walkbouts.R:85:3
        2.   └─walkboutr::process_accelerometry_counts_into_bouts(accelerometry_counts)
        3.     └─walkboutr::validate_accelerometry_data(accelerometry_counts)
       ── Failure ('test-validate_accelerometry_data.R:3:3'): happy path ──────────────
       Expected `validate_accelerometry_data(acc)` not to throw any errors.
       Actually got a <simpleError> with message:
         Error: time is not provided in date-time format. class of time variable should be: `POSIXct` `POSIXt`
       
       [ FAIL 8 | WARN 1 | SKIP 4 | PASS 27 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     --- re-building ‘process_bouts.Rmd’ using rmarkdown
     
     Quitting from process_bouts.Rmd:34-37 [run walkbout functions]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error in `validate_accelerometry_data()`:
     ! Error: time is not provided in date-time format. class of time variable should be: `POSIXct` `POSIXt`
     ---
     Backtrace:
         ▆
      1. └─walkboutr::identify_walk_bouts_in_gps_and_accelerometry_data(...)
      2.   └─walkboutr::process_accelerometry_counts_into_bouts(...)
      3.     └─walkboutr::validate_accelerometry_data(accelerometry_counts)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'process_bouts.Rmd' failed with diagnostics:
     Error: time is not provided in date-time format. class of time variable should be: `POSIXct` `POSIXt`
     --- failed re-building ‘process_bouts.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘changing_default_parameters.Rmd’ ‘generate_data.Rmd’
       ‘process_bouts.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

