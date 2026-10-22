# tailor (0.1.0)

* GitHub: <https://github.com/tidymodels/tailor>
* Email: <mailto:max@posit.co>
* GitHub mirror: <https://github.com/cran/tailor>

Run `revdepcheck::revdep_details(, "tailor")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        14. │         └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
        15. │           └─mask$eval_all_mutate(quo)
        16. │             └─dplyr (local) eval()
        17. ├─purrr::map(call_info, eval_call_info)
        18. │ └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
        19. │   ├─purrr:::with_indexed_errors(...)
        20. │   │ └─base::withCallingHandlers(...)
        21. │   ├─purrr:::call_with_cleanup(...)
        22. │   └─tailor (local) .f(.x[[i]], ...)
        23. │     └─cli::cli_abort("Error when calling {.fn {x$fun}}: {as.character(res)}")
        24. │       └─rlang::abort(...)
        25. │         └─rlang:::signal_abort(cnd, .file)
        26. │           └─base::signalCondition(cnd)
        27. ├─purrr (local) `<fn>`(`<rlng_rrr>`)
        28. │ └─cli::cli_abort(...)
        29. │   └─rlang::abort(...)
        30. │     └─rlang:::signal_abort(cnd, .file)
        31. │       └─base::signalCondition(cnd)
        32. └─dplyr (local) `<fn>`(`<prrr_rr_>`)
        33.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       
       [ FAIL 3 | WARN 0 | SKIP 32 | PASS 247 ]
       Error:
       ! Test failures.
       Execution halted
     ```

