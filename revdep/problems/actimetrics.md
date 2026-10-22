# actimetrics (0.9.0)

* GitHub: <https://github.com/jhuwit/actimetrics>
* Email: <mailto:muschellij2@gmail.com>
* GitHub mirror: <https://github.com/cran/actimetrics>

Run `revdepcheck::revdep_details(, "actimetrics")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘actimetrics-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: acti_calculate_verisense
     > ### Title: Calculate Step Counts via Verisense
     > ### Aliases: acti_calculate_verisense
     > 
     > ### ** Examples
     > 
     > data = actiread::acti_read_gt3x(actiread::acti_example_gt3x())
     ℹ Filling zeros in data
     ✔ Filled zeros in data
     ℹ Timezone not applied to data
     > steps = acti_calculate_verisense(data)
     Finding Peak Locations
     Error in peak_func(segments = segments, acc = acc, n_samples = n_samples,  : 
       isTRUE(all.equal(new_index[, ncol(new_index)], to)) is not TRUE
     Calls: acti_calculate_verisense ... <Anonymous> -> do.call -> <Anonymous> -> peak_func -> stopifnot
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         3. │ ├─dplyr::summarise(...)
         4. │ ├─dplyr::group_by(...)
         5. │ ├─dplyr::mutate(...)
         6. │ └─dplyr:::mutate.data.frame(...)
         7. │   └─dplyr::mutate(...)
         8. │     └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
         9. │       ├─base::withCallingHandlers(...)
        10. │       └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
        11. │         └─mask$eval_all_mutate(quo)
        12. │           └─dplyr (local) eval()
        13. ├─lubridate::floor_date(time, unit = paste0(epoch, " seconds"))
        14. │ └─timechange::time_floor(x, unit = unit, week_start = as_week_start(week_start))
        15. │   ├─timechange:::from_posixct(...)
        16. │   ├─timechange:::C_time_floor(...)
        17. │   └─timechange:::to_posixct(time)
        18. │     └─timechange:::unsupported_date_time(time)
        19. │       └─base::stop(...)
        20. └─base::.handleSimpleError(...)
        21.   └─dplyr (local) h(simpleError(msg, call))
        22.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       
       [ FAIL 2 | WARN 1 | SKIP 2 | PASS 219 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking dependencies in R code ... NOTE
     ```
     Downloading cpython-3.13.17-linux-x86_64-gnu (download) (33.7MiB)
      Downloaded cpython-3.13.17-linux-x86_64-gnu (download)
     Downloading numpy (15.9MiB)
      Downloaded numpy
     Installed 1 package in 25ms
     ```

