# tidybins (0.1.2)

* GitHub: <https://github.com/Harrison4192/tidybins>
* Email: <mailto:Harrison4192@gmail.com>
* GitHub mirror: <https://github.com/cran/tidybins>

Run `revdepcheck::revdep_details(, "tidybins")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > ### ** Examples
     > 
     > 
     > iris %>%
     + bin_cols(Sepal.Width, n_bins = 5, pretty_labels = TRUE) %>%
     + bin_cols(Petal.Width, n_bins = 3, bin_type = c("width", "kmeans")) %>%
     + bin_cols(Sepal.Width, bin_type = "xgboost", target = Species, seed = 1) -> iris1
     Error in `step_discretize_xgb()`:
     Caused by error in `prep()`:
     ! Too few observations in the early stopping validation set.
     ℹ Consider increasing the `sample_val` parameter.
     Backtrace:
          ▆
       1. ├─... %>% ...
       2. └─tidybins::bin_cols(...)
       3.   ├─recipes::prep(rec2, training = .data)
       4.   └─recipes:::prep.recipe(rec2, training = .data)
       5.     ├─recipes:::recipes_error_context(...)
       6.     │ ├─base::withCallingHandlers(...)
       7.     │ └─base::force(expr)
       8.     ├─recipes::prep(x$steps[[i]], training = training, info = x$term_info)
       9.     └─embed:::prep.step_discretize_xgb(x$steps[[i]], training = training, info = x$term_info)
      10.       └─cli::cli_abort(...)
      11.         └─rlang::abort(...)
     Execution halted
     ```

## In both

*   checking dependencies in R code ... NOTE
     ```
     Namespaces in Imports field not imported from:
       ‘badger’ ‘ggplot2’ ‘lubridate’ ‘scales’ ‘xgboost’
       All declared Imports should be used.
     ```

