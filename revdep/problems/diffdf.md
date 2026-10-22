# diffdf (1.1.2)

* GitHub: <https://github.com/gowerc/diffdf>
* Email: <mailto:craiggower@gmail.com>
* GitHub mirror: <https://github.com/cran/diffdf>

Run `revdepcheck::revdep_details(, "diffdf")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ══ Skipped tests (12) ══════════════════════════════════════════════════════════
       • On CRAN (12): 'test-class_compare.R:2:1', 'test-identify_column_order.R:3:1',
         'test-identify_column_order.R:102:1', 'test-identify_column_order.R:128:1',
         'test-miscellaneous.R:63:1', 'test-miscellaneous.R:107:1',
         'test-miscellaneous.R:202:1', 'test-miscellaneous.R:207:1',
         'test-miscellaneous.R:257:1', 'test-miscellaneous.R:329:1',
         'test-miscellaneous.R:371:1', 'test-print_output.R:3:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-miscellaneous.R:260:5'): #133 - Nested calls don't throw error with deparse ──
       Expected `{ ... }` not to throw any conditions.
       Actually got a <duckdb_storage_location> with message:
         duckdb keeps downloaded extensions and secrets in a temporary directory:
         i /tmp/RtmpduuqGH/working_dir/RtmpE65OPe/duckdb
         This is removed when the R session ends.
         * Extensions are re-downloaded each session.
         * Secrets are lost.
         i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
         i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
         i See ?duckdb_storage for details and alternatives.
       
       [ FAIL 1 | WARN 0 | SKIP 12 | PASS 595 ]
       Error:
       ! Test failures.
       Execution halted
     ```

