# rdcmchecks (0.1.1)

* GitHub: <https://github.com/r-dcm/rdcmchecks>
* Email: <mailto:wjakethompson@gmail.com>
* GitHub mirror: <https://github.com/cran/rdcmchecks>

Run `revdepcheck::revdep_details(, "rdcmchecks")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         | This is removed when the R session ends.
         | * Extensions are re-downloaded each session.
         | * Secrets are lost.
         | i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
         | i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
         | i See ?duckdb_storage for details and alternatives.
       ── Failure ('test-check-data.R:21:3'): check data ──────────────────────────────
       Expected `err` to inherit from "rlang_error".
       Actual class: "duckdb_storage_location"/"rlang_message"/"message"/"condition".
       ── Failure ('test-check-data.R:22:3'): check data ──────────────────────────────
       Expected `err$message` to match regexp "only 0 or 1".
       Actual text:
       x | duckdb keeps downloaded extensions and secrets in a temporary directory:
         | i /tmp/RtmpH1RpWk/working_dir/RtmpU4gZED/duckdb
         | This is removed when the R session ends.
         | * Extensions are re-downloaded each session.
         | * Secrets are lost.
         | i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
         | i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
         | i See ?duckdb_storage for details and alternatives.
       
       [ FAIL 4 | WARN 0 | SKIP 2 | PASS 152 ]
       Error:
       ! Test failures.
       Execution halted
     ```

