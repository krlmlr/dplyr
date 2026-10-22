# rmoo (0.3.2)

* GitHub: <https://github.com/Evolutionary-Optimization-Laboratory/rmoo>
* Email: <mailto:benitezfj94@gmail.com>
* GitHub mirror: <https://github.com/cran/rmoo>

Run `revdepcheck::revdep_details(, "rmoo")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > library(testthat)
       > library(rmoo)
       Package 'rmoo' version 0.3.2
       > 
       > test_check("rmoo")
       Saving _problems/test-pcp-19.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 90 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-pcp.r:19:3'): Parallel Coordinate Plot for n-objective works ──
       Expected `plot(x = out, type = "pcp")` not to generate messages.
       Actually generated:
       * duckdb keeps downloaded extensions and secrets in a temporary directory:
       ℹ /tmp/Rtmp4CL1FG/working_dir/RtmpzFZxrv/duckdb
       This is removed when the R session ends.
       • Extensions are re-downloaded each session.
       • Secrets are lost.
       ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       ℹ See ?duckdb_storage for details and alternatives.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 90 ]
       Error:
       ! Test failures.
       Execution halted
     ```

