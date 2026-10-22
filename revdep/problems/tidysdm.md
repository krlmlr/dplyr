# tidysdm (1.0.4)

* GitHub: <https://github.com/EvolEcolGroup/tidysdm>
* Email: <mailto:am315@cam.ac.uk>
* GitHub mirror: <https://github.com/cran/tidysdm>

Run `revdepcheck::revdep_details(, "tidysdm")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
      13. │ └─tune:::fit_best.tune_results(member, metric = metric)
      14. │   └─tune::finalize_workflow(wflow, parameters = parameters)
      15. │     └─tune::finalize_model(mod, parameters)
      16. │       ├─hardhat::extract_parameter_set_dials(x)
      17. │       └─parsnip:::extract_parameter_set_dials.model_spec(x)
      18. │         ├─dplyr::mutate(...)
      19. │         └─dplyr:::mutate.data.frame(...)
      20. │           └─dplyr::mutate(...)
      21. │             └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      22. │               ├─base::withCallingHandlers(...)
      23. │               └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      24. │                 └─mask$eval_all_mutate(quo)
      25. │                   └─dplyr (local) eval()
      26. ├─purrr::map(call_info, eval_call_info)
      27. │ └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      28. │   ├─purrr:::with_indexed_errors(...)
      29. │   │ └─base::withCallingHandlers(...)
      30. │   ├─purrr:::call_with_cleanup(...)
      31. │   └─parsnip (local) .f(.x[[i]], ...)
      32. │     └─base::stop(paste0("Error when calling ", x$fun, "(): ", as.character(res)))
      33. └─base::.handleSimpleError(...)
      34.   └─purrr (local) h(simpleError(msg, call))
      35.     └─cli::cli_abort(...)
      36.       └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       ── Error ('test_repeat_ensemble.R:16:3'): add_repeat to empty repeat ensemble ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = purrr::map(call_info, eval_call_info)`.
       Caused by error in `purrr::map()`:
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       ── Error ('test_simple_ensemble.R:61:3'): add_member to empty simple ensemble ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = purrr::map(call_info, eval_call_info)`.
       Caused by error in `purrr::map()`:
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       
       [ FAIL 7 | WARN 19 | SKIP 1 | PASS 292 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error in `collect_metrics()`:
     ! There were 2 workflows that had no results.
     ---
     Backtrace:
         ▆
      1. ├─ggplot2::autoplot(lacerta_models)
      2. └─workflowsets:::autoplot.workflow_set(lacerta_models)
      3.   └─workflowsets:::rank_plot(...)
      4.     └─workflowsets:::pick_metric(object, rank_metric, metric)
      5.       ├─tune::collect_metrics(x)
      6.       └─workflowsets:::collect_metrics.workflow_set(x)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'tidysdm.Rmd' failed with diagnostics:
     There were 2 workflows that had no results.
     --- failed re-building ‘tidysdm.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘a1_palaeodata_application.Rmd’ ‘a2_tidymodels_additions.Rmd’
       ‘tidysdm.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpagTUIl/working_dir/RtmpGeKDd3/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

