# pacta.multi.loanbook (0.1.1)

* GitHub: <https://github.com/RMI-PACTA/pacta.multi.loanbook>
* Email: <mailto:jacob.kastl@gmail.com>
* GitHub mirror: <https://github.com/cran/pacta.multi.loanbook>

Run `revdepcheck::revdep_details(, "pacta.multi.loanbook")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > 
       > library(testthat)
       > library(pacta.multi.loanbook)
       > 
       > test_check("pacta.multi.loanbook")
       Saving _problems/test-1-prepare_abcd-24.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 160 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-1-prepare_abcd.R:24:3'): with known input, runs without error ──
       Expected `prepare_abcd(config)` not to throw any conditions.
       Actually got a <duckdb_storage_location> with message:
         duckdb keeps downloaded extensions and secrets in a temporary directory:
         i /tmp/Rtmpwp3Y0E/working_dir/RtmpzrZKTJ/duckdb
         This is removed when the R session ends.
         * Extensions are re-downloaded each session.
         * Secrets are lost.
         i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
         i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
         i See ?duckdb_storage for details and alternatives.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 160 ]
       Error:
       ! Test failures.
       Execution halted
     ```

