# bridgr (1.0.0)

* GitHub: <https://github.com/marcburri/bridgr>
* Email: <mailto:marc.burri91@gmail.com>
* GitHub mirror: <https://github.com/cran/bridgr>

Run `revdepcheck::revdep_details(, "bridgr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-mf_model.R:669:5'): bridge preprocessing recovers known coefficients from a deterministic multi-frequency simulation ──
       Error in `month.numeric(times)`: Values are not in 1:12
       Backtrace:
            ▆
         1. └─bridgr:::validate_mf_inputs(...) at test-mf_model.R:669:5
         2.   └─bridgr:::infer_frequency_table(target_tbl)
         3.     ├─dplyr::bind_rows(...)
         4.     │ └─rlang::list2(...)
         5.     ├─dplyr::group_map(...)
         6.     └─dplyr:::group_map.data.frame(...)
         7.       └─dplyr::group_map(.data, .f, ..., .keep = .keep)
         8.         └─dplyr:::map2(chunks, group_keys, .f, ...)
         9.           └─base::mapply(.f, .x, .y, MoreArgs = list(...), SIMPLIFY = FALSE)
        10.             └─bridgr (local) `<rlng_lm_>`(dots[[1L]][[1L]], dots[[2L]][[1L]])
        11.               └─bridgr:::infer_series_frequency(.x$time, .y$id[[1]], call = call)
        12.                 └─bridgr:::detect_month_frequency(times)
        13.                   ├─lubridate::month(times)
        14.                   └─lubridate:::month.numeric(times)
       
       [ FAIL 1 | WARN 6 | SKIP 1 | PASS 504 ]
       Error:
       ! Test failures.
       Execution halted
     ```

