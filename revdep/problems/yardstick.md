# yardstick (1.4.0)

* GitHub: <https://github.com/tidymodels/yardstick>
* Email: <mailto:emil.hvitfeldt@posit.co>
* GitHub mirror: <https://github.com/cran/yardstick>

Run `revdepcheck::revdep_details(, "yardstick")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > cells_per_resample <- unnest(mutate(conf_mat(group_by(hpc_cv, Resample), 
     +     obs, pred), tidied = lapply(conf_mat, tidy)), tidied)
     > counts_per_resample <- summarize(group_by(mutate(left_join(summarize(group_by(hpc_cv, 
     +     Resample), total = n()), cells_per_resample, by = "Resample"), prop = value/total), 
     +     name), prop = mean(prop))
     Error in `group_by()`:
     ! This operation cannot be carried out by DuckDB, and the input is a
       stingy duckplyr frame.
     ℹ Use `compute(prudence = "lavish")` to materialize to temporary storage and
       continue with duckplyr.
     ℹ See `vignette("prudence")` for other options.
     Backtrace:
          ▆
       1. ├─base::withAutoprint(...)
       2. │ └─base::source(...)
       3. │   ├─base::withVisible(eval(ei, envir))
       4. │   └─base::eval(ei, envir)
       5. │     └─base::eval(ei, envir)
       6. ├─dplyr::summarize(...)
       7. ├─dplyr::group_by(...)
       8. └─dplyr:::group_by.data.frame(...)
       9.   └─dplyr:::check_prudence(.data, duckplyr_error)
      10.     └─cli::cli_abort(...)
      11.       └─rlang::abort(...)
     Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

