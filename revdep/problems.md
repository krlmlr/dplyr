# APCI

<details>

* Version: 1.0.7
* GitHub: NA
* Source code: https://github.com/cran/APCI
* Date/Publication: 2024-01-30 06:40:03 UTC
* Number of recursive dependencies: 87

Run `revdepcheck::cloud_details(, "APCI")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘1_tests.R’
    Running the tests in ‘tests/1_tests.R’ failed.
    Complete output:
      > # install the package and use this script to test the package
      > library("APCI")
      > # or: remotes::install_github("jiahui1902/APCI")
      > test_data <- APCI::women9017
      > test_data$acc <- as.factor(test_data$acc)
      > test_data$pcc <- as.factor(test_data$pcc)
      > test_data$educc <- as.factor(test_data$educc)
    ...
      -3.690595e-01  1.016757e-01  1.563848e-01 -3.009393e-01  1.860861e-01 
          acc8:pcc3     acc9:pcc3     acc1:pcc4     acc2:pcc4     acc3:pcc4 
      -8.911804e-02  1.571405e-01 -4.086929e-01 -3.175904e-02  3.204613e-01 
          acc4:pcc4     acc5:pcc4     acc6:pcc4     acc7:pcc4     acc8:pcc4 
       2.365358e-01  2.981728e-01 -1.384686e-01 -1.324798e-02 -3.651563e-01 
          acc9:pcc4     acc1:pcc5     acc2:pcc5     acc3:pcc5     acc4:pcc5 
       4.980530e-02  4.837277e-02  3.308567e-01 -1.119875e-01 -5.056205e-02 
          acc5:pcc5     acc6:pcc5     acc7:pcc5     acc8:pcc5     acc9:pcc5 
      -5.204896e-01 -3.284161e-01  2.399165e-01  6.197606e-01 -3.238010e-01 
      Killed
    ```

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

# auk

<details>

* Version: 0.7.0
* GitHub: https://github.com/CornellLabofOrnithology/auk
* Source code: https://github.com/cran/auk
* Date/Publication: 2023-11-14 09:43:22 UTC
* Number of recursive dependencies: 99

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

# autoCovariateSelection

<details>

* Version: 1.0.0
* GitHub: https://github.com/technOslerphile/autoCovariateSelection
* Source code: https://github.com/cran/autoCovariateSelection
* Date/Publication: 2020-12-14 09:50:11 UTC
* Number of recursive dependencies: 36

Run `revdepcheck::cloud_details(, "autoCovariateSelection")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘autoCovariateSelection-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: get_prioritised_covariates
    > ### Title: Generate the prioritised covariates from the global list of
    > ###   binary recurrence covariates using multiplicative bias ranking
    > ### Aliases: get_prioritised_covariates
    > 
    > ### ** Examples
    > 
    ...
    Joining with `by = join_by(eventCodeVarname, domainVarname)`
    Joining with `by = join_by(eventCodeVarname, domainVarname)`
    > out1 <- step1$covars_data
    > all.equal(patientIds, step1$patientIds) #should be TRUE
    [1] TRUE
    > step2 <- get_recurrence_covariates(df = out1,
    + patientIdVarname = "person_id", eventCodeVarname = "event_code",
    + patientIdVector = patientIds)
    Error: Error evaluating duckdb query: Parser Error: Maximum tree depth of 1000 exceeded in logical planner
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library("testthat")
      > library("autoCovariateSelection")
      Loading required package: dplyr
      
      Attaching package: 'dplyr'
      
      The following object is masked from 'package:testthat':
    ...
          ▆
       1. └─autoCovariateSelection::get_recurrence_covariates(...) at test-run.R:19:3
       2.   └─base::nrow(recurrences)
       3.     ├─base::dim(x)
       4.     └─base::dim.data.frame(x)
       5.       └─base::.row_names_info(x, 2L)
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 3 ]
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

# cogmapr

<details>

* Version: 0.9.3
* GitHub: NA
* Source code: https://github.com/cran/cogmapr
* Date/Publication: 2022-01-04 15:40:07 UTC
* Number of recursive dependencies: 76

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

# comperes

<details>

* Version: 0.2.7
* GitHub: https://github.com/echasnovski/comperes
* Source code: https://github.com/cran/comperes
* Date/Publication: 2023-02-28 19:42:30 UTC
* Number of recursive dependencies: 65

Run `revdepcheck::cloud_details(, "comperes")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(comperes)
      > 
      > test_check("comperes")
      [ FAIL 10 | WARN 0 | SKIP 5 | PASS 247 ]
      
      ══ Skipped tests (5) ═══════════════════════════════════════════════════════════
    ...
                if repair is TRUE ──
      as_longcr(input_dupl, repair = TRUE) not identical to `output_ref_dupl`.
      Length mismatch: comparison on first 3 components
      ── Failure ('test-results-longcr.R:360:3'): as_longcr.widecr works without column 'game' ──
      as_longcr(input_widecr_nogame) not identical to `output_ref_longcr_from_widecr_nogame`.
      Length mismatch: comparison on first 3 components
      
      [ FAIL 10 | WARN 0 | SKIP 5 | PASS 247 ]
      Error: Test failures
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

*   checking examples ... ERROR
    ```
    Running examples in ‘crosshap-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: build_bot_halfeyeplot
    > ### Title: Bot hap-pheno raincloud plot
    > ### Aliases: build_bot_halfeyeplot
    > 
    > ### ** Examples
    > 
    > 
    > build_bot_halfeyeplot(HapObject, epsilon = 0.6, hide_labels = FALSE)
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'D' to DOUBLE
    Execution halted
    ```

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
       9.     └─rlang::abort(...)
      
      [ FAIL 5 | WARN 0 | SKIP 2 | PASS 4 ]
      Deleting unused snapshots:
      • hapviz/haplotype-viz-alt2.svg
      • hapviz/haplotype-viz-isolatewt.svg
      • hapviz/haplotype-viz-nolabs.svg
      • hapviz/haplotype-viz2.svg
      Error: Test failures
      Execution halted
    ```

# dbGaPCheckup

<details>

* Version: 1.1.0
* GitHub: https://github.com/lwheinsberg/dbGaPCheckup
* Source code: https://github.com/cran/dbGaPCheckup
* Date/Publication: 2023-09-27 15:30:02 UTC
* Number of recursive dependencies: 117

Run `revdepcheck::cloud_details(, "dbGaPCheckup")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘dbGaPCheckup-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: missing_value_check
    > ### Title: Missing Value Check
    > ### Aliases: missing_value_check
    > 
    > ### ** Examples
    > 
    > data(ExampleB)
    ...
    
    $Information
        VARNAME VALUE MEANING  PASS
    13 CUFFSIZE -9999    <NA> FALSE
    
    > 
    > data(ExampleS)
    > missing_value_check(DD.dict.S, DS.data.S, non.NA.missing.codes = c(-9999,-4444))
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'NA' to DOUBLE
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

## Newly fixed

*   checking re-building of vignette outputs ... WARNING
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘a_usage_guide.Rmd’ using rmarkdown
    --- finished re-building ‘a_usage_guide.Rmd’
    
    --- re-building ‘b_test_choice_tree_pdf.Rmd’ using rmarkdown
    tlmgr: package repository https://mirror.math.princeton.edu/pub/CTAN/systems/texlive/tlnet (verified)
    [1/1, ??:??/??:??] install: grffile [4k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    ...
    --- finished re-building ‘d_validation_statement.Rmd’
    
    --- re-building ‘e_maintenance_guide.Rmd’ using rmarkdown
    --- finished re-building ‘e_maintenance_guide.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘b_test_choice_tree_pdf.Rmd’
    
    Error: Vignette re-building failed.
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
      
      🛠: 1182
      🔨:  547
      🦆:  635
      add_count, anti_join, arrange, compute, count, cross_join, distinct, do, eval, filter, full_join, inner_join, intersect, left_join, mutate, mutate.data.frame, nest_join, pull, reframe, relocate, rename, rename_with, right_join, rows_append, rows_delete, rows_insert, rows_patch, rows_update, rows_upsert, select, semi_join, setdiff, setequal, slice, slice_head, slice_sample, slice_tail, summarise, symdiff, transmute, ungroup, union_all
      
      00:00:50.753685
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

# eSDM

<details>

* Version: 0.4.0
* GitHub: https://github.com/smwoodman/eSDM
* Source code: https://github.com/cran/eSDM
* Date/Publication: 2023-10-24 17:00:02 UTC
* Number of recursive dependencies: 128

Run `revdepcheck::cloud_details(, "eSDM")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘example-analysis.Rmd’ using rmarkdown
    
    Quitting from lines 329-351 [unnamed-chunk-19] (example-analysis.Rmd)
    Error: processing vignette 'example-analysis.Rmd' failed with diagnostics:
    'predictions' contains NA.
    --- failed re-building ‘example-analysis.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘example-analysis.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.5Mb
      sub-directories of 1Mb or more:
        data      1.5Mb
        extdata   1.5Mb
        shiny     2.1Mb
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

* Version: 0.4.0
* GitHub: https://github.com/microsoft/finnts
* Source code: https://github.com/cran/finnts
* Date/Publication: 2023-12-01 09:40:02 UTC
* Number of recursive dependencies: 258

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
      
      [ FAIL 1 | WARN 7 | SKIP 0 | PASS 79 ]
      Error: Test failures
      Execution halted
    ```

# funneljoin

<details>

* Version: 0.2.0
* GitHub: NA
* Source code: https://github.com/cran/funneljoin
* Date/Publication: 2023-03-21 20:00:02 UTC
* Number of recursive dependencies: 60

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
      
      [ FAIL 17 | WARN 0 | SKIP 1 | PASS 408 ]
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

# heemod

<details>

* Version: 1.0.1
* GitHub: https://github.com/aphp/heemod
* Source code: https://github.com/cran/heemod
* Date/Publication: 2024-01-31 12:30:02 UTC
* Number of recursive dependencies: 142

Run `revdepcheck::cloud_details(, "heemod")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(heemod)
      > 
      > test_check("heemod")
      I: detected use of 'state_time', expanding states: A, B.
      I: detected use of 'state_time', expanding states: A, B.
      I: detected use of 'state_time', expanding states: A, B.
    ...
      `expected`: "Scenario 2" "Scenario 3"
      ── Failure ('test_run_model.R:234:5'): run_model behaves as expected ───────────
      s_mod$frontier (`actual`) not equal to c("I", "II") (`expected`).
      
      `actual`:   "II"     
      `expected`: "I"  "II"
      
      [ FAIL 10 | WARN 0 | SKIP 1 | PASS 504 ]
      Error: Test failures
      Execution halted
    ```

# hlaR

<details>

* Version: 1.0.0
* GitHub: https://github.com/LarsenLab/hlaR
* Source code: https://github.com/cran/hlaR
* Date/Publication: 2023-01-31 17:10:02 UTC
* Number of recursive dependencies: 152

Run `revdepcheck::cloud_details(, "hlaR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘hlaR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: CalEpletMHCI
    > ### Title: Calculate class I HLA eplet mismatch
    > ### Aliases: CalEpletMHCI
    > 
    > ### ** Examples
    > 
    > dat<-read.csv(system.file("extdata/example","MHC_I_test.csv",package="hlaR"),sep=",",header=TRUE)
    > re <- CalEpletMHCI(dat_in = dat, ver = 3)
    Error: Error evaluating duckdb query: Parser Error: Maximum tree depth of 1000 exceeded in logical planner
    Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘allele-haplotype.Rmd’ using rmarkdown
    --- finished re-building ‘allele-haplotype.Rmd’
    
    --- re-building ‘eplet-mm.Rmd’ using rmarkdown
    
    Quitting from lines 48-53 [unnamed-chunk-3] (eplet-mm.Rmd)
    Error: processing vignette 'eplet-mm.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Parser Error: Maximum tree depth of 1000 exceeded in logical planner
    --- failed re-building ‘eplet-mm.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘eplet-mm.Rmd’
    
    Error: Vignette re-building failed.
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

# MassWateR

<details>

* Version: 2.1.4
* GitHub: https://github.com/massbays-tech/MassWateR
* Source code: https://github.com/cran/MassWateR
* Date/Publication: 2023-11-19 15:20:07 UTC
* Number of recursive dependencies: 138

Run `revdepcheck::cloud_details(, "MassWateR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘MassWateR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: anlzMWRdate
    > ### Title: Analyze trends by date in results file
    > ### Aliases: anlzMWRdate
    > 
    > ### ** Examples
    > 
    > # results data path
    ...
    	Checking for positive values in longitude... OK
    	Checking for missing entries for Monitoring Location ID... OK
    
    All checks passed!
    > 
    > # select sites
    > anlzMWRdate(res = resdat, param = 'DO', acc = accdat, group = 'site', thresh = 'fresh',
    +      site = c("ABT-026", "ABT-077"))
    Error: Sites not found in Monitoring Location ID in results file for DO: ABT-026, ABT-077, should be any of ABT-144, ABT-237, ABT-301, ABT-312
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(MassWateR)
      > 
      > test_check("MassWateR")
      
      Attaching package: 'lubridate'
      
    ...
      ── Error ('test-anlzMWRsite.R:23:3'): Checking output format jittered barplot, byresultatt ──
      Error: Ammonia not found or no surface data in results file, should be one of DO
      Backtrace:
          ▆
       1. └─MassWateR::anlzMWRsite(...) at test-anlzMWRsite.R:23:3
       2.   └─MassWateR::utilMWRfilter(...)
      
      [ FAIL 5 | WARN 17 | SKIP 5 | PASS 183 ]
      Error: Test failures
      Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(MassWateR)
      > 
      > test_check("MassWateR")
      
      Attaching package: 'lubridate'
      
    ...
      ── Error ('test-anlzMWRsite.R:23:3'): Checking output format jittered barplot, byresultatt ──
      Error: Ammonia not found or no surface data in results file, should be one of DO
      Backtrace:
          ▆
       1. └─MassWateR::anlzMWRsite(...) at test-anlzMWRsite.R:23:3
       2.   └─MassWateR::utilMWRfilter(...)
      
      [ FAIL 5 | WARN 17 | SKIP 5 | PASS 183 ]
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
       2. │ └─mpwR:::generate_ID_Report(...)
       3. │   ├─cbind(MQ_pg[, -1], ID_Report) %>% reorder_ID_Report(.)
       4. │   └─base::cbind(MQ_pg[, -1], ID_Report)
       5. │     └─base::cbind(deparse.level, ...)
       6. │       └─base::data.frame(..., check.names = FALSE)
       7. └─mpwR:::reorder_ID_Report(.)
      
      [ FAIL 12 | WARN 83 | SKIP 0 | PASS 574 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘Import.Rmd’ using rmarkdown
    --- finished re-building ‘Import.Rmd’
    
    --- re-building ‘Output_Explanations.Rmd’ using rmarkdown
    --- finished re-building ‘Output_Explanations.Rmd’
    
    --- re-building ‘Requirements.Rmd’ using rmarkdown
    --- finished re-building ‘Requirements.Rmd’
    ...
    Quitting from lines 56-57 [ID-Report] (Workflow.Rmd)
    Error: processing vignette 'Workflow.Rmd' failed with diagnostics:
    arguments imply differing number of rows: 0, 2
    --- failed re-building ‘Workflow.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘Workflow.Rmd’
    
    Error: Vignette re-building failed.
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

# myClim

<details>

* Version: 1.0.12
* GitHub: https://github.com/ibot-geoecology/myClim
* Source code: https://github.com/cran/myClim
* Date/Publication: 2023-11-16 22:00:02 UTC
* Number of recursive dependencies: 107

Run `revdepcheck::cloud_details(, "myClim")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘myClim-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: mc_calc_vwc
    > ### Title: Conversion of raw TMS soil moisture values to volumetric water
    > ###   content (VWC)
    > ### Aliases: mc_calc_vwc
    > 
    > ### ** Examples
    > 
    ...
     12. │               ├─purrr:::with_indexed_errors(...)
     13. │               │ └─base::withCallingHandlers(...)
     14. │               ├─purrr:::call_with_cleanup(...)
     15. │               └─myClim (local) .f(...)
     16. │                 └─myClim:::.calc_get_vwc_values(...)
     17. └─base::.handleSimpleError(...)
     18.   └─purrr (local) h(simpleError(msg, call))
     19.     └─cli::cli_abort(...)
     20.       └─rlang::abort(...)
    Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 4 marked UTF-8 strings
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

# portalr

<details>

* Version: 0.4.1
* GitHub: https://github.com/weecology/portalr
* Source code: https://github.com/cran/portalr
* Date/Publication: 2023-08-23 16:50:02 UTC
* Number of recursive dependencies: 108

Run `revdepcheck::cloud_details(, "portalr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(portalr)
      > 
      > test_check("portalr")
      [ FAIL 3 | WARN 2 | SKIP 42 | PASS 148 ]
      
      ══ Skipped tests (42) ══════════════════════════════════════════════════════════
    ...
      nrow(test.colony) not equal to 190512.
      1/1 mismatches
      [1] 155232 - 190512 == -35280
      ── Failure ('test-10-summarize_ants.R:16:3'): colony_presence_absence returns expected results ──
      unique(colonypresabs.site$species) not equal to unique(colonypresabs.stake$species).
      Lengths differ: 27 is not 22
      
      [ FAIL 3 | WARN 2 | SKIP 42 | PASS 148 ]
      Error: Test failures
      Execution halted
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
    --- re-building ‘Crash_sequences.Rmd’ using rmarkdown
    trying URL 'https://static.nhtsa.gov/nhtsa/downloads/CRSS/2021/CRSS2021SAS.zip'
    Content type 'application/x-zip-compressed' length 62354127 bytes (59.5 MB)
    ==================================================
    downloaded 59.5 MB
    
    
    Quitting from lines 43-46 [unnamed-chunk-2] (Crash_sequences.Rmd)
    Error: processing vignette 'Crash_sequences.Rmd' failed with diagnostics:
    ...
    Quitting from lines 38-39 [unnamed-chunk-2] (Rural_roads.Rmd)
    Error: processing vignette 'Rural_roads.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Parser Error: Maximum tree depth of 1000 exceeded in logical planner
    --- failed re-building ‘Rural_roads.Rmd’
    
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

# rWCVP

<details>

* Version: 1.2.4
* GitHub: https://github.com/matildabrown/rWCVP
* Source code: https://github.com/cran/rWCVP
* Date/Publication: 2023-02-16 15:20:02 UTC
* Number of recursive dependencies: 131

Run `revdepcheck::cloud_details(, "rWCVP")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(rWCVP)
      > 
      > test_check("rWCVP")
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
    ...
       2. │ └─rWCVP::wcvp_match_fuzzy(...)
       3. │   └─... %>% filter(!is.na(.data$wcvp_id))
       4. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       5. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       6.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       7.     └─base::toupper(word)
      
      [ FAIL 9 | WARN 0 | SKIP 0 | PASS 33 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  9.0Mb
      sub-directories of 1Mb or more:
        data      6.2Mb
        extdata   2.4Mb
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 16 marked UTF-8 strings
    ```

# rwicc

<details>

* Version: 0.1.3
* GitHub: https://github.com/d-morrison/rwicc
* Source code: https://github.com/cran/rwicc
* Date/Publication: 2022-03-09 21:40:06 UTC
* Number of recursive dependencies: 93

Run `revdepcheck::cloud_details(, "rwicc")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘how-to-use-rwicc.Rmd’ using rmarkdown
    
    Quitting from lines 74-80 [unnamed-chunk-5] (how-to-use-rwicc.Rmd)
    Error: processing vignette 'how-to-use-rwicc.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Parser Error: Maximum tree depth of 1000 exceeded in logical planner
    --- failed re-building ‘how-to-use-rwicc.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘how-to-use-rwicc.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# sapfluxnetr

<details>

* Version: 0.1.4
* GitHub: https://github.com/sapfluxnet/sapfluxnetr
* Source code: https://github.com/cran/sapfluxnetr
* Date/Publication: 2023-01-25 15:30:02 UTC
* Number of recursive dependencies: 83

Run `revdepcheck::cloud_details(, "sapfluxnetr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(sapfluxnetr)
      > 
      > test_check("sapfluxnetr")
      Starting 2 test processes
      [ FAIL 1 | WARN 0 | SKIP 19 | PASS 329 ]
      
    ...
        6.         └─sapfluxnetr (local) .local(.Object, ...)
        7.           ├─methods::callNextMethod(...)
        8.           │ └─base::eval(call, callEnv)
        9.           │   └─base::eval(call, callEnv)
       10.           └─methods (local) .nextMethod(...)
       11.             └─methods::validObject(.Object)
      
      [ FAIL 1 | WARN 0 | SKIP 19 | PASS 329 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 4 marked UTF-8 strings
    ```

# sfc

<details>

* Version: 0.1.0
* GitHub: https://github.com/ctfysh/sfc
* Source code: https://github.com/cran/sfc
* Date/Publication: 2016-08-25 10:01:01
* Number of recursive dependencies: 29

Run `revdepcheck::cloud_details(, "sfc")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘sfc-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: sfc
    > ### Title: Substance Flow Computation
    > ### Aliases: sfc
    > 
    > ### ** Examples
    > 
    > library(sfc)
    ...
    > ## model as csv
    > data <- system.file("extdata", "data_utf8.csv", package = "sfc")
    > model <- system.file("extdata", "model_utf8.csv", package = "sfc")
    > sfc(data, model, fileEncoding = "UTF-8")
    Joining with `by = join_by(NAME, TIME)`
    Joining with `by = join_by(NAME, TIME.1)`
    Joining with `by = join_by(NAME, TIME.1)`
    Error in if (dim(flow)[2] == 2) { : argument is of length zero
    Calls: sfc -> order -> flow_order -> adj_matrix
    Execution halted
    ```

## In both

*   checking LazyData ... NOTE
    ```
      'LazyData' is specified without a 'data' directory
    ```

# simaerep

<details>

* Version: 0.4.3
* GitHub: https://github.com/openpharma/simaerep
* Source code: https://github.com/cran/simaerep
* Date/Publication: 2023-03-03 10:30:02 UTC
* Number of recursive dependencies: 141

Run `revdepcheck::cloud_details(, "simaerep")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(simaerep)
      Loading required package: ggplot2
      > 
      > test_check("simaerep")
      [ FAIL 4 | WARN 2168 | SKIP 4 | PASS 79 ]
    ...
       7.   └─simaerep:::as.data.frame.orivisit(x$visit, env = env)
      
      [ FAIL 4 | WARN 2168 | SKIP 4 | PASS 79 ]
      Deleting unused snapshots:
      • validation/study-025.svg
      • validation/study-050.svg
      • validation/study-075.svg
      • validation/study-100.svg
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

# tidytransit

<details>

* Version: 1.6.1
* GitHub: https://github.com/r-transit/tidytransit
* Source code: https://github.com/cran/tidytransit
* Date/Publication: 2023-12-07 13:40:02 UTC
* Number of recursive dependencies: 101

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
      installed size is  7.1Mb
      sub-directories of 1Mb or more:
        doc       2.0Mb
        extdata   4.5Mb
    ```

# TKCat

<details>

* Version: 1.0.7
* GitHub: https://github.com/patzaw/TKCat
* Source code: https://github.com/cran/TKCat
* Date/Publication: 2023-02-16 14:50:03 UTC
* Number of recursive dependencies: 115

Run `revdepcheck::cloud_details(, "TKCat")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘TKCat-User-guide.Rmd’ using rmarkdown
    
    Quitting from lines 942-947 [unnamed-chunk-55] (TKCat-User-guide.Rmd)
    Error: processing vignette 'TKCat-User-guide.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Conversion Error: Could not convert string 'Condition' to BOOL
    --- failed re-building ‘TKCat-User-guide.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘TKCat-User-guide.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# vcfR

<details>

* Version: 1.15.0
* GitHub: https://github.com/knausb/vcfR
* Source code: https://github.com/cran/vcfR
* Date/Publication: 2023-12-08 00:30:03 UTC
* Number of recursive dependencies: 101

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
      installed size is 15.8Mb
      sub-directories of 1Mb or more:
        libs  13.4Mb
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

# vivaldi

<details>

* Version: 1.0.1
* GitHub: https://github.com/GreshamLab/vivaldi
* Source code: https://github.com/cran/vivaldi
* Date/Publication: 2023-03-21 20:10:02 UTC
* Number of recursive dependencies: 103

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

# yamlet

<details>

* Version: 0.10.33
* GitHub: https://github.com/bergsmat/yamlet
* Source code: https://github.com/cran/yamlet
* Date/Publication: 2023-10-06 04:40:02 UTC
* Number of recursive dependencies: 95

Run `revdepcheck::cloud_details(, "yamlet")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(yamlet)
      
      Attaching package: 'yamlet'
      
      The following object is masked from 'package:stats':
      
    ...
      ══ Skipped tests (2) ═══════════════════════════════════════════════════════════
      • empty test (2): 'test-yamlet.R:1340:1', 'test-yamlet.R:1345:1'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-dvec.R:485:3'): dvec int and double are coerced compatibly during merge ──
      `left_join(data.frame(ID = 1), data.frame(ID = "1", TIME = 0))` did not throw an error.
      
      [ FAIL 1 | WARN 1 | SKIP 2 | PASS 510 ]
      Error: Test failures
      Execution halted
    ```

