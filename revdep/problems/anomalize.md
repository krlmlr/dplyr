# anomalize (0.3.0)

* GitHub: <https://github.com/business-science/anomalize>
* Email: <mailto:mdancho@business-science.io>
* GitHub mirror: <https://github.com/cran/anomalize>

Run `revdepcheck::revdep_details(, "anomalize")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > ### ** Examples
     > 
     > 
     > library(dplyr)
     
     Attaching package: ‘dplyr’
     
     The following objects are masked from ‘package:stats’:
     
         filter, lag
     
     The following objects are masked from ‘package:base’:
     
         intersect, setdiff, setequal, union
     
     > 
     > data(tidyverse_cran_downloads)
     > 
     > # Basic Usage
     > tidyverse_cran_downloads %>%
     +     time_apply(count, period = "1 week", .fun = mean, na.rm = TRUE)
     Error in UseMethod("reconstruct", old) : 
       no applicable method for 'reconstruct' applied to an object of class "data.frame"
     Calls: %>% ... tbl_vars_dispatch -> <Anonymous> -> unnest.tbl_df -> reconstruct
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       Error in `UseMethod("reconstruct", old)`: no applicable method for 'reconstruct' applied to an object of class "data.frame"
       Backtrace:
            ▆
         1. ├─tidyverse_cran_downloads %>% time_decompose(count, merge = T) at test-utils.R:4:5
         2. ├─anomalize::time_decompose(., count, merge = T)
         3. ├─anomalize:::time_decompose.grouped_tbl_time(., count, merge = T)
         4. │ └─data %>% ...
         5. ├─anomalize:::grouped_mapper(...)
         6. │ └─... %>% dplyr::group_by_at(.vars = group_names)
         7. ├─dplyr::group_by_at(., .vars = group_names)
         8. │ └─dplyr:::manip_at(...)
         9. │   └─dplyr:::tbl_at_syms(...)
        10. │     └─dplyr:::tbl_at_vars(...)
        11. │       └─dplyr::tbl_vars(tbl)
        12. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
        13. │         │ └─base::structure(...)
        14. │         └─dplyr:::tbl_vars_dispatch(x)
        15. ├─tidyr::unnest(., cols = nested.col)
        16. └─tibbletime:::unnest.tbl_df(., cols = nested.col)
        17.   └─tibbletime::reconstruct(out, nested_time)
       
       [ FAIL 15 | WARN 3 | SKIP 1 | PASS 33 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       9. ├─dplyr::group_by_at(., .vars = group_names)
      10. │ └─dplyr:::manip_at(...)
      11. │   └─dplyr:::tbl_at_syms(...)
      12. │     └─dplyr:::tbl_at_vars(...)
      13. │       └─dplyr::tbl_vars(tbl)
      14. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
      15. │         │ └─base::structure(...)
      16. │         └─dplyr:::tbl_vars_dispatch(x)
      17. ├─tidyr::unnest(., cols = nested.col)
      18. └─tibbletime:::unnest.tbl_df(., cols = nested.col)
      19.   └─tibbletime::reconstruct(out, nested_time)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'anomalize_quick_start_guide.Rmd' failed with diagnostics:
     no applicable method for 'reconstruct' applied to an object of class "data.frame"
     --- failed re-building ‘anomalize_quick_start_guide.Rmd’
     
     --- re-building ‘forecasting_with_cleaned_anomalies.Rmd’ using rmarkdown
     --- finished re-building ‘forecasting_with_cleaned_anomalies.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘anomalize_quick_start_guide.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

