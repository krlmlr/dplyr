# carwatch (1.0.1)

* GitHub: <https://github.com/carwatch-tools/carwatch-r>
* Email: <mailto:robert.richer@fau.de>
* GitHub mirror: <https://github.com/cran/carwatch>

Run `revdepcheck::revdep_details(, "carwatch")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > test_check("carwatch")
       duckdb keeps downloaded extensions and secrets in a temporary directory:
       i /tmp/Rtmpn4Towz/working_dir/RtmpHVgZL4/duckdb
       This is removed when the R session ends.
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Loading required package: shiny
       Saving _problems/test-results-23.R
       [ FAIL 1 | WARN 70 | SKIP 0 | PASS 357 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-results.R:23:3'): canonical results round-trip through the three-header CSV ──
       Expected `as_study_days(restored)$date` to equal `as.POSIXct("2026-02-01", tz = "Europe/Berlin")`.
       Differences:
       `attr(actual, 'tzone')`:   "UTC"          
       `attr(expected, 'tzone')`: "Europe/Berlin"
       
       
       [ FAIL 1 | WARN 70 | SKIP 0 | PASS 357 ]
       Error:
       ! Test failures.
       Execution halted
     ```

