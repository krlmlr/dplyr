# ldmppr (1.1.3)

* GitHub: <https://github.com/lanedrew/ldmppr>
* Email: <mailto:lanetdrew@gmail.com>
* GitHub mirror: <https://github.com/cran/ldmppr>

Run `revdepcheck::revdep_details(, "ldmppr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Saving _problems/test-mark_model_io-90.R
       [ FAIL 1 | WARN 0 | SKIP 2 | PASS 10 ]
       
       ══ Skipped tests (2) ═══════════════════════════════════════════════════════════
       • On CRAN (2): 'test-model_check.R:2:3', 'test-simulate_mpp.R:2:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-mark_model_io.R:77:3'): save_mark_model/load_mark_model roundtrip preserves predictions (ranger) ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = purrr::map(call_info, eval_call_info)`.
       Caused by error in `purrr::map()`:
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       
       [ FAIL 1 | WARN 0 | SKIP 2 | PASS 10 ]
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

