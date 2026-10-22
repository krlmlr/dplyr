# TwoRegression (1.1.1)

* GitHub: <https://github.com/paulhibbing/TwoRegression>
* Email: <mailto:paulhibbing@gmail.com>
* GitHub mirror: <https://github.com/cran/TwoRegression>

Run `revdepcheck::revdep_details(, "TwoRegression")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
      15. ├─tidyr::unpack(., dplyr::matches("Classification$"), names_sep = "_")
      16. │ └─tidyr:::check_data_frame(data, call = error_call)
      17. │   └─base::is.data.frame(x)
      18. ├─dplyr::summarise(...)
      19. ├─dplyr::group_by(...)
      20. ├─dplyr:::group_by.data.frame(...)
      21. │ └─dplyr::group_by(.data, ..., .add = .add, .drop = .drop)
      22. │   └─dplyr::group_by_prepare(.data, ..., .add = .add, error_call = current_env())
      23. │     └─dplyr:::add_computed_columns(.data, new_groups, error_call = error_call)
      24. │       └─dplyr:::mutate_cols(...)
      25. │         ├─base::withCallingHandlers(...)
      26. │         └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      27. │           └─mask$eval_all_mutate(quo)
      28. │             └─dplyr (local) eval()
      29. ├─lubridate::floor_date(time, unit)
      30. │ └─timechange::time_floor(x, unit = unit, week_start = as_week_start(week_start))
      31. │   ├─timechange:::from_posixct(...)
      32. │   ├─timechange:::C_time_floor(...)
      33. │   └─timechange:::to_posixct(time)
      34. │     └─timechange:::unsupported_date_time(time)
      35. │       └─base::stop(...)
      36. └─base::.handleSimpleError(...)
      37.   └─dplyr (local) h(simpleError(msg, call))
      38.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
     Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      24. │       └─dplyr:::mutate_cols(...)
      25. │         ├─base::withCallingHandlers(...)
      26. │         └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      27. │           └─mask$eval_all_mutate(quo)
      28. │             └─dplyr (local) eval()
      29. └─lubridate::floor_date(time, unit)
      30.   └─timechange::time_floor(x, unit = unit, week_start = as_week_start(week_start))
      31.     ├─timechange:::from_posixct(...)
      32.     ├─timechange:::C_time_floor(...)
      33.     └─timechange:::to_posixct(time)
      34.       └─timechange:::unsupported_date_time(time)
      35.         └─base::stop(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'TwoRegression.Rmd' failed with diagnostics:
     ℹ In argument: `time = lubridate::floor_date(time, unit)`.
     Caused by error in `unsupported_date_time()`:
     ! Unsupported date-time class 'integer'
     --- failed re-building ‘TwoRegression.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘TwoRegression.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

