# psycCleaning (0.1.1)

* Email: <mailto:jason.moyhj@gmail.com>
* GitHub mirror: <https://github.com/cran/psycCleaning>

Run `revdepcheck::revdep_details(, "psycCleaning")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Saving _problems/test-composite_score-16.R
       Saving _problems/test-composite_score-34.R
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 33 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-composite_score.R:9:3'): composite_score: standard usecase ───
       Expected `composite_df` to equal `data.frame(...)`.
       Differences:
       `attr(actual, 'row.names')` is a character vector ('1', '2', '3', '4')
       `attr(expected, 'row.names')` is an integer vector (1, 2, 3, 4)
       
       ── Failure ('test-composite_score.R:27:3'): composite_score: na.rm = TRUE ──────
       Expected `composite_df` to equal `data.frame(...)`.
       Differences:
       `attr(actual, 'row.names')` is a character vector ('1', '2', '3', '4')
       `attr(expected, 'row.names')` is an integer vector (1, 2, 3, 4)
       
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 33 ]
       Error:
       ! Test failures.
       Execution halted
     ```

