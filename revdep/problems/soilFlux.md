# soilFlux (0.1.5)

* GitHub: <https://github.com/HugoMachadoRodrigues/soilFlux>
* Email: <mailto:rodrigues.machado.hugo@gmail.com>
* GitHub mirror: <https://github.com/cran/soilFlux>

Run `revdepcheck::revdep_details(, "soilFlux")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Saving _problems/test-scale-38.R
       Saving _problems/test-scale-39.R
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 75 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-scale.R:38:3'): invert_minmax recovers original data ─────────
       Expected `recovered[, "sand"]` to equal `as.numeric(df$sand)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3')
       `names(expected)` is absent
       
       ── Failure ('test-scale.R:39:3'): invert_minmax recovers original data ─────────
       Expected `recovered[, "clay"]` to equal `as.numeric(df$clay)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3')
       `names(expected)` is absent
       
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 75 ]
       Error:
       ! Test failures.
       Execution halted
     ```

