# coefplot (1.2.9)

* Email: <mailto:packages@jaredlander.com>
* GitHub mirror: <https://github.com/cran/coefplot>

Run `revdepcheck::revdep_details(, "coefplot")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     + }
     Warning in check.deprecation(deprecated_train_params, match.call(), ...) :
       Passed invalid function arguments: booster, eval_metric. These should be passed as a list to argument 'params'. Conversion from argument to 'params' entry will be done automatically, but this behavior will become an error in a future version.
     Warning in check.custom.obj(params, objective) :
       Argument 'objective' is only for custom objectives. For built-in objectives, pass the objective under 'params'. This warning will become an error in a future version.
     Error in `mutate()`:
     ! This operation cannot be carried out by DuckDB, and the input is a
       stingy duckplyr frame.
     ℹ Use `compute(prudence = "lavish")` to materialize to temporary storage and
       continue with duckplyr.
     ℹ See `vignette("prudence")` for other options.
     Caused by error in `as.character()`:
     ! cannot coerce type 'builtin' to vector of type 'character'
     Backtrace:
         ▆
      1. ├─coefplot::extract.coef(xg1)
      2. ├─coefplot:::extract.coef.xgb.Booster(xg1)
      3. │ └─... %>% ...
      4. └─dplyr::mutate_at(., .vars = "Coefficient", .funs = as.character)
      5.   ├─dplyr::mutate(.tbl, !!!funs)
      6.   └─dplyr:::mutate.data.frame(.tbl, !!!funs)
      7.     └─dplyr:::check_prudence(.data, duckplyr_error)
      8.       └─cli::cli_abort(...)
      9.         └─rlang::abort(...)
     Execution halted
     ```

