# tidyclust (0.3.2)

* GitHub: <https://github.com/tidymodels/tidyclust>
* Email: <mailto:emil.hvitfeldt@posit.co>
* GitHub mirror: <https://github.com/cran/tidyclust>

Run `revdepcheck::revdep_details(, "tidyclust")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     ℹ Please use `tune::finalize_model()` instead.
     Error in `mutate()`:
     ℹ In argument: `object = map(call_info, eval_call_info)`.
     Caused by error in `FUN()`:
     ! Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg,
       !!!opts) : Can't create call to non-callable object
     Backtrace:
          ▆
       1. ├─tidyclust::finalize_model_tidyclust(kmeans_spec, best_params)
       2. │ ├─hardhat::extract_parameter_set_dials(x)
       3. │ └─tidyclust:::extract_parameter_set_dials.cluster_spec(x)
       4. │   ├─dplyr::mutate(...)
       5. │   └─dplyr:::mutate.data.frame(...)
       6. │     └─dplyr::mutate(...)
       7. │       └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
       8. │         ├─base::withCallingHandlers(...)
       9. │         └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      10. │           └─mask$eval_all_mutate(quo)
      11. │             └─dplyr (local) eval()
      12. └─tidyclust:::map(call_info, eval_call_info)
      13.   └─base::lapply(.x, .f, ...)
      14.     └─tidyclust (local) FUN(X[[i]], ...)
      15.       └─cli::cli_abort("Error when calling {.fn {x$fun}}: {as.character(res)}")
      16.         └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       Caused by error in `FUN()`:
       ! Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. └─testthat::expect_snapshot(...) at test-tune_cluster.R:647:3
        2.   └─testthat:::expect_snapshot_(...)
        3.     ├─base::withRestarts(cnd_signal(state$error), muffle_expectation = function() NULL)
        4.     │ └─base (local) withOneRestart(expr, restarts[[1L]])
        5.     │   └─base (local) doWithOneRestart(return(expr), restart)
        6.     └─rlang::cnd_signal(state$error)
       ── Error ('test-tune_cluster.R:664:3'): tune_cluster works with validation set ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = map(call_info, eval_call_info)`.
       Caused by error in `FUN()`:
       ! Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       ── Error ('test-tune_cluster.R:689:3'): tune_cluster works with validation set and tuned model ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = map(call_info, eval_call_info)`.
       Caused by error in `FUN()`:
       ! Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       
       [ FAIL 27 | WARN 0 | SKIP 119 | PASS 483 ]
       Error:
       ! Test failures.
       Execution halted
     ```

