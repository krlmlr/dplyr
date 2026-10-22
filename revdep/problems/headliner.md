# headliner (0.0.3)

* GitHub: <https://github.com/rjake/headliner>
* Email: <mailto:rjake@sas.upenn.edu>
* GitHub mirror: <https://github.com/cran/headliner>

Run `revdepcheck::revdep_details(, "headliner")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
       2. ├─headliner::add_headline_column(...)
       3. │ ├─dplyr::select(...)
       4. │ ├─dplyr::mutate(...)
       5. │ ├─dplyr::ungroup(...)
       6. │ ├─dplyr::mutate(...)
       7. │ └─dplyr:::mutate.data.frame(...)
       8. │   └─dplyr::mutate(...)
       9. │     └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      10. │       ├─base::withCallingHandlers(...)
      11. │       └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      12. │         └─mask$eval_all_mutate(quo)
      13. │           └─dplyr (local) eval()
      14. ├─glue::glue(.data$headline, ...)
      15. │ └─glue::glue_data(...)
      16. ├─glue (local) `<fn>`("trend")
      17. │ ├─.transformer(expr, env) %||% .null
      18. │ └─glue (local) .transformer(expr, env)
      19. │   ├─glue:::with_glue_error(...)
      20. │   │ └─base::withCallingHandlers(...)
      21. │   └─base::eval(expr, envir)
      22. │     └─base::eval(expr, envir)
      23. └─base::.handleSimpleError(...)
      24.   └─glue (local) h(simpleError(msg, call))
      25.     └─rlang::abort(message, parent = cnd, call = NULL)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       ex. list(people = plural_phrasing("person", "people"))
       Backtrace:
            ▆
         1. ├─headliner::add_headline_column(...) at test-add-headline-column.R:119:3
         2. │ ├─purrr::map_dfr(...)
         3. │ │ └─purrr::map(.x, .f, ...)
         4. │ │   └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
         5. │ │     └─purrr:::vctrs_vec_compat(.x, .purrr_user_env)
         6. │ └─purrr::pmap(select(df_vals, -.data$headline), compare_values)
         7. │   └─purrr:::pmap_("list", .l, .f, ..., .progress = .progress)
         8. │     ├─purrr:::with_indexed_errors(...)
         9. │     │ └─base::withCallingHandlers(...)
        10. │     ├─purrr:::call_with_cleanup(...)
        11. │     └─headliner (local) .f(...)
        12. │       └─headliner:::return_plural_phrases(plural_phrases, delta = calc$abs_delta)
        13. │         └─base::stop(...)
        14. └─base::.handleSimpleError(...)
        15.   └─purrr (local) h(simpleError(msg, call))
        16.     └─cli::cli_abort(...)
        17.       └─rlang::abort(...)
       
       [ FAIL 3 | WARN 4 | SKIP 0 | PASS 104 ]
       Error:
       ! Test failures.
       Execution halted
     ```

