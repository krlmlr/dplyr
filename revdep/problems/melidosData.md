# melidosData (1.0.6)

* GitHub: <https://github.com/MeLiDosProject/melidosData>
* Email: <mailto:johannes.zauner@tum.de>
* GitHub mirror: <https://github.com/cran/melidosData>

Run `revdepcheck::revdep_details(, "melidosData")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Saving _problems/test-main-and-redcap-helpers-54.R
       Saving _problems/test-main-and-redcap-helpers-55.R
       [ FAIL 2 | WARN 2 | SKIP 0 | PASS 20 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-main-and-redcap-helpers.R:54:3'): REDCap_attention_check returns labelled logical column ──
       Expected `out$attention` to equal `structure(c(TRUE, FALSE, TRUE), label = "Passed")`.
       Differences:
       `attr(actual, 'label')` is absent
       `attr(expected, 'label')` is a character vector ('Passed')
       
       ── Failure ('test-main-and-redcap-helpers.R:55:3'): REDCap_attention_check returns labelled logical column ──
       Expected `attr(out$attention, "label")` to equal "Passed".
       Differences:
       `actual` is NULL
       `expected` is a character vector ('Passed')
       
       
       [ FAIL 2 | WARN 2 | SKIP 0 | PASS 20 ]
       Error:
       ! Test failures.
       Execution halted
     ```

