# ycevo (0.3.0)

* GitHub: <https://github.com/bonsook/ycevo>
* Email: <mailto:yangyangzhuoran@gmail.com>
* GitHub mirror: <https://github.com/cran/ycevo>

Run `revdepcheck::revdep_details(, "ycevo")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > test_check("ycevo")
       duckdb keeps downloaded extensions and secrets in a temporary directory:
       i /tmp/Rtmpu7KILE/working_dir/RtmpMWftwe/duckdb
       This is removed when the R session ends.
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Caught rlang_error. Canceling all iterations ...
       Saving _problems/test-estimation-3.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 4 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-estimation.R:3:1'): (code run outside of `test_that()`) ────────
       Error in `mutate(., discount = mapply(function(hh, db) {     hh_interpol <- hh %*% t(interpol_weights)     X <- diag(1, length(tau)) + hh_interpol     mutate(db, discount = as.vector(solve(X) %*% dbar), .keep = "unused") }, hh = hh, db = db, SIMPLIFY = FALSE))`: This operation cannot be carried out by DuckDB, and the input is a stingy duckplyr frame.
       i Use `compute(prudence = "lavish")` to materialize to temporary storage and continue with duckplyr.
       i See `vignette("prudence")` for other options.
       Caused by error in `mutate()`:
       ! Can't translate function `mapply()`.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 4 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

