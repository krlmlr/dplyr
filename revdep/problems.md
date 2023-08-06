# DiagrammeR

<details>

* Version: 1.0.10
* GitHub: https://github.com/rich-iannone/DiagrammeR
* Source code: https://github.com/cran/DiagrammeR
* Date/Publication: 2023-05-18 14:30:07 UTC
* Number of recursive dependencies: 99

Run `revdepcheck::cloud_details(, "DiagrammeR")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
       22. │                           └─vctrs::vec_as_location(...)
       23. └─vctrs (local) `<fn>`()
       24.   └─vctrs:::stop_subscript_oob(...)
       25.     └─vctrs:::stop_subscript(...)
       26.       └─rlang::abort(...)
      ── Failure ('test-traversals.R:1578:3'): selective traversals with `trav_out_until()` are possible ──
      graph %>% get_selection() not equal to c(5, 9).
      Lengths differ: 1 is not 2
      ── Failure ('test-traversals.R:1661:3'): selective traversals with `trav_in_until()` are possible ──
      graph %>% get_selection() not equal to c(2, 10).
      Lengths differ: 1 is not 2
      
      [ FAIL 7 | WARN 12 | SKIP 0 | PASS 2119 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 1 marked UTF-8 string
    ```

# dotwhisker

<details>

* Version: 0.7.4
* GitHub: https://github.com/fsolt/dotwhisker
* Source code: https://github.com/cran/dotwhisker
* Date/Publication: 2021-09-02 14:50:35 UTC
* Number of recursive dependencies: 74

Run `revdepcheck::cloud_details(, "dotwhisker")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... WARNING
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘dotwhisker-vignette.Rmd’ using rmarkdown
    
    Quitting from lines 308-343 [brackets] (dotwhisker-vignette.Rmd)
    Error: processing vignette 'dotwhisker-vignette.Rmd' failed with diagnostics:
    non-finite location and/or size for viewport
    --- failed re-building ‘dotwhisker-vignette.Rmd’
    
    --- re-building ‘kl2007_examples.Rmd’ using rmarkdown
    --- finished re-building ‘kl2007_examples.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘dotwhisker-vignette.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking Rd cross-references ... NOTE
    ```
    Unknown package ‘broomExtra’ in Rd xrefs
    ```

# ENMeval

<details>

* Version: 2.0.4
* GitHub: NA
* Source code: https://github.com/cran/ENMeval
* Date/Publication: 2023-01-09 11:53:16 UTC
* Number of recursive dependencies: 239

Run `revdepcheck::cloud_details(, "ENMeval")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
       4.   └─raster::stack(ras.sim)
       5.     └─raster (local) .local(x, ...)
      ── Error ('/tmp/workdir/ENMeval/new/ENMeval.Rcheck/tests/testthat/helper_funcs.R:290:9'): Outputs for evalplot.envSim.map have correct form ──
      Error in `x[[1]]`: subscript out of bounds
      Backtrace:
          ▆
       1. ├─base::inherits(i, "Raster") at tests/testthat/helper_funcs.R:290:8
       2. └─ENMeval::evalplot.envSim.map(...)
       3.   ├─raster::stack(ras.sim)
       4.   └─raster::stack(ras.sim)
       5.     └─raster (local) .local(x, ...)
      
      [ FAIL 38 | WARN 0 | SKIP 46 | PASS 837 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 2 marked UTF-8 strings
    ```

# groupdata2

<details>

* Version: 2.0.3
* GitHub: https://github.com/ludvigolsen/groupdata2
* Source code: https://github.com/cran/groupdata2
* Date/Publication: 2023-06-18 12:30:02 UTC
* Number of recursive dependencies: 96

Run `revdepcheck::cloud_details(, "groupdata2")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘groupdata2-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: fold
    > ### Title: Create balanced folds for cross-validation
    > ### Aliases: fold create_balanced_groups
    > 
    > ### ** Examples
    > 
    > # Attach packages
    ...
      7. │           └─groupdata2 (local) .fun(piece, ...)
      8. │             ├─... %>% dplyr::ungroup()
      9. │             └─groupdata2::group(...)
     10. │               └─out %>% dplyr::group_by(!!!rlang::syms(group_col_names))
     11. ├─dplyr::ungroup(.)
     12. ├─dplyr::group_by(., !!!rlang::syms(group_col_names))
     13. └─dplyr:::group_by.data.frame(., !!!rlang::syms(group_col_names))
     14.   └─dplyr::group_by_prepare(.data, ..., .add = .add, error_call = current_env())
     15.     └─rlang::abort(bullets, call = error_call)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
        5. │       └─plyr::l_ply(...)
        6. │         └─plyr (local) do.ply(i)
        7. │           └─groupdata2 (local) .fun(piece, ...)
        8. │             ├─... %>% dplyr::ungroup()
        9. │             └─groupdata2::group(...)
       10. │               └─out %>% dplyr::group_by(!!!rlang::syms(group_col_names))
       11. ├─dplyr::ungroup(.)
       12. ├─dplyr::group_by(., !!!rlang::syms(group_col_names))
       13. └─dplyr:::group_by.data.frame(., !!!rlang::syms(group_col_names))
       14.   └─dplyr::group_by_prepare(.data, ..., .add = .add, error_call = current_env())
       15.     └─rlang::abort(bullets, call = error_call)
      
      [ FAIL 6 | WARN 0 | SKIP 5 | PASS 3262 ]
      Error: Test failures
      Execution halted
    ```

# gtsummary

<details>

* Version: 1.7.2
* GitHub: https://github.com/ddsjoberg/gtsummary
* Source code: https://github.com/cran/gtsummary
* Date/Publication: 2023-07-15 21:10:14 UTC
* Number of recursive dependencies: 206

Run `revdepcheck::cloud_details(, "gtsummary")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘gtsummary-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: modify_column_indent
    > ### Title: Add/Remove Indentation
    > ### Aliases: modify_column_indent
    > 
    > ### ** Examples
    > 
    > # remove indentation from `tbl_summary()`
    ...
     33. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
     34. │     ├─base::withCallingHandlers(...)
     35. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
     36. │       └─mask$eval_all_mutate(quo)
     37. │         └─dplyr (local) eval()
     38. └─forcats::fct_expand(.data$variable, as.character(dichotomous_value))
     39.   └─forcats:::check_factor(f)
     40.     └─cli::cli_abort(...)
     41.       └─rlang::abort(...)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      }, .after = {
          {
              .after
          }
      })`: i In argument: `df_stats = pmap(...)`.
      Caused by error in `pmap()`:
      i In index: 1.
      Caused by error in `mutate()`:
      i In argument: `variable = forcats::fct_expand(.data$variable, as.character(dichotomous_value))`.
      Caused by error in `forcats::fct_expand()`:
      ! `f` must be a factor or character vector, not a logical vector.
      
      [ FAIL 4 | WARN 0 | SKIP 76 | PASS 9 ]
      Error: Test failures
      Execution halted
    ```

# highcharter

<details>

* Version: 0.9.4
* GitHub: https://github.com/jbkunst/highcharter
* Source code: https://github.com/cran/highcharter
* Date/Publication: 2022-01-03 16:40:05 UTC
* Number of recursive dependencies: 150

Run `revdepcheck::cloud_details(, "highcharter")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘highcharter-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: get_hc_series_from_df
    > ### Title: Auxiliar function to get series and options from tidy frame for
    > ###   hchart.data.frame
    > ### Aliases: get_hc_series_from_df
    > 
    > ### ** Examples
    > 
    ...
     1. ├─highcharter:::get_hc_series_from_df(iris, type = "point", x = Sepal.Width)
     2. │ └─... %>% rename(name = .data$group, type = .data$charttpye)
     3. ├─dplyr::rename(., name = .data$group, type = .data$charttpye)
     4. ├─dplyr::ungroup(.)
     5. ├─dplyr::do(., data = list_parse(select(., -.data$group, -.data$charttpye)))
     6. ├─dplyr::group_by(., .data$group, .data$charttpye)
     7. └─dplyr:::group_by.data.frame(., .data$group, .data$charttpye)
     8.   └─dplyr::group_by_prepare(.data, ..., .add = .add, error_call = current_env())
     9.     └─rlang::abort(bullets, call = error_call)
    Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 11 marked UTF-8 strings
    ```

# lares

<details>

* Version: 5.2.2
* GitHub: https://github.com/laresbernardo/lares
* Source code: https://github.com/cran/lares
* Date/Publication: 2023-05-18 10:40:02 UTC
* Number of recursive dependencies: 117

Run `revdepcheck::cloud_details(, "lares")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘lares-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: conf_mat
    > ### Title: Confussion Matrix
    > ### Aliases: conf_mat
    > 
    > ### ** Examples
    > 
    > data(dfr) # Results for AutoML Predictions
    ...
     27. │             ├─base::tryCatch(...)
     28. │             │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
     29. │             │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
     30. │             │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
     31. │             └─vctrs::vec_as_location(i, n, names = names, arg = arg, call = call)
     32. └─vctrs (local) `<fn>`()
     33.   └─vctrs:::stop_subscript_oob(...)
     34.     └─vctrs:::stop_subscript(...)
     35.       └─rlang::abort(...)
    Execution halted
    ```

# msigdbr

<details>

* Version: 7.5.1
* GitHub: https://github.com/igordot/msigdbr
* Source code: https://github.com/cran/msigdbr
* Date/Publication: 2022-03-30 07:00:16 UTC
* Number of recursive dependencies: 54

Run `revdepcheck::cloud_details(, "msigdbr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(msigdbr)
      > 
      > test_check("msigdbr")
      Killed
    ```

*   checking re-building of vignette outputs ... WARNING
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘msigdbr-intro.Rmd’ using rmarkdown
    Killed
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.0Mb
      sub-directories of 1Mb or more:
        R   5.9Mb
    ```

# optmatch

<details>

* Version: 0.10.6
* GitHub: https://github.com/markmfredrickson/optmatch
* Source code: https://github.com/cran/optmatch
* Date/Publication: 2023-02-07 08:22:29 UTC
* Number of recursive dependencies: 100

Run `revdepcheck::cloud_details(, "optmatch")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘exporting-methods.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(optmatch)
      > 
      > test_check("optmatch")
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
    ```

## In both

*   checking package dependencies ... NOTE
    ```
    Packages which this enhances but not available for checking:
      'CBPS', 'haven'
    ```

*   checking installed package size ... NOTE
    ```
      installed size is  5.1Mb
      sub-directories of 1Mb or more:
        doc    2.0Mb
        libs   2.1Mb
    ```

# padr

<details>

* Version: 0.6.2
* GitHub: https://github.com/EdwinTh/padr
* Source code: https://github.com/cran/padr
* Date/Publication: 2022-11-23 16:00:02 UTC
* Number of recursive dependencies: 76

Run `revdepcheck::cloud_details(, "padr")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘padr-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: pad
    > ### Title: Pad the datetime column of a data frame
    > ### Aliases: pad
    > 
    > ### ** Examples
    > 
    > simple_df <- data.frame(day = as.Date(c('2016-04-01', '2016-04-03')),
    ...
      6.       └─dplyr::arrange(.data, ..., .by_group = .by_group, .locale = .locale)
      7.         └─dplyr:::arrange_rows(.data, dots = dots, locale = .locale)
      8.           ├─dplyr::mutate(data, `:=`("{name}", !!dot), .keep = "none")
      9.           └─dplyr:::mutate.data.frame(data, `:=`("{name}", !!dot), .keep = "none")
     10.             └─dplyr::mutate(...)
     11.               └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
     12.                 └─DataMask$new(data, by, "mutate", error_call = error_call)
     13.                   └─dplyr (local) initialize(...)
     14.                     └─rlang::abort(...)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
        4. ├─pad_int(df_single, "y") %>% nrow
        5. ├─base::nrow(.)
        6. └─padr::pad_int(df_single, "y")
        7.   ├─base::suppressMessages(dplyr::left_join(spanned, x))
        8.   │ └─base::withCallingHandlers(...)
        9.   ├─dplyr::left_join(spanned, x)
       10.   └─dplyr:::left_join.data.frame(spanned, x)
       11.     └─dplyr::left_join(...)
       12.       └─dplyr:::join_mutate(...)
       13.         └─dplyr:::join_by_common(x_names, y_names, error_call = error_call)
       14.           └─rlang::abort(message, call = error_call)
      
      [ FAIL 1 | WARN 2 | SKIP 0 | PASS 609 ]
      Error: Test failures
      Execution halted
    ```

# prophet

<details>

* Version: 1.0
* GitHub: https://github.com/facebook/prophet
* Source code: https://github.com/cran/prophet
* Date/Publication: 2021-03-30 12:10:07 UTC
* Number of recursive dependencies: 101

Run `revdepcheck::cloud_details(, "prophet")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
        1. ├─testthat::expect_warning(m <- fit.prophet(m, train2)) at test_prophet.R:433:2
        2. │ └─testthat:::quasi_capture(...)
        3. │   ├─testthat (local) .capture(...)
        4. │   │ └─base::withCallingHandlers(...)
        5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        6. └─prophet::fit.prophet(m, train2)
        7.   └─prophet:::make_all_seasonality_features(m, history)
        8.     └─prophet:::construct_holiday_dataframe(m, df$ds)
        9.       ├─base::unique(format(dates, "%Y"))
       10.       ├─base::format(dates, "%Y")
       11.       └─base::format.default(dates, "%Y")
      
      [ FAIL 14 | WARN 48 | SKIP 0 | PASS 354 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 57.5Mb
      sub-directories of 1Mb or more:
        libs  56.8Mb
    ```

*   checking dependencies in R code ... NOTE
    ```
    Namespaces in Imports field not imported from:
      ‘StanHeaders’ ‘methods’ ‘rstantools’
      All declared Imports should be used.
    ```

*   checking for GNU extensions in Makefiles ... NOTE
    ```
    GNU make is a SystemRequirements.
    ```

# sjstats

<details>

* Version: 0.18.2
* GitHub: https://github.com/strengejacke/sjstats
* Source code: https://github.com/cran/sjstats
* Date/Publication: 2022-11-19 22:10:02 UTC
* Number of recursive dependencies: 166

Run `revdepcheck::cloud_details(, "sjstats")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘sjstats-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: inequ_trend
    > ### Title: Compute trends in status inequalities
    > ### Aliases: inequ_trend
    > 
    > ### ** Examples
    > 
    > # This example reproduces Fig. 1 of Mackenbach et al. 2015, p.5
    ...
     15. │               └─tidyselect:::walk_data_tree(new, data_mask, context_mask)
     16. │                 └─tidyselect:::as_indices_sel_impl(...)
     17. │                   └─tidyselect:::as_indices_impl(...)
     18. │                     └─tidyselect:::chr_as_locations(x, vars, call = call, arg = arg)
     19. │                       └─vctrs::vec_as_location(...)
     20. └─vctrs (local) `<fn>`()
     21.   └─vctrs:::stop_subscript_oob(...)
     22.     └─vctrs:::stop_subscript(...)
     23.       └─rlang::abort(...)
    Execution halted
    ```

# srvyr

<details>

* Version: 1.2.0
* GitHub: https://github.com/gergness/srvyr
* Source code: https://github.com/cran/srvyr
* Date/Publication: 2023-02-21 04:10:02 UTC
* Number of recursive dependencies: 100

Run `revdepcheck::cloud_details(, "srvyr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      > library(testthat)
      > library(srvyr)
      
      Attaching package: 'srvyr'
      
      The following object is masked from 'package:stats':
      
          filter
      
      > 
      > test_check("srvyr")
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
    ```

## In both

*   checking package dependencies ... NOTE
    ```
    Package suggested but not available for checking: ‘convey’
    ```

# tidylog

<details>

* Version: 1.0.2
* GitHub: https://github.com/elbersb/tidylog
* Source code: https://github.com/cran/tidylog
* Date/Publication: 2020-07-03 13:30:02 UTC
* Number of recursive dependencies: 68

Run `revdepcheck::cloud_details(, "tidylog")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      > 
      > test_check("tidylog")
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 302 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test_mutate.R:53:5'): mutate ──────────────────────────────────────
      `f()` produced unexpected messages.
      Expected match: from character to Date.*0 new NA
      Actual values:
      * mutate: converted 'date' from character to double (0 new NA)
      
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 302 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking LazyData ... NOTE
    ```
      'LazyData' is specified without a 'data' directory
    ```

# tsibble

<details>

* Version: 1.1.3
* GitHub: https://github.com/tidyverts/tsibble
* Source code: https://github.com/cran/tsibble
* Date/Publication: 2022-10-09 03:20:02 UTC
* Number of recursive dependencies: 97

Run `revdepcheck::cloud_details(, "tsibble")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      ── Error ('test-tsibble.R:73:1'): (code run outside of `test_that()`) ──────────
      Error in `validate_tsibble(data = tbl, key = key_vars, key_data = key_data, 
          index = index)`: A valid tsibble must have distinct rows identified by key and index.
      ℹ Please use `duplicates()` to check the duplicated rows.
      Backtrace:
          ▆
       1. ├─tsibble::as_tsibble(df, index = time) at test-tsibble.R:73:0
       2. └─tsibble:::as_tsibble.data.frame(df, index = time)
       3.   └─tsibble::build_tsibble(...)
       4.     └─tsibble:::validate_tsibble(data = tbl, key = key_vars, key_data = key_data, index = index)
       5.       └─rlang::abort(...)
      
      [ FAIL 2 | WARN 7 | SKIP 2 | PASS 645 ]
      Error: Test failures
      Execution halted
    ```

# unpivotr

<details>

* Version: 0.6.3
* GitHub: https://github.com/nacnudus/unpivotr
* Source code: https://github.com/cran/unpivotr
* Date/Publication: 2023-01-22 21:20:02 UTC
* Number of recursive dependencies: 89

Run `revdepcheck::cloud_details(, "unpivotr")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘unpivotr-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: enhead
    > ### Title: Join data cells to headers
    > ### Aliases: enhead
    > 
    > ### ** Examples
    > 
    > library(dplyr)
    ...
     23. │                 └─tidyselect:::walk_data_tree(new, data_mask, context_mask)
     24. │                   └─tidyselect:::as_indices_sel_impl(...)
     25. │                     └─tidyselect:::as_indices_impl(...)
     26. │                       └─tidyselect:::chr_as_locations(x, vars, call = call, arg = arg)
     27. │                         └─vctrs::vec_as_location(...)
     28. └─vctrs (local) `<fn>`()
     29.   └─vctrs:::stop_subscript_oob(...)
     30.     └─vctrs:::stop_subscript(...)
     31.       └─rlang::abort(...)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      > 
      > test_check("unpivotr")
      [ FAIL 1 | WARN 2 | SKIP 0 | PASS 263 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-rectify.R:158:3'): Blank columns amongst the data are retained ──
      rectify(x) not equal to `rectify_correct`.
      Component "3(C)": Modes: list, logical
      Component "3(C)": Component 1: target is NULL, current is logical
      Component "3(C)": Component 2: target is NULL, current is logical
      Component "3(C)": Component 3: target is NULL, current is logical
      
      [ FAIL 1 | WARN 2 | SKIP 0 | PASS 263 ]
      Error: Test failures
      Execution halted
    ```

# vcfR

<details>

* Version: 1.14.0
* GitHub: https://github.com/knausb/vcfR
* Source code: https://github.com/cran/vcfR
* Date/Publication: 2023-02-10 15:00:05 UTC
* Number of recursive dependencies: 100

Run `revdepcheck::cloud_details(, "vcfR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘vcfR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: Convert to tidy data frames
    > ### Title: Convert vcfR objects to tidy data frames
    > ### Aliases: 'Convert to tidy data frames' vcfR2tidy extract_info_tidy
    > ###   extract_gt_tidy vcf_field_names
    > 
    > ### ** Examples
    > 
    ...
    > 
    > 
    > # extract all the INFO and FORMAT fields into a list of tidy
    > # data frames: fix, gt, and meta. Here we don't coerce columns
    > # to integer or numeric types...
    > Z <- vcfR2tidy(vcf)
    Error: Conversion Error: Could not convert string 'A' to DOUBLE
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      > #library("vcfR")
      > #
      > #
      > test_check("vcfR")
      Loading required package: vcfR
      
         *****       ***   vcfR   ***       *****
         This is vcfR 1.14.0 
           browseVignettes('vcfR') # Documentation
           citation('vcfR') # Citation
         *****       *****      *****       *****
      
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 14.7Mb
      sub-directories of 1Mb or more:
        libs  12.8Mb
    ```

# yardstick

<details>

* Version: 1.2.0
* GitHub: https://github.com/tidymodels/yardstick
* Source code: https://github.com/cran/yardstick
* Date/Publication: 2023-04-21 08:40:02 UTC
* Number of recursive dependencies: 126

Run `revdepcheck::cloud_details(, "yardstick")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      x Column `group` is not found.
      Backtrace:
          ▆
       1. ├─yardstick::curve_metric_summarizer(...) at test-template.R:792:2
       2. │ └─yardstick:::yardstick_eval_select(...)
       3. │   └─tidyselect::eval_select(...)
       4. │     └─tidyselect::tidyselect_data_proxy(data)
       5. ├─dplyr::group_by(hpc_f1, group)
       6. └─dplyr:::group_by.data.frame(hpc_f1, group)
       7.   └─dplyr::group_by_prepare(.data, ..., .add = .add, error_call = current_env())
       8.     └─rlang::abort(bullets, call = error_call)
      
      [ FAIL 3 | WARN 0 | SKIP 153 | PASS 850 ]
      Error: Test failures
      Execution halted
    ```

