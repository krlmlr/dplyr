# MLwrap (0.4.0)

* GitHub: <https://github.com/AlbertSesePsy/MLwrap>
* Email: <mailto:albert.sese@uib.es>
* GitHub mirror: <https://github.com/cran/MLwrap>

Run `revdepcheck::revdep_details(, "MLwrap")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
       7. │         └─tune::check_parameters(...)
       8. │           ├─hardhat::extract_parameter_set_dials(wflow)
       9. │           └─workflows:::extract_parameter_set_dials.workflow(wflow)
      10. │             ├─hardhat::extract_parameter_set_dials(model)
      11. │             └─parsnip:::extract_parameter_set_dials.model_spec(model)
      12. │               ├─dplyr::mutate(...)
      13. │               └─dplyr:::mutate.data.frame(...)
      14. │                 └─dplyr::mutate(...)
      15. │                   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      16. │                     ├─base::withCallingHandlers(...)
      17. │                     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      18. │                       └─mask$eval_all_mutate(quo)
      19. │                         └─dplyr (local) eval()
      20. ├─purrr::map(call_info, eval_call_info)
      21. │ └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      22. │   ├─purrr:::with_indexed_errors(...)
      23. │   │ └─base::withCallingHandlers(...)
      24. │   ├─purrr:::call_with_cleanup(...)
      25. │   └─parsnip (local) .f(.x[[i]], ...)
      26. │     └─base::stop(paste0("Error when calling ", x$fun, "(): ", as.character(res)))
      27. └─base::.handleSimpleError(...)
      28.   └─purrr (local) h(simpleError(msg, call))
      29.     └─cli::cli_abort(...)
      30.       └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       duckdb keeps downloaded extensions and secrets in a temporary directory:
       i /tmp/RtmpDO8jIy/working_dir/RtmpxvfkX3/duckdb
       This is removed when the R session ends.
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Saving _problems/test-Tuners-90.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 167 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-Tuners.R:90:3'): Test extract_hyperparams works properly ───────
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = purrr::map(call_info, eval_call_info)`.
       Caused by error in `purrr::map()`:
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 167 ]
       Error:
       ! Test failures.
       Execution halted
     ```

