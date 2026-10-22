# tidyseurat (0.8.10)

* GitHub: <https://github.com/stemangiola/tidyseurat>
* Email: <mailto:mangiolastefano@gmail.com>
* GitHub mirror: <https://github.com/cran/tidyseurat>

Run `revdepcheck::revdep_details(, "tidyseurat")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
      17. ├─dplyr:::mutate.data.frame(...)
      18. │ └─dplyr::mutate(...)
      19. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      20. │     ├─base::withCallingHandlers(...)
      21. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      22. │       └─mask$eval_all_mutate(quo)
      23. │         └─dplyr (local) eval()
      24. ├─purrr::map(...)
      25. │ └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      26. │   ├─purrr:::with_indexed_errors(...)
      27. │   │ └─base::withCallingHandlers(...)
      28. │   ├─purrr:::call_with_cleanup(...)
      29. │   └─tidyseurat (local) .f(.x[[i]], ...)
      30. │     └─my_data__ %>% filter(.cell %in% pull(.x, .cell)) %>% ...
      31. ├─dplyr::select(., colnames(.x))
      32. ├─dplyr::filter(., .cell %in% pull(.x, .cell))
      33. ├─tidyseurat:::filter.Seurat(., .cell %in% pull(.x, .cell))
      34. │ └─... %>% as_meta_data(.data)
      35. ├─tidyseurat:::as_meta_data(., .data)
      36. │ └─... %>% column_to_rownames(c_(seurat_object)$name)
      37. └─tibble::column_to_rownames(., c_(seurat_object)$name)
      38.   └─tibble:::abort_already_has_rownames()
      39.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      40.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        44. │ └─cli::cli_abort(...)
        45. │   └─rlang::abort(...)
        46. │     └─rlang:::signal_abort(cnd, .file)
        47. │       └─base::signalCondition(cnd)
        48. └─dplyr (local) `<fn>`(`<prrr_rr_>`)
        49.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       ── Error ('test-tidyr.R:4:1'): (code run outside of `test_that()`) ─────────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `column_to_rownames(., c_(seurat_object)$name)`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─dplyr::mutate(...) at test-tidyr.R:4:1
        2. ├─tidyseurat:::mutate.Seurat(...)
        3. │ └─.data %>% as_tibble %>% dplyr::mutate(...) %>% ...
        4. ├─tidyseurat:::as_meta_data(., .data)
        5. │ └─... %>% column_to_rownames(c_(seurat_object)$name)
        6. └─tibble::column_to_rownames(., c_(seurat_object)$name)
        7.   └─tibble:::abort_already_has_rownames()
        8.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        9.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 14 | WARN 6 | SKIP 0 | PASS 46 ]
       Error:
       ! Test failures.
       Execution halted
     ```

