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

# CodelistGenerator

<details>

* Version: 2.2.1
* GitHub: NA
* Source code: https://github.com/cran/CodelistGenerator
* Date/Publication: 2024-02-07 11:50:10 UTC
* Number of recursive dependencies: 135

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
      
      [ FAIL 2 | WARN 0 | SKIP 8 | PASS 275 ]
      Error: Test failures
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
      
      00:00:36.384345
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
      1/1 mismatches
      [1] 4 - 3 == 1
      ── Failure ('test_max_gap.R:213:3'): after_join works with mode = left, type = any-any, max_gap = numeric, and gap_col is TRUE ──
      sum(res$.gap, na.rm = TRUE) not equal to 604800.
      1/1 mismatches
      [1] 432000 - 604800 == -172800
      
      [ FAIL 7 | WARN 0 | SKIP 1 | PASS 509 ]
      Error: Test failures
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
       15.       ├─base::NextMethod()
       16.       └─dplyr:::group_data.data.frame(data)
       17.         └─base::nrow(.data)
       18.           ├─base::dim(x)
       19.           └─base::dim.data.frame(x)
       20.             └─base::.row_names_info(x, 2L)
      
      [ FAIL 12 | WARN 0 | SKIP 0 | PASS 19 ]
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

