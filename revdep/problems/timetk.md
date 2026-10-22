# timetk (2.9.1)

* GitHub: <https://github.com/business-science/timetk>
* Email: <mailto:mdancho@business-science.io>
* GitHub mirror: <https://github.com/cran/timetk>

Run `revdepcheck::revdep_details(, "timetk")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       6. ├─dplyr::ungroup(.)
       7. ├─dplyr::mutate(., .color_mod = (!!color_var_expr))
       8. ├─dplyr:::mutate.data.frame(., .color_mod = (!!color_var_expr))
       9. │ └─dplyr::mutate(...)
      10. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      11. │     ├─base::withCallingHandlers(...)
      12. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      13. │       └─mask$eval_all_mutate(quo)
      14. │         └─dplyr (local) eval()
      15. ├─lubridate::month(date, label = TRUE)
      16. └─lubridate:::month.numeric(date, label = TRUE)
      17.   └─base::stop("Values are not in 1:12")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'TK04_Plotting_Time_Series.Rmd' failed with diagnostics:
     ℹ In argument: `.color_mod = month(date, label = TRUE)`.
     Caused by error in `month.numeric()`:
     ! Values are not in 1:12
     --- failed re-building ‘TK04_Plotting_Time_Series.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘TK04_Plotting_Time_Series.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

