# screenshot (0.9.3)

* GitHub: <https://github.com/matutosi/screenshot>
* Email: <mailto:matutosi@gmail.com>
* GitHub mirror: <https://github.com/cran/screenshot>

Run `revdepcheck::revdep_details(, "screenshot")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       NOT found screenshot exec file
       [ FAIL 1 | WARN 0 | SKIP 3 | PASS 115 ]
       
       ══ Skipped tests (3) ═══════════════════════════════════════════════════════════
       • On CRAN (1): 'test-screenshot.R:46:3'
       • bin_dir is used only on Windows (2): 'test-screenshot.R:8:3',
         'test-screenshot.R:13:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-compare_table.R:12:3'): compare_table() joins the counts of both matrices ──
       Expected `compare_table(ndl_mt, hay_mt)` not to throw any messages.
       Actually got a <duckdb_storage_location> with message:
         duckdb keeps downloaded extensions and secrets in a temporary directory:
         i /tmp/Rtmp0QSAUO/working_dir/RtmpKEHvE3/duckdb
         This is removed when the R session ends.
         * Extensions are re-downloaded each session.
         * Secrets are lost.
         i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
         i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
         i See ?duckdb_storage for details and alternatives.
       
       [ FAIL 1 | WARN 0 | SKIP 3 | PASS 115 ]
       Error:
       ! Test failures.
       Execution halted
     ```

