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
    Complete output:
      > library(testthat)
      > library(DiagrammeR)
      > 
      > suppressWarnings(RNGversion("3.5.0"))
      > test_check("DiagrammeR")
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
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
      
      [ FAIL 1 | WARN 7 | SKIP 2 | PASS 646 ]
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
      
      actual vs expected
                         .lift
      - actual[1, ]         NA
      + expected[1, ]      NaN
        actual[2, ]   1.500000
        actual[3, ]   1.500000
        actual[4, ]   1.125000
      
        `actual$.lift[1:4]`:  NA 1 2 1
      `expected$.lift[1:4]`: NaN 1 2 1
      
      [ FAIL 1 | WARN 0 | SKIP 153 | PASS 852 ]
      Error: Test failures
      Execution halted
    ```

