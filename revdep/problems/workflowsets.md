# workflowsets (1.1.1)

* GitHub: <https://github.com/tidymodels/workflowsets>
* Email: <mailto:hannah@posit.co>
* GitHub mirror: <https://github.com/cran/workflowsets>

Run `revdepcheck::revdep_details(, "workflowsets")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
       8. │       └─workflowsets:::maybe_param(.x$workflow[[1]])
       9. │         ├─hardhat::extract_parameter_set_dials(x)
      10. │         └─workflows:::extract_parameter_set_dials.workflow(x)
      11. │           ├─hardhat::extract_parameter_set_dials(model)
      12. │           └─parsnip:::extract_parameter_set_dials.model_spec(model)
      13. │             ├─dplyr::mutate(...)
      14. │             └─dplyr:::mutate.data.frame(...)
      15. │               └─dplyr::mutate(...)
      16. │                 └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      17. │                   ├─base::withCallingHandlers(...)
      18. │                   └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      19. │                     └─mask$eval_all_mutate(quo)
      20. │                       └─dplyr (local) eval()
      21. ├─purrr::map(call_info, eval_call_info)
      22. │ └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      23. │   ├─purrr:::with_indexed_errors(...)
      24. │   │ └─base::withCallingHandlers(...)
      25. │   ├─purrr:::call_with_cleanup(...)
      26. │   └─parsnip (local) .f(.x[[i]], ...)
      27. │     └─base::stop(paste0("Error when calling ", x$fun, "(): ", as.character(res)))
      28. └─base::.handleSimpleError(...)
      29.   └─purrr (local) h(simpleError(msg, call))
      30.     └─cli::cli_abort(...)
      31.       └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-options.R:23:3'): option management ──────────────────────────
       Expected `set_4 <- option_add_parameters(two_class_set)` not to throw any errors.
       Actually got a <purrr_error_indexed> with message:
         i In index: 1.
         Caused by error in `mutate()`:
         i In argument: `object = purrr::map(call_info, eval_call_info)`.
         Caused by error in `purrr::map()`:
         i In index: 1.
         Caused by error in `.f()`:
         ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
           Can't create call to non-callable object
       ── Error ('test-options.R:26:3'): option management ────────────────────────────
       Error in `eval(code, test_env)`: object 'set_4' not found
       Backtrace:
           ▆
        1. ├─base::which(!grepl("glm", set_4$wflow_id)) at test-options.R:26:3
        2. └─base::grepl("glm", set_4$wflow_id)
        3.   └─base::is.factor(x)
       
       [ FAIL 2 | WARN 0 | SKIP 30 | PASS 348 ]
       Error:
       ! Test failures.
       Execution halted
     ```

