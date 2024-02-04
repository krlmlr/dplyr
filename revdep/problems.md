# arrow

<details>

* Version: 14.0.0.2
* GitHub: https://github.com/apache/arrow
* Source code: https://github.com/cran/arrow
* Date/Publication: 2023-12-02 01:30:03 UTC
* Number of recursive dependencies: 79

Run `revdepcheck::cloud_details(, "arrow")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > # Licensed to the Apache Software Foundation (ASF) under one
      > # or more contributor license agreements.  See the NOTICE file
      > # distributed with this work for additional information
      > # regarding copyright ownership.  The ASF licenses this file
      > # to you under the Apache License, Version 2.0 (the
      > # "License"); you may not use this file except in compliance
      > # with the License.  You may obtain a copy of the License at
    ...
      `expected$max_int`: 10
      Backtrace:
          ▆
       1. └─arrow:::compare_dplyr_binding(...) at test-dplyr-summarize.R:548:3
       2.   └─arrow:::expect_equal(via_table, expected, ...) at tests/testthat/helper-expectation.R:102:3
       3.     └─testthat::expect_equal(...) at tests/testthat/helper-expectation.R:43:5
      
      [ FAIL 1 | WARN 8 | SKIP 79 | PASS 6465 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 147.3Mb
      sub-directories of 1Mb or more:
        R       8.0Mb
        libs  138.6Mb
    ```

*   checking Rd cross-references ... NOTE
    ```
    Package unavailable to check Rd xrefs: ‘readr’
    ```

# BayesianReasoning

<details>

* Version: 0.4.2
* GitHub: https://github.com/gorkang/BayesianReasoning
* Source code: https://github.com/cran/BayesianReasoning
* Date/Publication: 2023-11-14 11:33:20 UTC
* Number of recursive dependencies: 108

Run `revdepcheck::cloud_details(, "BayesianReasoning")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(BayesianReasoning)
      > 
      > test_check("BayesianReasoning")
      
       Plot created in: ./FP_10_sens_100_screening_1667_diagnostic_44.png
      
    ...
              .by
          }
      }, .preserve = .preserve)`: Can't compute indices.
      Caused by error:
      ! `size` must be less than or equal to 0 (size of data).
      i set `replace = TRUE` to use sampling with replacement.
      
      [ FAIL 1 | WARN 0 | SKIP 4 | PASS 114 ]
      Error: Test failures
      Execution halted
    ```

# bioinactivation

<details>

* Version: 1.2.3
* GitHub: NA
* Source code: https://github.com/cran/bioinactivation
* Date/Publication: 2019-08-01 16:40:15 UTC
* Number of recursive dependencies: 78

Run `revdepcheck::cloud_details(, "bioinactivation")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > 
      > library(testthat)
      > library(bioinactivation)
      > 
      > #==============================================================================
      > 
      > #- TEST PREDICTIONS FOR ISOTHERMAL PROFILES (WITH KNOWN SOLUTIONS)
    ...
      
      Error:
      ! Test failed
      Backtrace:
          ▆
       1. ├─testthat::test_that(...)
       2. │ └─withr (local) `<fn>`()
       3. └─reporter$stop_if_needed()
       4.   └─rlang::abort("Test failed", call = NULL)
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘inactivation.Rmd’ using rmarkdown
    
    Quitting from lines 665-668 [unnamed-chunk-47] (inactivation.Rmd)
    Error: processing vignette 'inactivation.Rmd' failed with diagnostics:
    illegal input detected before taking any integration steps - see written message
    --- failed re-building ‘inactivation.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘inactivation.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# causalBatch

<details>

* Version: 1.0
* GitHub: https://github.com/neurodata/causal_batch
* Source code: https://github.com/cran/causalBatch
* Date/Publication: 2024-01-24 16:02:55 UTC
* Number of recursive dependencies: 139

Run `revdepcheck::cloud_details(, "causalBatch")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/testing-design.html#sec-tests-files-overview
      > # * https://testthat.r-lib.org/articles/special-files.html
    ...
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-kway_match.R:74:3'): K-way matching increases covariate overlap ──
      ov.before < ov.after is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      
      [ FAIL 1 | WARN 0 | SKIP 3 | PASS 37 ]
      Error: Test failures
      Execution halted
    ```

# CCWeights

<details>

* Version: 0.1.6
* GitHub: NA
* Source code: https://github.com/cran/CCWeights
* Date/Publication: 2021-11-09 21:40:02 UTC
* Number of recursive dependencies: 94

Run `revdepcheck::cloud_details(, "CCWeights")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘CCWeights-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: doEvaluation
    > ### Title: Evaluate Different Weighting Factors
    > ### Aliases: doEvaluation
    > 
    > ### ** Examples
    > 
    > Concentration <- rep(c(10, 50, 100, 500), each = 3)
    > Response <- c(133, 156, 177, 1300, 1450, 1600, 4000, 3881, 3700, 140000, 139000, 140000)
    > DF <- cbind.data.frame(Concentration = Concentration, Response = Response)
    > result <- doEvaluation(DF)
    Error in lm.fit(x, y, offset = offset, singular.ok = singular.ok, ...) : 
      0 (non-NA) cases
    Calls: doEvaluation -> doWlm -> lm -> lm.fit
    Execution halted
    ```

# CodelistGenerator

<details>

* Version: 2.2.0
* GitHub: NA
* Source code: https://github.com/cran/CodelistGenerator
* Date/Publication: 2024-01-25 17:10:08 UTC
* Number of recursive dependencies: 110

Run `revdepcheck::cloud_details(, "CodelistGenerator")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/tests.html
      > # * https://testthat.r-lib.org/reference/test_package.html#special-files
    ...
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-codesFrom.R:26:3'): test inputs - mock ───────────────────────
      `codesFromConceptSet(...)` did not throw the expected error.
      ── Failure ('test-codesFrom.R:26:3'): test inputs - mock ───────────────────────
      `codesFromConceptSet(...)` did not throw the expected error.
      
      [ FAIL 2 | WARN 0 | SKIP 8 | PASS 269 ]
      Error: Test failures
      Execution halted
    ```

# concaveman

<details>

* Version: 1.1.0
* GitHub: NA
* Source code: https://github.com/cran/concaveman
* Date/Publication: 2020-05-11 10:50:07 UTC
* Number of recursive dependencies: 48

Run `revdepcheck::cloud_details(, "concaveman")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘concaveman-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: concaveman
    > ### Title: concaveman: A very fast 2D concave hull algorithm.
    > ### Aliases: concaveman concaveman.matrix concaveman.sf
    > 
    > ### ** Examples
    > 
    > data(points)
    ...
      9.         ├─obj[[attr(obj, "sf_column")]]
     10.         └─tibble:::`[[.tbl_df`(obj, attr(obj, "sf_column"))
     11.           └─tibble:::tbl_subset2(x, j = i, j_arg = substitute(i))
     12.             └─tibble:::vectbl_as_col_location2(...)
     13.               ├─tibble:::subclass_col_index_errors(...)
     14.               │ └─base::withCallingHandlers(...)
     15.               └─vctrs::vec_as_location2(j, n, names, call = call)
     16.                 └─vctrs:::result_get(...)
     17.                   └─rlang::cnd_signal(x$err)
    Execution halted
    ```

# crosshap

<details>

* Version: 1.2.2
* GitHub: NA
* Source code: https://github.com/cran/crosshap
* Date/Publication: 2023-05-02 07:50:08 UTC
* Number of recursive dependencies: 118

Run `revdepcheck::cloud_details(, "crosshap")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/tests.html
      > # * https://testthat.r-lib.org/reference/test_package.html#special-files
    ...
       4. ├─dplyr:::left_join.data.frame(...)
       5. │ └─dplyr:::rel_try(...)
       6. ├─hap
       7. └─rlang:::`$.rlang_fake_data_pronoun`(.data, hap)
       8.   └─rlang:::stop_fake_data_subset(call)
       9.     └─rlang::abort(...)
      
      [ FAIL 1 | WARN 0 | SKIP 6 | PASS 4 ]
      Error: Test failures
      Execution halted
    ```

# DescrTab2

<details>

* Version: 2.1.16
* GitHub: https://github.com/imbi-heidelberg/DescrTab2
* Source code: https://github.com/cran/DescrTab2
* Date/Publication: 2022-09-06 08:50:02 UTC
* Number of recursive dependencies: 167

Run `revdepcheck::cloud_details(, "DescrTab2")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘DescrTab2-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: sig_test
    > ### Title: Calculates a statistical significance test
    > ### Aliases: sig_test
    > 
    > ### ** Examples
    > 
    > cont_var <- c(1, 2, 3)
    > sig_test(cont_var)
    Error in t.test.default(x = numeric(0)) : not enough 'x' observations
    Calls: sig_test ... ignore_unused_args -> do.call -> <Anonymous> -> t.test.default
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(DescrTab2)
      > 
      > 
      > test_check("DescrTab2")
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
    ...
        'test_word.R:6:5'
      • empty test (1): 'test_misc.R:50:1'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test_summary_stats.R:92:5'): numeric printing fails if some summary stat does not return numeric ──
      `expect_error(...)` did not throw the expected warning.
      
      [ FAIL 1 | WARN 191 | SKIP 7 | PASS 201 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    There are ::: calls to the package's namespace in its code. A package
      almost never needs to use ::: for its own objects:
      ‘.N’ ‘.Nmiss’ ‘.Q1’ ‘.Q3’ ‘.factorN’ ‘.factorNmiss’ ‘.factorQ1’
      ‘.factorQ3’ ‘.factormax’ ‘.factormean’ ‘.factormedian’ ‘.factormin’
      ‘.factorsd’ ‘.max’ ‘.mean’ ‘.median’ ‘.min’ ‘.sd’
    ```

# dials

<details>

* Version: 1.2.0
* GitHub: https://github.com/tidymodels/dials
* Source code: https://github.com/cran/dials
* Date/Publication: 2023-04-03 15:30:10 UTC
* Number of recursive dependencies: 75

Run `revdepcheck::cloud_details(, "dials")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(dials)
      Loading required package: scales
      > 
      > if (requireNamespace("xml2")) {
      +   test_check("dials", reporter = MultiReporter$new(reporters = list(JunitReporter$new(file = "test-results.xml"), CheckReporter$new())))
      + } else {
    ...
      ── Failure ('test-compat-dplyr-parameters.R:100:3'): summarise() always drops the parameters class ──
      `x` has class 'parameters'/'tbl_df'/'tbl'/'data.frame', not 'tbl_df'/'tbl'/'data.frame'.
      Backtrace:
          ▆
       1. └─dials:::expect_s3_class_bare_tibble(summarise(x, y = 1)) at test-compat-dplyr-parameters.R:100:3
       2.   └─testthat::expect_s3_class(...) at tests/testthat/helper-s3.R:6:3
      
      [ FAIL 2 | WARN 0 | SKIP 33 | PASS 377 ]
      Error: Test failures
      Execution halted
    ```

# duckplyr

<details>

* Version: 0.3.0
* GitHub: https://github.com/duckdblabs/duckplyr
* Source code: https://github.com/cran/duckplyr
* Date/Publication: 2023-12-11 07:40:10 UTC
* Number of recursive dependencies: 91

Run `revdepcheck::cloud_details(, "duckplyr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/tests.html
      > # * https://testthat.r-lib.org/reference/test_package.html#special-files
    ...
      3: In normalizePath(tools::R_user_dir("R.cache", which = "cache")) :
        path[1]="/root/.cache/R/R.cache": No such file or directory
      
      🛠: 1181
      🔨:  547
      🦆:  634
      add_count, anti_join, arrange, compute, count, cross_join, distinct, do, eval, filter, full_join, inner_join, intersect, left_join, mutate, mutate.data.frame, nest_join, pull, reframe, relocate, rename, rename_with, right_join, rows_append, rows_delete, rows_insert, rows_patch, rows_update, rows_upsert, select, semi_join, setdiff, setequal, slice, slice_head, slice_sample, slice_tail, summarise, symdiff, transmute, ungroup, union_all
      
      00:01:18.115224
      Execution halted
    ```

# eiCompare

<details>

* Version: 3.0.4
* GitHub: https://github.com/RPVote/eiCompare
* Source code: https://github.com/cran/eiCompare
* Date/Publication: 2023-08-31 13:30:02 UTC
* Number of recursive dependencies: 147

Run `revdepcheck::cloud_details(, "eiCompare")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘bisg.Rmd’ using rmarkdown
    
    Quitting from lines 127-149 [unnamed-chunk-13] (bisg.Rmd)
    Error: processing vignette 'bisg.Rmd' failed with diagnostics:
    argument is of length zero
    --- failed re-building ‘bisg.Rmd’
    
    --- re-building ‘ei.Rmd’ using rmarkdown
    ...
    --- finished re-building ‘parallel_processing.Rmd’
    
    --- re-building ‘performance_analysis.Rmd’ using rmarkdown
    --- finished re-building ‘performance_analysis.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘bisg.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# ern

<details>

* Version: 1.3.1
* GitHub: NA
* Source code: https://github.com/cran/ern
* Date/Publication: 2024-01-29 23:50:08 UTC
* Number of recursive dependencies: 96

Run `revdepcheck::cloud_details(, "ern")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/tests.html
      > # * https://testthat.r-lib.org/reference/test_package.html#special-files
    ...
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-agg_to_daily.R:105:3'): internal time index is correctly specified ──
      `check` is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 175 ]
      Error: Test failures
      Execution halted
    ```

# ezplot

<details>

* Version: 0.7.13
* GitHub: NA
* Source code: https://github.com/cran/ezplot
* Date/Publication: 2024-01-28 11:30:05 UTC
* Number of recursive dependencies: 109

Run `revdepcheck::cloud_details(, "ezplot")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(ezplot)
      > suppressPackageStartupMessages(library(tsibble))
      > 
      > test_check("ezplot")
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 93 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-classification_plot.R:9:3'): pr_plot ─────────────────────────
      nrow(g$data) not equal to 11.
      1/1 mismatches
      [1] 12 - 11 == 1
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 93 ]
      Error: Test failures
      Execution halted
    ```

# googledrive

<details>

* Version: 2.1.1
* GitHub: https://github.com/tidyverse/googledrive
* Source code: https://github.com/cran/googledrive
* Date/Publication: 2023-06-11 19:30:08 UTC
* Number of recursive dependencies: 68

Run `revdepcheck::cloud_details(, "googledrive")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(googledrive)
      > 
      > test_check("googledrive")
      Test file naming scheme:
      • foo-TEST-drive_something
    ...
      ── Failure ('test-compat-dplyr.R:131:3'): summarise() always drops the dribble class ──
      `x` has class 'dribble'/'tbl_df'/'tbl'/'data.frame', not 'tbl_df'/'tbl'/'data.frame'.
      Backtrace:
          ▆
       1. └─googledrive:::expect_bare_tibble(...) at test-compat-dplyr.R:131:3
       2.   └─testthat::expect_s3_class(...) at tests/testthat/helper.R:53:3
      
      [ FAIL 2 | WARN 0 | SKIP 124 | PASS 255 ]
      Error: Test failures
      Execution halted
    ```

# hidecan

<details>

* Version: 1.1.0
* GitHub: https://github.com/PlantandFoodResearch/hidecan
* Source code: https://github.com/cran/hidecan
* Date/Publication: 2023-02-10 09:40:02 UTC
* Number of recursive dependencies: 91

Run `revdepcheck::cloud_details(, "hidecan")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/tests.html
      > # * https://testthat.r-lib.org/reference/test_package.html#special-files
    ...
      `expected`: -0.0 -0.3 -0.5 -0.6 -0.7
      ── Failure ('test-input_data_constructors.R:92:3'): DE_data works ──────────────
      ...[[]] (`actual`) not equal to -log10(1:5) (`expected`).
      
        `actual`: -0.0 -0.7 -1.1 -1.4 -1.6
      `expected`: -0.0 -0.3 -0.5 -0.6 -0.7
      
      [ FAIL 2 | WARN 0 | SKIP 1 | PASS 115 ]
      Error: Test failures
      Execution halted
    ```

# iNZightTools

<details>

* Version: 2.0.1
* GitHub: https://github.com/iNZightVIT/iNZightTools
* Source code: https://github.com/cran/iNZightTools
* Date/Publication: 2023-10-12 11:50:08 UTC
* Number of recursive dependencies: 119

Run `revdepcheck::cloud_details(, "iNZightTools")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(iNZightTools)
      
      Attaching package: 'iNZightTools'
      
      The following object is masked from 'package:stats':
      
    ...
      • On CRAN (4): 'test_smart_read.R:29:5', 'test_smart_read.R:259:5',
        'test_survey_design.R:80:5', 'test_survey_design.R:120:5'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test_join_data.R:16:5'): Auto detection works ─────────────────────
      `join_data(iris, iris)` did not throw the expected warning.
      
      [ FAIL 1 | WARN 0 | SKIP 4 | PASS 397 ]
      Error: Test failures
      Execution halted
    ```

# mpwR

<details>

* Version: 0.1.5
* GitHub: NA
* Source code: https://github.com/cran/mpwR
* Date/Publication: 2023-11-13 23:33:26 UTC
* Number of recursive dependencies: 113

Run `revdepcheck::cloud_details(, "mpwR")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(mpwR)
      > 
      > test_check("mpwR")
      For DIA-NN no quantitative LFQ data on peptide-level.
      For PD no quantitative LFQ data on peptide-level.
      For DIA-NN no quantitative LFQ data on peptide-level.
    ...
              - "LFQ Intensity 03" [7]
      ── Failure ('test_utils_reports.R:332:4'): generate_summary_Report works ───────
      output$`Proteingroup.IDs [abs.] with a CV LFQ < 20 [%]` (`actual`) not equal to 3 (`expected`).
      
        `actual`: 0
      `expected`: 3
      
      [ FAIL 6 | WARN 123 | SKIP 0 | PASS 654 ]
      Error: Test failures
      Execution halted
    ```

# msigdbr

<details>

* Version: 7.5.1
* GitHub: https://github.com/igordot/msigdbr
* Source code: https://github.com/cran/msigdbr
* Date/Publication: 2022-03-30 07:00:16 UTC
* Number of recursive dependencies: 55

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

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘msigdbr-intro.Rmd’ using rmarkdown
    Killed
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 13.1Mb
      sub-directories of 1Mb or more:
        R  13.0Mb
    ```

# mtdesign

<details>

* Version: 0.1.0
* GitHub: https://github.com/openpharma/mtdesign
* Source code: https://github.com/cran/mtdesign
* Date/Publication: 2022-10-27 15:32:39 UTC
* Number of recursive dependencies: 67

Run `revdepcheck::cloud_details(, "mtdesign")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(mtdesign)
      > 
      > test_check("mtdesign")
      Killed
    ```

# OlinkAnalyze

<details>

* Version: 3.6.2
* GitHub: NA
* Source code: https://github.com/cran/OlinkAnalyze
* Date/Publication: 2024-01-13 13:00:13 UTC
* Number of recursive dependencies: 209

Run `revdepcheck::cloud_details(, "OlinkAnalyze")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘OutlierExclusion.Rmd’ using rmarkdown
    --- finished re-building ‘OutlierExclusion.Rmd’
    
    --- re-building ‘Vignett.Rmd’ using rmarkdown
    Killed
    --- re-building ‘bridging_introduction.Rmd’ using rmarkdown
    --- finished re-building ‘bridging_introduction.Rmd’
    
    --- re-building ‘plate_randomizer.Rmd’ using rmarkdown
    --- finished re-building ‘plate_randomizer.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘Vignett.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# partition

<details>

* Version: 0.2.0
* GitHub: https://github.com/USCbiostats/partition
* Source code: https://github.com/cran/partition
* Date/Publication: 2024-01-24 19:20:02 UTC
* Number of recursive dependencies: 96

Run `revdepcheck::cloud_details(, "partition")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘extending-partition.Rmd’ using rmarkdown
    --- finished re-building ‘extending-partition.Rmd’
    
    --- re-building ‘introduction-to-partition.Rmd’ using rmarkdown
    Killed
    SUMMARY: processing the following file failed:
      ‘introduction-to-partition.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 16.1Mb
      sub-directories of 1Mb or more:
        doc    2.8Mb
        libs  12.0Mb
    ```

# rfars

<details>

* Version: 0.3.0
* GitHub: https://github.com/s87jackson/rfars
* Source code: https://github.com/cran/rfars
* Date/Publication: 2023-05-05 09:40:02 UTC
* Number of recursive dependencies: 92

Run `revdepcheck::cloud_details(, "rfars")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘Crash_sequences.Rmd’ using rmarkdown
    trying URL 'https://static.nhtsa.gov/nhtsa/downloads/CRSS/2021/CRSS2021SAS.zip'
    Content type 'application/x-zip-compressed' length 62354127 bytes (59.5 MB)
    ==================================================
    downloaded 59.5 MB
    
    Killed
    --- re-building ‘Rural_roads.Rmd’ using rmarkdown
    trying URL 'https://static.nhtsa.gov/nhtsa/downloads/FARS/2019/National/FARS2019NationalSAS.zip'
    ...
    Content type 'application/x-zip-compressed' length 43216670 bytes (41.2 MB)
    ==================================================
    downloaded 41.2 MB
    
    Killed
    SUMMARY: processing the following files failed:
      ‘Crash_sequences.Rmd’ ‘Rural_roads.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 806 marked UTF-8 strings
    ```

# rsample

<details>

* Version: 1.2.0
* GitHub: https://github.com/tidymodels/rsample
* Source code: https://github.com/cran/rsample
* Date/Publication: 2023-08-23 15:00:02 UTC
* Number of recursive dependencies: 117

Run `revdepcheck::cloud_details(, "rsample")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(rsample)
      
      Attaching package: 'rsample'
      
      The following object is masked from 'package:testthat':
      
    ...
      ── Failure ('test-compat-dplyr.R:265:5'): summarise() always drops the rset class ──
      `x` has class 'validation_set'/'rset'/'tbl_df'/'tbl'/'data.frame', not 'tbl_df'/'tbl'/'data.frame'.
      Backtrace:
          ▆
       1. └─rsample:::expect_s3_class_bare_tibble(...) at test-compat-dplyr.R:265:5
       2.   └─testthat::expect_s3_class(...) at tests/testthat/helpers-rsample.R:11:3
      
      [ FAIL 40 | WARN 3 | SKIP 49 | PASS 2997 ]
      Error: Test failures
      Execution halted
    ```

# RVA

<details>

* Version: 0.0.5
* GitHub: https://github.com/THERMOSTATS/RVA
* Source code: https://github.com/cran/RVA
* Date/Publication: 2021-11-01 21:40:02 UTC
* Number of recursive dependencies: 213

Run `revdepcheck::cloud_details(, "RVA")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is  8.6Mb
      sub-directories of 1Mb or more:
        data   7.2Mb
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespace in Imports field not imported from: ‘XML’
      All declared Imports should be used.
    ```

# scGOclust

<details>

* Version: 0.2.1
* GitHub: https://github.com/Papatheodorou-Group/scGOclust
* Source code: https://github.com/cran/scGOclust
* Date/Publication: 2024-01-24 14:40:02 UTC
* Number of recursive dependencies: 217

Run `revdepcheck::cloud_details(, "scGOclust")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘scGOclust_vignette.Rmd’ using rmarkdown
    Killed
    ```

# scoringTools

<details>

* Version: 0.1.2
* GitHub: https://github.com/adimajo/scoringTools
* Source code: https://github.com/cran/scoringTools
* Date/Publication: 2021-01-10 17:20:02 UTC
* Number of recursive dependencies: 111

Run `revdepcheck::cloud_details(, "scoringTools")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(scoringTools)
      > 
      > test_check("scoringTools")
      Generalized Linear Model of class 'speedglm':
      
      Call:  speedglm::speedglm(formula = labels ~ ., data = df_augmente[,      -which(names(df_augmente) %in% c("poidsfinal", "classe_SCORE"))][!df_augmente$poidsfinal ==      0, ], family = stats::binomial(link = "logit"), weights = df_augmente$poidsfinal[!df_augmente$poidsfinal ==      0]) 
    ...
       2.   └─scoringTools:::fit_disc(disc[[i]], data_train, type = "speedglm")
       3.     └─speedglm::speedglm(...)
       4.       └─speedglm::speedglm.wfit(...)
       5.         ├─base::solve(XTX, XTz, tol = tol.solve)
       6.         ├─base::solve(XTX, XTz, tol = tol.solve)
       7.         └─base::solve.default(XTX, XTz, tol = tol.solve)
      
      [ FAIL 1 | WARN 30 | SKIP 0 | PASS 954 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking Rd \usage sections ... NOTE
    ```
    S3 methods shown with full name in documentation object 'plot':
      ‘plot.discretization’
    
    S3 methods shown with full name in documentation object 'predict':
      ‘predict.discretization’ ‘predict.reject_infered’
    
    S3 methods shown with full name in documentation object 'summary':
      ‘summary.discretization’
    
    The \usage entries for S3 methods should use the \method markup and not
    their full name.
    See chapter ‘Writing R documentation files’ in the ‘Writing R
    Extensions’ manual.
    ```

# spatialsample

<details>

* Version: 0.5.1
* GitHub: https://github.com/tidymodels/spatialsample
* Source code: https://github.com/cran/spatialsample
* Date/Publication: 2023-11-08 00:20:02 UTC
* Number of recursive dependencies: 108

Run `revdepcheck::cloud_details(, "spatialsample")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(spatialsample)
      > 
      > sf::sf_extSoftVersion()
                GEOS           GDAL         proj.4 GDAL_with_GEOS     USE_PROJ_H 
             "3.8.0"        "3.0.4"        "6.3.1"         "true"         "true" 
                PROJ 
    ...
      • autoplot/buffered-rset-plot.svg
      • autoplot/buffered-vfold-plot.svg
      • autoplot/buffered-vfold-split.svg
      • autoplot/cluster-split-plots.svg
      • autoplot/repeated-block-cv.svg
      • autoplot/repeated-llo.svg
      • autoplot/repeated-vfold.svg
      • autoplot/snake-flips-rows-the-right-way.svg
      Error: Test failures
      Execution halted
    ```

# stickyr

<details>

* Version: 0.1.2
* GitHub: https://github.com/UchidaMizuki/stickyr
* Source code: https://github.com/cran/stickyr
* Date/Publication: 2023-03-26 17:20:06 UTC
* Number of recursive dependencies: 46

Run `revdepcheck::cloud_details(, "stickyr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/tests.html
      > # * https://testthat.r-lib.org/reference/test_package.html#special-files
    ...
        9. │           ├─x[0]
       10. │           └─stickyr:::`[.sticky_tbl_df`(x, 0)
       11. │             └─vctrs::vec_slice(sticky_cols, intersect(row.names(sticky_cols), names(out)))
       12. └─vctrs:::stop_scalar_type(`<fn>`(NULL), "x", `<env>`)
       13.   └─vctrs:::stop_vctrs(...)
       14.     └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call)
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 20 ]
      Error: Test failures
      Execution halted
    ```

# streamDepletr

<details>

* Version: 0.2.0
* GitHub: https://github.com/FoundrySpatial/streamDepletr
* Source code: https://github.com/cran/streamDepletr
* Date/Publication: 2023-07-19 21:30:02 UTC
* Number of recursive dependencies: 71

Run `revdepcheck::cloud_details(, "streamDepletr")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘intro-to-streamDepletr.Rmd’ using rmarkdown
    
    Quitting from lines 334-341 [unnamed-chunk-16] (intro-to-streamDepletr.Rmd)
    Error: processing vignette 'intro-to-streamDepletr.Rmd' failed with diagnostics:
    object '.' not found
    --- failed re-building ‘intro-to-streamDepletr.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘intro-to-streamDepletr.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# text2sdg

<details>

* Version: 1.1.1
* GitHub: https://github.com/dwulff/text2sdg
* Source code: https://github.com/cran/text2sdg
* Date/Publication: 2023-03-17 20:50:02 UTC
* Number of recursive dependencies: 95

Run `revdepcheck::cloud_details(, "text2sdg")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘text2sdg.Rmd’ using rmarkdown
    
    Quitting from lines 208-210 [unnamed-chunk-14] (text2sdg.Rmd)
    Error: processing vignette 'text2sdg.Rmd' failed with diagnostics:
    object 'document' not found
    --- failed re-building ‘text2sdg.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘text2sdg.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 37 marked UTF-8 strings
    ```

# vDiveR

<details>

* Version: 1.2.1
* GitHub: NA
* Source code: https://github.com/cran/vDiveR
* Date/Publication: 2024-01-09 20:20:02 UTC
* Number of recursive dependencies: 132

Run `revdepcheck::cloud_details(, "vDiveR")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/tests.html
      > # * https://testthat.r-lib.org/reference/test_package.html#special-files
    ...
      `names(expected)` is absent
      ── Failure ('test-concat-seq.R:75:5'): Test Case 4: 9-mer CCS (single host), with FASTA output ──
      CCS_1host[2, 1] (`actual`) not equal to "MSTNPKPQRKTKRNTNRR" (`expected`).
      
      `names(actual)` is a character vector ('Sequence')
      `names(expected)` is absent
      
      [ FAIL 8 | WARN 0 | SKIP 0 | PASS 63 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespaces in Imports field not imported from:
      ‘DT’ ‘maps’ ‘readr’
      All declared Imports should be used.
    ```

# workflowsets

<details>

* Version: 1.0.1
* GitHub: https://github.com/tidymodels/workflowsets
* Source code: https://github.com/cran/workflowsets
* Date/Publication: 2023-04-06 22:40:02 UTC
* Number of recursive dependencies: 141

Run `revdepcheck::cloud_details(, "workflowsets")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(workflowsets)
      > 
      > test_check("workflowsets")
      
      Attaching package: 'dplyr'
    ...
      ── Failure ('test-compat-dplyr.R:103:5'): summarise() always drops the workflow_set class ──
      `x` has class 'workflow_set'/'tbl_df'/'tbl'/'data.frame', not 'tbl_df'/'tbl'/'data.frame'.
      Backtrace:
          ▆
       1. └─workflowsets:::expect_s3_class_bare_tibble(...) at test-compat-dplyr.R:103:5
       2.   └─testthat::expect_s3_class(...) at tests/testthat/helper-compat.R:11:3
      
      [ FAIL 4 | WARN 0 | SKIP 14 | PASS 387 ]
      Error: Test failures
      Execution halted
    ```

