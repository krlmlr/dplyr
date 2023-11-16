# arrow

<details>

* Version: 14.0.0
* GitHub: https://github.com/apache/arrow
* Source code: https://github.com/cran/arrow
* Date/Publication: 2023-11-16 15:23:56 UTC
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
      [ FAIL 1 | WARN 9 | SKIP 79 | PASS 6465 ]
      Error: Test failures
      In addition: Warning messages:
      1: In for (name in names(active)) { :
        closing unused connection 6 (/tmp/RtmpSi5nmz/file124ee561ed4/part-0.tsv)
      2: In for (name in names(active)) { :
        closing unused connection 5 (/tmp/RtmpSi5nmz/file124e473c2ad9/part-0.csv)
      3: In for (name in names(active)) { :
        closing unused connection 4 (/tmp/RtmpSi5nmz/file124e44cf9b2a/part-0.csv)
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

# auk

<details>

* Version: 0.7.0
* GitHub: https://github.com/CornellLabofOrnithology/auk
* Source code: https://github.com/cran/auk
* Date/Publication: 2023-11-14 09:43:22 UTC
* Number of recursive dependencies: 100

Run `revdepcheck::cloud_details(, "auk")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘auk-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: format_unmarked_occu
    > ### Title: Format EBD data for occupancy modeling with 'unmarked'
    > ### Aliases: format_unmarked_occu
    > 
    > ### ** Examples
    > 
    > # read and zero-fill the ebd data
    ...
    > 
    > # this function can also be used for abundance modeling
    > abd <- ebd_zf %>% 
    +   # convert count to integer, drop records with no count
    +   dplyr::mutate(observation_count = as.integer(observation_count)) %>% 
    +   dplyr::filter(!is.na(observation_count)) %>% 
    +   # filter to repeated visits
    +   filter_repeat_visits(n_days = 30)
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'X' to INT32
    Execution halted
    ```

# BayesianReasoning

<details>

* Version: 0.4.2
* GitHub: https://github.com/gorkang/BayesianReasoning
* Source code: https://github.com/cran/BayesianReasoning
* Date/Publication: 2023-11-14 11:33:20 UTC
* Number of recursive dependencies: 109

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

* Version: 2.0.0
* GitHub: NA
* Source code: https://github.com/cran/CodelistGenerator
* Date/Publication: 2023-10-09 13:40:18 UTC
* Number of recursive dependencies: 125

Run `revdepcheck::cloud_details(, "CodelistGenerator")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(CodelistGenerator)
      > 
      > test_check("CodelistGenerator")
      condition domain: Limiting to domains of interest
      condition: Getting concepts to include
      condition domain: Adding descendants
    ...
      • Sys.getenv("darwinDbDatabaseServer") == "" is TRUE (1):
        'test-synthea_sql_server.R:2:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-codesFrom.R:23:3'): test inputs - mock ───────────────────────
      `codesFromConceptSet(...)` did not throw the expected error.
      
      [ FAIL 1 | WARN 0 | SKIP 5 | PASS 284 ]
      Error: Test failures
      Execution halted
    ```

# cogmapr

<details>

* Version: 0.9.3
* GitHub: NA
* Source code: https://github.com/cran/cogmapr
* Date/Publication: 2022-01-04 15:40:07 UTC
* Number of recursive dependencies: 77

Run `revdepcheck::cloud_details(, "cogmapr")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘cogmapr-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: RelationshipTestSummary
    > ### Title: Summary table on relationship comparisons
    > ### Aliases: RelationshipTestSummary
    > 
    > ### ** Examples
    > 
    > project_name <- "a_new_project"
    ...
    > my.project <- ProjectCMap(main_path, project_name)
    > 
    > ## Here 0.6 is used only for producing an output. No signif. diff. is reported.
    > RelationshipTestSummary(my.project, units = c("Belgium", "Québec"), 0.6)
    Warning: `rename_()` was deprecated in dplyr 0.7.0.
    ℹ Please use `rename()` instead.
    ℹ The deprecated feature was likely used in the cogmapr package.
      Please report the issue at <https://gitlab.com/FrdVnW/cogmapr/-/issues>.
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'NR' to DOUBLE
    Execution halted
    ```

# crosshap

<details>

* Version: 1.2.2
* GitHub: NA
* Source code: https://github.com/cran/crosshap
* Date/Publication: 2023-05-02 07:50:08 UTC
* Number of recursive dependencies: 119

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
* Number of recursive dependencies: 169

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

# duckplyr

<details>

* Version: 0.2.3
* GitHub: https://github.com/duckdblabs/duckplyr
* Source code: https://github.com/cran/duckplyr
* Date/Publication: 2023-11-08 18:20:02 UTC
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
      
      🛠: 943
      🔨: 573
      🦆: 370
      add_count, anti_join, arrange, compute, count, cross_join, distinct, do, eval, filter, full_join, inner_join, intersect, left_join, mutate, mutate.data.frame, nest_join, pull, reframe, relocate, rename, rename_with, right_join, rows_append, rows_delete, rows_insert, rows_patch, rows_update, rows_upsert, select, semi_join, setdiff, setequal, slice, slice_head, slice_tail, summarise, symdiff, transmute, ungroup, union_all
      
      00:01:22.910825
      Execution halted
    ```

# ezplot

<details>

* Version: 0.7.10
* GitHub: NA
* Source code: https://github.com/cran/ezplot
* Date/Publication: 2023-10-20 21:10:02 UTC
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

# fgeo.analyze

<details>

* Version: 1.1.14
* GitHub: https://github.com/forestgeo/fgeo.analyze
* Source code: https://github.com/cran/fgeo.analyze
* Date/Publication: 2020-12-05 05:40:12 UTC
* Number of recursive dependencies: 101

Run `revdepcheck::cloud_details(, "fgeo.analyze")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(fgeo.analyze)
      > 
      > test_check("fgeo.analyze")
      $N2
      [1] 29
    ...
       21. ├─dplyr::ungroup(.)
       22. ├─dplyr::arrange(., .data$plotcensusnumber)
       23. ├─base::unique(.)
       24. ├─dplyr::summarize(...)
       25. ├─dplyr::group_by(., .data$plotcensusnumber)
       26. └─rlang::set_names(., tolower)
      
      [ FAIL 1 | WARN 3 | SKIP 14 | PASS 297 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking LazyData ... NOTE
    ```
      'LazyData' is specified without a 'data' directory
    ```

# finnts

<details>

* Version: 0.3.0
* GitHub: https://github.com/microsoft/finnts
* Source code: https://github.com/cran/finnts
* Date/Publication: 2023-08-09 22:30:10 UTC
* Number of recursive dependencies: 240

Run `revdepcheck::cloud_details(, "finnts")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(finnts)
      Loading required package: modeltime
      > 
      > test_check("finnts")
      Finn Submission Info
      • Experiment Name: finn_fcst
    ...
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─base::nrow(future_frame)
       5.   ├─base::dim(x)
       6.   └─base::dim.data.frame(x)
       7.     └─base::.row_names_info(x, 2L)
      
      [ FAIL 1 | WARN 6 | SKIP 0 | PASS 79 ]
      Error: Test failures
      Execution halted
    ```

# funneljoin

<details>

* Version: 0.2.0
* GitHub: NA
* Source code: https://github.com/cran/funneljoin
* Date/Publication: 2023-03-21 20:00:02 UTC
* Number of recursive dependencies: 61

Run `revdepcheck::cloud_details(, "funneljoin")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(funneljoin)
      
      Attaching package: 'funneljoin'
      
      The following object is masked from 'package:stats':
      
    ...
       10.       ├─base::NextMethod()
       11.       └─dplyr:::group_data.data.frame(data)
       12.         └─base::nrow(.data)
       13.           ├─base::dim(x)
       14.           └─base::dim.data.frame(x)
       15.             └─base::.row_names_info(x, 2L)
      
      [ FAIL 17 | WARN 0 | SKIP 1 | PASS 384 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘funneljoin.Rmd’ using rmarkdown
    
    Quitting from lines 75-82 [unnamed-chunk-5] (funneljoin.Rmd)
    Error: processing vignette 'funneljoin.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
    --- failed re-building ‘funneljoin.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘funneljoin.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# IPEDS

<details>

* Version: 0.1.0
* GitHub: NA
* Source code: https://github.com/cran/IPEDS
* Date/Publication: 2022-11-01 07:52:51 UTC
* Number of recursive dependencies: 81

Run `revdepcheck::cloud_details(, "IPEDS")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘IPEDS-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: school_preferences
    > ### Title: Function for Selecting Institution by Preferences
    > ### Aliases: school_preferences
    > 
    > ### ** Examples
    > 
    > school_preferences(size = 2, alt_credits = "Yes", diversity_students = 30, diversity_staff = 20)
    ...
    417                       45
    418                        .
    419                        .
    420                       50
    421                        .
    422                       75
    423                       30
    > school_preferences(size = 3, daycare_service = "Yes", app_fee = 50, region = "Southeast")
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string '.' to DOUBLE
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.8Mb
      sub-directories of 1Mb or more:
        data   6.2Mb
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 46 marked UTF-8 strings
    ```

# mpwR

<details>

* Version: 0.1.5
* GitHub: NA
* Source code: https://github.com/cran/mpwR
* Date/Publication: 2023-11-13 23:33:26 UTC
* Number of recursive dependencies: 114

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
* Number of recursive dependencies: 56

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
* Number of recursive dependencies: 69

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

* Version: 3.6.0
* GitHub: NA
* Source code: https://github.com/cran/OlinkAnalyze
* Date/Publication: 2023-11-03 20:00:03 UTC
* Number of recursive dependencies: 230

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
    ```

# partition

<details>

* Version: 0.1.4
* GitHub: https://github.com/USCbiostats/partition
* Source code: https://github.com/cran/partition
* Date/Publication: 2021-10-05 04:20:02 UTC
* Number of recursive dependencies: 92

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
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 11.0Mb
      sub-directories of 1Mb or more:
        doc    1.2Mb
        libs   8.5Mb
    ```

# PupilPre

<details>

* Version: 0.6.2
* GitHub: NA
* Source code: https://github.com/cran/PupilPre
* Date/Publication: 2020-03-10 05:20:02 UTC
* Number of recursive dependencies: 73

Run `revdepcheck::cloud_details(, "PupilPre")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘PupilPre-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: ppl_prep_data
    > ### Title: Check the classes of specific columns and re-assigns as
    > ###   necessary.
    > ### Aliases: ppl_prep_data
    > 
    > ### ** Examples
    > 
    ...
    +                      EventColumns = c("Subject","TRIAL_INDEX"))
    Checking required columns...
        All required columns are present in the data.
    Checking optional columns...
        All optional columns are present in the data.
    Working on required columns...
        RECORDING_SESSION_LABEL renamed to Subject. 
        item renamed to Item.
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'factor' to DOUBLE
    Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘PupilPre_Basic_Preprocessing.Rmd’ using rmarkdown
    
    Quitting from lines 80-81 [unnamed-chunk-4] (PupilPre_Basic_Preprocessing.Rmd)
    Error: processing vignette 'PupilPre_Basic_Preprocessing.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Conversion Error: Could not convert string 'factor' to DOUBLE
    --- failed re-building ‘PupilPre_Basic_Preprocessing.Rmd’
    
    --- re-building ‘PupilPre_Cleanup.Rmd’ using rmarkdown
    --- finished re-building ‘PupilPre_Cleanup.Rmd’
    ...
    --- failed re-building ‘PupilPre_Message_Alignment.Rmd’
    
    --- re-building ‘PupilPre_Plotting.Rmd’ using rmarkdown
    --- finished re-building ‘PupilPre_Plotting.Rmd’
    
    SUMMARY: processing the following files failed:
      ‘PupilPre_Basic_Preprocessing.Rmd’ ‘PupilPre_Message_Alignment.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
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
      ...
    --- re-building ‘Crash_sequences.Rmd’ using rmarkdown
    trying URL 'https://static.nhtsa.gov/nhtsa/downloads/CRSS/2021/CRSS2021SAS.zip'
    Content type 'application/x-zip-compressed' length 62354127 bytes (59.5 MB)
    ==================================================
    downloaded 59.5 MB
    
    Killed
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 806 marked UTF-8 strings
    ```

# ShinyItemAnalysis

<details>

* Version: 1.5.0
* GitHub: https://github.com/patriciamar/ShinyItemAnalysis
* Source code: https://github.com/cran/ShinyItemAnalysis
* Date/Publication: 2023-05-08 10:00:06 UTC
* Number of recursive dependencies: 138

Run `revdepcheck::cloud_details(, "ShinyItemAnalysis")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘ShinyItemAnalysis-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: coef,BlisClass-method
    > ### Title: Get Coefficients from a fitted BLIS model
    > ### Aliases: coef,BlisClass-method
    > 
    > ### ** Examples
    > 
    > fitted_blis <- fit_blis(HCItest[, 1:20], HCIkey)
    Error: pars input does not contain the appropriate classes, which should match pars = 'values'
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.3Mb
      sub-directories of 1Mb or more:
        ShinyItemAnalysis   2.3Mb
        data                1.9Mb
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
* Number of recursive dependencies: 96

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

# ThermalSampleR

<details>

* Version: 0.1.1
* GitHub: NA
* Source code: https://github.com/cran/ThermalSampleR
* Date/Publication: 2023-06-13 08:20:18 UTC
* Number of recursive dependencies: 88

Run `revdepcheck::cloud_details(, "ThermalSampleR")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘test_boot_one.R’
      Running ‘test_boot_two.R’
      Running ‘test_equiv_tost.R’
    Running the tests in ‘tests/test_equiv_tost.R’ failed.
    Complete output:
      > library(ThermalSampleR)
      > library(testthat)
      > coreid = ThermalSampleR::coreid_data
      > 
      > ############################################################################################
    ...
      +   # Size of the population to sample (will test subsamples of size pop_n - x against pop_n for equivalence). Defaults to population size = 30
      +   pop_n = 5
      + )
      Error in seq.default(round(max(plot_var_dat$nsamp), 0)) : 
        'from' must be a finite number
      Calls: equiv_tost ... continuous_scale -> check_breaks_labels -> seq -> seq.default
      In addition: Warning message:
      In max(plot_var_dat$nsamp) :
        no non-missing arguments to max; returning -Inf
      Execution halted
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespaces in Imports field not imported from:
      ‘MASS’ ‘base’ ‘graphics’ ‘janitor’ ‘rlang’ ‘testthat’ ‘utils’
      All declared Imports should be used.
    ```

# tidytransit

<details>

* Version: 1.6.0
* GitHub: https://github.com/r-transit/tidytransit
* Source code: https://github.com/cran/tidytransit
* Date/Publication: 2023-06-23 12:30:02 UTC
* Number of recursive dependencies: 102

Run `revdepcheck::cloud_details(, "tidytransit")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘frequency.Rmd’ using rmarkdown
    
    Quitting from lines 198-202 [unnamed-chunk-12] (frequency.Rmd)
    Error: processing vignette 'frequency.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Conversion Error: Could not convert string 'GS' to DOUBLE
    --- failed re-building ‘frequency.Rmd’
    
    --- re-building ‘introduction.Rmd’ using rmarkdown
    ...
    --- finished re-building ‘servicepatterns.Rmd’
    
    --- re-building ‘timetable.Rmd’ using rmarkdown
    --- finished re-building ‘timetable.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘frequency.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  7.0Mb
      sub-directories of 1Mb or more:
        doc       1.9Mb
        extdata   4.5Mb
    ```

# vcfR

<details>

* Version: 1.14.0
* GitHub: https://github.com/knausb/vcfR
* Source code: https://github.com/cran/vcfR
* Date/Publication: 2023-02-10 15:00:05 UTC
* Number of recursive dependencies: 102

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
    > data("vcfR_test")
    > vcf <- vcfR_test
    > 
    > 
    > # extract all the INFO and FORMAT fields into a list of tidy
    > # data frames: fix, gt, and meta. Here we don't coerce columns
    > # to integer or numeric types...
    > Z <- vcfR2tidy(vcf)
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'A' to DOUBLE
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > 
      > library("testthat")
      > #library("vcfR")
      > #
      > #
      > test_check("vcfR")
      Loading required package: vcfR
    ...
       12.       ├─base::NextMethod()
       13.       └─dplyr:::group_data.data.frame(data)
       14.         └─base::nrow(.data)
       15.           ├─base::dim(x)
       16.           └─base::dim.data.frame(x)
       17.             └─base::.row_names_info(x, 2L)
      
      [ FAIL 3 | WARN 0 | SKIP 0 | PASS 487 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 15.3Mb
      sub-directories of 1Mb or more:
        libs  12.8Mb
    ```

# vDiveR

<details>

* Version: 1.2.0
* GitHub: NA
* Source code: https://github.com/cran/vDiveR
* Date/Publication: 2023-09-12 05:10:02 UTC
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

# vivaldi

<details>

* Version: 1.0.1
* GitHub: https://github.com/GreshamLab/vivaldi
* Source code: https://github.com/cran/vivaldi
* Date/Publication: 2023-03-21 20:10:02 UTC
* Number of recursive dependencies: 107

Run `revdepcheck::cloud_details(, "vivaldi")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘vignette.Rmd’ using rmarkdown
    
    Quitting from lines 76-83 [unnamed-chunk-5] (vignette.Rmd)
    Error: processing vignette 'vignette.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Conversion Error: Could not convert string 'A' to DOUBLE
    --- failed re-building ‘vignette.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘vignette.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.8Mb
      sub-directories of 1Mb or more:
        doc       5.4Mb
        extdata   1.1Mb
    ```

# VWPre

<details>

* Version: 1.2.4
* GitHub: NA
* Source code: https://github.com/cran/VWPre
* Date/Publication: 2020-11-29 17:10:02 UTC
* Number of recursive dependencies: 70

Run `revdepcheck::cloud_details(, "VWPre")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘VWPre_Basic_Preprocessing.Rmd’ using rmarkdown
    
    Quitting from lines 78-79 [unnamed-chunk-4] (VWPre_Basic_Preprocessing.Rmd)
    Error: processing vignette 'VWPre_Basic_Preprocessing.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Conversion Error: Could not convert string 'factor' to DOUBLE
    --- failed re-building ‘VWPre_Basic_Preprocessing.Rmd’
    
    --- re-building ‘VWPre_Interest_Areas.Rmd’ using rmarkdown
    ...
    --- finished re-building ‘VWPre_Message_Alignment.Rmd’
    
    --- re-building ‘VWPre_Plotting.Rmd’ using rmarkdown
    --- finished re-building ‘VWPre_Plotting.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘VWPre_Basic_Preprocessing.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

