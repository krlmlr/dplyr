# fabletools (0.8.0)

* GitHub: <https://github.com/tidyverts/fabletools>
* Email: <mailto:mail@mitchelloharawild.com>
* GitHub mirror: <https://github.com/cran/fabletools>

Run `revdepcheck::revdep_details(, "fabletools")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > test_check("fabletools")
       Loading required package: fabletools
       duckdb keeps downloaded extensions and secrets in a temporary directory:
       ℹ /tmp/RtmpWPa8GZ/working_dir/RtmpKGgTqa/duckdb
       This is removed when the R session ends.
       • Extensions are re-downloaded each session.
       • Secrets are lost.
       ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       ℹ See ?duckdb_storage for details and alternatives.
       Saving _problems/test-accuracy-92.R
       [ FAIL 1 | WARN 1 | SKIP 0 | PASS 238 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-accuracy.R:92:3'): Out-of-sample accuracy ────────────────────
       Expected `!any(map_lgl(acc, compose(any, is.na)))` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       
       [ FAIL 1 | WARN 1 | SKIP 0 | PASS 238 ]
       Error:
       ! Test failures.
       Execution halted
     ```

