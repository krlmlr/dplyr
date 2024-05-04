# activatr

<details>

* Version: 0.2.0
* GitHub: https://github.com/dschafer/activatr
* Source code: https://github.com/cran/activatr
* Date/Publication: 2023-08-22 07:30:12 UTC
* Number of recursive dependencies: 107

Run `revdepcheck::cloud_details(, "activatr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(activatr)
      > 
      > test_check("activatr")
      [ FAIL 3 | WARN 0 | SKIP 0 | PASS 101 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test_act_tbl.R:52:3'): summary allows use of full to fill in missing columns ──
      s2$AvgElev not equal to NA.
      Types not compatible: integer is not logical
      ── Failure ('test_act_tbl.R:53:3'): summary allows use of full to fill in missing columns ──
      s2$ElevGain not equal to NA.
      Types not compatible: integer is not logical
      ── Failure ('test_act_tbl.R:54:3'): summary allows use of full to fill in missing columns ──
      s2$ElevLoss not equal to NA.
      Types not compatible: integer is not logical
      
      [ FAIL 3 | WARN 0 | SKIP 0 | PASS 101 ]
      Error: Test failures
      Execution halted
    ```

# admiral

<details>

* Version: 1.0.2
* GitHub: https://github.com/pharmaverse/admiral
* Source code: https://github.com/cran/admiral
* Date/Publication: 2024-03-05 17:10:03 UTC
* Number of recursive dependencies: 77

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
      > 
      > library(testthat) # nolint: undesirable_function_linter
      > library(admiral) # nolint: undesirable_function_linter
      > 
      > test_check("admiral")
      [ FAIL 1 | WARN 0 | SKIP 4 | PASS 714 ]
      
      ══ Skipped tests (4) ═══════════════════════════════════════════════════════════
      • On CRAN (4): 'test-derive_var_ontrtfl.R:419:3', 'test-duplicates.R:43:3',
        'test-roxygen2.R:20:3', 'test-user_utils.R:229:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-derive_var_atoxgr.R:4869:1'): (code run outside of `test_that()`) ──
      <vctrs_error_ptype2/vctrs_error_incompatible_type/vctrs_error_incompatible/vctrs_error/rlang_error/error/condition>
      Error in `bind_rows(., expected_phosd_daids_le14y, expected_phosd_daids_lt1y, 
          expected_phosd_daids_noage)`: Can't combine `..1$ATOXGRL` <character> and `..4$ATOXGRL` <integer>.
      Backtrace:
           ▆
        1. ├─expected_phosd_daids_gt14y %>% ... at test-derive_var_atoxgr.R:4869:1
        2. ├─dplyr::bind_rows(., expected_phosd_daids_le14y, expected_phosd_daids_lt1y, expected_phosd_daids_noage)
        3. │ └─vctrs::vec_rbind(!!!dots, .names_to = .id, .error_call = current_env())
        4. └─vctrs (local) `<fn>`()
        5.   └─vctrs::vec_default_ptype2(...)
        6.     ├─base::withRestarts(...)
        7.     │ └─base (local) withOneRestart(expr, restarts[[1L]])
        8.     │   └─base (local) doWithOneRestart(return(expr), restart)
        9.     └─vctrs::stop_incompatible_type(...)
       10.       └─vctrs:::stop_incompatible(...)
       11.         └─vctrs:::stop_vctrs(...)
       12.           └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call)
      
      [ FAIL 1 | WARN 0 | SKIP 4 | PASS 714 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 12 marked UTF-8 strings
    ```

# arrow

<details>

* Version: 15.0.1
* GitHub: https://github.com/apache/arrow
* Source code: https://github.com/cran/arrow
* Date/Publication: 2024-03-12 12:30:10 UTC
* Number of recursive dependencies: 77

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
      > #
      > #   http://www.apache.org/licenses/LICENSE-2.0
      > #
      > # Unless required by applicable law or agreed to in writing,
      > # software distributed under the License is distributed on an
      > # "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
      > # KIND, either express or implied.  See the License for the
      > # specific language governing permissions and limitations
      > # under the License.
      > 
      > library(testthat)
      > library(arrow)
      
      Attaching package: 'arrow'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      The following object is masked from 'package:utils':
      
          timestamp
      
      > library(tibble)
      > 
      > verbose_test_output <- identical(tolower(Sys.getenv("ARROW_R_DEV", "false")), "true") ||
      +   identical(tolower(Sys.getenv("ARROW_R_VERBOSE_TEST", "false")), "true")
      > 
      > if (verbose_test_output) {
      +   arrow_reporter <- MultiReporter$new(list(CheckReporter$new(), LocationReporter$new()))
      + } else {
      +   arrow_reporter <- check_reporter()
      + }
      > test_check("arrow", reporter = arrow_reporter)
      [ FAIL 1 | WARN 0 | SKIP 79 | PASS 6606 ]
      
      ══ Skipped tests (79) ══════════════════════════════════════════════════════════
      • ARROW-14045 (1): 'test-dplyr-distinct.R:118:3'
      • ARROW-17043 (date/datetime arithmetic with integers) (1):
        'test-compute-arith.R:132:3'
      • ARROW-18101 (1): 'test-udf.R:302:3'
      • Arrow C++ not built with substrait (1): 'test-query-engine.R:96:3'
      • Flight server is not running (1): 'test-python-flight.R:84:5'
      • GH-33708: timestamp_parsers don't appear to be working properly (1):
        'test-dataset-csv.R:585:3'
      • Implement more aggressive implicit casting for scalars (ARROW-11402) (1):
        'test-dataset-dplyr.R:96:3'
      • Ingest_POSIXct only implemented for REALSXP (1): 'test-Array.R:297:5'
      • Need halffloat support: https://issues.apache.org/jira/browse/ARROW-3802 (1):
        'test-Array.R:420:3'
      • On CRAN (59): 'test-Array.R:209:3', 'test-Array.R:216:3',
        'test-Array.R:1118:3', 'test-Array.R:1183:3', 'test-Array.R:1221:3',
        'test-Array.R:1253:3', 'test-Array.R:1305:3', 'test-RecordBatch.R:516:3',
        'test-RecordBatch.R:525:3', 'test-Table.R:507:3',
        'test-chunked-array.R:120:3', 'test-csv.R:729:3',
        'test-dataset-write.R:591:3', 'test-dataset.R:866:3',
        'test-dplyr-filter.R:291:3', 'test-dplyr-funcs-conditional.R:23:1',
        'test-dplyr-funcs-datetime.R:26:1', 'test-dplyr-funcs-math.R:22:1',
        'test-dplyr-funcs-string.R:21:1', 'test-dplyr-funcs-type.R:24:1',
        'test-dplyr-funcs.R:19:1', 'test-dplyr-glimpse.R:27:3',
        'test-dplyr-glimpse.R:33:3', 'test-dplyr-glimpse.R:39:3',
        'test-dplyr-glimpse.R:45:3', 'test-dplyr-glimpse.R:51:3',
        'test-dplyr-glimpse.R:75:3', 'test-dplyr-glimpse.R:93:3',
        'test-dplyr-glimpse.R:101:3', 'test-dplyr-join.R:125:3',
        'test-dplyr-mutate.R:520:3', 'test-dplyr-query.R:625:3',
        'test-dplyr-slice.R:107:3', 'test-dplyr-summarize.R:328:3',
        'test-duckdb.R:19:1', 'test-extension.R:43:3', 'test-extension.R:214:3',
        'test-feather.R:143:3', 'test-feather.R:262:3', 'test-feather.R:332:3',
        'test-filesystem.R:138:3', 'test-filesystem.R:146:3',
        'test-filesystem.R:155:3', 'test-filesystem.R:167:3',
        'test-filesystem.R:178:3', 'test-filesystem.R:193:3', 'test-gcs.R:118:1',
        'test-io.R:71:3', 'test-ipc-stream.R:44:3', 'test-ipc-stream.R:48:3',
        'test-parquet.R:116:3', 'test-parquet.R:485:3', 'test-python.R:19:3',
        'test-safe-call-into-r.R:21:3', 'test-safe-call-into-r.R:36:3',
        'test-safe-call-into-r.R:51:3', 'test-type.R:61:3', 'test-udf.R:62:3',
        'test-util.R:37:3'
      • Parquet test data missing (1): 'test-parquet.R:473:3'
      • TODO (ARROW-16630): make sure BottomK can handle NA ordering (1):
        'test-dplyr-collapse.R:205:3'
      • TODO: (if anyone uses RangeEquals) (1): 'test-Array.R:139:3'
      • TODO: ARROW-14071 (1): 'test-dplyr-filter.R:280:3'
      • Table with 0 cols doesn't know how many rows it should have (1):
        'test-Table.R:114:3'
      • Work around masking of data type functions (ARROW-12322) (1):
        'test-type.R:116:3'
      • environment variable ARROW_LARGE_MEMORY_TESTS (1): 'test-Table.R:673:3'
      • https://issues.apache.org/jira/browse/ARROW-7653 (1): 'test-dataset.R:518:3'
      • minio is not installed. (1): 'test-s3-minio.R:19:1'
      • pyarrow not available for testing (1): 'test-python.R:38:1'
      • tolower(Sys.info()[["sysname"]]) != "windows" is TRUE (1):
        'test-compressed.R:27:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-dplyr-summarize.R:572:3'): summarize() with min() and max() ──
      `object` (`actual`) not equal to `expected` (`expected`).
      
      actual vs expected
                      min_int max_int
      - actual[1, ]        NA      NA
      + expected[1, ]       1      10
      
        `actual$min_int`: NA
      `expected$min_int`:  1
      
        `actual$max_int`: NA
      `expected$max_int`: 10
      Backtrace:
          ▆
       1. └─arrow:::compare_dplyr_binding(...) at test-dplyr-summarize.R:572:3
       2.   └─arrow:::expect_equal(via_table, expected, ...) at tests/testthat/helper-expectation.R:102:3
       3.     └─testthat::expect_equal(...) at tests/testthat/helper-expectation.R:43:5
      
      [ FAIL 1 | WARN 0 | SKIP 79 | PASS 6606 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 147.8Mb
      sub-directories of 1Mb or more:
        R       8.0Mb
        libs  139.1Mb
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
* Number of recursive dependencies: 98

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
    > f_ebd <- system.file("extdata/zerofill-ex_ebd.txt", package = "auk")
    > f_smpl <- system.file("extdata/zerofill-ex_sampling.txt", package = "auk")
    > # data must be for a single species
    > ebd_zf <- auk_zerofill(x = f_ebd, sampling_events = f_smpl,
    +                        species = "Collared Kingfisher",
    +                        collapse = TRUE)
    > occ <- filter_repeat_visits(ebd_zf, n_days = 30)
    > # format for unmarked
    > # typically one would join in habitat covariates prior to this step
    > occ_wide <- format_unmarked_occu(occ,
    +                                  response = "species_observed",
    +                                  site_covs = c("latitude", "longitude"),
    +                                  obs_covs = c("effort_distance_km", 
    +                                               "duration_minutes"))
    > # create an unmarked object
    > if (requireNamespace("unmarked", quietly = TRUE)) {
    +   occ_um <- unmarked::formatWide(occ_wide, type = "unmarkedFrameOccu")
    +   unmarked::summary(occ_um)
    + }
    unmarkedFrame Object
    
    66 sites
    Maximum number of observations per site: 10 
    Mean number of observations per site: 3.8 
    Sites with at least one detection: 37 
    
    Tabulation of y observations:
    FALSE  TRUE  <NA> 
      171    80   409 
    
    Site-level covariates:
        latitude       longitude    
     Min.   :1.206   Min.   :103.7  
     1st Qu.:1.303   1st Qu.:103.7  
     Median :1.337   Median :103.8  
     Mean   :1.334   Mean   :103.8  
     3rd Qu.:1.354   3rd Qu.:103.9  
     Max.   :1.446   Max.   :104.0  
    
    Observation-level covariates:
     effort_distance_km duration_minutes
     Min.   : 0.100     Min.   :  1.00  
     1st Qu.: 0.200     1st Qu.: 15.00  
     Median : 1.000     Median : 30.00  
     Mean   : 1.454     Mean   : 63.83  
     3rd Qu.: 2.000     3rd Qu.: 75.00  
     Max.   :10.000     Max.   :480.00  
     NA's   :584        NA's   :584     
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

## In both

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘auk.Rmd’
      ...
    $ number_observers          <int> 2, 2, 6, 1, 2, 3, 12, 3, 1, 1, 3, 3, 2, 1, 1…
    $ all_species_reported      <lgl> TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TR…
    $ group_identifier          <chr> NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, …
    $ trip_comments             <chr> "With Ailin Chuah on day trip", NA, NA, "Spe…
    
    > ebd_zf_df <- auk_zerofill(ebd_filtered, collapse = TRUE)
    
      When sourcing ‘auk.R’:
    Error: object 'ebd_filtered' not found
    Execution halted
    
      ‘auk.Rmd’ using ‘UTF-8’... failed
      ‘development.Rmd’ using ‘UTF-8’... OK
    ```

# broom.helpers

<details>

* Version: 1.15.0
* GitHub: https://github.com/larmarange/broom.helpers
* Source code: https://github.com/cran/broom.helpers
* Date/Publication: 2024-04-05 15:53:06 UTC
* Number of recursive dependencies: 241

Run `revdepcheck::cloud_details(, "broom.helpers")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(broom.helpers)
      
      Attaching package: 'broom.helpers'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      > 
      > test_check("broom.helpers")
      [ FAIL 1 | WARN 10 | SKIP 96 | PASS 423 ]
      
      ══ Skipped tests (96) ══════════════════════════════════════════════════════════
      • On CRAN (96): 'test-add_coefficients_type.R:113:3',
        'test-add_coefficients_type.R:122:3', 'test-add_contrasts.R:193:3',
        'test-add_contrasts.R:204:3', 'test-add_contrasts.R:317:3',
        'test-add_estimate_to_reference_rows.R:111:3',
        'test-add_estimate_to_reference_rows.R:257:1',
        'test-add_header_rows.R:158:3', 'test-add_header_rows.R:220:3',
        'test-add_n.R:150:3', 'test-add_n.R:161:3', 'test-add_n.R:174:3',
        'test-add_n.R:181:3', 'test-add_n.R:192:3',
        'test-add_pairwise_contrasts.R:2:3', 'test-add_reference_rows.R:223:3',
        'test-add_reference_rows.R:238:3', 'test-add_reference_rows.R:256:3',
        'test-add_term_labels.R:231:3', 'test-add_term_labels.R:274:3',
        'test-add_term_labels.R:289:1', 'test-add_variable_labels.R:202:3',
        'test-add_variable_labels.R:215:3', 'test-attach_and_detach.R:22:3',
        'test-disambiguate_terms.R:14:3', 'test-disambiguate_terms.R:47:3',
        'test-identify_variables.R:255:3', 'test-identify_variables.R:288:3',
        'test-identify_variables.R:586:3', 'test-identify_variables.R:614:3',
        'test-marginal_tidiers.R:2:3', 'test-marginal_tidiers.R:35:3',
        'test-marginal_tidiers.R:68:3', 'test-marginal_tidiers.R:101:3',
        'test-marginal_tidiers.R:201:3', 'test-marginal_tidiers.R:264:3',
        'test-marginal_tidiers.R:346:3', 'test-marginal_tidiers.R:379:3',
        'test-marginal_tidiers.R:442:3', 'test-marginal_tidiers.R:510:3',
        'test-marginal_tidiers.R:576:3', 'test-model_get_n.R:192:3',
        'test-model_get_n.R:212:3', 'test-model_get_n.R:224:3',
        'test-model_get_n.R:239:3', 'test-model_get_n.R:260:3',
        'test-model_get_n.R:272:3', 'test-model_get_n.R:298:3',
        'test-model_get_n.R:324:3', 'test-model_get_n.R:333:3',
        'test-model_get_n.R:341:3', 'test-model_get_n.R:349:3',
        'test-model_get_n.R:370:3', 'test-model_get_n.R:380:3',
        'test-model_get_n.R:401:3', 'test-model_get_n.R:413:3',
        'test-select_helpers.R:83:3', 'test-tidy_plus_plus.R:59:3',
        'test-tidy_plus_plus.R:108:3', 'test-tidy_plus_plus.R:129:3',
        'test-tidy_plus_plus.R:160:3', 'test-tidy_plus_plus.R:173:3',
        'test-tidy_plus_plus.R:189:3', 'test-tidy_plus_plus.R:210:3',
        'test-tidy_plus_plus.R:225:3', 'test-tidy_plus_plus.R:235:3',
        'test-tidy_plus_plus.R:249:3', 'test-tidy_plus_plus.R:268:3',
        'test-tidy_plus_plus.R:310:3', 'test-tidy_plus_plus.R:332:3',
        'test-tidy_plus_plus.R:346:3', 'test-tidy_plus_plus.R:359:3',
        'test-tidy_plus_plus.R:371:3', 'test-tidy_plus_plus.R:383:3',
        'test-tidy_plus_plus.R:393:3', 'test-tidy_plus_plus.R:402:3',
        'test-tidy_plus_plus.R:419:3', 'test-tidy_plus_plus.R:431:3',
        'test-tidy_plus_plus.R:446:3', 'test-tidy_plus_plus.R:463:3',
        'test-tidy_plus_plus.R:479:3', 'test-tidy_plus_plus.R:491:3',
        'test-tidy_plus_plus.R:505:3', 'test-tidy_plus_plus.R:525:3',
        'test-tidy_plus_plus.R:549:3', 'test-tidy_plus_plus.R:589:3',
        'test-tidy_plus_plus.R:612:3', 'test-tidy_plus_plus.R:631:3',
        'test-tidy_plus_plus.R:654:3', 'test-tidy_plus_plus.R:677:3',
        'test-tidy_plus_plus.R:696:3', 'test-tidy_plus_plus.R:714:3',
        'test-tidy_plus_plus.R:735:3', 'test-tidy_plus_plus.R:781:3',
        'test-tidy_plus_plus.R:839:3', 'test-tidy_plus_plus.R:915:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-add_header_rows.R:75:3'): tidy_add_header_rows() works as expected ──
      `mod %>% tidy_and_attach() %>% tidy_add_header_rows()` generated warnings:
      * Calling 'structure(NULL, *)' is deprecated, as NULL cannot have attributes.
        Consider 'structure(list(), *)' instead.
      
      [ FAIL 1 | WARN 10 | SKIP 96 | PASS 423 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking package dependencies ... NOTE
    ```
    Package suggested but not available for checking: ‘margins’
    ```

# CNAIM

<details>

* Version: 2.1.4
* GitHub: https://github.com/Utiligize/CNAIM
* Source code: https://github.com/cran/CNAIM
* Date/Publication: 2022-08-31 08:40:22 UTC
* Number of recursive dependencies: 82

Run `revdepcheck::cloud_details(, "CNAIM")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(CNAIM)
      The CNAIM package is created by Utiligize.
      Please cite the CNAIM package as: Utiligize (2022). CNAIM: R package version 2.1.3, www.cnaim.io.
      > 
      > test_check("CNAIM")
      [1] 0
      [1] 0
      [1] 0
      [1] 0.02847501
      [1] 0.02847501
      [1] 0.02847501
      [1] 0.0251779
      [1] 0.02637685
      [1] 0.03425565
      [1] 0.7732397
        condition_factor condition_cap condition_collar
      1                1            10              0.5
      [1] 1
      [1] 0.7732397
      [1] 0.0435981
      [1] 0.08872213
      [1] 0.05994738
      [1] 0
      [1] 0
      [1] 0.0739351
      [1] 0.1109027
      [1] 0.03037334
      [1] 0.09114558
      [1] 0
      [1] 0
      [1] 0
      [1] 0
      [1] 0.04032824
      [1] 0.04032824
      [1] 0.04032824
      [ FAIL 1 | WARN 1 | SKIP 0 | PASS 222 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-risk_matrix_structure.R:11:3'): basic case ───────────────────
      `res` not equal to `expected_df`.
      Component "value": Modes: logical, numeric
      Component "value": target is logical, current is numeric
      
      [ FAIL 1 | WARN 1 | SKIP 0 | PASS 222 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘cnaim.Rmd’
      ...
    > source("fns_monetary_risk.R")
    
    > matrix_structure <- risk_matrix_structure(5, 4, NA)
    
    > risk_coordinates <- risk_calculation(matrix_dimensions = matrix_structure, 
    +     id = "Transformer1", pof = 0.08, cof = 18232, asset_type = "6.6/11 ..." ... [TRUNCATED] 
    
      When sourcing ‘cnaim.R’:
    Error: unused argument (pof = 0.08)
    Execution halted
    
      ‘cnaim.Rmd’ using ‘UTF-8’... failed
    ```

# CodelistGenerator

<details>

* Version: 2.2.3
* GitHub: NA
* Source code: https://github.com/cran/CodelistGenerator
* Date/Publication: 2024-03-08 22:20:02 UTC
* Number of recursive dependencies: 95

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
      > 
      > library(testthat)
      > library(CodelistGenerator)
      > 
      > test_check("CodelistGenerator")
      Starting 2 test processes
      [ FAIL 2 | WARN 6 | SKIP 8 | PASS 281 ]
      
      ══ Skipped tests (8) ═══════════════════════════════════════════════════════════
      • On CRAN (2): 'test-summariseCodeUse.R:2:1', 'test-summariseCodeUse.R:290:3'
      • Sys.getenv("CDM5_REDSHIFT_DBNAME") == "" is TRUE (4):
        'test-codesFrom.R:100:3', 'test-dbms.R:6:3', 'test-findUnmappedCodes.R:3:3',
        'test-summariseCodeUse.R:498:3'
      • Sys.getenv("CDM5_SQL_SERVER_SERVER") == "" is TRUE (1):
        'test-codesInUse.R:36:3'
      • Sys.getenv("darwinDbDatabaseServer") == "" is TRUE (1):
        'test-synthea_sql_server.R:2:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-codesFrom.R:26:3'): test inputs - mock ───────────────────────
      `codesFromConceptSet(...)` did not throw the expected error.
      ── Failure ('test-codesFrom.R:26:3'): test inputs - mock ───────────────────────
      `codesFromConceptSet(...)` did not throw the expected error.
      
      [ FAIL 2 | WARN 6 | SKIP 8 | PASS 281 ]
      Error: Test failures
      Execution halted
    ```

# dat

<details>

* Version: 0.5.0
* GitHub: https://github.com/wahani/dat
* Source code: https://github.com/cran/dat
* Date/Publication: 2020-05-15 19:40:03 UTC
* Number of recursive dependencies: 75

Run `revdepcheck::cloud_details(, "dat")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library("dat")
      To use dplyr as backend set 'options(dat.use.dplyr = TRUE)'.
      
      Attaching package: 'dat'
      
      The following object is masked from 'package:base':
      
          replace
      
      > 
      > if (requireNamespace("testthat", quietly = TRUE)) {
      +   testthat::test_check("dat")
      + }
      [ FAIL 1 | WARN 67 | SKIP 1 | PASS 123 ]
      
      ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
      • On CRAN (1): 'test-lintr.R:5:5'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-mutar.R:117:5'): Parameterized formulas ──────────────────────
      `dat` not identical to `dat1`.
      Component "y": Modes: numeric, logical
      Component "y": target is numeric, current is logical
      Backtrace:
          ▆
       1. ├─dat:::WITH_DPLYR(...) at test-mutar.R:103:3
       2. └─testthat::expect_identical(dat, dat1) at test-mutar.R:117:5
      
      [ FAIL 1 | WARN 67 | SKIP 1 | PASS 123 ]
      Error: Test failures
      Execution halted
    ```

# descstat

<details>

* Version: 0.1-2
* GitHub: NA
* Source code: https://github.com/cran/descstat
* Date/Publication: 2021-02-17 16:40:02 UTC
* Number of recursive dependencies: 58

Run `revdepcheck::cloud_details(, "descstat")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘descstat-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: freq_table
    > ### Title: Frequency table
    > ### Aliases: freq_table
    > ### Keywords: manip
    > 
    > ### ** Examples
    > 
    > # in table padova, price is a numeric variable, a vector of breaks should be provided
    > library("dplyr")
    
    Attaching package: ‘dplyr’
    
    The following objects are masked from ‘package:stats’:
    
        filter, lag
    
    The following objects are masked from ‘package:base’:
    
        intersect, setdiff, setequal, union
    
    > padova %>% freq_table(price,
    +                       breaks = c(50, 100, 150, 200, 250, 300, 350, 400),
    +                       right = TRUE)
    # A tibble: 9 × 3
      price         x     n
    ```

# duckplyr

<details>

* Version: 0.3.2
* GitHub: https://github.com/duckdblabs/duckplyr
* Source code: https://github.com/cran/duckplyr
* Date/Publication: 2024-03-17 20:10:07 UTC
* Number of recursive dependencies: 100

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
      > 
      > library(testthat)
      > library(duckplyr)
      
      Attaching package: 'duckplyr'
      
      The following objects are masked from 'package:stats':
      
          filter, lag
      
      The following objects are masked from 'package:base':
      
          intersect, setdiff, setequal, union
      
      > 
      > test_check("duckplyr")
      Deactivated cache.
      i Overwriting dplyr methods with duckplyr methods
      i Restoring dplyr methods
      [ FAIL 5 | WARN 0 | SKIP 364 | PASS 1318 ]
      
      ══ Skipped tests (364) ═════════════════════════════════════════════════════════
      • Always returns tibble (1): 'test-as_duckplyr_df.R:760:3'
      • Can't set a non-UTF-8 encoding (1): 'test-mutate.R:444:3'
      • Can't use 'en_US' locale (1): 'test-arrange.R:345:3'
      • External vector? (5): 'test-as_duckplyr_df.R:2239:3',
        'test-as_duckplyr_df.R:2255:3', 'test-as_duckplyr_df.R:2271:3',
        'test-as_duckplyr_df.R:2285:3', 'test-as_duckplyr_df.R:2301:3'
      • Grouped (4): 'test-as_duckplyr_df.R:686:3', 'test-as_duckplyr_df.R:744:3',
        'test-as_duckplyr_df.R:806:3', 'test-as_duckplyr_df.R:2521:3'
      • Hack (1): 'test-as_duckplyr_df.R:575:3'
      • Missing or empty names not allowed. (6): 'test-mutate.R:901:3',
        'test-filter.R:648:3', 'test-select.R:40:3', 'test-select.R:136:3',
        'test-select.R:145:3', 'test-summarise.R:440:3'
      • Must pass a plain data frame or a tibble to `as_duckplyr_df()`. (163):
        'test-mutate.R:7:3', 'test-mutate.R:49:3', 'test-mutate.R:77:3',
        'test-mutate.R:110:3', 'test-mutate.R:170:3', 'test-mutate.R:243:3',
        'test-mutate.R:257:3', 'test-mutate.R:294:3', 'test-mutate.R:303:3',
        'test-mutate.R:315:3', 'test-mutate.R:330:3', 'test-mutate.R:361:3',
        'test-mutate.R:367:3', 'test-mutate.R:374:3', 'test-mutate.R:401:3',
        'test-mutate.R:408:3', 'test-mutate.R:426:3', 'test-mutate.R:455:3',
        'test-mutate.R:465:3', 'test-mutate.R:485:3', 'test-mutate.R:579:3',
        'test-mutate.R:588:3', 'test-mutate.R:626:3', 'test-mutate.R:635:3',
        'test-mutate.R:664:3', 'test-mutate.R:673:3', 'test-mutate.R:694:3',
        'test-mutate.R:734:3', 'test-mutate.R:745:3', 'test-mutate.R:759:3',
        'test-mutate.R:770:3', 'test-mutate.R:776:3', 'test-mutate.R:791:3',
        'test-mutate.R:891:3', 'test-filter.R:8:5', 'test-filter.R:27:3',
        'test-filter.R:54:3', 'test-filter.R:118:3', 'test-filter.R:158:3',
        'test-filter.R:185:3', 'test-filter.R:223:3', 'test-filter.R:229:3',
        'test-filter.R:237:3', 'test-filter.R:303:3', 'test-filter.R:319:3',
        'test-filter.R:361:3', 'test-filter.R:437:3', 'test-filter.R:544:3',
        'test-filter.R:567:3', 'test-filter.R:578:3', 'test-filter.R:621:3',
        'test-filter.R:633:3', 'test-filter.R:704:3', 'test-filter.R:713:3',
        'test-count-tally.R:57:3', 'test-count-tally.R:66:3',
        'test-count-tally.R:77:3', 'test-count-tally.R:159:3',
        'test-count-tally.R:175:3', 'test-across.R:14:3', 'test-across.R:21:3',
        'test-across.R:324:3', 'test-across.R:334:3', 'test-across.R:680:3',
        'test-across.R:695:5', 'test-across.R:1072:3', 'test-across.R:1131:3',
        'test-across.R:1165:3', 'test-across.R:1257:3', 'test-across.R:1380:3',
        'test-across.R:1394:3', 'test-arrange.R:9:3', 'test-arrange.R:206:3',
        'test-arrange.R:213:3', 'test-arrange.R:219:3', 'test-arrange.R:288:3',
        'test-arrange.R:299:3', 'test-arrange.R:337:3', 'test-arrange.R:381:3',
        'test-colwise-select.R:38:3', 'test-colwise-select.R:93:3',
        'test-colwise-select.R:141:3', 'test-deprec-do.R:10:3',
        'test-deprec-do.R:18:3', 'test-deprec-do.R:33:3', 'test-deprec-do.R:42:3',
        'test-deprec-do.R:49:3', 'test-deprec-do.R:63:5', 'test-deprec-do.R:95:3',
        'test-deprec-do.R:106:3', 'test-deprec-do.R:179:3', 'test-deprec-do.R:184:3',
        'test-deprec-do.R:199:3', 'test-distinct.R:50:3', 'test-distinct.R:56:3',
        'test-distinct.R:64:3', 'test-distinct.R:115:3', 'test-distinct.R:156:3',
        'test-group-map.R:2:3', 'test-group-map.R:20:3', 'test-group-map.R:35:3',
        'test-group-map.R:60:3', 'test-group-map.R:73:3', 'test-group-map.R:85:3',
        'test-group-map.R:106:3', 'test-group-map.R:122:3', 'test-join.R:497:3',
        'test-join.R:628:3', 'test-join.R:650:3', 'test-join.R:673:3',
        'test-join.R:683:3', 'test-rename.R:9:3', 'test-rename.R:31:3',
        'test-select.R:4:3', 'test-select.R:12:3', 'test-select.R:28:3',
        'test-select.R:87:3', 'test-select.R:106:3', 'test-select.R:176:3',
        'test-sets.R:38:3', 'test-sets.R:46:3', 'test-sets.R:137:3',
        'test-slice.R:8:3', 'test-slice.R:21:3', 'test-slice.R:31:3',
        'test-slice.R:48:3', 'test-slice.R:79:3', 'test-slice.R:99:3',
        'test-slice.R:123:3', 'test-slice.R:135:3', 'test-slice.R:202:3',
        'test-slice.R:211:3', 'test-slice.R:334:3', 'test-slice.R:379:3',
        'test-slice.R:393:3', 'test-slice.R:587:3', 'test-slice.R:613:3',
        'test-slice.R:634:3', 'test-summarise.R:19:3', 'test-summarise.R:45:3',
        'test-summarise.R:61:3', 'test-summarise.R:77:3', 'test-summarise.R:96:3',
        'test-summarise.R:131:3', 'test-summarise.R:189:3', 'test-summarise.R:207:3',
        'test-summarise.R:212:3', 'test-summarise.R:222:3', 'test-summarise.R:236:3',
        'test-summarise.R:242:3', 'test-summarise.R:256:3', 'test-summarise.R:273:3',
        'test-summarise.R:285:3', 'test-summarise.R:325:3', 'test-summarise.R:338:3',
        'test-summarise.R:346:3', 'test-summarise.R:406:3', 'test-summarise.R:415:3',
        'test-transmute.R:2:3', 'test-transmute.R:9:3', 'test-transmute.R:27:3',
        'test-transmute.R:49:3', 'test-transmute.R:82:3'
      • On CRAN (141): 'test-tpch.R:110:3', 'test-mutate.R:138:3',
        'test-mutate.R:198:3', 'test-filter.R:404:3', 'test-filter.R:422:3',
        'test-filter.R:431:3', 'test-filter.R:695:3', 'test-filter.R:721:3',
        'test-count-tally.R:47:3', 'test-count-tally.R:120:3',
        'test-count-tally.R:135:3', 'test-count-tally.R:163:3',
        'test-count-tally.R:187:3', 'test-count-tally.R:219:3',
        'test-across.R:144:3', 'test-across.R:153:3', 'test-across.R:209:3',
        'test-across.R:619:3', 'test-across.R:769:3', 'test-across.R:798:3',
        'test-across.R:1155:3', 'test-across.R:1199:3', 'test-across.R:1228:3',
        'test-across.R:1293:3', 'test-across.R:1305:3', 'test-all-equal.R:2:3',
        'test-all-equal.R:27:3', 'test-all-equal.R:36:3', 'test-all-equal.R:47:3',
        'test-all-equal.R:61:3', 'test-all-equal.R:114:3', 'test-all-equal.R:142:3',
        'test-all-equal.R:155:3', 'test-all-equal.R:163:3', 'test-all-equal.R:171:3',
        'test-arrange.R:29:3', 'test-arrange.R:169:3', 'test-arrange.R:178:3',
        'test-arrange.R:192:3', 'test-arrange.R:321:3',
        'test-colwise-select.R:175:3', 'test-demo.R:4:3', 'test-deprec-funs.R:119:3',
        'test-deprec-funs.R:127:3', 'test-distinct.R:180:3', 'test-duckplyr.R:18:3',
        'test-expr.R:2:3', 'test-fallback.R:10:3', 'test-fallback.R:24:3',
        'test-fallback.R:38:3', 'test-fallback.R:51:3', 'test-fallback.R:57:3',
        'test-fallback.R:69:3', 'test-fallback.R:87:3', 'test-fallback.R:113:3',
        'test-fallback.R:131:3', 'test-fallback.R:147:3', 'test-fallback.R:161:3',
        'test-fallback.R:175:3', 'test-fallback.R:189:3', 'test-fallback.R:203:3',
        'test-fallback.R:218:3', 'test-fallback.R:233:3', 'test-join-rows.R:3:3',
        'test-join-rows.R:158:3', 'test-join-rows.R:164:3', 'test-join-rows.R:172:3',
        'test-join-rows.R:181:3', 'test-join-rows.R:187:3', 'test-join-rows.R:207:3',
        'test-join-rows.R:271:3', 'test-join-rows.R:382:3', 'test-join-rows.R:401:3',
        'test-join-rows.R:415:3', 'test-join.R:151:3', 'test-join.R:338:3',
        'test-join.R:350:3', 'test-join.R:391:3', 'test-join.R:470:3',
        'test-join.R:518:3', 'test-join.R:555:3', 'test-join.R:605:3',
        'test-join.R:709:3', 'test-join.R:720:3', 'test-join.R:731:3',
        'test-join.R:754:3', 'test-join.R:768:3', 'test-relational-duckdb.R:37:3',
        'test-relational-duckdb.R:80:3', 'test-relational-duckdb.R:99:3',
        'test-relational-rel.R:2:3', 'test-relational.R:4:3', 'test-relocate.R:30:3',
        'test-rename.R:75:3', 'test-rename.R:85:3', 'test-rename.R:94:3',
        'test-select.R:158:3', 'test-sets.R:59:3', 'test-sets.R:73:3',
        'test-sets.R:83:3', 'test-sets.R:141:3', 'test-slice.R:40:3',
        'test-slice.R:63:3', 'test-slice.R:71:3', 'test-slice.R:109:3',
        'test-slice.R:193:3', 'test-slice.R:219:3', 'test-slice.R:230:3',
        'test-slice.R:240:3', 'test-slice.R:248:3', 'test-slice.R:299:3',
        'test-slice.R:342:3', 'test-slice.R:405:3', 'test-slice.R:517:3',
        'test-slice.R:524:3', 'test-slice.R:559:3', 'test-slice.R:571:3',
        'test-summarise.R:158:3', 'test-summarise.R:397:3', 'test-summarise.R:540:3',
        'test-telemetry.R:4:3', 'test-telemetry.R:39:3', 'test-telemetry.R:47:3',
        'test-telemetry.R:55:3', 'test-telemetry.R:63:3', 'test-telemetry.R:77:3',
        'test-telemetry.R:94:3', 'test-telemetry.R:112:3', 'test-telemetry.R:120:3',
        'test-telemetry.R:138:3', 'test-telemetry.R:146:3', 'test-telemetry.R:154:3',
        'test-telemetry.R:162:3', 'test-telemetry.R:180:3', 'test-telemetry.R:188:3',
        'test-telemetry.R:201:3', 'test-telemetry.R:209:3', 'test-telemetry.R:223:3',
        'test-telemetry.R:231:3', 'test-telemetry.R:239:3', 'test-transmute.R:90:3'
      • RSQLite cannot be loaded (2): 'test-count-tally.R:86:3',
        'test-count-tally.R:98:3'
      • Random seed (2): 'test-as_duckplyr_df.R:2036:3',
        'test-as_duckplyr_df.R:2052:3'
      • Special (5): 'test-as_duckplyr_df.R:700:3', 'test-as_duckplyr_df.R:716:3',
        'test-as_duckplyr_df.R:776:3', 'test-as_duckplyr_df.R:851:3',
        'test-as_duckplyr_df.R:1553:3'
      • Stack overflow (1): 'test-as_duckplyr_df.R:2020:3'
      • TODO duckdb (27): 'test-mutate.R:94:3', 'test-filter.R:89:3',
        'test-filter.R:599:3', 'test-across.R:221:3', 'test-across.R:602:3',
        'test-across.R:956:3', 'test-all-equal.R:180:3', 'test-deprec-do.R:71:3',
        'test-generics.R:160:3', 'test-group-map.R:27:3', 'test-group-map.R:65:3',
        'test-join-rows.R:193:3', 'test-join-rows.R:430:3', 'test-join-rows.R:446:3',
        'test-join-rows.R:459:3', 'test-join.R:59:3', 'test-join.R:357:3',
        'test-join.R:363:3', 'test-join.R:382:3', 'test-join.R:420:3',
        'test-join.R:446:3', 'test-join.R:456:3', 'test-sets.R:123:3',
        'test-summarise.R:30:3', 'test-summarise.R:197:3', 'test-summarise.R:308:3',
        'test-summarise.R:449:3'
      • WAT (3): 'test-as_duckplyr_df.R:730:3', 'test-as_duckplyr_df.R:790:3',
        'test-as_duckplyr_df.R:1567:3'
      • Won't need (1): 'test-prom.R:2:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-as_duckplyr_df.R:2415:3'): as_duckplyr_df() and symdiff() ──────
      Error: {"exception_type":"Invalid Input","exception_message":"Cannot combine LEFT and RIGHT relations of different connections!"}
      Backtrace:
           ▆
        1. ├─test_df_x %>% as_duckplyr_df() %>% symdiff(test_df_y) at test-as_duckplyr_df.R:2415:3
        2. ├─dplyr::symdiff(., test_df_y)
        3. └─duckplyr:::symdiff.duckplyr_df(., test_df_y)
        4.   ├─duckplyr:::rel_try(...)
        5.   ├─generics::union(x_not_y, y_not_x)
        6.   └─duckplyr:::union.duckplyr_df(x_not_y, y_not_x)
        7.     ├─dplyr::distinct(union_all(x, y))
        8.     ├─dplyr::union_all(x, y)
        9.     └─duckplyr:::union_all.duckplyr_df(x, y)
       10.       ├─duckplyr:::rel_try(...)
       11.       ├─duckplyr::rel_union_all(x_rel, y_rel)
       12.       └─duckplyr:::rel_union_all.duckdb_relation(x_rel, y_rel)
       13.         └─duckdb$rel_union_all(rel_a, rel_b)
      ── Failure ('test-mutate.R:434:3'): no utf8 invasion (#722) ────────────────────
      lobstr::obj_addrs(names(df)) (`actual`) not equal to lobstr::obj_addrs(names(df2)) (`expected`).
      
      `actual`:   "0x001" "0x002" "0x003"
      `expected`: "0x004" "0x005" "0x003"
      ── Failure ('test-mutate.R:434:3'): no utf8 invasion (#722) ────────────────────
      lobstr::obj_addrs(names(df)) (`actual`) not equal to lobstr::obj_addrs(names(df3)) (`expected`).
      
      `actual`:   "0x001" "0x002" "0x003"
      `expected`: "0x004" "0x005" "0x003"
      ── Failure ('test-mutate.R:434:3'): no utf8 invasion (#722) ────────────────────
      lobstr::obj_addrs(names(df)) (`actual`) not equal to lobstr::obj_addrs(names(df4)) (`expected`).
      
      `actual`:   "0x001" "0x002" "0x003"
      `expected`: "0x004" "0x005" "0x003"
      ── Failure ('test-dplyr.R:26:3'): no homonyms ──────────────────────────────────
      `objs_duckplyr` (`actual`) not identical to objs_dplyr[names(objs_duckplyr)] (`expected`).
      
      `environment(actual$as_duckplyr_df)` is <env:namespace:duckplyr>
      `environment(expected$as_duckplyr_df)` is <env:namespace:dplyr>
      
      body(actual$check_df_for_rel)[1:7] vs body(expected$check_df_for_rel)[1:13]
        `{`
      - `    if (is.character(.row_names_info(df, 0L))) {`
      - `        cli::cli_abort("Need data frame without row names to convert to relational.")`
      + `    rni <- .row_names_info(df, 0L)`
      + `    if (is.character(rni)) {`
      + `        cli::cli_abort("Need data frame without row names to convert to relational, got character row names.")`
        `    }`
      + `    if (length(rni) != 0) {`
      + `        if (length(rni) != 2L || !is.na(rni[[1]])) {`
      + `            cli::cli_abort("Need data frame without row names to convert to relational, got numeric row names.")`
      + `        }`
      + `    }`
      and 3 more ...
      
      body(actual$check_df_for_rel)[50:55] vs body(expected$check_df_for_rel)[56:66]
        `            roundtrip_attrib <- attributes(roundtrip[[i]])`
        `            if (!identical(df_attrib, roundtrip_attrib)) {`
        `                cli::cli_abort("Attributes are lost during conversion. Affected column: {.var {names(df)[[i]]}}.")`
        `            }`
      + `            if (inherits(df[[i]], "POSIXct")) {`
      + `                if (!identical(df[[i]], roundtrip[[i]])) {`
      + `                  cli::cli_abort("Imperfect roundtrip. Affected column: {.var {names(df)[[i]]}}.")`
      + `                }`
      + `            }`
        `        }`
        `    }`
      and 1 more ...
      
      `environment(actual$check_df_for_rel)` is <env:namespace:duckplyr>
      `environment(expected$check_df_for_rel)` is <env:namespace:dplyr>
      
      body(actual$create_default_duckdb_connection)[1:8] vs body(expected$create_default_duckdb_connection)[1:10]
        `{`
      - `    con <- DBI::dbConnect(duckdb::duckdb())`
      - `    DBI::dbExecute(con, "set memory_limit='2GB'")`
      + `    drv <- duckdb::duckdb()`
      + `    con <- DBI::dbConnect(drv)`
      + `    DBI::dbExecute(con, "set memory_limit='1GB'")`
        `    DBI::dbExecute(con, paste0("pragma temp_directory='", tempdir(), `
        `        "'"))`
      + `    duckdb$rapi_load_rfuns(drv@database_ref)`
        `    for (i in seq_along(duckplyr_macros)) {`
        `        sql <- paste0("CREATE MACRO \\"", names(duckplyr_macros)[[i]], `
        `            "\\"", duckplyr_macros[[i]])`
      
      `environment(actual$create_default_duckdb_connection)` is <env:namespace:duckplyr>
      `environment(expected$create_default_duckdb_connection)` is <env:namespace:dplyr>
      
      `actual$default_duckdb_connection$con@conn_ref` is <pointer: 0x55e536c33e50>
      `expected$default_duckdb_connection$con@conn_ref` is <pointer: 0x55e53a436030>
      
      `actual$default_duckdb_connection$con@driver@database_ref` is <pointer: 0x55e53a61bf40>
      `expected$default_duckdb_connection$con@driver@database_ref` is <pointer: 0x55e539e4af60>
      
      `environment(actual$df_from_csv)` is <env:namespace:duckplyr>
      `environment(expected$df_from_csv)` is <env:namespace:dplyr>
      
      `environment(actual$df_from_file)` is <env:namespace:duckplyr>
      `environment(expected$df_from_file)` is <env:namespace:dplyr>
      
      `environment(actual$df_from_parquet)` is <env:namespace:duckplyr>
      `environment(expected$df_from_parquet)` is <env:namespace:dplyr>
      
      `environment(actual$df_to_parquet)` is <env:namespace:duckplyr>
      `environment(expected$df_to_parquet)` is <env:namespace:dplyr>
      
      `actual$dplyr_mode`:   FALSE
      `expected$dplyr_mode`: TRUE 
      
      `environment(actual$duckdb_rel_from_df)` is <env:namespace:duckplyr>
      `environment(expected$duckdb_rel_from_df)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_add_count)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_add_count)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_anti_join)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_anti_join)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_arrange)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_arrange)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_auto_copy)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_auto_copy)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_collect)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_collect)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_compute)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_compute)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_count)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_count)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_cross_join)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_cross_join)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_df_from_csv)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_df_from_csv)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_df_from_file)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_df_from_file)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_df_from_parquet)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_df_from_parquet)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_distinct)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_distinct)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_do)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_do)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_filter)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_filter)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_full_join)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_full_join)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_group_by)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_group_by)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_group_indices)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_group_indices)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_group_keys)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_group_keys)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_group_map)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_group_map)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_group_modify)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_group_modify)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_group_nest)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_group_nest)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_group_size)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_group_size)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_group_split)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_group_split)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_group_trim)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_group_trim)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_group_vars)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_group_vars)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_groups)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_groups)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_inner_join)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_inner_join)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_intersect)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_intersect)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_left_join)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_left_join)` is <env:namespace:dplyr>
      
      actual$duckplyr_macros[1:11] vs expected$duckplyr_macros[1:11]
      - <"(x, y) AS x < y"
      + <"(x, y) AS \"r_base::<\"(x, y)"
      - <="(x, y) AS x <= y"
      + <="(x, y) AS \"r_base::<=\"(x, y)"
      - >"(x, y) AS x > y"
      + >"(x, y) AS \"r_base::>\"(x, y)"
      - >="(x, y) AS x >= y"
      + >="(x, y) AS \"r_base::>=\"(x, y)"
      - =="(x, y) AS x = y"
      + =="(x, y) AS \"r_base::==\"(x, y)"
      - !="(x, y) AS x <> y"
      + !="(x, y) AS \"r_base::!=\"(x, y)"
        ___divide"(x, y) AS CASE WHEN y = 0 THEN CASE WHEN x = 0 THEN CAST('NaN' AS double) WHEN x > 0 THEN CAST('+Infinity' AS double) ELSE CAST('-Infinity' AS double) END ELSE CAST(x AS double) / y END"
      - is.na"(x) AS (x IS NULL)"
      + is.na"(x) AS (x IS NULL OR isnan(x))"
        n"() AS CAST(COUNT(*) AS int32)"
        ___log10"(x) AS CASE WHEN x < 0 THEN CAST('NaN' AS double) WHEN x = 0 THEN CAST('-Inf' AS double) ELSE log10(x) END"
      and 1 more ...
      
      `environment(actual$duckplyr_mutate)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_mutate)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_mutate_keep)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_mutate_keep)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_n_groups)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_n_groups)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_nest_by)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_nest_by)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_nest_join)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_nest_join)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_pull)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_pull)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_reframe)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_reframe)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_relocate)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_relocate)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_rename)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_rename)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_rename_with)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_rename_with)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_right_join)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_right_join)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_rows_append)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_rows_append)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_rows_delete)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_rows_delete)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_rows_insert)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_rows_insert)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_rows_patch)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_rows_patch)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_rows_update)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_rows_update)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_rows_upsert)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_rows_upsert)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_rowwise)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_rowwise)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_select)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_select)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_semi_join)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_semi_join)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_setdiff)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_setdiff)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_setequal)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_setequal)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_slice)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_slice)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_slice_head)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_slice_head)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_slice_sample)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_slice_sample)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_slice_tail)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_slice_tail)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_summarise)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_summarise)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_symdiff)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_symdiff)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_transmute)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_transmute)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_ungroup)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_ungroup)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_union)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_union)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_union_all)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_union_all)` is <env:namespace:dplyr>
      
      `environment(actual$exprs_from_loc)` is <env:namespace:duckplyr>
      `environment(expected$exprs_from_loc)` is <env:namespace:dplyr>
      
      `environment(actual$exprs_project)` is <env:namespace:duckplyr>
      `environment(expected$exprs_project)` is <env:namespace:dplyr>
      
      `environment(actual$fix_auto_name)` is <env:namespace:duckplyr>
      `environment(expected$fix_auto_name)` is <env:namespace:dplyr>
      
      `environment(actual$get_default_duckdb_connection)` is <env:namespace:duckplyr>
      `environment(expected$get_default_duckdb_connection)` is <env:namespace:dplyr>
      
      `environment(actual$is_duckplyr_df)` is <env:namespace:duckplyr>
      `environment(expected$is_duckplyr_df)` is <env:namespace:dplyr>
      
      `environment(actual$meta_macro_register)` is <env:namespace:duckplyr>
      `environment(expected$meta_macro_register)` is <env:namespace:dplyr>
      
      `environment(actual$meta_rel_get)` is <env:namespace:duckplyr>
      `environment(expected$meta_rel_get)` is <env:namespace:dplyr>
      
      `environment(actual$meta_rel_register)` is <env:namespace:duckplyr>
      `environment(expected$meta_rel_register)` is <env:namespace:dplyr>
      
      `environment(actual$meta_rel_register_df)` is <env:namespace:duckplyr>
      `environment(expected$meta_rel_register_df)` is <env:namespace:dplyr>
      
      `environment(actual$meta_rel_register_file)` is <env:namespace:duckplyr>
      `environment(expected$meta_rel_register_file)` is <env:namespace:dplyr>
      
      `environment(actual$new_relational)` is <env:namespace:duckplyr>
      `environment(expected$new_relational)` is <env:namespace:dplyr>
      
      `environment(actual$new_relexpr)` is <env:namespace:duckplyr>
      `environment(expected$new_relexpr)` is <env:namespace:dplyr>
      
      `environment(actual$nexprs)` is <env:namespace:duckplyr>
      `environment(expected$nexprs)` is <env:namespace:dplyr>
      
      `environment(actual$nexprs_from_loc)` is <env:namespace:duckplyr>
      `environment(expected$nexprs_from_loc)` is <env:namespace:dplyr>
      
      `environment(actual$oo_force)` is <env:namespace:duckplyr>
      `environment(expected$oo_force)` is <env:namespace:dplyr>
      
      `environment(actual$oo_prep)` is <env:namespace:duckplyr>
      `environment(expected$oo_prep)` is <env:namespace:dplyr>
      
      `environment(actual$oo_restore)` is <env:namespace:duckplyr>
      `environment(expected$oo_restore)` is <env:namespace:dplyr>
      
      `environment(actual$oo_restore_cols)` is <env:namespace:duckplyr>
      `environment(expected$oo_restore_cols)` is <env:namespace:dplyr>
      
      `environment(actual$oo_restore_order)` is <env:namespace:duckplyr>
      `environment(expected$oo_restore_order)` is <env:namespace:dplyr>
      
      `environment(actual$print.relational_relexpr)` is <env:namespace:duckplyr>
      `environment(expected$print.relational_relexpr)` is <env:namespace:dplyr>
      
      `environment(actual$rel_aggregate)` is <env:namespace:duckplyr>
      `environment(expected$rel_aggregate)` is <env:namespace:dplyr>
      
      `environment(actual$rel_aggregate.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_aggregate.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_aggregate.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_aggregate.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_alias)` is <env:namespace:duckplyr>
      `environment(expected$rel_alias)` is <env:namespace:dplyr>
      
      `environment(actual$rel_alias.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_alias.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_alias.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_alias.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_distinct)` is <env:namespace:duckplyr>
      `environment(expected$rel_distinct)` is <env:namespace:dplyr>
      
      `environment(actual$rel_distinct.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_distinct.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_distinct.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_distinct.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_explain)` is <env:namespace:duckplyr>
      `environment(expected$rel_explain)` is <env:namespace:dplyr>
      
      `environment(actual$rel_explain.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_explain.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_explain.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_explain.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_filter)` is <env:namespace:duckplyr>
      `environment(expected$rel_filter)` is <env:namespace:dplyr>
      
      `environment(actual$rel_filter.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_filter.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_filter.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_filter.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_from_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_from_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_join)` is <env:namespace:duckplyr>
      `environment(expected$rel_join)` is <env:namespace:dplyr>
      
      `environment(actual$rel_join.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_join.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_join.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_join.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_join_impl)` is <env:namespace:duckplyr>
      `environment(expected$rel_join_impl)` is <env:namespace:dplyr>
      
      `environment(actual$rel_limit)` is <env:namespace:duckplyr>
      `environment(expected$rel_limit)` is <env:namespace:dplyr>
      
      `environment(actual$rel_limit.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_limit.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_limit.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_limit.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_names)` is <env:namespace:duckplyr>
      `environment(expected$rel_names)` is <env:namespace:dplyr>
      
      `environment(actual$rel_names.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_names.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_names.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_names.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_order)` is <env:namespace:duckplyr>
      `environment(expected$rel_order)` is <env:namespace:dplyr>
      
      `environment(actual$rel_order.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_order.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_order.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_order.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_project)` is <env:namespace:duckplyr>
      `environment(expected$rel_project)` is <env:namespace:dplyr>
      
      `environment(actual$rel_project.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_project.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_project.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_project.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_set_alias)` is <env:namespace:duckplyr>
      `environment(expected$rel_set_alias)` is <env:namespace:dplyr>
      
      `environment(actual$rel_set_alias.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_set_alias.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_set_alias.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_set_alias.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_set_diff)` is <env:namespace:duckplyr>
      `environment(expected$rel_set_diff)` is <env:namespace:dplyr>
      
      `environment(actual$rel_set_diff.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_set_diff.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_set_diff.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_set_diff.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_set_intersect)` is <env:namespace:duckplyr>
      `environment(expected$rel_set_intersect)` is <env:namespace:dplyr>
      
      `environment(actual$rel_set_intersect.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_set_intersect.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_set_intersect.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_set_intersect.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_set_symdiff)` is <env:namespace:duckplyr>
      `environment(expected$rel_set_symdiff)` is <env:namespace:dplyr>
      
      `environment(actual$rel_set_symdiff.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_set_symdiff.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_set_symdiff.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_set_symdiff.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_stats_clean)` is <env:namespace:duckplyr>
      `environment(expected$rel_stats_clean)` is <env:namespace:dplyr>
      
      `actual$rel_stats_env` is length 11
      `expected$rel_stats_env` is length 10
      
          names(actual$rel_stats_env) | names(expected$rel_stats_env)    
      [2] "rel_distinct"              | "rel_distinct"                [2]
      [3] "rel_filter"                | "rel_filter"                  [3]
      [4] "rel_join"                  | "rel_join"                    [4]
      [5] "rel_limit"                 -                                  
      [6] "rel_names"                 | "rel_names"                   [5]
      [7] "rel_order"                 | "rel_order"                   [6]
      [8] "rel_project"               | "rel_project"                 [7]
      
        `actual$rel_stats_env$rel_aggregate`: 55
      `expected$rel_stats_env$rel_aggregate`: 12
      
        `actual$rel_stats_env$rel_distinct`: 9
      `expected$rel_stats_env$rel_distinct`: 3
      
        `actual$rel_stats_env$rel_filter`: 95
      `expected$rel_stats_env$rel_filter`: 21
      
        `actual$rel_stats_env$rel_join`: 71
      `expected$rel_stats_env$rel_join`:  9
      
      `actual$rel_stats_env$rel_limit` is an integer vector (5)
      `expected$rel_stats_env$rel_limit` is absent
      
        `actual$rel_stats_env$rel_names`: 742
      `expected$rel_stats_env$rel_names`: 348
      
        `actual$rel_stats_env$rel_order`: 273
      `expected$rel_stats_env$rel_order`:  69
      
        `actual$rel_stats_env$rel_project`: 904
      `expected$rel_stats_env$rel_project`: 306
      
        `actual$rel_stats_env$rel_set_alias`: 142
      `expected$rel_stats_env$rel_set_alias`:  18
      
        `actual$rel_stats_env$rel_to_df`: 485
      `expected$rel_stats_env$rel_to_df`: 167
      
        `actual$rel_stats_env$rel_union_all`: 8
      `expected$rel_stats_env$rel_union_all`: 7
      
      `environment(actual$rel_stats_get)` is <env:namespace:duckplyr>
      `environment(expected$rel_stats_get)` is <env:namespace:dplyr>
      
      `environment(actual$rel_to_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_to_df)` is <env:namespace:dplyr>
      
      body(actual$rel_to_df.duckdb_relation) vs body(expected$rel_to_df.duckdb_relation)
        `{`
      + `    if (anyDuplicated(tolower(names(rel)))) {`
      + `        cli::cli_abort("Column names are case-insensitive in duckdb, fallback required.")`
      + `    }`
        `    duckdb$rel_to_altrep(rel)`
        `}`
      
      `environment(actual$rel_to_df.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_to_df.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_to_df.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_to_df.relational_df)` is <env:namespace:dplyr>
      
      body(actual$rel_translate)[35:40] vs body(expected$rel_translate)[35:47]
        `                  name <- name[[3]]`
        `                } else {`
        `                  pkg <- NULL`
        `                }`
      + `                if (!(name %in% c("wday", "strftime", "lag", `
      + `                  "lead"))) {`
      + `                  if (!is.null(names(expr)) && any(names(expr) != `
      + `                    "")) {`
      + `                    cli::cli_abort("Can't translate named argument {.code {name}({names(expr)[names(expr) != ''][[1]]} = )}.")`
      + `                  }`
      + `                }`
      and 3 more ...
      
      body(actual$rel_translate)[61:70] vs body(expected$rel_translate)[68:77]
        `                  }`
        `                }, \`%in%\` = {`
        `                  tryCatch({`
      - `                    values <- eval(expr[[3]], envir = baseenv())`
      + `                    values <- eval(expr[[3]], envir = env)`
        `                    consts <- map(values, do_translate, in_window = in_window)`
        `                    ops <- map(consts, list, do_translate(expr[[2]]))`
      - `                    cmp <- map(ops, relexpr_function, name = "==")`
      + `                    cmp <- map(ops, relexpr_function, name = "___eq_na_matches_na")`
        `                    alt <- reduce(cmp, function(.x, .y) {`
        `                      relexpr_function("|", list(.x, .y))`
        `                    })`
      
      body(actual$rel_translate)[124:134] vs body(expected$rel_translate)[131:149]
        `                  }`
        `                }`
        `                args <- map(as.list(expr[-1]), do_translate, `
        `                  in_window = in_window || window)`
      + `                if (name == "grepl") {`
      + `                  if (!inherits(args[[1]], "relational_relexpr_constant")) {`
      + `                    cli::cli_abort("Only constant patterns are supported in {.code grepl()}")`
      + `                  }`
      + `                }`
        `                fun <- relexpr_function(name, args)`
        `                if (window) {`
      and 9 more ...
      
      `environment(actual$rel_translate)` is <env:namespace:duckplyr>
      `environment(expected$rel_translate)` is <env:namespace:dplyr>
      
      `environment(actual$rel_translate_dots)` is <env:namespace:duckplyr>
      `environment(expected$rel_translate_dots)` is <env:namespace:dplyr>
      
      body(actual$rel_try)[1:6] vs body(expected$rel_try)[1:6]
        `{`
        `    call_name <- as.character(sys.call(-1)[[1]])`
      - `    if (!(call_name %in% stats$calls)) {`
      + `    if (length(call_name) == 1 && !(call_name %in% stats$calls)) {`
        `        stats$calls <- c(stats$calls, call_name)`
        `    }`
        `    stats$attempts <- stats$attempts + 1L`
      
      body(actual$rel_try)[34:43] vs body(expected$rel_try)[34:47]
        `            return()`
        `        }`
        `    }`
      - `    DBI::dbExecute(get_default_duckdb_connection(), "SET max_expression_depth TO 100")`
      - `    withr::defer({`
      - `        DBI::dbExecute(get_default_duckdb_connection(), "SET max_expression_depth TO 200")`
      - `    })`
      + `    max_expression_depth <- DBI::dbGetQuery(get_default_duckdb_connection(), `
      + `        "SELECT current_setting('max_expression_depth')")[[1]]`
      + `    if (max_expression_depth != 100) {`
      + `        DBI::dbExecute(get_default_duckdb_connection(), "SET max_expression_depth TO 100")`
      + `        withr::defer({`
      + `            DBI::dbExecute(get_default_duckdb_connection(), "SET max_expression_depth TO 200")`
      + `        })`
      and 4 more ...
      
      `environment(actual$rel_try)` is <env:namespace:duckplyr>
      `environment(expected$rel_try)` is <env:namespace:dplyr>
      
      `environment(actual$rel_union_all)` is <env:namespace:duckplyr>
      `environment(expected$rel_union_all)` is <env:namespace:dplyr>
      
      `environment(actual$rel_union_all.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_union_all.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_union_all.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_union_all.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$relexpr_constant)` is <env:namespace:duckplyr>
      `environment(expected$relexpr_constant)` is <env:namespace:dplyr>
      
      `environment(actual$relexpr_function)` is <env:namespace:duckplyr>
      `environment(expected$relexpr_function)` is <env:namespace:dplyr>
      
      `environment(actual$relexpr_reference)` is <env:namespace:duckplyr>
      `environment(expected$relexpr_reference)` is <env:namespace:dplyr>
      
      `environment(actual$relexpr_set_alias)` is <env:namespace:duckplyr>
      `environment(expected$relexpr_set_alias)` is <env:namespace:dplyr>
      
      `environment(actual$relexpr_window)` is <env:namespace:duckplyr>
      `environment(expected$relexpr_window)` is <env:namespace:dplyr>
      
        `actual$stats$attempts`: 1014
      `expected$stats$attempts`:  888
      
           actual$stats$calls       | expected$stats$calls                  
       [1] "select.duckplyr_df"     - "add_count"            [1]            
       [2] "filter.duckplyr_df"     - "mutate"               [2]            
       [3] "summarise.duckplyr_df"  - "add_count.data.frame" [3]            
       [4] "arrange.duckplyr_df"    - "mutate.data.frame"    [4]            
       [5] "inner_join.duckplyr_df" - "anti_join"            [5]            
       [6] "mutate.duckplyr_df"     - "anti_join.data.frame" [6]            
       [7] "distinct.duckplyr_df"   - "arrange"              [7]            
       [8] "left_join.duckplyr_df"  - "arrange.data.frame"   [8]            
       [9] "semi_join.duckplyr_df"  - "compute"              [9]            
      [10] "count.duckplyr_df"      - "compute.data.frame"   [10]           
       ... ...                        ...                    and 67 more ...
      
        `actual$stats$fallback`: 528
      `expected$stats$fallback`: 736
      
      `environment(actual$stats_show)` is <env:namespace:duckplyr>
      `environment(expected$stats_show)` is <env:namespace:dplyr>
      
      body(actual$tel_collect) vs body(expected$tel_collect)
        `{`
      - `    logging <- tel_fallback_logging()`
      - `    if (!isTRUE(logging) && !is.na(logging)) {`
      - `        return()`
      - `    }`
      - `    if (is.na(logging)) {`
      - `        tel_ask(call_to_json(cnd, call))`
      - `        return()`
      - `    }`
      - `    tel_record(call_to_json(cnd, call))`
      and 1 more ...
      
      `formals(actual$tel_collect)` is length 2
      `formals(expected$tel_collect)` is length 1
      
      `names(formals(actual$tel_collect))`:   "cnd" "call"
      `names(formals(expected$tel_collect))`: "..."       
      
      `environment(actual$tel_collect)` is <env:namespace:duckplyr>
      `environment(expected$tel_collect)` is <env:namespace:dplyr>
      
      `environment(actual$to_duckdb_expr)` is <env:namespace:duckplyr>
      `environment(expected$to_duckdb_expr)` is <env:namespace:dplyr>
      
      `environment(actual$to_duckdb_expr_meta)` is <env:namespace:duckplyr>
      `environment(expected$to_duckdb_expr_meta)` is <env:namespace:dplyr>
      
      `environment(actual$to_duckdb_exprs)` is <env:namespace:duckplyr>
      `environment(expected$to_duckdb_exprs)` is <env:namespace:dplyr>
      
      `environment(actual$to_duckdb_exprs_meta)` is <env:namespace:duckplyr>
      `environment(expected$to_duckdb_exprs_meta)` is <env:namespace:dplyr>
      
      [ FAIL 5 | WARN 0 | SKIP 364 | PASS 1318 ]
      Error: Test failures
      
      🛠: 1466
      🔨:  805
      🦆:  661
      add_count, anti_join, arrange, compute, count, cross_join, distinct, do, eval, filter, full_join, group_by, inner_join, intersect, left_join, mutate, mutate.data.frame, nest_join, pull, reframe, relocate, rename, rename_with, right_join, rows_append, rows_delete, rows_insert, rows_patch, rows_update, rows_upsert, rowwise, select, semi_join, setdiff, setequal, slice, slice_head, slice_sample, slice_tail, summarise, symdiff, transmute, ungroup, union_all
      
      00:00:50.016488
      Execution halted
    ```

# homologene

<details>

* Version: 1.4.68.19.3.27
* GitHub: https://github.com/oganm/homologene
* Source code: https://github.com/cran/homologene
* Date/Publication: 2019-03-28 23:10:03 UTC
* Number of recursive dependencies: 48

Run `revdepcheck::cloud_details(, "homologene")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(homologene)
      > 
      > test_check("homologene")
      [ FAIL 4 | WARN 0 | SKIP 0 | PASS 7 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test_homologene.R:5:5'): Multiple orthologues ─────────────────────
      humanOrthos$mouseGene not equal to c("Gzmd", "Gzme", "Gzmg", "Gzmf").
      Lengths differ: 0 is not 4
      ── Failure ('test_homologene.R:9:5'): Regular functionality ────────────────────
      mouse2human(c("Eno2", "Mog"))$humanGene not equal to c("ENO2", "MOG").
      Lengths differ: 0 is not 2
      ── Failure ('test_homologene.R:49:5'): Detached behaviour ──────────────────────
      homologene::mouse2human(c("Eno2", "Mog"))$humanGene not equal to c("ENO2", "MOG").
      Lengths differ: 0 is not 2
      ── Error ('test_utilities.R:32:5'): automatic matching ─────────────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'Gzmf' to INT32
      Backtrace:
           ▆
        1. ├─homologene::autoTranslate(inGenes, targetGenes, returnAllPossible = TRUE) at test_utilities.R:32:5
        2. │ └─... %>% dplyr::group_by(Taxonomy)
        3. ├─dplyr::group_by(., Taxonomy)
        4. └─dplyr:::group_by.data.frame(., Taxonomy)
        5.   └─dplyr::group_by(.data, ..., .add = .add, .drop = .drop)
        6.     └─dplyr::grouped_df(groups$data, groups$group_names, .drop)
        7.       └─dplyr:::compute_groups(data, vars, drop = drop)
        8.         ├─tibble::as_tibble(data)
        9.         └─tibble:::as_tibble.data.frame(data)
       10.           └─base::nrow(x)
       11.             ├─base::dim(x)
       12.             └─base::dim.data.frame(x)
       13.               └─base::.row_names_info(x, 2L)
      
      [ FAIL 4 | WARN 0 | SKIP 0 | PASS 7 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.2Mb
      sub-directories of 1Mb or more:
        data   6.1Mb
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
      
          filter
      
      > 
      > test_check("iNZightTools")
      Loading required package: grid
      Loading required package: Matrix
      Loading required package: survival
      
      Attaching package: 'survey'
      
      The following object is masked from 'package:graphics':
      
          dotchart
      
      Loading required package: surveyspec
      
      Attaching package: 'magrittr'
      
      The following objects are masked from 'package:testthat':
      
          equals, is_less_than, not
      
      [ FAIL 1 | WARN 0 | SKIP 4 | PASS 397 ]
      
      ══ Skipped tests (4) ═══════════════════════════════════════════════════════════
      • On CRAN (4): 'test_smart_read.R:29:5', 'test_smart_read.R:259:5',
        'test_survey_design.R:80:5', 'test_survey_design.R:120:5'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test_join_data.R:16:5'): Auto detection works ─────────────────────
      `join_data(iris, iris)` did not throw the expected warning.
      
      [ FAIL 1 | WARN 0 | SKIP 4 | PASS 397 ]
      Error: Test failures
      Execution halted
    ```

# linelist

<details>

* Version: 1.1.3
* GitHub: https://github.com/epiverse-trace/linelist
* Source code: https://github.com/cran/linelist
* Date/Publication: 2024-04-21 20:42:40 UTC
* Number of recursive dependencies: 59

Run `revdepcheck::cloud_details(, "linelist")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(linelist)
      > 
      > test_results <- as.data.frame(test_check("linelist"))
      Starting 2 test processes
      [ FAIL 0 | WARN 2 | SKIP 9 | PASS 133 ]
      
      ══ Skipped tests (9) ═══════════════════════════════════════════════════════════
      • On CRAN (9): 'test-deprecated.R:5:3', 'test-deprecated.R:13:3',
        'test-deprecated.R:19:3', 'test-deprecated.R:27:3',
        'test-compat-dplyr.R:58:3', 'test-compat-dplyr.R:70:3',
        'test-compat-dplyr.R:139:3', 'test-print.R:3:3', 'test-validate_types.R:26:3'
      
      [ FAIL 0 | WARN 2 | SKIP 9 | PASS 133 ]
      > 
      > if (any(test_results$warning > 0) && Sys.getenv("NOT_CRAN", FALSE)) {
      +   stop("tests failed with warnings")
      + }
      Error in any(test_results$warning > 0) && Sys.getenv("NOT_CRAN", FALSE) : 
        invalid 'y' type in 'x && y'
      Execution halted
    ```

## In both

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘linelist.Rmd’
      ...
    
    > lost_tags_action("error")
    Lost tags will now issue an error.
    
    > x %>% select(1:2, has_tag("gender"))
    
      When sourcing ‘linelist.R’:
    Error: The following tags have lost their variable:
     date_onset:date_of_prodrome, date_death:date_of_death, age:age
    Execution halted
    
      ‘compat-dplyr.Rmd’ using ‘UTF-8’... OK
      ‘design-principles.Rmd’ using ‘UTF-8’... OK
      ‘linelist.Rmd’ using ‘UTF-8’... failed
      ‘software-permissions.Rmd’ using ‘UTF-8’... OK
    ```

# MixviR

<details>

* Version: 3.5.0
* GitHub: https://github.com/mikesovic/MixviR
* Source code: https://github.com/cran/MixviR
* Date/Publication: 2022-10-22 22:17:49 UTC
* Number of recursive dependencies: 105

Run `revdepcheck::cloud_details(, "MixviR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘MixviR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: create_ref
    > ### Title: Create MixVir-formatted reference genome object
    > ### Aliases: create_ref
    > ### Keywords: reference
    > 
    > ### ** Examples
    > 
    > site1 <- "https://raw.githubusercontent.com/mikesovic/MixviR/main/raw_files/GCF_ASM985889v3.fa"
    > site2 <- "https://raw.githubusercontent.com/mikesovic/MixviR/main/raw_files/sars_cov2_genes.bed"
    > 
    > if (httr::http_error(site1) | httr::http_error(site2)) {
    +      message("No internet connection or data source broken.") 
    +      return(NULL)
    + } else { 
    + create_ref(
    +  genome = site1,
    +  feature.bed = site2,
    +  code.num = "1")
    + }
    Rows: 12 Columns: 6
    ── Column specification ────────────────────────────────────────────────────────
    Delimiter: "\t"
    chr (4): X1, X4, X5, X6
    dbl (2): X2, X3
    
    ℹ Use `spec()` to retrieve the full column specification for this data.
    ℹ Specify the column types or set `show_col_types = FALSE` to quiet this message.
    trying URL 'https://raw.githubusercontent.com/mikesovic/MixviR/main/raw_files/GCF_ASM985889v3.fa'
    Content type 'text/plain; charset=utf-8' length 30290 bytes (29 KB)
    ==================================================
    downloaded 29 KB
    
    Warning: Returning more (or less) than 1 row per `summarise()` group was deprecated in
    dplyr 1.1.0.
    ℹ Please use `reframe()` instead.
    ℹ When switching from `summarise()` to `reframe()`, remember that `reframe()`
      always returns an ungrouped data frame and adjust accordingly.
    ℹ The deprecated feature was likely used in the MixviR package.
      Please report the issue at <https://groups.google.com/g/mixvir>.
    Error in `dplyr::bind_rows()`:
    ! Can't combine `..1$REF_CODON` <integer> and `..2$REF_CODON` <character>.
    Backtrace:
         ▆
      1. ├─MixviR::create_ref(genome = site1, feature.bed = site2, code.num = "1")
      2. │ ├─... %>% dplyr::arrange(CHR, POS)
      3. │ └─dplyr::bind_rows(nonfeature_positions, feature_positions)
      4. │   └─vctrs::vec_rbind(!!!dots, .names_to = .id, .error_call = current_env())
      5. ├─dplyr::arrange(., CHR, POS)
      6. └─vctrs (local) `<fn>`()
      7.   └─vctrs::vec_default_ptype2(...)
      8.     ├─base::withRestarts(...)
      9.     │ └─base (local) withOneRestart(expr, restarts[[1L]])
     10.     │   └─base (local) doWithOneRestart(return(expr), restart)
     11.     └─vctrs::stop_incompatible_type(...)
     12.       └─vctrs:::stop_incompatible(...)
     13.         └─vctrs:::stop_vctrs(...)
     14.           └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call)
    Execution halted
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
    #   gs_geoid <chr>, gs_exact_source <chr>, gs_url <chr>, gs_description <chr>,
    #   taxon_id <int>, ortholog_sources <chr>, num_ortholog_sources <dbl>
    
    > cgp_gene_sets = msigdbr(species = "mouse", category = "C2", 
    +     subcategory = "CGP")
    
    > head(cgp_gene_sets)
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

# omopgenerics

<details>

* Version: 0.2.0
* GitHub: NA
* Source code: https://github.com/cran/omopgenerics
* Date/Publication: 2024-04-30 13:12:39 UTC
* Number of recursive dependencies: 68

Run `revdepcheck::cloud_details(, "omopgenerics")` for more info

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
      > 
      > library(testthat)
      > library(omopgenerics)
      
      Attaching package: 'omopgenerics'
      
      The following object is masked from 'package:stats':
      
          filter
      
      > 
      > test_check("omopgenerics")
      Starting 2 test processes
      [ FAIL 1 | WARN 66 | SKIP 0 | PASS 600 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-classCdmReference.R:95:3'): test assign and extract from cdm object ──
      Expected `summary(emptyCdmReference("test"))` to run without any warnings.
      i Actually got a <simpleWarning> with text:
        Calling 'structure(NULL, *)' is deprecated, as NULL cannot have attributes.
          Consider 'structure(list(), *)' instead.
      
      [ FAIL 1 | WARN 66 | SKIP 0 | PASS 600 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘a02_concept_set.Rmd’
      ...
    - asthma (1 codes)
    
    > condition_codes <- list(c(201820, 4087682, 3655269))
    
    > newCodelist(condition_codes)
    
      When sourcing ‘a02_concept_set.R’:
    Error: x must be a list; it can not contain NA; it can not be NULL; it has to
    be named; elements must have class: numeric, integer.
    Execution halted
    
      ‘a01_cdm_reference.Rmd’ using ‘UTF-8’... OK
      ‘a02_concept_set.Rmd’ using ‘UTF-8’... failed
      ‘a03_cohort_table.Rmd’ using ‘UTF-8’... OK
      ‘a04_summarised_result.Rmd’ using ‘UTF-8’... OK
      ‘reexport.Rmd’ using ‘UTF-8’... OK
    ```

# partition

<details>

* Version: 0.2.0
* GitHub: https://github.com/USCbiostats/partition
* Source code: https://github.com/cran/partition
* Date/Publication: 2024-01-24 19:20:02 UTC
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
      installed size is 16.1Mb
      sub-directories of 1Mb or more:
        doc    2.8Mb
        libs  12.0Mb
    ```

# PublicWorksFinanceIT

<details>

* Version: 0.2.0
* GitHub: NA
* Source code: https://github.com/cran/PublicWorksFinanceIT
* Date/Publication: 2024-03-07 10:30:06 UTC
* Number of recursive dependencies: 87

Run `revdepcheck::cloud_details(, "PublicWorksFinanceIT")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘PublicWorksFinanceIT-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: merge_data
    > ### Title: Merging the three financial datasets
    > ### Aliases: merge_data
    > 
    > ### ** Examples
    > 
    > data(OCpoint)
    > data(OBDAPpoint)
    > data(RENDISpoint)
    > data_all <- merge_data(RENDISpoint, OBDAPpoint, OCpoint)
    Error in `dplyr::bind_rows()`:
    ! Can't combine `..1$FeasibilityStudyStartingDate` <character> and `..2$FeasibilityStudyStartingDate` <integer>.
    Backtrace:
         ▆
      1. ├─PublicWorksFinanceIT::merge_data(RENDISpoint, OBDAPpoint, OCpoint)
      2. │ └─dplyr::bind_rows(data_OC, data_OBDAP, data_RENDIS)
      3. │   └─vctrs::vec_rbind(!!!dots, .names_to = .id, .error_call = current_env())
      4. └─vctrs (local) `<fn>`()
      5.   └─vctrs::vec_default_ptype2(...)
      6.     ├─base::withRestarts(...)
      7.     │ └─base (local) withOneRestart(expr, restarts[[1L]])
      8.     │   └─base (local) doWithOneRestart(return(expr), restart)
      9.     └─vctrs::stop_incompatible_type(...)
     10.       └─vctrs:::stop_incompatible(...)
     11.         └─vctrs:::stop_vctrs(...)
     12.           └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call)
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 13.1Mb
      sub-directories of 1Mb or more:
        data  12.9Mb
    ```

# recipes

<details>

* Version: 1.0.10
* GitHub: https://github.com/tidymodels/recipes
* Source code: https://github.com/cran/recipes
* Date/Publication: 2024-02-18 18:00:02 UTC
* Number of recursive dependencies: 139

Run `revdepcheck::cloud_details(, "recipes")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(recipes)
      Loading required package: dplyr
      
      Attaching package: 'dplyr'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      The following objects are masked from 'package:stats':
      
          filter, lag
      
      The following objects are masked from 'package:base':
      
          intersect, setdiff, setequal, union
      
      
      Attaching package: 'recipes'
      
      The following object is masked from 'package:stats':
      
          step
      
      > 
      > test_check("recipes")
      
      Attaching package: 'purrr'
      
      The following object is masked from 'package:testthat':
      
          is_null
      
      1 package (fastICA) is needed for this step but is not installed.
      To install run: `install.packages("fastICA")`
      1 package (dimRed) is needed for this step but is not installed.
      To install run: `install.packages("dimRed")`
      1 package (dimRed) is needed for this step but is not installed.
      To install run: `install.packages("dimRed")`
      1 package (dimRed) is needed for this step but is not installed.
      To install run: `install.packages("dimRed")`
      1 package (dimRed) is needed for this step but is not installed.
      To install run: `install.packages("dimRed")`
      1 package (dimRed) is needed for this step but is not installed.
      To install run: `install.packages("dimRed")`
      1 package (mixOmics) is needed for this step but is not installed.
      To install run: `install.packages("mixOmics")`
      1 package (mixOmics) is needed for this step but is not installed.
      To install run: `install.packages("mixOmics")`
      1 package (mixOmics) is needed for this step but is not installed.
      To install run: `install.packages("mixOmics")`
      1 package (mixOmics) is needed for this step but is not installed.
      To install run: `install.packages("mixOmics")`
      1 package (mixOmics) is needed for this step but is not installed.
      To install run: `install.packages("mixOmics")`
      1 package (mixOmics) is needed for this step but is not installed.
      To install run: `install.packages("mixOmics")`
      [ FAIL 1 | WARN 2 | SKIP 479 | PASS 2119 ]
      
      ══ Skipped tests (479) ═════════════════════════════════════════════════════════
      • On CRAN (443): 'test-BoxCox.R:77:3', 'test-BoxCox.R:83:3',
        'test-BoxCox.R:111:3', 'test-BoxCox.R:148:3', 'test-YeoJohnson.R:89:3',
        'test-YeoJohnson.R:112:3', 'test-YeoJohnson.R:149:3', 'test-arrange.R:76:3',
        'test-arrange.R:113:3', 'test-basics.R:19:3', 'test-basics.R:50:3',
        'test-basics.R:116:3', 'test-basics.R:157:3', 'test-basics.R:185:3',
        'test-basics.R:201:3', 'test-basics.R:265:3', 'test-basics.R:291:3',
        'test-basics.R:303:3', 'test-basics.R:333:3', 'test-basics.R:344:3',
        'test-bin2factor.R:47:3', 'test-bin2factor.R:86:3',
        'test-bin2factor.R:123:3', 'test-bs.R:79:3', 'test-bs.R:130:3',
        'test-bs.R:195:3', 'test-bs.R:209:3', 'test-case-weight-functions.R:144:3',
        'test-case-weight-functions.R:158:3', 'test-center.R:94:3',
        'test-center.R:115:3', 'test-center.R:139:3', 'test-center.R:176:3',
        'test-class.R:19:3', 'test-class.R:38:3', 'test-class.R:53:3',
        'test-class.R:102:3', 'test-class.R:133:3', 'test-class.R:170:3',
        'test-classdist.R:87:3', 'test-classdist.R:171:3', 'test-classdist.R:192:3',
        'test-classdist.R:264:3', 'test-classdist.R:279:3',
        'test-classdist_shrunken.R:84:3', 'test-classdist_shrunken.R:180:3',
        'test-classdist_shrunken.R:259:3', 'test-colcheck.R:38:3',
        'test-colcheck.R:163:3', 'test-colcheck.R:200:3', 'test-corr.R:41:3',
        'test-corr.R:56:3', 'test-corr.R:104:3', 'test-corr.R:147:3',
        'test-corr.R:185:3', 'test-count.R:49:3', 'test-count.R:64:3',
        'test-count.R:93:3', 'test-count.R:161:3', 'test-count.R:175:3',
        'test-cut.R:4:3', 'test-cut.R:31:3', 'test-cut.R:193:3', 'test-cut.R:230:3',
        'test-date.R:98:3', 'test-date.R:201:3', 'test-date.R:271:3',
        'test-date.R:285:3', 'test-depth.R:105:3', 'test-depth.R:174:3',
        'test-depth.R:189:3', 'test-discretize.R:45:3', 'test-discretize.R:49:3',
        'test-discretize.R:126:3', 'test-discretize.R:142:3',
        'test-discretize.R:191:3', 'test-discretize.R:228:3', 'test-dummy.R:72:3',
        'test-dummy.R:79:3', 'test-dummy.R:160:3', 'test-dummy.R:182:3',
        'test-dummy.R:217:3', 'test-dummy.R:286:3', 'test-dummy.R:308:3',
        'test-dummy.R:321:3', 'test-dummy.R:344:3', 'test-dummy.R:409:3',
        'test-dummy.R:423:3', 'test-dummy_extract.R:81:3',
        'test-dummy_extract.R:228:3', 'test-dummy_extract.R:270:3',
        'test-dummy_extract.R:317:3', 'test-dummy_extract.R:384:3',
        'test-dummy_extract.R:398:3', 'test-dummy_multi_choice.R:42:3',
        'test-dummy_multi_choice.R:52:3', 'test-dummy_multi_choice.R:154:3',
        'test-dummy_multi_choice.R:219:3', 'test-dummy_multi_choice.R:233:3',
        'test-extension_check.R:2:3', 'test-extract-dials.R:62:3',
        'test-extract-dials.R:74:3', 'test-factor2string.R:28:3',
        'test-factor2string.R:52:3', 'test-factor2string.R:89:3',
        'test-filter.R:116:3', 'test-filter.R:153:3', 'test-filter_missing.R:77:3',
        'test-filter_missing.R:110:3', 'test-filter_missing.R:147:3',
        'test-format.R:68:3', 'test-formula.R:21:3', 'test-formula.R:62:3',
        'test-geodist.R:72:3', 'test-geodist.R:163:3', 'test-geodist.R:175:3',
        'test-geodist.R:242:3', 'test-geodist.R:326:3', 'test-geodist.R:343:3',
        'test-harmonic.R:25:3', 'test-harmonic.R:268:3', 'test-harmonic.R:284:3',
        'test-harmonic.R:303:3', 'test-harmonic.R:320:3', 'test-harmonic.R:399:3',
        'test-harmonic.R:446:3', 'test-harmonic.R:520:3', 'test-harmonic.R:534:3',
        'test-holiday.R:179:3', 'test-holiday.R:203:3', 'test-holiday.R:270:3',
        'test-holiday.R:284:3', 'test-hyperbolic.R:59:3', 'test-hyperbolic.R:80:3',
        'test-hyperbolic.R:122:3', 'test-impute_bag.R:90:3',
        'test-impute_bag.R:143:3', 'test-impute_bag.R:181:3',
        'test-impute_knn.R:101:3', 'test-impute_knn.R:161:3',
        'test-impute_knn.R:201:3', 'test-impute_knn.R:247:3',
        'test-impute_linear.R:62:3', 'test-impute_linear.R:109:3',
        'test-impute_linear.R:154:3', 'test-impute_linear.R:191:3',
        'test-impute_lower.R:57:3', 'test-impute_lower.R:65:3',
        'test-impute_lower.R:89:3', 'test-impute_lower.R:127:3',
        'test-impute_mean.R:82:3', 'test-impute_mean.R:99:3',
        'test-impute_mean.R:167:3', 'test-impute_mean.R:226:3',
        'test-impute_mean.R:263:3', 'test-impute_median.R:66:3',
        'test-impute_median.R:83:3', 'test-impute_median.R:106:3',
        'test-impute_median.R:148:3', 'test-impute_median.R:185:3',
        'test-impute_mode.R:68:3', 'test-impute_mode.R:94:3',
        'test-impute_mode.R:100:3', 'test-impute_mode.R:124:3',
        'test-impute_mode.R:166:3', 'test-impute_mode.R:203:3',
        'test-impute_roll.R:73:3', 'test-impute_roll.R:96:3',
        'test-impute_roll.R:135:3', 'test-impute_roll.R:173:3',
        'test-indicate_na.R:95:3', 'test-indicate_na.R:118:3',
        'test-indicate_na.R:183:3', 'test-indicate_na.R:197:3',
        'test-integer.R:98:3', 'test-integer.R:135:3', 'test-interact.R:173:3',
        'test-interact.R:291:3', 'test-interact.R:298:3', 'test-interact.R:363:3',
        'test-interact.R:377:3', 'test-intercept.R:35:3', 'test-intercept.R:61:3',
        'test-intercept.R:97:3', 'test-inverse.R:56:3', 'test-inverse.R:93:3',
        'test-invlogit.R:47:3', 'test-invlogit.R:83:3', 'test-isomap.R:41:3',
        'test-isomap.R:66:3', 'test-isomap.R:91:3', 'test-isomap.R:110:3',
        'test-isomap.R:147:3', 'test-isomap.R:169:3', 'test-isomap.R:203:3',
        'test-isomap.R:238:3', 'test-isomap.R:262:3', 'test-kpca.R:51:3',
        'test-kpca.R:74:3', 'test-kpca.R:111:3', 'test-kpca.R:178:3',
        'test-kpca.R:194:3', 'test-kpca_poly.R:57:3', 'test-kpca_poly.R:68:3',
        'test-kpca_poly.R:121:3', 'test-kpca_poly.R:192:3', 'test-kpca_poly.R:208:3',
        'test-kpca_rbf.R:57:3', 'test-kpca_rbf.R:68:3', 'test-kpca_rbf.R:119:3',
        'test-kpca_rbf.R:186:3', 'test-kpca_rbf.R:202:3', 'test-lag.R:40:3',
        'test-lag.R:98:3', 'test-lag.R:163:3', 'test-lag.R:177:3',
        'test-lincomb.R:81:3', 'test-lincomb.R:118:3', 'test-log.R:58:3',
        'test-log.R:79:3', 'test-log.R:116:3', 'test-logit.R:45:3',
        'test-logit.R:68:3', 'test-logit.R:105:3', 'test-matrix.R:67:3',
        'test-misc.R:13:3', 'test-misc.R:29:3', 'test-misc.R:33:3',
        'test-missing.R:28:3', 'test-missing.R:35:3', 'test-missing.R:45:3',
        'test-missing.R:68:3', 'test-missing.R:105:3', 'test-mutate.R:64:3',
        'test-mutate.R:124:3', 'test-mutate.R:148:3', 'test-mutate_at.R:95:3',
        'test-mutate_at.R:132:3', 'test-naomit.R:54:3', 'test-naomit.R:91:3',
        'test-newvalues.R:13:3', 'test-newvalues.R:19:3', 'test-newvalues.R:29:3',
        'test-newvalues.R:39:3', 'test-newvalues.R:50:3', 'test-newvalues.R:72:3',
        'test-newvalues.R:92:3', 'test-newvalues.R:102:3', 'test-newvalues.R:131:3',
        'test-newvalues.R:137:3', 'test-newvalues.R:143:3', 'test-newvalues.R:149:3',
        'test-newvalues.R:155:3', 'test-newvalues.R:176:3', 'test-newvalues.R:213:3',
        'test-nomial_types.R:140:3', 'test-nomial_types.R:157:3',
        'test-nomial_types.R:173:3', 'test-normalize.R:68:3',
        'test-normalize.R:100:3', 'test-normalize.R:122:3', 'test-normalize.R:148:3',
        'test-normalize.R:173:3', 'test-normalize.R:215:3', 'test-novel.R:79:3',
        'test-novel.R:117:3', 'test-novel.R:154:3', 'test-ns.R:81:3',
        'test-ns.R:132:3', 'test-ns.R:197:3', 'test-ns.R:211:3',
        'test-num2factor.R:38:3', 'test-num2factor.R:67:3',
        'test-num2factor.R:104:3', 'test-nzv.R:64:3', 'test-nzv.R:71:3',
        'test-nzv.R:120:3', 'test-nzv.R:195:3', 'test-nzv.R:232:3',
        'test-ordinalscore.R:69:3', 'test-ordinalscore.R:94:3',
        'test-ordinalscore.R:131:3', 'test-other.R:247:3', 'test-other.R:280:5',
        'test-other.R:357:3', 'test-other.R:402:3', 'test-other.R:439:3',
        'test-pca.R:82:3', 'test-pca.R:132:3', 'test-pca.R:157:3',
        'test-pca.R:167:3', 'test-pca.R:213:3', 'test-pca.R:273:3',
        'test-pca.R:343:3', 'test-pca.R:358:3', 'test-percentile.R:142:3',
        'test-percentile.R:187:3', 'test-percentile.R:245:3',
        'test-percentile.R:287:3', 'test-pkg_check.R:2:3', 'test-pls.R:242:3',
        'test-pls.R:293:3', 'test-pls_old.R:29:3', 'test-poly.R:71:3',
        'test-poly.R:135:3', 'test-poly.R:200:3', 'test-poly.R:215:3',
        'test-poly_bernstein.R:82:3', 'test-poly_bernstein.R:129:3',
        'test-poly_bernstein.R:199:3', 'test-profile.R:73:3', 'test-profile.R:138:3',
        'test-profile.R:173:3', 'test-range.R:182:3', 'test-range.R:188:3',
        'test-range.R:213:3', 'test-range.R:250:3', 'test-range_check.R:7:3',
        'test-range_check.R:18:3', 'test-range_check.R:50:3',
        'test-range_check.R:81:3', 'test-range_check.R:118:3', 'test-ratio.R:118:3',
        'test-ratio.R:142:3', 'test-ratio.R:166:3', 'test-ratio.R:231:3',
        'test-ratio.R:245:3', 'test-regex.R:41:3', 'test-regex.R:56:3',
        'test-regex.R:83:3', 'test-regex.R:150:3', 'test-regex.R:164:3',
        'test-relevel.R:25:3', 'test-relevel.R:66:3', 'test-relevel.R:103:3',
        'test-relu.R:68:3', 'test-relu.R:110:3', 'test-relu.R:152:3',
        'test-rename.R:63:3', 'test-rename.R:100:3', 'test-rename_at.R:36:3',
        'test-rename_at.R:64:3', 'test-rename_at.R:101:3', 'test-retraining.R:28:3',
        'test-rm.R:76:3', 'test-rm.R:183:3', 'test-rm.R:220:3', 'test-roles.R:41:3',
        'test-roles.R:171:3', 'test-roles.R:195:3', 'test-roles.R:217:3',
        'test-roles.R:226:3', 'test-roles.R:234:3', 'test-roles.R:246:3',
        'test-roles.R:338:3', 'test-roles.R:370:3', 'test-roles.R:522:3',
        'test-roles.R:569:3', 'test-sample.R:72:3', 'test-sample.R:125:3',
        'test-sample.R:151:3', 'test-sample.R:181:3', 'test-scale.R:67:3',
        'test-scale.R:91:3', 'test-scale.R:117:3', 'test-scale.R:124:3',
        'test-scale.R:141:3', 'test-scale.R:177:3', 'test-scale.R:214:3',
        'test-select.R:125:3', 'test-select.R:152:3', 'test-select.R:182:3',
        'test-selections.R:130:3', 'test-shuffle.R:68:3', 'test-shuffle.R:90:3',
        'test-shuffle.R:127:3', 'test-skipping.R:18:3', 'test-slice.R:88:3',
        'test-slice.R:111:3', 'test-slice.R:148:3', 'test-sparsity.R:66:3',
        'test-spatialsign.R:73:3', 'test-spatialsign.R:111:3',
        'test-spatialsign.R:151:3', 'test-spline_b.R:83:3', 'test-spline_b.R:142:3',
        'test-spline_b.R:212:3', 'test-spline_convex.R:83:3',
        'test-spline_convex.R:142:3', 'test-spline_convex.R:212:3',
        'test-spline_monotone.R:83:3', 'test-spline_monotone.R:142:3',
        'test-spline_monotone.R:212:3', 'test-spline_natural.R:83:3',
        'test-spline_natural.R:142:3', 'test-spline_natural.R:212:3',
        'test-spline_nonnegative.R:83:3', 'test-spline_nonnegative.R:142:3',
        'test-spline_nonnegative.R:212:3', 'test-sqrt.R:38:3', 'test-sqrt.R:75:3',
        'test-string2factor.R:39:3', 'test-string2factor.R:84:3',
        'test-string2factor.R:121:3', 'test-stringsAsFactors.R:27:3',
        'test-stringsAsFactors.R:42:3', 'test-tidy.R:36:3', 'test-tidy.R:70:3',
        'test-tidy.R:83:3', 'test-time.R:104:3', 'test-time.R:134:3',
        'test-time.R:209:3', 'test-time.R:228:3', 'test-unknown.R:34:3',
        'test-unknown.R:59:3', 'test-unknown.R:101:3', 'test-unknown.R:138:3',
        'test-unorder.R:29:3', 'test-unorder.R:51:3', 'test-unorder.R:88:3',
        'test-update-role-requirements.R:9:3',
        'test-update-role-requirements.R:37:3',
        'test-update-role-requirements.R:46:3',
        'test-update-role-requirements.R:55:3',
        'test-update-role-requirements.R:77:3',
        'test-update-role-requirements.R:117:3',
        'test-update-role-requirements.R:140:3',
        'test-update-role-requirements.R:171:3',
        'test-update-role-requirements.R:185:3',
        'test-update-role-requirements.R:198:3',
        'test-update-role-requirements.R:247:3',
        'test-update-role-requirements.R:270:3',
        'test-update-role-requirements.R:290:3',
        'test-update-role-requirements.R:305:3', 'test-update.R:13:3',
        'test-update.R:21:3', 'test-window.R:16:3', 'test-window.R:140:3',
        'test-window.R:165:3', 'test-window.R:237:3', 'test-window.R:251:3',
        'test-zv.R:99:3', 'test-zv.R:139:3'
      • RcppML cannot be loaded (9): 'test-nnmf_sparse.R:2:3',
        'test-nnmf_sparse.R:18:3', 'test-nnmf_sparse.R:33:3',
        'test-nnmf_sparse.R:48:3', 'test-nnmf_sparse.R:61:3',
        'test-nnmf_sparse.R:76:3', 'test-nnmf_sparse.R:96:3',
        'test-nnmf_sparse.R:124:3', 'test-nnmf_sparse.R:142:3'
      • dimRed cannot be loaded (12): 'test-ica.R:38:3', 'test-ica.R:79:3',
        'test-ica.R:96:3', 'test-ica.R:113:3', 'test-ica.R:143:3',
        'test-ica.R:162:3', 'test-ica.R:177:3', 'test-ica.R:194:3',
        'test-ica.R:216:3', 'test-ica.R:246:3', 'test-ica.R:266:3',
        'test-ica.R:281:3'
      • mixOmics cannot be loaded (15): 'test-pls.R:32:3', 'test-pls.R:51:3',
        'test-pls.R:70:3', 'test-pls.R:90:3', 'test-pls.R:111:3', 'test-pls.R:130:3',
        'test-pls.R:139:3', 'test-pls.R:159:3', 'test-pls.R:170:3',
        'test-pls.R:190:3', 'test-pls.R:226:3', 'test-pls.R:277:3',
        'test-pls.R:332:3', 'test-pls.R:359:3', 'test-pls.R:376:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-impute_linear.R:44:3'): All NA values ────────────────────────
      unname(imputed_te$Lot_Frontage) (`actual`) not equal to `lm_predicted` (`expected`).
      
           actual   | expected                  
       [1] 109.0000 - 108.6459 [1]              
       [2] 73.0000  - 72.6421  [2]              
       [3] 77.0000  - 77.3687  [3]              
       [4] 72.0000  - 71.8165  [4]              
       [5] 77.0000  - 76.5877  [5]              
       [6] 70.0000  - 69.7043  [6]              
       [7] 61.0000  - 60.6659  [7]              
       [8] 61.0000  - 60.8178  [8]              
       [9] 62.0000  - 61.5040  [9]              
      [10] 65.0000  - 65.2762  [10]             
       ... ...        ...      and 2920 more ...
      
      [ FAIL 1 | WARN 2 | SKIP 479 | PASS 2119 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘Roles.Rmd’
      ...
    6 nitrogen <chr [2]> predictor original
    7 sulfur   <chr [2]> predictor original
    8 HHV      <chr [2]> outcome   original
    
    > recipe(HHV ~ ., data = biomass) %>% update_role(sample, 
    +     new_role = NA)
    
      When sourcing ‘Roles.R’:
    Error: `new_role` must not be `NA`.
    Execution halted
    
      ‘Dummies.Rmd’ using ‘UTF-8’... OK
      ‘Ordering.Rmd’ using ‘UTF-8’... OK
      ‘Roles.Rmd’ using ‘UTF-8’... failed
      ‘Selecting_Variables.Rmd’ using ‘UTF-8’... OK
      ‘Skipping.Rmd’ using ‘UTF-8’... OK
      ‘recipes.Rmd’ using ‘UTF-8’... OK
    ```

*   checking Rd cross-references ... NOTE
    ```
    Packages unavailable to check Rd xrefs: ‘fastICA’, ‘dimRed’
    ```

# rfars

<details>

* Version: 1.2.0
* GitHub: https://github.com/s87jackson/rfars
* Source code: https://github.com/cran/rfars
* Date/Publication: 2024-04-06 04:40:02 UTC
* Number of recursive dependencies: 147

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
    Killed
    
    ... incomplete output.  Crash?
    when running code in ‘Crash_sequence_of_events.Rmd’
      ...
    Content type 'application/x-zip-compressed' length 66718214 bytes (63.6 MB)
    ==================================================
    downloaded 63.6 MB
    
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
    trying URL 'https://static.nhtsa.gov/nhtsa/downloads/CRSS/2021/CRSS2021SAS.zip'
    Content type 'application/x-zip-compressed' length 66718214 bytes (63.6 MB)
    ==================================================
    downloaded 63.6 MB
    
    Killed
    --- re-building ‘Searchable_Codebooks.Rmd’ using rmarkdown
    --- finished re-building ‘Searchable_Codebooks.Rmd’
    
    SUMMARY: processing the following files failed:
      ‘Counts.Rmd’ ‘Crash_sequence_of_events.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
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
      
      -- Exact matching 7 names --
      
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      ! No author information supplied - matching on taxon name only
      
      -- Exact matching  names --
      
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      
      -- Exact matching 7 names --
      
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `genus`, `species`, `infra_rank`, and `infra` columns
      ! No author information supplied - matching on taxon name only
      
      -- Exact matching  names --
      
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      
      -- Exact matching 7 names --
      
      i No area specified. Generating global summary.
      i Aggregating occurrence types across input area ("the world") - see `?wcvp_summary()` for details.
      i No area specified. Generating global summary.
      i Matches to input geography found at Continent (Level 1)
      i Aggregating occurrence types across input area ("ASIA-TROPICAL") - see `?wcvp_summary()` for details.
      [ FAIL 12 | WARN 0 | SKIP 0 | PASS 19 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-exact_match.R:2:3'): exact match with author returns expected output ──
      Error: Error evaluating duckdb query: Invalid Input Error: Invalid unicode (byte sequence mismatch) detected in value construction
      Backtrace:
           ▆
        1. ├─rWCVP::wcvp_match_exact(...) at test-exact_match.R:2:3
        2. │ └─... %>% select(-"n")
        3. ├─dplyr::select(., -"n")
        4. ├─dplyr::mutate(., multiple_matches = .data$n > 1)
        5. ├─dplyr::add_count(., .data[[id_col]])
        6. ├─dplyr::mutate(...)
        7. └─dplyr:::mutate.data.frame(...)
        8.   └─dplyr::mutate(...)
        9.     └─dplyr:::compute_by(...)
       10.       ├─dplyr::group_data(data)
       11.       ├─dplyr:::group_data.tbl_df(data)
       12.       ├─base::NextMethod()
       13.       └─dplyr:::group_data.data.frame(data)
       14.         └─base::nrow(.data)
       15.           ├─base::dim(x)
       16.           └─base::dim.data.frame(x)
       17.             └─base::.row_names_info(x, 2L)
      ── Error ('test-exact_match.R:11:3'): exact match without author returns expected output ──
      Error: Error evaluating duckdb query: Invalid Input Error: Invalid unicode (byte sequence mismatch) detected in value construction
      Backtrace:
           ▆
        1. ├─rWCVP::wcvp_match_exact(...) at test-exact_match.R:11:3
        2. │ └─... %>% select(-"n")
        3. ├─dplyr::select(., -"n")
        4. ├─dplyr::mutate(., multiple_matches = .data$n > 1)
        5. ├─dplyr::add_count(., .data[[id_col]])
        6. ├─dplyr::mutate(...)
        7. └─dplyr:::mutate.data.frame(...)
        8.   └─dplyr::mutate(...)
        9.     └─dplyr:::compute_by(...)
       10.       ├─dplyr::group_data(data)
       11.       ├─dplyr:::group_data.tbl_df(data)
       12.       ├─base::NextMethod()
       13.       └─dplyr:::group_data.data.frame(data)
       14.         └─base::nrow(.data)
       15.           ├─base::dim(x)
       16.           └─base::dim.data.frame(x)
       17.             └─base::.row_names_info(x, 2L)
      ── Error ('test-fuzzy_match.R:4:3'): edit match returns name within correct distance ──
      Error in `nchar(str2)`: invalid multibyte string, element 8
      Backtrace:
          ▆
       1. └─rWCVP:::edit_match_name_(name, lookup_data) at test-fuzzy_match.R:4:3
       2.   └─RecordLinkage::levenshteinSim(name, genus_lookup$taxon_name)
       3.     └─base::pmax(nchar(str1), nchar(str2))
      ── Error ('test-fuzzy_match.R:12:3'): edit match returns name within correct distance when genus mispelled ──
      Error in `nchar(str2)`: invalid multibyte string, element 8
      Backtrace:
          ▆
       1. └─rWCVP:::edit_match_name_(name, lookup_data) at test-fuzzy_match.R:12:3
       2.   └─RecordLinkage::levenshteinSim(name, genus_lookup$taxon_name)
       3.     └─base::pmax(nchar(str1), nchar(str2))
      ── Error ('test-fuzzy_match.R:18:3'): edit match returns expected output ───────
      <dplyr:::mutate_error/rlang_error/error/condition>
      Error in `mutate(.data, ..., .by = {
          {
              .by
          }
      }, .keep = .keep, .before = {
          {
              .before
          }
      }, .after = {
          {
              .after
          }
      })`: i In argument: `match_info = map(...)`.
      Caused by error in `map()`:
      i In index: 1.
      Caused by error in `nchar()`:
      ! invalid multibyte string, element 8
      ── Error ('test-fuzzy_match.R:27:3'): phonetic match returns expected output ───
      <dplyr:::mutate_error/rlang_error/error/condition>
      Error in `mutate(.data, ..., .by = {
          {
              .by
          }
      }, .keep = .keep, .before = {
          {
              .before
          }
      }, .after = {
          {
              .after
          }
      })`: i In argument: `match_similarity = levenshteinSim(.data$sanitised_, .data$taxon_name)`.
      Caused by error in `nchar()`:
      ! invalid multibyte string, element 7
      Backtrace:
           ▆
        1. ├─rWCVP::phonetic_match(match_data, lookup_data, name_col = "scientificName") at test-fuzzy_match.R:27:3
        2. │ └─... %>% ungroup()
        3. ├─dplyr::ungroup(.)
        4. ├─dplyr::mutate(...)
        5. ├─dplyr::rowwise(.)
        6. ├─dplyr::mutate(...)
        7. ├─dplyr:::mutate.data.frame(...)
        8. │ └─dplyr::mutate(...)
        9. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
       10. │     ├─base::withCallingHandlers(...)
       11. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
       12. │       └─mask$eval_all_mutate(quo)
       13. │         └─dplyr (local) eval()
       14. ├─RecordLinkage::levenshteinSim(.data$sanitised_, .data$taxon_name)
       15. │ └─base::pmax(nchar(str1), nchar(str2))
       16. └─base::.handleSimpleError(...)
       17.   └─dplyr (local) h(simpleError(msg, call))
       18.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
      ── Error ('test-fuzzy_match.R:36:3'): fuzzy match returns expected output ──────
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_fuzzy(match_data, lookup_data, name_col = "scientificName") at test-fuzzy_match.R:36:3
       2. │ └─... %>% filter(!is.na(.data$wcvp_id))
       3. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       4. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       5.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       6.     └─base::toupper(word)
      ── Error ('test-match_names.R:2:3'): match names with author returns expected output ──
      Error: Error evaluating duckdb query: Invalid Input Error: Invalid unicode (byte sequence mismatch) detected in value construction
      Backtrace:
           ▆
        1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:2:3
        2. │ └─... %>% filter(!is.na(.data$wcvp_id))
        3. ├─dplyr::filter(., !is.na(.data$wcvp_id))
        4. ├─rWCVP::wcvp_match_exact(...)
        5. │ └─... %>% select(-"n")
        6. ├─dplyr::select(., -"n")
        7. ├─dplyr::mutate(., multiple_matches = .data$n > 1)
        8. ├─dplyr::add_count(., .data[[id_col]])
        9. ├─dplyr::mutate(...)
       10. └─dplyr:::mutate.data.frame(...)
       11.   └─dplyr::mutate(...)
       12.     └─dplyr:::compute_by(...)
       13.       ├─dplyr::group_data(data)
       14.       ├─dplyr:::group_data.tbl_df(data)
       15.       ├─base::NextMethod()
       16.       └─dplyr:::group_data.data.frame(data)
       17.         └─base::nrow(.data)
       18.           ├─base::dim(x)
       19.           └─base::dim.data.frame(x)
       20.             └─base::.row_names_info(x, 2L)
      ── Error ('test-match_names.R:16:3'): match names without author returns expected output ──
      Error: Error evaluating duckdb query: Invalid Input Error: Invalid unicode (byte sequence mismatch) detected in value construction
      Backtrace:
           ▆
        1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:16:3
        2. │ └─... %>% filter(!is.na(.data$wcvp_id))
        3. ├─dplyr::filter(., !is.na(.data$wcvp_id))
        4. ├─rWCVP::wcvp_match_exact(...)
        5. │ └─... %>% select(-"n")
        6. ├─dplyr::select(., -"n")
        7. ├─dplyr::mutate(., multiple_matches = .data$n > 1)
        8. ├─dplyr::add_count(., .data[[id_col]])
        9. ├─dplyr::mutate(...)
       10. └─dplyr:::mutate.data.frame(...)
       11.   └─dplyr::mutate(...)
       12.     └─dplyr:::compute_by(...)
       13.       ├─dplyr::group_data(data)
       14.       ├─dplyr:::group_data.tbl_df(data)
       15.       ├─base::NextMethod()
       16.       └─dplyr:::group_data.data.frame(data)
       17.         └─base::nrow(.data)
       18.           ├─base::dim(x)
       19.           └─base::dim.data.frame(x)
       20.             └─base::.row_names_info(x, 2L)
      ── Error ('test-match_names.R:30:3'): match names without fuzzy returns expected output ──
      Error: Error evaluating duckdb query: Invalid Input Error: Invalid unicode (byte sequence mismatch) detected in value construction
      Backtrace:
           ▆
        1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:30:3
        2. │ └─... %>% filter(!is.na(.data$wcvp_id))
        3. ├─dplyr::filter(., !is.na(.data$wcvp_id))
        4. ├─rWCVP::wcvp_match_exact(...)
        5. │ └─... %>% select(-"n")
        6. ├─dplyr::select(., -"n")
        7. ├─dplyr::mutate(., multiple_matches = .data$n > 1)
        8. ├─dplyr::add_count(., .data[[id_col]])
        9. ├─dplyr::mutate(...)
       10. └─dplyr:::mutate.data.frame(...)
       11.   └─dplyr::mutate(...)
       12.     └─dplyr:::compute_by(...)
       13.       ├─dplyr::group_data(data)
       14.       ├─dplyr:::group_data.tbl_df(data)
       15.       ├─base::NextMethod()
       16.       └─dplyr:::group_data.data.frame(data)
       17.         └─base::nrow(.data)
       18.           ├─base::dim(x)
       19.           └─base::dim.data.frame(x)
       20.             └─base::.row_names_info(x, 2L)
      ── Error ('test-match_names.R:44:3'): match names without taxon name parts returns expected output ──
      Error: Error evaluating duckdb query: Invalid Input Error: Invalid unicode (byte sequence mismatch) detected in value construction
      Backtrace:
           ▆
        1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:44:3
        2. │ └─... %>% filter(!is.na(.data$wcvp_id))
        3. ├─dplyr::filter(., !is.na(.data$wcvp_id))
        4. ├─rWCVP::wcvp_match_exact(...)
        5. │ └─... %>% select(-"n")
        6. ├─dplyr::select(., -"n")
        7. ├─dplyr::mutate(., multiple_matches = .data$n > 1)
        8. ├─dplyr::add_count(., .data[[id_col]])
        9. ├─dplyr::mutate(...)
       10. └─dplyr:::mutate.data.frame(...)
       11.   └─dplyr::mutate(...)
       12.     └─dplyr:::compute_by(...)
       13.       ├─dplyr::group_data(data)
       14.       ├─dplyr:::group_data.tbl_df(data)
       15.       ├─base::NextMethod()
       16.       └─dplyr:::group_data.data.frame(data)
       17.         └─base::nrow(.data)
       18.           ├─base::dim(x)
       19.           └─base::dim.data.frame(x)
       20.             └─base::.row_names_info(x, 2L)
      ── Error ('test-match_names.R:58:3'): match names returns original columns ─────
      Error: Error evaluating duckdb query: Invalid Input Error: Invalid unicode (byte sequence mismatch) detected in value construction
      Backtrace:
           ▆
        1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:58:3
        2. │ └─... %>% filter(!is.na(.data$wcvp_id))
        3. ├─dplyr::filter(., !is.na(.data$wcvp_id))
        4. ├─rWCVP::wcvp_match_exact(...)
        5. │ └─... %>% select(-"n")
        6. ├─dplyr::select(., -"n")
        7. ├─dplyr::mutate(., multiple_matches = .data$n > 1)
        8. ├─dplyr::add_count(., .data[[id_col]])
        9. ├─dplyr::mutate(...)
       10. └─dplyr:::mutate.data.frame(...)
       11.   └─dplyr::mutate(...)
       12.     └─dplyr:::compute_by(...)
       13.       ├─dplyr::group_data(data)
       14.       ├─dplyr:::group_data.tbl_df(data)
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

# scrutiny

<details>

* Version: 0.4.0
* GitHub: https://github.com/lhdjung/scrutiny
* Source code: https://github.com/cran/scrutiny
* Date/Publication: 2024-02-23 23:30:02 UTC
* Number of recursive dependencies: 86

Run `revdepcheck::cloud_details(, "scrutiny")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > 
      > 
      > library(testthat)
      > library(scrutiny)
      > 
      > test_check("scrutiny")
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 511 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-duplicate-count.R:241:3'): `duplicate_count()` works correctly with `ignore` specified ──
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'setosa' to DOUBLE
      Backtrace:
          ▆
       1. ├─iris %>% duplicate_count(ignore = 3) %>% ... at test-duplicate-count.R:241:3
       2. ├─testthat::expect_equal(., iris_exp_ignore)
       3. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       4. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       5. └─scrutiny::duplicate_count(., ignore = 3)
       6.   └─base::nrow(out)
       7.     ├─base::dim(x)
       8.     └─base::dim.data.frame(x)
       9.       └─base::.row_names_info(x, 2L)
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 511 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘consistency-tests-in-depth.Rmd’
      ...
    > knitr::opts_chunk$set(collapse = TRUE, comment = "#>")
    
    > pkgload::load_all()
    
      When sourcing ‘consistency-tests-in-depth.R’:
    Error: Could not find a root 'DESCRIPTION' file that starts with '^Package' in
    '/tmp/RtmpxrNSvB/file15b858cf3a69/vignettes'.
    ℹ Are you in your project directory and does your project have a 'DESCRIPTION'
      file?
    Execution halted
    when running code in ‘consistency-tests-simple.Rmd’
      ...
    > knitr::opts_chunk$set(collapse = TRUE, comment = "#>")
    
    > pkgload::load_all()
    
      When sourcing ‘consistency-tests-simple.R’:
    Error: Could not find a root 'DESCRIPTION' file that starts with '^Package' in
    '/tmp/RtmpAksmct/file15c375ce97fc/vignettes'.
    ℹ Are you in your project directory and does your project have a 'DESCRIPTION'
      file?
    Execution halted
    when running code in ‘debit.Rmd’
      ...
    12 0.24  6.43     34
    
    > pigs5 %>% debit_map()
    
      When sourcing ‘debit.R’:
    Error: ! DEBIT only works with binary summary data.
    ! Binary mean (`x`) values must range from 0 to 1.
    ✖ 11 out of 12 `x` values are not in that range, starting with 7.22, 4.74, and
      5.23.
    Execution halted
    when running code in ‘grim.Rmd’
      ...
    > knitr::opts_chunk$set(collapse = TRUE, comment = "#>")
    
    > pkgload::load_all()
    
      When sourcing ‘grim.R’:
    Error: Could not find a root 'DESCRIPTION' file that starts with '^Package' in
    '/tmp/RtmpjfnBh2/file15f2fb442f3/vignettes'.
    ℹ Are you in your project directory and does your project have a 'DESCRIPTION'
      file?
    Execution halted
    when running code in ‘grimmer.Rmd’
      ...
    > knitr::opts_chunk$set(collapse = TRUE, comment = "#>")
    
    > pkgload::load_all()
    
      When sourcing ‘grimmer.R’:
    Error: Could not find a root 'DESCRIPTION' file that starts with '^Package' in
    '/tmp/RtmpfhCsJO/file15fd1702d4d1/vignettes'.
    ℹ Are you in your project directory and does your project have a 'DESCRIPTION'
      file?
    Execution halted
    
      ‘consistency-tests-in-depth.Rmd’ using ‘UTF-8’... failed
      ‘consistency-tests-simple.Rmd’ using ‘UTF-8’... failed
      ‘debit.Rmd’ using ‘UTF-8’... failed
      ‘devtools.Rmd’ using ‘UTF-8’... OK
      ‘duplicates.Rmd’ using ‘UTF-8’... OK
      ‘grim.Rmd’ using ‘UTF-8’... failed
      ‘grimmer.Rmd’ using ‘UTF-8’... failed
      ‘related.Rmd’ using ‘UTF-8’... OK
      ‘rounding-in-depth.Rmd’ using ‘UTF-8’... OK
      ‘rounding-options.Rmd’ using ‘UTF-8’... OK
      ‘wrangling.Rmd’ using ‘UTF-8’... OK
    ```

*   checking Rd cross-references ... NOTE
    ```
    Packages unavailable to check Rd xrefs: ‘janitor’, ‘unheadr’, ‘validate’
    ```

# srvyr

<details>

* Version: 1.2.0
* GitHub: https://github.com/gergness/srvyr
* Source code: https://github.com/cran/srvyr
* Date/Publication: 2023-02-21 04:10:02 UTC
* Number of recursive dependencies: 101

Run `revdepcheck::cloud_details(, "srvyr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(srvyr)
      
      Attaching package: 'srvyr'
      
      The following object is masked from 'package:stats':
      
          filter
      
      > 
      > test_check("srvyr")
      [ FAIL 2 | WARN 2 | SKIP 0 | PASS 393 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_cascade.r:144:3'): cascade can fill parts - non-interacted factor and string default fill ──
      <vctrs_error_ptype2/vctrs_error_incompatible_type/vctrs_error_incompatible/vctrs_error/rlang_error/error/condition>
      Error in `dplyr::bind_rows(out)`: Can't combine `..1$awards` <character> and `..3$awards` <integer>.
      Backtrace:
           ▆
        1. ├─... %>% cascade(x = survey_mean()) at test_cascade.r:144:3
        2. ├─srvyr::cascade(., x = survey_mean())
        3. ├─srvyr:::cascade.tbl_svy(., x = survey_mean())
        4. │ └─dplyr::bind_rows(out)
        5. │   └─vctrs::vec_rbind(!!!dots, .names_to = .id, .error_call = current_env())
        6. │     └─vctrs (local) `<fn>`()
        7. │       └─vctrs (local) vec_ptype2.grouped_df.tbl_df(...)
        8. │         └─vctrs:::gdf_ptype2(x, y, ...)
        9. │           └─vctrs::df_ptype2(x, y, ...)
       10. └─vctrs (local) `<fn>`()
       11.   └─vctrs::vec_default_ptype2(...)
       12.     ├─base::withRestarts(...)
       13.     │ └─base (local) withOneRestart(expr, restarts[[1L]])
       14.     │   └─base (local) doWithOneRestart(return(expr), restart)
       15.     └─vctrs::stop_incompatible_type(...)
       16.       └─vctrs:::stop_incompatible(...)
       17.         └─vctrs:::stop_vctrs(...)
       18.           └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call)
      ── Error ('test_cascade.r:164:3'): cascade can fill parts - non-interacted factor and string with default fill ──
      <vctrs_error_ptype2/vctrs_error_incompatible_type/vctrs_error_incompatible/vctrs_error/rlang_error/error/condition>
      Error in `dplyr::bind_rows(out)`: Can't combine `..1$awards` <character> and `..4$awards` <integer>.
      Backtrace:
           ▆
        1. ├─... %>% cascade(x = survey_mean()) at test_cascade.r:164:3
        2. ├─srvyr::cascade(., x = survey_mean())
        3. ├─srvyr:::cascade.tbl_svy(., x = survey_mean())
        4. │ └─dplyr::bind_rows(out)
        5. │   └─vctrs::vec_rbind(!!!dots, .names_to = .id, .error_call = current_env())
        6. └─vctrs (local) `<fn>`()
        7.   └─vctrs::vec_default_ptype2(...)
        8.     ├─base::withRestarts(...)
        9.     │ └─base (local) withOneRestart(expr, restarts[[1L]])
       10.     │   └─base (local) doWithOneRestart(return(expr), restart)
       11.     └─vctrs::stop_incompatible_type(...)
       12.       └─vctrs:::stop_incompatible(...)
       13.         └─vctrs:::stop_vctrs(...)
       14.           └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call)
      
      [ FAIL 2 | WARN 2 | SKIP 0 | PASS 393 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘srvyr-database.Rmd’
      ...
    +     library(RSQLite)
    + })
    
    > load("acs_m.Rdata")
    Warning in readChar(con, 5L, useBytes = TRUE) :
      cannot open compressed file 'acs_m.Rdata', probable reason 'No such file or directory'
    
      When sourcing ‘srvyr-database.R’:
    Error: cannot open the connection
    Execution halted
    
      ‘extending-srvyr.Rmd’ using ‘UTF-8’... OK
      ‘srvyr-database.Rmd’ using ‘UTF-8’... failed
      ‘srvyr-vs-survey.Rmd’ using ‘UTF-8’... OK
    ```

# SwimmeR

<details>

* Version: 0.14.2
* GitHub: NA
* Source code: https://github.com/cran/SwimmeR
* Date/Publication: 2023-03-24 13:20:02 UTC
* Number of recursive dependencies: 75

Run `revdepcheck::cloud_details(, "SwimmeR")` for more info

</details>

## Newly broken

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘SwimmeR.Rmd’
      ...
    > if (SwimmeR:::is_link_broken(file_url) == TRUE) {
    +     warning("External data unavailable")
    + } else {
    +     file_read <- read_results(file_url)
    +  .... [TRUNCATED] 
    Joining with `by = join_by(Row_Numb)`
    
      When sourcing ‘SwimmeR.R’:
    Error: Can't combine `..1$Points` <character> and `..2$Points` <integer>.
    Execution halted
    
      ‘SwimmeR.Rmd’ using ‘UTF-8’... failed
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘SwimmeR.Rmd’ using rmarkdown
    
    Quitting from lines  at lines 223-234 [swim_parse_ISL] (SwimmeR.Rmd)
    Error: processing vignette 'SwimmeR.Rmd' failed with diagnostics:
    Can't combine `..1$Points` <character> and `..2$Points` <integer>.
    --- failed re-building ‘SwimmeR.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘SwimmeR.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# TKCat

<details>

* Version: 1.0.7
* GitHub: https://github.com/patzaw/TKCat
* Source code: https://github.com/cran/TKCat
* Date/Publication: 2023-02-16 14:50:03 UTC
* Number of recursive dependencies: 114

Run `revdepcheck::cloud_details(, "TKCat")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘TKCat-User-guide.Rmd’ using rmarkdown
    
    Quitting from lines  at lines 942-947 [unnamed-chunk-55] (TKCat-User-guide.Rmd)
    Error: processing vignette 'TKCat-User-guide.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Conversion Error: Could not convert string 'Condition' to INT32
    --- failed re-building ‘TKCat-User-guide.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘TKCat-User-guide.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘TKCat-User-guide.Rmd’
      ...
      collection table.x      mid.x table.y   mid.y
           <int> <chr>        <int> <chr>     <int>
    1         NA HPO_diseases     2 traitCref     1
    
    > hpo_clinvar <- merge(file_hpo, file_clinvar, by = sel_coll, 
    +     dmAutoLayout = igraph_available)
    
      When sourcing ‘TKCat-User-guide.R’:
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'Condition' to INT32
    Execution halted
    
      ‘TKCat-User-guide.Rmd’ using ‘UTF-8’... failed
    ```

# tv

<details>

* Version: 2.0.2
* GitHub: NA
* Source code: https://github.com/cran/tv
* Date/Publication: 2024-02-16 20:10:03 UTC
* Number of recursive dependencies: 54

Run `revdepcheck::cloud_details(, "tv")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(tv)
      > 
      > test_check("tv")
      
      Attaching package: 'dplyr'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      The following objects are masked from 'package:stats':
      
          filter, lag
      
      The following objects are masked from 'package:base':
      
          intersect, setdiff, setequal, union
      
      x$datetime is a Date; as such, be sure that your data is sorted in descending datetime order, so that `lvcf` picks the most recent row correctly (it picks the first row it finds).
      
      To silence this message, please specify `sort=TRUE` or `sort=FALSE`. Defaulting to `sort=FALSE`.
      x$datetime is a Date; as such, be sure that your data is sorted in descending datetime order, so that `lvcf` picks the most recent row correctly (it picks the first row it finds).
      
      To silence this message, please specify `sort=TRUE` or `sort=FALSE`. Defaulting to `sort=FALSE`.
      x$datetime is a Date; as such, be sure that your data is sorted in descending datetime order, so that `lvcf` picks the most recent row correctly (it picks the first row it finds).
      
      To silence this message, please specify `sort=TRUE` or `sort=FALSE`. Defaulting to `sort=FALSE`.
      x$datetime is a Date; as such, be sure that your data is sorted in descending datetime order, so that `lvcf` picks the most recent row correctly (it picks the first row it finds).
      
      To silence this message, please specify `sort=TRUE` or `sort=FALSE`. Defaulting to `sort=FALSE`.
      x$datetime is a Date; as such, be sure that your data is sorted in descending datetime order, so that `lvcf` picks the most recent row correctly (it picks the first row it finds).
      
      To silence this message, please specify `sort=TRUE` or `sort=FALSE`. Defaulting to `sort=FALSE`.
      x$datetime is a Date; as such, be sure that your data is sorted in descending datetime order, so that `lvcf` picks the most recent row correctly (it picks the first row it finds).
      
      To silence this message, please specify `sort=TRUE` or `sort=FALSE`. Defaulting to `sort=FALSE`.
      x$datetime is a Date; as such, be sure that your data is sorted in descending datetime order, so that `lvcf` picks the most recent row correctly (it picks the first row it finds).
      
      To silence this message, please specify `sort=TRUE` or `sort=FALSE`. Defaulting to `sort=FALSE`.
      x$datetime is a Date; as such, be sure that your data is sorted in descending datetime order, so that `lvcf` picks the most recent row correctly (it picks the first row it finds).
      
      To silence this message, please specify `sort=TRUE` or `sort=FALSE`. Defaulting to `sort=FALSE`.
      x$datetime is a Date; as such, be sure that your data is sorted in descending datetime order, so that `lvcf` picks the most recent row correctly (it picks the first row it finds).
      
      To silence this message, please specify `sort=TRUE` or `sort=FALSE`. Defaulting to `sort=FALSE`.
      x$datetime is a Date; as such, be sure that your data is sorted in descending datetime order, so that `lvcf` picks the most recent row correctly (it picks the first row it finds).
      
      To silence this message, please specify `sort=TRUE` or `sort=FALSE`. Defaulting to `sort=FALSE`.
      x$datetime is a Date; as such, be sure that your data is sorted in descending datetime order, so that `lvcf` picks the most recent row correctly (it picks the first row it finds).
      
      To silence this message, please specify `sort=TRUE` or `sort=FALSE`. Defaulting to `sort=FALSE`.
      x$datetime is a Date; as such, be sure that your data is sorted in descending datetime order, so that `lvcf` picks the most recent row correctly (it picks the first row it finds).
      
      To silence this message, please specify `sort=TRUE` or `sort=FALSE`. Defaulting to `sort=FALSE`.
      x$datetime is a Date; as such, be sure that your data is sorted in descending datetime order, so that `lvcf` picks the most recent row correctly (it picks the first row it finds).
      
      To silence this message, please specify `sort=TRUE` or `sort=FALSE`. Defaulting to `sort=FALSE`.
      x$datetime is a Date; as such, be sure that your data is sorted in descending datetime order, so that `lvcf` picks the most recent row correctly (it picks the first row it finds).
      
      To silence this message, please specify `sort=TRUE` or `sort=FALSE`. Defaulting to `sort=FALSE`.
      x$datetime is a Date; as such, be sure that your data is sorted in descending datetime order, so that `lvcf` picks the most recent row correctly (it picks the first row it finds).
      
      To silence this message, please specify `sort=TRUE` or `sort=FALSE`. Defaulting to `sort=FALSE`.
      [ FAIL 1 | WARN 12 | SKIP 0 | PASS 18 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-tv.R:156:3'): all-NA values passed to min/max are detected and not warned ──
      `... <- NULL` threw an unexpected warning.
      Message: Calling 'structure(NULL, *)' is deprecated, as NULL cannot have attributes.
        Consider 'structure(list(), *)' instead.
      Class:   simpleWarning/warning/condition
      Backtrace:
           ▆
        1. ├─testthat::expect_warning(...) at test-tv.R:156:3
        2. │ └─testthat:::expect_condition_matching(...)
        3. │   └─testthat:::quasi_capture(...)
        4. │     ├─testthat (local) .capture(...)
        5. │     │ └─base::withCallingHandlers(...)
        6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        7. ├─tv::time_varying(...)
        8. │ └─... %>% dplyr::ungroup()
        9. ├─dplyr::ungroup(.)
       10. ├─dplyr::mutate(...)
       11. ├─dplyr::group_by(., .data[[id]])
       12. ├─dplyr::arrange(., .data[[id]], .data$row_start)
       13. ├─dplyr::filter(...)
       14. ├─dplyr::left_join(., x = exposure, by = id, relationship = "many-to-many")
       15. ├─dplyr:::left_join.data.frame(., x = exposure, by = id, relationship = "many-to-many")
       16. │ └─dplyr::auto_copy(x, y, copy = copy)
       17. │   ├─dplyr::same_src(x, y)
       18. │   └─dplyr:::same_src.data.frame(x, y)
       19. │     └─base::is.data.frame(y)
       20. ├─dplyr::distinct(., .data[[id]], row_start = .data$datetime)
       21. ├─dplyr::bind_rows(...)
       22. │ └─rlang::list2(...)
       23. ├─dplyr::filter(., .data$feature %in% specs$feature[specs$use_for_grid])
       24. └─dplyr:::filter.data.frame(., .data$feature %in% specs$feature[specs$use_for_grid])
       25.   ├─dplyr:::rel_try(...)
       26.   │ └─rlang::try_fetch(rel, error = identity)
       27.   │   ├─base::tryCatch(...)
       28.   │   │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       29.   │   │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       30.   │   │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
       31.   │   └─base::withCallingHandlers(...)
       32.   └─dplyr:::rel_translate_dots(dots, .data)
       33.     └─dplyr:::imap(dots, rel_translate, data = data)
       34.       └─dplyr:::map2(.x, names(.x) %||% seq_along(.x), .f, ...)
       35.         └─base::mapply(.f, .x, .y, MoreArgs = list(...), SIMPLIFY = FALSE)
       36.           └─dplyr (local) `<fn>`(dots[[1L]][[1L]], dots[[2L]][[1L]], data = `<df[,4]>`)
       37.             └─base::structure(out, used = used)
      
      [ FAIL 1 | WARN 12 | SKIP 0 | PASS 18 ]
      Error: Test failures
      Execution halted
    ```

