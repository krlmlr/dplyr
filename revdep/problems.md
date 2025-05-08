# correlationfunnel

<details>

* Version: 0.2.0
* GitHub: https://github.com/business-science/correlationfunnel
* Source code: https://github.com/cran/correlationfunnel
* Date/Publication: 2020-06-09 04:40:03 UTC
* Number of recursive dependencies: 114

Run `revdepcheck::cloud_details(, "correlationfunnel")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘correlationfunnel-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: binarize
    > ### Title: Turn data with numeric, categorical features into binary data.
    > ### Aliases: binarize
    > 
    > ### ** Examples
    > 
    > library(dplyr)
    
    Attaching package: ‘dplyr’
    
    The following objects are masked from ‘package:stats’:
    
        filter, lag
    
    The following objects are masked from ‘package:base’:
    
        intersect, setdiff, setequal, union
    
    > library(correlationfunnel)
    > 
    > marketing_campaign_tbl %>%
    +     select(-ID) %>%
    +     binarize()
    Error: C stack usage  552514661940 is too close to the limit
    Error: Error evaluating duckdb query: Invalid Error: std::exception
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(dplyr)
      
      Attaching package: 'dplyr'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      The following objects are masked from 'package:stats':
      
          filter, lag
      
      The following objects are masked from 'package:base':
      
          intersect, setdiff, setequal, union
      
      > library(lubridate)
      
      Attaching package: 'lubridate'
      
      The following objects are masked from 'package:base':
      
          date, intersect, setdiff, union
      
      > library(stringr)
      > library(correlationfunnel)
      ══ correlationfunnel Tip #3 ════════════════════════════════════════════════════
      Using `binarize()` with data containing many columns or many rows can increase dimensionality substantially.
      Try subsetting your data column-wise or row-wise to avoid creating too many columns.
      You can always make a big problem smaller by sampling. :)
      > 
      > test_check("correlationfunnel")
      [ FAIL 5 | WARN 1 | SKIP 0 | PASS 3 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-binarize.R:47:5'): Check binarize - numeric ────────────────────
      Error: Error evaluating duckdb query: Invalid Error: std::exception
      Backtrace:
          ▆
       1. ├─marketing_campaign_tbl %>% select(AGE) %>% binarize(n_bins = 4) at test-binarize.R:47:5
       2. ├─correlationfunnel::binarize(., n_bins = 4)
       3. └─correlationfunnel:::binarize.data.frame(., n_bins = 4)
       4.   └─correlationfunnel:::create_recipe(...)
       5.     ├─base::suppressWarnings(recipe_obj <- recipes::prep(recipe_obj))
       6.     │ └─base::withCallingHandlers(...)
       7.     ├─recipes::prep(recipe_obj)
       8.     └─recipes:::prep.recipe(recipe_obj)
      ── Error ('test-binarize.R:57:5'): Check binarize - numeric - high skew ────────
      Error in `dplyr::mutate(., type = ifelse(is.na(type), "other", "type"), 
          type = ifelse(type != new_type, new_type, type))`: This operation cannot be carried out by DuckDB, and the input is a
      stingy duckplyr frame.
      ℹ Use `compute(prudence = "lavish")` to materialize to temporary storage and
        continue with duckplyr.
      ℹ See `vignette("prudence")` for other options.
      Caused by error in `dplyr::mutate()`:
      ! Can't translate function `ifelse()`.
      ── Error ('test-binarize.R:68:5'): Check binarize - categorical ────────────────
      Error: Error evaluating duckdb query: Invalid Error: std::exception
      Backtrace:
           ▆
        1. ├─marketing_campaign_tbl %>% select(JOB) %>% ... at test-binarize.R:68:5
        2. ├─correlationfunnel::binarize(., thresh_infreq = 0, name_infreq = "MISC")
        3. └─correlationfunnel:::binarize.data.frame(...)
        4.   └─correlationfunnel:::create_recipe(...)
        5.     ├─base::suppressWarnings(recipe_obj <- recipes::prep(recipe_obj))
        6.     │ └─base::withCallingHandlers(...)
        7.     ├─recipes::prep(recipe_obj)
        8.     └─recipes:::prep.recipe(recipe_obj)
        9.       └─base::rbind(running_info, mutate(x$term_info, number = i, skip = x$steps[[i]]$skip))
       10.         └─base::rbind(deparse.level, ...)
       11.           └─base::vapply(...)
       12.             └─base (local) FUN(X[[i]], ...)
       13.               └─base::.row_names_info(x, 2L)
      ── Error ('test-correlate.R:15:1'): (code run outside of `test_that()`) ────────
      Error: Error evaluating duckdb query: Invalid Error: std::exception
      Backtrace:
           ▆
        1. ├─... %>% binarize() at test-correlate.R:15:1
        2. ├─correlationfunnel::binarize(.)
        3. └─correlationfunnel:::binarize.data.frame(.)
        4.   └─correlationfunnel:::create_recipe(...)
        5.     ├─base::suppressWarnings(recipe_obj <- recipes::prep(recipe_obj))
        6.     │ └─base::withCallingHandlers(...)
        7.     ├─recipes::prep(recipe_obj)
        8.     └─recipes:::prep.recipe(recipe_obj)
        9.       └─base::rbind(running_info, mutate(x$term_info, number = i, skip = x$steps[[i]]$skip))
       10.         └─base::rbind(deparse.level, ...)
       11.           └─base::vapply(...)
       12.             └─base (local) FUN(X[[i]], ...)
       13.               └─base::.row_names_info(x, 2L)
      ── Error ('test-plot_correlation_funnel.R:16:1'): (code run outside of `test_that()`) ──
      Error: Error evaluating duckdb query: Invalid Error: std::exception
      Backtrace:
           ▆
        1. ├─... %>% correlate(TERM_DEPOSIT__yes) at test-plot_correlation_funnel.R:16:1
        2. ├─correlationfunnel::correlate(., TERM_DEPOSIT__yes)
        3. ├─correlationfunnel::binarize(...)
        4. └─correlationfunnel:::binarize.data.frame(...)
        5.   └─correlationfunnel:::create_recipe(...)
        6.     ├─base::suppressWarnings(recipe_obj <- recipes::prep(recipe_obj))
        7.     │ └─base::withCallingHandlers(...)
        8.     ├─recipes::prep(recipe_obj)
        9.     └─recipes:::prep.recipe(recipe_obj)
       10.       └─base::rbind(running_info, mutate(x$term_info, number = i, skip = x$steps[[i]]$skip))
       11.         └─base::rbind(deparse.level, ...)
       12.           └─base::vapply(...)
       13.             └─base (local) FUN(X[[i]], ...)
       14.               └─base::.row_names_info(x, 2L)
      
      [ FAIL 5 | WARN 1 | SKIP 0 | PASS 3 ]
      Error: Test failures
      Execution halted
    ```

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘introducing_correlation_funnel.Rmd’
      ...
    $ TotalCharges     <dbl> 29.85, 1889.50, 108.15, 1840.75, 151.65, 820.50, 1949…
    $ Churn            <chr> "No", "No", "Yes", "No", "Yes", "Yes", "No", "No", "Y…
    
    > customer_churn_binarized_tbl <- customer_churn_tbl %>% 
    +     select(-customerID) %>% mutate(TotalCharges = ifelse(is.na(TotalCharges), 
    +     Month .... [TRUNCATED] 
    
      When sourcing ‘introducing_correlation_funnel.R’:
    Error: Error evaluating duckdb query: Invalid Error: std::exception
    Execution halted
    when running code in ‘key_considerations.Rmd’
      ...
    
      When sourcing ‘key_considerations.R’:
    Error: This operation cannot be carried out by DuckDB, and the input is a
    stingy duckplyr frame.
    ℹ Use `compute(prudence = "lavish")` to materialize to temporary storage and
      continue with duckplyr.
    ℹ See `vignette("prudence")` for other options.
    Caused by error in `dplyr::mutate()`:
    ! Can't translate function `ifelse()`.
    Execution halted
    
      ‘introducing_correlation_funnel.Rmd’ using ‘UTF-8’... failed
      ‘key_considerations.Rmd’ using ‘UTF-8’... failed
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘introducing_correlation_funnel.Rmd’ using rmarkdown
    
    Quitting from introducing_correlation_funnel.Rmd:81-88 [unnamed-chunk-3]
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    <error/rlang_error>
    Error:
    ! Error evaluating duckdb query: Invalid Error: std::exception
    ---
    Backtrace:
         ▆
      1. ├─... %>% ...
      2. ├─correlationfunnel::binarize(...)
      3. └─correlationfunnel:::binarize.data.frame(...)
      4.   └─correlationfunnel:::create_recipe(...)
      5.     ├─base::suppressWarnings(recipe_obj <- recipes::prep(recipe_obj))
      6.     │ └─base::withCallingHandlers(...)
      7.     ├─recipes::prep(recipe_obj)
      8.     └─recipes:::prep.recipe(recipe_obj)
      9.       └─base::rbind(running_info, mutate(x$term_info, number = i, skip = x$steps[[i]]$skip))
     10.         └─base::rbind(deparse.level, ...)
     11.           └─base::vapply(...)
     12.             └─base (local) FUN(X[[i]], ...)
     13.               └─base::.row_names_info(x, 2L)
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
    Error: processing vignette 'introducing_correlation_funnel.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Invalid Error: std::exception
    --- failed re-building ‘introducing_correlation_funnel.Rmd’
    
    --- re-building ‘key_considerations.Rmd’ using rmarkdown
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespace in Imports field not imported from: ‘utils’
      All declared Imports should be used.
    ```

# cthist

<details>

* Version: 2.1.11
* GitHub: https://github.com/bgcarlisle/cthist
* Source code: https://github.com/cran/cthist
* Date/Publication: 2024-07-17 16:10:02 UTC
* Number of recursive dependencies: 56

Run `revdepcheck::cloud_details(, "cthist")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(cthist)
      > 
      > test_check("cthist")
      Error downloading NCT ID: NCT00942747
      Here's the original error message:
      Error in `dplyr::mutate()`:
      ! This operation cannot be carried out by DuckDB, and the input is a stingy duckplyr frame.
      i Use `compute(prudence = "lavish")` to materialize to temporary storage and continue with duckplyr.
      i See `vignette("prudence")` for other options.
      Caused by error in `rel_project()`:
      ! {"exception_type":"Binder","exception_message":"Aggregates cannot be present in a Project relation!"}
       
      
      Error downloading NCT ID: NCT00942747
      Here's the original error message:
      Error in `dplyr::mutate()`:
      ! This operation cannot be carried out by DuckDB, and the input is a stingy duckplyr frame.
      i Use `compute(prudence = "lavish")` to materialize to temporary storage and continue with duckplyr.
      i See `vignette("prudence")` for other options.
      Caused by error in `rel_project()`:
      ! {"exception_type":"Binder","exception_message":"Aggregates cannot be present in a Project relation!"}
       
      
      Error downloading version: NCT00942747 version -1
      Here's the original error message:
      Error in dates$version_number: $ operator is invalid for atomic vectors
       
      
      Error downloading NCT ID: NCT02586649
      Here's the original error message:
      Error in `dplyr::mutate()`:
      ! This operation cannot be carried out by DuckDB, and the input is a stingy duckplyr frame.
      i Use `compute(prudence = "lavish")` to materialize to temporary storage and continue with duckplyr.
      i See `vignette("prudence")` for other options.
      Caused by error in `rel_project()`:
      ! {"exception_type":"Binder","exception_message":"Aggregates cannot be present in a Project relation!"}
       
      
      Here's the original error message:
      Error in UseMethod("pull"): no applicable method for 'pull' applied to an object of class "character"
       
      
      Error downloading NCT ID: NCT04338971
      Here's the original error message:
      Error in `dplyr::mutate()`:
      ! This operation cannot be carried out by DuckDB, and the input is a stingy duckplyr frame.
      i Use `compute(prudence = "lavish")` to materialize to temporary storage and continue with duckplyr.
      i See `vignette("prudence")` for other options.
      Caused by error in `rel_project()`:
      ! {"exception_type":"Binder","exception_message":"Aggregates cannot be present in a Project relation!"}
       
      
      [ FAIL 3 | WARN 0 | SKIP 0 | PASS 28 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-clinicaltrials_gov_dates.R:3:5'): ClinicalTrials.gov version dates download correctly ──
      Error in `result$version_date`: $ operator is invalid for atomic vectors
      Backtrace:
          ▆
       1. └─testthat::expect_equal(...) at test-clinicaltrials_gov_dates.R:3:5
       2.   └─testthat::quasi_label(enquo(object), label, arg = "object")
       3.     └─rlang::eval_bare(expr, quo_get_env(quo))
      ── Error ('test-extract_publications.R:4:5'): Publications extracted correctly ──
      Error in `pmid$pmid`: $ operator is invalid for atomic vectors
      Backtrace:
          ▆
       1. └─testthat::expect_equal(pmid$pmid[1], "10569435") at test-extract_publications.R:4:5
       2.   └─testthat::quasi_label(enquo(object), label, arg = "object")
       3.     └─rlang::eval_bare(expr, quo_get_env(quo))
      ── Error ('test-overall_status_lengths.R:2:5'): Overall status lengths parse correctly ──
      Error in `UseMethod("pull")`: no applicable method for 'pull' applied to an object of class "character"
      Backtrace:
          ▆
       1. ├─cthist::clinicaltrials_gov_download("NCT04338971") at test-overall_status_lengths.R:2:5
       2. │ └─clinicaltrials_gov_dates(nctid, FALSE) %>% ...
       3. └─dplyr::pull(., "version_date")
      
      [ FAIL 3 | WARN 0 | SKIP 0 | PASS 28 ]
      Error: Test failures
      Execution halted
    ```

# easyalluvial

<details>

* Version: 0.3.2
* GitHub: https://github.com/erblast/easyalluvial
* Source code: https://github.com/cran/easyalluvial
* Date/Publication: 2023-12-07 13:40:06 UTC
* Number of recursive dependencies: 148

Run `revdepcheck::cloud_details(, "easyalluvial")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘easyalluvial-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: alluvial_model_response
    > ### Title: create model response plot
    > ### Aliases: alluvial_model_response
    > 
    > ### ** Examples
    > 
    > df = mtcars2[, ! names(mtcars2) %in% 'ids' ]
    > m = randomForest::randomForest( disp ~ ., df)
    > imp = m$importance
    > dspace = get_data_space(df, imp, degree = 3)
    Error: C stack usage  341599206964 is too close to the limit
    Error: Error evaluating duckdb query: Invalid Error: std::exception
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(easyalluvial)
      > 
      > test_check("easyalluvial")
      [ FAIL 13 | WARN 1 | SKIP 14 | PASS 8 ]
      
      ══ Skipped tests (14) ══════════════════════════════════════════════════════════
      • On CRAN (13): 'test_alluvial_long.R:13:3',
        'test_alluvial_model_response.R:6:3', 'test_alluvial_model_response.R:32:3',
        'test_alluvial_model_response.R:61:5', 'test_alluvial_model_response.R:95:5',
        'test_alluvial_model_response.R:121:5',
        'test_alluvial_model_response.R:289:3',
        'test_alluvial_model_response.R:369:3', 'test_model.R:5:3',
        'test_model.R:117:3', 'test_model.R:172:3', 'test_model.R:228:3',
        'test_model.R:368:3'
      • xgboost test skipped for performance (1): 'test_model.R:301:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_alluvial_model_response.R:467:3'): n_feats == degree ───────────
      Error: Error evaluating duckdb query: Invalid Error: std::exception
      Backtrace:
           ▆
        1. ├─easyalluvial::get_data_space(df, imp, degree = 3) at test_alluvial_model_response.R:467:3
        2. │ ├─... %>% ...
        3. │ └─easyalluvial::manip_bin_numerics(...)
        4. │   ├─base::suppressWarnings(...)
        5. │   │ └─base::withCallingHandlers(...)
        6. │   └─rec %>% prep()
        7. ├─dplyr::mutate_at(., vars(one_of(numerics_top)), function(x) as.numeric(as.character(x)))
        8. │ └─dplyr:::manip_at(...)
        9. │   └─dplyr:::tbl_at_syms(...)
       10. │     └─dplyr:::tbl_at_vars(...)
       11. │       └─dplyr::tbl_vars(tbl)
       12. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       13. │         │ └─base::structure(...)
       14. │         └─dplyr:::tbl_vars_dispatch(x)
       15. ├─tidyr::complete(., !!!map(names(df_top), as.name))
       16. ├─dplyr::mutate_at(., vars(one_of(numerics_top)), as.factor)
       17. │ └─dplyr:::manip_at(...)
       18. │   └─dplyr:::tbl_at_syms(...)
       19. │     └─dplyr:::tbl_at_vars(...)
       20. │       └─dplyr::tbl_vars(tbl)
       21. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       22. │         │ └─base::structure(...)
       23. │         └─dplyr:::tbl_vars_dispatch(x)
       24. ├─dplyr::bind_rows(., summarise_all(df_top, summarise_top, agg = min))
       25. │ └─rlang::list2(...)
       26. ├─dplyr::bind_rows(., summarise_all(df_top, summarise_top, agg = max))
       27. │ └─rlang::list2(...)
       28. ├─dplyr::mutate_at(., vars(one_of(numerics_top)), ~as.numeric(as.character(.)))
       29. │ └─dplyr:::manip_at(...)
       30. │   └─dplyr:::tbl_at_syms(...)
       31. │     └─dplyr:::tbl_at_vars(...)
       32. │       └─dplyr::tbl_vars(tbl)
       33. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       34. │         │ └─base::structure(...)
       35. │         └─dplyr:::tbl_vars_dispatch(x)
       36. ├─dplyr::distinct(.)
       37. ├─recipes::prep(.)
       38. └─recipes:::prep.recipe(.)
       39.   └─base::rbind(running_info, mutate(x$term_info, number = i, skip = x$steps[[i]]$skip))
       40.     └─base::rbind(deparse.level, ...)
       41.       └─base::vapply(...)
       42.         └─base (local) FUN(X[[i]], ...)
       43.           └─base::.row_names_info(x, 2L)
      ── Error ('test_alluvial_wide.R:11:5'): alluvial_wide ──────────────────────────
      Error: Error evaluating duckdb query: Invalid Error: std::exception
      Backtrace:
           ▆
        1. ├─easyalluvial::alluvial_wide(...) at test_alluvial_wide.R:11:5
        2. │ └─data %>% ...
        3. ├─easyalluvial::manip_bin_numerics(...)
        4. │ ├─base::suppressWarnings(...)
        5. │ │ └─base::withCallingHandlers(...)
        6. │ └─rec %>% prep()
        7. ├─recipes::prep(.)
        8. └─recipes:::prep.recipe(.)
        9.   └─base::rbind(running_info, mutate(x$term_info, number = i, skip = x$steps[[i]]$skip))
       10.     └─base::rbind(deparse.level, ...)
       11.       └─base::vapply(...)
       12.         └─base (local) FUN(X[[i]], ...)
       13.           └─base::.row_names_info(x, 2L)
      ── Error ('test_manip.R:27:3'): manip_bin_numerics ─────────────────────────────
      Error: Error evaluating duckdb query: Invalid Error: std::exception
      Backtrace:
          ▆
       1. ├─easyalluvial::manip_bin_numerics(data) at test_manip.R:27:3
       2. │ ├─base::suppressWarnings(...)
       3. │ │ └─base::withCallingHandlers(...)
       4. │ └─recipe(df) %>% update_role(easyalluvialid, new_role = "id variable")
       5. └─recipes::update_role(., easyalluvialid, new_role = "id variable")
       6.   └─base::nrow(case_weights_vars)
       7.     ├─base::dim(x)
       8.     └─base::dim.data.frame(x)
       9.       └─base::.row_names_info(x, 2L)
      ── Error ('test_manip.R:77:3'): manip_bin_numerics zero variance columns ───────
      Error: Error evaluating duckdb query: Invalid Error: std::exception
      Backtrace:
           ▆
        1. ├─testthat::expect_warning(data_new <- manip_bin_numerics(data)) at test_manip.R:77:3
        2. │ └─testthat:::quasi_capture(...)
        3. │   ├─testthat (local) .capture(...)
        4. │   │ └─base::withCallingHandlers(...)
        5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        6. ├─easyalluvial::manip_bin_numerics(data)
        7. │ ├─base::suppressWarnings(...)
        8. │ │ └─base::withCallingHandlers(...)
        9. │ └─rec %>% prep()
       10. ├─recipes::prep(.)
       11. └─recipes:::prep.recipe(.)
      ── Error ('test_manip.R:89:3'): manip_bin_numerics with vector ─────────────────
      Error: Error evaluating duckdb query: Invalid Error: std::exception
      Backtrace:
          ▆
       1. ├─easyalluvial::manip_bin_numerics(mtcars$mpg) at test_manip.R:89:3
       2. │ ├─base::suppressWarnings(...)
       3. │ │ └─base::withCallingHandlers(...)
       4. │ └─rec %>% prep()
       5. ├─recipes::prep(.)
       6. └─recipes:::prep.recipe(.)
      ── Error ('test_manip.R:130:3'): manip_bin_numerics_NA ─────────────────────────
      Error in `dplyr::mutate(., type = ifelse(is.na(type), "other", "type"), 
          type = ifelse(type != new_type, new_type, type))`: This operation cannot be carried out by DuckDB, and the input is a
      stingy duckplyr frame.
      ℹ Use `compute(prudence = "lavish")` to materialize to temporary storage and
        continue with duckplyr.
      ℹ See `vignette("prudence")` for other options.
      Caused by error in `dplyr::mutate()`:
      ! Can't translate function `ifelse()`.
      ── Error ('test_manip.R:170:3'): manip_bin_numerics_warning ────────────────────
      Error: Error evaluating duckdb query: Invalid Error: std::exception
      Backtrace:
           ▆
        1. ├─testthat::expect_warning(manip_bin_numerics(df)) at test_manip.R:170:3
        2. │ └─testthat:::quasi_capture(...)
        3. │   ├─testthat (local) .capture(...)
        4. │   │ └─base::withCallingHandlers(...)
        5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        6. ├─easyalluvial::manip_bin_numerics(df)
        7. │ ├─base::suppressWarnings(...)
        8. │ │ └─base::withCallingHandlers(...)
        9. │ └─rec %>% prep()
       10. ├─recipes::prep(.)
       11. └─recipes:::prep.recipe(.)
       12.   └─base::rbind(running_info, mutate(x$term_info, number = i, skip = x$steps[[i]]$skip))
       13.     └─base::rbind(deparse.level, ...)
       14.       └─base::vapply(...)
       15.         └─base (local) FUN(X[[i]], ...)
       16.           └─base::.row_names_info(x, 2L)
      ── Error ('test_plot_condensation.R:15:5'): plot condensation ──────────────────
      Error: Error evaluating duckdb query: Invalid Error: std::exception
      Backtrace:
           ▆
        1. ├─easyalluvial::plot_condensation(df) at test_plot_condensation.R:15:5
        2. │ ├─manip_bin_numerics(df) %>% ...
        3. │ └─easyalluvial::manip_bin_numerics(df)
        4. │   ├─base::suppressWarnings(...)
        5. │   │ └─base::withCallingHandlers(...)
        6. │   └─recipe(df) %>% update_role(easyalluvialid, new_role = "id variable")
        7. ├─dplyr::mutate_if(., is.factor, as.character)
        8. │ └─dplyr:::check_grouped(.tbl, "mutate", "if")
        9. │   └─dplyr::is_grouped_df(tbl)
       10. └─recipes::update_role(., easyalluvialid, new_role = "id variable")
       11.   └─base::nrow(case_weights_vars)
       12.     ├─base::dim(x)
       13.     └─base::dim.data.frame(x)
       14.       └─base::.row_names_info(x, 2L)
      ── Error ('test_plot_imp.R:16:3'): plot_imp ────────────────────────────────────
      Error: Error evaluating duckdb query: Invalid Error: std::exception
      Backtrace:
           ▆
        1. ├─easyalluvial::alluvial_model_response_caret(train, df, degree = 3) at test_plot_imp.R:16:3
        2. │ └─easyalluvial::get_data_space(...)
        3. │   ├─... %>% mutate_at(vars(one_of(factors_top)), fct_drop)
        4. │   └─easyalluvial::manip_bin_numerics(...)
        5. │     ├─base::suppressWarnings(...)
        6. │     │ └─base::withCallingHandlers(...)
        7. │     └─recipe(df) %>% update_role(easyalluvialid, new_role = "id variable")
        8. ├─dplyr::mutate_at(., vars(one_of(factors_top)), fct_drop)
        9. │ └─dplyr:::manip_at(...)
       10. │   └─dplyr:::tbl_at_syms(...)
       11. │     └─dplyr:::tbl_at_vars(...)
       12. │       └─dplyr::tbl_vars(tbl)
       13. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       14. │         │ └─base::structure(...)
       15. │         └─dplyr:::tbl_vars_dispatch(x)
       16. ├─dplyr::filter_at(., vars(one_of(factors_top)), ~. != "easyalluvial_factor_cap")
       17. │ └─dplyr:::tbl_at_syms(.tbl, .vars, .include_group_vars = TRUE)
       18. │   └─dplyr:::tbl_at_vars(...)
       19. │     └─dplyr::tbl_vars(tbl)
       20. │       ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       21. │       │ └─base::structure(...)
       22. │       └─dplyr:::tbl_vars_dispatch(x)
       23. ├─dplyr::mutate_at(., vars(one_of(numerics_top)), function(x) as.numeric(as.character(x)))
       24. │ └─dplyr:::manip_at(...)
       25. │   └─dplyr:::tbl_at_syms(...)
       26. │     └─dplyr:::tbl_at_vars(...)
       27. │       └─dplyr::tbl_vars(tbl)
       28. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       29. │         │ └─base::structure(...)
       30. │         └─dplyr:::tbl_vars_dispatch(x)
       31. ├─tidyr::complete(., !!!map(names(df_top), as.name))
       32. ├─dplyr::mutate_at(., vars(one_of(numerics_top)), as.factor)
       33. │ └─dplyr:::manip_at(...)
       34. │   └─dplyr:::tbl_at_syms(...)
       35. │     └─dplyr:::tbl_at_vars(...)
       36. │       └─dplyr::tbl_vars(tbl)
       37. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       38. │         │ └─base::structure(...)
       39. │         └─dplyr:::tbl_vars_dispatch(x)
       40. ├─dplyr::bind_rows(., summarise_all(df_top, summarise_top, agg = min))
       41. │ └─rlang::list2(...)
       42. ├─dplyr::bind_rows(., summarise_all(df_top, summarise_top, agg = max))
       43. │ └─rlang::list2(...)
       44. ├─dplyr::mutate_at(., vars(one_of(numerics_top)), ~as.numeric(as.character(.)))
       45. │ └─dplyr:::manip_at(...)
       46. │   └─dplyr:::tbl_at_syms(...)
       47. │     └─dplyr:::tbl_at_vars(...)
       48. │       └─dplyr::tbl_vars(tbl)
       49. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       50. │         │ └─base::structure(...)
       51. │         └─dplyr:::tbl_vars_dispatch(x)
       52. ├─dplyr::distinct(.)
       53. ├─dplyr::mutate_if(., is.factor, fct_lump, n = max_levels, other_level = "easyalluvial_factor_cap")
       54. │ └─dplyr:::check_grouped(.tbl, "mutate", "if")
       55. │   └─dplyr::is_grouped_df(tbl)
       56. └─recipes::update_role(., easyalluvialid, new_role = "id variable")
       57.   └─base::nrow(case_weights_vars)
       58.     ├─base::dim(x)
       59.     └─base::dim.data.frame(x)
       60.       └─base::.row_names_info(x, 2L)
      ── Error ('test_plot_imp.R:44:5'): add_importance_plot ─────────────────────────
      Error: Error evaluating duckdb query: Invalid Error: std::exception
      Backtrace:
           ▆
        1. ├─base::suppressWarnings(...) at test_plot_imp.R:43:3
        2. │ └─base::withCallingHandlers(...)
        3. ├─easyalluvial::alluvial_model_response_caret(...) at test_plot_imp.R:44:5
        4. │ └─easyalluvial::get_data_space(...)
        5. │   ├─... %>% mutate_at(vars(one_of(factors_top)), fct_drop)
        6. │   └─easyalluvial::manip_bin_numerics(...)
        7. │     ├─base::suppressWarnings(...)
        8. │     │ └─base::withCallingHandlers(...)
        9. │     └─recipe(df) %>% update_role(easyalluvialid, new_role = "id variable")
       10. ├─dplyr::mutate_at(., vars(one_of(factors_top)), fct_drop)
       11. │ └─dplyr:::manip_at(...)
       12. │   └─dplyr:::tbl_at_syms(...)
       13. │     └─dplyr:::tbl_at_vars(...)
       14. │       └─dplyr::tbl_vars(tbl)
       15. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       16. │         │ └─base::structure(...)
       17. │         └─dplyr:::tbl_vars_dispatch(x)
       18. ├─dplyr::filter_at(., vars(one_of(factors_top)), ~. != "easyalluvial_factor_cap")
       19. │ └─dplyr:::tbl_at_syms(.tbl, .vars, .include_group_vars = TRUE)
       20. │   └─dplyr:::tbl_at_vars(...)
       21. │     └─dplyr::tbl_vars(tbl)
       22. │       ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       23. │       │ └─base::structure(...)
       24. │       └─dplyr:::tbl_vars_dispatch(x)
       25. ├─dplyr::mutate_at(., vars(one_of(numerics_top)), function(x) as.numeric(as.character(x)))
       26. │ └─dplyr:::manip_at(...)
       27. │   └─dplyr:::tbl_at_syms(...)
       28. │     └─dplyr:::tbl_at_vars(...)
       29. │       └─dplyr::tbl_vars(tbl)
       30. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       31. │         │ └─base::structure(...)
       32. │         └─dplyr:::tbl_vars_dispatch(x)
       33. ├─tidyr::complete(., !!!map(names(df_top), as.name))
       34. ├─dplyr::mutate_at(., vars(one_of(numerics_top)), as.factor)
       35. │ └─dplyr:::manip_at(...)
       36. │   └─dplyr:::tbl_at_syms(...)
       37. │     └─dplyr:::tbl_at_vars(...)
       38. │       └─dplyr::tbl_vars(tbl)
       39. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       40. │         │ └─base::structure(...)
       41. │         └─dplyr:::tbl_vars_dispatch(x)
       42. ├─dplyr::bind_rows(., summarise_all(df_top, summarise_top, agg = min))
       43. │ └─rlang::list2(...)
       44. ├─dplyr::bind_rows(., summarise_all(df_top, summarise_top, agg = max))
       45. │ └─rlang::list2(...)
       46. ├─dplyr::mutate_at(., vars(one_of(numerics_top)), ~as.numeric(as.character(.)))
       47. │ └─dplyr:::manip_at(...)
       48. │   └─dplyr:::tbl_at_syms(...)
       49. │     └─dplyr:::tbl_at_vars(...)
       50. │       └─dplyr::tbl_vars(tbl)
       51. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       52. │         │ └─base::structure(...)
       53. │         └─dplyr:::tbl_vars_dispatch(x)
       54. ├─dplyr::distinct(.)
       55. ├─dplyr::mutate_if(., is.factor, fct_lump, n = max_levels, other_level = "easyalluvial_factor_cap")
       56. │ └─dplyr:::check_grouped(.tbl, "mutate", "if")
       57. │   └─dplyr::is_grouped_df(tbl)
       58. └─recipes::update_role(., easyalluvialid, new_role = "id variable")
       59.   └─base::nrow(case_weights_vars)
       60.     ├─base::dim(x)
       61.     └─base::dim.data.frame(x)
       62.       └─base::.row_names_info(x, 2L)
      ── Error ('test_plot_marginal_histograms.R:9:3'): plot_hist_as_margins ─────────
      Error: Error evaluating duckdb query: Invalid Error: std::exception
      Backtrace:
          ▆
       1. ├─easyalluvial::alluvial_wide(...) at test_plot_marginal_histograms.R:9:3
       2. │ └─data %>% ...
       3. ├─easyalluvial::manip_bin_numerics(...)
       4. │ ├─base::suppressWarnings(...)
       5. │ │ └─base::withCallingHandlers(...)
       6. │ └─rec %>% prep()
       7. ├─recipes::prep(.)
       8. └─recipes:::prep.recipe(.)
      ── Error ('test_plot_marginal_histograms.R:92:3'): plot_hist_margins_model_respons ──
      Error in `dplyr::group_by(., variable)`: This operation cannot be carried out by DuckDB, and the input is a
      stingy duckplyr frame.
      ℹ Use `compute(prudence = "lavish")` to materialize to temporary storage and
        continue with duckplyr.
      ℹ See `vignette("prudence")` for other options.
      Backtrace:
           ▆
        1. ├─easyalluvial::alluvial_model_response_caret(train, df, degree = 3) at test_plot_marginal_histograms.R:92:3
        2. │ └─easyalluvial::get_data_space(...)
        3. │   ├─... %>% mutate_at(vars(one_of(factors_top)), fct_drop)
        4. │   └─easyalluvial::manip_bin_numerics(...)
        5. │     ├─base::suppressWarnings(...)
        6. │     │ └─base::withCallingHandlers(...)
        7. │     └─recipe(df) %>% update_role(easyalluvialid, new_role = "id variable")
        8. ├─dplyr::mutate_at(., vars(one_of(factors_top)), fct_drop)
        9. │ └─dplyr:::manip_at(...)
       10. │   └─dplyr:::tbl_at_syms(...)
       11. │     └─dplyr:::tbl_at_vars(...)
       12. │       └─dplyr::tbl_vars(tbl)
       13. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       14. │         │ └─base::structure(...)
       15. │         └─dplyr:::tbl_vars_dispatch(x)
       16. ├─dplyr::filter_at(., vars(one_of(factors_top)), ~. != "easyalluvial_factor_cap")
       17. │ └─dplyr:::tbl_at_syms(.tbl, .vars, .include_group_vars = TRUE)
       18. │   └─dplyr:::tbl_at_vars(...)
       19. │     └─dplyr::tbl_vars(tbl)
       20. │       ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       21. │       │ └─base::structure(...)
       22. │       └─dplyr:::tbl_vars_dispatch(x)
       23. ├─dplyr::mutate_at(., vars(one_of(numerics_top)), function(x) as.numeric(as.character(x)))
       24. │ └─dplyr:::manip_at(...)
       25. │   └─dplyr:::tbl_at_syms(...)
       26. │     └─dplyr:::tbl_at_vars(...)
       27. │       └─dplyr::tbl_vars(tbl)
       28. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       29. │         │ └─base::structure(...)
       30. │         └─dplyr:::tbl_vars_dispatch(x)
       31. ├─tidyr::complete(., !!!map(names(df_top), as.name))
       32. ├─dplyr::mutate_at(., vars(one_of(numerics_top)), as.factor)
       33. │ └─dplyr:::manip_at(...)
       34. │   └─dplyr:::tbl_at_syms(...)
       35. │     └─dplyr:::tbl_at_vars(...)
       36. │       └─dplyr::tbl_vars(tbl)
       37. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       38. │         │ └─base::structure(...)
       39. │         └─dplyr:::tbl_vars_dispatch(x)
       40. ├─dplyr::bind_rows(., summarise_all(df_top, summarise_top, agg = min))
       41. │ └─rlang::list2(...)
       42. ├─dplyr::bind_rows(., summarise_all(df_top, summarise_top, agg = max))
       43. │ └─rlang::list2(...)
       44. ├─dplyr::mutate_at(., vars(one_of(numerics_top)), ~as.numeric(as.character(.)))
       45. │ └─dplyr:::manip_at(...)
       46. │   └─dplyr:::tbl_at_syms(...)
       47. │     └─dplyr:::tbl_at_vars(...)
       48. │       └─dplyr::tbl_vars(tbl)
       49. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       50. │         │ └─base::structure(...)
       51. │         └─dplyr:::tbl_vars_dispatch(x)
       52. ├─dplyr::distinct(.)
       53. ├─dplyr::mutate_if(., is.factor, fct_lump, n = max_levels, other_level = "easyalluvial_factor_cap")
       54. │ └─dplyr:::check_grouped(.tbl, "mutate", "if")
       55. │   └─dplyr::is_grouped_df(tbl)
       56. ├─recipes::update_role(., easyalluvialid, new_role = "id variable")
       57. │ └─... %>% dplyr::count()
       58. ├─dplyr::count(.)
       59. ├─dplyr::group_by(., variable)
       60. └─dplyr:::group_by.data.frame(., variable)
       61.   └─dplyr:::check_prudence(.data, duckplyr_error)
       62.     └─cli::cli_abort(...)
       63.       └─rlang::abort(...)
      ── Error ('test_plot_marginal_histograms.R:167:3'): model response marginal hists, extra columns in df ──
      Error: Error evaluating duckdb query: Invalid Error: std::exception
      Backtrace:
           ▆
        1. ├─easyalluvial::alluvial_model_response_caret(...) at test_plot_marginal_histograms.R:167:3
        2. │ └─easyalluvial::get_data_space(...)
        3. │   ├─... %>% mutate_at(vars(one_of(factors_top)), fct_drop)
        4. │   └─easyalluvial::manip_bin_numerics(...)
        5. │     ├─base::suppressWarnings(...)
        6. │     │ └─base::withCallingHandlers(...)
        7. │     └─recipe(df) %>% update_role(easyalluvialid, new_role = "id variable")
        8. ├─dplyr::mutate_at(., vars(one_of(factors_top)), fct_drop)
        9. │ └─dplyr:::manip_at(...)
       10. │   └─dplyr:::tbl_at_syms(...)
       11. │     └─dplyr:::tbl_at_vars(...)
       12. │       └─dplyr::tbl_vars(tbl)
       13. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       14. │         │ └─base::structure(...)
       15. │         └─dplyr:::tbl_vars_dispatch(x)
       16. ├─dplyr::filter_at(., vars(one_of(factors_top)), ~. != "easyalluvial_factor_cap")
       17. │ └─dplyr:::tbl_at_syms(.tbl, .vars, .include_group_vars = TRUE)
       18. │   └─dplyr:::tbl_at_vars(...)
       19. │     └─dplyr::tbl_vars(tbl)
       20. │       ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       21. │       │ └─base::structure(...)
       22. │       └─dplyr:::tbl_vars_dispatch(x)
       23. ├─dplyr::mutate_at(., vars(one_of(numerics_top)), function(x) as.numeric(as.character(x)))
       24. │ └─dplyr:::manip_at(...)
       25. │   └─dplyr:::tbl_at_syms(...)
       26. │     └─dplyr:::tbl_at_vars(...)
       27. │       └─dplyr::tbl_vars(tbl)
       28. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       29. │         │ └─base::structure(...)
       30. │         └─dplyr:::tbl_vars_dispatch(x)
       31. ├─tidyr::complete(., !!!map(names(df_top), as.name))
       32. ├─dplyr::mutate_at(., vars(one_of(numerics_top)), as.factor)
       33. │ └─dplyr:::manip_at(...)
       34. │   └─dplyr:::tbl_at_syms(...)
       35. │     └─dplyr:::tbl_at_vars(...)
       36. │       └─dplyr::tbl_vars(tbl)
       37. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       38. │         │ └─base::structure(...)
       39. │         └─dplyr:::tbl_vars_dispatch(x)
       40. ├─dplyr::bind_rows(., summarise_all(df_top, summarise_top, agg = min))
       41. │ └─rlang::list2(...)
       42. ├─dplyr::bind_rows(., summarise_all(df_top, summarise_top, agg = max))
       43. │ └─rlang::list2(...)
       44. ├─dplyr::mutate_at(., vars(one_of(numerics_top)), ~as.numeric(as.character(.)))
       45. │ └─dplyr:::manip_at(...)
       46. │   └─dplyr:::tbl_at_syms(...)
       47. │     └─dplyr:::tbl_at_vars(...)
       48. │       └─dplyr::tbl_vars(tbl)
       49. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
       50. │         │ └─base::structure(...)
       51. │         └─dplyr:::tbl_vars_dispatch(x)
       52. ├─dplyr::distinct(.)
       53. ├─dplyr::mutate_if(., is.factor, fct_lump, n = max_levels, other_level = "easyalluvial_factor_cap")
       54. │ └─dplyr:::check_grouped(.tbl, "mutate", "if")
       55. │   └─dplyr::is_grouped_df(tbl)
       56. └─recipes::update_role(., easyalluvialid, new_role = "id variable")
       57.   └─base::nrow(case_weights_vars)
       58.     ├─base::dim(x)
       59.     └─base::dim.data.frame(x)
       60.       └─base::.row_names_info(x, 2L)
      
      [ FAIL 13 | WARN 1 | SKIP 14 | PASS 8 ]
      Deleting unused snapshots:
      • alluvial_long/long-all-nums-plus-fill.svg
      • alluvial_long/long-all-nums.svg
      • alluvial_long/long-fill-first.svg
      • alluvial_long/long-fill-last.svg
      • alluvial_long/long-fill-to-right.svg
      • alluvial_long/long-fill-value.svg
      • alluvial_long/long-reorder-carrier-by-size.svg
      • alluvial_long/long-reorder-x-levels.svg
      • alluvial_long/long-reorder-y-levels.svg
      • alluvial_long/long-sprecify-color.svg
      • alluvial_model_response/model-response-all-facs.svg
      • alluvial_model_response/model-response-all-nums.svg
      • alluvial_model_response/model-response-cat-bi.svg
      • alluvial_model_response/model-response-cat-multi.svg
      • alluvial_model_response/model-response-new-change-bins-3.svg
      • alluvial_model_response/model-response-new-change-bins-7.svg
      • alluvial_model_response/model-response-new-labs.svg
      • alluvial_model_response/model-response-pdb-non-binary.svg
      • alluvial_model_response/model-response-pdb.svg
      • alluvial_model_response/model-response.svg
      • alluvial_wide/wide-all-flows.svg
      • alluvial_wide/wide-first.svg
      • alluvial_wide/wide-islr-cars-rotate-labels.svg
      • alluvial_wide/wide-islr-cars.svg
      • alluvial_wide/wide-last.svg
      • alluvial_wide/wide-reorder-y-levels.svg
      • alluvial_wide/wide-values.svg
      • plot_condensation/cond-price-first.svg
      • plot_condensation/cond-with-first.svg
      • plot_condensation/cond.svg
      • plot_marginal_histograms/mod-num-cat.svg
      • plot_marginal_histograms/mod-num-num.svg
      • plot_marginal_histograms/mod-num-pred-train.svg
      • plot_marginal_histograms/mod-num-pred.svg
      • plot_marginal_histograms/plot-hist-long-cat-fill.svg
      • plot_marginal_histograms/plot-hist-long-cat.svg
      • plot_marginal_histograms/plot-hist-long-num-has-fill.svg
      • plot_marginal_histograms/plot-hist-long-num-is-fill.svg
      • plot_marginal_histograms/plot-hist-long-num.svg
      • plot_marginal_histograms/plot-hist-wide-cat.svg
      • plot_marginal_histograms/plot-hist-wide-num.svg
      Error: Test failures
      Execution halted
    ```

