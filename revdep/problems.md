# admiral

<details>

* Version: 1.1.1
* GitHub: https://github.com/pharmaverse/admiral
* Source code: https://github.com/cran/admiral
* Date/Publication: 2024-06-17 13:10:08 UTC
* Number of recursive dependencies: 78

Run `revdepcheck::cloud_details(, "admiral")` for more info

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
        'test-user_utils.R:249:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-derive_merged.R:692:3'): derive_var_merged_summary Test 28: error when relatioship is
                incorrectly specificed 'one-to-one' ──
      `derive_vars_merged(...)` did not throw the expected error.
      
      [ FAIL 1 | WARN 0 | SKIP 88 | PASS 661 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘concepts_conventions.Rmd’
      ...
    > adcm
      STUDYID USUBJID   CMTRT
    1     XXX   XXX-1 ASPIRIN
    
    > adcm %>% select(get_admiral_option("subject_keys"))
    
      When sourcing ‘concepts_conventions.R’:
    ...
      ‘generic.Rmd’ using ‘UTF-8’... OK
      ‘higher_order.Rmd’ using ‘UTF-8’... OK
      ‘hys_law.Rmd’ using ‘UTF-8’... OK
      ‘imputation.Rmd’ using ‘UTF-8’... OK
      ‘lab_grading.Rmd’ using ‘UTF-8’... OK
      ‘occds.Rmd’ using ‘UTF-8’... OK
      ‘pk_adnca.Rmd’ using ‘UTF-8’... OK
      ‘queries_dataset.Rmd’ using ‘UTF-8’... OK
      ‘questionnaires.Rmd’ using ‘UTF-8’... OK
      ‘visits_periods.Rmd’ using ‘UTF-8’... OK
    ```

*   checking installed package size ... NOTE
    ```
      installed size is  5.3Mb
      sub-directories of 1Mb or more:
        doc    2.2Mb
        help   1.8Mb
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 12 marked UTF-8 strings
    ```

# APCI

<details>

* Version: 1.0.8
* GitHub: NA
* Source code: https://github.com/cran/APCI
* Date/Publication: 2024-09-02 20:20:06 UTC
* Number of recursive dependencies: 74

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
       -0.403833260   0.075671713   0.119488419  -0.340378313   0.247570465 
          acc8:pcc3     acc9:pcc3     acc1:pcc4     acc2:pcc4     acc3:pcc4 
       -0.145445794   0.169966132  -0.377207139   0.025314434   0.253084210 
          acc4:pcc4     acc5:pcc4     acc6:pcc4     acc7:pcc4     acc8:pcc4 
        0.257323983   0.263943730  -0.201903764  -0.034089074  -0.324948943 
          acc9:pcc4     acc1:pcc5     acc2:pcc5     acc3:pcc5     acc4:pcc5 
        0.138253250   0.028510683   0.286589579  -0.117611743  -0.139235959 
          acc5:pcc5     acc6:pcc5     acc7:pcc5     acc8:pcc5     acc9:pcc5 
       -0.520319848  -0.284198513   0.300133192   0.679876877  -0.320205963 
      Killed
    ```

# arrow

<details>

* Version: 17.0.0.1
* GitHub: https://github.com/apache/arrow
* Source code: https://github.com/cran/arrow
* Date/Publication: 2024-08-21 12:20:06 UTC
* Number of recursive dependencies: 78

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
       1. └─arrow:::compare_dplyr_binding(...) at test-dplyr-summarize.R:572:3
       2.   └─arrow:::expect_equal(via_table, expected, ...) at tests/testthat/helper-expectation.R:102:3
       3.     └─testthat::expect_equal(...) at tests/testthat/helper-expectation.R:43:5
      
      [ FAIL 1 | WARN 0 | SKIP 84 | PASS 6667 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 126.7Mb
      sub-directories of 1Mb or more:
        R       7.5Mb
        libs  118.6Mb
    ```

*   checking Rd cross-references ... NOTE
    ```
    Package unavailable to check Rd xrefs: ‘readr’
    ```

# canvasXpress.data

<details>

* Version: 1.34.2
* GitHub: https://github.com/neuhausi/canvasXpress.data
* Source code: https://github.com/cran/canvasXpress.data
* Date/Publication: 2021-06-29 17:20:02 UTC
* Number of recursive dependencies: 43

Run `revdepcheck::cloud_details(, "canvasXpress.data")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is  8.7Mb
      sub-directories of 1Mb or more:
        data   8.5Mb
    ```

# duckplyr

<details>

* Version: 0.4.1
* GitHub: https://github.com/duckdblabs/duckplyr
* Source code: https://github.com/cran/duckplyr
* Date/Publication: 2024-07-12 10:50:02 UTC
* Number of recursive dependencies: 95

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
      [ FAIL 4 | WARN 0 | SKIP 355 | PASS 1405 ]
      Error: Test failures
      
      🛠: 1532
      🔨:  853
      🦆:  679
      add_count, anti_join, arrange, compute, count, cross_join, distinct, do, eval, filter, full_join, group_by, group_keys, group_map, group_modify, group_split, head, inner_join, intersect, left_join, mutate, mutate.data.frame, nest_join, pull, reframe, relocate, rename, rename_with, right_join, rows_append, rows_delete, rows_insert, rows_patch, rows_update, rows_upsert, rowwise, select, semi_join, setdiff, setequal, slice, slice_head, slice_sample, slice_tail, summarise, symdiff, transmute, ungroup, union_all
      
      00:01:00.803474
      Execution halted
    ```

# GauPro

<details>

* Version: 0.2.13
* GitHub: https://github.com/CollinErickson/GauPro
* Source code: https://github.com/cran/GauPro
* Date/Publication: 2024-09-26 21:30:10 UTC
* Number of recursive dependencies: 82

Run `revdepcheck::cloud_details(, "GauPro")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(GauPro)
      Loading required package: mixopt
      Loading required package: dplyr
      
      Attaching package: 'dplyr'
      
    ...
      `expected`: TRUE 
      ── Failure ('test_kernel_model_and_kernels.R:646:5'): Cts kernels 2D ───────────
      Product numgrad matches symbolic grad (failed on all 10 attempts) is not TRUE
      
      `actual` is a character vector ('Mean absolute difference: 6873811')
      `expected` is a logical vector (TRUE)
      
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 3126 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 13.8Mb
      sub-directories of 1Mb or more:
        R      1.5Mb
        libs  11.5Mb
    ```

# healthdb

<details>

* Version: 0.3.1
* GitHub: https://github.com/KevinHzq/healthdb
* Source code: https://github.com/cran/healthdb
* Date/Publication: 2024-05-23 02:10:02 UTC
* Number of recursive dependencies: 68

Run `revdepcheck::cloud_details(, "healthdb")` for more info

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
       2. └─testthat::expect_warning(.)
       3.   └─testthat:::expect_condition_matching(...)
       4.     └─testthat::expect(...)
       5.       └─rlang::trace_back(top = getOption("testthat_topenv"), bottom = trace_env)
       6.         └─rlang:::trace_find_bottom(bottom, frames)
       7.           └─rlang::abort(msg, call = call)
      
      [ FAIL 1 | WARN 2 | SKIP 6 | PASS 220 ]
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
    Error: {"exception_type":"INTERNAL","exception_message":"Attempted to access index 0 within vector of size 0"}
    Execution halted
    ```

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘eplet-mm.Rmd’
      ...
    > library(dplyr)
    
    > dat_mhc1 <- read.csv(system.file("extdata/example", 
    +     "MHC_I_test.csv", package = "hlaR"), sep = ",", header = TRUE)
    
    > re_mhc1 <- CalEpletMHCI(dat_mhc1)
    
      When sourcing ‘eplet-mm.R’:
    Error: {"exception_type":"INTERNAL","exception_message":"Attempted to access index 0 within vector of size 0"}
    Execution halted
    
      ‘allele-haplotype.Rmd’ using ‘UTF-8’... OK
      ‘eplet-mm.Rmd’ using ‘UTF-8’... failed
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘allele-haplotype.Rmd’ using rmarkdown
    --- finished re-building ‘allele-haplotype.Rmd’
    
    --- re-building ‘eplet-mm.Rmd’ using rmarkdown
    
    Quitting from lines 48-53 [unnamed-chunk-3] (eplet-mm.Rmd)
    Error: processing vignette 'eplet-mm.Rmd' failed with diagnostics:
    {"exception_type":"INTERNAL","exception_message":"Attempted to access index 0 within vector of size 0"}
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
* Number of recursive dependencies: 120

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

# manynet

<details>

* Version: 1.2.6
* GitHub: https://github.com/stocnet/manynet
* Source code: https://github.com/cran/manynet
* Date/Publication: 2024-10-05 16:40:01 UTC
* Number of recursive dependencies: 146

Run `revdepcheck::cloud_details(, "manynet")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is  5.2Mb
      sub-directories of 1Mb or more:
        R           1.5Mb
        tutorials   1.8Mb
    ```

## In both

*   checking package dependencies ... NOTE
    ```
    Package which this enhances but not available for checking: ‘Rgraphviz’
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 7 marked UTF-8 strings
    ```

# msigdbr

<details>

* Version: 7.5.1
* GitHub: https://github.com/igordot/msigdbr
* Source code: https://github.com/cran/msigdbr
* Date/Publication: 2022-03-30 07:00:16 UTC
* Number of recursive dependencies: 52

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

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘msigdbr-intro.Rmd’
      ...
    > options(tibble.print_max = 25)
    
    > library(msigdbr)
    
    > all_gene_sets = msigdbr(species = "Mus musculus")
    
    > head(all_gene_sets)
    Killed
    
    ... incomplete output.  Crash?
    
      ‘msigdbr-intro.Rmd’ using ‘UTF-8’... failed to complete the test
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘msigdbr-intro.Rmd’ using rmarkdown
    Killed
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 13.2Mb
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

* Version: 0.2.1
* GitHub: https://github.com/USCbiostats/partition
* Source code: https://github.com/cran/partition
* Date/Publication: 2024-05-22 15:40:01 UTC
* Number of recursive dependencies: 95

Run `revdepcheck::cloud_details(, "partition")` for more info

</details>

## Newly broken

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘introduction-to-partition.Rmd’
      ...
    
    > part_icc()
       Director: Minimum Distance (Pearson) 
       Metric: Intraclass Correlation 
       Reducer: Scaled Mean
    > prt_pc1 <- partition(baxter_otu, threshold = 0.5, 
    +     partitioner = part_pc1())
    Killed
    
    ... incomplete output.  Crash?
    
      ‘extending-partition.Rmd’ using ‘UTF-8’... OK
      ‘introduction-to-partition.Rmd’ using ‘UTF-8’... failed to complete the test
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘extending-partition.Rmd’ using rmarkdown
    --- finished re-building ‘extending-partition.Rmd’
    
    --- re-building ‘introduction-to-partition.Rmd’ using rmarkdown
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  8.9Mb
      sub-directories of 1Mb or more:
        libs   6.9Mb
    ```

# PatientProfiles

<details>

* Version: 1.2.0
* GitHub: https://github.com/darwin-eu-dev/PatientProfiles
* Source code: https://github.com/cran/PatientProfiles
* Date/Publication: 2024-09-11 22:52:59 UTC
* Number of recursive dependencies: 126

Run `revdepcheck::cloud_details(, "PatientProfiles")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/tests.html
    ...
      `expected`: TRUE 
      ── Failure ('test-addDemographics.R:670:3'): multiple cohortIds, check age at cohort end ──
      all(c(15, 13, NA) %in% result$age) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      
      [ FAIL 2 | WARN 9 | SKIP 106 | PASS 149 ]
      Error: Test failures
      Execution halted
    ```

# peacesciencer

<details>

* Version: 1.1.0
* GitHub: https://github.com/svmiller/peacesciencer
* Source code: https://github.com/cran/peacesciencer
* Date/Publication: 2023-03-24 14:20:02 UTC
* Number of recursive dependencies: 101

Run `revdepcheck::cloud_details(, "peacesciencer")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is  6.7Mb
      sub-directories of 1Mb or more:
        data   6.0Mb
    ```

# rfars

<details>

* Version: 1.2.0
* GitHub: https://github.com/s87jackson/rfars
* Source code: https://github.com/cran/rfars
* Date/Publication: 2024-04-06 04:40:02 UTC
* Number of recursive dependencies: 137

Run `revdepcheck::cloud_details(, "rfars")` for more info

</details>

## Newly broken

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘Counts.Rmd’
      ...
    Content type 'application/x-zip-compressed' length 49942611 bytes (47.6 MB)
    ==================================================
    downloaded 47.6 MB
    
    ✓ 2021 data downloaded
    Preparing raw data files...
    ✓ Accident file processed
    ...
    ✓ 2021 data downloaded
    Preparing raw data files...
    ✓ Accident file processed
    Killed
    
    ... incomplete output.  Crash?
    
      ‘Counts.Rmd’ using ‘UTF-8’... failed to complete the test
      ‘Crash_sequence_of_events.Rmd’ using ‘UTF-8’... failed to complete the test
      ‘Searchable_Codebooks.Rmd’ using ‘UTF-8’... OK
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘Counts.Rmd’ using rmarkdown
    trying URL 'https://static.nhtsa.gov/nhtsa/downloads/FARS/2021/National/FARS2021NationalSAS.zip'
    Content type 'application/x-zip-compressed' length 49942611 bytes (47.6 MB)
    ==================================================
    downloaded 47.6 MB
    
    Killed
    --- re-building ‘Crash_sequence_of_events.Rmd’ using rmarkdown
    ...
    
    Killed
    --- re-building ‘Searchable_Codebooks.Rmd’ using rmarkdown
    --- finished re-building ‘Searchable_Codebooks.Rmd’
    
    SUMMARY: processing the following files failed:
      ‘Counts.Rmd’ ‘Crash_sequence_of_events.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.1Mb
      sub-directories of 1Mb or more:
        data   2.0Mb
        help   1.9Mb
    ```

# RivRetrieve

<details>

* Version: 0.1.5
* GitHub: https://github.com/Ryan-Riggs/RivRetrieve
* Source code: https://github.com/cran/RivRetrieve
* Date/Publication: 2024-04-22 22:40:24 UTC
* Number of recursive dependencies: 131

Run `revdepcheck::cloud_details(, "RivRetrieve")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘my-vignette.Rmd’ using rmarkdown
    
    Quitting from lines 22-31 [setup] (my-vignette.Rmd)
    Error: processing vignette 'my-vignette.Rmd' failed with diagnostics:
    cannot open the connection to 'https://hubeau.eaufrance.fr/api/v1/hydrometrie/obs_elab?code_entite=K027401001&date_debut_obs_elab=1900-01-01&date_fin_obs_elab=2024-10-06&grandeur_hydro_elab=QmJ&size=20000'
    --- failed re-building ‘my-vignette.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘my-vignette.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘my-vignette.Rmd’
      ...
    
    > siteNumber = "K027401001"
    
    > discharge = france(site = siteNumber, variable = "discharge")
    Warning in open.connection(con, "rb") :
      URL 'https://hubeau.eaufrance.fr/api/v1/hydrometrie/obs_elab?code_entite=K027401001&date_debut_obs_elab=1900-01-01&date_fin_obs_elab=2024-10-06&grandeur_hydro_elab=QmJ&size=20000': status was 'SSL connect error'
    
      When sourcing ‘my-vignette.R’:
    Error: cannot open the connection to 'https://hubeau.eaufrance.fr/api/v1/hydrometrie/obs_elab?code_entite=K027401001&date_debut_obs_elab=1900-01-01&date_fin_obs_elab=2024-10-06&grandeur_hydro_elab=QmJ&size=20000'
    Execution halted
    
      ‘my-vignette.Rmd’ using ‘UTF-8’... failed
    ```

# rWCVP

<details>

* Version: 1.2.4
* GitHub: https://github.com/matildabrown/rWCVP
* Source code: https://github.com/cran/rWCVP
* Date/Publication: 2023-02-16 15:20:02 UTC
* Number of recursive dependencies: 130

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
      installed size is  9.2Mb
      sub-directories of 1Mb or more:
        data      6.5Mb
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
* Number of recursive dependencies: 92

Run `revdepcheck::cloud_details(, "rwicc")` for more info

</details>

## Newly broken

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘how-to-use-rwicc.Rmd’
      ...
    ---------------------
    
    
    > EM_algorithm_outputs = fit_joint_model(obs_level_data = sim_obs_data, 
    +     participant_level_data = sim_participant_data, bin_width = 7, 
    +     ve .... [TRUNCATED] 
    
      When sourcing ‘how-to-use-rwicc.R’:
    Error: {"exception_type":"INTERNAL","exception_message":"Attempted to access index 1 within vector of size 0"}
    Execution halted
    
      ‘how-to-use-rwicc.Rmd’ using ‘UTF-8’... failed
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘how-to-use-rwicc.Rmd’ using rmarkdown
    
    Quitting from lines 74-80 [unnamed-chunk-5] (how-to-use-rwicc.Rmd)
    Error: processing vignette 'how-to-use-rwicc.Rmd' failed with diagnostics:
    {"exception_type":"INTERNAL","exception_message":"Attempted to access index 1 within vector of size 0"}
    --- failed re-building ‘how-to-use-rwicc.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘how-to-use-rwicc.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

