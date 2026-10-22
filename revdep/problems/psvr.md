# psvr (0.1.0)

* Email: <mailto:pbenavides@iteso.mx>
* GitHub mirror: <https://github.com/cran/psvr>

Run `revdepcheck::revdep_details(, "psvr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       ── Error ('test-sym-type-arg.R:98:7'): sym_type = tune() resolves through dials on psvr_rmspe_poly() ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = purrr::map(call_info, eval_call_info)`.
       Caused by error in `purrr::map()`:
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       ── Error ('test-sym-type-arg.R:98:7'): sym_type = tune() resolves through dials on psvr_rmspe_linear() ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = purrr::map(call_info, eval_call_info)`.
       Caused by error in `purrr::map()`:
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       
       [ FAIL 8 | WARN 2 | SKIP 70 | PASS 875 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      12. │           └─mask$eval_all_mutate(quo)
      13. │             └─dplyr (local) eval()
      14. └─purrr::map(call_info, eval_call_info)
      15.   └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      16.     ├─purrr:::with_indexed_errors(...)
      17.     │ └─base::withCallingHandlers(...)
      18.     ├─purrr:::call_with_cleanup(...)
      19.     └─parsnip (local) .f(.x[[i]], ...)
      20.       └─base::stop(paste0("Error when calling ", x$fun, "(): ", as.character(res)))
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'tidymodels-workflow.Rmd' failed with diagnostics:
     ℹ In argument: `object = purrr::map(call_info, eval_call_info)`.
     Caused by error in `purrr::map()`:
     ℹ In index: 1.
     Caused by error in `.f()`:
     ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
       Can't create call to non-callable object
     --- failed re-building ‘tidymodels-workflow.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘getting-started.Rmd’ ‘tidymodels-workflow.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpNUJURY/working_dir/RtmpzGZIfo/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

