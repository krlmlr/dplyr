# tidyrhrv (1.1.0)

* Email: <mailto:stevenlawrence.r@gmail.com>
* GitHub mirror: <https://github.com/cran/tidyrhrv>

Run `revdepcheck::revdep_details(, "tidyrhrv")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
     Complete output:
       > library(testthat)
       > library(tidyrhrv)
       > 
       > test_check("tidyrhrv") 
       duckdb keeps downloaded extensions and secrets in a temporary directory:
       i /tmp/Rtmpp9AP2Y/working_dir/Rtmp3e6QHx/duckdb
       This is removed when the R session ends.
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Saving _problems/test-read_tilt-37.R
       [ FAIL 1 | WARN 2 | SKIP 0 | PASS 26 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-read_tilt.R:37:3'): read_tilt works with toy CSV data ────────
       Expected `result$contents[[1]]` to be an S3 object.
       Actual OO type: none.
       
       [ FAIL 1 | WARN 2 | SKIP 0 | PASS 26 ]
       Error:
       ! Test failures.
       Execution halted
     ```

