# dtlog (0.2.0)

* GitHub: <https://github.com/AkiShiroshita/dtlog>
* Email: <mailto:akihirokun8@gmail.com>
* GitHub mirror: <https://github.com/cran/dtlog>

Run `revdepcheck::revdep_details(, "dtlog")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 1054 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-tidylog-parity.R:103:5'): dtlog and tidylog describe the same operation the same way ──
       Expected log for filter to be identical to `tl$msgs`.
       Differences:
       lines(actual[[1]]) vs lines(expected[[1]])
       - "filter: removed 18 rows (56%), 14 rows remaining"
       + "duckdb keeps downloaded extensions and secrets in a temporary directory:"
       + "i /tmp/Rtmpxnqi90/working_dir/RtmpCh1zeN/duckdb"
       + "This is removed when the R session ends."
       + "* Extensions are re-downloaded each session."
       + "* Secrets are lost."
       + "i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users)."
       + "i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message)."
       + "i See ?duckdb_storage for details and alternatives."
       
       `lines(actual[[2]])` is absent
       `lines(expected[[2]])` is a character vector ('filter: removed 18 rows (56%), 14 rows remaining')
       
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 1054 ]
       Error:
       ! Test failures.
       Execution halted
     ```

