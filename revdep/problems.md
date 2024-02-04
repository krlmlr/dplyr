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
      
      00:00:35.592336
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
    ==================================================
    downloaded 41.2 MB
    
    --- finished re-building ‘Rural_roads.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘Crash_sequences.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 806 marked UTF-8 strings
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

