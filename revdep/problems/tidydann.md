# tidydann (1.0.2)

* GitHub: <https://github.com/gmcmacran/tidydann>
* Email: <mailto:gmcmacran@gmail.com>
* GitHub mirror: <https://github.com/cran/tidydann>

Run `revdepcheck::revdep_details(, "tidydann")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test_C_ecosystem.R:113:3'): No errors? ────────────────────────────
       Expected `test_entire_ecosystem(1)` not to throw any errors.
       Actually got a <dplyr:::mutate_error> with message:
         i In argument: `object = purrr::map(call_info, eval_call_info)`.
         Caused by error in `purrr::map()`:
         i In index: 1.
         Caused by error in `.f()`:
         ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
           Can't create call to non-callable object
       ── Failure ('test_C_ecosystem.R:120:3'): No errors? ────────────────────────────
       Expected `test_entire_ecosystem(2)` not to throw any errors.
       Actually got a <dplyr:::mutate_error> with message:
         i In argument: `object = purrr::map(call_info, eval_call_info)`.
         Caused by error in `purrr::map()`:
         i In index: 1.
         Caused by error in `.f()`:
         ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
           Can't create call to non-callable object
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 56 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpJJHLwf/working_dir/RtmpEwjtor/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

