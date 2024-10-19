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
      > 
      > library(testthat) # nolint: undesirable_function_linter
      > library(admiral) # nolint: undesirable_function_linter
      > 
      > test_check("admiral")
      [ FAIL 1 | WARN 0 | SKIP 88 | PASS 661 ]
      
      ══ Skipped tests (88) ══════════════════════════════════════════════════════════
      • On CRAN (88): 'test-call_derivation.R:112:3', 'test-call_derivation.R:131:3',
        'test-call_derivation.R:152:3', 'test-call_derivation.R:173:3',
        'test-call_derivation.R:194:3', 'test-call_derivation.R:212:3',
        'test-call_user_fun.R:2:3', 'test-compute_age_years.R:40:3',
        'test-compute_scale.R:111:3', 'test-consolidate_metadata.R:102:3',
        'test-create_query_data.R:263:3', 'test-create_query_data.R:324:3',
        'test-create_query_data.R:336:3', 'test-create_query_data.R:347:3',
        'test-create_query_data.R:360:3', 'test-create_query_data.R:373:3',
        'test-create_query_data.R:384:3', 'test-create_query_data.R:396:3',
        'test-create_query_data.R:407:3', 'test-create_query_data.R:418:3',
        'test-create_query_data.R:429:3', 'test-create_query_data.R:441:3',
        'test-create_query_data.R:454:3', 'test-create_query_data.R:467:3',
        'test-create_query_data.R:475:3', 'test-create_single_dose_dataset.R:217:3',
        'test-create_single_dose_dataset.R:234:3',
        'test-create_single_dose_dataset.R:258:3',
        'test-create_single_dose_dataset.R:274:3',
        'test-derive_extreme_event.R:620:3', 'test-derive_joined.R:256:3',
        'test-derive_merged.R:146:3', 'test-derive_merged.R:281:3',
        'test-derive_merged.R:296:3', 'test-derive_merged.R:312:3',
        'test-derive_merged.R:325:3', 'test-derive_merged.R:339:3',
        'test-derive_merged.R:421:3', 'test-derive_merged.R:494:3',
        'test-derive_merged.R:529:3', 'test-derive_merged.R:706:3',
        'test-derive_param_computed.R:405:3', 'test-derive_param_computed.R:426:3',
        'test-derive_param_tte.R:452:3', 'test-derive_param_tte.R:513:3',
        'test-derive_param_tte.R:574:3', 'test-derive_param_tte.R:633:3',
        'test-derive_param_tte.R:892:3', 'test-derive_var_base.R:128:3',
        'test-derive_var_dthcaus.R:576:3', 'test-derive_var_extreme_date.R:226:3',
        'test-derive_var_merged_ef_msrc.R:130:3', 'test-derive_var_ontrtfl.R:419:3',
        'test-derive_var_trtemfl.R:154:3', 'test-derive_var_trtemfl.R:165:3',
        'test-derive_var_trtemfl.R:176:3', 'test-derive_var_trtemfl.R:187:3',
        'test-derive_vars_aage.R:69:3', 'test-derive_vars_aage.R:86:3',
        'test-derive_vars_aage.R:149:3', 'test-derive_vars_dt.R:181:3',
        'test-derive_vars_dt.R:197:3', 'test-derive_vars_dt.R:436:3',
        'test-derive_vars_dt.R:481:3', 'test-derive_vars_dt.R:500:3',
        'test-derive_vars_dtm.R:356:3', 'test-derive_vars_dtm.R:553:3',
        'test-derive_vars_dtm.R:637:3', 'test-derive_vars_dtm.R:685:3',
        'test-derive_vars_dtm.R:705:3', 'test-derive_vars_dtm.R:785:3',
        'test-derive_vars_dy.R:248:3', 'test-derive_vars_query.R:152:3',
        'test-derive_vars_query.R:173:3', 'test-derive_vars_query.R:239:3',
        'test-derive_vars_transposed.R:58:3', 'test-dt_level.R:42:3',
        'test-dt_level.R:49:3', 'test-duplicates.R:43:3',
        'test-period_dataset.R:128:3', 'test-period_dataset.R:151:3',
        'test-period_dataset.R:174:3', 'test-period_dataset.R:321:3',
        'test-period_dataset.R:348:3', 'test-roxygen2.R:20:3',
        'test-user_helpers.R:16:3', 'test-user_helpers.R:41:3',
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

# AnimalSequences

<details>

* Version: 0.2.0
* GitHub: NA
* Source code: https://github.com/cran/AnimalSequences
* Date/Publication: 2024-09-23 13:02:06 UTC
* Number of recursive dependencies: 105

Run `revdepcheck::cloud_details(, "AnimalSequences")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘AnimalSequences-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: association_metrics
    > ### Title: Calculate Association Metrics for Sequences
    > ### Aliases: association_metrics
    > 
    > ### ** Examples
    > 
    > # Example usage:
    > sequences <- c("A B C", "A B", "A C", "B C", "A B C D")
    > result <- association_metrics(sequences)
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─AnimalSequences::association_metrics(sequences)
      2. │ └─... %>% count(.data$previous_element, .data$element)
      3. ├─dplyr::count(., .data$previous_element, .data$element)
      4. └─dplyr:::count.data.frame(., .data$previous_element, .data$element)
      5.   └─dplyr:::map_chr(by_exprs, as_string)
      6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
      8.         └─rlang (local) FUN(X[[i]], ...)
      9.           └─rlang:::abort_coercion(x, "a string")
     10.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

# arcpullr

<details>

* Version: 0.2.9
* GitHub: NA
* Source code: https://github.com/cran/arcpullr
* Date/Publication: 2024-03-11 19:00:08 UTC
* Number of recursive dependencies: 102

Run `revdepcheck::cloud_details(, "arcpullr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(arcpullr)
      Loading required package: sf
      Linking to GEOS 3.12.1, GDAL 3.8.4, PROJ 9.4.0; sf_use_s2() is TRUE
      > 
      > test_check("arcpullr")
      [ FAIL 1 | WARN 7 | SKIP 0 | PASS 50 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_layer_properties.R:3:1'): (code run outside of `test_that()`) ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─arcpullr::get_layer_legend(wi_landcover_url) at test_layer_properties.R:3:1
        2. │ ├─... %>% unlist()
        3. │ └─base::lapply(...)
        4. │   └─arcpullr (local) FUN(X[[i]], ...)
        5. │     └─... %>% dplyr::slice(1)
        6. ├─base::unlist(.)
        7. ├─dplyr::slice(., 1)
        8. ├─dplyr::arrange(., dplyr::desc(.data$n))
        9. ├─dplyr::count(., .data$color)
       10. └─dplyr:::count.data.frame(., .data$color)
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      
      [ FAIL 1 | WARN 7 | SKIP 0 | PASS 50 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespace in Imports field not imported from: ‘methods’
      All declared Imports should be used.
    ```

# arrow

<details>

* Version: 17.0.0.1
* GitHub: https://github.com/apache/arrow
* Source code: https://github.com/cran/arrow
* Date/Publication: 2024-08-21 12:20:06 UTC
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
      [ FAIL 1 | WARN 0 | SKIP 84 | PASS 6667 ]
      
      ══ Skipped tests (84) ══════════════════════════════════════════════════════════
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
      • On CRAN (65): 'test-Array.R:209:3', 'test-Array.R:216:3',
        'test-Array.R:1113:3', 'test-Array.R:1178:3', 'test-Array.R:1216:3',
        'test-Array.R:1248:3', 'test-Array.R:1300:3', 'test-RecordBatch.R:516:3',
        'test-RecordBatch.R:525:3', 'test-Table.R:507:3',
        'test-chunked-array.R:120:3', 'test-csv.R:729:3',
        'test-dataset-dplyr.R:326:3', 'test-dataset-write.R:591:3',
        'test-dataset.R:866:3', 'test-dplyr-across.R:229:3',
        'test-dplyr-eval.R:59:5', 'test-dplyr-filter.R:290:3',
        'test-dplyr-funcs-conditional.R:23:1', 'test-dplyr-funcs-datetime.R:26:1',
        'test-dplyr-funcs-math.R:22:1', 'test-dplyr-funcs-string.R:21:1',
        'test-dplyr-funcs-type.R:24:1', 'test-dplyr-funcs.R:19:1',
        'test-dplyr-glimpse.R:22:3', 'test-dplyr-glimpse.R:28:3',
        'test-dplyr-glimpse.R:34:3', 'test-dplyr-glimpse.R:40:3',
        'test-dplyr-glimpse.R:46:3', 'test-dplyr-glimpse.R:70:3',
        'test-dplyr-glimpse.R:88:3', 'test-dplyr-glimpse.R:96:3',
        'test-dplyr-join.R:125:3', 'test-dplyr-mutate.R:155:3',
        'test-dplyr-mutate.R:513:3', 'test-dplyr-query.R:626:3',
        'test-dplyr-slice.R:107:3', 'test-dplyr-summarize.R:328:3',
        'test-dplyr-summarize.R:835:3', 'test-dplyr-summarize.R:1249:3',
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
        'test-dplyr-collapse.R:182:3'
      • TODO: (if anyone uses RangeEquals) (1): 'test-Array.R:139:3'
      • Table with 0 cols doesn't know how many rows it should have (1):
        'test-Table.R:114:3'
      • Work around masking of data type functions (ARROW-12322) (1):
        'test-type.R:116:3'
      • environment variable ARROW_LARGE_MEMORY_TESTS (1): 'test-Table.R:669:3'
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
      
      [ FAIL 1 | WARN 0 | SKIP 84 | PASS 6667 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 124.1Mb
      sub-directories of 1Mb or more:
        R       7.5Mb
        libs  115.9Mb
    ```

*   checking Rd cross-references ... NOTE
    ```
    Package unavailable to check Rd xrefs: ‘readr’
    ```

# ARUtools

<details>

* Version: 0.7.1
* GitHub: https://github.com/ARUtools/ARUtools
* Source code: https://github.com/cran/ARUtools
* Date/Publication: 2024-10-08 20:00:02 UTC
* Number of recursive dependencies: 142

Run `revdepcheck::cloud_details(, "ARUtools")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(ARUtools)
      > 
      > test_check("ARUtools")
      sh: 1: sox: not found
      Extracting Dates and Times...
      ! Omitted 1 extra, non-json/GPS files
      ! Detected 2 log files
      [ FAIL 3 | WARN 0 | SKIP 6 | PASS 550 ]
      
      ══ Skipped tests (6) ═══════════════════════════════════════════════════════════
      • On CRAN (5): 'test-08_selections.R:27:3', 'test-08_selections.R:91:3',
        'test-08_selections.R:198:3', 'test-10_clean_logs.R:29:3',
        'test-10_clean_logs.R:61:3'
      • SoX not available (1): 'test-07_wave_files.R:193:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-04_clean_gps.R:93:3'): check_gps_dist() ────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_warning(...) at test-04_clean_gps.R:93:3
        2. │ └─testthat:::expect_condition_matching(...)
        3. │   └─testthat:::quasi_capture(...)
        4. │     ├─testthat (local) .capture(...)
        5. │     │ └─base::withCallingHandlers(...)
        6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        7. └─ARUtools:::check_gps_dist(...)
        8.   ├─dplyr::count(...)
        9.   └─dplyr:::count.data.frame(...)
       10.     └─dplyr:::map_chr(by_exprs, as_string)
       11.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       12.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       13.           └─rlang (local) FUN(X[[i]], ...)
       14.             └─rlang:::abort_coercion(x, "a string")
       15.               └─rlang::abort(msg, call = call)
      ── Error ('test-05_add_sites.R:29:3'): add_sites() ─────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─base::suppressMessages(...) at test-05_add_sites.R:29:3
        2. │ └─base::withCallingHandlers(...)
        3. ├─testthat::expect_message(...)
        4. │ └─testthat:::expect_condition_matching(...)
        5. │   └─testthat:::quasi_capture(...)
        6. │     ├─testthat (local) .capture(...)
        7. │     │ └─base::withCallingHandlers(...)
        8. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        9. └─ARUtools::add_sites(m, example_sites_clean, by = "aru_id", by_date = "date")
       10.   └─ARUtools:::add_sites_date(...)
       11.     ├─dplyr::count(...)
       12.     └─dplyr:::count.data.frame(...)
       13.       └─dplyr:::map_chr(by_exprs, as_string)
       14.         └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       15.           └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       16.             └─rlang (local) FUN(X[[i]], ...)
       17.               └─rlang:::abort_coercion(x, "a string")
       18.                 └─rlang::abort(msg, call = call)
      ── Error ('test-05_add_sites.R:81:3'): add_sites() average over coords ─────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─base::suppressMessages(...) at test-05_add_sites.R:81:3
        2. │ └─base::withCallingHandlers(...)
        3. ├─testthat::expect_message(...)
        4. │ └─testthat:::expect_condition_matching(...)
        5. │   └─testthat:::quasi_capture(...)
        6. │     ├─testthat (local) .capture(...)
        7. │     │ └─base::withCallingHandlers(...)
        8. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        9. └─ARUtools::add_sites(meta, i, by_date = "date")
       10.   └─ARUtools:::add_sites_date(...)
       11.     ├─dplyr::count(...)
       12.     └─dplyr:::count.data.frame(...)
       13.       └─dplyr:::map_chr(by_exprs, as_string)
       14.         └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       15.           └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       16.             └─rlang (local) FUN(X[[i]], ...)
       17.               └─rlang:::abort_coercion(x, "a string")
       18.                 └─rlang::abort(msg, call = call)
      
      [ FAIL 3 | WARN 0 | SKIP 6 | PASS 550 ]
      Deleting unused snapshots:
      • 08_selections/sim-selection-weights2.svg
      • 08_selections/sim-selection-weights3.svg
      Error: Test failures
      Execution halted
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

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(auk)
      auk 0.7.0 is designed for EBD files downloaded after 2023-10-25. 
      No EBD data directory set, see ?auk_set_ebd_path to set EBD_PATH 
      eBird taxonomy version:  2023
      > 
      > test_check("auk")
      [ FAIL 1 | WARN 0 | SKIP 10 | PASS 253 ]
      
      ══ Skipped tests (10) ══════════════════════════════════════════════════════════
      • On CRAN (10): 'test_auk-filter.r:3:1', 'test_auk-keep-drop.r:3:1',
        'test_auk-select.r:3:1', 'test_auk-split.r:4:1', 'test_ebird-species.r:49:3',
        'test_filters.r:3:1', 'test_get-ebird-taxonomy.r:10:3',
        'test_get-ebird-taxonomy.r:24:3', 'test_get-ebird-taxonomy.r:36:3',
        'test_get-ebird-taxonomy.r:48:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_unmarked.r:39:3'): filter_repeat_visits works ──────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─... %>% pull(n) at test_unmarked.r:39:3
        2. ├─dplyr::pull(., n)
        3. ├─dplyr::count(...)
        4. └─dplyr:::count.data.frame(...)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      
      [ FAIL 1 | WARN 0 | SKIP 10 | PASS 253 ]
      Error: Test failures
      Execution halted
    ```

# baizer

<details>

* Version: 0.8.0
* GitHub: https://github.com/william-swl/baizer
* Source code: https://github.com/cran/baizer
* Date/Publication: 2023-10-19 09:00:02 UTC
* Number of recursive dependencies: 101

Run `revdepcheck::cloud_details(, "baizer")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘baizer-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: fancy_count
    > ### Title: fancy count to show an extended column
    > ### Aliases: fancy_count
    > 
    > ### ** Examples
    > 
    > fancy_count(mini_diamond, cut, ext = clarity)
    Error in `purrr::map()`:
    ℹ In index: 1.
    Caused by error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─baizer::fancy_count(mini_diamond, cut, ext = clarity)
      2. │ └─df %>% dplyr::group_split(...) %>% ...
      3. └─purrr::map(., ~dplyr::count(.x, ext = eval(ext), sort = sort))
      4.   └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      5.     ├─purrr:::with_indexed_errors(...)
      6.     │ └─base::withCallingHandlers(...)
      7.     ├─purrr:::call_with_cleanup(...)
      8.     └─baizer (local) .f(.x[[i]], ...)
      9.       ├─dplyr::count(.x, ext = eval(ext), sort = sort)
     10.       └─dplyr:::count.data.frame(.x, ext = eval(ext), sort = sort)
     11.         └─dplyr:::map_chr(by_exprs, as_string)
     12.           └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     13.             └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     14.               └─rlang (local) FUN(X[[i]], ...)
     15.                 └─rlang:::abort_coercion(x, "a string")
     16.                   └─rlang::abort(msg, call = call)
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
      > 
      > library(testthat)
      > library(baizer)
      > 
      > test_check("baizer")
      [ FAIL 6 | WARN 0 | SKIP 62 | PASS 220 ]
      
      ══ Skipped tests (62) ══════════════════════════════════════════════════════════
      • On CRAN (62): 'test-IO.R:44:3', 'test-IO.R:61:3', 'test-dataframe.R:2:3',
        'test-dataframe.R:25:3', 'test-dataframe.R:74:3', 'test-dataframe.R:78:3',
        'test-dataframe.R:84:3', 'test-dataframe.R:88:3', 'test-dataframe.R:94:3',
        'test-dataframe.R:100:3', 'test-dataframe.R:107:3', 'test-dataframe.R:112:3',
        'test-dataframe.R:116:3', 'test-dataframe.R:122:3', 'test-dataframe.R:128:3',
        'test-dataframe.R:137:3', 'test-dataframe.R:146:3', 'test-dataframe.R:161:3',
        'test-dataframe.R:167:3', 'test-dataframe.R:173:3', 'test-dataframe.R:185:3',
        'test-dataframe.R:190:3', 'test-dataframe.R:207:3', 'test-dataframe.R:211:3',
        'test-dataframe.R:215:3', 'test-dataframe.R:225:3', 'test-dataframe.R:236:3',
        'test-dataframe.R:242:3', 'test-dataframe.R:252:3', 'test-dataframe.R:265:3',
        'test-dataframe.R:279:3', 'test-dataframe.R:284:3', 'test-dataframe.R:291:3',
        'test-dataframe.R:295:3', 'test-dataframe.R:299:3', 'test-dataframe.R:303:3',
        'test-dataframe.R:308:3', 'test-dataframe.R:312:3', 'test-dataframe.R:316:3',
        'test-dataframe.R:328:3', 'test-dataframe.R:339:3', 'test-dataframe.R:350:3',
        'test-dataframe.R:367:3', 'test-stat.R:16:3', 'test-stat.R:23:3',
        'test-stat.R:34:3', 'test-stat.R:48:3', 'test-stat.R:55:3',
        'test-stat.R:62:3', 'test-stat.R:72:3', 'test-stat.R:84:3',
        'test-stat.R:98:3', 'test-tbflt.R:3:3', 'test-tbflt.R:8:3',
        'test-tbflt.R:14:3', 'test-tbflt.R:20:3', 'test-tbflt.R:28:3',
        'test-tbflt.R:37:3', 'test-tbflt.R:46:3', 'test-tbflt.R:57:3',
        'test-tbflt.R:66:3', 'test-tbflt.R:74:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-dataframe.R:32:3'): fancy_count, ext_fmt='count' ───────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `purrr::map(., ~dplyr::count(.x, ext = eval(ext), sort = sort))`: i In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
          ▆
       1. └─testthat::expect_snapshot(...) at test-dataframe.R:32:3
       2.   └─rlang::cnd_signal(state$error)
      ── Error ('test-dataframe.R:38:3'): fancy_count, ext_fmt='ratio' ───────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `purrr::map(., ~dplyr::count(.x, ext = eval(ext), sort = sort))`: i In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
          ▆
       1. └─testthat::expect_snapshot(...) at test-dataframe.R:38:3
       2.   └─rlang::cnd_signal(state$error)
      ── Error ('test-dataframe.R:44:3'): fancy_count, ext_fmt='clean' ───────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `purrr::map(., ~dplyr::count(.x, ext = eval(ext), sort = sort))`: i In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
          ▆
       1. └─testthat::expect_snapshot(...) at test-dataframe.R:44:3
       2.   └─rlang::cnd_signal(state$error)
      ── Error ('test-dataframe.R:50:3'): fancy_count, sort=FALSE ────────────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `purrr::map(., ~dplyr::count(.x, ext = eval(ext), sort = sort))`: i In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
          ▆
       1. └─testthat::expect_snapshot(...) at test-dataframe.R:50:3
       2.   └─rlang::cnd_signal(state$error)
      ── Error ('test-dataframe.R:56:3'): fancy_count, three column ──────────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `purrr::map(., ~dplyr::count(.x, ext = eval(ext), sort = sort))`: i In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
          ▆
       1. └─testthat::expect_snapshot(...) at test-dataframe.R:56:3
       2.   └─rlang::cnd_signal(state$error)
      ── Error ('test-dataframe.R:64:3'): expand_df ──────────────────────────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `purrr::map(., ~dplyr::count(.x, ext = eval(ext), sort = sort))`: i In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
          ▆
       1. └─testthat::expect_snapshot(...) at test-dataframe.R:64:3
       2.   └─rlang::cnd_signal(state$error)
      
      [ FAIL 6 | WARN 0 | SKIP 62 | PASS 220 ]
      Error: Test failures
      Execution halted
    ```

# banffIT

<details>

* Version: 1.0.0
* GitHub: https://github.com/PersonalizedTransplantCare/banffIT
* Source code: https://github.com/cran/banffIT
* Date/Publication: 2024-05-08 14:00:06 UTC
* Number of recursive dependencies: 108

Run `revdepcheck::cloud_details(, "banffIT")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘BanffIT_Run_Script.R’
    Running the tests in ‘tests/BanffIT_Run_Script.R’ failed.
    Complete output:
      > # # loading dataset
      > # library(banffIT)
      > # library(fs)
      > # library(dplyr)
      > # library(rlang)
      > # library(tools)
      > # library(readr)
      > # library(stringr)
      > # library(lubridate)
      > # library(tidyr)
      > # library(fabR)
      > # library(madshapR)
      > # library(crayon)
      > # library(Rmonize)
      > # library(janitor)
      > #
      > # input_file = "tests/CHUQ_for_test_3.csv"
      > # output_folder = 'tests'
      > # language = 'label:en'
      > # option_filter = quote(adequacy == 1)
      > # detail = TRUE
      > # include_banff_dictionary = TRUE
      > 
      > library(banffIT)
      > 
      > input_file = system.file("extdata", "banff_example.xlsx", package = "banffIT")
      > 
      > banff_launcher(
      +   input_file = input_file,
      +   output_folder = 'tests',
      +   language = 'label:en',
      +   option_filter = adequacy == 1,
      +   detail = TRUE)
      Welcome to the Banff diagnosis helper.
      
      Press [enter] to continue or [esc] to quit.
      
      
      
      [1/6] - Import data
      
      [2/6] - Evaluation of 'banff_example'
      
      [3/6] - Add diagnosis to each observation of'banff_example'
      
      [4/6] - Generate labels for each variable of 'banff_example'
      Processing of : patient_id
      Processing of : center
      Processing of : biopsy_id
      Processing of : sc_date_bx
      Processing of : date_tx
      Processing of : type_bx
      Processing of : adequacy
      Processing of : fixation_ff
      Processing of : fixation_paraffin
      Processing of : fixation_elec
      Processing of : fixation_rna
      Processing of : microscopy
      Processing of : c4d_if
      Processing of : c4d_ihc
      Processing of : dsa
      Processing of : hist_dsa
      Processing of : i_score
      Processing of : t_score
      Processing of : v_score
      Processing of : g_score
      Processing of : ptc_score
      Processing of : ti_score
      Processing of : cg_score
      Processing of : mm_score
      Processing of : cv_score
      Processing of : ci_score
      Processing of : ct_score
      Processing of : ah_score
      Processing of : glomeruli
      Processing of : arteries
      Processing of : bk
      Processing of : gs
      Processing of : i_ifta_score
      Processing of : atma
      Processing of : ctma
      Processing of : atn
      Processing of : agn
      Processing of : cgn
      Processing of : infec
      Processing of : cni
      Processing of : ain
      Processing of : ptld
      Processing of : sptcbmml
      Processing of : leuscint
      Processing of : monofibneoint
      Processing of : newaif
      Processing of : othi_ifta
      Processing of : genetx
      Processing of : hist_aamr
      Processing of : hist_camr
      Processing of : hist_tcmr
      Processing of : adequacy_calculated
      Processing of : c4d
      Processing of : nogn
      Processing of : ifta
      Processing of : aamr11.1
      Processing of : aamr11.2
      Processing of : aamr12
      Processing of : aamr13
      Processing of : aamr14
      Processing of : aamr1
      Processing of : aamr21
      Processing of : aamr22.1
      Processing of : aamr22.2
      Processing of : aamr22.3
      Processing of : aamr2
      Processing of : aamr
      Processing of : susp_aamr
      Processing of : c4dneg_aamr
      Processing of : susp_c4dneg_aamr
      Processing of : dsaneg_aamr
      Processing of : susp_activeaamr
      Processing of : hist_dsa1
      Processing of : hist_dsa2
      Processing of : hist_dsa_calculated
      Processing of : hist_tcmr1
      Processing of : hist_tcmr2
      Processing of : hist_tcmr3
      Processing of : hist_tcmr_calculated
      Processing of : camr11
      Processing of : camr12
      Processing of : camr13
      Processing of : camr1
      Processing of : activeabmr
      Processing of : camr
      Processing of : susp_camr
      Processing of : c4dneg_camr
      Processing of : susp_c4dneg_camr
      Processing of : dsaneg_camr
      Processing of : chractabmr
      Processing of : susp_chractabmr
      Processing of : hist_camr1
      Processing of : hist_camr2
      Processing of : hist_camr_calculated
      Processing of : hist_aamr1
      Processing of : hist_aamr2
      Processing of : hist_aamr_calculated
      Processing of : chrabmr3
      Processing of : chrabmr
      Processing of : c4d_only
      Processing of : final_abmr
      Processing of : final_susp_abmr
      Processing of : final_abmr_verified
      Processing of : diag_code_1
      Processing of : diag_code_2
      Processing of : diag_code_2_final_abmr
      Processing of : diag_code_2_final_susp_abmr
      Processing of : diag_code_3
      Processing of : diag_code_4_active
      Processing of : diag_code_4_chronic
      Processing of : diag_code_5
      Processing of : diag_code_bk
      Processing of : diag_code_ptld
      Processing of : diag_code_cni
      Processing of : diag_code_atn
      Processing of : diag_code_cgn
      Processing of : diag_code_agn
      Processing of : diag_code_infec
      Processing of : diag_code_ain
      
      [5/6] - Assessment of the the annotated 'banff_example'
      
      - DATA DICTIONARY ASSESSMENT: data_dict --------------
          Assess the standard adequacy of naming
          Assess the uniqueness of variable names
          Assess the presence of possible duplicated columns
          Assess the presence of empty rows in the data dictionary
          Assess the presence of empty columns in the data dictionary
          Assess the presence of categories not in the data dictionary
          Assess the completion of `label(:xx)` column in 'Variables'
          Assess the `valueType` column in 'Variables'
          Assess presence and completion of `label(:xx)` column in 'Categories'
          Assess the logical values of missing column in Categories
          Generate report
      
          The data dictionary contains no error/warning.
      
        - WARNING MESSAGES (if any): --------------------------------------------
      
      - DATASET ASSESSMENT: banff_example --------------------------
          Assess the standard adequacy of naming
          Assess the presence of variable names both in dataset and data dictionary
          Assess the presence of possible duplicated variable in the dataset
          Assess the presence of duplicated participants in the dataset
          Assess the presence of unique value columns in dataset
          Assess the presence of empty rows in the data dictionary
          Assess the presence all NA(s) of columns in the data dictionary
          Assess the presence of categories not in the data dictionary
          Generate report
      
        - WARNING MESSAGES (if any): -------------------------------------------------
          
      - DATASET SUMMARIZE: banff_example --------------------------
          Summarize the data type of each variable across the dataset
          Summarize information for all variables
          Summarize information for numerical variables
          Summarize information for text variables
      Error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─banffIT::banff_launcher(...)
        2. │ └─madshapR::dataset_summarize(...)
        3. │   └─base::lapply(...)
        4. │     └─madshapR (local) FUN(X[[i]], ...)
        5. │       └─madshapR::summary_variables_text(dataset_preprocess = x)
        6. │         └─tibble::tibble(...)
        7. │           └─tibble:::tibble_quos(xs, .rows, .name_repair)
        8. │             └─rlang::eval_tidy(xs[[j]], mask)
        9. ├─... %>% str_replace("; \\[\\.\\.\\.\\]$", "[...]")
       10. ├─stringr::str_replace(., "; \\[\\.\\.\\.\\]$", "[...]")
       11. │ └─stringr:::check_lengths(string, pattern, replacement)
       12. │   └─vctrs::vec_size_common(...)
       13. ├─base::paste0(., collapse = " ; ")
       14. ├─dplyr::pull(., .data$value_var)
       15. ├─dplyr::mutate(...)
       16. ├─dplyr::slice(., 1:6)
       17. ├─dplyr::filter(., if_any(.data$n, ~. == max(.)))
       18. ├─dplyr::count(., .data$value_var)
       19. └─dplyr:::count.data.frame(., .data$value_var)
       20.   └─dplyr:::map_chr(by_exprs, as_string)
       21.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       22.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       23.         └─rlang (local) FUN(X[[i]], ...)
       24.           └─rlang:::abort_coercion(x, "a string")
       25.             └─rlang::abort(msg, call = call)
      Execution halted
    ```

# bayesplot

<details>

* Version: 1.11.1
* GitHub: https://github.com/stan-dev/bayesplot
* Source code: https://github.com/cran/bayesplot
* Date/Publication: 2024-02-15 05:30:11 UTC
* Number of recursive dependencies: 126

Run `revdepcheck::cloud_details(, "bayesplot")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘bayesplot-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: MCMC-traces
    > ### Title: Trace and rank plots of MCMC draws
    > ### Aliases: MCMC-traces mcmc_trace mcmc_trace_highlight trace_style_np
    > ###   mcmc_rank_overlay mcmc_rank_hist mcmc_rank_ecdf mcmc_trace_data
    > 
    > ### ** Examples
    > 
    > # some parameter draws to use for demonstration
    > x <- example_mcmc_draws(chains = 4, params = 6)
    > dim(x)
    [1] 250   4   6
    > dimnames(x)
    $Iteration
    NULL
    
    $Chain
    [1] "chain:1" "chain:2" "chain:3" "chain:4"
    
    $Parameter
    [1] "alpha"   "sigma"   "beta[1]" "beta[2]" "beta[3]" "beta[4]"
    
    > 
    > # trace plots of the betas
    > color_scheme_set("viridis")
    > mcmc_trace(x, regex_pars = "beta")
    > 
    > # mix color schemes
    > color_scheme_set("mix-blue-red")
    > mcmc_trace(x, regex_pars = "beta")
    > 
    > # use traditional ggplot discrete color scale
    > mcmc_trace(x, pars = c("alpha", "sigma")) +
    +  ggplot2::scale_color_discrete()
    Scale for colour is already present.
    Adding another scale for colour, which will replace the existing scale.
    > 
    > # zoom in on a window of iterations, increase line size,
    > # add tick marks, move legend to the top, add gray background
    > color_scheme_set("viridisA")
    > mcmc_trace(x[,, 1:4], window = c(100, 130), size = 1) +
    +   panel_bg(fill = "gray90", color = NA) +
    +   legend_move("top")
    > 
    > # Rank-normalized histogram plots. Instead of showing how chains mix over
    > # time, look at how the ranking of MCMC samples mixed between chains.
    > color_scheme_set("viridisE")
    > mcmc_rank_hist(x, "alpha")
    > mcmc_rank_hist(x, pars = c("alpha", "sigma"), ref_line = TRUE)
    > mcmc_rank_overlay(x, "alpha")
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─bayesplot::mcmc_rank_overlay(x, "alpha")
      2. │ └─data %>% left_join(histobins, by = "value_rank") %>% ...
      3. ├─dplyr::count(., .data$parameter, .data$chain, .data$bin_start)
      4. └─dplyr:::count.data.frame(., .data$parameter, .data$chain, .data$bin_start)
      5.   └─dplyr:::map_chr(by_exprs, as_string)
      6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
      8.         └─rlang (local) FUN(X[[i]], ...)
      9.           └─rlang:::abort_coercion(x, "a string")
     10.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(bayesplot)
      This is bayesplot version 1.11.1
      - Online documentation and vignettes at mc-stan.org/bayesplot
      - bayesplot theme set to bayesplot::theme_default()
         * Does _not_ affect other ggplot2 plots
         * See ?bayesplot_theme_set for details on theme setting
      > 
      > Sys.unsetenv("R_TESTS")
      > test_check("bayesplot")
      [ FAIL 4 | WARN 2 | SKIP 73 | PASS 1010 ]
      
      ══ Skipped tests (73) ══════════════════════════════════════════════════════════
      • On CRAN (73): 'test-aesthetics.R:220:3', 'test-extractors.R:119:3',
        'test-mcmc-diagnostics.R:110:3', 'test-mcmc-diagnostics.R:123:3',
        'test-mcmc-diagnostics.R:137:3', 'test-mcmc-diagnostics.R:147:3',
        'test-mcmc-diagnostics.R:160:3', 'test-mcmc-diagnostics.R:171:3',
        'test-mcmc-distributions.R:125:3', 'test-mcmc-distributions.R:139:3',
        'test-mcmc-distributions.R:150:3', 'test-mcmc-distributions.R:158:3',
        'test-mcmc-distributions.R:166:3', 'test-mcmc-distributions.R:174:3',
        'test-mcmc-intervals.R:179:3', 'test-mcmc-intervals.R:206:3',
        'test-mcmc-intervals.R:239:3', 'test-mcmc-nuts.R:98:3',
        'test-mcmc-nuts.R:109:3', 'test-mcmc-nuts.R:120:3', 'test-mcmc-nuts.R:131:3',
        'test-mcmc-nuts.R:142:3', 'test-mcmc-recover.R:107:3',
        'test-mcmc-recover.R:115:3', 'test-mcmc-recover.R:126:3',
        'test-mcmc-scatter-and-parcoord.R:374:3',
        'test-mcmc-scatter-and-parcoord.R:395:3',
        'test-mcmc-scatter-and-parcoord.R:411:3',
        'test-mcmc-scatter-and-parcoord.R:427:3', 'test-mcmc-traces.R:117:3',
        'test-mcmc-traces.R:139:3', 'test-mcmc-traces.R:168:3',
        'test-mcmc-traces.R:200:3', 'test-mcmc-traces.R:228:3',
        'test-mcmc-traces.R:256:3', 'test-ppc-censoring.R:32:3',
        'test-ppc-censoring.R:49:3', 'test-ppc-discrete.R:105:3',
        'test-ppc-discrete.R:138:3', 'test-ppc-discrete.R:159:3',
        'test-ppc-distributions.R:92:3', 'test-ppc-distributions.R:110:3',
        'test-ppc-distributions.R:141:3', 'test-ppc-distributions.R:153:3',
        'test-ppc-distributions.R:177:3', 'test-ppc-distributions.R:198:3',
        'test-ppc-distributions.R:219:3', 'test-ppc-distributions.R:231:3',
        'test-ppc-distributions.R:249:3', 'test-ppc-distributions.R:269:3',
        'test-ppc-distributions.R:301:3', 'test-ppc-errors.R:67:3',
        'test-ppc-errors.R:74:3', 'test-ppc-errors.R:81:3', 'test-ppc-errors.R:88:3',
        'test-ppc-errors.R:95:3', 'test-ppc-errors.R:102:3',
        'test-ppc-errors.R:109:3', 'test-ppc-intervals.R:109:3',
        'test-ppc-intervals.R:133:3', 'test-ppc-intervals.R:158:3',
        'test-ppc-intervals.R:191:3', 'test-ppc-loo.R:167:3', 'test-ppc-loo.R:184:3',
        'test-ppc-loo.R:193:3', 'test-ppc-loo.R:224:3',
        'test-ppc-scatterplots.R:36:3', 'test-ppc-scatterplots.R:55:3',
        'test-ppc-scatterplots.R:74:3', 'test-ppc-test-statistics.R:100:3',
        'test-ppc-test-statistics.R:133:3', 'test-ppc-test-statistics.R:166:3',
        'test-ppc-test-statistics.R:201:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-ppc-discrete.R:19:3'): ppc_bars & ppc_bars_grouped return a ggplot object ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─bayesplot:::expect_gg(ppc_bars(y_ord, yrep_ord)) at test-ppc-discrete.R:19:3
        2. │ └─testthat::expect_s3_class(x, "ggplot")
        3. │   └─testthat::quasi_label(enquo(object), arg = "object")
        4. │     └─rlang::eval_bare(expr, quo_get_env(quo))
        5. ├─bayesplot::ppc_bars(y_ord, yrep_ord)
        6. │ └─bayesplot::ppc_bars_data(...)
        7. │   └─bayesplot:::.ppc_bars_data(...)
        8. │     └─... %>% group_by(.data$group, .data$value)
        9. ├─dplyr::group_by(., .data$group, .data$value)
       10. ├─dplyr::ungroup(.)
       11. ├─dplyr::mutate(., proportion = .data$n/sum(.data$n))
       12. ├─dplyr::group_by(., .data$variable, .data$group)
       13. ├─dplyr::count(., .data$group, .data$value, .data$variable)
       14. └─dplyr:::count.data.frame(., .data$group, .data$value, .data$variable)
       15.   └─dplyr:::map_chr(by_exprs, as_string)
       16.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       17.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       18.         └─rlang (local) FUN(X[[i]], ...)
       19.           └─rlang:::abort_coercion(x, "a string")
       20.             └─rlang::abort(msg, call = call)
      ── Error ('test-ppc-discrete.R:25:3'): freq argument to ppc_bars works ─────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ggplot2::ggplot_build(ppc_bars(y_ord, yrep_ord, freq = TRUE)) at test-ppc-discrete.R:25:3
        2. │ └─ggplot2:::attach_plot_env(plot$plot_env)
        3. │   └─base::options(ggplot2_plot_env = env)
        4. ├─bayesplot::ppc_bars(y_ord, yrep_ord, freq = TRUE)
        5. │ └─bayesplot::ppc_bars_data(...)
        6. │   └─bayesplot:::.ppc_bars_data(...)
        7. │     └─... %>% group_by(.data$group, .data$value)
        8. ├─dplyr::group_by(., .data$group, .data$value)
        9. ├─dplyr::ungroup(.)
       10. ├─dplyr::mutate(., proportion = .data$n/sum(.data$n))
       11. ├─dplyr::group_by(., .data$variable, .data$group)
       12. ├─dplyr::count(., .data$group, .data$value, .data$variable)
       13. └─dplyr:::count.data.frame(., .data$group, .data$value, .data$variable)
       14.   └─dplyr:::map_chr(by_exprs, as_string)
       15.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       16.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       17.         └─rlang (local) FUN(X[[i]], ...)
       18.           └─rlang:::abort_coercion(x, "a string")
       19.             └─rlang::abort(msg, call = call)
      ── Error ('test-ppc-discrete.R:37:3'): ppc_bars works with negative integers ───
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─bayesplot:::expect_gg(ppc_bars(y, yrep)) at test-ppc-discrete.R:37:3
        2. │ └─testthat::expect_s3_class(x, "ggplot")
        3. │   └─testthat::quasi_label(enquo(object), arg = "object")
        4. │     └─rlang::eval_bare(expr, quo_get_env(quo))
        5. ├─bayesplot::ppc_bars(y, yrep)
        6. │ └─bayesplot::ppc_bars_data(...)
        7. │   └─bayesplot:::.ppc_bars_data(...)
        8. │     └─... %>% group_by(.data$group, .data$value)
        9. ├─dplyr::group_by(., .data$group, .data$value)
       10. ├─dplyr::ungroup(.)
       11. ├─dplyr::mutate(., proportion = .data$n/sum(.data$n))
       12. ├─dplyr::group_by(., .data$variable, .data$group)
       13. ├─dplyr::count(., .data$group, .data$value, .data$variable)
       14. └─dplyr:::count.data.frame(., .data$group, .data$value, .data$variable)
       15.   └─dplyr:::map_chr(by_exprs, as_string)
       16.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       17.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       18.         └─rlang (local) FUN(X[[i]], ...)
       19.           └─rlang:::abort_coercion(x, "a string")
       20.             └─rlang::abort(msg, call = call)
      ── Error ('test-ppc-discrete.R:64:3'): ppc_bars_data includes all levels ───────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─bayesplot::ppc_bars_data(y_ord, yrep_ord) at test-ppc-discrete.R:64:3
        2. │ └─bayesplot:::.ppc_bars_data(...)
        3. │   └─... %>% group_by(.data$group, .data$value)
        4. ├─dplyr::group_by(., .data$group, .data$value)
        5. ├─dplyr::ungroup(.)
        6. ├─dplyr::mutate(., proportion = .data$n/sum(.data$n))
        7. ├─dplyr::group_by(., .data$variable, .data$group)
        8. ├─dplyr::count(., .data$group, .data$value, .data$variable)
        9. └─dplyr:::count.data.frame(., .data$group, .data$value, .data$variable)
       10.   └─dplyr:::map_chr(by_exprs, as_string)
       11.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       12.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       13.         └─rlang (local) FUN(X[[i]], ...)
       14.           └─rlang:::abort_coercion(x, "a string")
       15.             └─rlang::abort(msg, call = call)
      
      [ FAIL 4 | WARN 2 | SKIP 73 | PASS 1010 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  8.6Mb
      sub-directories of 1Mb or more:
        R     4.0Mb
        doc   3.8Mb
    ```

# BiostatsUHNplus

<details>

* Version: 0.0.10
* GitHub: NA
* Source code: https://github.com/cran/BiostatsUHNplus
* Date/Publication: 2024-05-24 21:10:30 UTC
* Number of recursive dependencies: 140

Run `revdepcheck::cloud_details(, "BiostatsUHNplus")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘BiostatsUHNplus-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: caterpillar_plot
    > ### Title: Caterpillar plot. Useful for plotting random effects from
    > ###   hierarchical models, such as MCMCglmm::MCMCglmm() object, that have
    > ###   binary outcome.
    > ### Aliases: caterpillar_plot
    > ### Keywords: plot
    > 
    > ### ** Examples
    > 
    > data("ae");
    > 
    > ae$G3Plus <- 0;
    > ae$G3Plus[ae$AE_SEV_GD %in% c("3", "4", "5")] <- 1;
    > ae$Drug_1_Attribution <- 0;
    > ae$Drug_1_Attribution[ae$CTC_AE_ATTR_SCALE %in% c("Definite", "Probable", "Possible")] <- 1;
    > ae$Drug_2_Attribution <- 0;
    > ae$Drug_2_Attribution[ae$CTC_AE_ATTR_SCALE_1 %in% c("Definite", "Probable", "Possible")] <- 1;
    > 
    > prior2RE <- list(R = list(V = diag(1), fix = 1),
    +   G=list(G1=list(V=1, nu=0.02), G2=list(V=1, nu=0.02)));
    >   
    > model1 <- MCMCglmm::MCMCglmm(G3Plus ~ Drug_1_Attribution + Drug_2_Attribution, 
    +   random=~Subject + ae_category, family="categorical", data=ae, saveX=TRUE, 
    +   verbose=FALSE, burnin=2000, nitt=10000, thin=10, pr=TRUE, prior=prior2RE);
    >   
    > p <- caterpillar_plot(subjID = "Subject",
    +   mcmcglmm_object = model1,
    +   prob = 0.99,
    +   orig_dataset = ae,
    +   binaryOutcomeVar = "G3Plus")
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. └─BiostatsUHNplus::caterpillar_plot(...)
      2.   ├─dplyr::select(...)
      3.   ├─dplyr::count(...)
      4.   └─dplyr:::count.data.frame(...)
      5.     └─dplyr:::map_chr(by_exprs, as_string)
      6.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      7.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
      8.           └─rlang (local) FUN(X[[i]], ...)
      9.             └─rlang:::abort_coercion(x, "a string")
     10.               └─rlang::abort(msg, call = call)
    Execution halted
    ```

# broom.helpers

<details>

* Version: 1.17.0
* GitHub: https://github.com/larmarange/broom.helpers
* Source code: https://github.com/cran/broom.helpers
* Date/Publication: 2024-08-28 12:30:02 UTC
* Number of recursive dependencies: 242

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
      [ FAIL 2 | WARN 0 | SKIP 96 | PASS 374 ]
      
      ══ Skipped tests (96) ══════════════════════════════════════════════════════════
      • On CRAN (96): 'test-add_coefficients_type.R:113:3',
        'test-add_coefficients_type.R:122:3', 'test-add_contrasts.R:193:3',
        'test-add_contrasts.R:204:3', 'test-add_contrasts.R:317:3',
        'test-add_estimate_to_reference_rows.R:111:3',
        'test-add_estimate_to_reference_rows.R:257:1',
        'test-add_header_rows.R:158:3', 'test-add_header_rows.R:220:3',
        'test-add_n.R:150:3', 'test-add_n.R:161:3', 'test-add_n.R:174:3',
        'test-add_n.R:183:3', 'test-add_n.R:194:3',
        'test-add_pairwise_contrasts.R:2:3', 'test-add_reference_rows.R:223:3',
        'test-add_reference_rows.R:238:3', 'test-add_reference_rows.R:256:3',
        'test-add_term_labels.R:231:3', 'test-add_term_labels.R:274:3',
        'test-add_term_labels.R:289:1', 'test-add_variable_labels.R:176:3',
        'test-add_variable_labels.R:189:3', 'test-attach_and_detach.R:22:3',
        'test-disambiguate_terms.R:14:3', 'test-disambiguate_terms.R:47:3',
        'test-identify_variables.R:255:3', 'test-identify_variables.R:288:3',
        'test-identify_variables.R:587:3', 'test-identify_variables.R:616:3',
        'test-marginal_tidiers.R:2:3', 'test-marginal_tidiers.R:35:3',
        'test-marginal_tidiers.R:68:3', 'test-marginal_tidiers.R:101:3',
        'test-marginal_tidiers.R:201:3', 'test-marginal_tidiers.R:264:3',
        'test-marginal_tidiers.R:346:3', 'test-marginal_tidiers.R:356:3',
        'test-marginal_tidiers.R:419:3', 'test-marginal_tidiers.R:481:3',
        'test-marginal_tidiers.R:541:3', 'test-model_get_n.R:192:3',
        'test-model_get_n.R:212:3', 'test-model_get_n.R:224:3',
        'test-model_get_n.R:239:3', 'test-model_get_n.R:279:3',
        'test-model_get_n.R:294:3', 'test-model_get_n.R:320:3',
        'test-model_get_n.R:346:3', 'test-model_get_n.R:355:3',
        'test-model_get_n.R:363:3', 'test-model_get_n.R:371:3',
        'test-model_get_n.R:392:3', 'test-model_get_n.R:402:3',
        'test-model_get_n.R:423:3', 'test-model_get_n.R:438:3',
        'test-select_helpers.R:42:3', 'test-select_helpers.R:219:3',
        'test-tidy_plus_plus.R:59:3', 'test-tidy_plus_plus.R:108:3',
        'test-tidy_plus_plus.R:129:3', 'test-tidy_plus_plus.R:160:3',
        'test-tidy_plus_plus.R:173:3', 'test-tidy_plus_plus.R:189:3',
        'test-tidy_plus_plus.R:210:3', 'test-tidy_plus_plus.R:225:3',
        'test-tidy_plus_plus.R:235:3', 'test-tidy_plus_plus.R:249:3',
        'test-tidy_plus_plus.R:268:3', 'test-tidy_plus_plus.R:310:3',
        'test-tidy_plus_plus.R:332:3', 'test-tidy_plus_plus.R:346:3',
        'test-tidy_plus_plus.R:359:3', 'test-tidy_plus_plus.R:371:3',
        'test-tidy_plus_plus.R:383:3', 'test-tidy_plus_plus.R:393:3',
        'test-tidy_plus_plus.R:402:3', 'test-tidy_plus_plus.R:419:3',
        'test-tidy_plus_plus.R:431:3', 'test-tidy_plus_plus.R:446:3',
        'test-tidy_plus_plus.R:463:3', 'test-tidy_plus_plus.R:479:3',
        'test-tidy_plus_plus.R:491:3', 'test-tidy_plus_plus.R:505:3',
        'test-tidy_plus_plus.R:525:3', 'test-tidy_plus_plus.R:549:3',
        'test-tidy_plus_plus.R:589:3', 'test-tidy_plus_plus.R:612:3',
        'test-tidy_plus_plus.R:631:3', 'test-tidy_plus_plus.R:655:3',
        'test-tidy_plus_plus.R:674:3', 'test-tidy_plus_plus.R:692:3',
        'test-tidy_plus_plus.R:713:3', 'test-tidy_plus_plus.R:765:3',
        'test-tidy_plus_plus.R:823:3', 'test-tidy_plus_plus.R:899:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-add_header_rows.R:32:3'): tidy_add_header_rows() works as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─broom.helpers::tidy_add_header_rows(...) at test-add_header_rows.R:32:3
        2.   ├─purrr::pluck(...)
        3.   │ └─purrr:::pluck_raw(.x, list2(...), .default = .default)
        4.   ├─dplyr::filter(...)
        5.   ├─dplyr::count(...)
        6.   └─dplyr:::count.data.frame(...)
        7.     └─dplyr:::map_chr(by_exprs, as_string)
        8.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.           └─rlang (local) FUN(X[[i]], ...)
       11.             └─rlang:::abort_coercion(x, "a string")
       12.               └─rlang::abort(msg, call = call)
      ── Error ('test-select_helpers.R:186:3'): select_helpers: tidy_add_header_rows ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-select_helpers.R:186:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─... %in% "trt"
        5. └─broom.helpers::tidy_add_header_rows(mod_tidy, show_single_row = all_dichotomous())
        6.   ├─purrr::pluck(...)
        7.   │ └─purrr:::pluck_raw(.x, list2(...), .default = .default)
        8.   ├─dplyr::filter(...)
        9.   ├─dplyr::count(...)
       10.   └─dplyr:::count.data.frame(...)
       11.     └─dplyr:::map_chr(by_exprs, as_string)
       12.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.           └─rlang (local) FUN(X[[i]], ...)
       15.             └─rlang:::abort_coercion(x, "a string")
       16.               └─rlang::abort(msg, call = call)
      
      [ FAIL 2 | WARN 0 | SKIP 96 | PASS 374 ]
      Error: Test failures
      Execution halted
    ```

# cardx

<details>

* Version: 0.2.1
* GitHub: https://github.com/insightsengineering/cardx
* Source code: https://github.com/cran/cardx
* Date/Publication: 2024-09-03 04:10:02 UTC
* Number of recursive dependencies: 126

Run `revdepcheck::cloud_details(, "cardx")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > test_check("cardx")
      Loading required package: cardx
      
      Attaching package: 'cardx'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      Starting 2 test processes
      [ FAIL 31 | WARN 0 | SKIP 44 | PASS 463 ]
      
      ══ Skipped tests (44) ══════════════════════════════════════════════════════════
      • On CRAN (44): 'test-ard_attributes.survey.design.R:7:3',
        'test-ard_car_anova.R:14:3', 'test-ard_car_anova.R:18:3',
        'test-ard_car_vif.R:4:3', 'test-ard_car_vif.R:29:3',
        'test-ard_aod_wald_test.R:12:3',
        'test-ard_categorical_ci.survey.design.R:7:3',
        'test-ard_categorical.survey.design.R:428:3',
        'test-ard_categorical.survey.design.R:1195:3',
        'test-ard_continuous_ci.survey.design.R:7:3',
        'test-ard_continuous_ci.survey.design.R:191:3',
        'test-ard_dichotomous.survey.design.R:413:3',
        'test-ard_effectsize_cohens_d.R:38:3', 'test-ard_effectsize_hedges_g.R:34:3',
        'test-ard_proportion_ci.R:92:3', 'test-ard_proportion_ci.R:113:3',
        'test-ard_regression.R:6:3', 'test-ard_regression.R:30:3',
        'test-ard_regression.R:50:3', 'test-ard_regression_basic.R:12:3',
        'test-ard_stats_aov.R:25:3', 'test-ard_stats_kruskal_test.R:22:3',
        'test-ard_stats_mood_test.R:22:3', 'test-ard_stats_oneway_test.R:24:3',
        'test-ard_stats_poisson_test.R:74:3', 'test-ard_survey_svychisq.R:28:3',
        'test-ard_survey_svyranktest.R:18:3', 'test-ard_survival_survfit.R:4:3',
        'test-ard_survival_survfit.R:15:3', 'test-ard_survival_survfit.R:26:3',
        'test-ard_survival_survfit.R:37:3', 'test-ard_survival_survfit.R:57:3',
        'test-ard_survival_survfit.R:91:3', 'test-ard_survival_survfit.R:102:3',
        'test-ard_survival_survfit.R:137:3', 'test-ard_survival_survfit_diff.R:40:3',
        'test-ard_total_n.survey.design.R:4:3', 'test-construction_helpers.R:4:3',
        'test-construction_helpers.R:104:3', 'test-proportion_ci.R:12:3',
        'test-proportion_ci.R:138:3', 'test-ard_continuous.survey.design.R:70:3',
        'test-ard_continuous.survey.design.R:322:3',
        'test-ard_continuous.survey.design.R:338:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-ard_categorical.survey.design.R:59:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (109, 2092, 325, 285, 706, ...)
      ── Failure ('test-ard_categorical.survey.design.R:65:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.0 1.0 1.0 1.0 1.0 1.0 1.0 1.0 1.0 1.0 and 2 more...
      `expected`: 0.5 0.7 0.4 0.6 0.7 0.8 0.5 0.3 0.6 0.4           ...
      ── Failure ('test-ard_categorical.survey.design.R:119:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (1490, 1490, 1490, 1490, 1490, ...)
      ── Failure ('test-ard_categorical.survey.design.R:126:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.00 1.00 1.00 1.00 1.00 1.00 1.00 1.00 1.00 1.00 and 2 more...
      `expected`: 0.03 0.97 0.08 0.11 0.35 0.45 0.08 0.92 0.29 0.17           ...
      ── Failure ('test-ard_categorical.survey.design.R:181:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (2201, 2201, 2201, 2201, 2201, ...)
      ── Failure ('test-ard_categorical.survey.design.R:188:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.0 1.0 1.0 1.0 1.0 1.0 1.0 1.0 1.0 1.0 and 2 more...
      `expected`: 0.0 0.7 0.1 0.1 0.2 0.3 0.0 0.3 0.1 0.1           ...
      ── Failure ('test-ard_categorical.survey.design.R:277:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (325, 285, 706, 885, 109, ...)
      ── Failure ('test-ard_categorical.survey.design.R:329:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (2201, 2201, 2201, 2201, 2201, ...)
      ── Failure ('test-ard_categorical.survey.design.R:335:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.00 1.00 1.00 1.00 1.00 1.00
      `expected`: 0.15 0.13 0.32 0.40 0.05 0.95
      ── Failure ('test-ard_categorical.survey.design.R:378:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (2201, 2201, 2201, 2201, 2201, ...)
      ── Failure ('test-ard_categorical.survey.design.R:384:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.00 1.00 1.00 1.00 1.00 1.00
      `expected`: 0.15 0.13 0.32 0.40 0.05 0.95
      ── Failure ('test-ard_categorical.survey.design.R:517:3'): ard_categorical.survey.design() works for unobserved factor levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (109, 109, 109, 285, 285, ...)
      ── Failure ('test-ard_categorical.survey.design.R:523:3'): ard_categorical.survey.design() works for unobserved factor levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `names(actual)[10:12]`:   "p" "p" "p"                        
      `names(expected)[10:18]`: "p" "p" "p" "p" "p" "p" "p" "p" "p"
      
           actual | expected                        
       [1] 1      - 0                 [1]           
       [2] 1      - 0                 [2]           
       [3] 1      - 0                 [3]           
       [4] 1      - 0                 [4]           
       [5] 1      - 0                 [5]           
       [6] 1      - 0                 [6]           
       [7] 1      - 0.23954802259887  [7]           
       [8] 1      - 0.252124645892351 [8]           
       [9] 1      - 0.312619502868069 [9]           
      [10] 1      - 0.375384615384615 [10]          
       ... ...      ...               and 8 more ...
      ── Failure ('test-ard_categorical.survey.design.R:575:3'): ard_categorical.survey.design() works for unobserved factor levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (0, 0, 0, 0, 0, ...)
      ── Failure ('test-ard_categorical.survey.design.R:581:3'): ard_categorical.survey.design() works for unobserved factor levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
        `actual`: 1.00 1.00 1.00 1.00 1.00 1.00 1.00 1.00 1.00 1.00 and 2 more...
      `expected`: 0.03 0.08 0.08 0.11 0.17 0.25 0.29 0.30 0.35 0.45           ...
      ── Failure ('test-ard_categorical.survey.design.R:633:3'): ard_categorical.survey.design() works for unobserved factor levels ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (2201, 2201, 2201, 2201, 2201, ...)
      ── Failure ('test-ard_categorical.survey.design.R:639:3'): ard_categorical.survey.design() works for unobserved factor levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `names(actual)[10:12]`:   "p" "p" "p"                        
      `names(expected)[10:18]`: "p" "p" "p" "p" "p" "p" "p" "p" "p"
      
           actual | expected                         
       [1] 1      - 0                  [1]           
       [2] 1      - 0                  [2]           
       [3] 1      - 0                  [3]           
       [4] 1      - 0                  [4]           
       [5] 1      - 0                  [5]           
       [6] 1      - 0                  [6]           
       [7] 1      - 0.0236256247160382 [7]           
       [8] 1      - 0.0258973194002726 [8]           
       [9] 1      - 0.0536119945479328 [9]           
      [10] 1      - 0.0554293502953203 [10]          
       ... ...      ...                and 8 more ...
      ── Failure ('test-ard_categorical.survey.design.R:813:3'): ard_categorical.survey.design() works for unobserved logical levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (109, 109, 285, 285, 325, ...)
      ── Failure ('test-ard_categorical.survey.design.R:819:3'): ard_categorical.survey.design() works for unobserved logical levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `names(actual)[4:6]`:    "p" "p" "p"                        
      `names(expected)[4:12]`: "p" "p" "p" "p" "p" "p" "p" "p" "p"
      
        `actual[1:3]`:             1 1 1
      `expected[1:9]`: 0 0 0 0 0 0 1 1 1
      ── Failure ('test-ard_categorical.survey.design.R:871:3'): ard_categorical.survey.design() works for unobserved logical levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (0, 0, 0, 0, 0, ...)
      ── Failure ('test-ard_categorical.survey.design.R:877:3'): ard_categorical.survey.design() works for unobserved logical levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
        `actual`: 1.00 1.00 1.00 1.00 1.00 1.00
      `expected`: 0.05 0.13 0.15 0.32 0.40 0.95
      ── Failure ('test-ard_categorical.survey.design.R:929:3'): ard_categorical.survey.design() works for unobserved logical levels ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (2201, 2201, 2201, 2201, 2201, ...)
      ── Failure ('test-ard_categorical.survey.design.R:935:3'): ard_categorical.survey.design() works for unobserved logical levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `names(actual)[4:6]`:    "p" "p" "p"                        
      `names(expected)[4:12]`: "p" "p" "p" "p" "p" "p" "p" "p" "p"
      
          actual | expected                         
      [1] 1      - 0                  [1]           
      [2] 1      - 0                  [2]           
      [3] 1      - 0                  [3]           
      [4] 1      - 0                  [4]           
      [5] 1      - 0                  [5]           
      [6] 1      - 0                  [6]           
                 - 0.0495229441163108 [7]           
                 - 0.129486597001363  [8]           
                 - 0.147660154475239  [9]           
                 - 0.320763289413903  [10]          
      ... ...      ...                and 2 more ...
      ── Failure ('test-ard_dichotomous.survey.design.R:62:3'): ard_dichotomous.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is a double vector (11, 11, 13, 13)
      ── Failure ('test-ard_dichotomous.survey.design.R:68:3'): ard_dichotomous.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.00 1.00 1.00 1.00
      `expected`: 0.09 0.91 0.46 0.54
      ── Failure ('test-ard_dichotomous.survey.design.R:141:3'): ard_dichotomous.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is a double vector (18, 14, 18, 14)
      ── Failure ('test-ard_dichotomous.survey.design.R:147:3'): ard_dichotomous.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.0 1.0 1.0 1.0
      `expected`: 0.1 0.7 0.3 0.5
      ── Failure ('test-ard_dichotomous.survey.design.R:217:3'): ard_dichotomous.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (32, 32, 32, 32)
      ── Failure ('test-ard_dichotomous.survey.design.R:223:3'): ard_dichotomous.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.0 1.0 1.0 1.0
      `expected`: 0.0 0.3 0.2 0.2
      ── Failure ('test-ard_missing.survey.design.R:40:3'): ard_missing.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (1490, 1490, 711, 711)
      ── Failure ('test-ard_missing.survey.design.R:70:3'): ard_missing.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: NaN NaN NaN NaN
      `expected`:   0   0   0   0
      
      [ FAIL 31 | WARN 0 | SKIP 44 | PASS 463 ]
      Error: Test failures
      Execution halted
    ```

# clustringr

<details>

* Version: 1.0
* GitHub: NA
* Source code: https://github.com/cran/clustringr
* Date/Publication: 2019-03-30 16:10:03 UTC
* Number of recursive dependencies: 56

Run `revdepcheck::cloud_details(, "clustringr")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘clustringr-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: cluster_plot
    > ### Title: Plot string clusters as graph.
    > ### Aliases: cluster_plot
    > 
    > ### ** Examples
    > 
    > s_vec <- c("alcool","alcohol","alcoholic","brandy","brandie","cachaça")
    > s_clust <- cluster_strings(s_vec,method="lv",max_dist=3,algo="cc")
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─clustringr::cluster_strings(...)
      2. │ └─clustringr:::cluster_strings_cc(g)
      3. │   └─... %>% order_by_count
      4. ├─clustringr:::order_by_count(.)
      5. │ └─clusters %>% count(.data$cluster, sort = T, name = "size")
      6. ├─dplyr::count(., .data$cluster, sort = T, name = "size")
      7. └─dplyr:::count.data.frame(., .data$cluster, sort = T, name = "size")
      8.   └─dplyr:::map_chr(by_exprs, as_string)
      9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     11.         └─rlang (local) FUN(X[[i]], ...)
     12.           └─rlang:::abort_coercion(x, "a string")
     13.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespace in Imports field not imported from: ‘stringi’
      All declared Imports should be used.
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 5626 marked UTF-8 strings
    ```

# codebook

<details>

* Version: 0.9.5
* GitHub: https://github.com/rubenarslan/codebook
* Source code: https://github.com/cran/codebook
* Date/Publication: 2024-10-14 16:10:02 UTC
* Number of recursive dependencies: 187

Run `revdepcheck::cloud_details(, "codebook")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘codebook.Rmd’ using rmarkdown
    
    Quitting from lines 85-86 [cb] (codebook.Rmd)
    Error: processing vignette 'codebook.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘codebook.Rmd’
    
    --- re-building ‘codebook_qualtrics.Rmd’ using rmarkdown
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 65 marked UTF-8 strings
    ```

# codebookr

<details>

* Version: 0.1.8
* GitHub: https://github.com/brad-cannell/codebookr
* Source code: https://github.com/cran/codebookr
* Date/Publication: 2024-02-19 08:20:08 UTC
* Number of recursive dependencies: 84

Run `revdepcheck::cloud_details(, "codebookr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(codebookr)
      > 
      > test_check("codebookr")
      [ FAIL 25 | WARN 0 | SKIP 0 | PASS 44 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-cb_add_summary_stats.R:22:3'): cb_add_summary_stats is adding the expected classes to each column ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:22:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "id")
        5. │ └─codebookr:::cb_summary_stats_many_cats(df, .x, n_extreme_cats)
        6. │   └─... %>% head(n = n_extreme_cats)
        7. ├─utils::head(., n = n_extreme_cats)
        8. ├─dplyr::arrange(., n)
        9. ├─dplyr::count(., .data[[.x]])
       10. └─dplyr:::count.data.frame(., .data[[.x]])
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:30:3'): cb_add_summary_stats is adding the expected classes to each column ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:30:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "sex")
        5. │ └─codebookr:::cb_summary_stats_few_cats(df, .x, digits)
        6. │   └─... %>% ...
        7. ├─dplyr::mutate(...)
        8. ├─dplyr::select(., cat, n, cum_freq, percent)
        9. ├─dplyr::mutate(...)
       10. ├─dplyr::mutate(...)
       11. ├─dplyr::rename(., cat = 1)
       12. ├─dplyr::count(., .data[[.x]])
       13. └─dplyr:::count.data.frame(., .data[[.x]])
       14.   └─dplyr:::map_chr(by_exprs, as_string)
       15.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       16.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       17.         └─rlang (local) FUN(X[[i]], ...)
       18.           └─rlang:::abort_coercion(x, "a string")
       19.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:38:3'): cb_add_summary_stats is adding the expected classes to each column ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:38:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "date")
        5. │ └─codebookr:::cb_summary_stats_time(df, .x)
        6. │   └─... %>% dplyr::pull(n)
        7. ├─dplyr::pull(., n)
        8. ├─dplyr::count(., .data[[.x]])
        9. └─dplyr:::count.data.frame(., .data[[.x]])
       10.   └─dplyr:::map_chr(by_exprs, as_string)
       11.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       12.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       13.         └─rlang (local) FUN(X[[i]], ...)
       14.           └─rlang:::abort_coercion(x, "a string")
       15.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:104:3'): The the flow logic of cb_add_summary_stats is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:104:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "id")
        5. │ └─codebookr:::cb_summary_stats_many_cats(df, .x, n_extreme_cats)
        6. │   └─... %>% head(n = n_extreme_cats)
        7. ├─utils::head(., n = n_extreme_cats)
        8. ├─dplyr::arrange(., n)
        9. ├─dplyr::count(., .data[[.x]])
       10. └─dplyr:::count.data.frame(., .data[[.x]])
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:113:3'): The the flow logic of cb_add_summary_stats is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:113:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "likert")
        5. │ └─codebookr:::cb_summary_stats_few_cats(df, .x, digits)
        6. │   └─... %>% ...
        7. ├─dplyr::mutate(...)
        8. ├─dplyr::select(., cat, n, cum_freq, percent)
        9. ├─dplyr::mutate(...)
       10. ├─dplyr::mutate(...)
       11. ├─dplyr::rename(., cat = 1)
       12. ├─dplyr::count(., .data[[.x]])
       13. └─dplyr:::count.data.frame(., .data[[.x]])
       14.   └─dplyr:::map_chr(by_exprs, as_string)
       15.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       16.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       17.         └─rlang (local) FUN(X[[i]], ...)
       18.           └─rlang:::abort_coercion(x, "a string")
       19.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:122:3'): The the flow logic of cb_add_summary_stats is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:122:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "date")
        5. │ └─codebookr:::cb_summary_stats_time(df, .x)
        6. │   └─... %>% dplyr::pull(n)
        7. ├─dplyr::pull(., n)
        8. ├─dplyr::count(., .data[[.x]])
        9. └─dplyr:::count.data.frame(., .data[[.x]])
       10.   └─dplyr:::map_chr(by_exprs, as_string)
       11.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       12.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       13.         └─rlang (local) FUN(X[[i]], ...)
       14.           └─rlang:::abort_coercion(x, "a string")
       15.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:138:3'): The the flow logic of cb_add_summary_stats is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:138:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "outcome")
        5. │ └─codebookr:::cb_summary_stats_few_cats(df, .x, digits)
        6. │   └─... %>% ...
        7. ├─dplyr::mutate(...)
        8. ├─dplyr::select(., cat, n, cum_freq, percent)
        9. ├─dplyr::mutate(...)
       10. ├─dplyr::mutate(...)
       11. ├─dplyr::rename(., cat = 1)
       12. ├─dplyr::count(., .data[[.x]])
       13. └─dplyr:::count.data.frame(., .data[[.x]])
       14.   └─dplyr:::map_chr(by_exprs, as_string)
       15.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       16.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       17.         └─rlang (local) FUN(X[[i]], ...)
       18.           └─rlang:::abort_coercion(x, "a string")
       19.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:148:3'): The the flow logic of cb_add_summary_stats is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:148:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "id")
        5. │ └─codebookr:::cb_summary_stats_many_cats(df, .x, n_extreme_cats)
        6. │   └─... %>% head(n = n_extreme_cats)
        7. ├─utils::head(., n = n_extreme_cats)
        8. ├─dplyr::arrange(., n)
        9. ├─dplyr::count(., .data[[.x]])
       10. └─dplyr:::count.data.frame(., .data[[.x]])
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:161:3'): The the flow logic of cb_add_summary_stats is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:161:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "likert")
        5. │ └─codebookr:::cb_summary_stats_few_cats(df, .x, digits)
        6. │   └─... %>% ...
        7. ├─dplyr::mutate(...)
        8. ├─dplyr::select(., cat, n, cum_freq, percent)
        9. ├─dplyr::mutate(...)
       10. ├─dplyr::mutate(...)
       11. ├─dplyr::rename(., cat = 1)
       12. ├─dplyr::count(., .data[[.x]])
       13. └─dplyr:::count.data.frame(., .data[[.x]])
       14.   └─dplyr:::map_chr(by_exprs, as_string)
       15.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       16.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       17.         └─rlang (local) FUN(X[[i]], ...)
       18.           └─rlang:::abort_coercion(x, "a string")
       19.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:174:3'): The the flow logic of cb_add_summary_stats is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:174:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "days")
        5. │ └─codebookr:::cb_summary_stats_many_cats(df, .x, n_extreme_cats)
        6. │   └─... %>% head(n = n_extreme_cats)
        7. ├─utils::head(., n = n_extreme_cats)
        8. ├─dplyr::arrange(., n)
        9. ├─dplyr::count(., .data[[.x]])
       10. └─dplyr:::count.data.frame(., .data[[.x]])
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:187:3'): The the flow logic of cb_add_summary_stats is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:187:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "likert")
        5. │ └─codebookr:::cb_summary_stats_few_cats(df, .x, digits)
        6. │   └─... %>% ...
        7. ├─dplyr::mutate(...)
        8. ├─dplyr::select(., cat, n, cum_freq, percent)
        9. ├─dplyr::mutate(...)
       10. ├─dplyr::mutate(...)
       11. ├─dplyr::rename(., cat = 1)
       12. ├─dplyr::count(., .data[[.x]])
       13. └─dplyr:::count.data.frame(., .data[[.x]])
       14.   └─dplyr:::map_chr(by_exprs, as_string)
       15.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       16.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       17.         └─rlang (local) FUN(X[[i]], ...)
       18.           └─rlang:::abort_coercion(x, "a string")
       19.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:210:3'): The the flow logic of cb_add_summary_stats is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:210:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "three_cats")
        5. │ └─codebookr:::cb_summary_stats_few_cats(df, .x, digits)
        6. │   └─... %>% ...
        7. ├─dplyr::mutate(...)
        8. ├─dplyr::select(., cat, n, cum_freq, percent)
        9. ├─dplyr::mutate(...)
       10. ├─dplyr::mutate(...)
       11. ├─dplyr::rename(., cat = 1)
       12. ├─dplyr::count(., .data[[.x]])
       13. └─dplyr:::count.data.frame(., .data[[.x]])
       14.   └─dplyr:::map_chr(by_exprs, as_string)
       15.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       16.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       17.         └─rlang (local) FUN(X[[i]], ...)
       18.           └─rlang:::abort_coercion(x, "a string")
       19.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:224:3'): The the flow logic of cb_add_summary_stats is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:224:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "three_cats")
        5. │ └─codebookr:::cb_summary_stats_few_cats(df, .x, digits)
        6. │   └─... %>% ...
        7. ├─dplyr::mutate(...)
        8. ├─dplyr::select(., cat, n, cum_freq, percent)
        9. ├─dplyr::mutate(...)
       10. ├─dplyr::mutate(...)
       11. ├─dplyr::rename(., cat = 1)
       12. ├─dplyr::count(., .data[[.x]])
       13. └─dplyr:::count.data.frame(., .data[[.x]])
       14.   └─dplyr:::map_chr(by_exprs, as_string)
       15.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       16.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       17.         └─rlang (local) FUN(X[[i]], ...)
       18.           └─rlang:::abort_coercion(x, "a string")
       19.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:253:3'): The the flow logic of cb_add_summary_stats is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:253:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "date")
        5. │ └─codebookr:::cb_summary_stats_time(df, .x)
        6. │   └─... %>% dplyr::pull(n)
        7. ├─dplyr::pull(., n)
        8. ├─dplyr::count(., .data[[.x]])
        9. └─dplyr:::count.data.frame(., .data[[.x]])
       10.   └─dplyr:::map_chr(by_exprs, as_string)
       11.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       12.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       13.         └─rlang (local) FUN(X[[i]], ...)
       14.           └─rlang:::abort_coercion(x, "a string")
       15.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:263:3'): The the flow logic of cb_add_summary_stats is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:263:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "date")
        5. │ └─codebookr:::cb_summary_stats_time(df, .x)
        6. │   └─... %>% dplyr::pull(n)
        7. ├─dplyr::pull(., n)
        8. ├─dplyr::count(., .data[[.x]])
        9. └─dplyr:::count.data.frame(., .data[[.x]])
       10.   └─dplyr:::map_chr(by_exprs, as_string)
       11.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       12.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       13.         └─rlang (local) FUN(X[[i]], ...)
       14.           └─rlang:::abort_coercion(x, "a string")
       15.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:272:3'): The the flow logic of cb_add_summary_stats is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:272:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "time")
        5. │ └─codebookr:::cb_summary_stats_time(df, .x)
        6. │   └─... %>% dplyr::pull(n)
        7. ├─dplyr::pull(., n)
        8. ├─dplyr::count(., .data[[.x]])
        9. └─dplyr:::count.data.frame(., .data[[.x]])
       10.   └─dplyr:::map_chr(by_exprs, as_string)
       11.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       12.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       13.         └─rlang (local) FUN(X[[i]], ...)
       14.           └─rlang:::abort_coercion(x, "a string")
       15.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:297:3'): The many_cats argument is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:297:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(study, "id", many_cats = 30)
        5. │ └─codebookr:::cb_summary_stats_few_cats(df, .x, digits)
        6. │   └─... %>% ...
        7. ├─dplyr::mutate(...)
        8. ├─dplyr::select(., cat, n, cum_freq, percent)
        9. ├─dplyr::mutate(...)
       10. ├─dplyr::mutate(...)
       11. ├─dplyr::rename(., cat = 1)
       12. ├─dplyr::count(., .data[[.x]])
       13. └─dplyr:::count.data.frame(., .data[[.x]])
       14.   └─dplyr:::map_chr(by_exprs, as_string)
       15.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       16.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       17.         └─rlang (local) FUN(X[[i]], ...)
       18.           └─rlang:::abort_coercion(x, "a string")
       19.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:309:3'): The many_cats argument is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:309:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(...)
        5. │ └─codebookr:::cb_summary_stats_many_cats(df, .x, n_extreme_cats)
        6. │   └─... %>% head(n = n_extreme_cats)
        7. ├─utils::head(., n = n_extreme_cats)
        8. ├─dplyr::arrange(., n)
        9. ├─dplyr::count(., .data[[.x]])
       10. └─dplyr:::count.data.frame(., .data[[.x]])
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_add_summary_stats.R:355:3'): The num_to_cat argument is working as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-cb_add_summary_stats.R:355:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr:::cb_add_summary_stats(...)
        5. │ └─codebookr:::cb_summary_stats_many_cats(df, .x, n_extreme_cats)
        6. │   └─... %>% head(n = n_extreme_cats)
        7. ├─utils::head(., n = n_extreme_cats)
        8. ├─dplyr::arrange(., n)
        9. ├─dplyr::count(., .data[[.x]])
       10. └─dplyr:::count.data.frame(., .data[[.x]])
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_summary_stats_few_cats.R:6:1'): (code run outside of `test_that()`) ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─codebookr:::cb_summary_stats_few_cats(study, "sex", digits = 2) at test-cb_summary_stats_few_cats.R:6:1
        2. │ └─... %>% ...
        3. ├─dplyr::mutate(...)
        4. ├─dplyr::select(., cat, n, cum_freq, percent)
        5. ├─dplyr::mutate(...)
        6. ├─dplyr::mutate(...)
        7. ├─dplyr::rename(., cat = 1)
        8. ├─dplyr::count(., .data[[.x]])
        9. └─dplyr:::count.data.frame(., .data[[.x]])
       10.   └─dplyr:::map_chr(by_exprs, as_string)
       11.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       12.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       13.         └─rlang (local) FUN(X[[i]], ...)
       14.           └─rlang:::abort_coercion(x, "a string")
       15.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_summary_stats_many_cats.R:6:1'): (code run outside of `test_that()`) ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─codebookr:::cb_summary_stats_many_cats(study, "id") at test-cb_summary_stats_many_cats.R:6:1
        2. │ └─... %>% head(n = n_extreme_cats)
        3. ├─utils::head(., n = n_extreme_cats)
        4. ├─dplyr::arrange(., n)
        5. ├─dplyr::count(., .data[[.x]])
        6. └─dplyr:::count.data.frame(., .data[[.x]])
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test-cb_summary_stats_time.R:6:1'): (code run outside of `test_that()`) ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─codebookr:::cb_summary_stats_time(study, "date", digits = 2) at test-cb_summary_stats_time.R:6:1
        2. │ └─... %>% dplyr::pull(n)
        3. ├─dplyr::pull(., n)
        4. ├─dplyr::count(., .data[[.x]])
        5. └─dplyr:::count.data.frame(., .data[[.x]])
        6.   └─dplyr:::map_chr(by_exprs, as_string)
        7.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        8.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        9.         └─rlang (local) FUN(X[[i]], ...)
       10.           └─rlang:::abort_coercion(x, "a string")
       11.             └─rlang::abort(msg, call = call)
      ── Error ('test-codebook.R:6:3'): The check for a data frame works as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(class(codebook(df)), "rdocx") at test-codebook.R:6:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─codebookr::codebook(df)
        5. │ └─df %>% cb_add_summary_stats(col_nms[[i]]) %>% ...
        6. ├─codebookr:::cb_summary_stats_to_ft(.)
        7. ├─codebookr:::cb_add_summary_stats(., col_nms[[i]])
        8. │ └─codebookr:::cb_summary_stats_many_cats(df, .x, n_extreme_cats)
        9. │   └─... %>% head(n = n_extreme_cats)
       10. ├─utils::head(., n = n_extreme_cats)
       11. ├─dplyr::arrange(., n)
       12. ├─dplyr::count(., .data[[.x]])
       13. └─dplyr:::count.data.frame(., .data[[.x]])
       14.   └─dplyr:::map_chr(by_exprs, as_string)
       15.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       16.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       17.         └─rlang (local) FUN(X[[i]], ...)
       18.           └─rlang:::abort_coercion(x, "a string")
       19.             └─rlang::abort(msg, call = call)
      ── Error ('test-codebook.R:18:3'): The check for a data frame works as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_message(df %>% codebook(), "The codebook function currently sees the name of the data frame you passed to the `df` argument as '.'. This is probably because you used a pipe to pass the data frame name into the codebook function. If you want the actual name of the data frame to be printed in the `Dataset name:` row of the metadata table, do not use a pipe to pass the data frame name into the codebook function.") at test-codebook.R:18:3
        2. │ └─testthat:::quasi_capture(enquo(object), label, capture_messages)
        3. │   ├─testthat (local) .capture(...)
        4. │   │ └─base::withCallingHandlers(...)
        5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        6. ├─df %>% codebook()
        7. ├─codebookr::codebook(.)
        8. │ └─df %>% cb_add_summary_stats(col_nms[[i]]) %>% ...
        9. ├─codebookr:::cb_summary_stats_to_ft(.)
       10. ├─codebookr:::cb_add_summary_stats(., col_nms[[i]])
       11. │ └─codebookr:::cb_summary_stats_many_cats(df, .x, n_extreme_cats)
       12. │   └─... %>% head(n = n_extreme_cats)
       13. ├─utils::head(., n = n_extreme_cats)
       14. ├─dplyr::arrange(., n)
       15. ├─dplyr::count(., .data[[.x]])
       16. └─dplyr:::count.data.frame(., .data[[.x]])
       17.   └─dplyr:::map_chr(by_exprs, as_string)
       18.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       19.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       20.         └─rlang (local) FUN(X[[i]], ...)
       21.           └─rlang:::abort_coercion(x, "a string")
       22.             └─rlang::abort(msg, call = call)
      ── Error ('test-codebook.R:24:3'): The word 'Codebook' is printed at the top of the Word document ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─codebookr::codebook(...) at test-codebook.R:24:3
        2. │ └─df %>% cb_add_summary_stats(col_nms[[i]]) %>% ...
        3. ├─codebookr:::cb_summary_stats_to_ft(.)
        4. ├─codebookr:::cb_add_summary_stats(., col_nms[[i]])
        5. │ └─codebookr:::cb_summary_stats_many_cats(df, .x, n_extreme_cats)
        6. │   └─... %>% head(n = n_extreme_cats)
        7. ├─utils::head(., n = n_extreme_cats)
        8. ├─dplyr::arrange(., n)
        9. ├─dplyr::count(., .data[[.x]])
       10. └─dplyr:::count.data.frame(., .data[[.x]])
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      
      [ FAIL 25 | WARN 0 | SKIP 0 | PASS 44 ]
      Error: Test failures
      Execution halted
    ```

# codified

<details>

* Version: 0.3.0
* GitHub: https://github.com/OuhscBbmc/codified
* Source code: https://github.com/cran/codified
* Date/Publication: 2022-08-12 13:40:06 UTC
* Number of recursive dependencies: 88

Run `revdepcheck::cloud_details(, "codified")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘codified-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: table_nih_enrollment
    > ### Title: Produce an NIH-compliant enrollment table.
    > ### Aliases: table_nih_enrollment table_nih_enrollment_pretty
    > 
    > ### ** Examples
    > 
    > ds_1 <- tibble::tribble(
    +   ~subject_id,   ~gender  , ~race                      ,   ~ethnicity                     ,
    +            1L,   "Male"   , "Black or African American",  "Not Hispanic or Latino"        ,
    +            2L,   "Male"   , "Black or African American",  "Not Hispanic or Latino"        ,
    +            3L,   "Female" , "Black or African American",  "Unknown/Not Reported Ethnicity",
    +            4L,   "Male"   , "White"                    ,  "Not Hispanic or Latino"        ,
    +            5L,   "Male"   , "White"                    ,  "Not Hispanic or Latino"        ,
    +            6L,   "Female" , "White"                    ,  "Not Hispanic or Latino"        ,
    +            7L,   "Male"   , "White"                    ,  "Hispanic or Latino"            ,
    +            8L,   "Male"   , "White"                    ,  "Hispanic or Latino"
    + )
    > 
    > table_nih_enrollment(ds_1)
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. └─codified::table_nih_enrollment(ds_1)
      2.   ├─dplyr::arrange(...)
      3.   ├─dplyr::select(...)
      4.   ├─dplyr::mutate(...)
      5.   ├─dplyr::full_join(...)
      6.   ├─dplyr::count(d, .data$gender, .data$race, .data$ethnicity)
      7.   └─dplyr:::count.data.frame(d, .data$gender, .data$race, .data$ethnicity)
      8.     └─dplyr:::map_chr(by_exprs, as_string)
      9.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     10.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     11.           └─rlang (local) FUN(X[[i]], ...)
     12.             └─rlang:::abort_coercion(x, "a string")
     13.               └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(codified)
      > 
      > test_check("codified")
      Rows: 500 Columns: 12
      -- Column specification --------------------------------------------------------
      Delimiter: ","
      chr  (4): name_last, name_first, address, email
      dbl  (7): record_id, phone, ethnicity, race, gender, height_cm, weight_kg
      date (1): dob
      
      i Use `spec()` to retrieve the full column specification for this data.
      i Specify the column types or set `show_col_types = FALSE` to quiet this message.
      [ FAIL 7 | WARN 16 | SKIP 0 | PASS 0 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-table-nih-enrollment-pretty.R:17:3'): Smoke Test ───────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─codified::table_nih_enrollment_pretty(ds_1a) at test-table-nih-enrollment-pretty.R:17:3
        2.   ├─kableExtra::add_header_above(...)
        3.   ├─kableExtra::add_header_above(...)
        4.   ├─kableExtra::column_spec(...)
        5.   ├─kableExtra::kable_styling(...)
        6.   ├─knitr::kable(...)
        7.   ├─dplyr::select(...)
        8.   ├─tidyr::pivot_wider(...)
        9.   ├─dplyr::select(...)
       10.   ├─dplyr::mutate(...)
       11.   └─codified::table_nih_enrollment(...)
       12.     ├─dplyr::arrange(...)
       13.     ├─dplyr::select(...)
       14.     ├─dplyr::mutate(...)
       15.     ├─dplyr::full_join(...)
       16.     ├─dplyr::count(d, .data$gender, .data$race, .data$ethnicity)
       17.     └─dplyr:::count.data.frame(d, .data$gender, .data$race, .data$ethnicity)
       18.       └─dplyr:::map_chr(by_exprs, as_string)
       19.         └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       20.           └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       21.             └─rlang (local) FUN(X[[i]], ...)
       22.               └─rlang:::abort_coercion(x, "a string")
       23.                 └─rlang::abort(msg, call = call)
      ── Error ('test-table-nih-enrollment.R:46:3'): Smoke Test ──────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─codified::table_nih_enrollment(ds_1a) at test-table-nih-enrollment.R:46:3
        2.   ├─dplyr::arrange(...)
        3.   ├─dplyr::select(...)
        4.   ├─dplyr::mutate(...)
        5.   ├─dplyr::full_join(...)
        6.   ├─dplyr::count(d, .data$gender, .data$race, .data$ethnicity)
        7.   └─dplyr:::count.data.frame(d, .data$gender, .data$race, .data$ethnicity)
        8.     └─dplyr:::map_chr(by_exprs, as_string)
        9.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.           └─rlang (local) FUN(X[[i]], ...)
       12.             └─rlang:::abort_coercion(x, "a string")
       13.               └─rlang::abort(msg, call = call)
      ── Error ('test-table-nih-enrollment.R:51:3'): ds_1a --no metadata required ────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─codified::table_nih_enrollment(ds_1a) at test-table-nih-enrollment.R:51:3
        2.   ├─dplyr::arrange(...)
        3.   ├─dplyr::select(...)
        4.   ├─dplyr::mutate(...)
        5.   ├─dplyr::full_join(...)
        6.   ├─dplyr::count(d, .data$gender, .data$race, .data$ethnicity)
        7.   └─dplyr:::count.data.frame(d, .data$gender, .data$race, .data$ethnicity)
        8.     └─dplyr:::map_chr(by_exprs, as_string)
        9.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.           └─rlang (local) FUN(X[[i]], ...)
       12.             └─rlang:::abort_coercion(x, "a string")
       13.               └─rlang::abort(msg, call = call)
      ── Error ('test-table-nih-enrollment.R:75:3'): ds_1b --ethnicity metadata required ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─codified::table_nih_enrollment(d_1b, d_lu_ethnicity = d_lu_ethnicity) at test-table-nih-enrollment.R:75:3
        2.   ├─dplyr::arrange(...)
        3.   ├─dplyr::select(...)
        4.   ├─dplyr::mutate(...)
        5.   ├─dplyr::full_join(...)
        6.   ├─dplyr::count(d, .data$gender, .data$race, .data$ethnicity)
        7.   └─dplyr:::count.data.frame(d, .data$gender, .data$race, .data$ethnicity)
        8.     └─dplyr:::map_chr(by_exprs, as_string)
        9.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.           └─rlang (local) FUN(X[[i]], ...)
       12.             └─rlang:::abort_coercion(x, "a string")
       13.               └─rlang::abort(msg, call = call)
      ── Error ('test-table-nih-enrollment.R:115:3'): ds_1c --all metadata required ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─codified::table_nih_enrollment(...) at test-table-nih-enrollment.R:115:3
        2.   ├─dplyr::arrange(...)
        3.   ├─dplyr::select(...)
        4.   ├─dplyr::mutate(...)
        5.   ├─dplyr::full_join(...)
        6.   ├─dplyr::count(d, .data$gender, .data$race, .data$ethnicity)
        7.   └─dplyr:::count.data.frame(d, .data$gender, .data$race, .data$ethnicity)
        8.     └─dplyr:::map_chr(by_exprs, as_string)
        9.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.           └─rlang (local) FUN(X[[i]], ...)
       12.             └─rlang:::abort_coercion(x, "a string")
       13.               └─rlang::abort(msg, call = call)
      ── Error ('test-table-nih-enrollment.R:133:3'): ds_1d --different variable names ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─codified::table_nih_enrollment(...) at test-table-nih-enrollment.R:133:3
        2.   ├─dplyr::arrange(...)
        3.   ├─dplyr::select(...)
        4.   ├─dplyr::mutate(...)
        5.   ├─dplyr::full_join(...)
        6.   ├─dplyr::count(d, .data$gender, .data$race, .data$ethnicity)
        7.   └─dplyr:::count.data.frame(d, .data$gender, .data$race, .data$ethnicity)
        8.     └─dplyr:::map_chr(by_exprs, as_string)
        9.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.           └─rlang (local) FUN(X[[i]], ...)
       12.             └─rlang:::abort_coercion(x, "a string")
       13.               └─rlang::abort(msg, call = call)
      ── Error ('test-table-nih-enrollment.R:173:3'): ds_2 --500 patients w/ numeric codes ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─codified::table_nih_enrollment(...) at test-table-nih-enrollment.R:173:3
        2.   ├─dplyr::arrange(...)
        3.   ├─dplyr::select(...)
        4.   ├─dplyr::mutate(...)
        5.   ├─dplyr::full_join(...)
        6.   ├─dplyr::count(d, .data$gender, .data$race, .data$ethnicity)
        7.   └─dplyr:::count.data.frame(d, .data$gender, .data$race, .data$ethnicity)
        8.     └─dplyr:::map_chr(by_exprs, as_string)
        9.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.           └─rlang (local) FUN(X[[i]], ...)
       12.             └─rlang:::abort_coercion(x, "a string")
       13.               └─rlang::abort(msg, call = call)
      
      [ FAIL 7 | WARN 16 | SKIP 0 | PASS 0 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘nih-enrollment-html.Rmd’ using rmarkdown
    
    Quitting from lines 95-103 [local-apply-map] (nih-enrollment-html.Rmd)
    Error: processing vignette 'nih-enrollment-html.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘nih-enrollment-html.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘nih-enrollment-html.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# comperank

<details>

* Version: 0.1.1
* GitHub: https://github.com/echasnovski/comperank
* Source code: https://github.com/cran/comperank
* Date/Publication: 2020-03-03 23:10:02 UTC
* Number of recursive dependencies: 66

Run `revdepcheck::cloud_details(, "comperank")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘comperank-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: colley
    > ### Title: Colley method
    > ### Aliases: colley rate_colley rank_colley
    > 
    > ### ** Examples
    > 
    > rate_colley(ncaa2005)
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─comperank::rate_colley(ncaa2005)
      2. │ └─comperank:::assert_pairgames(cr)
      3. │   └─comperes::is_pairgames(cr_data)
      4. │     └─... %>% "isAllTwo"[[]]
      5. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
      6. ├─dplyr::count(., .data$game)
      7. └─dplyr:::count.data.frame(., .data$game)
      8.   └─dplyr:::map_chr(by_exprs, as_string)
      9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     11.         └─rlang (local) FUN(X[[i]], ...)
     12.           └─rlang:::abort_coercion(x, "a string")
     13.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(comperank)
      Loading required package: comperes
      > 
      > test_check("comperank")
      [ FAIL 38 | WARN 2 | SKIP 0 | PASS 133 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-colley.R:15:3'): rate_colley works ─────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rate_colley(cr_data) at test-colley.R:15:3
        2. │ └─comperank:::assert_pairgames(cr)
        3. │   └─comperes::is_pairgames(cr_data)
        4. │     └─... %>% "isAllTwo"[[]]
        5. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        6. ├─dplyr::count(., .data$game)
        7. └─dplyr:::count.data.frame(., .data$game)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-colley.R:25:3'): rate_colley works with factor `player` ────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rate_colley(input_1) at test-colley.R:25:3
        2. │ └─comperank:::assert_pairgames(cr)
        3. │   └─comperes::is_pairgames(cr_data)
        4. │     └─... %>% "isAllTwo"[[]]
        5. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        6. ├─dplyr::count(., .data$game)
        7. └─dplyr:::count.data.frame(., .data$game)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-colley.R:42:3'): rate_colley works with numeric `player` ───────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rate_colley(input) at test-colley.R:42:3
        2. │ └─comperank:::assert_pairgames(cr)
        3. │   └─comperes::is_pairgames(cr_data)
        4. │     └─... %>% "isAllTwo"[[]]
        5. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        6. ├─dplyr::count(., .data$game)
        7. └─dplyr:::count.data.frame(., .data$game)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-colley.R:51:3'): rate_colley works with not all matchups present ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rate_colley(input) at test-colley.R:51:3
        2. │ └─comperank:::assert_pairgames(cr)
        3. │   └─comperes::is_pairgames(cr_data)
        4. │     └─... %>% "isAllTwo"[[]]
        5. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        6. ├─dplyr::count(., .data$game)
        7. └─dplyr:::count.data.frame(., .data$game)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Failure ('test-colley.R:69:3'): rate_colley throws error on not pair games ──
      `rate_colley(input_nonpair)` threw an error with unexpected message.
      Expected match: "not.*pairgames"
      Actual message: "Can't convert a call to a string."
      Backtrace:
           ▆
        1. ├─testthat::expect_error(rate_colley(input_nonpair), "not.*pairgames") at test-colley.R:69:3
        2. │ └─testthat:::quasi_capture(...)
        3. │   ├─testthat (local) .capture(...)
        4. │   │ └─base::withCallingHandlers(...)
        5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        6. ├─comperank::rate_colley(input_nonpair)
        7. │ └─comperank:::assert_pairgames(cr)
        8. │   └─comperes::is_pairgames(cr_data)
        9. │     └─... %>% "isAllTwo"[[]]
       10. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       11. ├─dplyr::count(., .data$game)
       12. └─dplyr:::count.data.frame(., .data$game)
       13.   └─dplyr:::map_chr(by_exprs, as_string)
       14.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       15.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       16.         └─rlang (local) FUN(X[[i]], ...)
       17.           └─rlang:::abort_coercion(x, "a string")
       18.             └─rlang::abort(msg, call = call)
      ── Error ('test-colley.R:75:3'): rank_colley works ─────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rank_colley(cr_data) at test-colley.R:75:3
        2. │ ├─comperank:::add_ranking(...)
        3. │ │ └─comperank::round_rank(...)
        4. │ └─comperank::rate_colley(cr_data)
        5. │   └─comperank:::assert_pairgames(cr)
        6. │     └─comperes::is_pairgames(cr_data)
        7. │       └─... %>% "isAllTwo"[[]]
        8. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        9. ├─dplyr::count(., .data$game)
       10. └─dplyr:::count.data.frame(., .data$game)
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      ── Error ('test-elo.R:15:3'): rate_elo works ───────────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rate_elo(cr_data, K = 30, ksi = 400, initial_ratings = 0) at test-elo.R:15:3
        2. │ ├─... %>% ...
        3. │ └─comperank::rate_iterative(...)
        4. │   └─comperank::add_iterative_ratings(...)
        5. │     └─comperank:::assert_pairgames(cr)
        6. │       └─comperes::is_pairgames(cr_data)
        7. │         └─... %>% "isAllTwo"[[]]
        8. ├─dplyr::rename(., rating_elo = !!rlang::sym("rating_iterative"))
        9. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       10. ├─dplyr::count(., .data$game)
       11. └─dplyr:::count.data.frame(., .data$game)
       12.   └─dplyr:::map_chr(by_exprs, as_string)
       13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       15.         └─rlang (local) FUN(X[[i]], ...)
       16.           └─rlang:::abort_coercion(x, "a string")
       17.             └─rlang::abort(msg, call = call)
      ── Error ('test-elo.R:30:3'): rate_elo handles factor `player` ─────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rate_elo(input, K = 30, ksi = 400, initial_ratings = 0) at test-elo.R:30:3
        2. │ ├─... %>% ...
        3. │ └─comperank::rate_iterative(...)
        4. │   └─comperank::add_iterative_ratings(...)
        5. │     └─comperank:::assert_pairgames(cr)
        6. │       └─comperes::is_pairgames(cr_data)
        7. │         └─... %>% "isAllTwo"[[]]
        8. ├─dplyr::rename(., rating_elo = !!rlang::sym("rating_iterative"))
        9. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       10. ├─dplyr::count(., .data$game)
       11. └─dplyr:::count.data.frame(., .data$game)
       12.   └─dplyr:::map_chr(by_exprs, as_string)
       13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       15.         └─rlang (local) FUN(X[[i]], ...)
       16.           └─rlang:::abort_coercion(x, "a string")
       17.             └─rlang::abort(msg, call = call)
      ── Error ('test-elo.R:43:3'): rate_elo handles numeric `player` ────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rate_elo(input, K = 30, ksi = 400, initial_ratings = 0) at test-elo.R:43:3
        2. │ ├─... %>% ...
        3. │ └─comperank::rate_iterative(...)
        4. │   └─comperank::add_iterative_ratings(...)
        5. │     └─comperank:::assert_pairgames(cr)
        6. │       └─comperes::is_pairgames(cr_data)
        7. │         └─... %>% "isAllTwo"[[]]
        8. ├─dplyr::rename(., rating_elo = !!rlang::sym("rating_iterative"))
        9. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       10. ├─dplyr::count(., .data$game)
       11. └─dplyr:::count.data.frame(., .data$game)
       12.   └─dplyr:::map_chr(by_exprs, as_string)
       13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       15.         └─rlang (local) FUN(X[[i]], ...)
       16.           └─rlang:::abort_coercion(x, "a string")
       17.             └─rlang::abort(msg, call = call)
      ── Error ('test-elo.R:54:3'): rate_elo handles data frame `initial_ratings` ────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rate_elo(cr_data, K = 30, ksi = 400, initial_ratings = init_rat_df) at test-elo.R:54:3
        2. │ ├─... %>% ...
        3. │ └─comperank::rate_iterative(...)
        4. │   └─comperank::add_iterative_ratings(...)
        5. │     └─comperank:::assert_pairgames(cr)
        6. │       └─comperes::is_pairgames(cr_data)
        7. │         └─... %>% "isAllTwo"[[]]
        8. ├─dplyr::rename(., rating_elo = !!rlang::sym("rating_iterative"))
        9. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       10. ├─dplyr::count(., .data$game)
       11. └─dplyr:::count.data.frame(., .data$game)
       12.   └─dplyr:::map_chr(by_exprs, as_string)
       13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       15.         └─rlang (local) FUN(X[[i]], ...)
       16.           └─rlang:::abort_coercion(x, "a string")
       17.             └─rlang::abort(msg, call = call)
      ── Error ('test-elo.R:67:3'): rank_elo works ───────────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rank_elo(cr_data) at test-elo.R:67:3
        2. │ ├─comperank:::add_ranking(...)
        3. │ │ └─comperank::round_rank(...)
        4. │ └─comperank::rate_elo(cr_data = cr_data, K = K, ksi = ksi, initial_ratings = initial_ratings)
        5. │   ├─... %>% ...
        6. │   └─comperank::rate_iterative(...)
        7. │     └─comperank::add_iterative_ratings(...)
        8. │       └─comperank:::assert_pairgames(cr)
        9. │         └─comperes::is_pairgames(cr_data)
       10. │           └─... %>% "isAllTwo"[[]]
       11. ├─dplyr::rename(., rating_elo = !!rlang::sym("rating_iterative"))
       12. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       13. ├─dplyr::count(., .data$game)
       14. └─dplyr:::count.data.frame(., .data$game)
       15.   └─dplyr:::map_chr(by_exprs, as_string)
       16.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       17.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       18.         └─rlang (local) FUN(X[[i]], ...)
       19.           └─rlang:::abort_coercion(x, "a string")
       20.             └─rlang::abort(msg, call = call)
      ── Error ('test-elo.R:91:3'): rank_elo handles factor `player` ─────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rank_elo(input, K = 30, ksi = 400, initial_ratings = 0) at test-elo.R:91:3
        2. │ ├─comperank:::add_ranking(...)
        3. │ │ └─comperank::round_rank(...)
        4. │ └─comperank::rate_elo(cr_data = cr_data, K = K, ksi = ksi, initial_ratings = initial_ratings)
        5. │   ├─... %>% ...
        6. │   └─comperank::rate_iterative(...)
        7. │     └─comperank::add_iterative_ratings(...)
        8. │       └─comperank:::assert_pairgames(cr)
        9. │         └─comperes::is_pairgames(cr_data)
       10. │           └─... %>% "isAllTwo"[[]]
       11. ├─dplyr::rename(., rating_elo = !!rlang::sym("rating_iterative"))
       12. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       13. ├─dplyr::count(., .data$game)
       14. └─dplyr:::count.data.frame(., .data$game)
       15.   └─dplyr:::map_chr(by_exprs, as_string)
       16.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       17.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       18.         └─rlang (local) FUN(X[[i]], ...)
       19.           └─rlang:::abort_coercion(x, "a string")
       20.             └─rlang::abort(msg, call = call)
      ── Error ('test-elo.R:103:3'): rank_elo handles numeric `player` ───────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rank_elo(input, K = 30, ksi = 400, initial_ratings = 0) at test-elo.R:103:3
        2. │ ├─comperank:::add_ranking(...)
        3. │ │ └─comperank::round_rank(...)
        4. │ └─comperank::rate_elo(cr_data = cr_data, K = K, ksi = ksi, initial_ratings = initial_ratings)
        5. │   ├─... %>% ...
        6. │   └─comperank::rate_iterative(...)
        7. │     └─comperank::add_iterative_ratings(...)
        8. │       └─comperank:::assert_pairgames(cr)
        9. │         └─comperes::is_pairgames(cr_data)
       10. │           └─... %>% "isAllTwo"[[]]
       11. ├─dplyr::rename(., rating_elo = !!rlang::sym("rating_iterative"))
       12. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       13. ├─dplyr::count(., .data$game)
       14. └─dplyr:::count.data.frame(., .data$game)
       15.   └─dplyr:::map_chr(by_exprs, as_string)
       16.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       17.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       18.         └─rlang (local) FUN(X[[i]], ...)
       19.           └─rlang:::abort_coercion(x, "a string")
       20.             └─rlang::abort(msg, call = call)
      ── Error ('test-elo.R:113:3'): rank_elo handles data frame `initial_ratings` ───
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rank_elo(cr_data, K = 30, ksi = 400, initial_ratings = init_rat_df) at test-elo.R:113:3
        2. │ ├─comperank:::add_ranking(...)
        3. │ │ └─comperank::round_rank(...)
        4. │ └─comperank::rate_elo(cr_data = cr_data, K = K, ksi = ksi, initial_ratings = initial_ratings)
        5. │   ├─... %>% ...
        6. │   └─comperank::rate_iterative(...)
        7. │     └─comperank::add_iterative_ratings(...)
        8. │       └─comperank:::assert_pairgames(cr)
        9. │         └─comperes::is_pairgames(cr_data)
       10. │           └─... %>% "isAllTwo"[[]]
       11. ├─dplyr::rename(., rating_elo = !!rlang::sym("rating_iterative"))
       12. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       13. ├─dplyr::count(., .data$game)
       14. └─dplyr:::count.data.frame(., .data$game)
       15.   └─dplyr:::map_chr(by_exprs, as_string)
       16.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       17.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       18.         └─rlang (local) FUN(X[[i]], ...)
       19.           └─rlang:::abort_coercion(x, "a string")
       20.             └─rlang::abort(msg, call = call)
      ── Error ('test-elo.R:125:3'): add_elo_ratings works ───────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::add_elo_ratings(ncaa2005, K = 30, ksi = 400, initial_ratings = 0) at test-elo.R:125:3
        2. │ └─comperank::add_iterative_ratings(...)
        3. │   └─comperank:::assert_pairgames(cr)
        4. │     └─comperes::is_pairgames(cr_data)
        5. │       └─... %>% "isAllTwo"[[]]
        6. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        7. ├─dplyr::count(., .data$game)
        8. └─dplyr:::count.data.frame(., .data$game)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-elo.R:149:3'): add_elo_ratings handles data frame `initial_ratings` ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::add_elo_ratings(ncaa2005, K = 30, ksi = 400, initial_ratings = init_rat_df) at test-elo.R:149:3
        2. │ └─comperank::add_iterative_ratings(...)
        3. │   └─comperank:::assert_pairgames(cr)
        4. │     └─comperes::is_pairgames(cr_data)
        5. │       └─... %>% "isAllTwo"[[]]
        6. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        7. ├─dplyr::count(., .data$game)
        8. └─dplyr:::count.data.frame(., .data$game)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-iterative.R:30:3'): rate_iterative works ───────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rate_iterative(...) at test-iterative.R:30:3
        2. │ └─comperank::add_iterative_ratings(...)
        3. │   └─comperank:::assert_pairgames(cr)
        4. │     └─comperes::is_pairgames(cr_data)
        5. │       └─... %>% "isAllTwo"[[]]
        6. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        7. ├─dplyr::count(., .data$game)
        8. └─dplyr:::count.data.frame(., .data$game)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-iterative.R:54:3'): rate_iterative handles factor `player` ─────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rate_iterative(input, test_rate_fun, initial_ratings = 0) at test-iterative.R:54:3
        2. │ └─comperank::add_iterative_ratings(...)
        3. │   └─comperank:::assert_pairgames(cr)
        4. │     └─comperes::is_pairgames(cr_data)
        5. │       └─... %>% "isAllTwo"[[]]
        6. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        7. ├─dplyr::count(., .data$game)
        8. └─dplyr:::count.data.frame(., .data$game)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-iterative.R:64:3'): rate_iterative handles data frame `initial_ratings` ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rate_iterative(cr_data, test_rate_fun, initial_ratings = init_rat_df) at test-iterative.R:64:3
        2. │ └─comperank::add_iterative_ratings(...)
        3. │   └─comperank:::assert_pairgames(cr)
        4. │     └─comperes::is_pairgames(cr_data)
        5. │       └─... %>% "isAllTwo"[[]]
        6. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        7. ├─dplyr::count(., .data$game)
        8. └─dplyr:::count.data.frame(., .data$game)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-iterative.R:79:3'): rank_iterative works ───────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rank_iterative(...) at test-iterative.R:79:3
        2. │ ├─comperank:::add_ranking(...)
        3. │ │ └─comperank::round_rank(...)
        4. │ └─comperank::rate_iterative(...)
        5. │   └─comperank::add_iterative_ratings(...)
        6. │     └─comperank:::assert_pairgames(cr)
        7. │       └─comperes::is_pairgames(cr_data)
        8. │         └─... %>% "isAllTwo"[[]]
        9. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       10. ├─dplyr::count(., .data$game)
       11. └─dplyr:::count.data.frame(., .data$game)
       12.   └─dplyr:::map_chr(by_exprs, as_string)
       13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       15.         └─rlang (local) FUN(X[[i]], ...)
       16.           └─rlang:::abort_coercion(x, "a string")
       17.             └─rlang::abort(msg, call = call)
      ── Error ('test-iterative.R:104:3'): rank_iterative handles factor `player` ────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rank_iterative(input, test_rate_fun, initial_ratings = 0) at test-iterative.R:104:3
        2. │ ├─comperank:::add_ranking(...)
        3. │ │ └─comperank::round_rank(...)
        4. │ └─comperank::rate_iterative(...)
        5. │   └─comperank::add_iterative_ratings(...)
        6. │     └─comperank:::assert_pairgames(cr)
        7. │       └─comperes::is_pairgames(cr_data)
        8. │         └─... %>% "isAllTwo"[[]]
        9. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       10. ├─dplyr::count(., .data$game)
       11. └─dplyr:::count.data.frame(., .data$game)
       12.   └─dplyr:::map_chr(by_exprs, as_string)
       13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       15.         └─rlang (local) FUN(X[[i]], ...)
       16.           └─rlang:::abort_coercion(x, "a string")
       17.             └─rlang::abort(msg, call = call)
      ── Error ('test-iterative.R:114:3'): rank_iterative handles data frame `initial_ratings` ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rank_iterative(...) at test-iterative.R:114:3
        2. │ ├─comperank:::add_ranking(...)
        3. │ │ └─comperank::round_rank(...)
        4. │ └─comperank::rate_iterative(...)
        5. │   └─comperank::add_iterative_ratings(...)
        6. │     └─comperank:::assert_pairgames(cr)
        7. │       └─comperes::is_pairgames(cr_data)
        8. │         └─... %>% "isAllTwo"[[]]
        9. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       10. ├─dplyr::count(., .data$game)
       11. └─dplyr:::count.data.frame(., .data$game)
       12.   └─dplyr:::map_chr(by_exprs, as_string)
       13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       15.         └─rlang (local) FUN(X[[i]], ...)
       16.           └─rlang:::abort_coercion(x, "a string")
       17.             └─rlang::abort(msg, call = call)
      ── Error ('test-iterative.R:129:3'): add_iterative_ratings simply works ────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::add_iterative_ratings(cr_data, test_rate_fun, initial_ratings = 0) at test-iterative.R:129:3
        2. │ └─comperank:::assert_pairgames(cr)
        3. │   └─comperes::is_pairgames(cr_data)
        4. │     └─... %>% "isAllTwo"[[]]
        5. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        6. ├─dplyr::count(., .data$game)
        7. └─dplyr:::count.data.frame(., .data$game)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Failure ('test-iterative.R:136:3'): add_iterative_ratings stops on not pairgames ──
      `add_iterative_ratings(cr_data[-1, ], test_rate_fun, initial_ratings = 0)` threw an error with unexpected message.
      Expected match: "not pairgames"
      Actual message: "Can't convert a call to a string."
      Backtrace:
           ▆
        1. ├─testthat::expect_error(...) at test-iterative.R:136:3
        2. │ └─testthat:::quasi_capture(...)
        3. │   ├─testthat (local) .capture(...)
        4. │   │ └─base::withCallingHandlers(...)
        5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        6. ├─comperank::add_iterative_ratings(...)
        7. │ └─comperank:::assert_pairgames(cr)
        8. │   └─comperes::is_pairgames(cr_data)
        9. │     └─... %>% "isAllTwo"[[]]
       10. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       11. ├─dplyr::count(., .data$game)
       12. └─dplyr:::count.data.frame(., .data$game)
       13.   └─dplyr:::map_chr(by_exprs, as_string)
       14.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       15.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       16.         └─rlang (local) FUN(X[[i]], ...)
       17.           └─rlang:::abort_coercion(x, "a string")
       18.             └─rlang::abort(msg, call = call)
      ── Error ('test-iterative.R:143:3'): add_iterative_ratings handles different scalar initial rating ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::add_iterative_ratings(cr_data, test_rate_fun, initial_ratings = 10) at test-iterative.R:143:3
        2. │ └─comperank:::assert_pairgames(cr)
        3. │   └─comperes::is_pairgames(cr_data)
        4. │     └─... %>% "isAllTwo"[[]]
        5. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        6. ├─dplyr::count(., .data$game)
        7. └─dplyr:::count.data.frame(., .data$game)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-iterative.R:158:3'): add_iterative_ratings handles NA in player1 ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::add_iterative_ratings(input, test_rate_fun, initial_ratings = 0) at test-iterative.R:158:3
        2. │ └─comperank:::assert_pairgames(cr)
        3. │   └─comperes::is_pairgames(cr_data)
        4. │     └─... %>% "isAllTwo"[[]]
        5. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        6. ├─dplyr::count(., .data$game)
        7. └─dplyr:::count.data.frame(., .data$game)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-iterative.R:173:3'): add_iterative_ratings handles NA in player2 ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::add_iterative_ratings(input, test_rate_fun, initial_ratings = 0) at test-iterative.R:173:3
        2. │ └─comperank:::assert_pairgames(cr)
        3. │   └─comperes::is_pairgames(cr_data)
        4. │     └─... %>% "isAllTwo"[[]]
        5. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        6. ├─dplyr::count(., .data$game)
        7. └─dplyr:::count.data.frame(., .data$game)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-iterative.R:189:3'): add_iterative_ratings handles NA in both player1 and player2 ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::add_iterative_ratings(input, test_rate_fun, initial_ratings = 0) at test-iterative.R:189:3
        2. │ └─comperank:::assert_pairgames(cr)
        3. │   └─comperes::is_pairgames(cr_data)
        4. │     └─... %>% "isAllTwo"[[]]
        5. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        6. ├─dplyr::count(., .data$game)
        7. └─dplyr:::count.data.frame(., .data$game)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-iterative.R:207:3'): add_iterative_ratings handles factor `player` ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::add_iterative_ratings(input_1, test_rate_fun, initial_ratings = 0) at test-iterative.R:207:3
        2. │ └─comperank:::assert_pairgames(cr)
        3. │   └─comperes::is_pairgames(cr_data)
        4. │     └─... %>% "isAllTwo"[[]]
        5. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        6. ├─dplyr::count(., .data$game)
        7. └─dplyr:::count.data.frame(., .data$game)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-iterative.R:232:3'): add_iterative_ratings handles data frame `initial_ratings` ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::add_iterative_ratings(cr_data, test_rate_fun, initial_ratings = init_rat_df) at test-iterative.R:232:3
        2. │ └─comperank:::assert_pairgames(cr)
        3. │   └─comperes::is_pairgames(cr_data)
        4. │     └─... %>% "isAllTwo"[[]]
        5. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        6. ├─dplyr::count(., .data$game)
        7. └─dplyr:::count.data.frame(., .data$game)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-massey.R:14:3'): rate_massey works ─────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank:::expect_equal_tbls(rate_massey(cr_data), output_base) at test-massey.R:14:3
        2. │ ├─testthat::expect_equal(as.data.frame(tbl_1), as.data.frame(tbl_2)) at tests/testthat/helper-equal-tbls.R:6:3
        3. │ │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        4. │ │   └─rlang::eval_bare(expr, quo_get_env(quo))
        5. │ └─base::as.data.frame(tbl_1)
        6. ├─comperank::rate_massey(cr_data)
        7. │ └─comperank:::assert_pairgames(cr)
        8. │   └─comperes::is_pairgames(cr_data)
        9. │     └─... %>% "isAllTwo"[[]]
       10. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       11. ├─dplyr::count(., .data$game)
       12. └─dplyr:::count.data.frame(., .data$game)
       13.   └─dplyr:::map_chr(by_exprs, as_string)
       14.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       15.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       16.         └─rlang (local) FUN(X[[i]], ...)
       17.           └─rlang:::abort_coercion(x, "a string")
       18.             └─rlang::abort(msg, call = call)
      ── Error ('test-massey.R:22:3'): rate_massey works with factor `player` ────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rate_massey(input_1) at test-massey.R:22:3
        2. │ └─comperank:::assert_pairgames(cr)
        3. │   └─comperes::is_pairgames(cr_data)
        4. │     └─... %>% "isAllTwo"[[]]
        5. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        6. ├─dplyr::count(., .data$game)
        7. └─dplyr:::count.data.frame(., .data$game)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-massey.R:40:3'): rate_massey works with numeric `player` ───────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rate_massey(input) at test-massey.R:40:3
        2. │ └─comperank:::assert_pairgames(cr)
        3. │   └─comperes::is_pairgames(cr_data)
        4. │     └─... %>% "isAllTwo"[[]]
        5. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        6. ├─dplyr::count(., .data$game)
        7. └─dplyr:::count.data.frame(., .data$game)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Failure ('test-massey.R:52:3'): rate_massey handles players absent in `cr_data` ──
      `expect_error(rate_massey(input))` did not produce any messages.
      ── Error ('test-massey.R:60:3'): rate_massey works with not all matchups present ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rate_massey(input) at test-massey.R:60:3
        2. │ └─comperank:::assert_pairgames(cr)
        3. │   └─comperes::is_pairgames(cr_data)
        4. │     └─... %>% "isAllTwo"[[]]
        5. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        6. ├─dplyr::count(., .data$game)
        7. └─dplyr:::count.data.frame(., .data$game)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Failure ('test-massey.R:75:3'): rate_massey throws error on not pair games ──
      `rate_massey(input_nonpair)` threw an error with unexpected message.
      Expected match: "not.*pairgames"
      Actual message: "Can't convert a call to a string."
      Backtrace:
           ▆
        1. ├─testthat::expect_error(rate_massey(input_nonpair), "not.*pairgames") at test-massey.R:75:3
        2. │ └─testthat:::quasi_capture(...)
        3. │   ├─testthat (local) .capture(...)
        4. │   │ └─base::withCallingHandlers(...)
        5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        6. ├─comperank::rate_massey(input_nonpair)
        7. │ └─comperank:::assert_pairgames(cr)
        8. │   └─comperes::is_pairgames(cr_data)
        9. │     └─... %>% "isAllTwo"[[]]
       10. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       11. ├─dplyr::count(., .data$game)
       12. └─dplyr:::count.data.frame(., .data$game)
       13.   └─dplyr:::map_chr(by_exprs, as_string)
       14.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       15.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       16.         └─rlang (local) FUN(X[[i]], ...)
       17.           └─rlang:::abort_coercion(x, "a string")
       18.             └─rlang::abort(msg, call = call)
      ── Error ('test-massey.R:81:3'): rank_massey works ─────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─comperank::rank_massey(cr_data) at test-massey.R:81:3
        2. │ ├─comperank:::add_ranking(...)
        3. │ │ └─comperank::round_rank(...)
        4. │ └─comperank::rate_massey(cr_data)
        5. │   └─comperank:::assert_pairgames(cr)
        6. │     └─comperes::is_pairgames(cr_data)
        7. │       └─... %>% "isAllTwo"[[]]
        8. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        9. ├─dplyr::count(., .data$game)
       10. └─dplyr:::count.data.frame(., .data$game)
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      ── Error ('test-utils.R:100:3'): assert_pairgames works ────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_silent(assert_pairgames(ncaa2005)) at test-utils.R:100:3
        2. │ └─testthat:::quasi_capture(enquo(object), NULL, evaluate_promise)
        3. │   ├─testthat (local) .capture(...)
        4. │   │ ├─withr::with_output_sink(...)
        5. │   │ │ └─base::force(code)
        6. │   │ ├─base::withCallingHandlers(...)
        7. │   │ └─base::withVisible(code)
        8. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        9. ├─comperank:::assert_pairgames(ncaa2005)
       10. │ └─comperes::is_pairgames(cr_data)
       11. │   └─... %>% "isAllTwo"[[]]
       12. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
       13. ├─dplyr::count(., .data$game)
       14. └─dplyr:::count.data.frame(., .data$game)
       15.   └─dplyr:::map_chr(by_exprs, as_string)
       16.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       17.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       18.         └─rlang (local) FUN(X[[i]], ...)
       19.           └─rlang:::abort_coercion(x, "a string")
       20.             └─rlang::abort(msg, call = call)
      
      [ FAIL 38 | WARN 2 | SKIP 0 | PASS 133 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘methods-overview.Rmd’ using rmarkdown
    
    Quitting from lines 97-102 [massey] (methods-overview.Rmd)
    Error: processing vignette 'methods-overview.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘methods-overview.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘methods-overview.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking Rd files ... NOTE
    ```
    checkRd: (-1) keener.Rd:82: Lost braces; missing escapes or markup?
        82 | a_{ij} = (S_ij + 1) / (S_ij + S_ji + 2). This step should make comparing
           |   ^
    ```

# comperes

<details>

* Version: 0.2.7
* GitHub: https://github.com/echasnovski/comperes
* Source code: https://github.com/cran/comperes
* Date/Publication: 2023-02-28 19:42:30 UTC
* Number of recursive dependencies: 64

Run `revdepcheck::cloud_details(, "comperes")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘comperes-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: pairgames
    > ### Title: Competition results with games between two players
    > ### Aliases: pairgames to_pairgames is_pairgames
    > 
    > ### ** Examples
    > 
    > cr_data <- data.frame(
    +   game = c(rep(1:5, each = 3), 6),
    +   player = c(rep(1:5, times = 3), 1),
    +   score = 101:116,
    +   extraCol = -(1:16)
    + )
    > 
    > to_pairgames(cr_data)
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─comperes::to_pairgames(cr_data)
      2. │ └─cr %>% count(.data$game) %>% filter(.data$n > 1)
      3. ├─dplyr::filter(., .data$n > 1)
      4. ├─dplyr::count(., .data$game)
      5. └─dplyr:::count.data.frame(., .data$game)
      6.   └─dplyr:::map_chr(by_exprs, as_string)
      7.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      8.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
      9.         └─rlang (local) FUN(X[[i]], ...)
     10.           └─rlang:::abort_coercion(x, "a string")
     11.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(comperes)
      > 
      > test_check("comperes")
      [ FAIL 4 | WARN 0 | SKIP 5 | PASS 252 ]
      
      ══ Skipped tests (5) ═══════════════════════════════════════════════════════════
      • On CRAN (5): 'test-outer-methods.R:188:3', 'test-outer-methods.R:335:3',
        'test-outer-methods.R:482:3', 'test-outer-methods.R:513:3',
        'test-outer-methods.R:524:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-pairgames.R:30:3'): to_pairgames works ─────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_identical(to_pairgames(input), output_ref) at test-pairgames.R:30:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─comperes::to_pairgames(input)
        5. │ └─cr %>% count(.data$game) %>% filter(.data$n > 1)
        6. ├─dplyr::filter(., .data$n > 1)
        7. ├─dplyr::count(., .data$game)
        8. └─dplyr:::count.data.frame(., .data$game)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-pairgames.R:48:3'): to_pairgames handles NA and NaN ────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_identical(to_pairgames(input_na), output_ref_na) at test-pairgames.R:48:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─comperes::to_pairgames(input_na)
        5. │ └─cr %>% count(.data$game) %>% filter(.data$n > 1)
        6. ├─dplyr::filter(., .data$n > 1)
        7. ├─dplyr::count(., .data$game)
        8. └─dplyr:::count.data.frame(., .data$game)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-pairgames.R:52:3'): to_pairgames doesn't change pairgames ──────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_identical(as_widecr(ncaa2005), to_pairgames(ncaa2005)) at test-pairgames.R:52:3
        2. │ └─testthat::quasi_label(enquo(expected), expected.label, arg = "expected")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─comperes::to_pairgames(ncaa2005)
        5. │ └─cr %>% count(.data$game) %>% filter(.data$n > 1)
        6. ├─dplyr::filter(., .data$n > 1)
        7. ├─dplyr::count(., .data$game)
        8. └─dplyr:::count.data.frame(., .data$game)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-pairgames.R:58:3'): is_pairgames works ─────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_false(is_pairgames(input)) at test-pairgames.R:58:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─comperes::is_pairgames(input)
        5. │ └─... %>% "isAllTwo"[[]]
        6. ├─dplyr::summarise(., isAllTwo = all(.data$n == 2))
        7. ├─dplyr::count(., .data$game)
        8. └─dplyr:::count.data.frame(., .data$game)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      
      [ FAIL 4 | WARN 0 | SKIP 5 | PASS 252 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘formats.Rmd’ using rmarkdown
    --- finished re-building ‘formats.Rmd’
    
    --- re-building ‘manipulation.Rmd’ using rmarkdown
    
    Quitting from lines 168-169 [pairgames] (manipulation.Rmd)
    Error: processing vignette 'manipulation.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘manipulation.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘manipulation.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# crosshap

<details>

* Version: 1.4.0
* GitHub: https://github.com/jacobimarsh/crosshap
* Source code: https://github.com/cran/crosshap
* Date/Publication: 2024-03-31 15:40:02 UTC
* Number of recursive dependencies: 117

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
      > 
      > library(testthat)
      > library(crosshap)
      > 
      > test_check("crosshap")
      ■■■■■                             14% | ETA: 20s
      ■■■■■■■■■■■■                      36% | ETA: 26s
      ■■■■■■■■■■■■■■                    43% | ETA: 23s
      ■■■■■■■■■■■■■■■■■■                57% | ETA: 15s
      ■■■■■■■■■■■■■■■■■■■■              64% | ETA: 17s
      ■■■■■■■■■■■■■■■■■■■■■■            71% | ETA: 14s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■       86% | ETA:  6s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■     93% | ETA:  4s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■  100% | ETA:  0s
      WARNING: Phenotype association scores (phenodiff) not calculated for 252 of 2041 sites
      NOTE: 432 sites have more heterozygous individuals (1/0) than one of the homozygous states (1/1 or 0/0).
      
      Haplotyping was performed with hetphenos = F, meaning phenotype association scores for heterozygous sites was ignored.
      ✔ Haplotyping complete!
      Info saved in Haplotypes_30_E objects
      # A tibble: 29 x 11
              x     y node    MGs_eps cluster  size mean_na.rm_phenodiff sc3_stability
       *  <dbl> <dbl> <chr>   <fct>   <fct>   <int>                <dbl>         <dbl>
       1 -4.39      2 MGs_ep~ 0.39    0        1487                 2.60        0.0350
       2 -2.39      2 MGs_ep~ 0.39    MG1        36                 2.71        0.151 
       3  0.111     2 MGs_ep~ 0.39    MG2        49                 2.64        0.205 
       4  2.11      2 MGs_ep~ 0.39    MG3        28                 2.68        0.117 
       5  4.11      2 MGs_ep~ 0.39    MG4        55                 2.38        0.493 
       6  6.11      2 MGs_ep~ 0.39    MG5        33                 2.56        0.509 
       7  8.11      2 MGs_ep~ 0.39    MG6        37                 1.25        0.549 
       8 10.1       2 MGs_ep~ 0.39    MG7        32                 4.39        0.627 
       9 12.1       2 MGs_ep~ 0.39    MG8       284                 2.15        0.514 
      10 -5.89      1 MGs_ep~ 0.79    0        1211                 2.67        0.279 
      # i 19 more rows
      # i 3 more variables: .ggraph.orig_index <int>, circular <lgl>,
      #   .ggraph.index <int>
      # A tibble: 20 x 11
             x     y node         hap_eps cluster  size mean_na.rm_Pheno sc3_stability
       * <dbl> <dbl> <chr>        <fct>   <fct>   <int>            <dbl>         <dbl>
       1 -3.25     2 hap_eps0.39~ 0.39    0          43             48.0         0.551
       2 -0.75     2 hap_eps0.39~ 0.39    A         824             44.0         0.151
       3  1.75     2 hap_eps0.39~ 0.39    B          42             45.8         0.667
       4  3.75     2 hap_eps0.39~ 0.39    C          29             48.1         0.189
       5  5.75     2 hap_eps0.39~ 0.39    D          26             46.5         0.667
       6  7.75     2 hap_eps0.39~ 0.39    E          21             48.8         0.667
       7 -3.25     1 hap_eps0.79~ 0.79    0          52             48.0         0.379
       8 -1.25     1 hap_eps0.79~ 0.79    A         774             43.8         0.646
       9 -0.25     1 hap_eps0.79~ 0.79    B          48             47.2         0.353
      10  1.75     1 hap_eps0.79~ 0.79    C          42             45.8         0.667
      11  5.75     1 hap_eps0.79~ 0.79    D          26             46.5         0.667
      12  3.75     1 hap_eps0.79~ 0.79    E          22             48.1         0.586
      13  7.75     1 hap_eps0.79~ 0.79    F          21             48.8         0.667
      14 -3.25     0 hap_eps0.99~ 0.99    0          52             48.0         0.379
      15 -1.25     0 hap_eps0.99~ 0.99    A         774             43.8         0.646
      16 -0.25     0 hap_eps0.99~ 0.99    B          48             47.2         0.353
      17  1.75     0 hap_eps0.99~ 0.99    C          42             45.8         0.667
      18  5.75     0 hap_eps0.99~ 0.99    D          26             46.5         0.667
      19  3.75     0 hap_eps0.99~ 0.99    E          22             48.1         0.586
      20  7.75     0 hap_eps0.99~ 0.99    F          21             48.8         0.667
      # i 3 more variables: .ggraph.orig_index <int>, circular <lgl>,
      #   .ggraph.index <int>
      ■■■■■■■■■■■                       33% | ETA:  5s
      ■■■■■■■■■■■■■■■■■■■■■             67% | ETA:  2s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■        83% | ETA:  3s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■  100% | ETA:  0s
      WARNING: Phenotype association scores (phenodiff) not calculated for 252 of 2041 sites
      NOTE: 432 sites have more heterozygous individuals (1/0) than one of the homozygous states (1/1 or 0/0).
      
      Haplotyping was performed with hetphenos = F, meaning phenotype association scores for heterozygous sites was ignored.
      ✔ Haplotyping complete!
      Info saved in Haplotypes_30_E objects
      Haplotype phenotype averages of wt individuals only:
               A    B    C    D    E
      Pheno 44.9 47.4 42.3 45.9 48.4
      ■■■■■■■■■■■                       33% | ETA:  5s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■        83% | ETA:  4s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■  100% | ETA:  0s
      WARNING: Phenotype association scores (phenodiff) not calculated for 252 of 2041 sites
      NOTE: 432 sites have more heterozygous individuals (1/0) than one of the homozygous states (1/1 or 0/0).
      
      Haplotyping was performed with hetphenos = F, meaning phenotype association scores for heterozygous sites was ignored.
      ✔ Haplotyping complete!
      Info saved in Haplotypes_30_E objects
      [ FAIL 5 | WARN 0 | SKIP 2 | PASS 5 ]
      
      ══ Skipped tests (2) ═══════════════════════════════════════════════════════════
      • On CRAN (2): 'test-clustree.R:14:1', 'test-clustree.R:19:1'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-crosshapviz.R:12:3'): test crosshap viz ────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─crosshap::crosshap_viz(HapObject = testHapObject, epsilon = 0.62) at test-crosshapviz.R:12:3
        2. │ └─crosshap::build_summary_tables(HapObject, epsilon = epsilon)
        3. │   ├─... %>% ...
        4. │   ├─dplyr::left_join(...)
        5. │   └─... %>% dplyr::rename(nSNP = "n")
        6. ├─dplyr::mutate_if(...)
        7. │ └─dplyr:::check_grouped(.tbl, "mutate", "if")
        8. │   └─dplyr::is_grouped_df(tbl)
        9. ├─dplyr::left_join(...)
       10. ├─dplyr::left_join(...)
       11. ├─dplyr::rename(., nSNP = "n")
       12. ├─dplyr::mutate(., MGs = paste0("MG", .data$MGs))
       13. ├─dplyr::arrange(., .data$MGs)
       14. ├─dplyr::mutate(., MGs = as.numeric(gsub("MG", "", .data$MGs)))
       15. ├─dplyr::count(., .data$MGs)
       16. └─dplyr:::count.data.frame(., .data$MGs)
       17.   └─dplyr:::map_chr(by_exprs, as_string)
       18.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       19.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       20.         └─rlang (local) FUN(X[[i]], ...)
       21.           └─rlang:::abort_coercion(x, "a string")
       22.             └─rlang::abort(msg, call = call)
      ── Error ('test-crosshapviz.R:17:3'): test alt crosshap viz ────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─crosshap::crosshap_viz(...) at test-crosshapviz.R:17:3
        2. │ └─crosshap::build_summary_tables(HapObject, epsilon = epsilon)
        3. │   ├─... %>% ...
        4. │   ├─dplyr::left_join(...)
        5. │   └─... %>% dplyr::rename(nSNP = "n")
        6. ├─dplyr::mutate_if(...)
        7. │ └─dplyr:::check_grouped(.tbl, "mutate", "if")
        8. │   └─dplyr::is_grouped_df(tbl)
        9. ├─dplyr::left_join(...)
       10. ├─dplyr::left_join(...)
       11. ├─dplyr::rename(., nSNP = "n")
       12. ├─dplyr::mutate(., MGs = paste0("MG", .data$MGs))
       13. ├─dplyr::arrange(., .data$MGs)
       14. ├─dplyr::mutate(., MGs = as.numeric(gsub("MG", "", .data$MGs)))
       15. ├─dplyr::count(., .data$MGs)
       16. └─dplyr:::count.data.frame(., .data$MGs)
       17.   └─dplyr:::map_chr(by_exprs, as_string)
       18.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       19.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       20.         └─rlang (local) FUN(X[[i]], ...)
       21.           └─rlang:::abort_coercion(x, "a string")
       22.             └─rlang::abort(msg, call = call)
      ── Error ('test-crosshapviz.R:22:3'): test no labels crosshap viz ──────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─crosshap::crosshap_viz(...) at test-crosshapviz.R:22:3
        2. │ └─crosshap::build_summary_tables(HapObject, epsilon = epsilon)
        3. │   ├─... %>% ...
        4. │   ├─dplyr::left_join(...)
        5. │   └─... %>% dplyr::rename(nSNP = "n")
        6. ├─dplyr::mutate_if(...)
        7. │ └─dplyr:::check_grouped(.tbl, "mutate", "if")
        8. │   └─dplyr::is_grouped_df(tbl)
        9. ├─dplyr::left_join(...)
       10. ├─dplyr::left_join(...)
       11. ├─dplyr::rename(., nSNP = "n")
       12. ├─dplyr::mutate(., MGs = paste0("MG", .data$MGs))
       13. ├─dplyr::arrange(., .data$MGs)
       14. ├─dplyr::mutate(., MGs = as.numeric(gsub("MG", "", .data$MGs)))
       15. ├─dplyr::count(., .data$MGs)
       16. └─dplyr:::count.data.frame(., .data$MGs)
       17.   └─dplyr:::map_chr(by_exprs, as_string)
       18.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       19.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       20.         └─rlang (local) FUN(X[[i]], ...)
       21.           └─rlang:::abort_coercion(x, "a string")
       22.             └─rlang::abort(msg, call = call)
      ── Error ('test-crosshapviz.R:27:3'): test isolate_groups ──────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─crosshap::crosshap_viz(...) at test-crosshapviz.R:27:3
        2. │ └─crosshap::build_summary_tables(HapObject, epsilon = epsilon)
        3. │   ├─... %>% ...
        4. │   ├─dplyr::left_join(...)
        5. │   └─... %>% dplyr::rename(nSNP = "n")
        6. ├─dplyr::mutate_if(...)
        7. │ └─dplyr:::check_grouped(.tbl, "mutate", "if")
        8. │   └─dplyr::is_grouped_df(tbl)
        9. ├─dplyr::left_join(...)
       10. ├─dplyr::left_join(...)
       11. ├─dplyr::rename(., nSNP = "n")
       12. ├─dplyr::mutate(., MGs = paste0("MG", .data$MGs))
       13. ├─dplyr::arrange(., .data$MGs)
       14. ├─dplyr::mutate(., MGs = as.numeric(gsub("MG", "", .data$MGs)))
       15. ├─dplyr::count(., .data$MGs)
       16. └─dplyr:::count.data.frame(., .data$MGs)
       17.   └─dplyr:::map_chr(by_exprs, as_string)
       18.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       19.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       20.         └─rlang (local) FUN(X[[i]], ...)
       21.           └─rlang:::abort_coercion(x, "a string")
       22.             └─rlang::abort(msg, call = call)
      ── Error ('test-umap.R:4:1'): (code run outside of `test_that()`) ──────────────
      Error: Can't subset `.data` outside of a data mask context.
      Backtrace:
          ▆
       1. ├─crosshap::prepare_hap_umap(...) at test-umap.R:4:1
       2. │ └─... %>% ...
       3. ├─dplyr::left_join(., HapObject_eps$Indfile, .data$hap, by = "Ind")
       4. ├─dplyr:::left_join.data.frame(...)
       5. │ └─dplyr:::rel_try(...)
       6. ├─hap
       7. └─rlang:::`$.rlang_fake_data_pronoun`(.data, hap)
       8.   └─rlang:::stop_fake_data_subset(call)
       9.     └─rlang::abort(...)
      
      [ FAIL 5 | WARN 0 | SKIP 2 | PASS 5 ]
      Deleting unused snapshots:
      • crosshapviz/haplotype-viz-alt4data.svg
      • crosshapviz/haplotype-viz-isolatewt3-data.svg
      • crosshapviz/haplotype-viz-nolabs3data.svg
      • crosshapviz/haplotype-viz4data.svg
      Error: Test failures
      Execution halted
    ```

# cvms

<details>

* Version: 1.6.2
* GitHub: https://github.com/ludvigolsen/cvms
* Source code: https://github.com/cran/cvms
* Date/Publication: 2024-07-31 10:40:38 UTC
* Number of recursive dependencies: 151

Run `revdepcheck::cloud_details(, "cvms")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(cvms)
      > 
      > if (require("xpectr")) {
      +   test_check("cvms")
      + }
      Loading required package: xpectr
      [ FAIL 2 | WARN 0 | SKIP 71 | PASS 3485 ]
      
      ══ Skipped tests (71) ══════════════════════════════════════════════════════════
      • Fails in check - IMPROVE THESE TESTS (1): 'test_example_functions.R:7:3'
      • On CRAN (58): 'test_baseline.R:9:3', 'test_baseline.R:630:3',
        'test_baseline.R:921:3', 'test_baseline.R:1218:3', 'test_baseline.R:1518:3',
        'test_baseline.R:3602:3', 'test_baseline.R:3694:3',
        'test_cross_validate.R:134:3', 'test_cross_validate.R:246:3',
        'test_cross_validate.R:734:3', 'test_cross_validate.R:935:3',
        'test_cross_validate.R:969:3', 'test_cross_validate.R:1019:3',
        'test_cross_validate.R:1245:3', 'test_cross_validate.R:1518:3',
        'test_cross_validate.R:1859:3', 'test_cross_validate.R:2200:3',
        'test_cross_validate.R:2395:3', 'test_cross_validate.R:2511:3',
        'test_cross_validate.R:3138:3', 'test_cross_validate.R:3216:3',
        'test_cross_validate_fn.R:101:3', 'test_cross_validate_fn.R:512:3',
        'test_cross_validate_fn.R:752:3', 'test_cross_validate_fn.R:969:3',
        'test_cross_validate_fn.R:1056:3', 'test_cross_validate_fn.R:1308:3',
        'test_cross_validate_fn.R:1419:3', 'test_cross_validate_fn.R:1552:3',
        'test_cross_validate_fn.R:1952:3', 'test_cross_validate_fn.R:2061:3',
        'test_cross_validate_fn.R:2248:3', 'test_cross_validate_fn.R:2525:3',
        'test_cross_validate_fn.R:2574:3', 'test_cross_validate_fn.R:2615:3',
        'test_cross_validate_fn.R:3292:3', 'test_cross_validate_fn.R:3357:3',
        'test_cross_validate_fn.R:3425:3', 'test_cross_validate_fn.R:3485:3',
        'test_evaluate.R:3845:3', 'test_evaluate.R:4268:3', 'test_evaluate.R:4767:3',
        'test_evaluate.R:5412:3', 'test_most_challenging.R:8:3',
        'test_most_challenging.R:369:3', 'test_most_challenging.R:742:3',
        'test_most_challenging.R:1502:3', 'test_select_definitions.R:7:3',
        'test_select_metrics.R:7:3', 'test_select_metrics.R:573:3',
        'test_validate.R:123:3', 'test_validate.R:296:3', 'test_validate.R:430:3',
        'test_validate.R:665:3', 'test_validate_fn.R:185:3',
        'test_validate_fn.R:828:3', 'test_validate_fn.R:2195:3',
        'test_validate_fn.R:3079:3'
      • Skipping check for CRAN release due to r_hub failure (1):
        'test_combine_predictors.R:259:3'
      • Skipping parallel tests (3): 'test_parallelization.R:11:3',
        'test_parallelization.R:56:3', 'test_parallelization.R:141:3'
      • Skipping test as R version is > 4.2. (1): 'test_cross_validate_fn.R:469:3'
      • empty test (1): 'test_parallelization.R:99:1'
      • keras and tensorflow take too long and have too many dependencies (1):
        'test_cross_validate_fn.R:2333:3'
      • mac and ubuntu give different warnings (4): 'test_cross_validate.R:596:3',
        'test_cross_validate.R:664:3', 'test_helpers.R:42:3', 'test_helpers.R:287:3'
      • tidymodels have too many dependencies (1): 'test_cross_validate_fn.R:2460:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_evaluate.R:664:3'): multinomial evaluations are correct in evaluate() ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─cvms::evaluate(...) at test_evaluate.R:664:3
        2. │ └─cvms:::run_evaluate(...)
        3. │   ├─... %>% ...
        4. │   └─cvms:::prepare_id_level_evaluation(...)
        5. │     └─... %>% dplyr::ungroup()
        6. ├─dplyr::left_join(., grouping_keys_with_indices, by = ".group")
        7. ├─dplyr::ungroup(.)
        8. ├─dplyr::ungroup(.)
        9. ├─dplyr::left_join(., id_classes, by = c(id_col, groups_col))
       10. ├─dplyr::count(., .data$predicted_class)
       11. └─dplyr:::count.data.frame(., .data$predicted_class)
       12.   └─dplyr:::map_chr(by_exprs, as_string)
       13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       15.         └─rlang (local) FUN(X[[i]], ...)
       16.           └─rlang:::abort_coercion(x, "a string")
       17.             └─rlang::abort(msg, call = call)
      ── Error ('test_evaluate.R:1411:3'): multinomial evaluations with one predicted class column is correctly unpacked in evaluate() ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─cvms::evaluate(...) at test_evaluate.R:1411:3
        2. │ └─cvms:::run_evaluate(...)
        3. │   ├─... %>% ...
        4. │   └─cvms:::prepare_id_level_evaluation(...)
        5. │     └─... %>% dplyr::ungroup()
        6. ├─dplyr::left_join(., grouping_keys_with_indices, by = ".group")
        7. ├─dplyr::ungroup(.)
        8. ├─dplyr::ungroup(.)
        9. ├─dplyr::left_join(., id_classes, by = c(id_col, groups_col))
       10. ├─dplyr::count(., .data$predicted_class)
       11. └─dplyr:::count.data.frame(., .data$predicted_class)
       12.   └─dplyr:::map_chr(by_exprs, as_string)
       13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       15.         └─rlang (local) FUN(X[[i]], ...)
       16.           └─rlang:::abort_coercion(x, "a string")
       17.             └─rlang::abort(msg, call = call)
      
      [ FAIL 2 | WARN 0 | SKIP 71 | PASS 3485 ]
      Error: Test failures
      Execution halted
    ```

# dbplot

<details>

* Version: 0.3.3
* GitHub: https://github.com/edgararuiz/dbplot
* Source code: https://github.com/cran/dbplot
* Date/Publication: 2020-02-07 01:10:09 UTC
* Number of recursive dependencies: 67

Run `revdepcheck::cloud_details(, "dbplot")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘dbplot-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: db_compute_bins
    > ### Title: Calculates a histogram bins
    > ### Aliases: db_compute_bins
    > 
    > ### ** Examples
    > 
    > 
    > # Returns record count for 30 bins in mpg
    > mtcars %>%
    +   db_compute_bins(mpg)
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─mtcars %>% db_compute_bins(mpg)
      2. └─dbplot::db_compute_bins(., mpg)
      3.   ├─dplyr::count(res, `:=`(!!x, !!xf))
      4.   └─dplyr:::count.data.frame(res, `:=`(!!x, !!xf))
      5.     └─dplyr:::map_chr(by_exprs, as_string)
      6.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      7.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
      8.           └─rlang (local) FUN(X[[i]], ...)
      9.             └─rlang:::abort_coercion(x, "a string")
     10.               └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(dbplot)
      > library(dplyr)
      
      Attaching package: 'dplyr'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      The following objects are masked from 'package:stats':
      
          filter, lag
      
      The following objects are masked from 'package:base':
      
          intersect, setdiff, setequal, union
      
      > library(ggplot2)
      > 
      > test_check("dbplot")
      [ FAIL 2 | WARN 1 | SKIP 0 | PASS 25 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-dbplots.R:7:3'): A ggplot2 object is returned ──────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_is(dbplot_histogram(mtcars, mpg), "ggplot") at test-dbplots.R:7:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. └─dbplot::dbplot_histogram(mtcars, mpg)
        5.   └─dbplot::db_compute_bins(data = data, x = !!x, bins = bins, binwidth = binwidth)
        6.     ├─dplyr::count(res, `:=`(!!x, !!xf))
        7.     └─dplyr:::count.data.frame(res, `:=`(!!x, !!xf))
        8.       └─dplyr:::map_chr(by_exprs, as_string)
        9.         └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.           └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.             └─rlang (local) FUN(X[[i]], ...)
       12.               └─rlang:::abort_coercion(x, "a string")
       13.                 └─rlang::abort(msg, call = call)
      ── Error ('test-dbplots.R:15:3'): A no warnings or errors are returned ─────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_silent(dbplot_histogram(mtcars, mpg)) at test-dbplots.R:15:3
        2. │ └─testthat:::quasi_capture(enquo(object), NULL, evaluate_promise)
        3. │   ├─testthat (local) .capture(...)
        4. │   │ ├─withr::with_output_sink(...)
        5. │   │ │ └─base::force(code)
        6. │   │ ├─base::withCallingHandlers(...)
        7. │   │ └─base::withVisible(code)
        8. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        9. └─dbplot::dbplot_histogram(mtcars, mpg)
       10.   └─dbplot::db_compute_bins(data = data, x = !!x, bins = bins, binwidth = binwidth)
       11.     ├─dplyr::count(res, `:=`(!!x, !!xf))
       12.     └─dplyr:::count.data.frame(res, `:=`(!!x, !!xf))
       13.       └─dplyr:::map_chr(by_exprs, as_string)
       14.         └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       15.           └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       16.             └─rlang (local) FUN(X[[i]], ...)
       17.               └─rlang:::abort_coercion(x, "a string")
       18.                 └─rlang::abort(msg, call = call)
      
      [ FAIL 2 | WARN 1 | SKIP 0 | PASS 25 ]
      Error: Test failures
      Execution halted
    ```

# dexter

<details>

* Version: 1.5.0
* GitHub: https://github.com/dexter-psychometrics/dexter
* Source code: https://github.com/cran/dexter
* Date/Publication: 2024-07-05 09:50:02 UTC
* Number of recursive dependencies: 89

Run `revdepcheck::cloud_details(, "dexter")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > Sys.setenv("R_TESTS" = "")
      > library(testthat)
      > library(dexter)
      > test_check("dexter")
      
          item_id item_score
      1 S4DoShout          2
      2 S4DoShout          1
      
          item_id item_score
      1 S4DoShout          1
      2000 responses imported.
      2000 responses imported.
      
      rules_changed: 1
      rules_added: 0 
      
      rules_changed: 0
      rules_added: 24 
      [ FAIL 5 | WARN 0 | SKIP 1 | PASS 221 ]
      
      ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
      • On CRAN (1): 'test_plausible_scores.R:49:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_enorm.R:60:3'): calibration of verbal aggression dataset matches oplm results, with fixed and unfixed ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─dexter::fit_enorm(...) at test_enorm.R:60:3
        2.   └─dexter:::fit_enorm_(...)
        3.     └─dexter:::calibrate_Bayes(ss, nIter = nDraws, fixed_params = fixed_params)
        4.       ├─dplyr::pull(...)
        5.       ├─dplyr::arrange(count(design, .data$first), .data$first)
        6.       ├─dplyr::count(design, .data$first)
        7.       └─dplyr:::count.data.frame(design, .data$first)
        8.         └─dplyr:::map_chr(by_exprs, as_string)
        9.           └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.             └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.               └─rlang (local) FUN(X[[i]], ...)
       12.                 └─rlang:::abort_coercion(x, "a string")
       13.                   └─rlang::abort(msg, call = call)
      ── Error ('test_latent_cor.R:12:3'): latent correlations work ──────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
          ▆
       1. └─dexter::latent_cor(db, "behavior") at test_latent_cor.R:12:3
       2.   ├─dplyr::count(...)
       3.   └─dplyr:::count.data.frame(...)
       4.     └─dplyr:::map_chr(by_exprs, as_string)
       5.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       6.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       7.           └─rlang (local) FUN(X[[i]], ...)
       8.             └─rlang:::abort_coercion(x, "a string")
       9.               └─rlang::abort(msg, call = call)
      ── Error ('test_p2p.R:16:3'): complete case works ──────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─dexter::fit_enorm(db, method = "Bayes") at test_p2p.R:16:3
        2.   └─dexter:::fit_enorm_(...)
        3.     └─dexter:::calibrate_Bayes(ss, nIter = nDraws, fixed_params = fixed_params)
        4.       ├─dplyr::pull(...)
        5.       ├─dplyr::arrange(count(design, .data$first), .data$first)
        6.       ├─dplyr::count(design, .data$first)
        7.       └─dplyr:::count.data.frame(design, .data$first)
        8.         └─dplyr:::map_chr(by_exprs, as_string)
        9.           └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.             └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.               └─rlang (local) FUN(X[[i]], ...)
       12.                 └─rlang:::abort_coercion(x, "a string")
       13.                   └─rlang::abort(msg, call = call)
      ── Error ('test_profiles.R:41:3'): profile analysis verb agg ───────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─dexter::fit_enorm(db, method = "Bayes") at test_profiles.R:41:3
        2.   └─dexter:::fit_enorm_(...)
        3.     └─dexter:::calibrate_Bayes(ss, nIter = nDraws, fixed_params = fixed_params)
        4.       ├─dplyr::pull(...)
        5.       ├─dplyr::arrange(count(design, .data$first), .data$first)
        6.       ├─dplyr::count(design, .data$first)
        7.       └─dplyr:::count.data.frame(design, .data$first)
        8.         └─dplyr:::map_chr(by_exprs, as_string)
        9.           └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.             └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.               └─rlang (local) FUN(X[[i]], ...)
       12.                 └─rlang:::abort_coercion(x, "a string")
       13.                   └─rlang::abort(msg, call = call)
      ── Error ('test_theta.R:16:3'): multiple b ─────────────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─dexter::fit_enorm(db, method = "Bayes", nDraws = ndr) at test_theta.R:16:3
        2.   └─dexter:::fit_enorm_(...)
        3.     └─dexter:::calibrate_Bayes(ss, nIter = nDraws, fixed_params = fixed_params)
        4.       ├─dplyr::pull(...)
        5.       ├─dplyr::arrange(count(design, .data$first), .data$first)
        6.       ├─dplyr::count(design, .data$first)
        7.       └─dplyr:::count.data.frame(design, .data$first)
        8.         └─dplyr:::map_chr(by_exprs, as_string)
        9.           └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.             └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.               └─rlang (local) FUN(X[[i]], ...)
       12.                 └─rlang:::abort_coercion(x, "a string")
       13.                   └─rlang::abort(msg, call = call)
      
      [ FAIL 5 | WARN 0 | SKIP 1 | PASS 221 ]
      Error: Test failures
      In addition: Warning message:
      call dbDisconnect() when finished working with a connection 
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘DIF_vignette.Rmd’ using rmarkdown
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 12.9Mb
      sub-directories of 1Mb or more:
        R      1.5Mb
        doc    1.2Mb
        libs   9.9Mb
    ```

# dexterMST

<details>

* Version: 0.9.6
* GitHub: https://github.com/dexter-psychometrics/dexter
* Source code: https://github.com/cran/dexterMST
* Date/Publication: 2023-12-05 15:20:17 UTC
* Number of recursive dependencies: 111

Run `revdepcheck::cloud_details(, "dexterMST")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘dexterMST-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: create_mst_test
    > ### Title: Define a new multi stage test
    > ### Aliases: create_mst_test
    > 
    > ### ** Examples
    > 
    > 
    > ## Don't show: 
    >  RcppArmadillo::armadillo_throttle_cores(1)
    > ## End(Don't show)
    > 
    > # extended example
    > # we: 
    > # 1) define an mst design
    > # 2) simulate mst data
    > # 3) create a project, enter scoring rules and define the MST test
    > # 4) do an analysis
    > 
    > library(dplyr)
    
    Attaching package: ‘dplyr’
    
    The following objects are masked from ‘package:stats’:
    
        filter, lag
    
    The following objects are masked from ‘package:base’:
    
        intersect, setdiff, setequal, union
    
    > 
    > items = data.frame(item_id=sprintf("item%02i",1:70), item_score=1, delta=sort(runif(70,-1,1)))
    > 
    > design = data.frame(item_id=sprintf("item%02i",1:70),
    +                     module_id=rep(c('M4','M2','M5','M1','M6','M3', 'M7'),each=10))
    > 
    > routing_rules = routing_rules = mst_rules(
    +  `124` = M1[0:5] --+ M2[0:10] --+ M4, 
    +  `125` = M1[0:5] --+ M2[11:15] --+ M5,
    +  `136` = M1[6:10] --+ M3[6:15] --+ M6,
    +  `137` = M1[6:10] --+ M3[16:20] --+ M7)
    > 
    > theta = rnorm(3000)
    > 
    > dat = sim_mst(items, theta, design, routing_rules,'all')
    > dat$test_id='sim_test'
    > dat$response=dat$item_score
    > 
    > 
    > scoring_rules = data.frame(
    +   item_id = rep(items$item_id,2), 
    +   item_score= rep(0:1,each=nrow(items)),
    +   response= rep(0:1,each=nrow(items))) # dummy respons
    >   
    > 
    > db = create_mst_project(":memory:")
    > add_scoring_rules_mst(db, scoring_rules)
    Added 140 scoring rules
    > 
    > create_mst_test(db,
    +                 test_design = design,
    +                 routing_rules = routing_rules,
    +                 test_id = 'sim_test',
    +                 routing = "all")
    > 
    > add_response_data_mst(db, dat)
    Added 90000 responses for 3000 administrations
    > 
    > 
    > design_plot(db)
    > 
    > f = fit_enorm_mst(db)
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─dexterMST::fit_enorm_mst(db)
      2. │ └─dexterMST:::fit_enorm_mst_(...)
      3. │   └─... %>% arrange(.data$bid, .data$module_nbr)
      4. ├─dplyr::arrange(., .data$bid, .data$module_nbr)
      5. ├─dplyr::inner_join(., routing, by = c("bid", "module_nbr"))
      6. ├─dplyr::count(., .data$bid, .data$module_nbr, name = "nit")
      7. └─dplyr:::count.data.frame(., .data$bid, .data$module_nbr, name = "nit")
      8.   └─dplyr:::map_chr(by_exprs, as_string)
      9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     11.         └─rlang (local) FUN(X[[i]], ...)
     12.           └─rlang:::abort_coercion(x, "a string")
     13.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(dexterMST)
      > 
      > test_check("dexterMST")
      Added 140 scoring rules
      1 item properties updated for 70 items`125` = M1[0:5] --+ M2[11:15] --+ M5
      Added 90000 responses for 3000 administrations
      1 person properties updated for 3000 personsAdded 140 scoring rules
      1 item properties updated for 70 itemsAdded 90000 responses for 3000 administrations
      1 person properties updated for 3000 persons4 item properties for 24 items added or updated
      Added 30 scoring rules
      Added 100000 responses for 10000 administrations
      Added 72 scoring rules
      Added 2850 responses for 190 administrations
      Added 1890 responses for 126 administrations
      Added 72 scoring rules
      Added 2688 responses for 168 administrations
      Added 2368 responses for 148 administrations
      Added 140 scoring rules
      Added 102490 responses for 3000 administrations
      Added 97460 responses for 3000 administrations
      [ FAIL 6 | WARN 0 | SKIP 0 | PASS 6 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_calibration.R:99:3'): we can calibrate ─────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─dexterMST::fit_enorm_mst(all_db) at test_calibration.R:99:3
        2. │ └─dexterMST:::fit_enorm_mst_(...)
        3. │   └─... %>% arrange(.data$bid, .data$module_nbr)
        4. ├─dplyr::arrange(., .data$bid, .data$module_nbr)
        5. ├─dplyr::inner_join(., routing, by = c("bid", "module_nbr"))
        6. ├─dplyr::count(., .data$bid, .data$module_nbr, name = "nit")
        7. └─dplyr:::count.data.frame(., .data$bid, .data$module_nbr, name = "nit")
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test_inputs.R:68:3'): can import from dexter and calbration comparable to dexter ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─dexterMST::fit_enorm_mst(db) at test_inputs.R:68:3
        2. │ └─dexterMST:::fit_enorm_mst_(...)
        3. │   └─... %>% arrange(.data$bid, .data$module_nbr)
        4. ├─dplyr::arrange(., .data$bid, .data$module_nbr)
        5. ├─dplyr::inner_join(., routing, by = c("bid", "module_nbr"))
        6. ├─dplyr::count(., .data$bid, .data$module_nbr, name = "nit")
        7. └─dplyr:::count.data.frame(., .data$bid, .data$module_nbr, name = "nit")
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test_poly.R:58:3'): discriminations ─────────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─dexterMST::fit_enorm_mst(db) at test_poly.R:58:3
        2. │ └─dexterMST:::fit_enorm_mst_(...)
        3. │   └─... %>% arrange(.data$bid, .data$module_nbr)
        4. ├─dplyr::arrange(., .data$bid, .data$module_nbr)
        5. ├─dplyr::inner_join(., routing, by = c("bid", "module_nbr"))
        6. ├─dplyr::count(., .data$bid, .data$module_nbr, name = "nit")
        7. └─dplyr:::count.data.frame(., .data$bid, .data$module_nbr, name = "nit")
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test_poly.R:107:3'): poly NR problem ────────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─dexterMST::fit_enorm_mst(db) at test_poly.R:107:3
        2. │ └─dexterMST:::fit_enorm_mst_(...)
        3. │   └─... %>% arrange(.data$bid, .data$module_nbr)
        4. ├─dplyr::arrange(., .data$bid, .data$module_nbr)
        5. ├─dplyr::inner_join(., routing, by = c("bid", "module_nbr"))
        6. ├─dplyr::count(., .data$bid, .data$module_nbr, name = "nit")
        7. └─dplyr:::count.data.frame(., .data$bid, .data$module_nbr, name = "nit")
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test_poly.R:167:3'): poly normal2 ───────────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─dexterMST::fit_enorm_mst(db) at test_poly.R:167:3
        2. │ └─dexterMST:::fit_enorm_mst_(...)
        3. │   └─... %>% arrange(.data$bid, .data$module_nbr)
        4. ├─dplyr::arrange(., .data$bid, .data$module_nbr)
        5. ├─dplyr::inner_join(., routing, by = c("bid", "module_nbr"))
        6. ├─dplyr::count(., .data$bid, .data$module_nbr, name = "nit")
        7. └─dplyr:::count.data.frame(., .data$bid, .data$module_nbr, name = "nit")
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test_profiles.R:68:3'): profiles match simulated rasch data ─────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─dexterMST::fit_enorm_mst(db) at test_profiles.R:68:3
        2. │ └─dexterMST:::fit_enorm_mst_(...)
        3. │   └─... %>% arrange(.data$bid, .data$module_nbr)
        4. ├─dplyr::arrange(., .data$bid, .data$module_nbr)
        5. ├─dplyr::inner_join(., routing, by = c("bid", "module_nbr"))
        6. ├─dplyr::count(., .data$bid, .data$module_nbr, name = "nit")
        7. └─dplyr:::count.data.frame(., .data$bid, .data$module_nbr, name = "nit")
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      
      [ FAIL 6 | WARN 0 | SKIP 0 | PASS 6 ]
      Error: Test failures
      In addition: Warning message:
      call dbDisconnect() when finished working with a connection 
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘multistage_fundamentals.Rmd’ using rmarkdown
    ```

# dreamer

<details>

* Version: 3.1.0
* GitHub: https://github.com/rich-payne/dreamer
* Source code: https://github.com/cran/dreamer
* Date/Publication: 2022-09-01 09:10:49 UTC
* Number of recursive dependencies: 80

Run `revdepcheck::cloud_details(, "dreamer")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘dreamer-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: pr_med
    > ### Title: Pr(minimum efficacious dose)
    > ### Aliases: pr_med
    > 
    > ### ** Examples
    > 
    > set.seed(888)
    > data <- dreamer_data_linear(
    +   n_cohorts = c(20, 20, 20),
    +   dose = c(0, 3, 10),
    +   b1 = 1,
    +   b2 = 3,
    +   sigma = 5
    + )
    > 
    > # Bayesian model averaging
    > output <- dreamer_mcmc(
    +  data = data,
    +  n_adapt = 1e3,
    +  n_burn = 1e3,
    +  n_iter = 1e3,
    +  n_chains = 2,
    +  silent = FALSE,
    +  mod_linear = model_linear(
    +    mu_b1 = 0,
    +    sigma_b1 = 1,
    +    mu_b2 = 0,
    +    sigma_b2 = 1,
    +    shape = 1,
    +    rate = .001,
    +    w_prior = 1 / 2
    +  ),
    +  mod_quad = model_quad(
    +    mu_b1 = 0,
    +    sigma_b1 = 1,
    +    mu_b2 = 0,
    +    sigma_b2 = 1,
    +    mu_b3 = 0,
    +    sigma_b3 = 1,
    +    shape = 1,
    +    rate = .001,
    +    w_prior = 1 / 2
    +  )
    + )
    mod_linear
    start : 2024-10-19 16:53:18.549
    Compiling model graph
       Resolving undeclared variables
       Allocating nodes
    Graph information:
       Observed stochastic nodes: 6
       Unobserved stochastic nodes: 3
       Total graph size: 50
    
    Initializing model
    
    finish: 2024-10-19 16:53:18.589
    total : 0.04 secs
    
    mod_quad
    start : 2024-10-19 16:53:18.590
    Compiling model graph
       Resolving undeclared variables
       Allocating nodes
    Graph information:
       Observed stochastic nodes: 6
       Unobserved stochastic nodes: 4
       Total graph size: 59
    
    Initializing model
    
    finish: 2024-10-19 16:53:18.634
    total : 0.04 secs
    
    > 
    > pr_med(output, csd = 10)
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─dreamer::pr_med(output, csd = 10)
      2. │ └─... %>% ...
      3. ├─dplyr::select(., .data$dose, everything(), -.data$prob, .data$prob)
      4. ├─dreamer:::add_cols(., reference_dose, time)
      5. ├─dplyr::select(., .data$dose, .data$prob)
      6. ├─tidyr::complete(., dose = !!doses, fill = list(prob = 0))
      7. ├─dplyr::mutate(., prob = .data$prob/.data$n)
      8. ├─dplyr::filter(., !is.na(.data$dose))
      9. ├─dplyr::ungroup(.)
     10. ├─dplyr::count(., dose = .data$med, name = "prob")
     11. └─dplyr:::count.data.frame(., dose = .data$med, name = "prob")
     12.   └─dplyr:::map_chr(by_exprs, as_string)
     13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     15.         └─rlang (local) FUN(X[[i]], ...)
     16.           └─rlang:::abort_coercion(x, "a string")
     17.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(dreamer)
      > 
      > test_check("dreamer")
      [ FAIL 2 | WARN 1383 | SKIP 26 | PASS 5325 ]
      
      ══ Skipped tests (26) ══════════════════════════════════════════════════════════
      • On CRAN (26): 'test-plots.R:85:3', 'test-plots.R:93:3', 'test-plots.R:107:3',
        'test-plots.R:116:3', 'test-plots.R:132:3', 'test-plots.R:141:3',
        'test-plots.R:149:3', 'test-plots.R:157:3', 'test-plots.R:165:3',
        'test-plots.R:173:3', 'test-plots.R:181:3', 'test-plots.R:195:3',
        'test-plots.R:206:3', 'test-plots.R:223:3', 'test-plots.R:231:3',
        'test-plots.R:243:3', 'test-plots.R:264:3', 'test-plots.R:285:3',
        'test-plots.R:298:3', 'test-plots.R:320:3', 'test-plots.R:342:3',
        'test-plots.R:383:3', 'test-posterior.R:124:3', 'test-posterior.R:156:3',
        'test-print.R:29:3', 'test-print.R:76:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-pr_med.R:31:3'): pr_med() linear ───────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-pr_med.R:31:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─dreamer::pr_med(out_new, csd = 0)
        5. │ └─... %>% ...
        6. ├─dplyr::select(., .data$dose, everything(), -.data$prob, .data$prob)
        7. ├─dreamer:::add_cols(., reference_dose, time)
        8. ├─dplyr::select(., .data$dose, .data$prob)
        9. ├─tidyr::complete(., dose = !!doses, fill = list(prob = 0))
       10. ├─dplyr::mutate(., prob = .data$prob/.data$n)
       11. ├─dplyr::filter(., !is.na(.data$dose))
       12. ├─dplyr::ungroup(.)
       13. ├─dplyr::count(., dose = .data$med, name = "prob")
       14. └─dplyr:::count.data.frame(., dose = .data$med, name = "prob")
       15.   └─dplyr:::map_chr(by_exprs, as_string)
       16.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       17.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       18.         └─rlang (local) FUN(X[[i]], ...)
       19.           └─rlang:::abort_coercion(x, "a string")
       20.             └─rlang::abort(msg, call = call)
      ── Error ('test-pr_med.R:95:3'): pr_med() linear, longitudinal ─────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-pr_med.R:95:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─dreamer::pr_med(out_new, csd = 0, time = 4)
        5. │ └─... %>% ...
        6. ├─dplyr::select(., .data$dose, everything(), -.data$prob, .data$prob)
        7. ├─dreamer:::add_cols(., reference_dose, time)
        8. │ └─x %>% dplyr::mutate(time = !!time)
        9. ├─dplyr::mutate(., time = !!time)
       10. ├─dplyr::select(., .data$dose, .data$prob)
       11. ├─tidyr::complete(., dose = !!doses, fill = list(prob = 0))
       12. ├─dplyr::mutate(., prob = .data$prob/.data$n)
       13. ├─dplyr::filter(., !is.na(.data$dose))
       14. ├─dplyr::ungroup(.)
       15. ├─dplyr::count(., dose = .data$med, name = "prob")
       16. └─dplyr:::count.data.frame(., dose = .data$med, name = "prob")
       17.   └─dplyr:::map_chr(by_exprs, as_string)
       18.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       19.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       20.         └─rlang (local) FUN(X[[i]], ...)
       21.           └─rlang:::abort_coercion(x, "a string")
       22.             └─rlang::abort(msg, call = call)
      
      [ FAIL 2 | WARN 1383 | SKIP 26 | PASS 5325 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘dreamer.Rmd’ using rmarkdown
    ```

## In both

*   checking Rd files ... NOTE
    ```
    checkRd: (-1) dreamerplot.Rd:53: Lost braces; missing escapes or markup?
        53 | a dose returns the plot of pr(trt_dose - trt_{reference_dose} | data).}
           |                                              ^
    checkRd: (-1) posterior.Rd:70: Lost braces; missing escapes or markup?
        70 | a dose returns the plot of pr(trt_dose - trt_{reference_dose} | data).}
           |                                              ^
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
      > 
      > library(testthat)
      > library(duckplyr)
      The duckplyr package is configured to fall back to dplyr when it encounters an
      incompatibility. Fallback events can be collected and uploaded for analysis to
      guide future development. By default, no data will be collected or uploaded.
      → Run `duckplyr::fallback_sitrep()` to review the current settings.
      ✔ Overwriting dplyr methods with duckplyr methods.
      ℹ Turn off with `duckplyr::methods_restore()`.
      
      Attaching package: 'duckplyr'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      The following objects are masked from 'package:stats':
      
          filter, lag
      
      The following objects are masked from 'package:base':
      
          intersect, setdiff, setequal, union
      
      > 
      > test_check("duckplyr")
      v Overwriting dplyr methods with duckplyr methods.
      i Turn off with `duckplyr::methods_restore()`.
      i Restoring dplyr methods.
      [ FAIL 4 | WARN 0 | SKIP 355 | PASS 1405 ]
      
      ══ Skipped tests (355) ═════════════════════════════════════════════════════════
      • Always returns tibble (1): 'test-as_duckplyr_df.R:760:3'
      • Can't set a non-UTF-8 encoding (1): 'test-mutate.R:443:3'
      • Can't use 'en_US' locale (1): 'test-arrange.R:345:3'
      • External vector? (5): 'test-as_duckplyr_df.R:2395:3',
        'test-as_duckplyr_df.R:2411:3', 'test-as_duckplyr_df.R:2427:3',
        'test-as_duckplyr_df.R:2441:3', 'test-as_duckplyr_df.R:2457:3'
      • Grouped (4): 'test-as_duckplyr_df.R:686:3', 'test-as_duckplyr_df.R:744:3',
        'test-as_duckplyr_df.R:806:3', 'test-as_duckplyr_df.R:2703:3'
      • Hack (1): 'test-as_duckplyr_df.R:575:3'
      • Missing or empty names not allowed. (6): 'test-mutate.R:900:3',
        'test-filter.R:646:3', 'test-select.R:40:3', 'test-select.R:136:3',
        'test-select.R:145:3', 'test-summarise.R:439:3'
      • Must pass a plain data frame or a tibble to `as_duckplyr_df()`. (163):
        'test-mutate.R:7:3', 'test-mutate.R:49:3', 'test-mutate.R:77:3',
        'test-mutate.R:109:3', 'test-mutate.R:169:3', 'test-mutate.R:242:3',
        'test-mutate.R:256:3', 'test-mutate.R:293:3', 'test-mutate.R:302:3',
        'test-mutate.R:314:3', 'test-mutate.R:329:3', 'test-mutate.R:360:3',
        'test-mutate.R:366:3', 'test-mutate.R:373:3', 'test-mutate.R:400:3',
        'test-mutate.R:407:3', 'test-mutate.R:425:3', 'test-mutate.R:454:3',
        'test-mutate.R:464:3', 'test-mutate.R:484:3', 'test-mutate.R:578:3',
        'test-mutate.R:587:3', 'test-mutate.R:625:3', 'test-mutate.R:634:3',
        'test-mutate.R:663:3', 'test-mutate.R:672:3', 'test-mutate.R:693:3',
        'test-mutate.R:733:3', 'test-mutate.R:744:3', 'test-mutate.R:758:3',
        'test-mutate.R:769:3', 'test-mutate.R:775:3', 'test-mutate.R:790:3',
        'test-mutate.R:890:3', 'test-filter.R:8:5', 'test-filter.R:27:3',
        'test-filter.R:54:3', 'test-filter.R:117:3', 'test-filter.R:157:3',
        'test-filter.R:184:3', 'test-filter.R:222:3', 'test-filter.R:228:3',
        'test-filter.R:236:3', 'test-filter.R:302:3', 'test-filter.R:318:3',
        'test-filter.R:360:3', 'test-filter.R:436:3', 'test-filter.R:543:3',
        'test-filter.R:566:3', 'test-filter.R:577:3', 'test-filter.R:619:3',
        'test-filter.R:631:3', 'test-filter.R:702:3', 'test-filter.R:711:3',
        'test-count-tally.R:57:3', 'test-count-tally.R:66:3',
        'test-count-tally.R:77:3', 'test-count-tally.R:159:3',
        'test-count-tally.R:175:3', 'test-across.R:14:3', 'test-across.R:21:3',
        'test-across.R:323:3', 'test-across.R:333:3', 'test-across.R:678:3',
        'test-across.R:693:5', 'test-across.R:1069:3', 'test-across.R:1128:3',
        'test-across.R:1162:3', 'test-across.R:1254:3', 'test-across.R:1377:3',
        'test-across.R:1391:3', 'test-arrange.R:9:3', 'test-arrange.R:206:3',
        'test-arrange.R:213:3', 'test-arrange.R:219:3', 'test-arrange.R:288:3',
        'test-arrange.R:299:3', 'test-arrange.R:337:3', 'test-arrange.R:381:3',
        'test-colwise-select.R:38:3', 'test-colwise-select.R:93:3',
        'test-colwise-select.R:141:3', 'test-deprec-do.R:10:3',
        'test-deprec-do.R:18:3', 'test-deprec-do.R:33:3', 'test-deprec-do.R:42:3',
        'test-deprec-do.R:49:3', 'test-deprec-do.R:63:5', 'test-deprec-do.R:94:3',
        'test-deprec-do.R:105:3', 'test-deprec-do.R:178:3', 'test-deprec-do.R:183:3',
        'test-deprec-do.R:198:3', 'test-distinct.R:50:3', 'test-distinct.R:56:3',
        'test-distinct.R:64:3', 'test-distinct.R:115:3', 'test-distinct.R:156:3',
        'test-group-map.R:2:3', 'test-group-map.R:20:3', 'test-group-map.R:34:3',
        'test-group-map.R:59:3', 'test-group-map.R:71:3', 'test-group-map.R:83:3',
        'test-group-map.R:104:3', 'test-group-map.R:120:3', 'test-join.R:492:3',
        'test-join.R:623:3', 'test-join.R:645:3', 'test-join.R:668:3',
        'test-join.R:678:3', 'test-rename.R:9:3', 'test-rename.R:31:3',
        'test-select.R:4:3', 'test-select.R:12:3', 'test-select.R:28:3',
        'test-select.R:87:3', 'test-select.R:106:3', 'test-select.R:176:3',
        'test-sets.R:38:3', 'test-sets.R:46:3', 'test-sets.R:136:3',
        'test-slice.R:8:3', 'test-slice.R:21:3', 'test-slice.R:31:3',
        'test-slice.R:48:3', 'test-slice.R:79:3', 'test-slice.R:99:3',
        'test-slice.R:123:3', 'test-slice.R:135:3', 'test-slice.R:202:3',
        'test-slice.R:211:3', 'test-slice.R:334:3', 'test-slice.R:379:3',
        'test-slice.R:393:3', 'test-slice.R:587:3', 'test-slice.R:613:3',
        'test-slice.R:634:3', 'test-summarise.R:19:3', 'test-summarise.R:45:3',
        'test-summarise.R:61:3', 'test-summarise.R:77:3', 'test-summarise.R:96:3',
        'test-summarise.R:131:3', 'test-summarise.R:189:3', 'test-summarise.R:206:3',
        'test-summarise.R:211:3', 'test-summarise.R:221:3', 'test-summarise.R:235:3',
        'test-summarise.R:241:3', 'test-summarise.R:255:3', 'test-summarise.R:272:3',
        'test-summarise.R:284:3', 'test-summarise.R:324:3', 'test-summarise.R:337:3',
        'test-summarise.R:345:3', 'test-summarise.R:405:3', 'test-summarise.R:414:3',
        'test-transmute.R:2:3', 'test-transmute.R:9:3', 'test-transmute.R:27:3',
        'test-transmute.R:49:3', 'test-transmute.R:82:3'
      • On CRAN (148): 'test-tpch.R:110:3', 'test-mutate.R:137:3',
        'test-mutate.R:197:3', 'test-filter.R:403:3', 'test-filter.R:421:3',
        'test-filter.R:430:3', 'test-filter.R:693:3', 'test-filter.R:719:3',
        'test-count-tally.R:47:3', 'test-count-tally.R:120:3',
        'test-count-tally.R:135:3', 'test-count-tally.R:163:3',
        'test-count-tally.R:187:3', 'test-count-tally.R:219:3',
        'test-across.R:144:3', 'test-across.R:153:3', 'test-across.R:209:3',
        'test-across.R:222:3', 'test-across.R:617:3', 'test-across.R:767:3',
        'test-across.R:796:3', 'test-across.R:1152:3', 'test-across.R:1196:3',
        'test-across.R:1225:3', 'test-across.R:1290:3', 'test-across.R:1302:3',
        'test-all-equal.R:2:3', 'test-all-equal.R:27:3', 'test-all-equal.R:36:3',
        'test-all-equal.R:47:3', 'test-all-equal.R:61:3', 'test-all-equal.R:114:3',
        'test-all-equal.R:142:3', 'test-all-equal.R:155:3', 'test-all-equal.R:163:3',
        'test-all-equal.R:171:3', 'test-arrange.R:29:3', 'test-arrange.R:169:3',
        'test-arrange.R:178:3', 'test-arrange.R:192:3', 'test-arrange.R:321:3',
        'test-colwise-select.R:175:3', 'test-demo.R:9:3', 'test-deprec-funs.R:119:3',
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
        'test-join-rows.R:415:3', 'test-join.R:150:3', 'test-join.R:337:3',
        'test-join.R:349:3', 'test-join.R:383:3', 'test-join.R:389:3',
        'test-join.R:446:3', 'test-join.R:455:3', 'test-join.R:465:3',
        'test-join.R:513:3', 'test-join.R:550:3', 'test-join.R:600:3',
        'test-join.R:704:3', 'test-join.R:715:3', 'test-join.R:726:3',
        'test-join.R:749:3', 'test-join.R:763:3', 'test-relational-duckdb.R:37:3',
        'test-relational-duckdb.R:80:3', 'test-relational-duckdb.R:99:3',
        'test-relational-rel.R:2:3', 'test-relational.R:4:3', 'test-relocate.R:30:3',
        'test-rename.R:75:3', 'test-rename.R:85:3', 'test-rename.R:94:3',
        'test-select.R:158:3', 'test-sets.R:59:3', 'test-sets.R:73:3',
        'test-sets.R:83:3', 'test-sets.R:127:3', 'test-sets.R:140:3',
        'test-slice.R:40:3', 'test-slice.R:63:3', 'test-slice.R:71:3',
        'test-slice.R:109:3', 'test-slice.R:193:3', 'test-slice.R:219:3',
        'test-slice.R:230:3', 'test-slice.R:240:3', 'test-slice.R:248:3',
        'test-slice.R:299:3', 'test-slice.R:342:3', 'test-slice.R:405:3',
        'test-slice.R:517:3', 'test-slice.R:524:3', 'test-slice.R:559:3',
        'test-slice.R:571:3', 'test-summarise.R:158:3', 'test-summarise.R:396:3',
        'test-summarise.R:539:3', 'test-telemetry.R:4:3', 'test-telemetry.R:45:3',
        'test-telemetry.R:59:3', 'test-telemetry.R:73:3', 'test-telemetry.R:87:3',
        'test-telemetry.R:107:3', 'test-telemetry.R:130:3', 'test-telemetry.R:154:3',
        'test-telemetry.R:162:3', 'test-telemetry.R:186:3', 'test-telemetry.R:200:3',
        'test-telemetry.R:220:3', 'test-telemetry.R:228:3', 'test-telemetry.R:252:3',
        'test-telemetry.R:260:3', 'test-telemetry.R:279:3', 'test-telemetry.R:287:3',
        'test-telemetry.R:307:3', 'test-telemetry.R:315:3', 'test-telemetry.R:323:3',
        'test-translate.R:10:3', 'test-translate.R:16:3', 'test-transmute.R:90:3'
      • RSQLite cannot be loaded (2): 'test-count-tally.R:86:3',
        'test-count-tally.R:98:3'
      • Random seed (2): 'test-as_duckplyr_df.R:2192:3',
        'test-as_duckplyr_df.R:2208:3'
      • Special (5): 'test-as_duckplyr_df.R:700:3', 'test-as_duckplyr_df.R:716:3',
        'test-as_duckplyr_df.R:776:3', 'test-as_duckplyr_df.R:851:3',
        'test-as_duckplyr_df.R:1709:3'
      • Stack overflow (1): 'test-as_duckplyr_df.R:2176:3'
      • TODO duckdb (11): 'test-all-equal.R:180:3', 'test-generics.R:160:3',
        'test-join-rows.R:193:3', 'test-join-rows.R:430:3', 'test-join-rows.R:446:3',
        'test-join-rows.R:459:3', 'test-join.R:356:3', 'test-join.R:362:3',
        'test-summarise.R:30:3', 'test-summarise.R:307:3', 'test-summarise.R:448:3'
      • WAT (3): 'test-as_duckplyr_df.R:730:3', 'test-as_duckplyr_df.R:790:3',
        'test-as_duckplyr_df.R:1723:3'
      • Won't need (1): 'test-prom.R:2:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-mutate.R:433:3'): no utf8 invasion (#722) ────────────────────
      lobstr::obj_addrs(names(df)) (`actual`) not equal to lobstr::obj_addrs(names(df2)) (`expected`).
      
      `actual`:   "0x001" "0x002" "0x003"
      `expected`: "0x004" "0x005" "0x003"
      ── Failure ('test-mutate.R:433:3'): no utf8 invasion (#722) ────────────────────
      lobstr::obj_addrs(names(df)) (`actual`) not equal to lobstr::obj_addrs(names(df3)) (`expected`).
      
      `actual`:   "0x001" "0x002" "0x003"
      `expected`: "0x004" "0x005" "0x003"
      ── Failure ('test-mutate.R:433:3'): no utf8 invasion (#722) ────────────────────
      lobstr::obj_addrs(names(df)) (`actual`) not equal to lobstr::obj_addrs(names(df4)) (`expected`).
      
      `actual`:   "0x001" "0x002" "0x003"
      `expected`: "0x004" "0x005" "0x003"
      ── Failure ('test-dplyr.R:29:3'): no homonyms ──────────────────────────────────
      `objs_duckplyr` (`actual`) not identical to objs_dplyr[names(objs_duckplyr)] (`expected`).
      
      `environment(actual$as_duckplyr_df)` is <env:namespace:duckplyr>
      `environment(expected$as_duckplyr_df)` is <env:namespace:dplyr>
      
      body(actual$as_duckplyr_tibble) vs body(expected$as_duckplyr_tibble)
        `{`
      + `    if (inherits(.data, "tbl_duckdb_connection")) {`
      + `        con <- dbplyr::remote_con(.data)`
      + `        sql <- dbplyr::remote_query(.data)`
      + `        rel <- duckdb$rel_from_sql(con, sql)`
      + `        out <- rel_to_df(rel)`
      + `        class(out) <- c("duckplyr_df", class(new_tibble(list())))`
      + `        return(out)`
      + `    }`
        `    as_duckplyr_df(as_tibble(as.data.frame(.data)))`
      and 1 more ...
      
      `environment(actual$as_duckplyr_tibble)` is <env:namespace:duckplyr>
      `environment(expected$as_duckplyr_tibble)` is <env:namespace:dplyr>
      
      `environment(actual$check_df_for_rel)` is <env:namespace:duckplyr>
      `environment(expected$check_df_for_rel)` is <env:namespace:dplyr>
      
      `environment(actual$create_default_duckdb_connection)` is <env:namespace:duckplyr>
      `environment(expected$create_default_duckdb_connection)` is <env:namespace:dplyr>
      
      `environment(actual$default_df_class)` is <env:namespace:duckplyr>
      `environment(expected$default_df_class)` is <env:namespace:dplyr>
      
      `actual$default_duckdb_connection$con@conn_ref` is <pointer: 0x55c1e83b6c40>
      `expected$default_duckdb_connection$con@conn_ref` is <pointer: 0x55c1e8e9b480>
      
      `actual$default_duckdb_connection$con@driver@database_ref` is <pointer: 0x55c1e83aed20>
      `expected$default_duckdb_connection$con@driver@database_ref` is <pointer: 0x55c1e8e97440>
      
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
      
      `environment(actual$handle_desc)` is <env:namespace:duckplyr>
      `environment(expected$handle_desc)` is <env:namespace:dplyr>
      
      `environment(actual$is_corrupted_relational_relexpr_constant)` is <env:namespace:duckplyr>
      `environment(expected$is_corrupted_relational_relexpr_constant)` is <env:namespace:dplyr>
      
      `environment(actual$is_corrupted_relational_relexpr_function)` is <env:namespace:duckplyr>
      `environment(expected$is_corrupted_relational_relexpr_function)` is <env:namespace:dplyr>
      
      `environment(actual$is_corrupted_relational_relexpr_reference)` is <env:namespace:duckplyr>
      `environment(expected$is_corrupted_relational_relexpr_reference)` is <env:namespace:dplyr>
      
      `environment(actual$is_corrupted_relational_relexpr_window)` is <env:namespace:duckplyr>
      `environment(expected$is_corrupted_relational_relexpr_window)` is <env:namespace:dplyr>
      
      `environment(actual$is_duckplyr_df)` is <env:namespace:duckplyr>
      `environment(expected$is_duckplyr_df)` is <env:namespace:dplyr>
      
      `environment(actual$meta_ext_register)` is <env:namespace:duckplyr>
      `environment(expected$meta_ext_register)` is <env:namespace:dplyr>
      
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
      
      `environment(actual$new_failing_mask)` is <env:namespace:duckplyr>
      `environment(expected$new_failing_mask)` is <env:namespace:dplyr>
      
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
      
      `environment(actual$opts_relational_relexpr_constant)` is <env:namespace:duckplyr>
      `environment(expected$opts_relational_relexpr_constant)` is <env:namespace:dplyr>
      
      `environment(actual$opts_relational_relexpr_function)` is <env:namespace:duckplyr>
      `environment(expected$opts_relational_relexpr_function)` is <env:namespace:dplyr>
      
      `environment(actual$opts_relational_relexpr_reference)` is <env:namespace:duckplyr>
      `environment(expected$opts_relational_relexpr_reference)` is <env:namespace:dplyr>
      
      `environment(actual$opts_relational_relexpr_window)` is <env:namespace:duckplyr>
      `environment(expected$opts_relational_relexpr_window)` is <env:namespace:dplyr>
      
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
      
      body(actual$rel_find_call)[6:26] vs body(expected$rel_find_call)[6:30]
        `    else if (length(name) != 1) {`
        `        cli::cli_abort("Can't translate function {.code {expr_deparse(fun)}}.")`
        `    }`
      - `    pkg <- switch(name, \`==\` = "base", \`/\` = "base", \`$\` = "base", `
      + `    pkgs <- switch(name, \`==\` = "base", \`/\` = "base", \`$\` = "base", `
      - `        mean = "base", n = "dplyr", \`>\` = "base", \`%in%\` = "base", `
      + `        mean = "base", n = c("dplyr", "duckplyr"), \`>\` = "base", `
      - `        sum = "base", \`!\` = "base", \`&\` = "base", \`-\` = "base", `
      + `        \`%in%\` = "base", sum = "base", \`!\` = "base", \`&\` = "base", `
      - `        \`(\` = "base", is.na = "base", \`!=\` = "base", \`*\` = "base", `
      + `        \`-\` = "base", \`(\` = "base", is.na = "base", \`!=\` = "base", `
      - `        \`+\` = "base", \`<\` = "base", \`>=\` = "base", n_distinct = "dplyr", `
      + `        \`*\` = "base", \`+\` = "base", \`<\` = "base", \`>=\` = "base", `
      - `        max = "base", \`<=\` = "base", \`|\` = "base", min = "base", `
      + `        n_distinct = c("dplyr", "duckplyr"), max = "base", \`<=\` = "base", `
      - `        grepl = "base", sd = "stats", median = "stats", as.integer = "base", `
      + `        \`|\` = "base", min = "base", grepl = "base", sd = "stats", `
      and 15 more ...
      
      body(actual$rel_find_call)[27:34] vs body(expected$rel_find_call)[31:45]
        `        return(c("dplyr", "n"))`
        `    }`
        `    fun_val <- get0(fun, env, mode = "function", inherits = TRUE)`
      - `    if (!identical(fun_val, get(name, envir = asNamespace(pkg)))) {`
      - `        cli::cli_abort("Function {.code {name}} does not map to {.code {pkg}::{name}}.")`
      + `    for (pkg in pkgs) {`
      + `        if (identical(fun_val, get(name, envir = asNamespace(pkg)))) {`
      + `            return(c(pkg, name))`
      + `        }`
        `    }`
      - `    c(pkg, name)`
      + `    if (length(pkgs) == 1) {`
      + `        cli::cli_abort("Function {.code {name}} does not map to {.code {pkgs}::{name}}.")`
      and 5 more ...
      
      `environment(actual$rel_find_call)` is <env:namespace:duckplyr>
      `environment(expected$rel_find_call)` is <env:namespace:dplyr>
      
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
      
        `actual$rel_stats_env$rel_aggregate`: 56
      `expected$rel_stats_env$rel_aggregate`: 14
      
        `actual$rel_stats_env$rel_distinct`: 10
      `expected$rel_stats_env$rel_distinct`:  4
      
        `actual$rel_stats_env$rel_filter`: 103
      `expected$rel_stats_env$rel_filter`:  23
      
        `actual$rel_stats_env$rel_join`: 71
      `expected$rel_stats_env$rel_join`: 11
      
      `actual$rel_stats_env$rel_limit` is an integer vector (5)
      `expected$rel_stats_env$rel_limit` is absent
      
        `actual$rel_stats_env$rel_names`: 777
      `expected$rel_stats_env$rel_names`: 374
      
        `actual$rel_stats_env$rel_order`: 282
      `expected$rel_stats_env$rel_order`:  74
      
        `actual$rel_stats_env$rel_project`: 940
      `expected$rel_stats_env$rel_project`: 333
      
        `actual$rel_stats_env$rel_set_alias`: 142
      `expected$rel_stats_env$rel_set_alias`:  22
      
        `actual$rel_stats_env$rel_to_df`: 509
      `expected$rel_stats_env$rel_to_df`: 185
      
      `environment(actual$rel_stats_get)` is <env:namespace:duckplyr>
      `environment(expected$rel_stats_get)` is <env:namespace:dplyr>
      
      `environment(actual$rel_to_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_to_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_to_df.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_to_df.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_to_df.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_to_df.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_translate)` is <env:namespace:duckplyr>
      `environment(expected$rel_translate)` is <env:namespace:dplyr>
      
      `environment(actual$rel_translate_dots)` is <env:namespace:duckplyr>
      `environment(expected$rel_translate_dots)` is <env:namespace:dplyr>
      
      `environment(actual$rel_translate_lang)` is <env:namespace:duckplyr>
      `environment(expected$rel_translate_lang)` is <env:namespace:dplyr>
      
      body(actual$rel_try)[1:9] vs body(expected$rel_try)[1:16]
        `{`
        `    call_name <- as.character(sys.call(-1)[[1]])`
      + `    if (!is.null(call$name)) {`
      + `        meta_call_start(call$name)`
      + `        withr::defer(meta_call_end())`
      + `    }`
        `    if (length(call_name) == 1 && !(call_name %in% stats$calls)) {`
        `        stats$calls <- c(stats$calls, call_name)`
        `    }`
      and 6 more ...
      
      body(actual$rel_try)[34:47] vs body(expected$rel_try)[41:46]
        `            return()`
        `        }`
        `    }`
      - `    max_expression_depth <- DBI::dbGetQuery(get_default_duckdb_connection(), `
      - `        "SELECT current_setting('max_expression_depth')")[[1]]`
      - `    if (max_expression_depth != 100) {`
      - `        DBI::dbExecute(get_default_duckdb_connection(), "SET max_expression_depth TO 100")`
      - `        withr::defer({`
      - `            DBI::dbExecute(get_default_duckdb_connection(), "SET max_expression_depth TO 200")`
      - `        })`
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
      
        `actual$stats$attempts`: 1061
      `expected$stats$attempts`:  922
      
           actual$stats$calls       | expected$stats$calls                  
       [1] "select.duckplyr_df"     - "add_count"            [1]            
       [2] "filter.duckplyr_df"     - "mutate"               [2]            
       [3] "summarise.duckplyr_df"  - "add_count.data.frame" [3]            
       [4] "arrange.duckplyr_df"    - "mutate.data.frame"    [4]            
       [5] "inner_join.duckplyr_df" - "anti_join"            [5]            
       [6] "head.duckplyr_df"       - "anti_join.data.frame" [6]            
       [7] "mutate.duckplyr_df"     - "arrange"              [7]            
       [8] "distinct.duckplyr_df"   - "arrange.data.frame"   [8]            
       [9] "left_join.duckplyr_df"  - "compute"              [9]            
      [10] "semi_join.duckplyr_df"  - "compute.data.frame"   [10]           
       ... ...                        ...                    and 67 more ...
      
        `actual$stats$fallback`: 547
      `expected$stats$fallback`: 750
      
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
      
      [ FAIL 4 | WARN 0 | SKIP 355 | PASS 1405 ]
      Error: Test failures
      
      🛠: 1529
      🔨:  850
      🦆:  679
      add_count, anti_join, arrange, compute, count, cross_join, distinct, do, eval, filter, full_join, group_by, group_keys, group_map, group_modify, group_split, head, inner_join, intersect, left_join, mutate, mutate.data.frame, nest_join, pull, reframe, relocate, rename, rename_with, right_join, rows_append, rows_delete, rows_insert, rows_patch, rows_update, rows_upsert, rowwise, select, semi_join, setdiff, setequal, slice, slice_head, slice_sample, slice_tail, summarise, symdiff, transmute, ungroup, union_all
      
      00:00:58.066236
      Execution halted
    ```

# epiCo

<details>

* Version: 1.0.0
* GitHub: https://github.com/epiverse-trace/epiCo
* Source code: https://github.com/cran/epiCo
* Date/Publication: 2024-06-28 09:40:05 UTC
* Number of recursive dependencies: 129

Run `revdepcheck::cloud_details(, "epiCo")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘epiCo-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: describe_occupation
    > ### Title: Get ISCO-88 occupation labels from codes
    > ### Aliases: describe_occupation
    > 
    > ### ** Examples
    > 
    > demog_data <- data.frame(
    +   occupation_label =
    +     c(6111, 3221, 5113, 5133, 6111, 23, 25),
    +   sex = c("F", "M", "F", "F", "M", "M", "F")
    + )
    > describe_occupation(
    +   isco_codes = demog_data$occupation_label,
    +   sex = demog_data$sex, plot = "treemap"
    + )
    1 codes are invalid.
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─epiCo::describe_occupation(...)
      2. │ └─epiCo:::get_occupation_data(...)
      3. │   └─occupation_data %>% ...
      4. ├─dplyr::count(., .data$sex, .data$occupation)
      5. └─dplyr:::count.data.frame(., .data$sex, .data$occupation)
      6.   └─dplyr:::map_chr(by_exprs, as_string)
      7.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      8.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
      9.         └─rlang (local) FUN(X[[i]], ...)
     10.           └─rlang:::abort_coercion(x, "a string")
     11.             └─rlang::abort(msg, call = call)
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
      > 
      > library(testthat)
      > library(epiCo)
      > 
      > test_check("epiCo")
      1 codes are invalid.
      Data prior to 2013-12-29 were not used for the endemic channel calculation.
      Data after2016-12-25 were not used for the endemic channel calculation.
      There are no influential municipalities to plot
      Municipalities 05659, 91001 are not part of the neighborhood according to the selected thershold in hours. It wil be displayed as 'Not significant' but it was not included in the local moran's index analysis.
      Significant municipalities are:
      05148 with High-Low (incidence - spatial correlation)
      05318 with High-High (incidence - spatial correlation)
      05440 with High-Low (incidence - spatial correlation)
      05615 with Low-Low (incidence - spatial correlation)
      Municipalities 05659, 91001 are not part of the neighborhood according to the selected thershold in hours. It wil be displayed as 'Not significant' but it was not included in the local moran's index analysis.
      Significant municipalities are:
      05148 with High-Low (incidence - spatial correlation)
      05318 with High-High (incidence - spatial correlation)
      05440 with High-Low (incidence - spatial correlation)
      05615 with Low-Low (incidence - spatial correlation)
      Municipalities 05659, 91001 are not part of the neighborhood according to the selected thershold in hours. It wil be displayed as 'Not significant' but it was not included in the local moran's index analysis.
      There are no influential municipalities to plot
      [ FAIL 1 | WARN 7 | SKIP 0 | PASS 106 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-demographics.R:208:3'): describe occupation works as expected ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_type(...) at test-demographics.R:208:3
        2. │ └─testthat::quasi_label(enquo(object), arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─epiCo::describe_occupation(c(1110, 4141, 12345))
        5. │ └─epiCo:::get_occupation_data(...)
        6. │   └─occupation_data %>% dplyr::count(.data$occupation)
        7. ├─dplyr::count(., .data$occupation)
        8. └─dplyr:::count.data.frame(., .data$occupation)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      
      [ FAIL 1 | WARN 7 | SKIP 0 | PASS 106 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘demographic_vignette.Rmd’ using rmarkdown
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.2Mb
      sub-directories of 1Mb or more:
        data      2.0Mb
        extdata   2.9Mb
    ```

# eq5dsuite

<details>

* Version: 1.0.0
* GitHub: NA
* Source code: https://github.com/cran/eq5dsuite
* Date/Publication: 2024-05-21 15:00:03 UTC
* Number of recursive dependencies: 38

Run `revdepcheck::cloud_details(, "eq5dsuite")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘eq5dsuite-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: figure_2_1
    > ### Title: Figure 2.1: EQ VAS scores
    > ### Aliases: figure_2_1
    > 
    > ### ** Examples
    > 
    > tmp <- figure_2_1(df = example_data)
    Argument `name_vas` not supplied. Default column name will be used: vas
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─eq5dsuite::figure_2_1(df = example_data)
      2. │ └─... %>% rename(count = "n")
      3. ├─dplyr::rename(., count = "n")
      4. ├─dplyr::arrange(., .data$vas)
      5. ├─dplyr::count(., vas = factor(.data$vas, levels = 1:100), .drop = FALSE)
      6. └─dplyr:::count.data.frame(...)
      7.   └─dplyr:::map_chr(by_exprs, as_string)
      8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     10.         └─rlang (local) FUN(X[[i]], ...)
     11.           └─rlang:::abort_coercion(x, "a string")
     12.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

# fastplyr

<details>

* Version: 0.2.0
* GitHub: https://github.com/NicChr/fastplyr
* Source code: https://github.com/cran/fastplyr
* Date/Publication: 2024-10-04 09:40:05 UTC
* Number of recursive dependencies: 43

Run `revdepcheck::cloud_details(, "fastplyr")` for more info

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
      > library(fastplyr)
      > 
      > test_check("fastplyr")
      Storing counts in `nn`, as `n` already present in input
      i Use `name = "new_name"` to pick a new name.
      Storing counts in `nn`, as `n` already present in input
      i Use `name = "new_name"` to pick a new name.
      Storing counts in `nn`, as `n` already present in input
      i Use `name = "new_name"` to pick a new name.
      Storing counts in `nn`, as `n` already present in input
      i Use `name = "new_name"` to pick a new name.
      Adding missing grouping variables: 'Sepal.Length', 'Species'
      Adding missing grouping variables: `Sepal.Length`, `Species`
      Adding missing grouping variables: 'Sepal.Length', 'Species'
      Adding missing grouping variables: `Sepal.Length`, `Species`
      Adding missing grouping variables: 'Sepal.Length'
      Adding missing grouping variables: `Sepal.Length`
      Adding missing grouping variables: 'Sepal.Length', 'Species'
      Adding missing grouping variables: `Sepal.Length`, `Species`
      Adding missing grouping variables: 'Sepal.Length', 'Species'
      Adding missing grouping variables: `Sepal.Length`, `Species`
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 195 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-f_count.R:47:3'): Compare to dplyr ─────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-f_count.R:47:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─iris %>% dplyr::group_by(Species) %>% ...
        5. ├─dplyr::count(., across(all_of("Species")))
        6. └─dplyr:::count.data.frame(., across(all_of("Species")))
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 195 ]
      Error: Test failures
      Execution halted
    ```

# flowchart

<details>

* Version: 0.5.1
* GitHub: https://github.com/bruigtp/flowchart
* Source code: https://github.com/cran/flowchart
* Date/Publication: 2024-09-27 23:10:19 UTC
* Number of recursive dependencies: 78

Run `revdepcheck::cloud_details(, "flowchart")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘flowchart-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: fc_draw
    > ### Title: fc_draw
    > ### Aliases: fc_draw
    > 
    > ### ** Examples
    > 
    > safo |>
    +   as_fc(label = "Patients assessed for eligibility") |>
    +   fc_filter(!is.na(group), label = "Randomized", show_exc = TRUE) |>
    +   fc_split(group) |>
    +   fc_filter(itt == "Yes", label = "Included in ITT") |>
    +   fc_filter(pp == "Yes", label = "Included in PP") |>
    +   fc_draw()
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─flowchart::fc_draw(...)
      2. │ └─flowchart:::is_class(object, "fc")
      3. ├─flowchart::fc_filter(...)
      4. │ └─flowchart:::is_class(object, "fc")
      5. ├─flowchart::fc_filter(...)
      6. │ └─flowchart:::is_class(object, "fc")
      7. └─flowchart::fc_split(...)
      8.   ├─dplyr::mutate(...)
      9.   ├─dplyr::count(object$data, label = get(var), .drop = FALSE)
     10.   └─dplyr:::count.data.frame(object$data, label = get(var), .drop = FALSE)
     11.     └─dplyr:::map_chr(by_exprs, as_string)
     12.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     13.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     14.           └─rlang (local) FUN(X[[i]], ...)
     15.             └─rlang:::abort_coercion(x, "a string")
     16.               └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘flowchart.Rmd’ using rmarkdown
    ```

# fqacalc

<details>

* Version: 1.1.0
* GitHub: NA
* Source code: https://github.com/cran/fqacalc
* Date/Publication: 2023-09-26 15:00:02 UTC
* Number of recursive dependencies: 52

Run `revdepcheck::cloud_details(, "fqacalc")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘fqacalc-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: physiog_summary
    > ### Title: Create a cover-Weighted Summary of Physiognomic Groups
    > ### Aliases: physiog_summary
    > 
    > ### ** Examples
    > 
    > transect <- data.frame(
    + acronym  = c("ABEESC", "ABIBAL", "AMMBRE", "ANTELE", "ABEESC", "ABIBAL", "AMMBRE"),
    + cover = c(50, 4, 20, 30, 40, 7, 60),
    + plot_id = c(1, 1, 1, 1, 2, 2, 2))
    > 
    > physiog_summary(transect, key = "acronym", db = "michigan_2014", plot_id = "plot_id")
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─fqacalc::physiog_summary(...)
      2. │ ├─... %>% ...
      3. │ ├─base::as.data.frame(...)
      4. │ ├─dplyr::count(entries, .data$physiognomy, name = "relative_frequency")
      5. │ └─dplyr:::count.data.frame(entries, .data$physiognomy, name = "relative_frequency")
      6. │   └─dplyr:::map_chr(by_exprs, as_string)
      7. │     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      8. │       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
      9. │         └─rlang (local) FUN(X[[i]], ...)
     10. │           └─rlang:::abort_coercion(x, "a string")
     11. │             └─rlang::abort(msg, call = call)
     12. └─dplyr::mutate(., relative_frequency = 100 * relative_frequency/nrow(entries))
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(fqacalc)
      > 
      > test_check("fqacalc")
      Species GROUND does not have a wetness coefficient. It will be omitted from wetness metric calculations. Species WATER does not have a wetness coefficient. It will be omitted from wetness metric calculations. Species GROUND does not have a wetness coefficient. It will be omitted from wetness metric calculations.
      montana_2017 does not have wetness coefficients, wetland metrics cannot be calculated.
      Species BOOP not listed in database. It will be discarded.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      Duplicate entries detected. Duplicates will only be counted once. Cover values of duplicate species will be added together.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      POTENTILLA NANA is a synonym to multiple species. It will be omitted. To include this species, use the accepted scientific name.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      CAREX MURICATA is a synonym to multiple species. It will be omitted. To include this species, use the accepted scientific name.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      NAs were introduced during the conversion to the braun-blanquet system. Species with NA cover values will be removed.
      Duplicate entries detected in the same plot. Duplicates in the same plot will be counted once. Cover values of duplicate species will be added together.
      Duplicate entries detected in the same plot. Duplicates in the same plot will be counted once. Cover values of duplicate species will be added together.
      Duplicate entries detected in the same plot. Duplicates in the same plot will be counted once. Cover values of duplicate species will be added together.
      Duplicate entries detected. Duplicates will only be counted once. Cover values of duplicate species will be added together.
      Duplicate entries detected. Duplicates will only be counted once.
      montana_2017 does not have wetness coefficients, wetland metrics cannot be calculated.
      montana_2017 does not have wetness coefficients, wetland metrics cannot be calculated.
      Species ABRONIA FRAGRANS is recognized but has not been assigned a C Value. If using the shiny web application, this species will only be included in metrics that don't require a C Value. Otherwise, the option to include species with no C Value in certain metrics can be set using the 'allow_no_c' argument.
      Species GROUND does not have a wetness coefficient. It will be omitted from wetness metric calculations. Species WATER does not have a wetness coefficient. It will be omitted from wetness metric calculations.
      Species GROUND not listed in database. It will be discarded.Species WATER not listed in database. It will be discarded.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      Duplicate entries detected. Duplicates will only be counted once.
      CAREX MURICATA is a synonym to multiple species. It will be omitted. To include this species, use the accepted scientific name.
      POTENTILLA NANA is a synonym to multiple species. It will be omitted. To include this species, use the accepted scientific name.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      Duplicate entries detected. Duplicates will only be counted once.
      CAREX FOENEA is an accepted scientific name and a synonym. It will default to accepted scientific name.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      CAREX FOENEA is an accepted scientific name and a synonym. It will default to accepted scientific name.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      Duplicate entries detected. Duplicates will only be counted once.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      Duplicate entries detected. Duplicates will only be counted once.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.  If allow_duplicates = FALSE, cover values of synonyms will be added together.
      Duplicate entries detected. Duplicates will only be counted once.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.
      Duplicate entries detected. Duplicates will only be counted once.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.
      Duplicate entries detected. Duplicates will only be counted once.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.
      Duplicate entries detected. Duplicates will only be counted once.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.  If allow_duplicates = FALSE, cover values of synonyms will be added together.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.  If allow_duplicates = FALSE, cover values of synonyms will be added together.
      Duplicate entries detected. Duplicates will only be counted once.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.
      Duplicate entries detected. Duplicates will only be counted once.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.  If allow_duplicates = FALSE, cover values of synonyms will be added together.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.  If allow_duplicates = FALSE, cover values of synonyms will be added together.
      Duplicate entries detected. Duplicates will only be counted once.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      Duplicate entries detected. Duplicates will only be counted once.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      Duplicate entries detected. Duplicates will only be counted once.
      Species ABIES BIFOLIA, ABIES LASIOCARPA are synonyms and will be treated as one species.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      montana_2017 does not have wetness coefficients, wetland metrics cannot be calculated.
      Species BOOP not listed in database. It will be discarded.
      Species BOOP not listed in database. It will be discarded.
      Species BOOP not listed in database. It will be discarded.
      Species BOOP not listed in database. It will be discarded.
      Species ABRONIA FRAGRANS is recognized but has not been assigned a C Value. If using the shiny web application, this species will only be included in metrics that don't require a C Value. Otherwise, the option to include species with no C Value in certain metrics can be set using the 'allow_no_c' argument. Species ACER GRANDIDENTATUM is recognized but has not been assigned a C Value. If using the shiny web application, this species will only be included in metrics that don't require a C Value. Otherwise, the option to include species with no C Value in certain metrics can be set using the 'allow_no_c' argument.
      Species BOOP not listed in database. It will be discarded.
      Species ABRONIA FRAGRANS is recognized but has not been assigned a C Value. If using the shiny web application, this species will only be included in metrics that don't require a C Value. Otherwise, the option to include species with no C Value in certain metrics can be set using the 'allow_no_c' argument.
      Species BOOP not listed in database. It will be discarded.
      Species ABRONIA FRAGRANS is recognized but has not been assigned a C Value. If using the shiny web application, this species will only be included in metrics that don't require a C Value. Otherwise, the option to include species with no C Value in certain metrics can be set using the 'allow_no_c' argument. Species ACER GRANDIDENTATUM is recognized but has not been assigned a C Value. If using the shiny web application, this species will only be included in metrics that don't require a C Value. Otherwise, the option to include species with no C Value in certain metrics can be set using the 'allow_no_c' argument.
      Species BOOP not listed in database. It will be discarded.
      Species ABRONIA FRAGRANS is recognized but has not been assigned a C Value. If using the shiny web application, this species will only be included in metrics that don't require a C Value. Otherwise, the option to include species with no C Value in certain metrics can be set using the 'allow_no_c' argument.
      Species BOOP not listed in database. It will be discarded.
      Species ABRONIA FRAGRANS is recognized but has not been assigned a C Value. If using the shiny web application, this species will only be included in metrics that don't require a C Value. Otherwise, the option to include species with no C Value in certain metrics can be set using the 'allow_no_c' argument. Species ACER GRANDIDENTATUM is recognized but has not been assigned a C Value. If using the shiny web application, this species will only be included in metrics that don't require a C Value. Otherwise, the option to include species with no C Value in certain metrics can be set using the 'allow_no_c' argument.
      Species BOOP not listed in database. It will be discarded.
      Species ABRONIA FRAGRANS is recognized but has not been assigned a C Value. If using the shiny web application, this species will only be included in metrics that don't require a C Value. Otherwise, the option to include species with no C Value in certain metrics can be set using the 'allow_no_c' argument.
      Species BOOP not listed in database. It will be discarded.
      Species ABRONIA FRAGRANS is recognized but has not been assigned a C Value. If using the shiny web application, this species will only be included in metrics that don't require a C Value. Otherwise, the option to include species with no C Value in certain metrics can be set using the 'allow_no_c' argument. Species ACER GRANDIDENTATUM is recognized but has not been assigned a C Value. If using the shiny web application, this species will only be included in metrics that don't require a C Value. Otherwise, the option to include species with no C Value in certain metrics can be set using the 'allow_no_c' argument.
      Species BOOP not listed in database. It will be discarded.
      Species ABRONIA FRAGRANS is recognized but has not been assigned a C Value. If using the shiny web application, this species will only be included in metrics that don't require a C Value. Otherwise, the option to include species with no C Value in certain metrics can be set using the 'allow_no_c' argument.
      Species BOOP not listed in database. It will be discarded.
      Species ABRONIA FRAGRANS is recognized but has not been assigned a C Value. If using the shiny web application, this species will only be included in metrics that don't require a C Value. Otherwise, the option to include species with no C Value in certain metrics can be set using the 'allow_no_c' argument. Species ACER GRANDIDENTATUM is recognized but has not been assigned a C Value. If using the shiny web application, this species will only be included in metrics that don't require a C Value. Otherwise, the option to include species with no C Value in certain metrics can be set using the 'allow_no_c' argument.
      montana_2017 does not have wetness coefficients, wetland metrics cannot be calculated.
      Species BOOP not listed in database. It will be discarded.
      montana_2017 does not have wetness coefficients, wetland metrics cannot be calculated.
      Species BOOP not listed in database. It will be discarded.
      Duplicate entries detected in the same plot. Duplicates in the same plot will be counted once. Cover values of duplicate species will be added together.
      Species c("GROUND", "WATER", "GROUND") does not have a wetness coefficient. It will be omitted from wetness metric calculations.
      Species c("GROUND", "WATER", "GROUND") does not have a wetness coefficient. It will be omitted from wetness metric calculations.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Species TYPO not listed in database. It will be discarded.
      Species TYPO not listed in database. It will be discarded.
      Species TYPO not listed in database. It will be discarded.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Species TYPO not listed in database. It will be discarded.
      Species TYPO not listed in database. It will be discarded.
      Species TYPO not listed in database. It will be discarded.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Species TYPO not listed in database. It will be discarded.
      Species TYPO not listed in database. It will be discarded.
      Species TYPO not listed in database. It will be discarded.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Species TYPO not listed in database. It will be discarded.
      Species TYPO not listed in database. It will be discarded.
      Species TYPO not listed in database. It will be discarded.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      Duplicate entries detected. Duplicates will only be counted once.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      Duplicate entries detected. Duplicates will only be counted once.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      Duplicate entries detected. Duplicates will only be counted once.
      CAREX FOENEA is an accepted scientific name and a synonym. It will default to accepted scientific name.
      Duplicate entries detected. Duplicates will only be counted once.
      CAREX FOENEA is an accepted scientific name and a synonym. It will default to accepted scientific name.
      Duplicate entries detected. Duplicates will only be counted once.
      CAREX FOENEA is an accepted scientific name and a synonym. It will default to accepted scientific name.
      Duplicate entries detected. Duplicates will only be counted once.
      CAREX FOENEA is an accepted scientific name and a synonym. It will default to accepted scientific name.
      Duplicate entries detected. Duplicates will only be counted once.
      CAREX FOENEA is an accepted scientific name and a synonym. It will default to accepted scientific name.
      Duplicate entries detected. Duplicates will only be counted once.
      CAREX FOENEA is an accepted scientific name and a synonym. It will default to accepted scientific name.
      Duplicate entries detected. Duplicates will only be counted once.
      CAREX FOENEA is an accepted scientific name and a synonym. It will default to accepted scientific name.
      Duplicate entries detected. Duplicates will only be counted once.
      CAREX FOENEA is an accepted scientific name and a synonym. It will default to accepted scientific name.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      Duplicate entries detected. Duplicates will only be counted once.
      CAREX FOENEA is an accepted scientific name and a synonym. It will default to accepted scientific name.
      The Wyoming FQA database is associated with multiple wetland indicator status regions. This package defaults to the Arid West wetland indicator region when calculating Wyoming metrics.
      Duplicate entries detected. Duplicates will only be counted once.
      CAREX FOENEA is an accepted scientific name and a synonym. It will default to accepted scientific name.
      montana_2017 does not have wetness coefficients, wetland metrics cannot be calculated.
      Species BOOP not listed in database. It will be discarded.
      Duplicate entries detected. Duplicates will only be counted once.
      Species CAREX FOENEA not listed in database. It will be discarded.
      Duplicate entries detected. Duplicates will only be counted once.
      CAREX FOENEA is an accepted scientific name and a synonym. It will default to accepted scientific name.
      Duplicate entries detected. Duplicates will only be counted once.
      CAREX FOENEA is an accepted scientific name and a synonym. It will default to accepted scientific name.
      The Colorado FQA database is associated with multiple wetland indicator status regions. This package defaults to the Western Mountains, Valleys, and Coasts indicator region when calculating Colorado metrics.
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 178 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-freq_metrics.R:61:3'): physiog_summary() works in perfect setting ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-freq_metrics.R:61:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─fqacalc::physiog_summary(transect, key = "acronym", db = "michigan_2014")
        5. │ ├─... %>% ...
        6. │ ├─base::as.data.frame(...)
        7. │ ├─dplyr::count(entries, .data$physiognomy, name = "relative_frequency")
        8. │ └─dplyr:::count.data.frame(entries, .data$physiognomy, name = "relative_frequency")
        9. │   └─dplyr:::map_chr(by_exprs, as_string)
       10. │     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11. │       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12. │         └─rlang (local) FUN(X[[i]], ...)
       13. │           └─rlang:::abort_coercion(x, "a string")
       14. │             └─rlang::abort(msg, call = call)
       15. └─dplyr::mutate(., relative_frequency = 100 * relative_frequency/nrow(entries))
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 178 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘introduction.Rmd’ using rmarkdown
    crooked_island             package:fqacalc             R Documentation
    
    _A _L_i_s_t _o_f _P_l_a_n_t_s _f_r_o_m _C_r_o_o_k_e_d _I_s_l_a_n_d, _M_I
    
    _D_e_s_c_r_i_p_t_i_o_n:
    
         A plant list from a site assessment conducted on crooked island,
         MI in open dune habitat. The data was collected in the summer of
         2022 by Joshua Cohen, Jesse Lincoln, Tyler Bassett, and Scott
         Warner as part of a project for the National Wildlife Refuge.
    
    _U_s_a_g_e:
    
         crooked_island
         
    _F_o_r_m_a_t:
    
         A data frame with 35 rows and 3 variables:
    
         name Latin names for each plant
    
         acronym Unique acronyms for each plant
    
         common_name Common names for each plant
    
    _S_o_u_r_c_e:
    
         <https://universalfqa.org/>
    
    
    all_metrics              package:fqacalc               R Documentation
    
    _P_r_i_n_t _a _S_u_m_m_a_r_y _o_f _N_o_n-_W_e_i_g_h_t_e_d _F_Q_A _M_e_t_r_i_c_s
    
    _D_e_s_c_r_i_p_t_i_o_n:
    
         'all_metrics' calculates and prints a summary of all non
         cover-weighted metrics, including Species Richness, Native Species
         Richness, Introduced Species Richness, % of species within C value
         ranges, Mean C, Native Mean C, Total FQI, Native FQI, Adjusted
         FQI, Mean Wetness, Native Mean Wetness and % Hydrophytes.
    
    _U_s_a_g_e:
    
         all_metrics(x, key = "name", db, allow_no_c = TRUE)
         
    _A_r_g_u_m_e_n_t_s:
    
           x: A data frame containing a list of plant species. This data
              frame must have one of the following columns: 'name' or
              'acronym'. For cover-weighted or relative functions, this
              data frame must also have a column called 'cover' containing
              cover values and ideally a column containing plot IDs.
    
         key: A character string representing the column that will be used
              to join the input data frame 'x' with the regional FQA
              database. If a value is not specified, the default is
              '"name"'. '"name"' and '"acronym"' are the only acceptable
              values for 'key'.
    
          db: A character string representing the regional FQA database to
              use. See 'db_names' for a list of potential values and the
              'fqadata' R package where the databases are hosted.
    
    allow_no_c: Boolean (TRUE or FALSE). If TRUE, allow species that are
              found in the regional FQA database but have not been assigned
              a C Values. If FALSE, omit species that have not been
              assigned C Values.
    
    _V_a_l_u_e:
    
         A data frame
    
    _E_x_a_m_p_l_e_s:
    
         plant_list <- crooked_island
         all_metrics(x = plant_list, key = "acronym", db = "michigan_2014")
         
    
    
    Quitting from lines 396-422 [unnamed-chunk-15] (introduction.Rmd)
    Error: processing vignette 'introduction.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘introduction.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘introduction.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# genBaRcode

<details>

* Version: 1.2.7
* GitHub: NA
* Source code: https://github.com/cran/genBaRcode
* Date/Publication: 2023-12-11 13:10:05 UTC
* Number of recursive dependencies: 159

Run `revdepcheck::cloud_details(, "genBaRcode")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(genBaRcode)
      > 
      > test_check("genBaRcode")
      [ FAIL 1 | WARN 1 | SKIP 0 | PASS 45 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_raw_data_functions.R:152:5'): processingRawData - fixBorderlineBCs and extractWobble ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─base::data.frame(...) at test_raw_data_functions.R:152:5
        2. └─genBaRcode:::extractWobble(...)
        3.   ├─dplyr::count(dat, dat[, 1], sort = TRUE)
        4.   └─dplyr:::count.data.frame(dat, dat[, 1], sort = TRUE)
        5.     └─dplyr:::map_chr(by_exprs, as_string)
        6.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.           └─rlang (local) FUN(X[[i]], ...)
        9.             └─rlang:::abort_coercion(x, "a string")
       10.               └─rlang::abort(msg, call = call)
      
      [ FAIL 1 | WARN 1 | SKIP 0 | PASS 45 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘genBaRcode_GUI_Vignette.Rmd’ using rmarkdown
    --- finished re-building ‘genBaRcode_GUI_Vignette.Rmd’
    
    --- re-building ‘genBaRcode_Vignette.Rmd’ using rmarkdown
    
    Quitting from lines 155-176 [unnamed-chunk-4] (genBaRcode_Vignette.Rmd)
    Error: processing vignette 'genBaRcode_Vignette.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘genBaRcode_Vignette.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘genBaRcode_Vignette.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# gggenomes

<details>

* Version: 1.0.1
* GitHub: https://github.com/thackl/gggenomes
* Source code: https://github.com/cran/gggenomes
* Date/Publication: 2024-08-30 11:40:02 UTC
* Number of recursive dependencies: 112

Run `revdepcheck::cloud_details(, "gggenomes")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘gggenomes-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: focus
    > ### Title: Show features and regions of interest
    > ### Aliases: focus locate
    > 
    > ### ** Examples
    > 
    > 
    > # Let's hunt some defense systems in marine SAGs
    > # read the genomes
    > s0 <- read_seqs(ex("gorg/gorg.fna.fai"))
    Reading 'fai' with `read_fai()`:
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘emales.Rmd’ using rmarkdown
    --- finished re-building ‘emales.Rmd’
    
    --- re-building ‘flip.Rmd’ using rmarkdown
    ```

# ggpubr

<details>

* Version: 0.6.0
* GitHub: https://github.com/kassambara/ggpubr
* Source code: https://github.com/cran/ggpubr
* Date/Publication: 2023-02-10 16:20:02 UTC
* Number of recursive dependencies: 89

Run `revdepcheck::cloud_details(, "ggpubr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(ggpubr)
      Loading required package: ggplot2
      > 
      > test_check("ggpubr")
      [ FAIL 1 | WARN 6 | SKIP 0 | PASS 184 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-stat_anova_test.R:221:3'): stat_anova_test works for two-way mixed anova ──
      `res_mixed_anova` not equal to `res_mixed_anova_expected`.
      Attributes: < Component "row.names": Numeric: lengths (0, 1) differ >
      Component "x": Numeric: lengths (0, 1) differ
      Component "y": Numeric: lengths (0, 1) differ
      Component "label": Lengths (0, 1) differ (string compare on first 0)
      
      [ FAIL 1 | WARN 6 | SKIP 0 | PASS 184 ]
      Error: Test failures
      Execution halted
    ```

# globaltrends

<details>

* Version: 0.0.14
* GitHub: https://github.com/ha-pu/globaltrends
* Source code: https://github.com/cran/globaltrends
* Date/Publication: 2023-03-06 19:50:02 UTC
* Number of recursive dependencies: 99

Run `revdepcheck::cloud_details(, "globaltrends")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘test_functions.r’
      Running ‘testthat.r’
    Running the tests in ‘tests/testthat.r’ failed.
    Complete output:
      > library(testthat)
      > library(globaltrends)
      > 
      > test_check("globaltrends")
      [ FAIL 32 | WARN 10 | SKIP 6 | PASS 532 ]
      
      ══ Skipped tests (6) ═══════════════════════════════════════════════════════════
      • On CRAN (6): 'test-downloads.R:33:3', 'test-downloads.R:61:3',
        'test-downloads.R:72:3', 'test-downloads.R:110:3', 'test-downloads.R:138:3',
        'test-downloads.R:149:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-24months.R:25:3'): score1 ──────────────────────────────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `map(.x, .f, ..., .progress = .progress)`: ℹ In index: 12.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      ── Error ('test-24months.R:32:3'): score2 ──────────────────────────────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `map(.x, .f, ..., .progress = .progress)`: ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      ── Error ('test-24months.R:47:3'): score3 ──────────────────────────────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `map(.x, .f, ..., .progress = .progress)`: ℹ In index: 12.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      ── Error ('test-24months.R:54:3'): score4 ──────────────────────────────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `map(.x, .f, ..., .progress = .progress)`: ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      ── Error ('test-24months.R:69:3'): score5 ──────────────────────────────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `map(.x, .f, ..., .progress = .progress)`: ℹ In index: 12.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      ── Error ('test-24months.R:76:3'): score6 ──────────────────────────────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `map(.x, .f, ..., .progress = .progress)`: ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      ── Error ('test-24months.R:94:3'): plot_score1 ─────────────────────────────────
      <subscriptOutOfBoundsError/error/condition>
      Error in `unique(data$keyword)[[1]]`: subscript out of bounds
      Backtrace:
          ▆
       1. ├─testthat::expect_s3_class(plot_bar(data, type = "obs"), "ggplot") at test-24months.R:94:3
       2. │ └─testthat::quasi_label(enquo(object), arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. ├─globaltrends::plot_bar(data, type = "obs")
       5. └─globaltrends:::plot_bar.exp_score(data, type = "obs")
      ── Error ('test-24months.R:109:3'): plot_score2 ────────────────────────────────
      <subscriptOutOfBoundsError/error/condition>
      Error in `unique(data$keyword)[[1]]`: subscript out of bounds
      Backtrace:
          ▆
       1. ├─testthat::expect_warning(plot_bar(data, type = "sad"), "Plot cannot be created.\nThere is no non-missing data for score_sad.\nMaybe time series adjustments were impossible in compute_score due to less than 24 months of data.") at test-24months.R:109:3
       2. │ └─testthat:::quasi_capture(...)
       3. │   ├─testthat (local) .capture(...)
       4. │   │ └─base::withCallingHandlers(...)
       5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
       6. ├─globaltrends::plot_bar(data, type = "sad")
       7. └─globaltrends:::plot_bar.exp_score(data, type = "sad")
      ── Error ('test-24months.R:124:3'): plot_score3 ────────────────────────────────
      <subscriptOutOfBoundsError/error/condition>
      Error in `unique(data$keyword)[[1]]`: subscript out of bounds
      Backtrace:
          ▆
       1. ├─testthat::expect_warning(plot_bar(data, type = "trd"), "Plot cannot be created.\nThere is no non-missing data for score_trd.\nMaybe time series adjustments were impossible in compute_score due to less than 24 months of data.") at test-24months.R:124:3
       2. │ └─testthat:::quasi_capture(...)
       3. │   ├─testthat (local) .capture(...)
       4. │   │ └─base::withCallingHandlers(...)
       5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
       6. ├─globaltrends::plot_bar(data, type = "trd")
       7. └─globaltrends:::plot_bar.exp_score(data, type = "trd")
      ── Failure ('test-24months.R:142:3'): plot_voi1 ────────────────────────────────
      plot_box(data, type = "obs") is not an S3 object
      ── Failure ('test-24months.R:146:3'): plot_voi1 ────────────────────────────────
      plot_ts(data, type = "obs") is not an S3 object
      ── Failure ('test-24months.R:178:3'): plot_doi1 ────────────────────────────────
      plot_box(data, type = "obs") is not an S3 object
      ── Failure ('test-24months.R:182:3'): plot_doi1 ────────────────────────────────
      plot_ts(data, type = "obs") is not an S3 object
      ── Failure ('test-24months.R:215:3'): plot_voi_doi1 ────────────────────────────
      plot_voi_doi(data_voi = data1, data_doi = data2, type = "obs") is not an S3 object
      ── Error ('test-computations.R:31:3'): compute_score1 ──────────────────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `map(.x, .f, ..., .progress = .progress)`: ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      ── Error ('test-computations.R:77:3'): compute_voi1 ────────────────────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `map(.x, .f, ..., .progress = .progress)`: ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      ── Failure ('test-computations.R:94:3'): compute_doi1 ──────────────────────────
      nrow(out) not equal to 1440.
      1/1 mismatches
      [1] 0 - 1440 == -1440
      ── Error ('test-locations.R:75:3'): compute_score1 ─────────────────────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `map(.x, .f, ..., .progress = .progress)`: ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      ── Error ('test-locations.R:104:3'): compute_score2 ────────────────────────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `map(.x, .f, ..., .progress = .progress)`: ℹ In index: 12.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      ── Failure ('test-locations.R:134:3'): compute_doi ─────────────────────────────
      out$locations not identical to c("asia", "countries").
      Lengths differ: 0 is not 2
      ── Failure ('test-locations.R:139:3'): compute_doi ─────────────────────────────
      out$n not equal to c(1440, 1440).
      Modes: logical, numeric
      Lengths: 0, 2
      target is logical, current is numeric
      ── Failure ('test-locations.R:153:3'): compute_doi ─────────────────────────────
      all(...) is not FALSE
      
      `actual`:   TRUE 
      `expected`: FALSE
      ── Failure ('test-locations.R:154:3'): compute_doi ─────────────────────────────
      all(...) is not FALSE
      
      `actual`:   TRUE 
      `expected`: FALSE
      ── Failure ('test-locations.R:155:3'): compute_doi ─────────────────────────────
      all(...) is not FALSE
      
      `actual`:   TRUE 
      `expected`: FALSE
      ── Failure ('test-locations.R:163:3'): export_score ────────────────────────────
      unique(out1$location) not equal to location_set[4:5].
      Lengths differ: 0 is not 2
      ── Failure ('test-locations.R:168:3'): export_score ────────────────────────────
      unique(out2$location) not equal to location_set[4:6].
      Lengths differ: 0 is not 3
      ── Failure ('test-locations.R:179:3'): export_doi ──────────────────────────────
      all(out1$gini == out2$gini) is not FALSE
      
      `actual`:   TRUE 
      `expected`: FALSE
      ── Failure ('test-locations.R:180:3'): export_doi ──────────────────────────────
      all(out1$hhi == out2$hhi) is not FALSE
      
      `actual`:   TRUE 
      `expected`: FALSE
      ── Failure ('test-locations.R:181:3'): export_doi ──────────────────────────────
      all(out1$entropy == out2$entropy) is not FALSE
      
      `actual`:   TRUE 
      `expected`: FALSE
      ── Failure ('test-locations.R:190:3'): plot_ts ─────────────────────────────────
      identical(plot1, plot2) is not FALSE
      
      `actual`:   TRUE 
      `expected`: FALSE
      ── Failure ('test-locations.R:198:3'): plot_box ────────────────────────────────
      identical(plot1, plot2) is not FALSE
      
      `actual`:   TRUE 
      `expected`: FALSE
      ── Error ('test-synonyms.R:66:1'): (code run outside of `test_that()`) ─────────
      <purrr_error_indexed/rlang_error/error/condition>
      Error in `map(.x, .f, ..., .progress = .progress)`: ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      
      [ FAIL 32 | WARN 10 | SKIP 6 | PASS 532 ]
      Error: Test failures
      Execution halted
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
    
    > ### Name: collapse_groups
    > ### Title: Collapse groups with categorical, numerical, ID, and size
    > ###   balancing
    > ### Aliases: collapse_groups
    > 
    > ### ** Examples
    > 
    > # Attach packages
    > library(groupdata2)
    > library(dplyr)
    
    Attaching package: ‘dplyr’
    
    The following objects are masked from ‘package:stats’:
    
        filter, lag
    
    The following objects are masked from ‘package:base’:
    
        intersect, setdiff, setequal, union
    
    > 
    > # Set seed
    > if (requireNamespace("xpectr", quietly = TRUE)){
    +   xpectr::set_test_seed(42)
    + }
    > 
    > # Create data frame
    > df <- data.frame(
    +   "participant" = factor(rep(1:20, 3)),
    +   "age" = rep(sample(c(1:100), 20), 3),
    +   "answer" = factor(sample(c("a", "b", "c", "d"), 60, replace = TRUE)),
    +   "score" = sample(c(1:100), 20 * 3)
    + )
    > df <- df %>% dplyr::arrange(participant)
    > df$session <- rep(c("1", "2", "3"), 20)
    > 
    > # Sample rows to get unequal sizes per participant
    > df <- dplyr::sample_n(df, size = 53)
    > 
    > # Create the initial groups (to be collapsed)
    > df <- fold(
    +   data = df,
    +   k = 8,
    +   method = "n_dist",
    +   id_col = "participant"
    + )
    > 
    > # Ungroup the data frame
    > # Otherwise `collapse_groups()` would be
    > # applied to each fold separately!
    > df <- dplyr::ungroup(df)
    > 
    > # NOTE: Make sure to check the examples with `auto_tune`
    > # in the end, as this is where the magic lies
    > 
    > # Collapse to 3 groups with size balancing
    > # Creates new `.coll_groups` column
    > df_coll <- collapse_groups(
    +   data = df,
    +   n = 3,
    +   group_cols = ".folds",
    +   balance_size = TRUE # enabled by default
    + )
    > 
    > # Check balances
    > (coll_summary <- summarize_balances(
    +   data = df_coll,
    +   group_cols = ".coll_groups",
    +   cat_cols = 'answer',
    +   num_cols = c('score', 'age'),
    +   id_cols = 'participant'
    + ))
    Error in value[[3L]](cond) : 
      base_select() got error from subset(): Error in `map()`:
    ℹ In index: 1.
    Caused by error in `FUN()`:
    ! Can't convert a call to a string.
    Calls: summarize_balances ... tryCatch -> tryCatchList -> tryCatchOne -> <Anonymous>
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(groupdata2)
      > 
      > if (require("xpectr")) {
      +   test_check("groupdata2")
      + }
      Loading required package: xpectr
      [ FAIL 10 | WARN 0 | SKIP 5 | PASS 2981 ]
      
      ══ Skipped tests (5) ═══════════════════════════════════════════════════════════
      • Next part is too slow (1): 'test_fold.R:2648:3'
      • On CRAN (1): 'test_collapse_groups_auto_tuning.R:911:3'
      • Simulation that runs for a long time (1):
        'test_numerically_balanced_grouping.R:349:3'
      • Skipping bootstrapped numerical balancing test (1):
        'test_numerically_balanced_grouping.R:101:3'
      • Skipping bootstrapped numerical balancing test in partition() (1):
        'test_partition.R:282:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_collapse_groups.R:67:3'): testing summaries of method ascending-descending ──
      Error in `value[[3L]](cond)`: base_select() got error from subset(): Error in `map()`:
      ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      
      Backtrace:
           ▆
        1. ├─groupdata2::summarize_balances(...) at test_collapse_groups.R:67:3
        2. │ └─groupdata2:::run_by_group_list(...)
        3. │   └─groupdata2 (local) .fn(data, ...)
        4. │     └─groupdata2:::create_group_balance_summaries_(...)
        5. │       └─... %>% format_summary_()
        6. ├─groupdata2 (local) format_summary_(.)
        7. │ └─... %>% dplyr::arrange(.data$.group_col, .data$.group)
        8. ├─dplyr::arrange(., .data$.group_col, .data$.group)
        9. └─groupdata2:::position_first(., col = ".group_col")
       10.   └─groupdata2:::base_select(...)
       11.     └─base::tryCatch(...)
       12.       └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       13.         └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       14.           └─value[[3L]](cond)
      ── Error ('test_collapse_groups.R:346:3'): testing summaries of cat_levels ─────
      Error in `value[[3L]](cond)`: base_select() got error from subset(): Error in `map()`:
      ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      
      Backtrace:
           ▆
        1. ├─groupdata2::summarize_balances(...) at test_collapse_groups.R:346:3
        2. │ └─groupdata2:::run_by_group_list(...)
        3. │   └─groupdata2 (local) .fn(data, ...)
        4. │     └─groupdata2:::create_group_balance_summaries_(...)
        5. │       └─... %>% format_summary_()
        6. ├─groupdata2 (local) format_summary_(.)
        7. │ └─... %>% dplyr::arrange(.data$.group_col, .data$.group)
        8. ├─dplyr::arrange(., .data$.group_col, .data$.group)
        9. └─groupdata2:::position_first(., col = ".group_col")
       10.   └─groupdata2:::base_select(...)
       11.     └─base::tryCatch(...)
       12.       └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       13.         └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       14.           └─value[[3L]](cond)
      ── Error ('test_collapse_groups_auto_tuning.R:34:3'): testing find_best_group_cols_() ──
      Error in `value[[3L]](cond)`: base_select() got error from subset(): Error in `map()`:
      ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      
      Backtrace:
           ▆
        1. ├─groupdata2:::find_best_group_cols_(...) at test_collapse_groups_auto_tuning.R:34:3
        2. │ └─groupdata2::summarize_balances(...)
        3. │   └─groupdata2:::run_by_group_list(...)
        4. │     └─groupdata2 (local) .fn(data, ...)
        5. │       └─groupdata2:::create_group_balance_summaries_(...)
        6. │         └─... %>% format_summary_()
        7. ├─groupdata2 (local) format_summary_(.)
        8. │ └─... %>% dplyr::arrange(.data$.group_col, .data$.group)
        9. ├─dplyr::arrange(., .data$.group_col, .data$.group)
       10. └─groupdata2:::position_first(., col = ".group_col")
       11.   └─groupdata2:::base_select(...)
       12.     └─base::tryCatch(...)
       13.       └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       14.         └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       15.           └─value[[3L]](cond)
      ── Error ('test_collapse_groups_by.R:805:3'): testing collapse_groups_by_levels() ──
      Error in `value[[3L]](cond)`: base_select() got error from subset(): Error in `map()`:
      ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      
      Backtrace:
           ▆
        1. ├─groupdata2::summarize_balances(...) at test_collapse_groups_by.R:805:3
        2. │ └─groupdata2:::run_by_group_list(...)
        3. │   └─groupdata2 (local) .fn(data, ...)
        4. │     └─groupdata2:::create_group_balance_summaries_(...)
        5. │       └─... %>% format_summary_()
        6. ├─groupdata2 (local) format_summary_(.)
        7. │ └─... %>% dplyr::arrange(.data$.group_col, .data$.group)
        8. ├─dplyr::arrange(., .data$.group_col, .data$.group)
        9. └─groupdata2:::position_first(., col = ".group_col")
       10.   └─groupdata2:::base_select(...)
       11.     └─base::tryCatch(...)
       12.       └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       13.         └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       14.           └─value[[3L]](cond)
      ── Error ('test_summarize_balances.R:714:3'): testing summarize_balances() ─────
      Error in `value[[3L]](cond)`: base_select() got error from subset(): Error in `map()`:
      ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      
      Backtrace:
           ▆
        1. ├─groupdata2::summarize_balances(...) at test_summarize_balances.R:714:3
        2. │ └─groupdata2:::run_by_group_list(...)
        3. │   └─groupdata2 (local) .fn(data, ...)
        4. │     └─groupdata2:::create_group_balance_summaries_(...)
        5. │       └─... %>% format_summary_()
        6. ├─groupdata2 (local) format_summary_(.)
        7. │ └─... %>% dplyr::arrange(.data$.group_col, .data$.group)
        8. ├─dplyr::arrange(., .data$.group_col, .data$.group)
        9. └─groupdata2:::position_first(., col = ".group_col")
       10.   └─groupdata2:::base_select(...)
       11.     └─base::tryCatch(...)
       12.       └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       13.         └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       14.           └─value[[3L]](cond)
      ── Error ('test_summarize_balances.R:1170:3'): testing examples for summarize_balances() ──
      Error in `value[[3L]](cond)`: base_select() got error from subset(): Error in `map()`:
      ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      
      Backtrace:
           ▆
        1. ├─df_folded %>% dplyr::ungroup() %>% ... at test_summarize_balances.R:1170:3
        2. ├─groupdata2::summarize_balances(...)
        3. │ └─groupdata2:::run_by_group_list(...)
        4. │   └─groupdata2 (local) .fn(data, ...)
        5. │     └─groupdata2:::create_group_balance_summaries_(...)
        6. │       └─... %>% format_summary_()
        7. ├─groupdata2 (local) format_summary_(.)
        8. │ └─... %>% dplyr::arrange(.data$.group_col, .data$.group)
        9. ├─dplyr::arrange(., .data$.group_col, .data$.group)
       10. └─groupdata2:::position_first(., col = ".group_col")
       11.   └─groupdata2:::base_select(...)
       12.     └─base::tryCatch(...)
       13.       └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       14.         └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       15.           └─value[[3L]](cond)
      ── Error ('test_summarize_balances.R:2244:3'): testing create_group_balance_summaries_() ──
      Error in `value[[3L]](cond)`: base_select() got error from subset(): Error in `map()`:
      ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      
      Backtrace:
           ▆
        1. ├─groupdata2:::create_group_balance_summaries_(...) at test_summarize_balances.R:2244:3
        2. │ └─... %>% format_summary_()
        3. ├─groupdata2 (local) format_summary_(.)
        4. │ └─... %>% dplyr::arrange(.data$.group_col, .data$.group)
        5. ├─dplyr::arrange(., .data$.group_col, .data$.group)
        6. └─groupdata2:::position_first(., col = ".group_col")
        7.   └─groupdata2:::base_select(...)
        8.     └─base::tryCatch(...)
        9.       └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       10.         └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       11.           └─value[[3L]](cond)
      ── Error ('test_summarize_balances.R:2806:3'): testing measure_summary_numerics_() and join_group_summaries_() ──
      Error in `value[[3L]](cond)`: base_select() got error from subset(): Error in `map()`:
      ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      
      Backtrace:
           ▆
        1. ├─groupdata2:::create_group_balance_summaries_(...) at test_summarize_balances.R:2806:3
        2. │ └─... %>% format_summary_()
        3. ├─groupdata2 (local) format_summary_(.)
        4. │ └─... %>% dplyr::arrange(.data$.group_col, .data$.group)
        5. ├─dplyr::arrange(., .data$.group_col, .data$.group)
        6. └─groupdata2:::position_first(., col = ".group_col")
        7.   └─groupdata2:::base_select(...)
        8.     └─base::tryCatch(...)
        9.       └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       10.         └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       11.           └─value[[3L]](cond)
      ── Error ('test_summarize_balances.R:3079:3'): testing ranked_balances() ───────
      Error in `value[[3L]](cond)`: base_select() got error from subset(): Error in `map()`:
      ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      
      Backtrace:
           ▆
        1. ├─groupdata2::summarize_balances(...) at test_summarize_balances.R:3079:3
        2. │ └─groupdata2:::run_by_group_list(...)
        3. │   └─groupdata2 (local) .fn(data, ...)
        4. │     └─groupdata2:::create_group_balance_summaries_(...)
        5. │       └─... %>% format_summary_()
        6. ├─groupdata2 (local) format_summary_(.)
        7. │ └─... %>% dplyr::arrange(.data$.group_col, .data$.group)
        8. ├─dplyr::arrange(., .data$.group_col, .data$.group)
        9. └─groupdata2:::position_first(., col = ".group_col")
       10.   └─groupdata2:::base_select(...)
       11.     └─base::tryCatch(...)
       12.       └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       13.         └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       14.           └─value[[3L]](cond)
      ── Error ('test_summarizers.R:510:3'): testing create_cat_summaries_() ─────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─groupdata2:::create_cat_summaries_(...) at test_summarizers.R:510:3
        2. │ └─... %>% ...
        3. ├─tidyr::spread(...)
        4. ├─dplyr::select(., dplyr::one_of(group_col, "cat_name", tmp_n_var))
        5. ├─groupdata2:::rename_cat_levels_for_summary_(...)
        6. │ └─checkmate::assert_data_frame(cat_levels_map)
        7. │   └─checkmate::checkDataFrame(...)
        8. │     └─... %and% checkListTypes(x, types)
        9. │       └─base::isTRUE(lhs)
       10. ├─dplyr::count(...)
       11. └─dplyr:::count.data.frame(...)
       12.   └─dplyr:::map_chr(by_exprs, as_string)
       13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       15.         └─rlang (local) FUN(X[[i]], ...)
       16.           └─rlang:::abort_coercion(x, "a string")
       17.             └─rlang::abort(msg, call = call)
      
      [ FAIL 10 | WARN 0 | SKIP 5 | PASS 2981 ]
      Error: Test failures
      Execution halted
    ```

# gtsummary

<details>

* Version: 2.0.3
* GitHub: https://github.com/ddsjoberg/gtsummary
* Source code: https://github.com/cran/gtsummary
* Date/Publication: 2024-10-04 19:30:02 UTC
* Number of recursive dependencies: 187

Run `revdepcheck::cloud_details(, "gtsummary")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘gtsummary-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: tbl_ard_hierarchical
    > ### Title: ARD Hierarchical Table
    > ### Aliases: tbl_ard_hierarchical
    > 
    > ### ** Examples
    > 
    > ADAE_subset <- cards::ADAE |>
    +   dplyr::filter(
    +     AESOC %in% unique(cards::ADAE$AESOC)[1:5],
    +     AETERM %in% unique(cards::ADAE$AETERM)[1:5]
    +   )
    > 
    > # Example 1: Event Rates  --------------------
    > # First, build the ARD
    > ard <-
    +   cards::ard_stack_hierarchical(
    +     data = ADAE_subset,
    +     variables = c(AESOC, AETERM),
    +     by = TRTA,
    +     denominator = cards::ADSL |> mutate(TRTA = ARM),
    +     id = USUBJID
    +   )
    > 
    > # Second, build table from the ARD
    > tbl_ard_hierarchical(
    +   cards = ard,
    +   variables = c(AESOC, AETERM),
    +   by = TRTA
    + )
    Error in pier_summary_hierarchical(cards = cards, variables = variables,  : 
      object '.' not found
    Calls: tbl_ard_hierarchical ... pier_summary_hierarchical -> <Anonymous> -> left_join.data.frame -> rel_try
    Execution halted
    ```

# hacksaw

<details>

* Version: 0.0.2
* GitHub: NA
* Source code: https://github.com/cran/hacksaw
* Date/Publication: 2020-12-15 05:30:02 UTC
* Number of recursive dependencies: 57

Run `revdepcheck::cloud_details(, "hacksaw")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘hacksaw-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: filter_split
    > ### Title: Perform various operations before splitting
    > ### Aliases: filter_split select_split count_split mutate_split
    > ###   distinct_split transmute_split slice_split pull_split group_by_split
    > ###   eval_split precision_split
    > 
    > ### ** Examples
    > 
    > library(dplyr)
    
    Attaching package: ‘dplyr’
    
    The following objects are masked from ‘package:stats’:
    
        filter, lag
    
    The following objects are masked from ‘package:base’:
    
        intersect, setdiff, setequal, union
    
    > mtcars %>% filter_split(cyl == 4, cyl == 6)
    [[1]]
                    mpg cyl  disp  hp drat    wt  qsec vs am gear carb
    Datsun 710     22.8   4 108.0  93 3.85 2.320 18.61  1  1    4    1
    Merc 240D      24.4   4 146.7  62 3.69 3.190 20.00  1  0    4    2
    Merc 230       22.8   4 140.8  95 3.92 3.150 22.90  1  0    4    2
    Fiat 128       32.4   4  78.7  66 4.08 2.200 19.47  1  1    4    1
    Honda Civic    30.4   4  75.7  52 4.93 1.615 18.52  1  1    4    2
    Toyota Corolla 33.9   4  71.1  65 4.22 1.835 19.90  1  1    4    1
    Toyota Corona  21.5   4 120.1  97 3.70 2.465 20.01  1  0    3    1
    Fiat X1-9      27.3   4  79.0  66 4.08 1.935 18.90  1  1    4    1
    Porsche 914-2  26.0   4 120.3  91 4.43 2.140 16.70  0  1    5    2
    Lotus Europa   30.4   4  95.1 113 3.77 1.513 16.90  1  1    5    2
    Volvo 142E     21.4   4 121.0 109 4.11 2.780 18.60  1  1    4    2
    
    [[2]]
                    mpg cyl  disp  hp drat    wt  qsec vs am gear carb
    Mazda RX4      21.0   6 160.0 110 3.90 2.620 16.46  0  1    4    4
    Mazda RX4 Wag  21.0   6 160.0 110 3.90 2.875 17.02  0  1    4    4
    Hornet 4 Drive 21.4   6 258.0 110 3.08 3.215 19.44  1  0    3    1
    Valiant        18.1   6 225.0 105 2.76 3.460 20.22  1  0    3    1
    Merc 280       19.2   6 167.6 123 3.92 3.440 18.30  1  0    4    4
    Merc 280C      17.8   6 167.6 123 3.92 3.440 18.90  1  0    4    4
    Ferrari Dino   19.7   6 145.0 175 3.62 2.770 15.50  0  1    5    6
    
    > iris %>% select_split(starts_with("Sepal"), starts_with("Petal"))
    [[1]]
        Sepal.Length Sepal.Width
    1            5.1         3.5
    2            4.9         3.0
    3            4.7         3.2
    4            4.6         3.1
    5            5.0         3.6
    6            5.4         3.9
    7            4.6         3.4
    8            5.0         3.4
    9            4.4         2.9
    10           4.9         3.1
    11           5.4         3.7
    12           4.8         3.4
    13           4.8         3.0
    14           4.3         3.0
    15           5.8         4.0
    16           5.7         4.4
    17           5.4         3.9
    18           5.1         3.5
    19           5.7         3.8
    20           5.1         3.8
    21           5.4         3.4
    22           5.1         3.7
    23           4.6         3.6
    24           5.1         3.3
    25           4.8         3.4
    26           5.0         3.0
    27           5.0         3.4
    28           5.2         3.5
    29           5.2         3.4
    30           4.7         3.2
    31           4.8         3.1
    32           5.4         3.4
    33           5.2         4.1
    34           5.5         4.2
    35           4.9         3.1
    36           5.0         3.2
    37           5.5         3.5
    38           4.9         3.6
    39           4.4         3.0
    40           5.1         3.4
    41           5.0         3.5
    42           4.5         2.3
    43           4.4         3.2
    44           5.0         3.5
    45           5.1         3.8
    46           4.8         3.0
    47           5.1         3.8
    48           4.6         3.2
    49           5.3         3.7
    50           5.0         3.3
    51           7.0         3.2
    52           6.4         3.2
    53           6.9         3.1
    54           5.5         2.3
    55           6.5         2.8
    56           5.7         2.8
    57           6.3         3.3
    58           4.9         2.4
    59           6.6         2.9
    60           5.2         2.7
    61           5.0         2.0
    62           5.9         3.0
    63           6.0         2.2
    64           6.1         2.9
    65           5.6         2.9
    66           6.7         3.1
    67           5.6         3.0
    68           5.8         2.7
    69           6.2         2.2
    70           5.6         2.5
    71           5.9         3.2
    72           6.1         2.8
    73           6.3         2.5
    74           6.1         2.8
    75           6.4         2.9
    76           6.6         3.0
    77           6.8         2.8
    78           6.7         3.0
    79           6.0         2.9
    80           5.7         2.6
    81           5.5         2.4
    82           5.5         2.4
    83           5.8         2.7
    84           6.0         2.7
    85           5.4         3.0
    86           6.0         3.4
    87           6.7         3.1
    88           6.3         2.3
    89           5.6         3.0
    90           5.5         2.5
    91           5.5         2.6
    92           6.1         3.0
    93           5.8         2.6
    94           5.0         2.3
    95           5.6         2.7
    96           5.7         3.0
    97           5.7         2.9
    98           6.2         2.9
    99           5.1         2.5
    100          5.7         2.8
    101          6.3         3.3
    102          5.8         2.7
    103          7.1         3.0
    104          6.3         2.9
    105          6.5         3.0
    106          7.6         3.0
    107          4.9         2.5
    108          7.3         2.9
    109          6.7         2.5
    110          7.2         3.6
    111          6.5         3.2
    112          6.4         2.7
    113          6.8         3.0
    114          5.7         2.5
    115          5.8         2.8
    116          6.4         3.2
    117          6.5         3.0
    118          7.7         3.8
    119          7.7         2.6
    120          6.0         2.2
    121          6.9         3.2
    122          5.6         2.8
    123          7.7         2.8
    124          6.3         2.7
    125          6.7         3.3
    126          7.2         3.2
    127          6.2         2.8
    128          6.1         3.0
    129          6.4         2.8
    130          7.2         3.0
    131          7.4         2.8
    132          7.9         3.8
    133          6.4         2.8
    134          6.3         2.8
    135          6.1         2.6
    136          7.7         3.0
    137          6.3         3.4
    138          6.4         3.1
    139          6.0         3.0
    140          6.9         3.1
    141          6.7         3.1
    142          6.9         3.1
    143          5.8         2.7
    144          6.8         3.2
    145          6.7         3.3
    146          6.7         3.0
    147          6.3         2.5
    148          6.5         3.0
    149          6.2         3.4
    150          5.9         3.0
    
    [[2]]
        Petal.Length Petal.Width
    1            1.4         0.2
    2            1.4         0.2
    3            1.3         0.2
    4            1.5         0.2
    5            1.4         0.2
    6            1.7         0.4
    7            1.4         0.3
    8            1.5         0.2
    9            1.4         0.2
    10           1.5         0.1
    11           1.5         0.2
    12           1.6         0.2
    13           1.4         0.1
    14           1.1         0.1
    15           1.2         0.2
    16           1.5         0.4
    17           1.3         0.4
    18           1.4         0.3
    19           1.7         0.3
    20           1.5         0.3
    21           1.7         0.2
    22           1.5         0.4
    23           1.0         0.2
    24           1.7         0.5
    25           1.9         0.2
    26           1.6         0.2
    27           1.6         0.4
    28           1.5         0.2
    29           1.4         0.2
    30           1.6         0.2
    31           1.6         0.2
    32           1.5         0.4
    33           1.5         0.1
    34           1.4         0.2
    35           1.5         0.2
    36           1.2         0.2
    37           1.3         0.2
    38           1.4         0.1
    39           1.3         0.2
    40           1.5         0.2
    41           1.3         0.3
    42           1.3         0.3
    43           1.3         0.2
    44           1.6         0.6
    45           1.9         0.4
    46           1.4         0.3
    47           1.6         0.2
    48           1.4         0.2
    49           1.5         0.2
    50           1.4         0.2
    51           4.7         1.4
    52           4.5         1.5
    53           4.9         1.5
    54           4.0         1.3
    55           4.6         1.5
    56           4.5         1.3
    57           4.7         1.6
    58           3.3         1.0
    59           4.6         1.3
    60           3.9         1.4
    61           3.5         1.0
    62           4.2         1.5
    63           4.0         1.0
    64           4.7         1.4
    65           3.6         1.3
    66           4.4         1.4
    67           4.5         1.5
    68           4.1         1.0
    69           4.5         1.5
    70           3.9         1.1
    71           4.8         1.8
    72           4.0         1.3
    73           4.9         1.5
    74           4.7         1.2
    75           4.3         1.3
    76           4.4         1.4
    77           4.8         1.4
    78           5.0         1.7
    79           4.5         1.5
    80           3.5         1.0
    81           3.8         1.1
    82           3.7         1.0
    83           3.9         1.2
    84           5.1         1.6
    85           4.5         1.5
    86           4.5         1.6
    87           4.7         1.5
    88           4.4         1.3
    89           4.1         1.3
    90           4.0         1.3
    91           4.4         1.2
    92           4.6         1.4
    93           4.0         1.2
    94           3.3         1.0
    95           4.2         1.3
    96           4.2         1.2
    97           4.2         1.3
    98           4.3         1.3
    99           3.0         1.1
    100          4.1         1.3
    101          6.0         2.5
    102          5.1         1.9
    103          5.9         2.1
    104          5.6         1.8
    105          5.8         2.2
    106          6.6         2.1
    107          4.5         1.7
    108          6.3         1.8
    109          5.8         1.8
    110          6.1         2.5
    111          5.1         2.0
    112          5.3         1.9
    113          5.5         2.1
    114          5.0         2.0
    115          5.1         2.4
    116          5.3         2.3
    117          5.5         1.8
    118          6.7         2.2
    119          6.9         2.3
    120          5.0         1.5
    121          5.7         2.3
    122          4.9         2.0
    123          6.7         2.0
    124          4.9         1.8
    125          5.7         2.1
    126          6.0         1.8
    127          4.8         1.8
    128          4.9         1.8
    129          5.6         2.1
    130          5.8         1.6
    131          6.1         1.9
    132          6.4         2.0
    133          5.6         2.2
    134          5.1         1.5
    135          5.6         1.4
    136          6.1         2.3
    137          5.6         2.4
    138          5.5         1.8
    139          4.8         1.8
    140          5.4         2.1
    141          5.6         2.4
    142          5.1         2.3
    143          5.1         1.9
    144          5.9         2.3
    145          5.7         2.5
    146          5.2         2.3
    147          5.0         1.9
    148          5.2         2.0
    149          5.4         2.3
    150          5.1         1.8
    
    > mtcars %>% count_split(gear, carb, across(c(cyl, gear)))
    Error in `purrr::map()`:
    ℹ In index: 3.
    Caused by error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─mtcars %>% count_split(gear, carb, across(c(cyl, gear)))
      2. └─hacksaw::count_split(., gear, carb, across(c(cyl, gear)))
      3.   └─hacksaw:::iterate_expressions(.data, "count", ...)
      4.     └─purrr::map(expr_list[[1]], function(expr) f(.data, !!expr, sort = TRUE))
      5.       └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      6.         ├─purrr:::with_indexed_errors(...)
      7.         │ └─base::withCallingHandlers(...)
      8.         ├─purrr:::call_with_cleanup(...)
      9.         └─hacksaw (local) .f(.x[[i]], ...)
     10.           ├─dplyr (local) f(.data, !!expr, sort = TRUE)
     11.           └─dplyr:::count.data.frame(.data, !!expr, sort = TRUE)
     12.             └─dplyr:::map_chr(by_exprs, as_string)
     13.               └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     14.                 └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     15.                   └─rlang (local) FUN(X[[i]], ...)
     16.                     └─rlang:::abort_coercion(x, "a string")
     17.                       └─rlang::abort(msg, call = call)
    Execution halted
    ```

## In both

*   checking LazyData ... NOTE
    ```
      'LazyData' is specified without a 'data' directory
    ```

# halk

<details>

* Version: 0.0.5
* GitHub: NA
* Source code: https://github.com/cran/halk
* Date/Publication: 2023-12-03 04:20:02 UTC
* Number of recursive dependencies: 56

Run `revdepcheck::cloud_details(, "halk")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘halk-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: assign_ages
    > ### Title: Assign ages to non-aged data based on a fitted age model
    > ### Aliases: assign_ages
    > 
    > ### ** Examples
    > 
    > spp_alk <- make_halk(spp_data, levels = "spp")
    Error in `mutate()`:
    ℹ In argument: `alk = purrr::map(...)`.
    ℹ In group 1: `spp = "bluegill"`.
    Caused by error in `purrr::map()`:
    ℹ In index: 1.
    Caused by error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─halk::make_halk(spp_data, levels = "spp")
      2. │ └─... %>% ...
      3. ├─dplyr::mutate(...)
      4. ├─dplyr:::mutate.data.frame(...)
      5. │ └─dplyr::mutate(...)
      6. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      7. │     ├─base::withCallingHandlers(...)
      8. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      9. │       └─mask$eval_all_mutate(quo)
     10. │         └─dplyr (local) eval()
     11. ├─purrr::map(...)
     12. │ └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
     13. │   ├─purrr:::with_indexed_errors(...)
     14. │   │ └─base::withCallingHandlers(...)
     15. │   ├─purrr:::call_with_cleanup(...)
     16. │   └─halk (local) .f(.x[[i]], ...)
     17. │     └─laa_data %>% dplyr::count(.data$age, .data$length)
     18. ├─dplyr::count(., .data$age, .data$length)
     19. └─dplyr:::count.data.frame(., .data$age, .data$length)
     20.   └─dplyr:::map_chr(by_exprs, as_string)
     21.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     22.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     23.         └─rlang (local) FUN(X[[i]], ...)
     24.           └─rlang:::abort_coercion(x, "a string")
     25.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(halk)
      > 
      > test_check("halk")
      [ FAIL 7 | WARN 0 | SKIP 0 | PASS 75 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-alk-fitting.R:47:3'): make_alk function works as expected ──────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-alk-fitting.R:47:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─halk::make_alk(lenage, min_age_sample_size = 1)
        5. │ └─laa_data %>% dplyr::count(.data$age, .data$length)
        6. ├─dplyr::count(., .data$age, .data$length)
        7. └─dplyr:::count.data.frame(., .data$age, .data$length)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-alk-fitting.R:63:3'): make_alk works correctly ─────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─make_alk(laa_data) %>% assign_attributes_test(alk_class = NULL) at test-alk-fitting.R:63:3
        2. ├─halk (local) assign_attributes_test(., alk_class = NULL)
        3. ├─halk::make_alk(laa_data) at test-alk-fitting.R:51:3
        4. │ └─laa_data %>% dplyr::count(.data$age, .data$length)
        5. ├─dplyr::count(., .data$age, .data$length)
        6. └─dplyr:::count.data.frame(., .data$age, .data$length)
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test-alk-sample-sizes.R:2:3'): make_alk correctly creates ALK when supposed to ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_type(make_alk(laa_data), "list") at test-alk-sample-sizes.R:2:3
        2. │ └─testthat::quasi_label(enquo(object), arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─halk::make_alk(laa_data)
        5. │ └─laa_data %>% dplyr::count(.data$age, .data$length)
        6. ├─dplyr::count(., .data$age, .data$length)
        7. └─dplyr:::count.data.frame(., .data$age, .data$length)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-alk-sample-sizes.R:15:3'): make_halk correctly creates ALK for species when supposed to ──
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
      })`: i In argument: `alk = purrr::map(...)`.
      i In group 1: `spp = "bluegill"`.
      Caused by error in `purrr::map()`:
      i In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_type(make_halk(spp_data, levels = "spp"), "list") at test-alk-sample-sizes.R:15:3
        2. │ └─testthat::quasi_label(enquo(object), arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─halk::make_halk(spp_data, levels = "spp")
        5. │ └─... %>% ...
        6. ├─dplyr::mutate(...)
        7. ├─dplyr:::mutate.data.frame(...)
        8. │ └─dplyr::mutate(...)
        9. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
       10. │     ├─base::withCallingHandlers(...)
       11. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
       12. │       └─mask$eval_all_mutate(quo)
       13. │         └─dplyr (local) eval()
       14. ├─purrr::map(...)
       15. │ └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
       16. │   ├─purrr:::with_indexed_errors(...)
       17. │   │ └─base::withCallingHandlers(...)
       18. │   ├─purrr:::call_with_cleanup(...)
       19. │   └─halk (local) .f(.x[[i]], ...)
       20. │     └─laa_data %>% dplyr::count(.data$age, .data$length)
       21. ├─dplyr::count(., .data$age, .data$length)
       22. ├─dplyr:::count.data.frame(., .data$age, .data$length)
       23. │ └─dplyr:::map_chr(by_exprs, as_string)
       24. │   └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       25. │     └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       26. │       └─rlang (local) FUN(X[[i]], ...)
       27. │         └─rlang:::abort_coercion(x, "a string")
       28. │           └─rlang::abort(msg, call = call)
       29. │             └─rlang:::signal_abort(cnd, .file)
       30. │               └─base::signalCondition(cnd)
       31. ├─purrr (local) `<fn>`(`<rlng_rrr>`)
       32. │ └─cli::cli_abort(...)
       33. │   └─rlang::abort(...)
       34. │     └─rlang:::signal_abort(cnd, .file)
       35. │       └─base::signalCondition(cnd)
       36. └─dplyr (local) `<fn>`(`<prrr_rr_>`)
       37.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
      ── Error ('test-assign-ages.R:7:3'): assign_ages correctly estimates age from basic alk ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─halk::make_alk(test_laa_data, min_age_sample_size = 1, min_age_groups = 1) at test-assign-ages.R:7:3
        2. │ └─laa_data %>% dplyr::count(.data$age, .data$length)
        3. ├─dplyr::count(., .data$age, .data$length)
        4. └─dplyr:::count.data.frame(., .data$age, .data$length)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-utils.R:22:3'): check if spp_levels functions works correctly ──
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
      })`: i In argument: `alk = purrr::map(...)`.
      i In group 1: `spp = "bluegill"`.
      Caused by error in `purrr::map()`:
      i In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─base::suppressWarnings(make_halk(spp_data, min_age_sample_size = 2)) at test-utils.R:22:3
        2. │ └─base::withCallingHandlers(...)
        3. ├─halk::make_halk(spp_data, min_age_sample_size = 2)
        4. │ └─... %>% ...
        5. ├─dplyr::mutate(...)
        6. ├─dplyr:::mutate.data.frame(...)
        7. │ └─dplyr::mutate(...)
        8. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
        9. │     ├─base::withCallingHandlers(...)
       10. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
       11. │       └─mask$eval_all_mutate(quo)
       12. │         └─dplyr (local) eval()
       13. ├─purrr::map(...)
       14. │ └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
       15. │   ├─purrr:::with_indexed_errors(...)
       16. │   │ └─base::withCallingHandlers(...)
       17. │   ├─purrr:::call_with_cleanup(...)
       18. │   └─halk (local) .f(.x[[i]], ...)
       19. │     └─laa_data %>% dplyr::count(.data$age, .data$length)
       20. ├─dplyr::count(., .data$age, .data$length)
       21. ├─dplyr:::count.data.frame(., .data$age, .data$length)
       22. │ └─dplyr:::map_chr(by_exprs, as_string)
       23. │   └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       24. │     └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       25. │       └─rlang (local) FUN(X[[i]], ...)
       26. │         └─rlang:::abort_coercion(x, "a string")
       27. │           └─rlang::abort(msg, call = call)
       28. │             └─rlang:::signal_abort(cnd, .file)
       29. │               └─base::signalCondition(cnd)
       30. ├─purrr (local) `<fn>`(`<rlng_rrr>`)
       31. │ └─cli::cli_abort(...)
       32. │   └─rlang::abort(...)
       33. │     └─rlang:::signal_abort(cnd, .file)
       34. │       └─base::signalCondition(cnd)
       35. └─dplyr (local) `<fn>`(`<prrr_rr_>`)
       36.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
      ── Error ('test-utils.R:169:3'): make_alk words--cursory test--see test-alk-fitting.R ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─halk::make_alk(test_laa_data, min_age_sample_size = 1, min_age_groups = 1) at test-utils.R:169:3
        2. │ └─laa_data %>% dplyr::count(.data$age, .data$length)
        3. ├─dplyr::count(., .data$age, .data$length)
        4. └─dplyr:::count.data.frame(., .data$age, .data$length)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      
      [ FAIL 7 | WARN 0 | SKIP 0 | PASS 75 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘halk.Rmd’ using rmarkdown
    
    Quitting from lines 41-46 [spp_county_wb_alk] (halk.Rmd)
    Error: processing vignette 'halk.Rmd' failed with diagnostics:
    ℹ In argument: `alk = purrr::map(...)`.
    ℹ In group 1: `spp = "bluegill"`, `county = "county_A"`, `waterbody =
      "lake_a"`.
    Caused by error in `purrr::map()`:
    ℹ In index: 1.
    Caused by error in `FUN()`:
    ! Can't convert a call to a string.
    --- failed re-building ‘halk.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘halk.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
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
      > 
      > library(testthat)
      > library(healthdb)
      > 
      > test_check("healthdb")
      
      The following records have start > end:
         uid clnt_id      dates   ans diagx diagx_1 diagx_2   end_date
      1   14       1 2020-12-15 noise   999     999     999 2020-12-08
      2   21       4 2019-05-19 noise   999     999     999 2019-05-12
      3    8       5 2016-07-02   any     t       q    <NA> 2016-06-25
      4    3      13 2015-11-17   any     z       x     999 2015-11-10
      5   19      17 2018-03-16 noise   999    <NA>    <NA> 2018-03-09
      6   22      19 2016-11-30 noise   999    <NA>    <NA> 2016-11-23
      7    5      19 2018-07-12   any     y       i     999 2018-07-05
      8   20      19 2018-09-26 noise   999     999    <NA> 2018-09-19
      9   11      21 2019-07-26   all     a       n       z 2019-07-19
      10  13      22 2015-08-05 noise   999     999     999 2015-07-29
      11   6      29 2019-05-01   any     k       o    <NA> 2019-04-24
      12  18      29 2020-12-12 noise   999    <NA>    <NA> 2020-12-05
      13  17      31 2016-10-02 noise   999    <NA>     999 2016-09-25
      14  16      31 2020-01-07 noise   999     999    <NA> 2019-12-31
      15   4      33 2019-12-22   any     c       x     999 2019-12-15
      16  12      36 2016-12-09   all     b       e       i 2016-12-02
      17  23      37 2018-06-08 noise   999    <NA>     999 2018-06-01
      18  10      37 2020-08-30   all     y       k       z 2020-08-23
      19   7      40 2015-02-21   any     q       g     999 2015-02-14
      20  24      40 2020-04-28 noise   999    <NA>    <NA> 2020-04-21
      21  25      41 2019-05-19 noise   999     999    <NA> 2019-05-12
      22   2      41 2019-08-29   any     a       b     999 2019-08-22
      23   9      45 2016-07-29   all     t       w       g 2016-07-22
      24   1      46 2015-06-14   any     p       d    <NA> 2015-06-07
      25  15      48 2016-08-07 noise   999     999     999 2016-07-31
      
      The following records have missing dates:
        uid clnt_id      dates ans diagx diagx_1 diagx_2 end_date
      1   1      21 2020-08-27 any     i       v     999       NA
      > --------------Inclusion step--------------
      
      i Identify records with condition(s):
      * where at least one of the diagx, diagx_1, diagx_2 column(s) in each record
      * contains a value exactly matched values in set: letters
      i To see the final query generated by 'dbplyr', use dplyr::show_query() on the output.
      To extract the SQL string, use dbplyr::remote_query().
      
      This message is displayed once per session.
      > --------------Exclusion step--------------
      
      i Identify records with condition(s):
      * where at least one of the diagx, diagx_1, diagx_2 column(s) in each record
      * contains a value exactly matched values in set: c("a", "b")
      i Exclude records in `data` through anti_join with `excl` matching on (by argument): "clnt_id" 
      
      > --------------No. rows restriction--------------
      
      i Apply restriction that each client must have at least 2 records with distinct dates. Clients/groups which did not met the condition were excluded.
      > --------------Time span restriction--------------
      
      i Exclude a subset of `data` that satisfies condition: ans == "noise" 
      Check NAs in the result; SQL handles missing value differently compared to R.
      
      i Exclude a subset of `data` that satisfies condition: ans == "noise" 
      
      i Consider being explicit about NA, e.g., condition = var == 'val' | is.na(var)
      
      i Exclude a subset of `data` that satisfies condition: ans == "noise" 
      Check NAs in the result; SQL handles missing value differently compared to R.
      
      i Consider being explicit about NA, e.g., condition = var == 'val' | is.na(var)
      
      i Identify records with condition(s):
      * where at least one of the diagx, diagx_1, diagx_2 column(s) in each record
      * contains a value exactly matched values in set: letters
      i Identify records with condition(s):
      * where at least one of the diagx, diagx_1, diagx_2 column(s) in each record
      * contains a value exactly matched values in set: 1:10
      [ FAIL 1 | WARN 2 | SKIP 6 | PASS 220 ]
      
      ══ Skipped tests (6) ═══════════════════════════════════════════════════════════
      • On CRAN (6): 'test-define_case.R:42:3', 'test-if_dates.R:2:3',
        'test-if_dates.R:26:3', 'test-if_dates.R:33:3',
        'test-restrict_dates_sql.R:26:3', 'test-restrict_dates_sql.R:101:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-fetch_var.R:115:3'): not one to one warning works ──────────────
      Error in `trace_back(top = getOption("testthat_topenv"), bottom = trace_env)`: Can't find `bottom` on the call tree.
      Backtrace:
          ▆
       1. ├─... %>% expect_warning() at test-fetch_var.R:115:3
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

# IMD

<details>

* Version: 1.2.2
* GitHub: https://github.com/humaniverse/IMD
* Source code: https://github.com/cran/IMD
* Date/Publication: 2022-09-30 15:20:10 UTC
* Number of recursive dependencies: 52

Run `revdepcheck::cloud_details(, "IMD")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(IMD)
      > 
      > test_check("IMD")
      `curl` package not installed, falling back to using `url()`
      Rows: 42619 Columns: 11
      -- Column specification --------------------------------------------------------
      Delimiter: ","
      chr (2): nation, lsoa
      dbl (9): overall_local_score, income_score, employment_score, UK_IMD_E_score...
      
      i Use `spec()` to retrieve the full column specification for this data.
      i Specify the column types or set `show_col_types = FALSE` to quiet this message.
      [ FAIL 2 | WARN 2 | SKIP 0 | PASS 38 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-aggregate_scores.R:8:3'): multiplication works ─────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─IMD:::aggregate_scores(...) at test-aggregate_scores.R:8:3
        2. │ └─IMD:::calculate_proportion(...)
        3. │   ├─tibble::as_tibble(...)
        4. │   ├─dplyr::select(...)
        5. │   ├─dplyr::mutate(...)
        6. │   ├─janitor::tabyl(...)
        7. │   └─janitor:::tabyl.data.frame(...)
        8. │     └─janitor:::tabyl_2way(...)
        9. │       └─dat %>% dplyr::count(!!var1, !!var2, name = "tabyl_2way_n")
       10. ├─dplyr::count(., !!var1, !!var2, name = "tabyl_2way_n")
       11. └─dplyr:::count.data.frame(., !!var1, !!var2, name = "tabyl_2way_n")
       12.   └─dplyr:::map_chr(by_exprs, as_string)
       13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       15.         └─rlang (local) FUN(X[[i]], ...)
       16.           └─rlang:::abort_coercion(x, "a string")
       17.             └─rlang::abort(msg, call = call)
      ── Error ('test-calculate_proportion.R:8:3'): proportion calculation works ─────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─IMD:::calculate_proportion(test_data, var = decile, higher_level_geography = group) at test-calculate_proportion.R:8:3
        2. │ ├─tibble::as_tibble(...)
        3. │ ├─dplyr::select(...)
        4. │ ├─dplyr::mutate(...)
        5. │ ├─janitor::tabyl(...)
        6. │ └─janitor:::tabyl.data.frame(...)
        7. │   └─janitor:::tabyl_2way(...)
        8. │     └─dat %>% dplyr::count(!!var1, !!var2, name = "tabyl_2way_n")
        9. ├─dplyr::count(., !!var1, !!var2, name = "tabyl_2way_n")
       10. └─dplyr:::count.data.frame(., !!var1, !!var2, name = "tabyl_2way_n")
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      
      [ FAIL 2 | WARN 2 | SKIP 0 | PASS 38 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 2 marked UTF-8 strings
    ```

# interpretCI

<details>

* Version: 0.1.1
* GitHub: https://github.com/cardiomoon/interpretCI
* Source code: https://github.com/cran/interpretCI
* Date/Publication: 2022-01-28 08:50:02 UTC
* Number of recursive dependencies: 100

Run `revdepcheck::cloud_details(, "interpretCI")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘interpretCI-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: pairPlot
    > ### Title: Draw a pair plot with an object of class meanCI
    > ### Aliases: pairPlot
    > 
    > ### ** Examples
    > 
    > x=meanCI(iris,paired=TRUE)
    > pairPlot(x)
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─interpretCI::pairPlot(x)
      2. │ └─interpretCI::pairPlot1(df, ref = ref1, palette = palette)
      3. │   └─df %>% count(.data[[xname]]) %>% ...
      4. ├─dplyr::mutate(., label = paste0(.data[[xname]], "\nN=", .data$n))
      5. ├─dplyr::count(., .data[[xname]])
      6. └─dplyr:::count.data.frame(., .data[[xname]])
      7.   └─dplyr:::map_chr(by_exprs, as_string)
      8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     10.         └─rlang (local) FUN(X[[i]], ...)
     11.           └─rlang:::abort_coercion(x, "a string")
     12.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘Confidence_interval_for_a_mean.Rmd’ using rmarkdown
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespace in Imports field not imported from: ‘moonBook’
      All declared Imports should be used.
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
      
      The following object is masked from 'package:base':
      
          %||%
      
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

# isoorbi

<details>

* Version: 1.3.1
* GitHub: https://github.com/isoverse/isoorbi
* Source code: https://github.com/cran/isoorbi
* Date/Publication: 2024-08-27 05:10:03 UTC
* Number of recursive dependencies: 123

Run `revdepcheck::cloud_details(, "isoorbi")` for more info

</details>

## Newly broken

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
      
      > 
      > # run the test
      > test_check("isoorbi")
      Loading required package: isoorbi
      
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 349 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_blocks_functions.R:293:3'): test orbi_segment_block() ──────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_message(...) at test_blocks_functions.R:293:3
        2. │ └─testthat:::quasi_capture(enquo(object), label, capture_messages)
        3. │   ├─testthat (local) .capture(...)
        4. │   │ └─base::withCallingHandlers(...)
        5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        6. └─isoorbi::orbi_segment_blocks(test_data, into_segments = 2)
        7.   ├─dplyr::summarise(...)
        8.   ├─dplyr::group_by(...)
        9.   ├─dplyr::count(...)
       10.   └─dplyr:::count.data.frame(...)
       11.     └─dplyr:::map_chr(by_exprs, as_string)
       12.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.           └─rlang (local) FUN(X[[i]], ...)
       15.             └─rlang:::abort_coercion(x, "a string")
       16.               └─rlang::abort(msg, call = call)
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 349 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘dual_inlet.Rmd’ using rmarkdown
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.3Mb
      sub-directories of 1Mb or more:
        doc       2.0Mb
        extdata   3.3Mb
    ```

# ISRaD

<details>

* Version: 2.5.5
* GitHub: NA
* Source code: https://github.com/cran/ISRaD
* Date/Publication: 2023-09-21 06:50:17 UTC
* Number of recursive dependencies: 149

Run `revdepcheck::cloud_details(, "ISRaD")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘ISRaD-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: ISRaD.rep.count.frc
    > ### Title: ISRaD.rep.count.frc
    > ### Aliases: ISRaD.rep.count.frc
    > 
    > ### ** Examples
    > 
    > # Load example dataset Gaudinski_2001
    > database <- ISRaD::Gaudinski_2001
    > ISRaD.rep.count.frc(database)
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
        ▆
     1. └─ISRaD::ISRaD.rep.count.frc(database)
     2.   ├─dplyr::count(frc_data, .data$frc_scheme)
     3.   └─dplyr:::count.data.frame(frc_data, .data$frc_scheme)
     4.     └─dplyr:::map_chr(by_exprs, as_string)
     5.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     6.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     7.           └─rlang (local) FUN(X[[i]], ...)
     8.             └─rlang:::abort_coercion(x, "a string")
     9.               └─rlang::abort(msg, call = call)
    Execution halted
    ```

## In both

*   checking Rd files ... NOTE
    ```
    checkRd: (-1) is_israd_database.Rd:19: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) is_israd_database.Rd:20: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) is_israd_database.Rd:21: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) is_israd_database.Rd:22: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) is_israd_database.Rd:23: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) is_israd_database.Rd:24: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) is_israd_database.Rd:25: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) is_israd_database.Rd:26: Lost braces in \itemize; meant \describe ?
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 1 marked UTF-8 string
    ```

# joyn

<details>

* Version: 0.2.3
* GitHub: https://github.com/randrescastaneda/joyn
* Source code: https://github.com/cran/joyn
* Date/Publication: 2024-08-21 01:20:02 UTC
* Number of recursive dependencies: 94

Run `revdepcheck::cloud_details(, "joyn")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(joyn)
      
      Attaching package: 'joyn'
      
      The following object is masked from 'package:base':
      
          merge
      
      > 
      > test_check("joyn")
      x Error: Input table x has no columns.
      x Error: Input table x has no columns.
      x Error: Input table y has no columns.
      x Error: Neither x or y table has columns.
      x Error: Table x has the following column duplicated: x.  Please rename or
      remove and try again.
      x Error: table x is not uniquely identified by id
      Duplicate counts in x:
            id copies
         <int>  <int>
      1:     1      2
      x Error: table y is not uniquely identified by id
      Duplicate counts in y:
            id copies
         <num>  <int>
      1:     2      2
      x Error: table x is not uniquely identified by id1
      x Error: table y is not uniquely identified by id1
      Duplicate counts in x:
           id1 copies
         <num>  <int>
      1:     1      2
      Duplicate counts in y:
           id1 copies
         <num>  <int>
      1:     3      2
      x Error: table y is not uniquely identified by id
      Duplicate counts in y:
            id copies
         <num>  <int>
      1:     2      2
      x Error: table y is not uniquely identified by id
      Duplicate counts in y:
            id copies
         <num>  <int>
      1:     2      2
      ! Warning: argument copy = TRUE is not active in this version of joyn
      ! Warning: joyn does not currently allow inequality joins, so keep = NULL will
      retain only keys in x
      inner join: df1[id1, id2] 3/4 (75%) <1:1st> df3[id1, id2] 3/4 (75%)
      i Note: Joyn's report available in variable .joyn
      v This is an info message
      o Timing:The full joyn is executed in 0.000297 seconds.
      o Timing: The entire joyn function, including checks, is executed in 0.012047
      seconds.
      ! Warning: Currently, joyn allows only na_matches = 'na'
      x This is a warning message
      ! Warning: Currently, joyn allows only na_matches = 'na'
      x This is a warning message
      v first try
      v first try info
      v second try warn
      v first try info
      v third try note
      v second try warn
      x Error: table y is not uniquely identified by id
      x Error: table x is not uniquely identified by id
      x Error: table y is not uniquely identified by id
      -- JOYn Report --
      
        .joyn n percent
      1     x 2    100%
      2     y 1     50%
      3 total 2    100%
      ---------------------------------------------------------- End of JOYn report --
      i Note: Joyn's report available in variable .joyn
      ! Warning: cannot use arguments update_values = TRUE and/or update_NAs = TRUE
      for anti join
      x Error: table x is not uniquely identified by id
      v There are no duplicates in data frame
      > we found 1 possible id
      v There are no duplicates in data frame
      > we found 1 possible id
      ! Since `exclude` is NULL, `include` directive does not make sense. Ignored.
      v There are no duplicates in data frame
      > we found 1 possible id
      v There are no duplicates in data frame
      > we found 2 possible ids
      ! Data has duplicates. returning NULL
      
      -- Duplicates in terms of `t` 
        copies n percent
      1      1 1   33.3%
      2      2 2   66.7%
      3  total 3    100%
      ------------------------------------------------------- End of is_id() report --
      ! Variable rer is not available in data frame. Nothing is excluded.
      v There are no duplicates in data frame
      > we found 1 possible id
      v There are no duplicates in data frame
      > we found 1 possible id
      v There are no duplicates in data frame
      > we found 1 possible id
      
      ── JOYn Report ──
      
        .joyn n percent
      1     x 2     25%
      2     y 1   12.5%
      3 x & y 5   62.5%
      4 total 8    100%
      ────────────────────────────────────────────────────────── End of JOYn report ──
      ℹ Note: Joyn's report available in variable .joyn
      ℹ Note: Removing key variables id from id, x, category, and t
      i name x- is an invalid variable name. It will be changed to x.
      i name is an invalid variable name. It will be changed to X
      [ FAIL 1 | WARN 0 | SKIP 3 | PASS 463 ]
      
      ══ Skipped tests (3) ═══════════════════════════════════════════════════════════
      • This test is not needed anymore because the match is always m:m in
        collapse::join (1): 'test-joyn_workhorse.R:76:3'
      • joyn_workhorse does not check match type (1): 'test-joyn_workhorse.R:202:3'
      • warning of cartesian is not working well yet - (1):
        'test-merge-data.table.R:69:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-dplyr-joins.R:1711:3'): ANTI JOIN - Conducts ANTI join ─────────
      Error in `eval(code, test_env)`: object 's' not found
      Backtrace:
          ▆
       1. ├─dplyr::anti_join(x1, y1, by = "id", s) at test-dplyr-joins.R:1711:3
       2. └─dplyr:::anti_join.data.frame(x1, y1, by = "id", s)
       3.   └─dplyr:::rel_try(...)
      
      [ FAIL 1 | WARN 0 | SKIP 3 | PASS 463 ]
      Error: Test failures
      Execution halted
    ```

# LightLogR

<details>

* Version: 0.3.8
* GitHub: https://github.com/tscnlab/LightLogR
* Source code: https://github.com/cran/LightLogR
* Date/Publication: 2024-07-04 17:00:02 UTC
* Number of recursive dependencies: 157

Run `revdepcheck::cloud_details(, "LightLogR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘LightLogR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: aggregate_Datetime
    > ### Title: Aggregate Datetime data
    > ### Aliases: aggregate_Datetime
    > 
    > ### ** Examples
    > 
    > #dominant epoch without aggregation
    > sample.data.environment %>%
    +  dominant_epoch()
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─sample.data.environment %>% dominant_epoch()
      2. ├─LightLogR::dominant_epoch(.)
      3. │ └─... %>% ...
      4. ├─dplyr::summarize(...)
      5. ├─LightLogR::count_difftime(...)
      6. │ └─... %>% ...
      7. ├─dplyr::count(...)
      8. └─dplyr:::count.data.frame(...)
      9.   └─dplyr:::map_chr(by_exprs, as_string)
     10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     12.         └─rlang (local) FUN(X[[i]], ...)
     13.           └─rlang:::abort_coercion(x, "a string")
     14.             └─rlang::abort(msg, call = call)
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
      > 
      > library(testthat)
      > library(LightLogR)
      > 
      > test_check("LightLogR")
      [ FAIL 26 | WARN 0 | SKIP 2 | PASS 180 ]
      
      ══ Skipped tests (2) ═══════════════════════════════════════════════════════════
      • On CRAN (2): 'test-import_States.R:11:3', 'test-sc2interval.R:6:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-aggregate_Date.R:10:3'): aggregate_Date works ──────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-aggregate_Date.R:10:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─... %>% as.numeric
        5. ├─dplyr::pull(., dominant.epoch)
        6. ├─LightLogR::dominant_epoch(.)
        7. │ └─... %>% ...
        8. ├─dplyr::summarize(...)
        9. ├─LightLogR::count_difftime(...)
       10. │ └─... %>% ...
       11. ├─dplyr::count(...)
       12. └─dplyr:::count.data.frame(...)
       13.   └─dplyr:::map_chr(by_exprs, as_string)
       14.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       15.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       16.         └─rlang (local) FUN(X[[i]], ...)
       17.           └─rlang:::abort_coercion(x, "a string")
       18.             └─rlang::abort(msg, call = call)
      ── Error ('test-aggregate_Datetime.R:3:3'): aggregate_Datetime works ───────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-aggregate_Datetime.R:3:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─... %>% .$dominant.epoch
        5. ├─LightLogR::dominant_epoch(.)
        6. │ └─... %>% ...
        7. ├─dplyr::summarize(...)
        8. ├─LightLogR::count_difftime(...)
        9. │ └─... %>% ...
       10. ├─dplyr::count(...)
       11. └─dplyr:::count.data.frame(...)
       12.   └─dplyr:::map_chr(by_exprs, as_string)
       13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       15.         └─rlang (local) FUN(X[[i]], ...)
       16.           └─rlang:::abort_coercion(x, "a string")
       17.             └─rlang::abort(msg, call = call)
      ── Error ('test-epochs.R:7:3'): dominant_epoch finder works ────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-epochs.R:7:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─dataset %>% dplyr::group_by(Id) %>% dominant_epoch() %>% ...
        5. ├─LightLogR::dominant_epoch(.)
        6. │ └─... %>% ...
        7. ├─dplyr::summarize(...)
        8. ├─LightLogR::count_difftime(...)
        9. │ └─... %>% ...
       10. ├─dplyr::count(...)
       11. └─dplyr:::count.data.frame(...)
       12.   └─dplyr:::map_chr(by_exprs, as_string)
       13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       15.         └─rlang (local) FUN(X[[i]], ...)
       16.           └─rlang:::abort_coercion(x, "a string")
       17.             └─rlang::abort(msg, call = call)
      ── Error ('test-gaps.R:7:3'): gapless_Datetimes works ──────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-gaps.R:7:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─... %>% nrow()
        5. ├─base::nrow(.)
        6. ├─LightLogR::gapless_Datetimes(.)
        7. │ └─LightLogR:::epoch_list(...)
        8. │   └─dataset %>% ...
        9. ├─LightLogR::dominant_epoch(...)
       10. │ └─... %>% ...
       11. ├─dplyr::summarize(...)
       12. ├─LightLogR::count_difftime(...)
       13. │ └─... %>% ...
       14. ├─dplyr::count(...)
       15. └─dplyr:::count.data.frame(...)
       16.   └─dplyr:::map_chr(by_exprs, as_string)
       17.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       18.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       19.         └─rlang (local) FUN(X[[i]], ...)
       20.           └─rlang:::abort_coercion(x, "a string")
       21.             └─rlang::abort(msg, call = call)
      ── Error ('test-gaps.R:54:3'): gap_handler works ───────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-gaps.R:54:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─dataset %>% gap_handler(epoch = "1 day") %>% dim()
        5. ├─LightLogR::gap_handler(., epoch = "1 day")
        6. │ └─dataset %>% ...
        7. ├─LightLogR::gapless_Datetimes(...)
        8. │ └─LightLogR:::epoch_list(...)
        9. │   └─dataset %>% ...
       10. ├─LightLogR::dominant_epoch(...)
       11. │ └─... %>% ...
       12. ├─dplyr::summarize(...)
       13. ├─LightLogR::count_difftime(...)
       14. │ └─... %>% ...
       15. ├─dplyr::count(...)
       16. └─dplyr:::count.data.frame(...)
       17.   └─dplyr:::map_chr(by_exprs, as_string)
       18.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       19.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       20.         └─rlang (local) FUN(X[[i]], ...)
       21.           └─rlang:::abort_coercion(x, "a string")
       22.             └─rlang::abort(msg, call = call)
      ── Error ('test-gaps.R:104:3'): gap_finder works ───────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-gaps.R:104:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─gap_finder(dataset, gap.data = TRUE, silent = TRUE) %>% dim()
        5. ├─LightLogR::gap_finder(dataset, gap.data = TRUE, silent = TRUE)
        6. │ └─dataset %>% ...
        7. ├─LightLogR::gap_handler(...)
        8. │ └─dataset %>% ...
        9. ├─LightLogR::gapless_Datetimes(...)
       10. │ └─LightLogR:::epoch_list(...)
       11. │   └─dataset %>% ...
       12. ├─LightLogR::dominant_epoch(...)
       13. │ └─... %>% ...
       14. ├─dplyr::summarize(...)
       15. ├─LightLogR::count_difftime(...)
       16. │ └─... %>% ...
       17. ├─dplyr::count(...)
       18. └─dplyr:::count.data.frame(...)
       19.   └─dplyr:::map_chr(by_exprs, as_string)
       20.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       21.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       22.         └─rlang (local) FUN(X[[i]], ...)
       23.           └─rlang:::abort_coercion(x, "a string")
       24.             └─rlang::abort(msg, call = call)
      ── Error ('test-gg_overview.R:2:3'): gg_overview works ─────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─sample.data.environment %>% gg_overview() at test-gg_overview.R:2:3
        2. ├─LightLogR::gg_overview(.)
        3. │ └─... %>% dplyr::filter(dplyr::n() > 1)
        4. ├─dplyr::filter(., dplyr::n() > 1)
        5. ├─dplyr::group_by(., gap.id, .add = TRUE)
        6. ├─LightLogR::gap_finder(...)
        7. │ └─dataset %>% ...
        8. ├─LightLogR::gap_handler(...)
        9. │ └─dataset %>% ...
       10. ├─LightLogR::gapless_Datetimes(...)
       11. │ └─LightLogR:::epoch_list(...)
       12. │   └─dataset %>% ...
       13. ├─LightLogR::dominant_epoch(...)
       14. │ └─... %>% ...
       15. ├─dplyr::summarize(...)
       16. ├─LightLogR::count_difftime(...)
       17. │ └─... %>% ...
       18. ├─dplyr::count(...)
       19. └─dplyr:::count.data.frame(...)
       20.   └─dplyr:::map_chr(by_exprs, as_string)
       21.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       22.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       23.         └─rlang (local) FUN(X[[i]], ...)
       24.           └─rlang:::abort_coercion(x, "a string")
       25.             └─rlang::abort(msg, call = call)
      ── Error ('test-helper.R:3:3'): count_difftime works ───────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─import$LYS(filepath, silent = TRUE) at test-helper.R:3:3
        2. │ └─data %>% gg_overview() %>% print()
        3. ├─base::print(.)
        4. ├─LightLogR::gg_overview(.)
        5. │ └─... %>% dplyr::filter(dplyr::n() > 1)
        6. ├─dplyr::filter(., dplyr::n() > 1)
        7. ├─dplyr::group_by(., gap.id, .add = TRUE)
        8. ├─LightLogR::gap_finder(...)
        9. │ └─dataset %>% ...
       10. ├─LightLogR::gap_handler(...)
       11. │ └─dataset %>% ...
       12. ├─LightLogR::gapless_Datetimes(...)
       13. │ └─LightLogR:::epoch_list(...)
       14. │   └─dataset %>% ...
       15. ├─LightLogR::dominant_epoch(...)
       16. │ └─... %>% ...
       17. ├─dplyr::summarize(...)
       18. ├─LightLogR::count_difftime(...)
       19. │ └─... %>% ...
       20. ├─dplyr::count(...)
       21. └─dplyr:::count.data.frame(...)
       22.   └─dplyr:::map_chr(by_exprs, as_string)
       23.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       24.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       25.         └─rlang (local) FUN(X[[i]], ...)
       26.           └─rlang:::abort_coercion(x, "a string")
       27.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_EMA.R:4:3'): Half life works ────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─LightLogR::exponential_moving_average(light, datetime, decay = "90 mins") at test-metric_EMA.R:4:3
        2. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        3. │   └─... %>% ...
        4. ├─dplyr::count(...)
        5. └─dplyr:::count.data.frame(...)
        6.   └─dplyr:::map_chr(by_exprs, as_string)
        7.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        8.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        9.         └─rlang (local) FUN(X[[i]], ...)
       10.           └─rlang:::abort_coercion(x, "a string")
       11.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_EMA.R:11:3'): Exponential works ─────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─LightLogR::exponential_moving_average(light, datetime, decay = "90 mins") at test-metric_EMA.R:11:3
        2. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        3. │   └─... %>% ...
        4. ├─dplyr::count(...)
        5. └─dplyr:::count.data.frame(...)
        6.   └─dplyr:::map_chr(by_exprs, as_string)
        7.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        8.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        9.         └─rlang (local) FUN(X[[i]], ...)
       10.           └─rlang:::abort_coercion(x, "a string")
       11.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_EMA.R:18:3'): Handling missing values works ─────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_warning(...) at test-metric_EMA.R:18:3
        2. │ └─testthat:::expect_condition_matching(...)
        3. │   └─testthat:::quasi_capture(...)
        4. │     ├─testthat (local) .capture(...)
        5. │     │ └─base::withCallingHandlers(...)
        6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        7. ├─LightLogR::exponential_moving_average(light, datetime, decay = "90 mins")
        8. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        9. │   └─... %>% ...
       10. ├─dplyr::count(...)
       11. └─dplyr:::count.data.frame(...)
       12.   └─dplyr:::map_chr(by_exprs, as_string)
       13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       15.         └─rlang (local) FUN(X[[i]], ...)
       16.           └─rlang:::abort_coercion(x, "a string")
       17.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_barroso.R:4:3'): Calculation works ──────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-metric_barroso.R:4:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─LightLogR::barroso_lighting_metrics(MEDI, Datetime)
        5. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        6. │   └─... %>% ...
        7. ├─dplyr::count(...)
        8. └─dplyr:::count.data.frame(...)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_barroso.R:33:3'): Handling of missing values works ──────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-metric_barroso.R:33:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─LightLogR::barroso_lighting_metrics(MEDI, Datetime)
        5. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        6. │   └─... %>% ...
        7. ├─dplyr::count(...)
        8. └─dplyr:::count.data.frame(...)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_barroso.R:62:3'): Return data frame works ───────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-metric_barroso.R:62:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─LightLogR::barroso_lighting_metrics(MEDI, Datetime, as.df = TRUE)
        5. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        6. │   └─... %>% ...
        7. ├─dplyr::count(...)
        8. └─dplyr:::count.data.frame(...)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_duration_above_threshold.R:5:3'): Calculation works ─────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-metric_duration_above_threshold.R:5:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─LightLogR::duration_above_threshold(MEDI, datetime, threshold = 100)
        5. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        6. │   └─... %>% ...
        7. ├─dplyr::count(...)
        8. └─dplyr:::count.data.frame(...)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_duration_above_threshold.R:22:3'): Handling of missing values ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-metric_duration_above_threshold.R:22:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─LightLogR::duration_above_threshold(MEDI, datetime, threshold = 100)
        5. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        6. │   └─... %>% ...
        7. ├─dplyr::count(...)
        8. └─dplyr:::count.data.frame(...)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_duration_above_threshold.R:34:3'): Return data frame ────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-metric_duration_above_threshold.R:34:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─LightLogR::duration_above_threshold(...)
        5. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        6. │   └─... %>% ...
        7. ├─dplyr::count(...)
        8. └─dplyr:::count.data.frame(...)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_period_above_threshold.R:5:3'): Calculation works ───────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-metric_period_above_threshold.R:5:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─LightLogR::period_above_threshold(MEDI, datetime, threshold = 10)
        5. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        6. │   └─... %>% ...
        7. ├─dplyr::count(...)
        8. └─dplyr:::count.data.frame(...)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_period_above_threshold.R:22:3'): Handling of missing values ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-metric_period_above_threshold.R:22:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─LightLogR::period_above_threshold(MEDI, datetime, threshold = 10)
        5. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        6. │   └─... %>% ...
        7. ├─dplyr::count(...)
        8. └─dplyr:::count.data.frame(...)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_period_above_threshold.R:38:3'): Return data frame ──────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-metric_period_above_threshold.R:38:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─LightLogR::period_above_threshold(...)
        5. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        6. │   └─... %>% ...
        7. ├─dplyr::count(...)
        8. └─dplyr:::count.data.frame(...)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_pulses_above_threshold.R:4:3'): calculation works ───────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-metric_pulses_above_threshold.R:4:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─LightLogR::pulses_above_threshold(...)
        5. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        6. │   └─... %>% ...
        7. ├─dplyr::count(...)
        8. └─dplyr:::count.data.frame(...)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_pulses_above_threshold.R:72:3'): Ouput works for different time variables ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─LightLogR::pulses_above_threshold(...) at test-metric_pulses_above_threshold.R:72:3
        2. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        3. │   └─... %>% ...
        4. ├─dplyr::count(...)
        5. └─dplyr:::count.data.frame(...)
        6.   └─dplyr:::map_chr(by_exprs, as_string)
        7.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        8.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        9.         └─rlang (local) FUN(X[[i]], ...)
       10.           └─rlang:::abort_coercion(x, "a string")
       11.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_pulses_above_threshold.R:131:3'): calculation works with missing values ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-metric_pulses_above_threshold.R:131:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─LightLogR::pulses_above_threshold(...)
        5. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        6. │   └─... %>% ...
        7. ├─dplyr::count(...)
        8. └─dplyr:::count.data.frame(...)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_threshold_for_duration.R:4:3'): Calculation works ───────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-metric_threshold_for_duration.R:4:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─LightLogR::threshold_for_duration(MEDI, datetime, duration = lubridate::dminutes(3))
        5. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        6. │   └─... %>% ...
        7. ├─dplyr::count(...)
        8. └─dplyr:::count.data.frame(...)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_threshold_for_duration.R:15:3'): Handling of missing values ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-metric_threshold_for_duration.R:15:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─LightLogR::threshold_for_duration(MEDI, datetime, lubridate::dminutes(3))
        5. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        6. │   └─... %>% ...
        7. ├─dplyr::count(...)
        8. └─dplyr:::count.data.frame(...)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-metric_threshold_for_duration.R:26:3'): Return data frame ──────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-metric_threshold_for_duration.R:26:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─LightLogR::threshold_for_duration(...)
        5. │ └─LightLogR::count_difftime(tibble::tibble(Datetime = Time.vector))
        6. │   └─... %>% ...
        7. ├─dplyr::count(...)
        8. └─dplyr:::count.data.frame(...)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      
      [ FAIL 26 | WARN 0 | SKIP 2 | PASS 180 ]
      Error: Test failures
      Execution halted
    ```

# LongDat

<details>

* Version: 1.1.2
* GitHub: https://github.com/CCY-dev/LongDat
* Source code: https://github.com/cran/LongDat
* Date/Publication: 2023-07-17 05:40:02 UTC
* Number of recursive dependencies: 139

Run `revdepcheck::cloud_details(, "LongDat")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘LongDat-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: cuneiform_plot
    > ### Title: Create cuneiform plots of result table from longdat_disc() or
    > ###   longdat_cont()
    > ### Aliases: cuneiform_plot
    > 
    > ### ** Examples
    > 
    > test_disc <- longdat_disc(input = LongDat_disc_master_table,
    + data_type = "count", test_var = "Time_point",
    + variable_col = 7, fac_var = c(1:3))
    [1] "Start data preprocessing."
    [1] "Finish data preprocessing."
    [1] "Start selecting potential covariates."
    [1] 1
    [1] 2
    [1] 3
    [1] 1
    [1] 2
    [1] 3
    [1] "Finished selecting potential covariates."
    [1] "Start null model test and post-hoc test."
    [1] 1
    ERROR : argument is of length zero 
    [1] 2
    ERROR : argument is of length zero 
    [1] 3
    ERROR : argument is of length zero 
    [1] "Finish null model test and post-hoc test."
    [1] "Start covariate model test."
    [1] 1
    [1] 2
    [1] 3
    [1] "Finish covariate model test."
    [1] "Start unlisting tables from covariate model result."
    Using p_lm as value column: use value.var to override.
    Using p_lm as value column: use value.var to override.
    [1] "Finish unlisting tables from covariate model result."
    [1] "Start calculating effect size."
    [1] 1
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─LongDat::longdat_disc(...)
      2. │ └─LongDat:::cliff_cal(...)
      3. │   └─subdata_pre %>% dplyr::count(.data$Individual)
      4. ├─dplyr::count(., .data$Individual)
      5. └─dplyr:::count.data.frame(., .data$Individual)
      6.   └─dplyr:::map_chr(by_exprs, as_string)
      7.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      8.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
      9.         └─rlang (local) FUN(X[[i]], ...)
     10.           └─rlang:::abort_coercion(x, "a string")
     11.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘LongDat_cont_tutorial.Rmd’ using rmarkdown
    Warning in eng_r(options) :
      Failed to tidy R code in chunk 'unnamed-chunk-3'. Reason:
    Error : The formatR package is required by the chunk option tidy = TRUE but not installed; tidy = TRUE will be ignored.
    
    Warning in eng_r(options) :
      Failed to tidy R code in chunk 'unnamed-chunk-4'. Reason:
    Error : The formatR package is required by the chunk option tidy = TRUE but not installed; tidy = TRUE will be ignored.
    
    Warning in eng_r(options) :
      Failed to tidy R code in chunk 'unnamed-chunk-5'. Reason:
    Error : The formatR package is required by the chunk option tidy = TRUE but not installed; tidy = TRUE will be ignored.
    
    Warning in eng_r(options) :
      Failed to tidy R code in chunk 'unnamed-chunk-6'. Reason:
    Error : The formatR package is required by the chunk option tidy = TRUE but not installed; tidy = TRUE will be ignored.
    
    Warning in eng_r(options) :
      Failed to tidy R code in chunk 'unnamed-chunk-7'. Reason:
    Error : The formatR package is required by the chunk option tidy = TRUE but not installed; tidy = TRUE will be ignored.
    
    Warning in eng_r(options) :
      Failed to tidy R code in chunk 'unnamed-chunk-8'. Reason:
    Error : The formatR package is required by the chunk option tidy = TRUE but not installed; tidy = TRUE will be ignored.
    
    Warning in eng_r(options) :
      Failed to tidy R code in chunk 'unnamed-chunk-9'. Reason:
    Error : The formatR package is required by the chunk option tidy = TRUE but not installed; tidy = TRUE will be ignored.
    
    Warning in eng_r(options) :
      Failed to tidy R code in chunk 'unnamed-chunk-10'. Reason:
    Error : The formatR package is required by the chunk option tidy = TRUE but not installed; tidy = TRUE will be ignored.
    ```

# madshapR

<details>

* Version: 1.1.0
* GitHub: https://github.com/maelstrom-research/madshapR
* Source code: https://github.com/cran/madshapR
* Date/Publication: 2024-04-23 15:10:02 UTC
* Number of recursive dependencies: 107

Run `revdepcheck::cloud_details(, "madshapR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘madshapR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: summary_variables_datetime
    > ### Title: Provide descriptive statistics for variables of type 'datetime'
    > ###   in a dataset
    > ### Aliases: summary_variables_datetime
    > 
    > ### ** Examples
    > 
    > {
    +    
    + # use madshapR_DEMO provided by the package
    + library(dplyr)
    + library(lubridate)
    + library(fabR)
    + 
    + dataset_preprocess <-
    +   madshapR_DEMO$dataset_TOKYO %>%
    +   mutate(dob = as_datetime(as_any_date(dob))) %>%
    +   select(dob) %>%
    +   head() %>%
    +   dataset_preprocess
    + 
    + glimpse(summary_variables_datetime(dataset_preprocess = dataset_preprocess))
    + 
    + }
    
    Attaching package: ‘dplyr’
    
    The following objects are masked from ‘package:stats’:
    
        filter, lag
    
    The following objects are masked from ‘package:base’:
    
        intersect, setdiff, setequal, union
    
    
    Attaching package: ‘lubridate’
    
    The following objects are masked from ‘package:base’:
    
        date, intersect, setdiff, union
    
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─pillar::glimpse(summary_variables_datetime(dataset_preprocess = dataset_preprocess))
      2. ├─madshapR::summary_variables_datetime(dataset_preprocess = dataset_preprocess)
      3. │ └─madshapR::summary_variables_text(dataset_preprocess = dataset_preprocess)
      4. │   └─tibble::tibble(...)
      5. │     └─tibble:::tibble_quos(xs, .rows, .name_repair)
      6. │       └─rlang::eval_tidy(xs[[j]], mask)
      7. ├─... %>% str_replace("; \\[\\.\\.\\.\\]$", "[...]")
      8. ├─stringr::str_replace(., "; \\[\\.\\.\\.\\]$", "[...]")
      9. │ └─stringr:::check_lengths(string, pattern, replacement)
     10. │   └─vctrs::vec_size_common(...)
     11. ├─base::paste0(., collapse = " ; ")
     12. ├─dplyr::pull(., .data$value_var)
     13. ├─dplyr::mutate(...)
     14. ├─dplyr::slice(., 1:6)
     15. ├─dplyr::filter(., if_any(.data$n, ~. == max(.)))
     16. ├─dplyr::count(., .data$value_var)
     17. └─dplyr:::count.data.frame(., .data$value_var)
     18.   └─dplyr:::map_chr(by_exprs, as_string)
     19.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     20.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     21.         └─rlang (local) FUN(X[[i]], ...)
     22.           └─rlang:::abort_coercion(x, "a string")
     23.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 16 marked UTF-8 strings
    ```

# mousetrap

<details>

* Version: 3.2.3
* GitHub: https://github.com/pascalkieslich/mousetrap
* Source code: https://github.com/cran/mousetrap
* Date/Publication: 2024-01-19 09:50:09 UTC
* Number of recursive dependencies: 69

Run `revdepcheck::cloud_details(, "mousetrap")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘mousetrap-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: mt_import_long
    > ### Title: Import mouse-tracking data saved in long format.
    > ### Aliases: mt_import_long
    > 
    > ### ** Examples
    > 
    > # Create data in long format for test purposes
    > mt_data_long <- mt_export_long(mt_example,
    +   use2_variables=c("subject_nr","Condition"))
    > 
    > # Import the data using mt_import_long
    > mt_data <- mt_import_long(mt_data_long)
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
        ▆
     1. └─mousetrap::mt_import_long(mt_data_long)
     2.   ├─dplyr::count(raw_data, .data$mt_id)
     3.   └─dplyr:::count.data.frame(raw_data, .data$mt_id)
     4.     └─dplyr:::map_chr(by_exprs, as_string)
     5.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     6.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     7.           └─rlang (local) FUN(X[[i]], ...)
     8.             └─rlang:::abort_coercion(x, "a string")
     9.               └─rlang::abort(msg, call = call)
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 11.8Mb
      sub-directories of 1Mb or more:
        data   4.0Mb
        libs   6.9Mb
    ```

# mpwR

<details>

* Version: 0.1.5
* GitHub: NA
* Source code: https://github.com/cran/mpwR
* Date/Publication: 2023-11-13 23:33:26 UTC
* Number of recursive dependencies: 102

Run `revdepcheck::cloud_details(, "mpwR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘mpwR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: get_DC_Report
    > ### Title: Data Completeness Report
    > ### Aliases: get_DC_Report
    > 
    > ### ** Examples
    > 
    > # Load libraries
    > library(tibble)
    > library(stringr)
    > 
    > # Example data
    > data <- list(
    + DIANN = list(
    +   filename = "B",
    +   software = "DIA-NN",
    +   data = list(
    +      "DIA-NN" = tibble::tibble(
    +         Run_mpwR = rep(c("A","B"), times = 10),
    +         Precursor.IDs_mpwR = rep(c("A2", "A3", "B2", "B3", "C1"), each = 4),
    +         Protein.IDs_mpwR = rep(c("A2", "A3", "B2", "B3", "C1"), each = 4),
    +         Peptide.IDs_mpwR = rep(c("A", "A", "B", "B", "C"), each = 4),
    +         ProteinGroup.IDs_mpwR = rep(c("A2", "A3", "B2", "B3", "C1"), each = 4)
    +      )
    +   )
    + )
    + )
    > 
    > # Result
    > output <- get_DC_Report(
    +   input_list = data,
    +   metric = "absolute"
    + )
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─mpwR::get_DC_Report(input_list = data, metric = "absolute")
      2. │ └─mpwR:::generate_DC_Report(...)
      3. │   └─mpwR:::generate_DC_count(input_df = input_df, level = "Precursor.IDs")
      4. │     └─... %>% dplyr::rename(!!as.symbol(level) := n)
      5. ├─dplyr::rename(., `:=`(!!as.symbol(level), n))
      6. ├─dplyr::count(., .data$Nr_Appearances, .drop = FALSE)
      7. └─dplyr:::count.data.frame(., .data$Nr_Appearances, .drop = FALSE)
      8.   └─dplyr:::map_chr(by_exprs, as_string)
      9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     11.         └─rlang (local) FUN(X[[i]], ...)
     12.           └─rlang:::abort_coercion(x, "a string")
     13.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

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
      For PD no quantitative LFQ data on proteingroup-level.
      Protein-level not available for Spectronaut.
      For ProteinGroup.IDs - No flowTraceR filtering applied
      For ProteinGroup.IDs - No flowTraceR filtering applied
      For ProteinGroup.IDs - No flowTraceR filtering applied
      For ProteinGroup.IDs - No flowTraceR filtering applied
      For MaxQuant evidence.txt - the following column need to be present:  Raw file 
      For MaxQuant evidence.txt - the following column need to be present:  Proteins 
      For MaxQuant evidence.txt - the following column need to be present:  Modified sequence 
      For MaxQuant evidence.txt - the following column need to be present:  Sequence 
      For MaxQuant evidence.txt - the following column need to be present:  Missed cleavages 
      For MaxQuant evidence.txt - the following column need to be present:  Charge 
      For MaxQuant evidence.txt - the following column need to be present:  Retention time 
      For MaxQuant evidence.txt - the following column need to be present:  Potential contaminant 
      For MaxQuant evidence.txt - the following column need to be present:  Reverse 
      
      For DIA-NN input - the following column need to be present:  Run 
      For DIA-NN input - the following column need to be present:  Protein.Group 
      For DIA-NN input - the following column need to be present:  Protein.Ids 
      For DIA-NN input - the following column need to be present:  Modified.Sequence 
      For DIA-NN input - the following column need to be present:  Stripped.Sequence 
      For DIA-NN input - the following column need to be present:  Precursor.Id 
      For DIA-NN input - the following column need to be present:  Precursor.Charge 
      For DIA-NN input - the following column need to be present:  RT 
      For DIA-NN input - the following column need to be present:  PG.MaxLFQ 
      
      For DIA-NN input - the following column need to be present:  Run 
      For DIA-NN input - the following column need to be present:  Protein.Group 
      For DIA-NN input - the following column need to be present:  Protein.Ids 
      For DIA-NN input - the following column need to be present:  Modified.Sequence 
      For DIA-NN input - the following column need to be present:  Stripped.Sequence 
      For DIA-NN input - the following column need to be present:  Precursor.Id 
      For DIA-NN input - the following column need to be present:  Precursor.Charge 
      For DIA-NN input - the following column need to be present:  RT 
      For DIA-NN input - the following column need to be present:  PG.MaxLFQ 
      
      For PD PSMs.txt - the following column need to be present:  Confidence 
      For PD PSMs.txt - the following column need to be present:  Spectrum File 
      For PD PSMs.txt - the following column need to be present:  Protein Accessions 
      For PD PSMs.txt - the following column need to be present:  Annotated Sequence 
      For PD PSMs.txt - the following column need to be present:  Modifications 
      For PD PSMs.txt - the following column need to be present:  Number of Missed Cleavages 
      For PD PSMs.txt - the following column need to be present:  Charge 
      For PD PSMs.txt - the following column need to be present:  RT in min 
      
      For PD PeptideGroups.txt - the following column(s) need to be present: Found in Sample
      For PD PeptideGroups.txt - the following column need to be present:  Number of Protein Groups 
      For PD PeptideGroups.txt - the following column need to be present:  Number of Proteins 
      For PD PeptideGroups.txt - the following column need to be present:  Number of PSMs 
      For PD PeptideGroups.txt - the following column need to be present:  Confidence 
      For PD PeptideGroups.txt - the following column need to be present:  Sequence 
      For PD PeptideGroups.txt - the following column need to be present:  Modifications 
      For PD PeptideGroups.txt - the following column need to be present:  Number of Missed Cleavages 
      
      For PD PeptideGroups.txt - the following column(s) need to be present: Found in Sample
      For PD PeptideGroups.txt - the following column need to be present:  Number of Protein Groups 
      For PD PeptideGroups.txt - the following column need to be present:  Number of Proteins 
      For PD PeptideGroups.txt - the following column need to be present:  Number of PSMs 
      For PD PeptideGroups.txt - the following column need to be present:  Confidence 
      For PD PeptideGroups.txt - the following column need to be present:  Sequence 
      For PD PeptideGroups.txt - the following column need to be present:  Modifications 
      For PD PeptideGroups.txt - the following column need to be present:  Number of Missed Cleavages 
      
      For PD Proteins.txt - the following column(s) need to be present: Found in Sample
      For PD Proteins.txt - the following column need to be present:  Proteins Unique Sequence ID 
      For PD Proteins.txt - the following column need to be present:  Accession 
      For PD Proteins.txt - the following column need to be present:  Description 
      
      For PD Proteins.txt - the following column(s) need to be present: Found in Sample
      For PD Proteins.txt - the following column need to be present:  Proteins Unique Sequence ID 
      For PD Proteins.txt - the following column need to be present:  Accession 
      For PD Proteins.txt - the following column need to be present:  Description 
      
      For PD ProteinGroups.txt - the following column(s) need to be present: Found in Sample
      For PD ProteinGroups.txt - the following column need to be present:  Protein Groups Protein Group ID 
      For PD ProteinGroups.txt - the following column need to be present:  Group Description 
      For PD ProteinGroups.txt - the following column need to be present:  Number of Proteins 
      For PD ProteinGroups.txt - the following column need to be present:  Number of Unique Peptides 
      
      For PD ProteinGroups.txt - the following column(s) need to be present: Found in Sample
      For PD ProteinGroups.txt - the following column need to be present:  Protein Groups Protein Group ID 
      For PD ProteinGroups.txt - the following column need to be present:  Group Description 
      For PD ProteinGroups.txt - the following column need to be present:  Number of Proteins 
      For PD ProteinGroups.txt - the following column need to be present:  Number of Unique Peptides 
      
      For plotting density: CV_Retention.time_mpwR is not detected in submitted data.
      For plotting density: CV_Peptide_LFQ_mpwR is not detected in submitted data.
      For plotting density: CV_ProteinGroup_LFQ_mpwR is not detected in submitted data.
      For plotting barplot: Only NA detected for Protein.IDs! Not included in vizualisation.
      For plotting stacked barplot: Only NA detected for Protein.IDs! Not included in vizualisation.
      For plotting barplot: Only NA detected for Protein.IDs! Not included in vizualisation.
      For plotting boxplot: Only NA detected for Protein.IDs! Not included in vizualisation.
      [ FAIL 10 | WARN 57 | SKIP 0 | PASS 453 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_DC.R:90:5'): get_DC_Report works ───────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─mpwR::get_DC_Report(input_list = data, metric = "absolute") at test_DC.R:90:5
        2. │ └─mpwR:::generate_DC_Report(...)
        3. │   └─mpwR:::generate_DC_count(input_df = input_df, level = "Precursor.IDs")
        4. │     └─... %>% dplyr::rename(!!as.symbol(level) := n)
        5. ├─dplyr::rename(., `:=`(!!as.symbol(level), n))
        6. ├─dplyr::count(., .data$Nr_Appearances, .drop = FALSE)
        7. └─dplyr:::count.data.frame(., .data$Nr_Appearances, .drop = FALSE)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test_ID.R:90:5'): get_ID_Report works ───────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─mpwR::get_ID_Report(input_list = data) at test_ID.R:90:5
        2. │ └─mpwR:::generate_ID_Report(...)
        3. │   ├─generate_level_count(MQ_tidy_pg, "ProteinGroup.IDs") %>% ...
        4. │   └─mpwR:::generate_level_count(MQ_tidy_pg, "ProteinGroup.IDs")
        5. │     └─... %>% dplyr::rename(!!as.symbol(level) := n)
        6. ├─dplyr::arrange(., .data$Run_mpwR)
        7. ├─dplyr::rename(., `:=`(!!as.symbol(level), n))
        8. ├─dplyr::count(., .data$Run_mpwR)
        9. └─dplyr:::count.data.frame(., .data$Run_mpwR)
       10.   └─dplyr:::map_chr(by_exprs, as_string)
       11.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       12.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       13.         └─rlang (local) FUN(X[[i]], ...)
       14.           └─rlang:::abort_coercion(x, "a string")
       15.             └─rlang::abort(msg, call = call)
      ── Error ('test_MC.R:59:5'): get_MC_Report works ───────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─mpwR::get_MC_Report(input_list = data, metric = "absolute") at test_MC.R:59:5
        2. │ └─... %>% ...
        3. ├─mpwR:::generate_MC_Report(...)
        4. │ └─... %>% ...
        5. ├─mpwR:::add_analysis_col(input_df = ., analysis_name = analysis_name)
        6. │ ├─base::cbind(...)
        7. │ └─base::nrow(input_df)
        8. ├─dplyr::rename(., Missed.Cleavage = "Missed.Cleavage_mpwR", mc_count = n)
        9. ├─dplyr::count(., .data$Missed.Cleavage_mpwR)
       10. └─dplyr:::count.data.frame(., .data$Missed.Cleavage_mpwR)
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      ── Error ('test_summary.R:116:2'): get_summary_Report works ────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─mpwR::get_summary_Report(input_list = data) at test_summary.R:116:2
        2. │ └─mpwR:::generate_summary_Report(...)
        3. │   └─mpwR:::generate_ID_Report(...)
        4. │     ├─generate_level_count(MQ_tidy_pg, "ProteinGroup.IDs") %>% ...
        5. │     └─mpwR:::generate_level_count(MQ_tidy_pg, "ProteinGroup.IDs")
        6. │       └─... %>% dplyr::rename(!!as.symbol(level) := n)
        7. ├─dplyr::arrange(., .data$Run_mpwR)
        8. ├─dplyr::rename(., `:=`(!!as.symbol(level), n))
        9. ├─dplyr::count(., .data$Run_mpwR)
       10. └─dplyr:::count.data.frame(., .data$Run_mpwR)
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      ── Error ('test_utils_helpers.R:73:4'): generate_level_count works ─────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─mpwR:::generate_level_count(input_df = data, level = "ProteinGroup.IDs") at test_utils_helpers.R:73:4
        2. │ └─... %>% dplyr::rename(!!as.symbol(level) := n)
        3. ├─dplyr::rename(., `:=`(!!as.symbol(level), n))
        4. ├─dplyr::count(., .data$Run_mpwR)
        5. └─dplyr:::count.data.frame(., .data$Run_mpwR)
        6.   └─dplyr:::map_chr(by_exprs, as_string)
        7.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        8.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        9.         └─rlang (local) FUN(X[[i]], ...)
       10.           └─rlang:::abort_coercion(x, "a string")
       11.             └─rlang::abort(msg, call = call)
      ── Error ('test_utils_helpers.R:134:4'): generate_DC_count works ───────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─mpwR:::generate_DC_count(input_df = data, level = "ProteinGroup.IDs") at test_utils_helpers.R:134:4
        2. │ └─... %>% dplyr::rename(!!as.symbol(level) := n)
        3. ├─dplyr::rename(., `:=`(!!as.symbol(level), n))
        4. ├─dplyr::count(., .data$Nr_Appearances, .drop = FALSE)
        5. └─dplyr:::count.data.frame(., .data$Nr_Appearances, .drop = FALSE)
        6.   └─dplyr:::map_chr(by_exprs, as_string)
        7.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        8.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        9.         └─rlang (local) FUN(X[[i]], ...)
       10.           └─rlang:::abort_coercion(x, "a string")
       11.             └─rlang::abort(msg, call = call)
      ── Error ('test_utils_reports.R:19:4'): generate_DC_Report works ───────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─mpwR:::generate_DC_Report(...) at test_utils_reports.R:19:4
        2. │ └─mpwR:::generate_DC_count(input_df = input_df, level = "Precursor.IDs")
        3. │   └─... %>% dplyr::rename(!!as.symbol(level) := n)
        4. ├─dplyr::rename(., `:=`(!!as.symbol(level), n))
        5. ├─dplyr::count(., .data$Nr_Appearances, .drop = FALSE)
        6. └─dplyr:::count.data.frame(., .data$Nr_Appearances, .drop = FALSE)
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test_utils_reports.R:107:4'): generate_ID_Report works ──────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─mpwR:::generate_ID_Report(...) at test_utils_reports.R:107:4
        2. │ ├─generate_level_count(MQ_tidy_pg, "ProteinGroup.IDs") %>% ...
        3. │ └─mpwR:::generate_level_count(MQ_tidy_pg, "ProteinGroup.IDs")
        4. │   └─... %>% dplyr::rename(!!as.symbol(level) := n)
        5. ├─dplyr::arrange(., .data$Run_mpwR)
        6. ├─dplyr::rename(., `:=`(!!as.symbol(level), n))
        7. ├─dplyr::count(., .data$Run_mpwR)
        8. └─dplyr:::count.data.frame(., .data$Run_mpwR)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test_utils_reports.R:188:4'): generate_MC_Report works ──────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─mpwR:::generate_MC_Report(...) at test_utils_reports.R:188:4
        2. │ └─... %>% ...
        3. ├─mpwR:::add_analysis_col(input_df = ., analysis_name = analysis_name)
        4. │ ├─base::cbind(...)
        5. │ └─base::nrow(input_df)
        6. ├─dplyr::rename(., Missed.Cleavage = "Missed.Cleavage_mpwR", mc_count = n)
        7. ├─dplyr::count(., .data$Missed.Cleavage_mpwR)
        8. └─dplyr:::count.data.frame(., .data$Missed.Cleavage_mpwR)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test_utils_reports.R:249:4'): generate_summary_Report works ─────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─mpwR:::generate_summary_Report(...) at test_utils_reports.R:249:4
        2. │ └─mpwR:::generate_ID_Report(...)
        3. │   ├─... %>% dplyr::rename(Run = "Run_mpwR")
        4. │   ├─dplyr::left_join(...)
        5. │   └─mpwR:::generate_level_count(input_df, "ProteinGroup.IDs")
        6. │     └─... %>% dplyr::rename(!!as.symbol(level) := n)
        7. ├─dplyr::rename(., Run = "Run_mpwR")
        8. ├─dplyr::left_join(...)
        9. ├─dplyr::left_join(...)
       10. ├─dplyr::rename(., `:=`(!!as.symbol(level), n))
       11. ├─dplyr::count(., .data$Run_mpwR)
       12. └─dplyr:::count.data.frame(., .data$Run_mpwR)
       13.   └─dplyr:::map_chr(by_exprs, as_string)
       14.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       15.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       16.         └─rlang (local) FUN(X[[i]], ...)
       17.           └─rlang:::abort_coercion(x, "a string")
       18.             └─rlang::abort(msg, call = call)
      
      [ FAIL 10 | WARN 57 | SKIP 0 | PASS 453 ]
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
    
    --- re-building ‘Workflow.Rmd’ using rmarkdown
    
    Quitting from lines 56-57 [ID-Report] (Workflow.Rmd)
    Error: processing vignette 'Workflow.Rmd' failed with diagnostics:
    Can't convert a call to a string.
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
* Number of recursive dependencies: 52

Run `revdepcheck::cloud_details(, "msigdbr")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘msigdbr-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: msigdbr_collections
    > ### Title: List the collections available in the msigdbr package
    > ### Aliases: msigdbr_collections
    > 
    > ### ** Examples
    > 
    > msigdbr_collections()
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─msigdbr::msigdbr_collections()
      2. │ └─... %>% arrange(.data$gs_cat, .data$gs_subcat)
      3. ├─dplyr::arrange(., .data$gs_cat, .data$gs_subcat)
      4. ├─dplyr::count(., .data$gs_cat, .data$gs_subcat, name = "num_genesets")
      5. └─dplyr:::count.data.frame(., .data$gs_cat, .data$gs_subcat, name = "num_genesets")
      6.   └─dplyr:::map_chr(by_exprs, as_string)
      7.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      8.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
      9.         └─rlang (local) FUN(X[[i]], ...)
     10.           └─rlang:::abort_coercion(x, "a string")
     11.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

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
      installed size is 13.2Mb
      sub-directories of 1Mb or more:
        R  13.0Mb
    ```

# msSPChelpR

<details>

* Version: 0.9.1
* GitHub: https://github.com/marianschmidt/msSPChelpR
* Source code: https://github.com/cran/msSPChelpR
* Date/Publication: 2024-01-23 22:40:02 UTC
* Number of recursive dependencies: 74

Run `revdepcheck::cloud_details(, "msSPChelpR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘msSPChelpR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: calc_futime
    > ### Title: Calculate follow-up time per case until end of follow-up
    > ###   depending on pat_status - tidyverse version
    > ### Aliases: calc_futime
    > 
    > ### ** Examples
    > 
    > #load sample data
    > data("us_second_cancer")
    > 
    > #prep step - make wide data as this is the required format
    > usdata_wide <- us_second_cancer %>%
    +                     msSPChelpR::reshape_wide_tidyr(case_id_var = "fake_id", 
    +                     time_id_var = "SEQ_NUM", timevar_max = 10)
    >                     
    > #prep step - calculate p_spc variable
    > usdata_wide <- usdata_wide %>%
    +                  dplyr::mutate(p_spc = dplyr::case_when(is.na(t_site_icd.2)   ~ "No SPC",
    +                                                        !is.na(t_site_icd.2)   ~ "SPC developed",
    +                                                        TRUE ~ NA_character_)) %>%
    +                  dplyr::mutate(count_spc = dplyr::case_when(is.na(t_site_icd.2)   ~ 1,
    +                                                               TRUE ~ 0))
    >                                                               
    > #prep step - create patient status variable
    > usdata_wide <- usdata_wide %>%
    +                   msSPChelpR::pat_status(., fu_end = "2017-12-31", dattype = "seer",
    +                                          status_var = "p_status", life_var = "p_alive.1",
    +                                          birthdat_var = "datebirth.1", lifedat_var = "datedeath.1")
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─usdata_wide %>% ...
      2. ├─msSPChelpR::pat_status(...)
      3. │ └─wide_df %>% ...
      4. ├─dplyr::count(., .data[[!!life_var]], .data[[!!status_var]])
      5. └─dplyr:::count.data.frame(., .data[[!!life_var]], .data[[!!status_var]])
      6.   └─dplyr:::map_chr(by_exprs, as_string)
      7.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      8.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
      9.         └─rlang (local) FUN(X[[i]], ...)
     10.           └─rlang:::abort_coercion(x, "a string")
     11.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(msSPChelpR)
      > 
      > test_check("msSPChelpR")
      Long dataset had too many cases per patient. Wide dataset is limited to  2  cases per id as defined in timevar_max option.
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 4 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-pat_status.R:5:3'): custom variable name for status_var works ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─... %>% ... at test-pat_status.R:5:3
        2. ├─msSPChelpR::pat_status(...)
        3. │ └─wide_df %>% ...
        4. ├─dplyr::count(., .data[[!!life_var]], .data[[!!status_var]])
        5. └─dplyr:::count.data.frame(., .data[[!!life_var]], .data[[!!status_var]])
        6.   └─dplyr:::map_chr(by_exprs, as_string)
        7.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        8.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        9.         └─rlang (local) FUN(X[[i]], ...)
       10.           └─rlang:::abort_coercion(x, "a string")
       11.             └─rlang::abort(msg, call = call)
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 4 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘introduction.Rmd’ using rmarkdown
    
    Quitting from lines 177-205 [unnamed-chunk-7] (introduction.Rmd)
    Error: processing vignette 'introduction.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘introduction.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘introduction.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.6Mb
      sub-directories of 1Mb or more:
        data   6.0Mb
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

# mxfda

<details>

* Version: 0.2.2
* GitHub: https://github.com/julia-wrobel/mxfda
* Source code: https://github.com/cran/mxfda
* Date/Publication: 2024-10-07 17:40:02 UTC
* Number of recursive dependencies: 259

Run `revdepcheck::cloud_details(, "mxfda")` for more info

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
      > library(mxfda)
      > 
      > test_check("mxfda")
      128 sample have >= 4 values for FPCA; removing 0 samples
      128 sample have >= 4 values for FPCA; removing 0 samples
      Joining with `by = join_by(sample_id)`
      Using Theoretical Complete Spatial Randomness for Ripley's K
      Using Theoretical Complete Spatial Randomness for Bivariate Ripley's K
      Using Theoretical Complete Spatial Randomness for Bivariate Ripley's K
      128 sample have >= 4 values for FPCA; removing 0 samples
      128 sample have >= 4 values for FPCA; removing 0 samples
      128 sample have >= 4 values for FPCA; removing 0 samples
      246 sample have >= 4 values for FPCA; removing 0 samples
      Joining with `by = join_by(patient_id)`
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 44 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-extract_summary_functions.R:31:3'): can run spatial summary ────
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
      })`: i In argument: `sumfuns = map(...)`.
      Caused by error in `map()`:
      i In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─mxfda::extract_summary_functions(...) at test-extract_summary_functions.R:31:3
        2. │ └─... %>% unnest(sumfuns)
        3. ├─tidyr::unnest(., sumfuns)
        4. ├─dplyr::select(., -data)
        5. ├─dplyr::mutate(...)
        6. ├─dplyr:::mutate.data.frame(...)
        7. │ └─dplyr::mutate(...)
        8. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
        9. │     ├─base::withCallingHandlers(...)
       10. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
       11. │       └─mask$eval_all_mutate(quo)
       12. │         └─dplyr (local) eval()
       13. ├─purrr::map(...)
       14. │ └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
       15. │   ├─purrr:::with_indexed_errors(...)
       16. │   │ └─base::withCallingHandlers(...)
       17. │   ├─purrr:::call_with_cleanup(...)
       18. │   └─mxfda (local) .f(.x[[i]], ...)
       19. │     └─mximg %>% count(get(markvar)) %>% pull(n, name = 1)
       20. ├─dplyr::pull(., n, name = 1)
       21. ├─dplyr::count(., get(markvar))
       22. ├─dplyr:::count.data.frame(., get(markvar))
       23. │ └─dplyr:::map_chr(by_exprs, as_string)
       24. │   └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       25. │     └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       26. │       └─rlang (local) FUN(X[[i]], ...)
       27. │         └─rlang:::abort_coercion(x, "a string")
       28. │           └─rlang::abort(msg, call = call)
       29. │             └─rlang:::signal_abort(cnd, .file)
       30. │               └─base::signalCondition(cnd)
       31. ├─purrr (local) `<fn>`(`<rlng_rrr>`)
       32. │ └─cli::cli_abort(...)
       33. │   └─rlang::abort(...)
       34. │     └─rlang:::signal_abort(cnd, .file)
       35. │       └─base::signalCondition(cnd)
       36. └─dplyr (local) `<fn>`(`<prrr_rr_>`)
       37.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
      ── Error ('test-extract_summary_functions.R:55:3'): can run spatial summary ────
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
      })`: i In argument: `sumfuns = map(...)`.
      Caused by error in `map()`:
      i In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─mxfda::extract_summary_functions(...) at test-extract_summary_functions.R:55:3
        2. │ └─... %>% unnest(sumfuns)
        3. ├─tidyr::unnest(., sumfuns)
        4. ├─dplyr::select(., -data)
        5. ├─dplyr::mutate(...)
        6. ├─dplyr:::mutate.data.frame(...)
        7. │ └─dplyr::mutate(...)
        8. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
        9. │     ├─base::withCallingHandlers(...)
       10. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
       11. │       └─mask$eval_all_mutate(quo)
       12. │         └─dplyr (local) eval()
       13. ├─purrr::map(...)
       14. │ └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
       15. │   ├─purrr:::with_indexed_errors(...)
       16. │   │ └─base::withCallingHandlers(...)
       17. │   ├─purrr:::call_with_cleanup(...)
       18. │   └─mxfda (local) .f(.x[[i]], ...)
       19. │     └─mximg %>% count(get(markvar)) %>% pull(n, name = 1)
       20. ├─dplyr::pull(., n, name = 1)
       21. ├─dplyr::count(., get(markvar))
       22. ├─dplyr:::count.data.frame(., get(markvar))
       23. │ └─dplyr:::map_chr(by_exprs, as_string)
       24. │   └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       25. │     └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       26. │       └─rlang (local) FUN(X[[i]], ...)
       27. │         └─rlang:::abort_coercion(x, "a string")
       28. │           └─rlang::abort(msg, call = call)
       29. │             └─rlang:::signal_abort(cnd, .file)
       30. │               └─base::signalCondition(cnd)
       31. ├─purrr (local) `<fn>`(`<rlng_rrr>`)
       32. │ └─cli::cli_abort(...)
       33. │   └─rlang::abort(...)
       34. │     └─rlang:::signal_abort(cnd, .file)
       35. │       └─base::signalCondition(cnd)
       36. └─dplyr (local) `<fn>`(`<prrr_rr_>`)
       37.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
      
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 44 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘mx_fda.Rmd’ using rmarkdown
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.1Mb
      sub-directories of 1Mb or more:
        data   3.5Mb
    ```

# namedropR

<details>

* Version: 2.4.1
* GitHub: https://github.com/nucleic-acid/namedropR
* Source code: https://github.com/cran/namedropR
* Date/Publication: 2022-08-28 10:50:02 UTC
* Number of recursive dependencies: 98

Run `revdepcheck::cloud_details(, "namedropR")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(namedropR)
      > 
      > test_check("namedropR")
      [ FAIL 7 | WARN 74 | SKIP 0 | PASS 40 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-drop_name.R:29:7'): Bibliographies are correctly read  ─────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─withr::with_dir(...) at test-drop_name.R:26:3
        2. │ └─base::force(code)
        3. ├─testthat::expect_message(...) at test-drop_name.R:29:7
        4. │ └─testthat:::expect_condition_matching(...)
        5. │   └─testthat:::quasi_capture(...)
        6. │     ├─testthat (local) .capture(...)
        7. │     │ └─base::withCallingHandlers(...)
        8. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        9. ├─testthat::expect_message(...)
       10. │ └─testthat:::expect_condition_matching(...)
       11. │   └─testthat:::quasi_capture(...)
       12. │     ├─testthat (local) .capture(...)
       13. │     │ └─base::withCallingHandlers(...)
       14. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
       15. └─namedropR::drop_name(bib = good_bib, cite_key = "Eschrich1983")
       16.   ├─dplyr::count(bib_data, .data$BIBTEXKEY)
       17.   └─dplyr:::count.data.frame(bib_data, .data$BIBTEXKEY)
       18.     └─dplyr:::map_chr(by_exprs, as_string)
       19.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       20.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       21.           └─rlang (local) FUN(X[[i]], ...)
       22.             └─rlang:::abort_coercion(x, "a string")
       23.               └─rlang::abort(msg, call = call)
      ── Error ('test-drop_name.R:50:7'): compact mode returns a correct file path ───
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─withr::with_dir(...) at test-drop_name.R:47:3
        2. │ └─base::force(code)
        3. ├─testthat::expect_equal(...) at test-drop_name.R:50:7
        4. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        5. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        6. └─namedropR::drop_name(...)
        7.   ├─dplyr::count(bib_data, .data$BIBTEXKEY)
        8.   └─dplyr:::count.data.frame(bib_data, .data$BIBTEXKEY)
        9.     └─dplyr:::map_chr(by_exprs, as_string)
       10.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.           └─rlang (local) FUN(X[[i]], ...)
       13.             └─rlang:::abort_coercion(x, "a string")
       14.               └─rlang::abort(msg, call = call)
      ── Error ('test-drop_name.R:69:7'): biblatex files produce an output ───────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─withr::with_dir(...) at test-drop_name.R:66:3
        2. │ └─base::force(code)
        3. ├─testthat::expect_equal(...) at test-drop_name.R:69:7
        4. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        5. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        6. └─namedropR::drop_name(bib = bib_tbl, cite_key = "Alice2022", output_dir = "drop_name02")
        7.   ├─dplyr::count(bib_data, .data$BIBTEXKEY)
        8.   └─dplyr:::count.data.frame(bib_data, .data$BIBTEXKEY)
        9.     └─dplyr:::map_chr(by_exprs, as_string)
       10.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.           └─rlang (local) FUN(X[[i]], ...)
       13.             └─rlang:::abort_coercion(x, "a string")
       14.               └─rlang::abort(msg, call = call)
      ── Error ('test-drop_name.R:108:7'): missing DOI and URL columns are properly handled ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─withr::with_dir(...) at test-drop_name.R:105:3
        2. │ └─base::force(code)
        3. ├─testthat::expect_equal(...) at test-drop_name.R:108:7
        4. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        5. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        6. └─namedropR::drop_name(...)
        7.   ├─dplyr::count(bib_data, .data$BIBTEXKEY)
        8.   └─dplyr:::count.data.frame(bib_data, .data$BIBTEXKEY)
        9.     └─dplyr:::map_chr(by_exprs, as_string)
       10.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.           └─rlang (local) FUN(X[[i]], ...)
       13.             └─rlang:::abort_coercion(x, "a string")
       14.               └─rlang::abort(msg, call = call)
      ── Error ('test-drop_name.R:149:7'): bulk operations work properly ─────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─withr::with_dir(...) at test-drop_name.R:145:3
        2. │ └─base::force(code)
        3. ├─testthat::evaluate_promise(drop_name(bib = bulk_data, output_dir = "drop_name05")) at test-drop_name.R:149:7
        4. │ ├─withr::with_output_sink(...)
        5. │ │ └─base::force(code)
        6. │ ├─base::withCallingHandlers(...)
        7. │ └─base::withVisible(code)
        8. └─namedropR::drop_name(bib = bulk_data, output_dir = "drop_name05")
        9.   ├─dplyr::count(bib_data, .data$BIBTEXKEY)
       10.   └─dplyr:::count.data.frame(bib_data, .data$BIBTEXKEY)
       11.     └─dplyr:::map_chr(by_exprs, as_string)
       12.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.           └─rlang (local) FUN(X[[i]], ...)
       15.             └─rlang:::abort_coercion(x, "a string")
       16.               └─rlang::abort(msg, call = call)
      ── Error ('test-drop_name.R:216:7'): use_xaringan creates the correct folders (qr/ in working dir) ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─withr::with_dir(...) at test-drop_name.R:208:3
        2. │ └─base::force(code)
        3. └─namedropR::drop_name(...) at test-drop_name.R:216:7
        4.   ├─dplyr::count(bib_data, .data$BIBTEXKEY)
        5.   └─dplyr:::count.data.frame(bib_data, .data$BIBTEXKEY)
        6.     └─dplyr:::map_chr(by_exprs, as_string)
        7.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        8.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        9.           └─rlang (local) FUN(X[[i]], ...)
       10.             └─rlang:::abort_coercion(x, "a string")
       11.               └─rlang::abort(msg, call = call)
      ── Error ('test-get_css_style.R:19:3'): style table has unique names ───────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_false(...) at test-get_css_style.R:19:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─dplyr::count(style_df, .data$style_name)
        5. └─dplyr:::count.data.frame(style_df, .data$style_name)
        6.   └─dplyr:::map_chr(by_exprs, as_string)
        7.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        8.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        9.         └─rlang (local) FUN(X[[i]], ...)
       10.           └─rlang:::abort_coercion(x, "a string")
       11.             └─rlang::abort(msg, call = call)
      
      [ FAIL 7 | WARN 74 | SKIP 0 | PASS 40 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking Rd files ... NOTE
    ```
    checkRd: (-1) drop_name_crossref.Rd:49: Lost braces; missing escapes or markup?
        49 | Takes one or several dois and extracts information from Crossref, then processes them into visual citations with \code{\link{drop_name}}. Requires {rcrossref} > v1.1, see README for further details.
           |                                                                                                                                                    ^
    ```

# naturaList

<details>

* Version: 0.5.2
* GitHub: https://github.com/avrodrigues/naturaList
* Source code: https://github.com/cran/naturaList
* Date/Publication: 2024-02-06 08:10:02 UTC
* Number of recursive dependencies: 118

Run `revdepcheck::cloud_details(, "naturaList")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘naturaList-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: classify_occ
    > ### Title: Classify occurrence records in levels of confidence in species
    > ###   identification
    > ### Aliases: classify_occ
    > 
    > ### ** Examples
    > 
    > data("A.setosa")
    > data("speciaLists")
    > occ.class <- classify_occ(A.setosa, speciaLists)
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─naturaList::classify_occ(A.setosa, speciaLists)
      2. │ └─... %>% tidytext::cast_dtm(row, .data$word, .data$n)
      3. ├─tidytext::cast_dtm(., row, .data$word, .data$n)
      4. │ └─tidytext::cast_sparse(data, !!document, !!term, !!value, ...)
      5. │   └─dplyr::ungroup(data)
      6. ├─dplyr::ungroup(.)
      7. ├─dplyr::count(., row, .data$word, sort = TRUE)
      8. └─dplyr:::count.data.frame(., row, .data$word, sort = TRUE)
      9.   └─dplyr:::map_chr(by_exprs, as_string)
     10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     12.         └─rlang (local) FUN(X[[i]], ...)
     13.           └─rlang:::abort_coercion(x, "a string")
     14.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘naturaList_grid_filter_vignette.Rmd’ using rmarkdown
    --- finished re-building ‘naturaList_grid_filter_vignette.Rmd’
    
    --- re-building ‘naturaList_map_module_vignette.Rmd’ using rmarkdown
    --- finished re-building ‘naturaList_map_module_vignette.Rmd’
    
    --- re-building ‘natutaList_clean_eval_vignette.Rmd’ using rmarkdown
    
    Quitting from lines 60-63 [classification] (natutaList_clean_eval_vignette.Rmd)
    Error: processing vignette 'natutaList_clean_eval_vignette.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘natutaList_clean_eval_vignette.Rmd’
    
    --- re-building ‘natutaList_vignette.Rmd’ using rmarkdown
    --- finished re-building ‘natutaList_vignette.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘natutaList_clean_eval_vignette.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 5 marked Latin-1 strings
      Note: found 7187 marked UTF-8 strings
    ```

# NMTox

<details>

* Version: 0.1.0
* GitHub: NA
* Source code: https://github.com/cran/NMTox
* Date/Publication: 2022-09-01 15:20:05 UTC
* Number of recursive dependencies: 39

Run `revdepcheck::cloud_details(, "NMTox")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘NMTox-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: Frtab
    > ### Title: Generate the number of unique values, the list of unique values,
    > ###   or the number of observations of specified variable(s)
    > ### Aliases: Frtab
    > 
    > ### ** Examples
    > 
    > 
    > # List of nanomaterial in geninvitro dataset:
    > Frtab(data=geninvitro, x="name", opt="list")
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─NMTox::Frtab(data = geninvitro, x = "name", opt = "list")
      2. │ └─data %>% count(across(all_of(x)))
      3. ├─dplyr::count(., across(all_of(x)))
      4. └─dplyr:::count.data.frame(., across(all_of(x)))
      5.   └─dplyr:::map_chr(by_exprs, as_string)
      6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
      8.         └─rlang (local) FUN(X[[i]], ...)
      9.           └─rlang:::abort_coercion(x, "a string")
     10.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

## In both

*   checking Rd files ... NOTE
    ```
    checkRd: (-1) geninvitro.Rd:10: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:11: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:12: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:13: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:14: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:15: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:16: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:17: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:18: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:19: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:20: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:21: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:22: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:23-24: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:25: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:26-27: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) geninvitro.Rd:28-29: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:10: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:11: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:12: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:13: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:14: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:15: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:16: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:17: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:18: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:19: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:20: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:21: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:22: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:23-24: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:25: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:26-27: Lost braces in \itemize; meant \describe ?
    checkRd: (-1) nm400.Rd:28-29: Lost braces in \itemize; meant \describe ?
    ```

# offsetreg

<details>

* Version: 1.1.0
* GitHub: https://github.com/mattheaphy/offsetreg
* Source code: https://github.com/cran/offsetreg
* Date/Publication: 2024-04-11 14:40:03 UTC
* Number of recursive dependencies: 124

Run `revdepcheck::cloud_details(, "offsetreg")` for more info

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
      > library(offsetreg)
      > 
      > test_check("offsetreg")
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 42 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-xgboost.R:107:3'): boost_tree_offset() works with recipes ────
      predict(mod, xgtrain) (`actual`) not identical to predict(xgb_off, us_deaths)$.pred (`expected`).
      
           actual | expected                 
       [1] 18863  - 14222    [1]             
       [2] 19066  - 14375    [2]             
       [3] 19278  - 14535    [3]             
       [4] 19590  - 14770    [4]             
       [5] 19855  - 14970    [5]             
       [6] 20073  - 15134    [6]             
       [7] 20322  - 15322    [7]             
       [8] 20445  - 15415    [8]             
       [9] 20531  - 15479    [9]             
      [10] 22076  - 15509    [10]            
       ... ...      ...      and 130 more ...
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 42 ]
      Error: Test failures
      Execution halted
    ```

# OlinkAnalyze

<details>

* Version: 4.0.1
* GitHub: https://github.com/Olink-Proteomics/OlinkRPackage
* Source code: https://github.com/cran/OlinkAnalyze
* Date/Publication: 2024-09-24 11:50:02 UTC
* Number of recursive dependencies: 213

Run `revdepcheck::cloud_details(, "OlinkAnalyze")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(OlinkAnalyze)
      > 
      > test_check("OlinkAnalyze")
      Variables and covariates converted from character to factors: Site
      ANOVA model fit to each assay: NPX~Site
      Variables and covariates converted from character to factors: Time
      ANOVA model fit to each assay: NPX~Time
      Variables and covariates converted from character to factors: Site, Time
      ANOVA model fit to each assay: NPX~Site*Time
      Variables and covariates converted from character to factors: Site
      Means estimated for each assay from ANOVA model:  NPX~Site
      Variables and covariates converted from character to factors: Time
      Means estimated for each assay from ANOVA model:  NPX~Time
      8 assay(s) exhibited assay QC warning. For more information see the Assay_Warning column.
      Variables and covariates converted from character to factors: treatment2
      ANOVA model fit to each assay: NPX~treatment2
      8 assay(s) exhibited assay QC warning. For more information see the Assay_Warning column.
      Variables and covariates converted from character to factors: treatment2
      Means estimated for each assay from ANOVA model:  NPX~treatment2
      Duplicate SampleID(s) detected:
       CONTROL_SAMPLE_AS 1
       CONTROL_SAMPLE_AS 2
      Duplicate SampleID(s) detected:
       CONTROL_SAMPLE_AS 1
       CONTROL_SAMPLE_AS 2
      8 assay(s) exhibited assay QC warning. For more information see the Assay_Warning column.
      Duplicate SampleID(s) detected:
       CONTROL_SAMPLE_AS 1
       CONTROL_SAMPLE_AS 2
      Duplicate SampleID(s) detected:
       CONTROL_SAMPLE_AS 1
       CONTROL_SAMPLE_AS 2
      Using max LOD as filter criteria...
      Duplicate SampleID(s) detected:
       CONTROL_SAMPLE_AS 1
       CONTROL_SAMPLE_AS 2
      Using plate LOD as filter criteria...
      Duplicate SampleID(s) detected:
       CONTROL_SAMPLE_AS 1
       CONTROL_SAMPLE_AS 2
      Using plate LOD as filter criteria...
      Duplicate SampleID(s) detected:
       CONTROL_SAMPLE_AS 1
       CONTROL_SAMPLE_AS 2
      Duplicate SampleID(s) detected:
       CONTROL_SAMPLE_AS 1
       CONTROL_SAMPLE_AS 2
      8 assay(s) exhibited assay QC warning. For more information see the Assay_Warning column.
      0 assay(s) exhibited assay QC warning. For more information see the Assay_Warning column.
      Samples removed due to missing variable CONTROL_SAMPLE_AS 1, CONTROL_SAMPLE_AS 2
      Variables converted from character to factors: Site
      Kruskal model fit to each assay: NPX~Site
      Samples removed due to missing variable CONTROL_SAMPLE_AS 1, CONTROL_SAMPLE_AS 2
      Variables converted from character to factors: Time
      Friedman model fit to each assay: NPX~Time
      Duplicate SampleID(s) detected:
       CONTROL_SAMPLE_AS 1
       CONTROL_SAMPLE_AS 2
      Samples removed due to missing variable: CONTROL_SAMPLE_AS 1, CONTROL_SAMPLE_AS 2
      Variables converted from character to factors: Site
      Pairwise comparisons for Kruskal-Wallis test using Dunn test were performed
      Duplicate SampleID(s) detected:
       CONTROL_SAMPLE_AS 1
       CONTROL_SAMPLE_AS 2
      Samples removed due to missing variable: CONTROL_SAMPLE_AS 1, CONTROL_SAMPLE_AS 2
      Variables converted from character to factors: Time
      Pairwise comparisons for Friedman test using paired Wilcoxon signed-rank test were performed
      8 assay(s) exhibited assay QC warning. For more information see the Assay_Warning column.
      Variables converted from character to factors: treatment2
      Kruskal model fit to each assay: NPX~treatment2
      8 assay(s) exhibited assay QC warning. For more information see the Assay_Warning column.
      Variables converted from character to factors: treatment2
      Pairwise comparisons for Kruskal-Wallis test using Dunn test were performed
      Samples removed due to missing variable or covariate levels: CONTROL_SAMPLE_AS 1, CONTROL_SAMPLE_AS 2
      Variables and covariates converted from character to factors: Treatment, Time
      ANOVA model fit to each assay: NPX~Treatment*Time
      Duplicate SampleID(s) detected:
       CONTROL_SAMPLE_AS 1
       CONTROL_SAMPLE_AS 2
      Samples removed due to missing variable or covariate levels: CONTROL_SAMPLE_AS 1, CONTROL_SAMPLE_AS 2
      Variables and covariates converted from character to factors: Treatment, Time
      Means estimated for each assay from ANOVA model:  NPX~Treatment*Time
      NOTE: Results may be misleading due to involvement in interactions
      8 assay(s) exhibited assay QC warning. For more information see the Assay_Warning column.
      Variables and covariates converted from character to factors: treatment2
      ANOVA model fit to each assay: NPX~treatment2
      8 assay(s) exhibited assay QC warning. For more information see the Assay_Warning column.
      Variables and covariates converted from character to factors: treatment2
      Means estimated for each assay from ANOVA model:  NPX~treatment2
      Random assignment of SAMPLES to plates
      
      Assigning subjects to plates
      
      .
      Random assignment of SUBJECTS to plates
      
      Assigning subjects to plates. 'study' column detected so keeping studies together during randomization. 
      
      Testing with 0 empty well(s) in the plate. 
      
      .
      study1 successful! 
      
      Testing with 0 empty well(s) in the plate. 
      
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      Testing with 1 empty well(s) in the plate. 
      
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      Testing with 2 empty well(s) in the plate. 
      
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      Testing with 3 empty well(s) in the plate. 
      
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      .
      Testing with 4 empty well(s) in the plate. 
      
      .
      study2 successful! 
      
      Random assignment of SUBJECTS to plates
      
      Totally included 4 empty well(s) in first and/or intermediate plate(s) to accomplish the randomization.
      
      Please try another seed or increase the number of iterations if there are indications that another randomization might leave fewer empty wells.
      
      Assigning subjects to plates. 'study' column detected so keeping studies together during randomization. 
      
      Random assignment of SAMPLES to plates by study
      
      Assigning subjects to plates
      
      .
      Random assignment of SUBJECTS to plates
      
      Random assignment of SAMPLES to plates
      
      Samples removed due to missing variable levels: CONTROL_SAMPLE_AS 1, CONTROL_SAMPLE_AS 2
      Variable converted from character to factor: Treatment
      T-test is performed on Treated - Untreated.
      Variable converted from character to factor: Time
      Paired t-test is performed on Baseline - Week.6.
      Samples removed due to missing variable levels: CONTROL_SAMPLE_AS 1, CONTROL_SAMPLE_AS 2
      Variable converted from character to factor: Time
      Variable converted from character to factor: treatment1
      8 assay(s) exhibited assay QC warning. For more information see the Assay_Warning column.
      T-test is performed on control - treated.
      Target 96 data in wide form detected.
      QUANT data detected. Some downstream functions may not be supported.
      8 assay(s) exhibited assay QC warning. For more information see the Assay_Warning column.
      326 assay(s) exhibited assay QC warning. For more information see the Assay_Warning column.
      8 assay(s) exhibited assay QC warning. For more information see the Assay_Warning column.
      Samples removed due to missing variable levels: CONTROL_SAMPLE_AS 1, CONTROL_SAMPLE_AS 2
      Variable converted from character to factor: Treatment
      Mann-Whitney U Test is performed on Treated - Untreated.
      Variable converted from character to factor: Time
      Paired Mann-Whitney U Test is performed on Baseline - Week.6.
      Samples removed due to missing variable levels: CONTROL_SAMPLE_AS 1, CONTROL_SAMPLE_AS 2
      Variable converted from character to factor: Time
      Variable converted from character to factor: treatment1
      8 assay(s) exhibited assay QC warning. For more information see the Assay_Warning column.
      Mann-Whitney U Test is performed on control - treated.
      [ FAIL 3 | WARN 1 | SKIP 28 | PASS 451 ]
      
      ══ Skipped tests (28) ══════════════════════════════════════════════════════════
      • On CRAN (12): 'test-Olink_boxplot.R:1:1',
        'test-Olink_plate_randomizer.R:60:3', 'test-Read_NPX_data.R:52:5',
        'test-Volcano_plot.R:16:3', 'test-dist_plot.R:18:5',
        'test-linear_mixed_model.R:1:1', 'test-npxProcessing.R:121:3',
        'test-olink_Pathway_Enrichment.R:1:1', 'test-olink_Pathway_Heatmap.R:1:1',
        'test-olink_Pathway_Visualization.R:1:1', 'test-olink_qc_plot.R:16:5',
        'test-pca_plot.R:2:1'
      • file.exists("../data/example_3k_data.rds") is not TRUE (11):
        'test-olink_normalization.R:473:5',
        'test-olink_normalization_product.R:97:5',
        'test-olink_normalization_product.R:191:5',
        'test-olink_normalization_product.R:312:5',
        'test-olink_normalization_utils.R:146:5',
        'test-olink_normalization_utils.R:2414:5',
        'test-olink_normalization_utils.R:2480:5',
        'test-olink_normalization_utils.R:2544:5',
        'test-olink_normalization_utils.R:2590:5',
        'test-olink_normalization_utils.R:2709:5',
        'test-olink_normalization_utils.R:3754:5'
      • file.exists("../data/ref_results_norm.rds") is not TRUE (4):
        'test-olink_normalization.R:17:5', 'test-olink_normalization.R:131:5',
        'test-olink_normalization.R:249:5', 'test-olink_normalization.R:367:5'
      • file.exists(normalizePath("../data/example_3k_data.rds")) is not TRUE (1):
        'test-olink_normalization_product.R:6:5'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-olink_normalization_utils.R:528:5'): olink_norm_input_check - works - reference median normalization ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_warning(...) at test-olink_normalization_utils.R:528:5
        2. │ └─testthat:::expect_condition_matching(...)
        3. │   └─testthat:::quasi_capture(...)
        4. │     ├─testthat (local) .capture(...)
        5. │     │ └─base::withCallingHandlers(...)
        6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        7. ├─testthat::expect_message(...)
        8. │ └─testthat:::expect_condition_matching(...)
        9. │   └─testthat:::quasi_capture(...)
       10. │     ├─testthat (local) .capture(...)
       11. │     │ └─base::withCallingHandlers(...)
       12. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
       13. └─OlinkAnalyze:::olink_norm_input_check(...)
       14.   └─OlinkAnalyze:::olink_norm_input_ref_medians(reference_medians = reference_medians)
       15.     ├─base::unique(...)
       16.     ├─dplyr::pull(...)
       17.     ├─dplyr::collect(...)
       18.     ├─dplyr::select(...)
       19.     ├─dplyr::filter(...)
       20.     ├─dplyr::count(reference_medians, .data[[oid_name]])
       21.     └─dplyr:::count.data.frame(reference_medians, .data[[oid_name]])
       22.       └─dplyr:::map_chr(by_exprs, as_string)
       23.         └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       24.           └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       25.             └─rlang (local) FUN(X[[i]], ...)
       26.               └─rlang:::abort_coercion(x, "a string")
       27.                 └─rlang::abort(msg, call = call)
      ── Failure ('test-olink_normalization_utils.R:3265:5'): olink_norm_input_ref_medians - check cols ──
      Expected `olink_norm_input_ref_medians(...)` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_no_warning(...) at test-olink_normalization_utils.R:3265:5
        2. │ └─testthat:::expect_no_(...)
        3. │   └─testthat:::quasi_capture(enquo(object), NULL, capture)
        4. │     ├─testthat (local) .capture(...)
        5. │     │ └─rlang::try_fetch(...)
        6. │     │   └─base::withCallingHandlers(...)
        7. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        8. ├─testthat::expect_no_message(...)
        9. │ └─testthat:::expect_no_(...)
       10. │   └─testthat:::quasi_capture(enquo(object), NULL, capture)
       11. │     ├─testthat (local) .capture(...)
       12. │     │ └─rlang::try_fetch(...)
       13. │     │   └─base::withCallingHandlers(...)
       14. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
       15. └─testthat::expect_no_error(...)
      ── Error ('test-olink_normalization_utils.R:3375:5'): olink_norm_input_ref_medians - check OID duplicates ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_error(...) at test-olink_normalization_utils.R:3375:5
        2. │ └─testthat:::expect_condition_matching(...)
        3. │   └─testthat:::quasi_capture(...)
        4. │     ├─testthat (local) .capture(...)
        5. │     │ └─base::withCallingHandlers(...)
        6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        7. └─OlinkAnalyze:::olink_norm_input_ref_medians(...)
        8.   ├─base::unique(...)
        9.   ├─dplyr::pull(...)
       10.   ├─dplyr::collect(...)
       11.   ├─dplyr::select(...)
       12.   ├─dplyr::filter(...)
       13.   ├─dplyr::count(reference_medians, .data[[oid_name]])
       14.   └─dplyr:::count.data.frame(reference_medians, .data[[oid_name]])
       15.     └─dplyr:::map_chr(by_exprs, as_string)
       16.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       17.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       18.           └─rlang (local) FUN(X[[i]], ...)
       19.             └─rlang:::abort_coercion(x, "a string")
       20.               └─rlang::abort(msg, call = call)
      
      [ FAIL 3 | WARN 1 | SKIP 28 | PASS 451 ]
      Deleting unused snapshots:
      • Olink_boxplot/boxplot-site-10prots.svg
      • Olink_boxplot/boxplot-site-2prots.svg
      • Olink_boxplot/boxplot-time-and-site.svg
      • Olink_boxplot/boxplot-time-with-coloroption.svg
      • Olink_boxplot/boxplot-time.svg
      • Volcano_plot/volcano-plot-with-coloroption.svg
      • dist_plot/distribution-plot-col-by-treatment.svg
      • linear_mixed_model/lmer-plot-more-prots-than-space.svg
      • linear_mixed_model/lmer-plot.svg
      • olink_Pathway_Heatmap/gsea-heatmap.svg
      • olink_Pathway_Heatmap/ora-heatmap-with-keyword.svg
      • olink_Pathway_Visualization/gsea-vis-with-keyword.svg
      • olink_Pathway_Visualization/gsea-visualization.svg
      • olink_Pathway_Visualization/ora-vis-with-keyword.svg
      • olink_Pathway_Visualization/ora-vis-with-terms.svg
      • olink_qc_plot/qc-plot-with-coloroption.svg
      Error: Test failures
      Execution halted
    ```

# omopgenerics

<details>

* Version: 0.3.1
* GitHub: NA
* Source code: https://github.com/cran/omopgenerics
* Date/Publication: 2024-09-21 08:40:02 UTC
* Number of recursive dependencies: 79

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
      [ FAIL 1 | WARN 22 | SKIP 2 | PASS 1037 ]
      
      ══ Skipped tests (2) ═══════════════════════════════════════════════════════════
      • On CRAN (2): 'test-assert.R:347:3', 'test-utilities.R:193:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-methodBind.R:194:3'): bind summarised_result ───────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_identical(...) at test-methodBind.R:194:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─dplyr::as_tibble(dplyr::count(new1, .data$result_id))
        5. ├─dplyr::count(new1, .data$result_id)
        6. └─dplyr:::count.data.frame(new1, .data$result_id)
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      
      [ FAIL 1 | WARN 22 | SKIP 2 | PASS 1037 ]
      Error: Test failures
      Execution halted
    ```

# partition

<details>

* Version: 0.2.2
* GitHub: https://github.com/USCbiostats/partition
* Source code: https://github.com/cran/partition
* Date/Publication: 2024-10-09 17:00:02 UTC
* Number of recursive dependencies: 95

Run `revdepcheck::cloud_details(, "partition")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘extending-partition.Rmd’ using rmarkdown
    --- finished re-building ‘extending-partition.Rmd’
    
    --- re-building ‘introduction-to-partition.Rmd’ using rmarkdown
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  9.0Mb
      sub-directories of 1Mb or more:
        libs   6.8Mb
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
      > # * https://testthat.r-lib.org/reference/test_package.html#special-files
      > 
      > library(testthat)
      > library(PatientProfiles)
      > 
      > test_check("PatientProfiles")
      Starting 2 test processes
      [ FAIL 2 | WARN 9 | SKIP 106 | PASS 149 ]
      
      ══ Skipped tests (106) ═════════════════════════════════════════════════════════
      • On CRAN (106): 'test-addAttributes.R:2:3', 'test-addCategories.R:2:3',
        'test-addCategories.R:56:3', 'test-addCategories.R:93:3',
        'test-addCategories.R:142:3', 'test-addConceptIntersect.R:2:3',
        'test-addConceptIntersect.R:97:3', 'test-addConceptIntersect.R:128:3',
        'test-addConceptIntersect.R:158:3', 'test-addConceptIntersect.R:189:3',
        'test-addDeath.R:104:3', 'test-addDeath.R:149:3', 'test-addDeath.R:247:3',
        'test-addDeath.R:290:3', 'test-addCohortIntersect.R:277:3',
        'test-addCohortIntersect.R:353:3', 'test-addCohortIntersect.R:398:3',
        'test-addCohortIntersect.R:509:3', 'test-addCohortIntersect.R:600:3',
        'test-addCohortIntersect.R:660:3', 'test-addCohortIntersect.R:734:3',
        'test-addCohortIntersect.R:752:3', 'test-addCohortIntersect.R:838:3',
        'test-addFutureObservation.R:2:3', 'test-addFutureObservation.R:13:3',
        'test-addFutureObservation.R:27:3', 'test-addFutureObservation.R:87:3',
        'test-addFutureObservation.R:147:3', 'test-addFutureObservation.R:209:3',
        'test-addFutureObservation.R:253:3', 'test-addInObservation.R:2:3',
        'test-addInObservation.R:16:3', 'test-addInObservation.R:47:3',
        'test-addInObservation.R:170:3', 'test-addIntersect.R:2:3',
        'test-addIntersect.R:37:3', 'test-addIntersect.R:226:3',
        'test-addIntersect.R:277:3', 'test-addIntersect.R:398:3',
        'test-addIntersect.R:502:3', 'test-addIntersect.R:558:3',
        'test-addIntersect.R:626:3', 'test-addIntersect.R:775:3',
        'test-addIntersect.R:856:3', 'test-addIntersect.R:870:3',
        'test-addIntersect.R:940:3', 'test-addIntersect.R:1027:3',
        'test-addIntersect.R:1208:3', 'test-addIntersect.R:1219:3',
        'test-addObservationPeriodId.R:2:3', 'test-addPriorObservation.R:2:3',
        'test-addPriorObservation.R:13:3', 'test-addPriorObservation.R:27:3',
        'test-addPriorObservation.R:73:3', 'test-addPriorObservation.R:118:3',
        'test-addPriorObservation.R:180:3', 'test-addSex.R:2:3',
        'test-addSex.R:13:3', 'test-addSex.R:25:3', 'test-addSex.R:66:3',
        'test-addDemographics.R:2:3', 'test-addDemographics.R:24:3',
        'test-addDemographics.R:352:3', 'test-addDemographics.R:419:3',
        'test-addDemographics.R:685:3', 'test-addDemographics.R:834:3',
        'test-addDemographics.R:852:3', 'test-addDemographics.R:964:3',
        'test-addDemographics.R:1043:3', 'test-addDemographics.R:1155:3',
        'test-addDemographics.R:1220:3', 'test-addDemographics.R:1246:3',
        'test-addDemographics.R:1273:3', 'test-addDemographics.R:1289:3',
        'test-addDemographics.R:1300:3', 'test-addDemographics.R:1318:3',
        'test-addDemographics.R:1340:3', 'test-checks.R:2:3', 'test-checks.R:110:3',
        'test-checks.R:161:3', 'test-checks.R:181:3', 'test-checks.R:193:3',
        'test-checks.R:207:3', 'test-checks.R:220:3', 'test-checks.R:268:3',
        'test-checks.R:295:3', 'test-addTableIntersect.R:28:3',
        'test-addTableIntersect.R:209:3', 'test-addTableIntersect.R:316:3',
        'test-addTableIntersect.R:451:3', 'test-addTableIntersect.R:581:3',
        'test-format.R:2:3', 'test-format.R:89:3', 'test-format.R:100:3',
        'test-format.R:110:3', 'test-format.R:139:3',
        'test-mockPatientProfiles.R:2:3', 'test-name.R:2:3', 'test-utilities.R:2:3',
        'test-summariseResult.R:205:3', 'test-summariseResult.R:251:3',
        'test-summariseResult.R:308:3', 'test-summariseResult.R:352:3',
        'test-summariseResult.R:373:3', 'test-summariseResult.R:448:3',
        'test-summariseResult.R:534:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-addDemographics.R:618:3'): age at cohort entry, missing year/month/day of birth ──
      all(c(9, NA) %in% result$age) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-addDemographics.R:670:3'): multiple cohortIds, check age at cohort end ──
      all(c(15, 13, NA) %in% result$age) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      
      [ FAIL 2 | WARN 9 | SKIP 106 | PASS 149 ]
      Error: Test failures
      Execution halted
    ```

# phsmethods

<details>

* Version: 1.0.2
* GitHub: https://github.com/Public-Health-Scotland/phsmethods
* Source code: https://github.com/cran/phsmethods
* Date/Publication: 2024-01-08 23:10:03 UTC
* Number of recursive dependencies: 94

Run `revdepcheck::cloud_details(, "phsmethods")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘chi-operations.Rmd’ using rmarkdown
    
    Quitting from lines 75-77 [unnamed-chunk-5] (chi-operations.Rmd)
    Error: processing vignette 'chi-operations.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘chi-operations.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘chi-operations.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 4 marked UTF-8 strings
    ```

# PMAPscore

<details>

* Version: 0.1.1
* GitHub: NA
* Source code: https://github.com/cran/PMAPscore
* Date/Publication: 2022-04-12 08:12:37 UTC
* Number of recursive dependencies: 185

Run `revdepcheck::cloud_details(, "PMAPscore")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is  8.5Mb
      sub-directories of 1Mb or more:
        data      6.5Mb
        extdata   1.7Mb
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespaces in Imports field not imported from:
      ‘base’ ‘grDevices’
      All declared Imports should be used.
    ```

# PopED

<details>

* Version: 0.7.0
* GitHub: https://github.com/andrewhooker/PopED
* Source code: https://github.com/cran/PopED
* Date/Publication: 2024-10-07 19:30:02 UTC
* Number of recursive dependencies: 141

Run `revdepcheck::cloud_details(, "PopED")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is  5.5Mb
      sub-directories of 1Mb or more:
        R      1.5Mb
        doc    1.4Mb
        test   1.1Mb
    ```

# portalr

<details>

* Version: 0.4.3
* GitHub: https://github.com/weecology/portalr
* Source code: https://github.com/cran/portalr
* Date/Publication: 2024-09-23 23:20:03 UTC
* Number of recursive dependencies: 96

Run `revdepcheck::cloud_details(, "portalr")` for more info

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
      > library(portalr)
      > 
      > test_check("portalr")
      Downloading version `5.106.0` of the data...
      [ FAIL 1 | WARN 1 | SKIP 43 | PASS 134 ]
      
      ══ Skipped tests (43) ══════════════════════════════════════════════════════════
      • On CRAN (43): 'test-01-data-retrieval.R:5:5',
        'test-01-data-retrieval.R:41:5', 'test-01-data-retrieval.R:48:5',
        'test-01-data-retrieval.R:63:5', 'test-01-data-retrieval.R:78:5',
        'test-01-data-retrieval.R:99:5', 'test-03-summarize-rodents.R:6:3',
        'test-03-summarize-rodents.R:32:3', 'test-03-summarize-rodents.R:38:3',
        'test-03-summarize-rodents.R:60:3', 'test-03-summarize-rodents.R:85:3',
        'test-03-summarize-rodents.R:110:3', 'test-03-summarize-rodents.R:129:3',
        'test-03-summarize-rodents.R:195:3', 'test-99-regression.R:8:3',
        'test-99-regression.R:18:3', 'test-99-regression.R:26:3',
        'test-99-regression.R:44:3', 'test-99-regression.R:68:3',
        'test-99-regression.R:78:3', 'test-99-regression.R:87:3',
        'test-99-regression.R:100:3', 'test-99-regression.R:109:3',
        'test-99-regression.R:118:3', 'test-99-regression.R:130:3',
        'test-99-regression.R:141:3', 'test-99-regression.R:153:3',
        'test-99-regression.R:162:3', 'test-99-regression.R:171:3',
        'test-99-regression.R:181:3', 'test-99-regression.R:195:3',
        'test-99-regression.R:207:3', 'test-99-regression.R:215:3',
        'test-99-regression.R:227:3', 'test-99-regression.R:235:3',
        'test-99-regression.R:247:3', 'test-99-regression.R:255:3',
        'test-99-regression.R:267:3', 'test-99-regression.R:280:3',
        'test-99-regression.R:290:3', 'test-99-regression.R:300:3',
        'test-99-regression.R:318:3', 'test-99-regression.R:330:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-07-seasons.R:8:1'): (code run outside of `test_that()`) ────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─portalr::abundance(path = portal_data_path, level = "plot", shape = "flat") at test-07-seasons.R:8:1
        2. │ └─portalr::summarize_rodent_data(..., output = "abundance")
        3. │   └─... %>% ...
        4. ├─portalr:::prep_rodent_output(...)
        5. │ ├─stats::na.omit(as.character(unique(level_data$species)))
        6. │ └─base::unique(level_data$species)
        7. ├─portalr:::add_time(., newmoons_table, time)
        8. │ ├─... %>% ...
        9. │ ├─dplyr::right_join(newmoons_table, summary_table, by = c(period = "period"))
       10. │ └─dplyr:::right_join.data.frame(...)
       11. │   └─dplyr::auto_copy(x, y, copy = copy)
       12. │     ├─dplyr::same_src(x, y)
       13. │     └─dplyr:::same_src.data.frame(x, y)
       14. │       └─base::is.data.frame(y)
       15. ├─dplyr::filter(., .data$period <= max(.data$period, na.rm = TRUE))
       16. ├─portalr:::make_level_data(...)
       17. │ └─dplyr::rename(plot_data, `:=`(n, !!output))
       18. ├─portalr:::make_plot_data(., trapping_data, output, min_traps)
       19. │ └─... %>% dplyr::rename(!!output := "n")
       20. ├─dplyr::rename(., `:=`(!!output, "n"))
       21. ├─dplyr::mutate(...)
       22. ├─dplyr::filter(., !is.na(.data$species))
       23. ├─dplyr::select(...)
       24. ├─dplyr::right_join(., trapping_data, by = c("period", "plot"))
       25. ├─tidyr::complete(., !!!grouping, fill = filler)
       26. ├─dplyr::count(., !!!grouping, wt = !!wt)
       27. └─dplyr:::count.data.frame(., !!!grouping, wt = !!wt)
       28.   └─dplyr:::map_chr(by_exprs, as_string)
       29.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       30.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       31.         └─rlang (local) FUN(X[[i]], ...)
       32.           └─rlang:::abort_coercion(x, "a string")
       33.             └─rlang::abort(msg, call = call)
      
      [ FAIL 1 | WARN 1 | SKIP 43 | PASS 134 ]
      Error: Test failures
      Execution halted
    ```

# rainette

<details>

* Version: 0.3.1.1
* GitHub: https://github.com/juba/rainette
* Source code: https://github.com/cran/rainette
* Date/Publication: 2023-03-28 16:50:02 UTC
* Number of recursive dependencies: 117

Run `revdepcheck::cloud_details(, "rainette")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(rainette)
      
      Attaching package: 'rainette'
      
      The following object is masked from 'package:stats':
      
          cutree
      
      > 
      > test_check("rainette")
      [ FAIL 4 | WARN 0 | SKIP 1 | PASS 119 ]
      
      ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
      • On CRAN (1): 'test_plots.R:6:1'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_cutree.R:32:3'): rainette2_complete_groups ─────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─rainette::rainette2(res1, res2, min_members = 2) at test_cutree.R:32:3
        2. │ ├─progressr::with_progress(...)
        3. │ └─rainette:::groups_crosstab(groups1, groups2, min_members, min_chi2)
        4. │   └─... %>% dplyr::count(.data$level1, .data$g1, name = "n1")
        5. ├─dplyr::count(., .data$level1, .data$g1, name = "n1")
        6. └─dplyr:::count.data.frame(., .data$level1, .data$g1, name = "n1")
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test_rainette2.R:13:1'): (code run outside of `test_that()`) ────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─rainette::rainette2(...) at test_rainette2.R:13:1
        2. │ ├─progressr::with_progress(...)
        3. │ └─rainette:::groups_crosstab(groups1, groups2, min_members, min_chi2)
        4. │   └─... %>% dplyr::count(.data$level1, .data$g1, name = "n1")
        5. ├─dplyr::count(., .data$level1, .data$g1, name = "n1")
        6. └─dplyr:::count.data.frame(., .data$level1, .data$g1, name = "n1")
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test_utils.R:96:3'): clusters_by_doc_table results ──────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test_utils.R:96:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─rainette::clusters_by_doc_table(mini_dfm_count, clust_var = "cluster")
        5. │ └─res %>% dplyr::count(.data$doc_id, .data$cluster)
        6. ├─dplyr::count(., .data$doc_id, .data$cluster)
        7. └─dplyr:::count.data.frame(., .data$doc_id, .data$cluster)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test_utils.R:127:3'): docs_by_cluster_table results ─────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test_utils.R:127:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─rainette::docs_by_cluster_table(mini_dfm_count, clust_var = "cluster")
        5. │ └─rainette::clusters_by_doc_table(...)
        6. │   └─res %>% dplyr::count(.data$doc_id, .data$cluster)
        7. ├─dplyr::count(., .data$doc_id, .data$cluster)
        8. └─dplyr:::count.data.frame(., .data$doc_id, .data$cluster)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      
      [ FAIL 4 | WARN 0 | SKIP 1 | PASS 119 ]
      Deleting unused snapshots:
      • plots/base-rainette-plot-measure-docprop.svg
      • plots/base-rainette-plot-measure-frequency.svg
      • plots/base-rainette-plot-measure-lr.svg
      • plots/base-rainette-plot-with-free-scales.svg
      • plots/base-rainette-plot-with-k-and-without-negative.svg
      • plots/base-rainette-plot-with-k-n-terms-and-font-size.svg
      • plots/base-rainette-plot.svg
      • plots/base-rainette2-plot-measure-docprop.svg
      • plots/base-rainette2-plot-measure-frequency.svg
      • plots/base-rainette2-plot-measure-lr.svg
      • plots/base-rainette2-plot-with-complete-groups.svg
      • plots/base-rainette2-plot-with-free-scales.svg
      • plots/base-rainette2-plot-with-k-5.svg
      • plots/base-rainette2-plot-with-k-and-without-negative.svg
      • plots/base-rainette2-plot-with-k-n-terms-and-font-size.svg
      • plots/base-rainette2-plot.svg
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘algorithmes.Rmd’ using rmarkdown
    --- finished re-building ‘algorithmes.Rmd’
    
    --- re-building ‘algorithms_en.Rmd’ using rmarkdown
    --- finished re-building ‘algorithms_en.Rmd’
    
    --- re-building ‘introduction_en.Rmd’ using rmarkdown
    
    Quitting from lines 132-133 [unnamed-chunk-10] (introduction_en.Rmd)
    Error: processing vignette 'introduction_en.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘introduction_en.Rmd’
    
    --- re-building ‘introduction_usage.Rmd’ using rmarkdown
    
    Quitting from lines 156-157 [unnamed-chunk-15] (introduction_usage.Rmd)
    Error: processing vignette 'introduction_usage.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘introduction_usage.Rmd’
    
    SUMMARY: processing the following files failed:
      ‘introduction_en.Rmd’ ‘introduction_usage.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# Rcurvep

<details>

* Version: 1.3.1
* GitHub: https://github.com/moggces/Rcurvep
* Source code: https://github.com/cran/Rcurvep
* Date/Publication: 2024-01-09 08:20:32 UTC
* Number of recursive dependencies: 117

Run `revdepcheck::cloud_details(, "Rcurvep")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘Rcurvep-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: combi_run_rcurvep
    > ### Title: Run Curvep on datasets of concentration-response data with a
    > ###   combination of Curvep parameters
    > ### Aliases: combi_run_rcurvep
    > 
    > ### ** Examples
    > 
    > 
    > data(zfishbeh)
    > 
    > # 2 simulated sample curves +
    > # using two thresholds +
    > # mask the response at the higest concentration
    > # only to output the act_set
    > 
    > out <- combi_run_rcurvep(
    +   zfishbeh,
    +   n_samples = 2,
    +   TRSH = c(5, 10),
    +   mask = 1,
    +   keep_sets = "act_set")
    Error in `mutate()`:
    ℹ In argument: `rcurvep_obj = furrr::future_pmap(...)`.
    Caused by error:
    ℹ In index: 1.
    Caused by error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─Rcurvep::combi_run_rcurvep(...)
      2. │ └─Rcurvep:::combi_run_curvep_in(...)
      3. │   └─paras %>% ...
      4. ├─dplyr::mutate(...)
      5. ├─dplyr:::mutate.data.frame(...)
      6. │ └─dplyr::mutate(...)
      7. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      8. │     ├─base::withCallingHandlers(...)
      9. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
     10. │       └─mask$eval_all_mutate(quo)
     11. │         └─dplyr (local) eval()
     12. └─furrr::future_pmap(...)
     13.   └─furrr:::furrr_pmap_template(...)
     14.     └─furrr:::furrr_template(...)
     15.       └─future::future(...)
     16.         ├─future::run(future)
     17.         └─future:::run.Future(future)
     18.           ├─future::run(future)
     19.           └─future:::run.UniprocessFuture(future)
     20.             └─base::eval(expr, envir = envir, enclos = baseenv())
     21.               └─base::eval(expr, envir = envir, enclos = baseenv())
     22.                 ├─base::tryCatch(...)
     23.                 │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
     24.                 │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
     25.                 │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
     26.                 ├─base::withCallingHandlers(...)
     27.                 ├─base::withVisible(...)
     28.                 ├─base::local(...)
     29.                 │ └─base::eval.parent(substitute(eval(quote(expr), envir)))
     30.                 │   └─base::eval(expr, p)
     31.                 │     └─base::eval(expr, p)
     32.                 └─base::eval(...)
     33.                   └─base::eval(...)
     34.                     ├─base::do.call(...furrr_map_fn, args)
     35.                     └─purrr (local) `<fn>`(.l = `<named list>`, .f = `<fn>`)
     36.                       └─purrr:::pmap_("list", .l, .f, ..., .progress = .progress)
     37.                         ├─purrr:::with_indexed_errors(...)
     38.                         │ └─base::withCallingHandlers(...)
     39.                         ├─purrr:::call_with_cleanup(...)
     40.                         └─Rcurvep (local) .f(...)
     41.                           └─Rcurvep (local) ...furrr_fn(...)
     42.                             └─Rcurvep:::pmap_run_rcurvep(...)
     43.                               ├─base::do.call(...)
     44.                               └─Rcurvep (local) `<fn>`(d = `<tibble[,4]>`, mask = 1, keep_sets = "act_set", TRSH = 5)
     45.                                 └─Rcurvep:::.check_dat_base(d)
     46.                                   ├─dplyr::count(dat, .data$endpoint, .data$chemical, .data$conc)
     47.                                   └─dplyr:::count.data.frame(...)
     48.                                     └─dplyr:::map_chr(by_exprs, as_string)
     49.                                       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     50.                                         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     51.                                           └─rlang (local) FUN(X[[i]], ...)
     52.                                             └─rlang:::abort_coercion(x, "a string")
     53.                                               └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(Rcurvep)
      > test_check("Rcurvep")
      [ FAIL 13 | WARN 13 | SKIP 0 | PASS 57 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-combirun.R:14:3'): n_samples = NULL ────────────────────────────
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
      })`: ℹ In argument: `rcurvep_obj = furrr::future_pmap(...)`.
      Caused by error:
      ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─Rcurvep::combi_run_rcurvep(...) at test-combirun.R:14:3
        2. │ └─Rcurvep:::combi_run_curvep_in(...)
        3. │   └─paras %>% ...
        4. ├─dplyr::mutate(...)
        5. ├─dplyr:::mutate.data.frame(...)
        6. │ └─dplyr::mutate(...)
        7. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
        8. │     ├─base::withCallingHandlers(...)
        9. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
       10. │       └─mask$eval_all_mutate(quo)
       11. │         └─dplyr (local) eval()
       12. ├─furrr::future_pmap(...)
       13. │ └─furrr:::furrr_pmap_template(...)
       14. │   └─furrr:::furrr_template(...)
       15. │     ├─future::value(futures)
       16. │     └─future:::value.list(futures)
       17. │       ├─future::resolve(...)
       18. │       └─future:::resolve.list(...)
       19. │         └─future (local) signalConditionsASAP(obj, resignal = FALSE, pos = ii)
       20. │           └─future:::signalConditions(...)
       21. │             └─base::stop(condition)
       22. └─dplyr (local) `<fn>`(`<prrr_rr_>`)
       23.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
      ── Error ('test-combirun.R:27:3'): n_samples != NULL ───────────────────────────
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
      })`: ℹ In argument: `rcurvep_obj = furrr::future_pmap(...)`.
      Caused by error:
      ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─Rcurvep::combi_run_rcurvep(zfishbeh, n_samples = n_samples, TRSH = thresholds) at test-combirun.R:27:3
        2. │ └─Rcurvep:::combi_run_curvep_in(...)
        3. │   └─paras %>% ...
        4. ├─dplyr::mutate(...)
        5. ├─dplyr:::mutate.data.frame(...)
        6. │ └─dplyr::mutate(...)
        7. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
        8. │     ├─base::withCallingHandlers(...)
        9. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
       10. │       └─mask$eval_all_mutate(quo)
       11. │         └─dplyr (local) eval()
       12. ├─furrr::future_pmap(...)
       13. │ └─furrr:::furrr_pmap_template(...)
       14. │   └─furrr:::furrr_template(...)
       15. │     ├─future::value(futures)
       16. │     └─future:::value.list(futures)
       17. │       ├─future::resolve(...)
       18. │       └─future:::resolve.list(...)
       19. │         └─future (local) signalConditionsASAP(obj, resignal = FALSE, pos = ii)
       20. │           └─future:::signalConditions(...)
       21. │             └─base::stop(condition)
       22. └─dplyr (local) `<fn>`(`<prrr_rr_>`)
       23.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
      ── Error ('test-combirun.R:43:3'): seed is not null ────────────────────────────
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
      })`: ℹ In argument: `rcurvep_obj = furrr::future_pmap(...)`.
      Caused by error:
      ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─Rcurvep::combi_run_rcurvep(...) at test-combirun.R:43:3
        2. │ └─Rcurvep:::combi_run_curvep_in(...)
        3. │   └─paras %>% ...
        4. ├─dplyr::mutate(...)
        5. ├─dplyr:::mutate.data.frame(...)
        6. │ └─dplyr::mutate(...)
        7. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
        8. │     ├─base::withCallingHandlers(...)
        9. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
       10. │       └─mask$eval_all_mutate(quo)
       11. │         └─dplyr (local) eval()
       12. ├─furrr::future_pmap(...)
       13. │ └─furrr:::furrr_pmap_template(...)
       14. │   └─furrr:::furrr_template(...)
       15. │     ├─future::value(futures)
       16. │     └─future:::value.list(futures)
       17. │       ├─future::resolve(...)
       18. │       └─future:::resolve.list(...)
       19. │         └─future (local) signalConditionsASAP(obj, resignal = FALSE, pos = ii)
       20. │           └─future:::signalConditions(...)
       21. │             └─base::stop(condition)
       22. └─dplyr (local) `<fn>`(`<prrr_rr_>`)
       23.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
      ── Error ('test-input.R:71:3'): check input basic dataset ──────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(.check_dat_base(dats[[1]]), dats[[1]]) at test-input.R:71:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. └─Rcurvep:::.check_dat_base(dats[[1]])
        5.   ├─dplyr::count(dat, .data$endpoint, .data$chemical, .data$conc)
        6.   └─dplyr:::count.data.frame(...)
        7.     └─dplyr:::map_chr(by_exprs, as_string)
        8.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.           └─rlang (local) FUN(X[[i]], ...)
       11.             └─rlang:::abort_coercion(x, "a string")
       12.               └─rlang::abort(msg, call = call)
      ── Error ('test-input.R:103:3'): check_result_sets ─────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─Rcurvep::run_rcurvep(create_dataset(zfishbeh)) at test-input.R:103:3
        2.   └─Rcurvep:::.check_dat_base(d)
        3.     ├─dplyr::count(dat, .data$endpoint, .data$chemical, .data$conc)
        4.     └─dplyr:::count.data.frame(...)
        5.       └─dplyr:::map_chr(by_exprs, as_string)
        6.         └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.           └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.             └─rlang (local) FUN(X[[i]], ...)
        9.               └─rlang:::abort_coercion(x, "a string")
       10.                 └─rlang::abort(msg, call = call)
      ── Error ('test-mergeobj.R:7:1'): (code run outside of `test_that()`) ──────────
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
      })`: ℹ In argument: `rcurvep_obj = furrr::future_pmap(...)`.
      Caused by error:
      ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─Rcurvep::combi_run_rcurvep(...) at test-mergeobj.R:7:1
        2. │ └─Rcurvep:::combi_run_curvep_in(...)
        3. │   └─paras %>% ...
        4. ├─dplyr::mutate(...)
        5. ├─dplyr:::mutate.data.frame(...)
        6. │ └─dplyr::mutate(...)
        7. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
        8. │     ├─base::withCallingHandlers(...)
        9. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
       10. │       └─mask$eval_all_mutate(quo)
       11. │         └─dplyr (local) eval()
       12. ├─furrr::future_pmap(...)
       13. │ └─furrr:::furrr_pmap_template(...)
       14. │   └─furrr:::furrr_template(...)
       15. │     ├─future::value(futures)
       16. │     └─future:::value.list(futures)
       17. │       ├─future::resolve(...)
       18. │       └─future:::resolve.list(...)
       19. │         └─future (local) signalConditionsASAP(obj, resignal = FALSE, pos = ii)
       20. │           └─future:::signalConditions(...)
       21. │             └─base::stop(condition)
       22. └─dplyr (local) `<fn>`(`<prrr_rr_>`)
       23.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
      ── Error ('test-onerun.R:10:3'): run one resp per conc per endpoint ────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─Rcurvep::run_rcurvep(dats[[1]], config = curvep_defaults()) at test-onerun.R:10:3
        2.   └─Rcurvep:::.check_dat_base(d)
        3.     ├─dplyr::count(dat, .data$endpoint, .data$chemical, .data$conc)
        4.     └─dplyr:::count.data.frame(...)
        5.       └─dplyr:::map_chr(by_exprs, as_string)
        6.         └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.           └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.             └─rlang (local) FUN(X[[i]], ...)
        9.               └─rlang:::abort_coercion(x, "a string")
       10.                 └─rlang::abort(msg, call = call)
      ── Error ('test-onerun.R:16:3'): run one resp per conc many endpoints ──────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─Rcurvep::run_rcurvep(dplyr::bind_rows(dats), config = curvep_defaults()) at test-onerun.R:16:3
        2.   └─Rcurvep:::.check_dat_base(d)
        3.     ├─dplyr::count(dat, .data$endpoint, .data$chemical, .data$conc)
        4.     └─dplyr:::count.data.frame(...)
        5.       └─dplyr:::map_chr(by_exprs, as_string)
        6.         └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.           └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.             └─rlang (local) FUN(X[[i]], ...)
        9.               └─rlang:::abort_coercion(x, "a string")
       10.                 └─rlang::abort(msg, call = call)
      ── Error ('test-onerun.R:21:3'): with parameter change ─────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─Rcurvep::run_rcurvep(dats[[1]], TRSH = 30) at test-onerun.R:21:3
        2.   └─Rcurvep:::.check_dat_base(d)
        3.     ├─dplyr::count(dat, .data$endpoint, .data$chemical, .data$conc)
        4.     └─dplyr:::count.data.frame(...)
        5.       └─dplyr:::map_chr(by_exprs, as_string)
        6.         └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.           └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.             └─rlang (local) FUN(X[[i]], ...)
        9.               └─rlang:::abort_coercion(x, "a string")
       10.                 └─rlang::abort(msg, call = call)
      ── Error ('test-onerun.R:27:3'): with mask ─────────────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─Rcurvep::run_rcurvep(dats[[1]], mask = c(1, 2)) at test-onerun.R:27:3
        2.   └─Rcurvep:::.check_dat_base(d)
        3.     ├─dplyr::count(dat, .data$endpoint, .data$chemical, .data$conc)
        4.     └─dplyr:::count.data.frame(...)
        5.       └─dplyr:::map_chr(by_exprs, as_string)
        6.         └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.           └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.             └─rlang (local) FUN(X[[i]], ...)
        9.               └─rlang:::abort_coercion(x, "a string")
       10.                 └─rlang::abort(msg, call = call)
      ── Error ('test-onerun.R:32:3'): only one set ──────────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─Rcurvep::run_rcurvep(dats[[1]], keep_sets = "act_set") at test-onerun.R:32:3
        2.   └─Rcurvep:::.check_dat_base(d)
        3.     ├─dplyr::count(dat, .data$endpoint, .data$chemical, .data$conc)
        4.     └─dplyr:::count.data.frame(...)
        5.       └─dplyr:::map_chr(by_exprs, as_string)
        6.         └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.           └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.             └─rlang (local) FUN(X[[i]], ...)
        9.               └─rlang:::abort_coercion(x, "a string")
       10.                 └─rlang::abort(msg, call = call)
      ── Error ('test-onerun.R:40:3'): dataset has mask column ───────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. └─Rcurvep::run_rcurvep(inp) at test-onerun.R:40:3
        2.   └─Rcurvep:::.check_dat_base(d)
        3.     ├─dplyr::count(dat, .data$endpoint, .data$chemical, .data$conc)
        4.     └─dplyr:::count.data.frame(...)
        5.       └─dplyr:::map_chr(by_exprs, as_string)
        6.         └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.           └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.             └─rlang (local) FUN(X[[i]], ...)
        9.               └─rlang:::abort_coercion(x, "a string")
       10.                 └─rlang::abort(msg, call = call)
      ── Error ('test-summary.R:6:1'): (code run outside of `test_that()`) ───────────
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
      })`: ℹ In argument: `rcurvep_obj = furrr::future_pmap(...)`.
      Caused by error:
      ℹ In index: 1.
      Caused by error in `FUN()`:
      ! Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─Rcurvep::combi_run_rcurvep(...) at test-summary.R:6:1
        2. │ └─Rcurvep:::combi_run_curvep_in(...)
        3. │   └─paras %>% ...
        4. ├─dplyr::mutate(...)
        5. ├─dplyr:::mutate.data.frame(...)
        6. │ └─dplyr::mutate(...)
        7. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
        8. │     ├─base::withCallingHandlers(...)
        9. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
       10. │       └─mask$eval_all_mutate(quo)
       11. │         └─dplyr (local) eval()
       12. ├─furrr::future_pmap(...)
       13. │ └─furrr:::furrr_pmap_template(...)
       14. │   └─furrr:::furrr_template(...)
       15. │     ├─future::value(futures)
       16. │     └─future:::value.list(futures)
       17. │       ├─future::resolve(...)
       18. │       └─future:::resolve.list(...)
       19. │         └─future (local) signalConditionsASAP(obj, resignal = FALSE, pos = ii)
       20. │           └─future:::signalConditions(...)
       21. │             └─base::stop(condition)
       22. └─dplyr (local) `<fn>`(`<prrr_rr_>`)
       23.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
      
      [ FAIL 13 | WARN 13 | SKIP 0 | PASS 57 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘future_rcurvep.Rmd’ using rmarkdown
    --- finished re-building ‘future_rcurvep.Rmd’
    
    --- re-building ‘practical_rcurvep.Rmd’ using rmarkdown
    
    Quitting from lines 64-68 [unnamed-chunk-5] (practical_rcurvep.Rmd)
    Error: processing vignette 'practical_rcurvep.Rmd' failed with diagnostics:
    ℹ In argument: `rcurvep_obj = furrr::future_pmap(...)`.
    Caused by error:
    ℹ In index: 1.
    Caused by error in `FUN()`:
    ! Can't convert a call to a string.
    --- failed re-building ‘practical_rcurvep.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘practical_rcurvep.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.8Mb
      sub-directories of 1Mb or more:
        data   3.5Mb
        java   2.7Mb
    ```

# reappraised

<details>

* Version: 0.1.1
* GitHub: NA
* Source code: https://github.com/cran/reappraised
* Date/Publication: 2023-10-06 04:20:02 UTC
* Number of recursive dependencies: 123

Run `revdepcheck::cloud_details(, "reappraised")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘reappraised.Rmd’ using rmarkdown
    ```

# refseqR

<details>

* Version: 1.1.4
* GitHub: https://github.com/jdieramon/refseqR
* Source code: https://github.com/cran/refseqR
* Date/Publication: 2024-08-18 18:00:02 UTC
* Number of recursive dependencies: 51

Run `revdepcheck::cloud_details(, "refseqR")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘refseqR.Rmd’ using rmarkdown
    
    Quitting from lines 122-124 [unnamed-chunk-12] (refseqR.Rmd)
    Error: processing vignette 'refseqR.Rmd' failed with diagnostics:
    Must specify either (not both) 'id' or 'web_history' arguments
    --- failed re-building ‘refseqR.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘refseqR.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking examples ... ERROR
    ```
    Running examples in ‘refseqR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: refseq_GeneID
    > ### Title: Get the GeneID
    > ### Aliases: refseq_GeneID
    > 
    > ### ** Examples
    > 
    > # Get the gene symbol from a set of transcript accessions
    > transcript = c("XM_004487701", "XM_004488493")
    > sapply(transcript, function(x) refseq_GeneID (x, db = "nuccore", retries = 4), USE.NAMES = FALSE)
    Error in curl::curl_fetch_memory(url, handle = handle) : 
      transfer closed with outstanding read data remaining
    Calls: sapply ... tryCatch -> tryCatchList -> tryCatchOne -> <Anonymous>
    Execution halted
    ```

# rempsyc

<details>

* Version: 0.1.8
* GitHub: https://github.com/rempsyc/rempsyc
* Source code: https://github.com/cran/rempsyc
* Date/Publication: 2024-07-01 21:30:02 UTC
* Number of recursive dependencies: 175

Run `revdepcheck::cloud_details(, "rempsyc")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘rempsyc-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: find_mad
    > ### Title: Identify outliers based on 3 MAD
    > ### Aliases: find_mad
    > ### Keywords: MAD mean median normalization outliers standardization
    > 
    > ### ** Examples
    > 
    > find_mad(
    +   data = mtcars,
    +   col.list = names(mtcars),
    +   criteria = 3
    + )
    20 outlier(s) based on 3 median absolute deviations for variable(s): 
     mpg, cyl, disp, hp, drat, wt, qsec, vs, am, gear, carb 
    
    The following participants were considered outliers for more than one variable: 
    
      Row n
    1   3 2
    2   9 2
    3  18 2
    4  19 2
    5  20 2
    6  26 2
    7  28 2
    8  31 2
    9  32 2
    
    Outliers per variable: 
    
    $qsec
      Row qsec_mad
    1   9 3.665557
    
    $vs
       Row vs_mad
    1    3    Inf
    2    4    Inf
    3    6    Inf
    4    8    Inf
    5    9    Inf
    6   10    Inf
    7   11    Inf
    8   18    Inf
    9   19    Inf
    10  20    Inf
    11  21    Inf
    12  26    Inf
    13  28    Inf
    14  32    Inf
    
    $am
       Row am_mad
    1    1    Inf
    2    2    Inf
    3    3    Inf
    4   18    Inf
    5   19    Inf
    6   20    Inf
    7   26    Inf
    8   27    Inf
    9   28    Inf
    10  29    Inf
    11  30    Inf
    12  31    Inf
    13  32    Inf
    
    $carb
      Row carb_mad
    1  31 4.046945
    
    > 
    > mtcars2 <- mtcars
    > mtcars2$car <- row.names(mtcars)
    > find_mad(
    +   data = mtcars2,
    +   col.list = names(mtcars),
    +   ID = "car",
    +   criteria = 3
    + )
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─rempsyc::find_mad(...)
      2. │ └─duplicates.df %>% count(Row, .[[ID]]) %>% ...
      3. ├─dplyr::rename(...)
      4. ├─dplyr::count(., Row, .[[ID]])
      5. └─dplyr:::count.data.frame(., Row, .[[ID]])
      6.   └─dplyr:::map_chr(by_exprs, as_string)
      7.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      8.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
      9.         └─rlang (local) FUN(X[[i]], ...)
     10.           └─rlang:::abort_coercion(x, "a string")
     11.             └─rlang::abort(msg, call = call)
    Execution halted
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

*   checking re-building of vignette outputs ... ERROR
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

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.1Mb
      sub-directories of 1Mb or more:
        data   2.0Mb
        help   1.9Mb
    ```

# rliger

<details>

* Version: 2.0.1
* GitHub: https://github.com/welch-lab/liger
* Source code: https://github.com/cran/rliger
* Date/Publication: 2024-04-04 23:20:02 UTC
* Number of recursive dependencies: 219

Run `revdepcheck::cloud_details(, "rliger")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘rliger-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: plotProportion
    > ### Title: Visualize proportion across two categorical variables
    > ### Aliases: plotProportion plotProportionDot plotProportionBar
    > ###   plotClusterProportions plotProportionPie
    > 
    > ### ** Examples
    > 
    > plotProportion(pbmcPlot)
    > plotProportionBar(pbmcPlot, method = "group")
    > plotProportionPie(pbmcPlot)
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─rliger::plotProportionPie(pbmcPlot)
      2. │ └─... %>% dplyr::ungroup()
      3. ├─dplyr::ungroup(.)
      4. ├─dplyr::mutate(...)
      5. ├─dplyr::mutate(., proportion = .data[["n"]]/sum(.data[["n"]]))
      6. ├─dplyr::count(., .data[[class1]])
      7. └─dplyr:::count.data.frame(., .data[[class1]])
      8.   └─dplyr:::map_chr(by_exprs, as_string)
      9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     11.         └─rlang (local) FUN(X[[i]], ...)
     12.           └─rlang:::abort_coercion(x, "a string")
     13.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(rliger)
      Package `rliger` has been updated massively since version 1.99.0, including the object structure which is not compatible with old versions.
      
      We recommand you backup your old analysis before overwriting any existing result.
      
      `readLiger()` is provided for reading an RDS file storing an old object and it converts the object to the up-to-date structure.
      > 
      > test_check("rliger")
      Starting online iNMF scenario 1, factorize all datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      ************************************************Total iterations:  30
      Total time:        0 sec
      Objective error:   36760.7
      **|
      Modularity Optimizer version 1.3.0 by Ludo Waltman and Nees Jan van Eck
      
      Reading input file...
      
      Number of nodes: 600
      Number of edges: 17430
      
      Running Louvain algorithm...
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      
      Modularity: 0.7486
      Number of communities: 8
      Elapsed time: 0 seconds
      Modularity Optimizer version 1.3.0 by Ludo Waltman and Nees Jan van Eck
      
      Reading input file...
      
      Number of nodes: 600
      Number of edges: 17175
      
      Running Louvain algorithm...
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      
      Modularity: 0.7530
      Number of communities: 8
      Elapsed time: 0 seconds
      Starting online iNMF scenario 1, factorize all datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      ************************************************Total iterations:  30
      Total time:        0 sec
      Objective error:   36760.7
      **|
      Starting online iNMF scenario 1, factorize all datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      ************************************************Total iterations:  30
      Total time:        0 sec
      Objective error:   36760.7
      **|
      Dataset 1:
       NPM1, RPL9, LTB, MYC, BIRC3, RPLP0, RGCC, RPS5, ISG15, GBP1, S100A8, RSAD2, FGFBP2, CXCL10, GIMAP7, SAT1, IDO1, CLIC3, SRGN, KLRD1, GZMB, IFI27, CCL8, TYROBP, NKG7, APOBEC3A, APOBEC3G, TYMP, HERC6 
      Shared:
       PABPC1, CXCR4, CD7, BTG1, RPS27, TMSB4X, RPL31, RGCC, CREM, HLA-A, RPLP1, HLA-C, RPL13, MALAT1, RPS4X, RPS14, RPS3, RPS19, RPL10, RPS27A, RPS15A, HLA-B, RPS12, RPL27A, RPL21, RPL32, RPL15, PTMA, RPL18A, RPS2 
      Dataset 2
       RSAD2, HERC6, IFI27, APOBEC3G, CLIC3, ISG15, GBP1, S100A8, FGFBP2, CXCL10, GIMAP7, SAT1, IDO1, SRGN, KLRD1, GZMB, CCL8, TYROBP, NKG7, APOBEC3A, TYMP, RPL9, NPM1, LTB, MYC, BIRC3, RPLP0, RGCC, RPS5 
      Dataset 1:
       UBC, ISG15, GBP1, RSAD2, RPL34 
      Shared:
       GADD45B, UBC, GADD45G, HSPA1A, HSP90AB1, H3F3B, HSPA8, HSPB1, NFKBIA, CREM, JUNB, BIRC3, SAT1, PPBP, CCNH, EIF1, DUSP2, H2AFZ, HIST1H2AC, BTG1, MALAT1, ID3, RELB, CXCR4, RPS27, TMEM66, RPL14, SRGN, RPL13A, RPL19 
      Dataset 2
       RSAD2, GBP1, ISG15, RPL34, UBC 
      Dataset 1:
       VIM, S100A6, CXCR4, ANXA5, CD83, HLA-DPB1, FTH1, CD79A, FTL, LGALS1, ISG15, GBP1, SELL, RSAD2, CXCL10, PLAC8, HSP90AB1, GIMAP7, SAT1, CREM, IFI27, CCR7, H3F3B, APOBEC3A, TYMP 
      Shared:
       RPS18, RPL10A, RPL3, RPL34, RPS6, RPL7, RPL32, RPS3A, RPL13, RPS14, RPS4X, RPL10, RPL13A, RPS3, RPL21, RPS23, RPL9, RPS2, RPS27A, RPL11, RPS15A, RPS5, RPL12, RPL31, RPS8, RPL14, RPS19, RPL27A, RPL18A, RPL19 
      Dataset 2
       GIMAP7, PLAC8, CCR7, HSP90AB1, IFI27, H3F3B, SELL, ISG15, GBP1, RSAD2, CXCL10, SAT1, CREM, APOBEC3A, TYMP, S100A6, CXCR4, ANXA5, CD83, HLA-DPB1, VIM, FTH1, CD79A, FTL, LGALS1 
      Dataset 1:
       MARCKSL1, IL8, CD14, H2AFZ, CCL2, GBP1, RPS8, RPL7, RPS4X, RPL15, RPL10, RPL10A, RPL19, S100A4, RPL3, RPS27A, RPS27, RPS6, RPL21, S100A9, S100A8, IL1B, GPX1, RPS3A, RPL27A, RPS3, GPR183, ACTN1, RPL18A, RPL13A 
      Shared:
       CTSL, LGALS3, CCL2, CSTB, CTSB, FTL, CD63, VIM, ANXA5, FCER1G, S100A4, SOD2, FTH1, ANXA2, S100A11, S100A10, LGALS1, GAPDH, C15orf48, ANXA1, CCL7, ACTB, S100A6, TYROBP, TIMP1, SRGN, NMB, TYMP, GPX1, NFKBIA 
      Dataset 2
       CCL7, NFKBIA, CCL8, HSPB1, CTSL, S100A9, APOBEC3A, TYMP, HLA-A, APOBEC3G, IDO1, ISG15, GBP1, SELL, RSAD2, CXCR4, CXCL10, HIST1H2AC, HLA-C, HSPA1A, FAM26F, SAT1, ANXA1, IFI27, CCL2, HERC6, MARCKSL1, RPS8, S100A8, S100A4 
      Dataset 1:
       GAPDH, TMSB4X, ISG15, RSAD2, CXCL10, FAM26F, HSPB1, TMEM66, IDO1, CCL8 
      Shared:
       SERPINB2, CXCL3, IL8, CCL7, ANXA2, CD14, CTSL, LGALS1, CTSB, S100A6, CD63, ANXA5, FCER1G, FTL, GAPDH, IFI27, ANXA1, FTH1, VIM, S100A9, SRGN, S100A10, SAT1, TYMP, CCL8, TYROBP, CCL2, GPX1, EIF1, SOD2 
      Dataset 2
       CCL8, HSPB1, FAM26F, TMEM66, ISG15, RSAD2, CXCL10, IDO1, TMSB4X, GAPDH 
      Dataset 1:
       CXCL10, GBP1, TIMP1, FAM26F, RGCC, IL8, CD14, RPL14, S100A10, VIM, LGALS3, LGALS1, ISG15, RSAD2, CD83, HLA-A, HSPA1A, HSP90AB1, IDO1, TXN, MS4A7, CCL2, CCL8, APOBEC3A 
      Shared:
       VMO1, FCGR3A, MS4A7, FAM26F, GBP1, PLAC8, CXCL10, FCER1G, TYROBP, JUNB, HLA-DPA1, FTH1, TMSB4X, S100A11, SOD2, ACTB, HLA-C, HLA-B, TMEM66, HLA-DPB1, B2M, RPS19, MALAT1, ANXA1, SRGN, HLA-A, S100A4, JTB, HSPA8, H3F3B 
      Dataset 2
       ISG15, HLA-A, MS4A7, CD83, HSPA1A, HSP90AB1, GBP1, RSAD2, CXCL10, FAM26F, IDO1, TXN, CCL2, CCL8, APOBEC3A, S100A10, RPL14, IL8, CD14, TIMP1, VIM, RGCC, LGALS3, LGALS1 
      Dataset 1:
       FCGR3A, TMEM66, RPL23A, S100A6, RPL27A, GZMB, RPL7, RPL18, RPS3A, RPL14, RPS8, RPL32, RPS23, RPS18, RPL10A, ISG15, GBP1, RSAD2, CXCL10, CD74, SAT1, ANXA1, CCL8, TYMP, BAK1, HERC6, CCNH 
      Shared:
       GNLY, NKG7, GZMB, KLRD1, APOBEC3G, CLIC3, CST7, KLRC1, CD7, HLA-A, CCL5, HLA-B, HLA-C, CHRNB1, PLAC8, SRGN, B2M, TMSB4X, CXCR4, PTMA, PPBP, MALAT1, H3F3B, JTB, VIM, ANXA1, RPLP1, CD63, NDUFC2, RPS3 
      Dataset 2
       CCNH, ANXA1, BAK1, ISG15, GBP1, RSAD2, CXCL10, CD74, SAT1, GZMB, CCL8, TYMP, HERC6, RPS8, S100A6, FCGR3A, RPL32, RPL14, RPS3A, RPS23, RPS18, RPL10A, TMEM66, RPL7, RPL27A, RPL23A, RPL18 
      Dataset 1:
       CXCL3, GBP1, ACTB, RPL9, RPS27A, CD14, MARCKSL1, RPL34, RPS3A, IL1B, NPM1, RPL10A, RPS6, RPLP0, ISG15, RSAD2, CXCL10, HIST1H2AC, HSPA1A, FAM26F, HSPB1, SAT1, IDO1, CCL8, CST3, APOBEC3A, APOBEC3G 
      Shared:
       IL1B, IL8, LYZ, CXCL3, NFKBIA, SOD2, C15orf48, CCL3, CSTB, S100A10, FTH1, ACTB, VIM, SRGN, FTL, FCER1G, CTSB, ANXA5, CD63, CST3, EIF1, CCL2, S100A11, HSPA8, PLAC8, TIMP1, ANXA1, APOBEC3B, JTB, NDUFC2 
      Dataset 2
       IL1B, CST3, FAM26F, APOBEC3A, SAT1, RPLP0, HIST1H2AC, APOBEC3G, ISG15, GBP1, RSAD2, CXCL10, HSPA1A, HSPB1, IDO1, CCL8, MARCKSL1, RPS27A, RPL9, CXCL3, RPL34, RPS3A, CD14, NPM1, RPL10A, ACTB, RPS6 
      Dataset 1:
       MARCKSL1, IL8, APOBEC3B, RPS27A, RGCC, RPL15, TIMP1, PABPC1, RPS3A, RPL7, RPL18, RPS8, IL1B, RPL10A, RPL3, ISG15, GBP1, RSAD2, CXCL10, HIST1H2AC, HSPA1A, FAM26F, HSPB1, SAT1, CTSB, IDO1, CTSL, TXN, IFI27, CCL2 
      Shared:
       S100A8, S100A9, CD14, GPX1, S100A6, S100A4, LGALS1, S100A10, MARCKSL1, TYROBP, S100A11, TYMP, GAPDH, FTL, LYZ, ACTB, FTH1, ANXA2, FCER1G, CD63, SRGN, VIM, ANXA5, C15orf48, CTSB, IL8, EIF1, LGALS3, CST3, NFKBIA 
      Dataset 2
       HIST1H2AC, CCL2, IDO1, CTSB, FAM26F, CST3, HSPB1, APOBEC3A, HSPA1A, SAT1, APOBEC3G, ISG15, GBP1, RSAD2, CXCL10, CTSL, TXN, IFI27, CCL7, CCL8, CCL5, APOBEC3B, TYMP, MARCKSL1, RPS8, RPS27A, IL1B, RPL15, IL8, RPS3A 
      Dataset 1:
       RGCC, PTMA, IL8, RPL3, IL1B, RPL15, H2AFZ, GAPDH, ISG15, GBP1, RSAD2, CXCL10, HSPA1A, HSPB1, CCL2, CCL8, CST3, APOBEC3A, TYMP 
      Shared:
       CCL3, CCL4, DUSP2, MYC, MIR155HG, SOD2, CD83, NFKBIA, CSTB, RGCC, TXN, H3F3B, CCL5, JUNB, PLAC8, CLIC3, CREM, S100A9, JTB, MALAT1, ANXA5, FTL, CCR7, RPS5, RPS27, CCL8, IDO1, IL8, RPL10, VIM 
      Dataset 2
       CCL2, CCL8, HSPB1, ISG15, GBP1, RSAD2, CXCL10, HSPA1A, CST3, APOBEC3A, TYMP, IL1B, PTMA, RPL15, IL8, H2AFZ, GAPDH, RGCC, RPL3 
      Dataset 1:
       GAPDH, NKG7, EIF1, SRGN, ACTB, S100A4, ISG15, JTB 
      Shared:
       GZMH, FGFBP2, CCL5, GZMK, NDUFC2, NKG7, RBM10, HLA-B, LAGE3, GAPDH, APOBEC3G, NMB, ANXA1, HLA-C, CLIC3, B2M, TMSB4X, THRAP3, PTMA, CST7, HLA-A, RPL15, RPS19, MALAT1, RPL18, ACTN1, UBC, GZMB, H2AFZ, JTB 
      Dataset 2
       JTB, ISG15, S100A4, ACTB, SRGN, GAPDH, EIF1, NKG7 
      Dataset 1:
       CST7, IDO1, CD83, IL8, VMO1, SAT1, LGALS3, TYMP, TIMP1, H3F3B, RPL3, ISG15, GBP1, S100A11, S100A4, FCER1G, RSAD2, CXCL10, HSPA1A, HSP90AB1, FAM26F, HSPB1, CTSB, ANXA1, HSPA8, IFI27, CCL2, APOBEC3A, APOBEC3B, APOBEC3G 
      Shared:
       HLA-DPA1, HLA-DPB1, TXN, HLA-DRA, HLA-DRB1, CD74, HLA-DQA1, IDO1, CST3, MARCKSL1, ANXA2, LYZ, GPR183, CCR7, ACTB, C15orf48, S100A10, CD83, TMSB4X, CST7, BIRC3, GAPDH, LGALS1, B2M, GPX1, CD63, SRGN, VIM, CSTB, NFKBIA 
      Dataset 2
       HSPA1A, CXCL10, HSPB1, S100A4, ANXA1, APOBEC3G, HERC6, S100A11, HSPA8, APOBEC3B, ISG15, RPL3, GBP1, FCER1G, RSAD2, HSP90AB1, FAM26F, SAT1, CTSB, IDO1, IFI27, CCL2, H3F3B, APOBEC3A, TYMP, IL8, CD83, TIMP1, LGALS3, VMO1 
      Dataset 1:
       JTB, PABPC1, GAPDH, H2AFZ, ISG15, GBP1, RSAD2, CXCL10, HLA-C, SOD2, SAT1, CREM, BTG1, CCL2, JUNB 
      Shared:
       MIR155HG, MYC, NPM1, ID3, HLA-DQA1, CD83, HSP90AB1, RPLP0, RPS5, HSPA8, RPL19, CCR7, EIF1, HLA-DRB1, RPL14, RPS2, PTMA, RPL18A, RPL23A, HLA-DRA, RPS23, RPL10A, DUSP2, RPL7, RPS12, RPLP1, RPS8, RPL18, RPS6, RPL12 
      Dataset 2
       JUNB, GBP1, BTG1, CREM, SAT1, ISG15, RSAD2, CXCL10, HLA-C, SOD2, CCL2, H2AFZ, PABPC1, GAPDH, JTB 
      Dataset 1:
       RSAD2, ISG15, CD14, APOBEC3A, TIMP1, GAPDH, RPS5, GPR183, NMB, RPS3A, GPX1, RPL21, RPL15, RPS12, RPS4X, RPLP0, PABPC1, JTB, RPL3, RPL11, MARCKSL1, S100A6, CXCR4, PTMA, IL8, CXCL3, NPM1, RPS3, RPL19, RPL13A 
      Shared:
       RSAD2, ISG15, CXCL10, APOBEC3A, GBP1, CCL8, FAM26F, HSPA1A, IDO1, IFI27, HSPB1, SOD2, ANXA1, TYMP, HSPA8, SAT1, GAPDH, H3F3B, FTL, CTSB, CST3, HERC6, LGALS1, ANXA2, HLA-A, S100A10, ANXA5, TXN, HLA-DRB1, C15orf48 
      Dataset 2
       HSPA1A, IDO1, FAM26F, IFI27, SOD2, CXCL10, HERC6, APOBEC3G, ISG15, RSAD2, HSPB1, SAT1, RPS2, CCL8, CCL3, APOBEC3A, RPL11, MARCKSL1, S100A6, CXCR4, PTMA, RPL15, GPX1, IL8, CXCL3, RPS3A, CD14, NPM1, RPS12, TIMP1 
      Dataset 1:
       APOBEC3B, APOBEC3A, GPX1, ISG15, IL8, RPL11, RPL23A, RPL10A, RPL9, RPL14, VMO1, RPS27A, RPL13, RPL10, RPS15A, CCL8, RPS19, RPS14, RPS6, RPL19, RGCC, GNLY, CST3, PABPC1, RPS8, RPS27, RPL31, PTMA, RPL32, RPL15 
      Shared:
       APOBEC3B, CCL7, CCL8, HBA1, CCL2, ISG15, NFKBIA, IDO1, HSPA1A, IL8, MS4A7, HSPB1, C15orf48, CTSB, CSTB, ANXA2, TYMP, APOBEC3A, FCER1G, ANXA5, CD63, S100A9, CXCL3, FTH1, TYROBP, LYZ, RPL23A, CCL3, JUNB, JTB 
      Dataset 2
       CCL2, TYMP, LYZ, HSPA1A, S100A10, FAM26F, CXCL10, RPL18, RPS12, RPL31, ISG15, GBP1, RSAD2, SAT1, CTSB, IDO1, LGALS3, CCL8, CST3, APOBEC3A, APOBEC3B, APOBEC3G, RPL11, RPS8, RPS27, RPS27A, GNLY, PTMA, RPL32, RPL15 
      Dataset 1:
       RPL18, VIM, MARCKSL1, RPL13A, UBC, FTH1, FTL, ISG15, GBP1, RSAD2, CXCL10, PLAC8, SAT1, CCR7, TYMP 
      Shared:
       CD79A, CD74, EIF2AK1, CXCR4, HLA-DPB1, THRAP3, PTMA, CD83, HLA-DPA1, HLA-DRB1, RPL23A, ID3, RPL18A, HLA-DRA, BAK1, HLA-B, BTG1, B2M, MALAT1, RPL15, HLA-C, RPS27, RPS23, HLA-A, HLA-DQA1, CREM, ACTB, RPS19, RPL13A, RPL11 
      Dataset 2
       CCR7, PLAC8, GBP1, ISG15, CXCL10, RSAD2, SAT1, TYMP, MARCKSL1, VIM, FTH1, UBC, RPL18, FTL, RPL13A 
      Dataset 1:
       CXCR4, THRAP3, RGCC, FTH1, FTL, ISG15, GBP1, S100A10, RSAD2, RPS27A, RPS23, SOD2, SAT1, RPL13 
      Shared:
       GIMAP7, SELL, HIST1H2AC, H2AFZ, NDUFC2, LTB, BIRC3, GPR183, BTG1, TMEM66, EIF1, THRAP3, JUNB, ACAT2, CCR7, RGCC, HSPA8, JTB, CHCHD10, H3F3B, BAK1, UBC, RELB, GADD45B, MALAT1, TMSB4X, EIF2AK1, NPM1, RPS27, TEX264 
      Dataset 2
       GBP1, RSAD2, SAT1, S100A10, RPS27A, RPL13, RPS23, ISG15, SOD2, CXCR4, FTH1, RGCC, FTL, THRAP3 
      Dataset 1:
       MARCKSL1, GBP1, LGALS3, GPX1, RPL10A, HLA-DRA, MS4A7, RPL27A, CD14, RPS27A, SAT1, S100A6, RPLP0, RPS15A, RPS8, RPL7, RPL11, S100A4, RPS27, IL1B, CXCR4, PTMA, RPL15, RPL9, IL8, RPL34, RPS3A, NPM1, HLA-DQA1, RPS6 
      Shared:
       TIMP1, TYROBP, TYMP, FTH1, SAT1, S100A11, MS4A7, FCER1G, S100A6, ANXA5, APOBEC3A, SRGN, C15orf48, CD63, S100A4, CST3, LGALS1, FTL, SOD2, EIF1, FCGR3A, S100A10, ACTB, MARCKSL1, B2M, GAPDH, HLA-C, HLA-B, IFI27, H3F3B 
      Dataset 2
       IDO1, PLAC8, HIST1H2AC, APOBEC3G, ISG15, GBP1, RSAD2, CXCL10, FAM26F, HSPB1, GIMAP7, SAT1, CTSL, CREM, MS4A7, IFI27, CCL2, CCL7, CCL8, CCL3, CCL4, CCR7, CST3, GADD45B, APOBEC3A, APOBEC3B, RPL11, MARCKSL1, RPS8, S100A6 
      Starting online iNMF scenario 1, factorize all datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      ************************************************Total iterations:  30
      Total time:        0 sec
      Objective error:   36760.7
      **|
      splitLabel
          test.1     test.2     test.3     test.4     test.5  control.6  control.7 
              19         19         19         19         19         17         18 
       control.8  control.9 control.10 
              18         18         18 
      splitLabel
      ctrl.1 stim.1 ctrl.2 stim.2 
          65     30     40     49 
      splitLabel
       1.1  1.2  1.3  1.4  1.5  2.6  2.7  2.8  2.9 2.10 
        19   19   19   19   19   17   18   18   18   18 
      splitLabel
      ctrl.1 stim.1 ctrl.2 stim.2 
          65     30     40     49 
      Starting online iNMF scenario 1, factorize all datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Total iterations:  42
      Total time:        0 sec
      Objective error:   59870.2
      INMF started, niter=2
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Total time:      0 sec
      Objective error: 49910.7
      UINMF started, niter=2
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Total time:      0 sec
      Objective error: 4067.63
      UINMF started, niter=2
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Total time:      0 sec
      Objective error: 3885.29
      UINMF started, niter=2
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Total time:      0 sec
      Objective error: 10411.2
      Starting online iNMF scenario 1, factorize all datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      ************************************************Total iterations:  30
      Total time:        0 sec
      Objective error:   44148.9
      **|
      INMF started, niter=2
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Total time:      0 sec
      Objective error: 41084.4
      INMF started, niter=2
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Total time:      0 sec
      Objective error: 46923
      INMF started, niter=2
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Total time:      0 sec
      Objective error: 49807.6
      INMF started, niter=2
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Total time:      0 sec
      Objective error: 50179.7
      INMF started, niter=2
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Total time:      0 sec
      Objective error: 21161.8
      INMF started, niter=2
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Total time:      0 sec
      Objective error: 64643.6
      INMF started, niter=2
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Total time:      0 sec
      Objective error: 64536.5
      Starting online iNMF scenario 1, factorize all datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      ************************************************Total iterations:  30
      Total time:        0 sec
      Objective error:   36760.7
      **|
      Starting online iNMF scenario 2, update factorization with new datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **********************************************Total iterations:  15
      Total time:        0 sec
      Objective error:   53755.9
      ****|
      Starting online iNMF scenario 2, update factorization with new datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **********************************************Total iterations:  15
      Total time:        0 sec
      Objective error:   53755.9
      ****|
      Starting online iNMF scenario 3, project new datasets without updating existing factorization
      Starting online iNMF scenario 1, factorize all datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      ************************************************Total iterations:  30
      Total time:        0 sec
      Objective error:   36760.7
      **|
      INMF started, niter=30
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Total time:      0 sec
      Objective error: 35967.3
      INMF started, niter=30
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Total time:      0 sec
      Objective error: 35967.3
      Starting online iNMF scenario 1, factorize all datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      ************************************************Total iterations:  30
      Total time:        0 sec
      Objective error:   44140.2
      **|
      Working ctrl H5 file path:  /tmp/RtmpSdGgmk/ctrltest_3286578a3d52.h5 
      Working stim H5 file path:  /tmp/RtmpSdGgmk/stimtest_328619d7cf48.h5 
      
      
      
      
      Starting online iNMF scenario 1, factorize all datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      ************************************************Total iterations:  30
      Total time:        0 sec
      Objective error:   44148.9
      **|
      A liger command record, performed at 10-19-2024 13:07:31 EDT 
      Call: normalize.liger(object) 
      Parameters:
          useDatasets : "ctrl", "stim" 
          verbose : TRUE 
      Starting online iNMF scenario 1, factorize all datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      ************************************************Total iterations:  30
      Total time:        0 sec
      Objective error:   44148.9
      **|
      Working ctrl H5 file path:  /tmp/RtmpSdGgmk/ctrltest_32862e97034a.h5 
      Working stim H5 file path:  /tmp/RtmpSdGgmk/stimtest_328626ee4ef4.h5 
      
      
      
      
      
      
      
      
      ==H5SpMat constructed==
      H5File:    /tmp/RtmpSdGgmk/ctrltest_32862e97034a.h5
      colptr path:  /scaleDataSparse/indptr
      rowind path:  /scaleDataSparse/indices
      value path:   /scaleDataSparse/data
      Dimension: 173 x 300
      ==H5SpMat constructed==
      H5File:    /tmp/RtmpSdGgmk/stimtest_328626ee4ef4.h5
      colptr path:  /scaleDataSparse/indptr
      rowind path:  /scaleDataSparse/indices
      value path:   /scaleDataSparse/data
      Dimension: 173 x 300
      Starting online iNMF scenario 1, factorize all datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      ************************************************Total iterations:  30
      Total time:        0 sec
      Objective error:   44148.9
      **|
      An object of class ligerDataset with 300 cells
      Performing log-normalization
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Calculating gene variances
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Calculating feature variances of standardized and clipped values
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      
        |                                                                            
        |                                                                      |   0%
        |                                                                            
        |======================================================================| 100%
      Working ctrl H5 file path:  /tmp/RtmpSdGgmk/ctrltest_32866a2e24fb.h5 
      Working stim H5 file path:  /tmp/RtmpSdGgmk/stimtest_32862f442ae6.h5 
      
      
      [1] "Creating 100 artificial doublets..."
      [1] "Creating Seurat object..."
      [1] "Normalizing Seurat object..."
      Performing log-normalization
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      [1] "Finding variable genes..."
      Calculating gene variances
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Calculating feature variances of standardized and clipped values
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      [1] "Scaling data..."
      
        |                                                                            
        |                                                                      |   0%
        |                                                                            
        |======================================================================| 100%
      [1] "Running PCA..."
      [1] "Calculating PC distance matrix..."
      [1] "Computing pANN..."
      [1] "Classifying doublets.."
      [1] "Creating 100 artificial doublets..."
      [1] "Creating Seurat object..."
      [1] "Normalizing Seurat object..."
      Performing log-normalization
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      [1] "Finding variable genes..."
      Calculating gene variances
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Calculating feature variances of standardized and clipped values
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      [1] "Scaling data..."
      
        |                                                                            
        |                                                                      |   0%
        |                                                                            
        |======================================================================| 100%
      [1] "Running PCA..."
      [1] "Calculating PC distance matrix..."
      [1] "Computing pANN..."
      [1] "Classifying doublets.."
      [1] "Creating 100 artificial doublets..."
      [1] "Creating Seurat object..."
      [1] "Normalizing Seurat object..."
      Performing log-normalization
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      [1] "Finding variable genes..."
      Calculating gene variances
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Calculating feature variances of standardized and clipped values
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      [1] "Scaling data..."
      
        |                                                                            
        |                                                                      |   0%
        |                                                                            
        |======================================================================| 100%
      [1] "Running PCA..."
      [1] "Calculating PC distance matrix..."
      [1] "Computing pANN..."
      [1] "Classifying doublets.."
      [1] "Creating 100 artificial doublets..."
      [1] "Creating Seurat object..."
      [1] "Normalizing Seurat object..."
      Performing log-normalization
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      [1] "Finding variable genes..."
      Calculating gene variances
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      Calculating feature variances of standardized and clipped values
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      **************************************************|
      [1] "Scaling data..."
      
        |                                                                            
        |                                                                      |   0%
        |                                                                            
        |======================================================================| 100%
      [1] "Running PCA..."
      [1] "Calculating PC distance matrix..."
      [1] "Computing pANN..."
      [1] "Classifying doublets.."
      Working ctrl H5 file path:  /tmp/RtmpSdGgmk/ctrltest_32862d6139d3.h5 
      Working stim H5 file path:  /tmp/RtmpSdGgmk/stimtest_328658a0cb36.h5 
      
      
      
      
      Working ctrl H5 file path:  /tmp/RtmpSdGgmk/ctrltest_328641197d3c.h5 
      Working stim H5 file path:  /tmp/RtmpSdGgmk/stimtest_3286261a930d.h5 
      
      
      
      
      
      
      Working ctrl H5 file path:  /tmp/RtmpSdGgmk/ctrltest_3286627583fe.h5 
      Working stim H5 file path:  /tmp/RtmpSdGgmk/stimtest_32862da285cb.h5 
      
      
      
      
      
      
      
      
      
      Starting online iNMF scenario 1, factorize all datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      ************************************************Total iterations:  30
      Total time:        0 sec
      Objective error:   36760.7
      **|
      Working ctrl H5 file path:  /tmp/RtmpSdGgmk/ctrltest_328616f3df68.h5 
      Working stim H5 file path:  /tmp/RtmpSdGgmk/stimtest_32863a3fa5b5.h5 
      
      
      
      
      
      
      
      
      ==H5SpMat constructed==
      H5File:    /tmp/RtmpSdGgmk/ctrltest_328616f3df68.h5
      colptr path:  /scaleDataSparse/indptr
      rowind path:  /scaleDataSparse/indices
      value path:   /scaleDataSparse/data
      Dimension: 173 x 300
      ==H5SpMat constructed==
      H5File:    /tmp/RtmpSdGgmk/stimtest_32863a3fa5b5.h5
      colptr path:  /scaleDataSparse/indptr
      rowind path:  /scaleDataSparse/indices
      value path:   /scaleDataSparse/data
      Dimension: 173 x 300
      Starting online iNMF scenario 1, factorize all datasets
      0%   10   20   30   40   50   60   70   80   90   100%
      [----|----|----|----|----|----|----|----|----|----|
      ************************************************Total iterations:  30
      Total time:        0 sec
      Objective error:   36760.7
      **|
      
      
      
      
      
      
      
      
      
      
      
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 1251 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_visualization.R:179:5'): Proportion plots ──────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─rliger (local) expect_gg(...) at test_visualization.R:179:5
        2. ├─rliger::plotProportion(pbmcPlot, method = "pie") at test_visualization.R:46:5
        3. │ └─rliger::plotProportionPie(...)
        4. │   └─... %>% dplyr::ungroup()
        5. ├─dplyr::ungroup(.)
        6. ├─dplyr::mutate(...)
        7. ├─dplyr::mutate(., proportion = .data[["n"]]/sum(.data[["n"]]))
        8. ├─dplyr::count(., .data[[class1]])
        9. └─dplyr:::count.data.frame(., .data[[class1]])
       10.   └─dplyr:::map_chr(by_exprs, as_string)
       11.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       12.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       13.         └─rlang (local) FUN(X[[i]], ...)
       14.           └─rlang:::abort_coercion(x, "a string")
       15.             └─rlang::abort(msg, call = call)
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 1251 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 11.3Mb
      sub-directories of 1Mb or more:
        R      1.5Mb
        libs   7.9Mb
    ```

# Rmonize

<details>

* Version: 1.1.0
* GitHub: https://github.com/maelstrom-research/Rmonize
* Source code: https://github.com/cran/Rmonize
* Date/Publication: 2024-05-01 16:12:08 UTC
* Number of recursive dependencies: 131

Run `revdepcheck::cloud_details(, "Rmonize")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘Rmonize-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: show_harmo_error
    > ### Title: Print a summary of data processing in the console
    > ### Aliases: show_harmo_error
    > 
    > ### ** Examples
    > 
    > {
    + 
    +   harmonized_dossier <- Rmonize_DEMO$harmonized_dossier
    +   show_harmo_error(harmonized_dossier)
    + 
    + }
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─Rmonize::show_harmo_error(harmonized_dossier)
      2. │ └─... %>% select(-"error", -"warning", -"n.x")
      3. ├─dplyr::select(., -"error", -"warning", -"n.x")
      4. ├─dplyr::rename(., `Total number of algorithms` = "n.y")
      5. ├─dplyr::mutate(., success = paste0(.data$success, " %"))
      6. ├─dplyr::arrange(., .data$success)
      7. ├─dplyr::mutate(...)
      8. ├─dplyr::ungroup(.)
      9. ├─dplyr::full_join(...)
     10. ├─dplyr::count(., .data$`Mlstr_harmo::rule_category`)
     11. └─dplyr:::count.data.frame(., .data$`Mlstr_harmo::rule_category`)
     12.   └─dplyr:::map_chr(by_exprs, as_string)
     13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     15.         └─rlang (local) FUN(X[[i]], ...)
     16.           └─rlang:::abort_coercion(x, "a string")
     17.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 7 marked UTF-8 strings
    ```

# robotoolbox

<details>

* Version: 1.3.2
* GitHub: NA
* Source code: https://github.com/cran/robotoolbox
* Date/Publication: 2023-06-09 14:00:05 UTC
* Number of recursive dependencies: 169

Run `revdepcheck::cloud_details(, "robotoolbox")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘audit-data.Rmd’ using rmarkdown
    --- finished re-building ‘audit-data.Rmd’
    
    --- re-building ‘intro.Rmd’ using rmarkdown
    --- finished re-building ‘intro.Rmd’
    
    --- re-building ‘multilang-forms.Rmd’ using rmarkdown
    
    Quitting from lines 146-147 [val_label_character] (multilang-forms.Rmd)
    Error: processing vignette 'multilang-forms.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘multilang-forms.Rmd’
    
    --- re-building ‘repeat-group-data.Rmd’ using rmarkdown
    --- finished re-building ‘repeat-group-data.Rmd’
    
    --- re-building ‘spatial-data.Rmd’ using rmarkdown
    --- finished re-building ‘spatial-data.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘multilang-forms.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 19 marked UTF-8 strings
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
      installed size is  9.2Mb
      sub-directories of 1Mb or more:
        data      6.5Mb
        extdata   2.4Mb
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 16 marked UTF-8 strings
    ```

# scrutiny

<details>

* Version: 0.5.0
* GitHub: https://github.com/lhdjung/scrutiny
* Source code: https://github.com/cran/scrutiny
* Date/Publication: 2024-09-22 08:10:02 UTC
* Number of recursive dependencies: 86

Run `revdepcheck::cloud_details(, "scrutiny")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘scrutiny-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: duplicate_detect
    > ### Title: Detect duplicate values
    > ### Aliases: duplicate_detect
    > 
    > ### ** Examples
    > 
    > # Find duplicate values in a data frame...
    > duplicate_detect(x = pigs4)
    # A tibble: 5 × 6
      snout snout_dup tail  tail_dup wings wings_dup
      <chr> <lgl>     <chr> <lgl>    <chr> <lgl>    
    1 4.73  FALSE     6.88  FALSE    6.09  FALSE    
    2 8.13  TRUE      7.33  FALSE    8.27  FALSE    
    3 4.22  TRUE      5.17  TRUE     4.40  FALSE    
    4 4.22  TRUE      7.57  FALSE    5.92  FALSE    
    5 5.17  TRUE      8.13  TRUE     5.17  TRUE     
    > 
    > # ...or in a single vector:
    > duplicate_detect(x = pigs4$snout)
    # A tibble: 5 × 2
      value value_dup
      <chr> <lgl>    
    1 4.73  FALSE    
    2 8.13  FALSE    
    3 4.22  TRUE     
    4 4.22  TRUE     
    5 5.17  FALSE    
    > 
    > # Summary statistics with `audit()`:
    > pigs4 %>%
    +   duplicate_detect() %>%
    +   audit()
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─pigs4 %>% duplicate_detect() %>% audit()
      2. ├─scrutiny::audit(.)
      3. ├─scrutiny:::audit.scr_dup_detect(.)
      4. │ └─... %>% ...
      5. ├─dplyr::mutate(., total_count = orig_nrow, dup_rate = .data$dup_count/orig_nrow)
      6. ├─dplyr::rename(., dup_count = n)
      7. ├─dplyr::select(., "term", "n")
      8. ├─dplyr::filter(., .data$value_duplicated)
      9. ├─dplyr::ungroup(.)
     10. ├─dplyr::count(., .data$value_duplicated)
     11. └─dplyr:::count.data.frame(., .data$value_duplicated)
     12.   └─dplyr:::map_chr(by_exprs, as_string)
     13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     15.         └─rlang (local) FUN(X[[i]], ...)
     16.           └─rlang:::abort_coercion(x, "a string")
     17.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

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
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 519 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-method-detect.R:58:3'): `audit()` for `duplicate_detect()` works correctly by default ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─pigs4 %>% duplicate_detect() %>% audit() %>% ... at test-method-detect.R:58:3
        2. ├─testthat::expect_equal(., pigs4_exp)
        3. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        4. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        5. ├─scrutiny::audit(.)
        6. ├─scrutiny:::audit.scr_dup_detect(.)
        7. │ └─... %>% ...
        8. ├─dplyr::mutate(., total_count = orig_nrow, dup_rate = .data$dup_count/orig_nrow)
        9. ├─dplyr::rename(., dup_count = n)
       10. ├─dplyr::select(., "term", "n")
       11. ├─dplyr::filter(., .data$value_duplicated)
       12. ├─dplyr::ungroup(.)
       13. ├─dplyr::count(., .data$value_duplicated)
       14. └─dplyr:::count.data.frame(., .data$value_duplicated)
       15.   └─dplyr:::map_chr(by_exprs, as_string)
       16.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       17.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       18.         └─rlang (local) FUN(X[[i]], ...)
       19.           └─rlang:::abort_coercion(x, "a string")
       20.             └─rlang::abort(msg, call = call)
      ── Error ('test-method-detect.R:64:3'): `audit()` for `duplicate_detect()` works correctly with some values ignored ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─... %>% expect_equal(pigs4_ignore_exp) at test-method-detect.R:64:3
        2. ├─testthat::expect_equal(., pigs4_ignore_exp)
        3. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        4. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        5. ├─scrutiny::audit(.)
        6. ├─scrutiny:::audit.scr_dup_detect(.)
        7. │ └─... %>% ...
        8. ├─dplyr::mutate(., total_count = orig_nrow, dup_rate = .data$dup_count/orig_nrow)
        9. ├─dplyr::rename(., dup_count = n)
       10. ├─dplyr::select(., "term", "n")
       11. ├─dplyr::filter(., .data$value_duplicated)
       12. ├─dplyr::ungroup(.)
       13. ├─dplyr::count(., .data$value_duplicated)
       14. └─dplyr:::count.data.frame(., .data$value_duplicated)
       15.   └─dplyr:::map_chr(by_exprs, as_string)
       16.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       17.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       18.         └─rlang (local) FUN(X[[i]], ...)
       19.           └─rlang:::abort_coercion(x, "a string")
       20.             └─rlang::abort(msg, call = call)
      
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 519 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking Rd cross-references ... NOTE
    ```
    Package unavailable to check Rd xrefs: ‘janitor’
    ```

# secuTrialR

<details>

* Version: 1.3.3
* GitHub: https://github.com/SwissClinicalTrialOrganisation/secuTrialR
* Source code: https://github.com/cran/secuTrialR
* Date/Publication: 2024-05-30 15:20:02 UTC
* Number of recursive dependencies: 84

Run `revdepcheck::cloud_details(, "secuTrialR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘secuTrialR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: form_status_counts
    > ### Title: A function to assess the status of forms
    > ### Aliases: form_status_counts
    > ### Keywords: completeness form status
    > 
    > ### ** Examples
    > 
    > # prepare path to example export
    > export_location <- system.file("extdata", "sT_exports", "snames",
    +                                "s_export_CSV-xls_CTU05_short_ref_miss_en_utf8.zip",
    +                                package = "secuTrialR")
    > # load all export data
    > sT_export <- read_secuTrial(data_dir = export_location)
    Read export successfully.
    The following export options deviate from the suggested specifications:
    Data from hidden fields is part of the export.
    
    > 
    > # get form status
    > form_status_counts(sT_export)
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─secuTrialR::form_status_counts(sT_export)
      2. ├─secuTrialR:::form_status_counts.secuTrialdata(sT_export)
      3. │ ├─base::suppressWarnings(...)
      4. │ │ └─base::withCallingHandlers(...)
      5. │ └─form_status_table %>% ...
      6. ├─dplyr::count(., form_status_table$pat_id, form_status_table$mnpfcs0.factor)
      7. └─dplyr:::count.data.frame(., form_status_table$pat_id, form_status_table$mnpfcs0.factor)
      8.   └─dplyr:::map_chr(by_exprs, as_string)
      9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     11.         └─rlang (local) FUN(X[[i]], ...)
     12.           └─rlang:::abort_coercion(x, "a string")
     13.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘secuTrialR-package-vignette.Rmd’ using rmarkdown
    
    Quitting from lines 371-373 [unnamed-chunk-22] (secuTrialR-package-vignette.Rmd)
    Error: processing vignette 'secuTrialR-package-vignette.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘secuTrialR-package-vignette.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘secuTrialR-package-vignette.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# sleeperapi

<details>

* Version: 1.1.1
* GitHub: NA
* Source code: https://github.com/cran/sleeperapi
* Date/Publication: 2024-06-01 21:00:02 UTC
* Number of recursive dependencies: 94

Run `revdepcheck::cloud_details(, "sleeperapi")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(sleeperapi)
      > 
      > test_check("sleeperapi")
      [1] "NFL data generation successful."
      [1] "NFL data generation successful."
      [ FAIL 2 | WARN 1 | SKIP 0 | PASS 105 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-plot_nfl_player_high_school_state.R:10:3'): good function call returns plotly object ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-plot_nfl_player_high_school_state.R:10:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. └─sleeperapi::plot_nfl_player_high_school_state()
        5.   ├─dplyr::count(player_data, .data$high_school_state)
        6.   └─dplyr:::count.data.frame(player_data, .data$high_school_state)
        7.     └─dplyr:::map_chr(by_exprs, as_string)
        8.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.           └─rlang (local) FUN(X[[i]], ...)
       11.             └─rlang:::abort_coercion(x, "a string")
       12.               └─rlang::abort(msg, call = call)
      ── Error ('test-plot_nfl_top_colleges.R:10:3'): good function call returns plotly object ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-plot_nfl_top_colleges.R:10:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. └─sleeperapi::plot_nfl_top_colleges()
        5.   ├─dplyr::count(player_data_filter, .data$college)
        6.   └─dplyr:::count.data.frame(player_data_filter, .data$college)
        7.     └─dplyr:::map_chr(by_exprs, as_string)
        8.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.           └─rlang (local) FUN(X[[i]], ...)
       11.             └─rlang:::abort_coercion(x, "a string")
       12.               └─rlang::abort(msg, call = call)
      
      [ FAIL 2 | WARN 1 | SKIP 0 | PASS 105 ]
      Error: Test failures
      Execution halted
    ```

# streamDepletr

<details>

* Version: 0.2.0
* GitHub: https://github.com/FoundrySpatial/streamDepletr
* Source code: https://github.com/cran/streamDepletr
* Date/Publication: 2023-07-19 21:30:02 UTC
* Number of recursive dependencies: 70

Run `revdepcheck::cloud_details(, "streamDepletr")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘intro-to-streamDepletr.Rmd’ using rmarkdown
    ```

# text2sdg

<details>

* Version: 1.1.1
* GitHub: https://github.com/dwulff/text2sdg
* Source code: https://github.com/cran/text2sdg
* Date/Publication: 2023-03-17 20:50:02 UTC
* Number of recursive dependencies: 92

Run `revdepcheck::cloud_details(, "text2sdg")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘text2sdg.Rmd’ using rmarkdown
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 37 marked UTF-8 strings
    ```

# tidytext

<details>

* Version: 0.4.2
* GitHub: https://github.com/juliasilge/tidytext
* Source code: https://github.com/cran/tidytext
* Date/Publication: 2024-04-10 12:50:06 UTC
* Number of recursive dependencies: 127

Run `revdepcheck::cloud_details(, "tidytext")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘tf_idf.Rmd’ using rmarkdown
    ```

# timeplyr

<details>

* Version: 0.8.2
* GitHub: https://github.com/NicChr/timeplyr
* Source code: https://github.com/cran/timeplyr
* Date/Publication: 2024-08-17 13:40:02 UTC
* Number of recursive dependencies: 83

Run `revdepcheck::cloud_details(, "timeplyr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(timeplyr)
      > Sys.unsetenv("R_TESTS")
      > # Sys.setenv("OMP_THREAD_LIMIT" = 2)
      > # data.table::setDTthreads(threads = 1L)
      > # collapse::set_collapse(nthreads = 1L)
      > 
      > reset_timeplyr_options()
      > test_check("timeplyr", reporter = c("check", "location"))
      Start test: Expect error
        'test-age_years.R:7:3' [success]
        'test-age_years.R:8:3' [success]
        'test-age_years.R:9:3' [success]
        'test-age_years.R:10:3' [success]
        'test-age_years.R:11:3' [success]
      End test: Expect error
      
      Start test: Expect zero length vector
        'test-age_years.R:19:3' [success]
      End test: Expect zero length vector
      
      Start test: Expect NA
        'test-age_years.R:24:3' [success]
        'test-age_years.R:26:3' [success]
      End test: Expect NA
      
      Start test: Leap year
        'test-age_years.R:36:3' [success]
        'test-age_years.R:37:3' [success]
      End test: Leap year
      
      Start test: bincode
        'test-bin.R:14:3' [success]
        'test-bin.R:18:3' [success]
        'test-bin.R:22:3' [success]
        'test-bin.R:26:3' [success]
        'test-bin.R:30:3' [success]
        'test-bin.R:37:3' [success]
        'test-bin.R:41:3' [success]
        'test-bin.R:45:3' [success]
        'test-bin.R:49:3' [success]
        'test-bin.R:53:3' [success]
        'test-bin.R:63:3' [success]
        'test-bin.R:67:3' [success]
        'test-bin.R:71:3' [success]
        'test-bin.R:75:3' [success]
        'test-bin.R:79:3' [success]
        'test-bin.R:87:3' [success]
        'test-bin.R:91:3' [success]
        'test-bin.R:95:3' [success]
        'test-bin.R:103:3' [success]
        'test-bin.R:107:3' [success]
        'test-bin.R:111:3' [success]
        'test-bin.R:115:3' [success]
        'test-bin.R:119:3' [success]
        'test-bin.R:124:3' [success]
        'test-bin.R:128:3' [success]
        'test-bin.R:132:3' [success]
        'test-bin.R:136:3' [success]
        'test-bin.R:140:3' [success]
        'test-bin.R:148:3' [success]
        'test-bin.R:152:3' [success]
        'test-bin.R:156:3' [success]
        'test-bin.R:160:3' [success]
        'test-bin.R:164:3' [success]
      End test: bincode
      
      Start test: calendar
        'test-calendar.R:15:3' [success]
        'test-calendar.R:18:3' [success]
      End test: calendar
      
      Start test: Test cross-join
        'test-crossed_join.R:11:3' [success]
        'test-crossed_join.R:19:3' [success]
        'test-crossed_join.R:28:3' [success]
        'test-crossed_join.R:37:3' [success]
        'test-crossed_join.R:44:3' [success]
        'test-crossed_join.R:52:3' [success]
      End test: Test cross-join
      
      Start test: Test desc/asc
        'test-desc.R:9:3' [success]
      End test: Test desc/asc
      
      Start test: Compare to dplyr
        'test-df_reconstruct.R:14:3' [success]
        'test-df_reconstruct.R:16:3' [success]
        'test-df_reconstruct.R:18:3' [success]
        'test-df_reconstruct.R:20:3' [success]
        'test-df_reconstruct.R:22:3' [success]
        'test-df_reconstruct.R:28:3' [success]
        'test-df_reconstruct.R:30:3' [success]
        'test-df_reconstruct.R:32:3' [success]
        'test-df_reconstruct.R:34:3' [success]
        'test-df_reconstruct.R:36:3' [success]
        'test-df_reconstruct.R:38:3' [success]
        'test-df_reconstruct.R:40:3' [success]
        'test-df_reconstruct.R:42:3' [success]
        'test-df_reconstruct.R:44:3' [success]
        'test-df_reconstruct.R:50:3' [success]
        'test-df_reconstruct.R:52:3' [success]
      End test: Compare to dplyr
      
      Start test: duplicate_rows
        'test-duplicate_rows.R:19:3' [success]
        'test-duplicate_rows.R:20:3' [success]
        'test-duplicate_rows.R:22:3' [success]
        'test-duplicate_rows.R:30:3' [success]
        'test-duplicate_rows.R:31:3' [success]
        'test-duplicate_rows.R:34:3' [success]
        'test-duplicate_rows.R:37:3' [success]
        'test-duplicate_rows.R:41:3' [success]
        'test-duplicate_rows.R:45:3' [success]
        'test-duplicate_rows.R:49:3' [success]
        'test-duplicate_rows.R:56:3' [success]
      End test: duplicate_rows
      
      Start test: edf
        'test-edf.R:9:1' [success]
        'test-edf.R:10:1' [success]
        'test-edf.R:18:1' [success]
        'test-edf.R:26:1' [success]
        'test-edf.R:35:1' [success]
        'test-edf.R:40:1' [success]
        'test-edf.R:41:1' [success]
        'test-edf.R:48:1' [success]
        'test-edf.R:56:1' [success]
        'test-edf.R:64:1' [success]
        'test-edf.R:67:1' [success]
        'test-edf.R:69:1' [success]
        'test-edf.R:72:1' [success]
      End test: edf
      
      Start test: farrange
        'test-farrange.R:7:3' [success]
        'test-farrange.R:29:3' [success]
        'test-farrange.R:30:3' [success]
        'test-farrange.R:31:3' [success]
      End test: farrange
      
      Start test: Compare to dplyr
        'test-fcount.R:11:3' [success]
        'test-fcount.R:19:3' [success]
        'test-fcount.R:21:3' [success]
        'test-fcount.R:27:3' [success]
        'test-fcount.R:36:3' [success]
        'test-fcount.R:44:3' [success]
        'test-fcount.R:52:3' [error]
      End test: Compare to dplyr
      
      Start test: Compare to dplyr, add_count
        'test-fcount.R:181:3' [success]
        'test-fcount.R:189:3' [success]
        'test-fcount.R:193:3' [success]
        'test-fcount.R:195:3' [success]
        'test-fcount.R:202:3' [success]
        'test-fcount.R:209:3' [success]
        'test-fcount.R:215:3' [success]
        'test-fcount.R:217:3' [success]
        'test-fcount.R:219:3' [success]
        'test-fcount.R:223:3' [success]
        'test-fcount.R:227:3' [success]
        'test-fcount.R:235:3' [success]
        'test-fcount.R:237:3' [success]
        'test-fcount.R:239:3' [success]
        'test-fcount.R:244:3' [success]
        'test-fcount.R:246:3' [success]
        'test-fcount.R:248:3' [success]
        'test-fcount.R:256:3' [success]
        'test-fcount.R:260:3' [success]
        'test-fcount.R:262:3' [success]
        'test-fcount.R:264:3' [success]
        'test-fcount.R:266:3' [success]
        'test-fcount.R:270:3' [success]
        'test-fcount.R:274:3' [success]
        'test-fcount.R:278:3' [success]
        'test-fcount.R:280:3' [success]
      Storing counts in `nn`, as `n` already present in input
      i Use `name = "new_name"` to pick a new name.
        'test-fcount.R:292:3' [success]
      Storing counts in `nn`, as `n` already present in input
      i Use `name = "new_name"` to pick a new name.
        'test-fcount.R:296:3' [success]
      Storing counts in `nn`, as `n` already present in input
      i Use `name = "new_name"` to pick a new name.
        'test-fcount.R:302:3' [success]
      Storing counts in `nn`, as `n` already present in input
      i Use `name = "new_name"` to pick a new name.
        'test-fcount.R:306:3' [success]
        'test-fcount.R:311:3' [success]
      End test: Compare to dplyr, add_count
      
      Start test: fdistinct
        'test-fdistinct.R:8:3' [success]
        'test-fdistinct.R:14:3' [success]
        'test-fdistinct.R:20:3' [success]
        'test-fdistinct.R:27:3' [success]
        'test-fdistinct.R:30:3' [success]
        'test-fdistinct.R:33:3' [success]
        'test-fdistinct.R:37:3' [success]
        'test-fdistinct.R:41:3' [success]
        'test-fdistinct.R:47:3' [success]
        'test-fdistinct.R:53:3' [success]
        'test-fdistinct.R:62:3' [success]
        'test-fdistinct.R:68:3' [success]
        'test-fdistinct.R:76:3' [success]
        'test-fdistinct.R:82:3' [success]
        'test-fdistinct.R:92:3' [success]
      End test: fdistinct
      
      Start test: Compared to tidyr
        'test-fexpand.R:10:3' [success]
        'test-fexpand.R:13:3' [success]
        'test-fexpand.R:17:3' [success]
        'test-fexpand.R:24:3' [success]
        'test-fexpand.R:28:3' [success]
        'test-fexpand.R:32:3' [success]
        'test-fexpand.R:38:3' [success]
        'test-fexpand.R:44:3' [success]
        'test-fexpand.R:50:3' [success]
        'test-fexpand.R:56:3' [success]
        'test-fexpand.R:63:3' [success]
        'test-fexpand.R:93:3' [success]
        'test-fexpand.R:103:3' [success]
        'test-fexpand.R:104:3' [success]
        'test-fexpand.R:108:3' [success]
        'test-fexpand.R:115:3' [success]
        'test-fexpand.R:116:3' [success]
        'test-fexpand.R:118:3' [success]
      End test: Compared to tidyr
      
      Start test: groups
        'test-fgroup_by.R:14:3' [success]
      End test: groups
      
      Start test: Testing frowid
        'test-frowid.R:33:3' [success]
        'test-frowid.R:39:3' [success]
        'test-frowid.R:48:3' [success]
        'test-frowid.R:56:3' [success]
        'test-frowid.R:65:3' [success]
        'test-frowid.R:73:3' [success]
        'test-frowid.R:81:3' [success]
        'test-frowid.R:89:3' [success]
        'test-frowid.R:98:3' [success]
        'test-frowid.R:107:3' [success]
        'test-frowid.R:116:3' [success]
        'test-frowid.R:125:3' [success]
        'test-frowid.R:134:3' [success]
        'test-frowid.R:143:3' [success]
        'test-frowid.R:152:3' [success]
        'test-frowid.R:161:3' [success]
        'test-frowid.R:170:3' [success]
      End test: Testing frowid
      
      Start test: selecting
        'test-fselect.R:2:3' [success]
        'test-fselect.R:4:3' [success]
        'test-fselect.R:6:3' [success]
        'test-fselect.R:8:3' [success]
        'test-fselect.R:10:3' [success]
        'test-fselect.R:12:3' [success]
        'test-fselect.R:13:3' [success]
        'test-fselect.R:15:3' [success]
        'test-fselect.R:16:3' [success]
        'test-fselect.R:19:3' [success]
        'test-fselect.R:21:3' [success]
        'test-fselect.R:24:3' [success]
      Adding missing grouping variables: 'Sepal.Length', 'Species'
      Adding missing grouping variables: `Sepal.Length`, `Species`
        'test-fselect.R:29:3' [success]
      Adding missing grouping variables: 'Sepal.Length', 'Species'
      Adding missing grouping variables: `Sepal.Length`, `Species`
        'test-fselect.R:31:3' [success]
      Adding missing grouping variables: 'Sepal.Length'
      Adding missing grouping variables: `Sepal.Length`
        'test-fselect.R:33:3' [success]
        'test-fselect.R:35:3' [success]
        'test-fselect.R:36:3' [success]
      Adding missing grouping variables: 'Sepal.Length', 'Species'
      Adding missing grouping variables: `Sepal.Length`, `Species`
        'test-fselect.R:39:3' [success]
      Adding missing grouping variables: 'Sepal.Length', 'Species'
      Adding missing grouping variables: `Sepal.Length`, `Species`
        'test-fselect.R:41:3' [success]
        'test-fselect.R:44:3' [success]
        'test-fselect.R:47:3' [success]
      End test: selecting
      
      Start test: renaming
        'test-fselect.R:53:3' [success]
        'test-fselect.R:54:3' [success]
        'test-fselect.R:56:3' [success]
        'test-fselect.R:59:3' [success]
      End test: renaming
      
      Start test: fslice
        'test-fslice.R:11:3' [success]
        'test-fslice.R:13:3' [success]
        'test-fslice.R:17:3' [success]
        'test-fslice.R:23:3' [success]
        'test-fslice.R:28:3' [success]
        'test-fslice.R:32:3' [success]
        'test-fslice.R:38:3' [success]
        'test-fslice.R:45:3' [success]
        'test-fslice.R:50:3' [success]
        'test-fslice.R:54:3' [success]
        'test-fslice.R:59:3' [success]
        'test-fslice.R:66:3' [success]
        'test-fslice.R:72:3' [success]
        'test-fslice.R:79:3' [success]
      End test: fslice
      
      Start test: fslice_head
        'test-fslice.R:93:3' [success]
        'test-fslice.R:95:3' [success]
        'test-fslice.R:99:3' [success]
        'test-fslice.R:105:3' [success]
        'test-fslice.R:110:3' [success]
        'test-fslice.R:114:3' [success]
        'test-fslice.R:120:3' [success]
        'test-fslice.R:128:3' [success]
        'test-fslice.R:133:3' [success]
        'test-fslice.R:137:3' [success]
        'test-fslice.R:143:3' [success]
      End test: fslice_head
      
      Start test: fslice_tail
        'test-fslice.R:159:3' [success]
        'test-fslice.R:161:3' [success]
        'test-fslice.R:165:3' [success]
        'test-fslice.R:171:3' [success]
        'test-fslice.R:176:3' [success]
        'test-fslice.R:180:3' [success]
        'test-fslice.R:186:3' [success]
        'test-fslice.R:194:3' [success]
        'test-fslice.R:199:3' [success]
        'test-fslice.R:203:3' [success]
        'test-fslice.R:209:3' [success]
      End test: fslice_tail
      
      Start test: fslice_sample
        'test-fslice.R:225:3' [success]
        'test-fslice.R:230:3' [success]
        'test-fslice.R:237:3' [success]
        'test-fslice.R:245:3' [success]
        'test-fslice.R:250:3' [success]
        'test-fslice.R:257:3' [success]
        'test-fslice.R:265:3' [success]
        'test-fslice.R:271:3' [success]
        'test-fslice.R:276:3' [success]
        'test-fslice.R:283:3' [success]
      End test: fslice_sample
      
      Start test: fslice_min
        'test-fslice.R:298:3' [success]
        'test-fslice.R:300:3' [success]
        'test-fslice.R:304:3' [success]
        'test-fslice.R:310:3' [success]
        'test-fslice.R:315:3' [success]
        'test-fslice.R:321:3' [success]
        'test-fslice.R:325:3' [success]
        'test-fslice.R:329:3' [success]
        'test-fslice.R:333:3' [success]
        'test-fslice.R:337:3' [success]
        'test-fslice.R:341:3' [success]
        'test-fslice.R:347:3' [success]
        'test-fslice.R:353:3' [success]
        'test-fslice.R:359:3' [success]
        'test-fslice.R:365:3' [success]
        'test-fslice.R:371:3' [success]
        'test-fslice.R:377:3' [success]
        'test-fslice.R:385:3' [success]
        'test-fslice.R:390:3' [success]
        'test-fslice.R:394:3' [success]
        'test-fslice.R:400:3' [success]
      End test: fslice_min
      
      Start test: fslice_max
        'test-fslice.R:415:3' [success]
        'test-fslice.R:417:3' [success]
        'test-fslice.R:421:3' [success]
        'test-fslice.R:427:3' [success]
        'test-fslice.R:432:3' [success]
        'test-fslice.R:438:3' [success]
        'test-fslice.R:442:3' [success]
        'test-fslice.R:446:3' [success]
        'test-fslice.R:450:3' [success]
        'test-fslice.R:454:3' [success]
        'test-fslice.R:458:3' [success]
        'test-fslice.R:464:3' [success]
        'test-fslice.R:470:3' [success]
        'test-fslice.R:476:3' [success]
        'test-fslice.R:482:3' [success]
        'test-fslice.R:488:3' [success]
        'test-fslice.R:494:3' [success]
        'test-fslice.R:502:3' [success]
        'test-fslice.R:507:3' [success]
        'test-fslice.R:511:3' [success]
        'test-fslice.R:517:3' [success]
      End test: fslice_max
      
      Start test: Additional seed tests
        'test-fslice.R:532:3' [success]
        'test-fslice.R:543:3' [success]
        'test-fslice.R:548:3' [success]
        'test-fslice.R:555:3' [success]
        'test-fslice.R:559:3' [success]
      End test: Additional seed tests
      
      Start test: utils mutate
        'test-function_utils.R:7:3' [success]
        'test-function_utils.R:9:3' [success]
        'test-function_utils.R:11:3' [success]
        'test-function_utils.R:13:3' [success]
        'test-function_utils.R:14:3' [success]
        'test-function_utils.R:17:3' [success]
        'test-function_utils.R:20:3' [success]
        'test-function_utils.R:25:3' [success]
        'test-function_utils.R:27:3' [success]
        'test-function_utils.R:30:3' [success]
        'test-function_utils.R:33:3' [success]
      End test: utils mutate
      
      Start test: time delay
        'test-get_time_delay.R:62:3' [success]
        'test-get_time_delay.R:64:3' [success]
        'test-get_time_delay.R:66:3' [success]
        'test-get_time_delay.R:68:3' [success]
        'test-get_time_delay.R:70:3' [success]
        'test-get_time_delay.R:71:3' [success]
        'test-get_time_delay.R:72:3' [success]
        'test-get_time_delay.R:73:3' [success]
        'test-get_time_delay.R:74:3' [success]
        'test-get_time_delay.R:75:3' [success]
        'test-get_time_delay.R:76:3' [success]
        'test-get_time_delay.R:77:3' [success]
        'test-get_time_delay.R:79:3' [success]
        'test-get_time_delay.R:92:3' [success]
        'test-get_time_delay.R:119:3' [success]
        'test-get_time_delay.R:133:3' [success]
        'test-get_time_delay.R:139:3' [success]
        'test-get_time_delay.R:145:3' [success]
        'test-get_time_delay.R:151:3' [success]
        'test-get_time_delay.R:158:3' [success]
        'test-get_time_delay.R:160:3' [success]
        'test-get_time_delay.R:162:3' [success]
        'test-get_time_delay.R:164:3' [success]
      End test: time delay
      
      Start test: Group IDs
        'test-group_id.R:17:3' [success]
        'test-group_id.R:19:3' [success]
        'test-group_id.R:31:3' [success]
        'test-group_id.R:35:3' [success]
        'test-group_id.R:40:3' [success]
        'test-group_id.R:45:3' [success]
        'test-group_id.R:50:3' [success]
        'test-group_id.R:55:3' [success]
        'test-group_id.R:59:3' [success]
        'test-group_id.R:63:3' [success]
        'test-group_id.R:66:3' [success]
        'test-group_id.R:70:3' [success]
        'test-group_id.R:77:3' [success]
        'test-group_id.R:81:3' [success]
        'test-group_id.R:84:3' [success]
        'test-group_id.R:88:3' [success]
        'test-group_id.R:96:3' [success]
        'test-group_id.R:98:3' [success]
        'test-group_id.R:102:3' [success]
        'test-group_id.R:104:3' [success]
        'test-group_id.R:115:3' [success]
        'test-group_id.R:117:3' [success]
        'test-group_id.R:128:3' [success]
        'test-group_id.R:130:3' [success]
        'test-group_id.R:132:3' [success]
        'test-group_id.R:134:3' [success]
        'test-group_id.R:136:3' [success]
        'test-group_id.R:138:3' [success]
        'test-group_id.R:140:3' [success]
        'test-group_id.R:142:3' [success]
        'test-group_id.R:144:3' [success]
        'test-group_id.R:147:3' [success]
        'test-group_id.R:149:3' [success]
        'test-group_id.R:151:3' [success]
      End test: Group IDs
      
      Start test: Adding group IDs
        'test-group_id.R:164:3' [success]
        'test-group_id.R:168:3' [success]
        'test-group_id.R:173:3' [success]
      End test: Adding group IDs
      
      Start test: Group locs
        'test-group_id.R:211:3' [success]
        'test-group_id.R:212:3' [success]
        'test-group_id.R:213:3' [success]
        'test-group_id.R:214:3' [success]
        'test-group_id.R:215:3' [success]
        'test-group_id.R:216:3' [success]
        'test-group_id.R:217:3' [success]
        'test-group_id.R:218:3' [success]
        'test-group_id.R:219:3' [success]
        'test-group_id.R:220:3' [success]
      End test: Group locs
      
      Start test: Row IDs
        'test-group_id.R:244:3' [success]
        'test-group_id.R:246:3' [success]
        'test-group_id.R:249:3' [success]
        'test-group_id.R:250:3' [success]
        'test-group_id.R:251:3' [success]
        'test-group_id.R:252:3' [success]
        'test-group_id.R:254:3' [success]
        'test-group_id.R:261:3' [success]
        'test-group_id.R:270:3' [success]
        'test-group_id.R:280:3' [success]
      End test: Row IDs
      
      Start test: group order
        'test-group_id.R:316:3' [success]
        'test-group_id.R:317:3' [success]
        'test-group_id.R:318:3' [success]
      End test: group order
      
      Start test: factors
        'test-group_id.R:324:3' [success]
      End test: factors
      
      Start test: Normal cases
        'test-growth.R:8:3' [success]
        'test-growth.R:10:3' [success]
        'test-growth.R:12:3' [success]
        'test-growth.R:14:3' [success]
        'test-growth.R:16:3' [success]
        'test-growth.R:18:3' [success]
        'test-growth.R:20:3' [success]
        'test-growth.R:22:3' [success]
        'test-growth.R:29:3' [success]
        'test-growth.R:36:3' [success]
        'test-growth.R:38:3' [success]
        'test-growth.R:40:3' [success]
        'test-growth.R:42:3' [success]
        'test-growth.R:44:3' [success]
        'test-growth.R:48:3' [success]
      End test: Normal cases
      
      Start test: Weights and offsets
        'test-growth.R:73:3' [success]
        'test-growth.R:80:3' [success]
        'test-growth.R:82:3' [success]
        'test-growth.R:85:3' [success]
        'test-growth.R:92:3' [success]
        'test-growth.R:97:3' [success]
        'test-growth.R:122:3' [success]
        'test-growth.R:129:3' [success]
        'test-growth.R:135:3' [success]
        'test-growth.R:137:3' [success]
        'test-growth.R:143:3' [success]
      End test: Weights and offsets
      
      Start test: Normal cases
        'test-growth_rate.R:13:3' [success]
        'test-growth_rate.R:14:3' [success]
        'test-growth_rate.R:15:3' [success]
        'test-growth_rate.R:16:3' [success]
        'test-growth_rate.R:17:3' [success]
        'test-growth_rate.R:18:3' [success]
        'test-growth_rate.R:19:3' [success]
        'test-growth_rate.R:20:3' [success]
        'test-growth_rate.R:21:3' [success]
        'test-growth_rate.R:22:3' [success]
        'test-growth_rate.R:24:3' [success]
        'test-growth_rate.R:25:3' [success]
        'test-growth_rate.R:26:3' [success]
        'test-growth_rate.R:31:3' [success]
        'test-growth_rate.R:33:3' [success]
        'test-growth_rate.R:35:3' [success]
        'test-growth_rate.R:37:3' [success]
        'test-growth_rate.R:39:3' [success]
        'test-growth_rate.R:41:3' [success]
        'test-growth_rate.R:43:3' [success]
        'test-growth_rate.R:54:3' [success]
        'test-growth_rate.R:56:3' [success]
        'test-growth_rate.R:57:3' [success]
        'test-growth_rate.R:67:3' [success]
        'test-growth_rate.R:71:3' [success]
        'test-growth_rate.R:75:3' [success]
      End test: Normal cases
      
      Start test: Test grouped stat functions
        'test-gsum.R:50:1' [success]
        'test-gsum.R:64:1' [success]
        'test-gsum.R:77:1' [success]
        'test-gsum.R:90:1' [success]
        'test-gsum.R:103:1' [success]
        'test-gsum.R:116:1' [success]
        'test-gsum.R:129:1' [success]
        'test-gsum.R:142:1' [success]
        'test-gsum.R:155:1' [success]
        'test-gsum.R:169:1' [success]
        'test-gsum.R:183:1' [success]
        'test-gsum.R:196:1' [success]
        'test-gsum.R:209:1' [success]
        'test-gsum.R:222:1' [success]
        'test-gsum.R:235:1' [success]
        'test-gsum.R:248:1' [success]
        'test-gsum.R:261:1' [success]
      End test: Test grouped stat functions
      
      Start test: Whole numbers
        'test-is_whole_number.R:14:3' [success]
        'test-is_whole_number.R:15:3' [success]
        'test-is_whole_number.R:16:3' [success]
        'test-is_whole_number.R:20:3' [success]
        'test-is_whole_number.R:21:3' [success]
        'test-is_whole_number.R:24:3' [success]
        'test-is_whole_number.R:25:3' [success]
        'test-is_whole_number.R:28:3' [success]
        'test-is_whole_number.R:29:3' [success]
        'test-is_whole_number.R:32:3' [success]
        'test-is_whole_number.R:33:3' [success]
        'test-is_whole_number.R:34:3' [success]
        'test-is_whole_number.R:35:3' [success]
        'test-is_whole_number.R:36:3' [success]
        'test-is_whole_number.R:37:3' [success]
        'test-is_whole_number.R:38:3' [success]
        'test-is_whole_number.R:39:3' [success]
        'test-is_whole_number.R:40:3' [success]
        'test-is_whole_number.R:41:3' [success]
        'test-is_whole_number.R:43:3' [success]
        'test-is_whole_number.R:46:3' [success]
        'test-is_whole_number.R:51:3' [success]
        'test-is_whole_number.R:52:3' [success]
        'test-is_whole_number.R:53:3' [success]
        'test-is_whole_number.R:54:3' [success]
      End test: Whole numbers
      
      Start test: Compare to lubridate
        'test-iso_week.R:39:3' [success]
        'test-iso_week.R:42:3' [success]
        'test-iso_week.R:45:3' [success]
        'test-iso_week.R:47:3' [success]
        'test-iso_week.R:49:3' [success]
        'test-iso_week.R:51:3' [success]
      End test: Compare to lubridate
      
      Start test: grouped quantile tests
        'test-q_summarise.R:9:3' [success]
        'test-q_summarise.R:11:3' [success]
        'test-q_summarise.R:15:3' [success]
        'test-q_summarise.R:20:3' [success]
        'test-q_summarise.R:38:3' [success]
        'test-q_summarise.R:51:3' [success]
        'test-q_summarise.R:66:3' [success]
        'test-q_summarise.R:76:3' [success]
      End test: grouped quantile tests
      
      Start test: Lags
        'test-roll_lag.R:13:3' [success]
        'test-roll_lag.R:14:3' [success]
        'test-roll_lag.R:15:3' [success]
        'test-roll_lag.R:16:3' [success]
        'test-roll_lag.R:17:3' [success]
        'test-roll_lag.R:19:3' [success]
        'test-roll_lag.R:20:3' [success]
        'test-roll_lag.R:21:3' [success]
        'test-roll_lag.R:22:3' [success]
        'test-roll_lag.R:23:3' [success]
        'test-roll_lag.R:25:3' [success]
        'test-roll_lag.R:26:3' [success]
        'test-roll_lag.R:27:3' [success]
        'test-roll_lag.R:28:3' [success]
        'test-roll_lag.R:29:3' [success]
        'test-roll_lag.R:31:3' [success]
        'test-roll_lag.R:32:3' [success]
        'test-roll_lag.R:33:3' [success]
        'test-roll_lag.R:34:3' [success]
        'test-roll_lag.R:35:3' [success]
        'test-roll_lag.R:37:3' [success]
        'test-roll_lag.R:38:3' [success]
        'test-roll_lag.R:39:3' [success]
        'test-roll_lag.R:40:3' [success]
        'test-roll_lag.R:41:3' [success]
        'test-roll_lag.R:43:3' [success]
        'test-roll_lag.R:44:3' [success]
        'test-roll_lag.R:45:3' [success]
        'test-roll_lag.R:46:3' [success]
        'test-roll_lag.R:47:3' [success]
      End test: Lags
      
      Start test: Grouped lags
        'test-roll_lag.R:95:3' [success]
        'test-roll_lag.R:96:3' [success]
        'test-roll_lag.R:97:3' [success]
        'test-roll_lag.R:98:3' [success]
        'test-roll_lag.R:99:3' [success]
        'test-roll_lag.R:100:3' [success]
        'test-roll_lag.R:102:3' [success]
        'test-roll_lag.R:103:3' [success]
        'test-roll_lag.R:104:3' [success]
        'test-roll_lag.R:105:3' [success]
        'test-roll_lag.R:106:3' [success]
        'test-roll_lag.R:107:3' [success]
        'test-roll_lag.R:109:3' [success]
        'test-roll_lag.R:110:3' [success]
        'test-roll_lag.R:111:3' [success]
        'test-roll_lag.R:112:3' [success]
        'test-roll_lag.R:113:3' [success]
        'test-roll_lag.R:114:3' [success]
        'test-roll_lag.R:117:3' [success]
        'test-roll_lag.R:118:3' [success]
        'test-roll_lag.R:119:3' [success]
        'test-roll_lag.R:120:3' [success]
        'test-roll_lag.R:121:3' [success]
        'test-roll_lag.R:122:3' [success]
        'test-roll_lag.R:124:3' [success]
        'test-roll_lag.R:125:3' [success]
        'test-roll_lag.R:126:3' [success]
        'test-roll_lag.R:127:3' [success]
        'test-roll_lag.R:128:3' [success]
        'test-roll_lag.R:129:3' [success]
        'test-roll_lag.R:131:3' [success]
        'test-roll_lag.R:132:3' [success]
        'test-roll_lag.R:133:3' [success]
        'test-roll_lag.R:134:3' [success]
        'test-roll_lag.R:135:3' [success]
        'test-roll_lag.R:136:3' [success]
        'test-roll_lag.R:148:3' [success]
        'test-roll_lag.R:150:3' [success]
        'test-roll_lag.R:151:3' [success]
        'test-roll_lag.R:153:3' [success]
        'test-roll_lag.R:156:3' [success]
        'test-roll_lag.R:158:3' [success]
        'test-roll_lag.R:159:3' [success]
        'test-roll_lag.R:161:3' [success]
      End test: Grouped lags
      
      Start test: More complicated diff tests
        'test-roll_lag.R:191:3' [success]
        'test-roll_lag.R:195:3' [success]
        'test-roll_lag.R:199:3' [success]
        'test-roll_lag.R:205:3' [success]
        'test-roll_lag.R:209:3' [success]
        'test-roll_lag.R:213:3' [success]
        'test-roll_lag.R:219:3' [success]
        'test-roll_lag.R:223:3' [success]
        'test-roll_lag.R:227:3' [success]
        'test-roll_lag.R:233:3' [success]
        'test-roll_lag.R:234:3' [success]
        'test-roll_lag.R:235:3' [success]
        'test-roll_lag.R:238:3' [success]
        'test-roll_lag.R:239:3' [success]
        'test-roll_lag.R:240:3' [success]
        'test-roll_lag.R:243:3' [success]
        'test-roll_lag.R:249:3' [success]
        'test-roll_lag.R:255:3' [success]
        'test-roll_lag.R:263:3' [success]
        'test-roll_lag.R:269:3' [success]
        'test-roll_lag.R:275:3' [success]
        'test-roll_lag.R:283:3' [success]
        'test-roll_lag.R:289:3' [success]
        'test-roll_lag.R:295:3' [success]
        'test-roll_lag.R:303:3' [success]
        'test-roll_lag.R:309:3' [success]
        'test-roll_lag.R:315:3' [success]
        'test-roll_lag.R:323:3' [success]
        'test-roll_lag.R:329:3' [success]
        'test-roll_lag.R:335:3' [success]
        'test-roll_lag.R:343:3' [success]
        'test-roll_lag.R:349:3' [success]
        'test-roll_lag.R:355:3' [success]
      End test: More complicated diff tests
      
      Start test: Expect error
        'test-roll_mean.R:7:3' [success]
        'test-roll_mean.R:8:3' [success]
      End test: Expect error
      
      Start test: Expect NA
        'test-roll_mean.R:14:3' [success]
        'test-roll_mean.R:16:3' [success]
      End test: Expect NA
      
      Start test: Expected outputs
        'test-roll_mean.R:22:3' [success]
        'test-roll_mean.R:24:3' [success]
        'test-roll_mean.R:26:3' [success]
        'test-roll_mean.R:28:3' [success]
        'test-roll_mean.R:30:3' [success]
        'test-roll_mean.R:32:3' [success]
        'test-roll_mean.R:35:3' [success]
        'test-roll_mean.R:37:3' [success]
        'test-roll_mean.R:39:3' [success]
        'test-roll_mean.R:41:3' [success]
      End test: Expected outputs
      
      Start test: simple tests
        'test-roll_mean.R:163:3' [success]
        'test-roll_mean.R:168:3' [success]
      End test: simple tests
      
      Start test: NA fill
        'test-roll_na_fill.R:20:3' [success]
        'test-roll_na_fill.R:24:3' [success]
        'test-roll_na_fill.R:28:3' [success]
        'test-roll_na_fill.R:32:3' [success]
        'test-roll_na_fill.R:41:3' [success]
        'test-roll_na_fill.R:50:3' [success]
        'test-roll_na_fill.R:59:3' [success]
        'test-roll_na_fill.R:68:3' [success]
        'test-roll_na_fill.R:77:3' [success]
        'test-roll_na_fill.R:88:3' [success]
        'test-roll_na_fill.R:97:3' [success]
      End test: NA fill
      
      Start test: extra tests
        'test-roll_na_fill.R:122:3' [success]
      End test: extra tests
      
      Start test: stat_summarise
      The below stat functions are available for use in stat_summarise
      n
      nmiss
      ndistinct
      min
      max
      mean
      median
      sd
      var
      mode
      first
      last
      sum
      prop_complete
      This message is displayed once per session.
        'test-stat_summarise.R:32:3' [success]
        'test-stat_summarise.R:34:3' [success]
        'test-stat_summarise.R:36:3' [success]
        'test-stat_summarise.R:38:3' [success]
        'test-stat_summarise.R:45:3' [success]
        'test-stat_summarise.R:52:3' [success]
        'test-stat_summarise.R:59:3' [success]
        'test-stat_summarise.R:68:3' [success]
        'test-stat_summarise.R:72:3' [success]
        'test-stat_summarise.R:76:3' [success]
        'test-stat_summarise.R:80:3' [success]
        'test-stat_summarise.R:84:3' [success]
        'test-stat_summarise.R:88:3' [success]
        'test-stat_summarise.R:92:3' [success]
        'test-stat_summarise.R:105:3' [success]
        'test-stat_summarise.R:113:3' [success]
        'test-stat_summarise.R:121:3' [success]
        'test-stat_summarise.R:128:3' [success]
        'test-stat_summarise.R:135:3' [success]
        'test-stat_summarise.R:142:3' [success]
        'test-stat_summarise.R:149:3' [success]
        'test-stat_summarise.R:158:3' [success]
        'test-stat_summarise.R:167:3' [success]
        'test-stat_summarise.R:176:3' [success]
      End test: stat_summarise
      
      Start test: time_by
        'test-time_by.R:23:3' [skip]
      End test: time_by
      
      Start test: Tests for time_countv2
        'test-time_core.R:38:3' [success]
      Assuming a time granularity of 1 hour(s)
      Assuming a time granularity of 1 hour(s)
        'test-time_core.R:43:3' [success]
      Assuming a time granularity of 1 hour(s)
      Assuming a time granularity of 1 hour(s)
        'test-time_core.R:51:3' [success]
        'test-time_core.R:60:3' [success]
        'test-time_core.R:75:3' [success]
        'test-time_core.R:90:3' [success]
        'test-time_core.R:104:3' [success]
      End test: Tests for time_countv2
      
      Start test: Tests for time_span
      Assuming a time granularity of 1 hour(s)
        'test-time_core.R:169:3' [success]
      Assuming a time granularity of 1 day(s)
        'test-time_core.R:171:3' [success]
      Assuming a time granularity of 1 hour(s)
        'test-time_core.R:173:3' [success]
      Assuming a time granularity of 1 hour(s)
        'test-time_core.R:178:3' [success]
        'test-time_core.R:184:3' [success]
        'test-time_core.R:192:3' [success]
      End test: Tests for time_span
      
      Start test: Tests for time_completev
        'test-time_core.R:213:3' [success]
        'test-time_core.R:215:3' [success]
      End test: Tests for time_completev
      
      Start test: Tests for time_summarisev
        'test-time_core.R:230:3' [success]
        'test-time_core.R:233:3' [success]
        'test-time_core.R:236:3' [success]
        'test-time_core.R:239:3' [success]
        'test-time_core.R:243:3' [success]
      End test: Tests for time_summarisev
      
      Start test: time breaks
        'test-time_cut.R:26:3' [success]
        'test-time_cut.R:27:3' [success]
        'test-time_cut.R:29:3' [success]
        'test-time_cut.R:33:3' [success]
        'test-time_cut.R:42:3' [success]
        'test-time_cut.R:48:3' [success]
        'test-time_cut.R:52:3' [success]
        'test-time_cut.R:56:3' [success]
      End test: time breaks
      
      Start test: time cut
        'test-time_cut.R:73:3' [success]
        'test-time_cut.R:77:3' [success]
        'test-time_cut.R:81:3' [success]
        'test-time_cut.R:86:3' [success]
        'test-time_cut.R:92:3' [success]
        'test-time_cut.R:93:3' [success]
        'test-time_cut.R:94:3' [success]
        'test-time_cut.R:95:3' [success]
        'test-time_cut.R:96:3' [success]
        'test-time_cut.R:98:3' [success]
        'test-time_cut.R:100:3' [success]
      End test: time cut
      
      Start test: time diff
        'test-time_diff.R:11:3' [success]
        'test-time_diff.R:13:3' [success]
        'test-time_diff.R:17:3' [success]
        'test-time_diff.R:23:3' [success]
        'test-time_diff.R:25:3' [success]
        'test-time_diff.R:27:3' [success]
        'test-time_diff.R:28:3' [success]
        'test-time_diff.R:29:3' [success]
        'test-time_diff.R:32:3' [success]
        'test-time_diff.R:34:3' [success]
        'test-time_diff.R:36:3' [success]
        'test-time_diff.R:39:3' [success]
        'test-time_diff.R:42:3' [success]
        'test-time_diff.R:45:3' [success]
        'test-time_diff.R:48:3' [success]
        'test-time_diff.R:51:3' [success]
        'test-time_diff.R:54:3' [success]
        'test-time_diff.R:60:5' [success]
        'test-time_diff.R:60:5' [success]
        'test-time_diff.R:60:5' [success]
        'test-time_diff.R:60:5' [success]
        'test-time_diff.R:60:5' [success]
        'test-time_diff.R:60:5' [success]
        'test-time_diff.R:60:5' [success]
        'test-time_diff.R:60:5' [success]
        'test-time_diff.R:60:5' [success]
        'test-time_diff.R:60:5' [success]
        'test-time_diff.R:60:5' [success]
        'test-time_diff.R:83:3' [success]
        'test-time_diff.R:87:3' [success]
        'test-time_diff.R:90:3' [success]
        'test-time_diff.R:93:3' [success]
        'test-time_diff.R:106:3' [success]
        'test-time_diff.R:117:3' [success]
        'test-time_diff.R:128:3' [success]
      End test: time diff
      
      Start test: lubridate period multiplication
        'test-time_diff.R:133:3' [success]
        'test-time_diff.R:137:3' [success]
        'test-time_diff.R:141:3' [success]
        'test-time_diff.R:145:3' [success]
        'test-time_diff.R:149:3' [success]
        'test-time_diff.R:153:3' [success]
      End test: lubridate period multiplication
      
      Start test: Time elapsed
        'test-time_elapsed.R:9:3' [success]
        'test-time_elapsed.R:15:3' [success]
        'test-time_elapsed.R:27:3' [success]
        'test-time_elapsed.R:32:3' [success]
        'test-time_elapsed.R:37:3' [success]
        'test-time_elapsed.R:42:3' [success]
        'test-time_elapsed.R:47:3' [success]
        'test-time_elapsed.R:55:3' [success]
        'test-time_elapsed.R:64:3' [success]
        'test-time_elapsed.R:75:3' [success]
        'test-time_elapsed.R:86:3' [success]
        'test-time_elapsed.R:98:3' [success]
        'test-time_elapsed.R:110:3' [success]
      End test: Time elapsed
      
      Start test: Testing time episodes
        'test-time_episodes.R:23:3' [success]
        'test-time_episodes.R:24:3' [success]
        'test-time_episodes.R:406:3' [success]
      Assuming a time granularity of 1 hour(s)
        'test-time_episodes.R:414:3' [success]
        'test-time_episodes.R:425:3' [success]
        'test-time_episodes.R:437:3' [success]
        'test-time_episodes.R:444:3' [success]
        'test-time_episodes.R:451:3' [success]
        'test-time_episodes.R:459:3' [success]
        'test-time_episodes.R:467:3' [success]
        'test-time_episodes.R:475:3' [success]
        'test-time_episodes.R:483:3' [success]
        'test-time_episodes.R:492:3' [success]
        'test-time_episodes.R:502:3' [success]
        'test-time_episodes.R:510:3' [success]
        'test-time_episodes.R:518:3' [success]
        'test-time_episodes.R:527:3' [success]
        'test-time_episodes.R:538:3' [success]
        'test-time_episodes.R:545:3' [success]
        'test-time_episodes.R:552:3' [success]
        'test-time_episodes.R:559:3' [success]
        'test-time_episodes.R:566:3' [success]
      Assuming a time granularity of 1 numeric unit(s)
        'test-time_episodes.R:597:3' [success]
      Assuming a time granularity of 1 numeric unit(s)
        'test-time_episodes.R:612:3' [success]
      End test: Testing time episodes
      
      Start test: Simple episodic tests
        'test-time_episodes.R:628:3' [skip]
      End test: Simple episodic tests
      
      Start test: time expand
        'test-time_expand.R:31:3' [success]
      Assuming a time granularity of 1 hour(s)
        'test-time_expand.R:39:3' [success]
        'test-time_expand.R:47:3' [success]
        'test-time_expand.R:58:3' [success]
        'test-time_expand.R:73:3' [success]
        'test-time_expand.R:82:3' [success]
        'test-time_expand.R:92:3' [success]
        'test-time_expand.R:106:3' [success]
        'test-time_expand.R:117:3' [success]
        'test-time_expand.R:130:3' [success]
        'test-time_expand.R:144:3' [success]
        'test-time_expand.R:176:3' [success]
        'test-time_expand.R:180:3' [success]
        'test-time_expand.R:187:3' [success]
        'test-time_expand.R:195:3' [success]
        'test-time_expand.R:203:3' [success]
      Assuming a time granularity of 1 hour(s)
        'test-time_expand.R:212:3' [success]
        'test-time_expand.R:219:3' [success]
        'test-time_expand.R:227:3' [success]
        'test-time_expand.R:239:3' [success]
      End test: time expand
      
      Start test: time gaps
      Assuming a time granularity of 1 numeric unit(s)
        'test-time_gaps.R:10:3' [success]
        'test-time_gaps.R:11:3' [success]
        'test-time_gaps.R:12:3' [success]
        'test-time_gaps.R:13:3' [success]
        'test-time_gaps.R:14:3' [success]
        'test-time_gaps.R:15:3' [success]
      Assuming a time granularity of 1 day(s)
        'test-time_gaps.R:17:3' [success]
        'test-time_gaps.R:19:3' [success]
        'test-time_gaps.R:23:3' [success]
        'test-time_gaps.R:24:3' [success]
        'test-time_gaps.R:25:3' [success]
        'test-time_gaps.R:26:3' [success]
      End test: time gaps
      
      Start test: time regularity
        'test-time_is_regular.R:13:3' [success]
        'test-time_is_regular.R:14:3' [success]
        'test-time_is_regular.R:15:3' [success]
        'test-time_is_regular.R:16:3' [success]
        'test-time_is_regular.R:20:3' [success]
        'test-time_is_regular.R:21:3' [success]
        'test-time_is_regular.R:23:3' [success]
        'test-time_is_regular.R:25:3' [success]
        'test-time_is_regular.R:31:3' [success]
        'test-time_is_regular.R:32:3' [success]
        'test-time_is_regular.R:33:3' [success]
        'test-time_is_regular.R:34:3' [success]
        'test-time_is_regular.R:38:3' [success]
        'test-time_is_regular.R:51:3' [success]
        'test-time_is_regular.R:52:3' [success]
        'test-time_is_regular.R:53:3' [success]
        'test-time_is_regular.R:54:3' [success]
        'test-time_is_regular.R:55:3' [success]
        'test-time_is_regular.R:56:3' [success]
        'test-time_is_regular.R:58:3' [success]
        'test-time_is_regular.R:60:3' [success]
        'test-time_is_regular.R:64:3' [success]
        'test-time_is_regular.R:65:3' [success]
        'test-time_is_regular.R:66:3' [success]
        'test-time_is_regular.R:67:3' [success]
      End test: time regularity
      
      Start test: time_roll
        'test-time_roll.R:23:5' [skip]
      End test: time_roll
      
      Start test: Dates
        'test-time_seq.R:12:3' [success]
        'test-time_seq.R:13:3' [success]
        'test-time_seq.R:15:3' [success]
        'test-time_seq.R:17:3' [success]
        'test-time_seq.R:24:3' [success]
        'test-time_seq.R:29:3' [success]
        'test-time_seq.R:31:3' [success]
        'test-time_seq.R:33:3' [success]
        'test-time_seq.R:35:3' [success]
        'test-time_seq.R:36:3' [success]
        'test-time_seq.R:37:3' [success]
        'test-time_seq.R:39:3' [success]
        'test-time_seq.R:41:3' [success]
        'test-time_seq.R:43:3' [success]
        'test-time_seq.R:47:3' [success]
        'test-time_seq.R:51:3' [success]
        'test-time_seq.R:54:3' [success]
        'test-time_seq.R:56:3' [success]
        'test-time_seq.R:58:3' [success]
        'test-time_seq.R:61:3' [success]
        'test-time_seq.R:69:3' [success]
        'test-time_seq.R:71:3' [success]
        'test-time_seq.R:73:3' [success]
        'test-time_seq.R:75:3' [success]
        'test-time_seq.R:77:3' [success]
        'test-time_seq.R:81:3' [success]
        'test-time_seq.R:83:3' [success]
        'test-time_seq.R:85:3' [success]
        'test-time_seq.R:87:3' [success]
        'test-time_seq.R:89:3' [success]
        'test-time_seq.R:92:3' [success]
        'test-time_seq.R:93:3' [success]
        'test-time_seq.R:95:3' [success]
        'test-time_seq.R:96:3' [success]
        'test-time_seq.R:97:3' [success]
        'test-time_seq.R:98:3' [success]
        'test-time_seq.R:99:3' [success]
        'test-time_seq.R:101:3' [success]
        'test-time_seq.R:102:3' [success]
        'test-time_seq.R:103:3' [success]
        'test-time_seq.R:105:3' [success]
        'test-time_seq.R:110:3' [success]
        'test-time_seq.R:112:3' [success]
        'test-time_seq.R:115:3' [success]
        'test-time_seq.R:116:3' [success]
        'test-time_seq.R:122:3' [success]
        'test-time_seq.R:126:3' [success]
        'test-time_seq.R:128:3' [success]
        'test-time_seq.R:131:3' [success]
      End test: Dates
      
      Start test: Datetimes
        'test-time_seq.R:141:3' [success]
        'test-time_seq.R:143:3' [success]
        'test-time_seq.R:145:3' [success]
        'test-time_seq.R:148:3' [success]
        'test-time_seq.R:150:3' [success]
        'test-time_seq.R:159:3' [success]
        'test-time_seq.R:168:3' [success]
        'test-time_seq.R:178:3' [success]
        'test-time_seq.R:183:3' [success]
        'test-time_seq.R:185:3' [success]
        'test-time_seq.R:188:3' [success]
        'test-time_seq.R:191:3' [success]
        'test-time_seq.R:192:3' [success]
        'test-time_seq.R:194:3' [success]
        'test-time_seq.R:196:3' [success]
        'test-time_seq.R:198:3' [success]
        'test-time_seq.R:200:3' [success]
        'test-time_seq.R:202:3' [success]
        'test-time_seq.R:210:3' [success]
        'test-time_seq.R:211:3' [success]
        'test-time_seq.R:213:3' [success]
        'test-time_seq.R:215:3' [success]
        'test-time_seq.R:219:3' [success]
        'test-time_seq.R:222:3' [success]
        'test-time_seq.R:226:3' [success]
        'test-time_seq.R:229:3' [success]
        'test-time_seq.R:232:3' [success]
        'test-time_seq.R:235:3' [success]
        'test-time_seq.R:243:3' [success]
        'test-time_seq.R:245:3' [success]
        'test-time_seq.R:247:3' [success]
        'test-time_seq.R:249:3' [success]
        'test-time_seq.R:251:3' [success]
        'test-time_seq.R:255:3' [success]
        'test-time_seq.R:257:3' [success]
        'test-time_seq.R:259:3' [success]
        'test-time_seq.R:261:3' [success]
        'test-time_seq.R:263:3' [success]
        'test-time_seq.R:266:3' [success]
        'test-time_seq.R:267:3' [success]
        'test-time_seq.R:269:3' [success]
        'test-time_seq.R:270:3' [success]
        'test-time_seq.R:271:3' [success]
        'test-time_seq.R:272:3' [success]
        'test-time_seq.R:273:3' [success]
        'test-time_seq.R:277:3' [success]
        'test-time_seq.R:279:3' [success]
        'test-time_seq.R:286:3' [success]
        'test-time_seq.R:290:3' [success]
        'test-time_seq.R:292:3' [success]
        'test-time_seq.R:294:3' [success]
        'test-time_seq.R:302:3' [success]
        'test-time_seq.R:303:3' [success]
      End test: Datetimes
      
      Start test: Time sequence lengths
        'test-time_seq.R:314:3' [success]
        'test-time_seq.R:316:3' [success]
        'test-time_seq.R:318:3' [success]
        'test-time_seq.R:320:3' [success]
        'test-time_seq.R:322:3' [success]
        'test-time_seq.R:324:3' [success]
        'test-time_seq.R:326:3' [success]
        'test-time_seq.R:328:3' [success]
        'test-time_seq.R:330:3' [success]
        'test-time_seq.R:332:3' [success]
        'test-time_seq.R:334:3' [success]
      End test: Time sequence lengths
      
      Start test: Vectorised time sequences
        'test-time_seq.R:342:3' [success]
        'test-time_seq.R:344:3' [success]
        'test-time_seq.R:346:3' [success]
        'test-time_seq.R:348:3' [success]
        'test-time_seq.R:350:3' [success]
        'test-time_seq.R:352:3' [success]
        'test-time_seq.R:354:3' [success]
        'test-time_seq.R:356:3' [success]
        'test-time_seq.R:358:3' [success]
        'test-time_seq.R:360:3' [success]
        'test-time_seq.R:362:3' [success]
        'test-time_seq.R:364:3' [success]
        'test-time_seq.R:367:3' [success]
        'test-time_seq.R:370:3' [success]
      End test: Vectorised time sequences
      
      Start test: ftseq compared to time_seq
        'test-time_seq.R:379:3' [success]
        'test-time_seq.R:381:3' [success]
        'test-time_seq.R:384:3' [success]
        'test-time_seq.R:386:3' [success]
      End test: ftseq compared to time_seq
      
      Start test: dates, datetimes and numeric increments
        'test-time_seq.R:397:3' [success]
        'test-time_seq.R:401:3' [success]
        'test-time_seq.R:405:3' [success]
        'test-time_seq.R:409:3' [success]
      End test: dates, datetimes and numeric increments
      
      Start test: Time sequence IDs
        'test-time_seq_id.R:9:3' [success]
        'test-time_seq_id.R:13:3' [success]
      Assuming a time granularity of 0.1 numeric unit(s)
        'test-time_seq_id.R:31:3' [success]
        'test-time_seq_id.R:45:3' [success]
        'test-time_seq_id.R:54:3' [success]
        'test-time_seq_id.R:85:3' [success]
        'test-time_seq_id.R:86:3' [success]
      End test: Time sequence IDs
      
      Start test: Floating point errors
        'test-time_seq_id.R:90:3' [success]
        'test-time_seq_id.R:91:3' [success]
      End test: Floating point errors
      
      Start test: univariate
        'test-ts_as_tibble.R:10:3' [success]
        'test-ts_as_tibble.R:17:3' [success]
      End test: univariate
      
      Start test: multivariate
        'test-ts_as_tibble.R:27:3' [success]
        'test-ts_as_tibble.R:35:3' [success]
      End test: multivariate
      
      Start test: xts
        'test-ts_as_tibble.R:261:3' [success]
        'test-ts_as_tibble.R:271:3' [success]
      End test: xts
      
      Start test: zoo
        'test-ts_as_tibble.R:286:3' [success]
        'test-ts_as_tibble.R:295:3' [success]
        'test-ts_as_tibble.R:304:3' [success]
        'test-ts_as_tibble.R:314:3' [success]
        'test-ts_as_tibble.R:321:3' [success]
        'test-ts_as_tibble.R:331:3' [success]
        'test-ts_as_tibble.R:344:3' [success]
        'test-ts_as_tibble.R:354:3' [success]
      End test: zoo
      
      Start test: unit_guess
        'test-unit_guess.R:8:3' [success]
        'test-unit_guess.R:12:3' [success]
        'test-unit_guess.R:18:3' [success]
        'test-unit_guess.R:22:3' [success]
        'test-unit_guess.R:27:3' [success]
        'test-unit_guess.R:31:3' [success]
        'test-unit_guess.R:47:3' [success]
        'test-unit_guess.R:51:3' [success]
        'test-unit_guess.R:57:3' [success]
        'test-unit_guess.R:62:3' [success]
        'test-unit_guess.R:66:3' [success]
        'test-unit_guess.R:72:3' [success]
        'test-unit_guess.R:76:3' [success]
      End test: unit_guess
      
      [ FAIL 1 | WARN 0 | SKIP 3 | PASS 1009 ]
      
      ══ Skipped tests (3) ═══════════════════════════════════════════════════════════
      • On CRAN (3): 'test-time_by.R:23:3', 'test-time_episodes.R:628:3',
        'test-time_roll.R:23:5'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-fcount.R:52:3'): Compare to dplyr ──────────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(...) at test-fcount.R:52:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─iris %>% dplyr::group_by(Species) %>% ...
        5. ├─dplyr::count(., across(all_of("Species")))
        6. └─dplyr:::count.data.frame(., across(all_of("Species")))
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      
      [ FAIL 1 | WARN 0 | SKIP 3 | PASS 1009 ]
      Error: Test failures
      Execution halted
    ```

# tinyscholar

<details>

* Version: 0.1.7
* GitHub: https://github.com/ShixiangWang/tinyscholar
* Source code: https://github.com/cran/tinyscholar
* Date/Publication: 2022-08-09 15:30:02 UTC
* Number of recursive dependencies: 87

Run `revdepcheck::cloud_details(, "tinyscholar")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘tinyscholar-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: tinyscholar
    > ### Title: Get Google Scholar Profile
    > ### Aliases: tinyscholar
    > 
    > ### ** Examples
    > 
    > # Put one unique Scholar ID from Google Scholar
    > r <- tinyscholar("FvNp0NkAAAAJ")
    Using cache directory: /tmp/RtmpSWPNPy/tinyscholar
    Cannot find cache file /tmp/RtmpSWPNPy/tinyscholar/unsorted_2024-10-19_FvNp0NkAAAAJ.rds
    Try quering data from server: hiplot
    Save data to cache file /tmp/RtmpSWPNPy/tinyscholar/unsorted_2024-10-19_FvNp0NkAAAAJ.rds
    Done
    > r
    $publications
                                                                                                                                            title
    1                                                   Antigen presentation and tumor immunogenicity in cancer immunotherapy response prediction
    2           APOBEC3B and APOBEC mutational signature as potential predictive markers for immunotherapy response in non-small cell lung cancer
    3                            Hiplot: a comprehensive and easy-to-use web service for boosting publication-ready biomedical data visualization
    4                                                      Sex Differences in Cancer Immunotherapy Efficacy, Biomarkers, and Therapeutic Strategy
    5                                                                 UCSCXenaShiny: an R/CRAN package for interactive analysis of UCSC Xena data
    6      Copy number signature analysis tool and its application in prostate cancer reveals distinct mutational processes and clinical outcomes
    7                        The predictive power of tumor mutational burden in lung cancer immunotherapy response is influenced by patients' sex
    8  The UCSCXenaTools R package: a toolkit for accessing genomics data from UCSC Xena platform, from cancer multi-omics to single-cell RNA-seq
    9                                            Sigflow: an automated and comprehensive pipeline for cancer genome mutational signature analysis
    10                                                                                   Ras downstream effector GGCT alleviates oncogenic stress
    11                                                                        The repertoire of copy number alteration signatures in human cancer
    12                                         Copy number signature analyses in prostate cancer reveal distinct etiologies and clinical outcomes
    13                                                                    Quantification of neoantigen-mediated immunoediting in cancer evolution
    14                                               Pan-cancer noncoding genomic analysis identifies functional CDC20 promoter mutation hotspots
    15                                              Association of CSMD1 with tumor mutation burden and other clinical outcomes in Gastric Cancer
    16       Ggct (&#947;&#8208;glutamyl cyclotransferase) plays an important role in erythrocyte antioxidant defense and red blood cell survival
    17                                               Can tumor mutational burden determine the most effective treatment for lung cancer patients?
    18                                                                      Revisiting neoantigen depletion signal in the untreated cancer genome
    19                                                       IOBR2: Multidimensional Decoding Tumor Microenvironment for Immuno-Oncology Research
    20                                                              TCCIA: a comprehensive resource for exploring CircRNA in cancer immunotherapy
                                                                           authors
    1                                           S Wang, Z He, X Wang, H Li, XS Liu
    2                                                  S Wang, M Jia, Z He, XS Liu
    3  J Li, B Miao, S Wang, W Dong, H Xu, C Si, W Wang, S Duan, J Lou, Z Bao, ...
    4                                                    S Wang, LA Cowley, XS Liu
    5       S Wang, Y Xiong, L Zhao, K Gu, Y Li, F Zhao, J Li, M Wang, H Wang, ...
    6                S Wang, H Li, M Song, Z Tao, T Wu, Z He, X Zhao, K Wu, XS Liu
    7                                          S Wang, J Zhang, Z He, K Wu, XS Liu
    8                                                               S Wang, XS Liu
    9                                                  S Wang, Z Tao, T Wu, XS Liu
    10          Z He, S Wang, Y Shao, J Zhang, X Wu, Y Chen, J Hu, F Zhang, XS Liu
    11      Z Tao, S Wang, C Wu, T Wu, X Zhao, W Ning, G Wang, J Wang, J Chen, ...
    12               S Wang, H Li, M Song, Z He, T Wu, X Wang, Z Tao, K Wu, XS Liu
    13      T Wu, G Wang, X Wang, S Wang, X Zhao, C Wu, W Ning, Z Tao, F Chen, ...
    14       Z He, T Wu, S Wang, J Zhang, X Sun, Z Tao, X Zhao, H Li, K Wu, XS Liu
    15       X Wang, S Wang, Y Han, M Xu, P Li, M Ke, Z Teng, P Huang, Z Diao, ...
    16                    Z He, X Sun, S Wang, D Bai, X Zhao, Y Han, P Hao, XS Liu
    17                       S Wang, Z He, X Wang, H Li, T Wu, X Sun, K Wu, XS Liu
    18                             S Wang, X Wang, T Wu, Z He, H Li, X Sun, XS Liu
    19     D Zeng, Y Fang, P Luo, W Qiu, S Wang, R Shen, W Gu, X Huang, Q Mao, ...
    20          S Wang, Y Xiong, Y Zhang, H Wang, M Chen, J Li, P Luo, YH Luo, ...
                                                            venue citations year
    1                                                 eLife, 2019       282 2019
    2                           Oncogene 37 (29), 3924-3936, 2018       237 2018
    3           Briefings in bioinformatics 23 (4), bbac261, 2022       151 2022
    4                               Molecules 24 (18), 3214, 2019       145 2019
    5                        Bioinformatics 38 (2), 527-529, 2022        96 2022
    6                        PLoS genetics 17 (5), e1009557, 2021        85 2021
    7   International journal of cancer 145 (10), 2840-2849, 2019        68 2019
    8          Journal of Open Source Software 4 (40), 1627, 2019        60 2019
    9                     Bioinformatics 37 (11), 1590-1592, 2020        38 2020
    10                                 Iscience 19, 256-266, 2019        15 2019
    11          Briefings in Bioinformatics 24 (2), bbad053, 2023        11 2023
    12                        MedRxiv, 2020.04. 27.20082404, 2020         9 2020
    13                   Cancer Research 82 (12), 2226-2238, 2022         8 2022
    14                                      Iscience 24 (4), 2021         8 2021
    15 International Journal of General Medicine, 8293-8299, 2021         5 2021
    16      British Journal of Haematology 195 (2), 267-275, 2021         4 2021
    17                  Lung Cancer Management 8 (4), LMT21, 2019         4 2019
    18                          bioRxiv, 2020.05. 11.089540, 2020         3 2020
    19                          bioRxiv, 2024.01. 13.575484, 2024         2 2024
    20           Journal for Immunotherapy of Cancer 12 (1), 2024         2 2024
    
    $citations
       when count
    1 total  1243
    2  2019    39
    3  2020   121
    4  2021   189
    5  2022   292
    6  2023   319
    7  2024   278
    
    attr(,"class")
    [1] "ScholarProfile" "list"          
    > if (!is.null(r)) {
    +   tb <- scholar_table(r)
    +   tb$citations
    +   tb$publications
    +   pl <- scholar_plot(r)
    +   pl$citations
    +   pl$publications
    + }
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─tinyscholar::scholar_plot(r)
      2. │ └─profile$publications %>% dplyr::count(.data$year)
      3. ├─dplyr::count(., .data$year)
      4. └─dplyr:::count.data.frame(., .data$year)
      5.   └─dplyr:::map_chr(by_exprs, as_string)
      6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
      8.         └─rlang (local) FUN(X[[i]], ...)
      9.           └─rlang:::abort_coercion(x, "a string")
     10.             └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘tinyscholar.Rmd’ using rmarkdown
    
    Quitting from lines 89-92 [unnamed-chunk-6] (tinyscholar.Rmd)
    Error: processing vignette 'tinyscholar.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘tinyscholar.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘tinyscholar.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# ulrb

<details>

* Version: 0.1.5
* GitHub: https://github.com/pascoalf/ulrb
* Source code: https://github.com/cran/ulrb
* Date/Publication: 2024-06-18 10:40:02 UTC
* Number of recursive dependencies: 84

Run `revdepcheck::cloud_details(, "ulrb")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘ulrb-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: plot_ulrb_clustering
    > ### Title: Plot Rank Abundance Curve of classification results
    > ### Aliases: plot_ulrb_clustering
    > 
    > ### ** Examples
    > 
    > classified_species <- define_rb(nice_tidy)
    Joining with `by = join_by(Sample, Level)`
    Joining with `by = join_by(Sample, Level)`
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─ulrb::define_rb(nice_tidy)
      2. │ └─... %>% count(.data$Evaluation)
      3. ├─dplyr::count(., .data$Evaluation)
      4. └─dplyr:::count.data.frame(., .data$Evaluation)
      5.   └─dplyr:::map_chr(by_exprs, as_string)
      6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
      8.         └─rlang (local) FUN(X[[i]], ...)
      9.           └─rlang:::abort_coercion(x, "a string")
     10.             └─rlang::abort(msg, call = call)
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
      > 
      > library(testthat)
      > library(ulrb)
      > 
      > test_check("ulrb")
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Automatic option set to TRUE, so classification vector was overwritten
      K= 3 based on Average Silhouette Score.
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Automatic option set to TRUE, so classification vector was overwritten
      K= 9 based on Calinski-Harabasz.
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Automatic option set to TRUE, so classification vector was overwritten
      K= 9 based on Calinski-Harabasz.
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Automatic option set to TRUE, so classification vector was overwritten
      K= 5 based on Average Silhouette Score.
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Automatic option set to TRUE, so classification vector was overwritten
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Joining with `by = join_by(Sample, Level)`
      Missing argument sample_names. This is a vector with the names of the samples, as in the data input
      Taxa_id assumes each column is a taxonomic unit.
      Taxa_id assumes each column is a taxonomic unit.
      [ FAIL 74 | WARN 0 | SKIP 0 | PASS 90 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-define_rb.R:2:3'): Function runs without error ───────────────
      Expected `define_rb(nice_tidy)` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Failure ('test-define_rb.R:5:3'): Function runs without error, with simplified to TRUE ──
      Expected `define_rb(nice_tidy, simplified = TRUE)` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Error ('test-define_rb.R:8:3'): Check if result is reproducible ─────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_equal(define_rb(nice_tidy), define_rb(nice_tidy)) at test-define_rb.R:8:3
        2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─ulrb::define_rb(nice_tidy)
        5. │ └─... %>% count(.data$Evaluation)
        6. ├─dplyr::count(., .data$Evaluation)
        7. └─dplyr:::count.data.frame(., .data$Evaluation)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-define_rb.R:12:3'): Levels output is integer ───────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_type(define_rb(nice_tidy)$Level, type = "integer") at test-define_rb.R:12:3
        2. │ └─testthat::quasi_label(enquo(object), arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─ulrb::define_rb(nice_tidy)
        5. │ └─... %>% count(.data$Evaluation)
        6. ├─dplyr::count(., .data$Evaluation)
        7. └─dplyr:::count.data.frame(., .data$Evaluation)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-define_rb.R:17:13'): Number of levels corresponds to
                size of classification vector ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_length(...) at test-define_rb.R:17:13
        2. │ └─testthat::quasi_label(enquo(object), arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─base::unique(define_rb(nice_tidy, classification_vector = test_vector)$Level)
        5. ├─ulrb::define_rb(nice_tidy, classification_vector = test_vector)
        6. │ └─... %>% count(.data$Evaluation)
        7. ├─dplyr::count(., .data$Evaluation)
        8. └─dplyr:::count.data.frame(., .data$Evaluation)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Error ('test-define_rb.R:27:13'): Number of levels corresponds to
                size of alternative classification vector ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_length(...) at test-define_rb.R:27:13
        2. │ └─testthat::quasi_label(enquo(object), arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─base::unique(define_rb(nice_tidy, classification_vector = test_vector)$Level)
        5. ├─ulrb::define_rb(nice_tidy, classification_vector = test_vector)
        6. │ └─... %>% count(.data$Evaluation)
        7. ├─dplyr::count(., .data$Evaluation)
        8. └─dplyr:::count.data.frame(., .data$Evaluation)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Failure ('test-define_rb.R:37:13'): Works with a classification vector of a single classification,
                or a single cluster ──
      Expected `define_rb(nice_tidy, classification_vector = test_vector)$Level` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Error ('test-define_rb.R:43:3'): The median abundance of clusters is type double ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_type(...) at test-define_rb.R:43:3
        2. │ └─testthat::quasi_label(enquo(object), arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─ulrb::define_rb(nice_tidy)
        5. │ └─... %>% count(.data$Evaluation)
        6. ├─dplyr::count(., .data$Evaluation)
        7. └─dplyr:::count.data.frame(., .data$Evaluation)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-define_rb.R:48:3'): The classification column is type integer ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_type(define_rb(nice_tidy)$Classification, type = "integer") at test-define_rb.R:48:3
        2. │ └─testthat::quasi_label(enquo(object), arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─ulrb::define_rb(nice_tidy)
        5. │ └─... %>% count(.data$Evaluation)
        6. ├─dplyr::count(., .data$Evaluation)
        7. └─dplyr:::count.data.frame(., .data$Evaluation)
        8.   └─dplyr:::map_chr(by_exprs, as_string)
        9.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       10.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       11.         └─rlang (local) FUN(X[[i]], ...)
       12.           └─rlang:::abort_coercion(x, "a string")
       13.             └─rlang::abort(msg, call = call)
      ── Error ('test-define_rb.R:53:3'): The number of classifications corresponds to classification vector ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_length(...) at test-define_rb.R:53:3
        2. │ └─testthat::quasi_label(enquo(object), arg = "object")
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. ├─base::unique(define_rb(nice_tidy, classification_vector = classification_vector)$Classification)
        5. ├─ulrb::define_rb(nice_tidy, classification_vector = classification_vector)
        6. │ └─... %>% count(.data$Evaluation)
        7. ├─dplyr::count(., .data$Evaluation)
        8. └─dplyr:::count.data.frame(., .data$Evaluation)
        9.   └─dplyr:::map_chr(by_exprs, as_string)
       10.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       11.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       12.         └─rlang (local) FUN(X[[i]], ...)
       13.           └─rlang:::abort_coercion(x, "a string")
       14.             └─rlang::abort(msg, call = call)
      ── Failure ('test-define_rb.R:61:3'): It works with alternative classification vectors ──
      Expected `define_rb(nice_tidy, classification_vector = classification_vector)` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Failure ('test-define_rb.R:66:3'): It works with single classification ──────
      Expected `define_rb(nice_tidy, classification_vector = classification_vector)` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Error ('test-define_rb.R:76:3'): Classification vector can be numbers instead of strings ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_warning(define_rb(nice_tidy, classification_vector = classification_vector)) at test-define_rb.R:76:3
        2. │ └─testthat:::expect_condition_matching(...)
        3. │   └─testthat:::quasi_capture(...)
        4. │     ├─testthat (local) .capture(...)
        5. │     │ └─base::withCallingHandlers(...)
        6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        7. ├─ulrb::define_rb(nice_tidy, classification_vector = classification_vector)
        8. │ └─... %>% count(.data$Evaluation)
        9. ├─dplyr::count(., .data$Evaluation)
       10. └─dplyr:::count.data.frame(., .data$Evaluation)
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      ── Error ('test-define_rb.R:94:13'): Largest possible vector is equal to the number of observations of the sample with least observations ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─testthat::expect_warning(define_rb(nice_tidy, classification_vector = largest_classification_vector)) at test-define_rb.R:94:13
        2. │ └─testthat:::expect_condition_matching(...)
        3. │   └─testthat:::quasi_capture(...)
        4. │     ├─testthat (local) .capture(...)
        5. │     │ └─base::withCallingHandlers(...)
        6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        7. ├─ulrb::define_rb(nice_tidy, classification_vector = largest_classification_vector)
        8. │ └─... %>% count(.data$Evaluation)
        9. ├─dplyr::count(., .data$Evaluation)
       10. └─dplyr:::count.data.frame(., .data$Evaluation)
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      ── Failure ('test-define_rb.R:123:3'): User can give any col names to the data ──
      Expected `define_rb(data_modified, samples_col = "i", abundance_col = "j")` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Failure ('test-define_rb.R:139:3'): define_rb works for a single sample ─────
      Expected `define_rb(one_sample)` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Failure ('test-define_rb.R:168:3'): Works without any column with species information ──
      Expected `define_rb(no_species)` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Error ('test-define_rb.R:178:3'): Output does not have Species with zero abundance ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-define_rb.R:178:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-define_rb.R:190:3'): Output does not have Species with NA abundance ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-define_rb.R:190:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-define_rb.R:212:3'): silhouete scores obtained double ──────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy, simplified = FALSE) at test-define_rb.R:212:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-define_rb.R:220:3'): pam object is list ────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy, simplified = FALSE) at test-define_rb.R:220:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Failure ('test-define_rb.R:231:3'): Function runs with automatic k without errors ──
      Expected `define_rb(nice_tidy, automatic = TRUE)` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Failure ('test-define_rb.R:237:3'): Function runs with automatic k for another index, Calinski-Harabasz, ──
      Expected `define_rb(nice_tidy, automatic = TRUE, index = index)` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Failure ('test-define_rb.R:243:3'): Function runs with automatic k for another index, Calinski-Harabasz, ──
      Expected `define_rb(nice_tidy, automatic = TRUE, index = index)` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Failure ('test-define_rb.R:250:3'): Function runs without errors with automatic = TRUE, for a different range of values ──
      Expected `define_rb(nice_tidy, automatic = TRUE, range = 5:10)` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Error ('test-plot_ulrb.R:2:3'): Works with a single sample ──────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb.R:2:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb.R:10:3'): Works for all samples ──────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb.R:10:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb.R:19:3'): Throws error if wrong taxa_col is provided ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb.R:19:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb.R:28:3'): Log scales works for all samples ───────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb.R:28:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb.R:38:3'): Stops if taxa_col is missing ───────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb.R:38:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb.R:46:3'): Stops if dataset is a matrix ───────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─define_rb(nice_tidy) %>% as.matrix() at test-plot_ulrb.R:46:3
        2. ├─base::as.matrix(.)
        3. ├─ulrb::define_rb(nice_tidy)
        4. │ └─... %>% count(.data$Evaluation)
        5. ├─dplyr::count(., .data$Evaluation)
        6. └─dplyr:::count.data.frame(., .data$Evaluation)
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb.R:55:3'): Stops if log scales argument is not logical ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─define_rb(nice_tidy) %>% as.matrix() at test-plot_ulrb.R:55:3
        2. ├─base::as.matrix(.)
        3. ├─ulrb::define_rb(nice_tidy)
        4. │ └─... %>% count(.data$Evaluation)
        5. ├─dplyr::count(., .data$Evaluation)
        6. └─dplyr:::count.data.frame(., .data$Evaluation)
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb.R:64:3'): Error if silhouette score column is wrong ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─define_rb(nice_tidy) %>% as.matrix() at test-plot_ulrb.R:64:3
        2. ├─base::as.matrix(.)
        3. ├─ulrb::define_rb(nice_tidy)
        4. │ └─... %>% count(.data$Evaluation)
        5. ├─dplyr::count(., .data$Evaluation)
        6. └─dplyr:::count.data.frame(., .data$Evaluation)
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb.R:76:12'): Stops if number of colors is wrong
               in extra arguments does not correspond to the
               size of the classification vector ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─define_rb(nice_tidy) %>% as.matrix() at test-plot_ulrb.R:76:12
        2. ├─base::as.matrix(.)
        3. ├─ulrb::define_rb(nice_tidy)
        4. │ └─... %>% count(.data$Evaluation)
        5. ├─dplyr::count(., .data$Evaluation)
        6. └─dplyr:::count.data.frame(., .data$Evaluation)
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb.R:86:12'): Stops if multiple samples are used, but plot_all is not set to TRUE ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─define_rb(nice_tidy) %>% as.matrix() at test-plot_ulrb.R:86:12
        2. ├─base::as.matrix(.)
        3. ├─ulrb::define_rb(nice_tidy)
        4. │ └─... %>% count(.data$Evaluation)
        5. ├─dplyr::count(., .data$Evaluation)
        6. └─dplyr:::count.data.frame(., .data$Evaluation)
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:3:3'): Works for a sample with default arguments ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:3:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:12:3'): function does not work if you provide a non existent sample ID ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:12:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:19:3'): function fails if missing sample_id argument ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:19:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:26:3'): function fails if missing taxa_col argument ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:26:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:33:3'): function fails if data is in matrix format ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:33:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:44:3'): function stops if log_scaled isn't logical (TRUE/FALSE) ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:44:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:56:3'): function works normally if log_scaled is logical (TRUE/FALSE) ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:56:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:68:3'): Any color vector works if it has the same length as the number of classifications ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:68:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:79:3'): color vector must be the same size as number of classifications ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:79:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:91:3'): function output can be modified with other ggplot functions ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:91:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:100:3'): optional labs can overwrite default labs ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:100:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:113:3'): The abundance argument can be changed into any type of score,
                for example, relative abundance ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:113:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:126:3'): Works with a single sample ─────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:126:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:134:3'): Works for all samples ──────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:134:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:143:3'): Throws error if wrong taxa_col is provided ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:143:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:152:3'): Log scales works for all samples ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_clustering.R:152:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:162:3'): Stops if log scales argument is not logical, with option for all samples ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─define_rb(nice_tidy) %>% as.matrix() at test-plot_ulrb_clustering.R:162:3
        2. ├─base::as.matrix(.)
        3. ├─ulrb::define_rb(nice_tidy)
        4. │ └─... %>% count(.data$Evaluation)
        5. ├─dplyr::count(., .data$Evaluation)
        6. └─dplyr:::count.data.frame(., .data$Evaluation)
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:173:12'): Stops if number of colors is wrong
               in extra arguments does not correspond to the
               size of the classification vector ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─define_rb(nice_tidy) %>% as.matrix() at test-plot_ulrb_clustering.R:173:12
        2. ├─base::as.matrix(.)
        3. ├─ulrb::define_rb(nice_tidy)
        4. │ └─... %>% count(.data$Evaluation)
        5. ├─dplyr::count(., .data$Evaluation)
        6. └─dplyr:::count.data.frame(., .data$Evaluation)
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_clustering.R:183:3'): Stops if multiple samples are used, but plot_all is not set to TRUE ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─define_rb(nice_tidy) %>% as.matrix() at test-plot_ulrb_clustering.R:183:3
        2. ├─base::as.matrix(.)
        3. ├─ulrb::define_rb(nice_tidy)
        4. │ └─... %>% count(.data$Evaluation)
        5. ├─dplyr::count(., .data$Evaluation)
        6. └─dplyr:::count.data.frame(., .data$Evaluation)
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:3:3'): Works for a sample with default arguments ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:3:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:12:3'): function does not work if you provide a non existent sample ID ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:12:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:19:3'): function fails if missing sample_id argument ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:19:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:26:3'): function fails if missing taxa_col argument ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:26:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:33:3'): function fails if data is in matrix format ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:33:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:44:3'): function stops if log_scaled isn't logical (TRUE/FALSE) ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:44:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:56:3'): function works normally if log_scaled is logical (TRUE/FALSE) ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:56:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:68:3'): Any color vector works if it has the same length as the number of classifications ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:68:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:79:3'): color vector must be the same size as number of classifications ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:79:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:91:3'): function output can be modified with other ggplot functions ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:91:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:100:3'): optional labs can overwrite default labs ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:100:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:113:13'): The abundance argument can be changed into any type of score,
                for example, relative abundance ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:113:13
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:126:3'): Works with a single sample ─────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:126:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:134:3'): Works for all samples ──────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:134:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:143:3'): Throws error if wrong taxa_col is provided ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:143:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:152:3'): Log scales works for all samples ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─ulrb::define_rb(nice_tidy) at test-plot_ulrb_silhouette.R:152:3
        2. │ └─... %>% count(.data$Evaluation)
        3. ├─dplyr::count(., .data$Evaluation)
        4. └─dplyr:::count.data.frame(., .data$Evaluation)
        5.   └─dplyr:::map_chr(by_exprs, as_string)
        6.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        7.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
        8.         └─rlang (local) FUN(X[[i]], ...)
        9.           └─rlang:::abort_coercion(x, "a string")
       10.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:162:3'): Stops if log scales argument is not logical, with option for all samples ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─define_rb(nice_tidy) %>% as.matrix() at test-plot_ulrb_silhouette.R:162:3
        2. ├─base::as.matrix(.)
        3. ├─ulrb::define_rb(nice_tidy)
        4. │ └─... %>% count(.data$Evaluation)
        5. ├─dplyr::count(., .data$Evaluation)
        6. └─dplyr:::count.data.frame(., .data$Evaluation)
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:173:12'): Stops if number of colors is wrong
               in extra arguments does not correspond to the
               size of the classification vector ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─define_rb(nice_tidy) %>% as.matrix() at test-plot_ulrb_silhouette.R:173:12
        2. ├─base::as.matrix(.)
        3. ├─ulrb::define_rb(nice_tidy)
        4. │ └─... %>% count(.data$Evaluation)
        5. ├─dplyr::count(., .data$Evaluation)
        6. └─dplyr:::count.data.frame(., .data$Evaluation)
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:183:3'): Error if silhouette score column is wrong ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─define_rb(nice_tidy) %>% as.matrix() at test-plot_ulrb_silhouette.R:183:3
        2. ├─base::as.matrix(.)
        3. ├─ulrb::define_rb(nice_tidy)
        4. │ └─... %>% count(.data$Evaluation)
        5. ├─dplyr::count(., .data$Evaluation)
        6. └─dplyr:::count.data.frame(., .data$Evaluation)
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      ── Error ('test-plot_ulrb_silhouette.R:193:3'): Stops if multiple samples are used, but plot_all is not set to TRUE ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─define_rb(nice_tidy) %>% as.matrix() at test-plot_ulrb_silhouette.R:193:3
        2. ├─base::as.matrix(.)
        3. ├─ulrb::define_rb(nice_tidy)
        4. │ └─... %>% count(.data$Evaluation)
        5. ├─dplyr::count(., .data$Evaluation)
        6. └─dplyr:::count.data.frame(., .data$Evaluation)
        7.   └─dplyr:::map_chr(by_exprs, as_string)
        8.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
        9.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       10.         └─rlang (local) FUN(X[[i]], ...)
       11.           └─rlang:::abort_coercion(x, "a string")
       12.             └─rlang::abort(msg, call = call)
      
      [ FAIL 74 | WARN 0 | SKIP 0 | PASS 90 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘Glossary.Rmd’ using rmarkdown
    --- finished re-building ‘Glossary.Rmd’
    
    --- re-building ‘eco-analysis.Rmd’ using rmarkdown
    ```

# viewscape

<details>

* Version: 1.0.0
* GitHub: NA
* Source code: https://github.com/cran/viewscape
* Date/Publication: 2024-02-04 10:10:02 UTC
* Number of recursive dependencies: 84

Run `revdepcheck::cloud_details(, "viewscape")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘viewscape-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: calculate_diversity
    > ### Title: calculate_diversity
    > ### Aliases: calculate_diversity
    > 
    > ### ** Examples
    > 
    > # Load a viewpoint
    > test_viewpoint <- sf::read_sf(system.file("test_viewpoint.shp", package = "viewscape"))
    > # load dsm raster
    > dsm <- terra::rast(system.file("test_dsm.tif", package ="viewscape"))
    > #Compute viewshed
    > output <- compute_viewshed(dsm = dsm,
    +                            viewpoints = test_viewpoint,
    +                            offset_viewpoint = 6)
    > # load landuse raster
    > test_landuse <- terra::rast(system.file("test_landuse.tif",
    +                                         package ="viewscape"))
    > diversity <- calculate_diversity(output,
    +                                  test_landuse)
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
        ▆
     1. └─viewscape::calculate_diversity(output, test_landuse)
     2.   ├─dplyr::count(land_class, .data$type)
     3.   └─dplyr:::count.data.frame(land_class, .data$type)
     4.     └─dplyr:::map_chr(by_exprs, as_string)
     5.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     6.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     7.           └─rlang (local) FUN(X[[i]], ...)
     8.             └─rlang:::abort_coercion(x, "a string")
     9.               └─rlang::abort(msg, call = call)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(viewscape)
      > 
      > testthat::test_check("viewscape")
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 4 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-calculate_diversity.R:22:3'): runs correctly ───────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
          ▆
       1. └─viewscape::calculate_diversity(output, test_landcover, proportion = TRUE) at test-calculate_diversity.R:22:3
       2.   ├─dplyr::count(land_class, .data$type)
       3.   └─dplyr:::count.data.frame(land_class, .data$type)
       4.     └─dplyr:::map_chr(by_exprs, as_string)
       5.       └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       6.         └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       7.           └─rlang (local) FUN(X[[i]], ...)
       8.             └─rlang:::abort_coercion(x, "a string")
       9.               └─rlang::abort(msg, call = call)
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 4 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘viewscape.Rmd’ using rmarkdown
    
    Quitting from lines 124-130 [unnamed-chunk-9] (viewscape.Rmd)
    Error: processing vignette 'viewscape.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘viewscape.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘viewscape.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# volker

<details>

* Version: 2.1.0
* GitHub: https://github.com/strohne/volker
* Source code: https://github.com/cran/volker
* Date/Publication: 2024-09-10 19:10:02 UTC
* Number of recursive dependencies: 159

Run `revdepcheck::cloud_details(, "volker")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘volker-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: plot_counts_items
    > ### Title: Output frequencies for multiple variables
    > ### Aliases: plot_counts_items
    > ### Keywords: internal
    > 
    > ### ** Examples
    > 
    > library(volker)
    > data <- volker::chatgpt
    > 
    > plot_counts_items(data, starts_with("cg_adoption_"))
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. ├─volker::plot_counts_items(data, starts_with("cg_adoption_"))
      2. │ ├─dplyr::arrange(...)
      3. │ └─... %>% ...
      4. ├─dplyr::mutate(., item = factor(.data$item, levels = cols_names))
      5. ├─dplyr::mutate(., value = as.factor(.data$value))
      6. ├─dplyr::ungroup(.)
      7. ├─dplyr::mutate(., p = (.data$n/sum(.data$n)) * 100)
      8. ├─dplyr::group_by(., dplyr::across(tidyselect::all_of("item")))
      9. ├─dplyr::count(., dplyr::across(tidyselect::all_of(c("item", "value"))))
     10. └─dplyr:::count.data.frame(...)
     11.   └─dplyr:::map_chr(by_exprs, as_string)
     12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
     13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
     14.         └─rlang (local) FUN(X[[i]], ...)
     15.           └─rlang:::abort_coercion(x, "a string")
     16.             └─rlang::abort(msg, call = call)
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
      > 
      > library(testthat)
      > library(volker)
      
      Attaching package: 'volker'
      
      The following object is masked from 'package:stats':
      
          filter
      
      > 
      > test_check("volker")
      
      
      processing file: tables.Rmd
      
      Quitting from lines 44-45 [unnamed-chunk-5] (tables.Rmd)
      
      
      processing file: plots.Rmd
      
      Quitting from lines 74-75 [unnamed-chunk-9] (plots.Rmd)
      
      
      processing file: reports.Rmd
      
      Quitting from lines 46-51 [unnamed-chunk-4] (reports.Rmd)
      The dataset is empty, check your values.
      [ FAIL 14 | WARN 0 | SKIP 1 | PASS 95 ]
      
      ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
      • On CRAN (1): 'test_skim.R:17:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-clean.R:69:3'): Baseline is extracted ──────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─volker::tab_counts(...) at test-clean.R:69:3
        2. │ └─volker::tab_counts_items_grouped(...)
        3. │   ├─... %>% dplyr::select(-tidyselect::any_of(".category"))
        4. │   ├─dplyr::filter(...)
        5. │   ├─... %>% dplyr::ungroup()
        6. │   ├─dplyr::group_by(...)
        7. │   └─... %>% ...
        8. ├─dplyr::select(., -tidyselect::any_of(".category"))
        9. ├─dplyr::ungroup(.)
       10. ├─dplyr::mutate(., p = ifelse(is.na(.data$p), 0, .data$p))
       11. ├─dplyr::mutate(., p = (.data$n/sum(.data$n)))
       12. ├─tidyr::complete(...)
       13. ├─dplyr::count(...)
       14. └─dplyr:::count.data.frame(...)
       15.   └─dplyr:::map_chr(by_exprs, as_string)
       16.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       17.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       18.         └─rlang (local) FUN(X[[i]], ...)
       19.           └─rlang:::abort_coercion(x, "a string")
       20.             └─rlang::abort(msg, call = call)
      ── Error ('test-labels.R:140:3'): Numeric values are relabeled ─────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─... %>% tab_counts(starts_with("cg_adoption_advantage"))
        2. ├─volker::tab_counts(., starts_with("cg_adoption_advantage"))
        3. │ └─volker::tab_counts_items(...)
        4. │   ├─dplyr::arrange(...)
        5. │   └─... %>% ...
        6. ├─dplyr::mutate(., item = factor(.data$item, levels = cols_names))
        7. ├─dplyr::mutate(., value = as.factor(.data$value))
        8. ├─dplyr::ungroup(.)
        9. ├─dplyr::mutate(., p = .data$n/sum(.data$n))
       10. ├─dplyr::group_by(., dplyr::across(tidyselect::all_of("item")))
       11. ├─dplyr::count(., dplyr::across(tidyselect::all_of(c("item", "value"))))
       12. └─dplyr:::count.data.frame(...)
       13.   └─dplyr:::map_chr(by_exprs, as_string)
       14.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       15.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       16.         └─rlang (local) FUN(X[[i]], ...)
       17.           └─rlang:::abort_coercion(x, "a string")
       18.             └─rlang::abort(msg, call = call)
      ── Failure ('test-markdown.R:11:3'): Tables in markdown documents render without error ──
      Expected `rmarkdown::render("_markdown/tables.Rmd")` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Failure ('test-markdown.R:17:3'): Plots in markdown documents render without error ──
      Expected `rmarkdown::render("_markdown/plots.Rmd")` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Failure ('test-markdown.R:23:3'): Volker reports render without error ───────
      Expected `rmarkdown::render("_markdown/reports.Rmd")` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Failure ('test-selections.R:36:3'): Single column selections work ───────────
      Expected `volker::plot_counts_items(data, use_private)` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Failure ('test-selections.R:39:3'): Single column selections work ───────────
      Expected `volker::tab_counts_items(data, use_private)` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Failure ('test-selections.R:53:3'): List column selections work ─────────────
      Expected `volker::plot_counts(data, c(use_private, use_work))` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Failure ('test-selections.R:56:3'): List column selections work ─────────────
      Expected `volker::tab_counts(data, c(use_private, use_work))` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Failure ('test-selections.R:69:3'): Starts with column selections work ──────
      Expected `volker::plot_counts(data, tidyselect::starts_with("use_"))` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Failure ('test-selections.R:72:3'): Starts with column selections work ──────
      Expected `volker::tab_counts(data, tidyselect::starts_with("use_"))` to run without any errors.
      i Actually got a <rlang_error> with text:
        Can't convert a call to a string.
      ── Error ('test-tables.R:27:3'): Frequency table for multiple categorical variables ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─volker::tab_counts(data, tidyselect::starts_with("cg_adoption_"))
        2. │ └─volker::tab_counts_items(...)
        3. │   ├─dplyr::arrange(...)
        4. │   └─... %>% ...
        5. ├─dplyr::mutate(., item = factor(.data$item, levels = cols_names))
        6. ├─dplyr::mutate(., value = as.factor(.data$value))
        7. ├─dplyr::ungroup(.)
        8. ├─dplyr::mutate(., p = .data$n/sum(.data$n))
        9. ├─dplyr::group_by(., dplyr::across(tidyselect::all_of("item")))
       10. ├─dplyr::count(., dplyr::across(tidyselect::all_of(c("item", "value"))))
       11. └─dplyr:::count.data.frame(...)
       12.   └─dplyr:::map_chr(by_exprs, as_string)
       13.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       14.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       15.         └─rlang (local) FUN(X[[i]], ...)
       16.           └─rlang:::abort_coercion(x, "a string")
       17.             └─rlang::abort(msg, call = call)
      ── Error ('test-tables.R:35:3'): Frequency table for multiple categorical variables by grouping variable ──
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─volker::tab_counts(...)
        2. │ └─volker::tab_counts_items_grouped(...)
        3. │   ├─... %>% dplyr::select(-tidyselect::any_of(".category"))
        4. │   ├─dplyr::filter(...)
        5. │   ├─... %>% dplyr::ungroup()
        6. │   ├─dplyr::group_by(...)
        7. │   └─... %>% ...
        8. ├─dplyr::select(., -tidyselect::any_of(".category"))
        9. ├─dplyr::ungroup(.)
       10. ├─dplyr::mutate(., p = ifelse(is.na(.data$p), 0, .data$p))
       11. ├─dplyr::mutate(., p = (.data$n/sum(.data$n)))
       12. ├─tidyr::complete(...)
       13. ├─dplyr::count(...)
       14. └─dplyr:::count.data.frame(...)
       15.   └─dplyr:::map_chr(by_exprs, as_string)
       16.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       17.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       18.         └─rlang (local) FUN(X[[i]], ...)
       19.           └─rlang:::abort_coercion(x, "a string")
       20.             └─rlang::abort(msg, call = call)
      ── Error ('test-tables.R:159:3'): Item order is kept ───────────────────────────
      Error in `FUN(X[[i]], ...)`: Can't convert a call to a string.
      Backtrace:
           ▆
        1. ├─volker::tab_counts_items(...)
        2. │ ├─dplyr::arrange(...)
        3. │ └─... %>% ...
        4. ├─dplyr::mutate(., item = factor(.data$item, levels = cols_names))
        5. ├─dplyr::mutate(., value = as.factor(.data$value))
        6. ├─dplyr::ungroup(.)
        7. ├─dplyr::mutate(., p = .data$n/sum(.data$n))
        8. ├─dplyr::group_by(., dplyr::across(tidyselect::all_of("item")))
        9. ├─dplyr::count(., dplyr::across(tidyselect::all_of(c("item", "value"))))
       10. └─dplyr:::count.data.frame(...)
       11.   └─dplyr:::map_chr(by_exprs, as_string)
       12.     └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
       13.       └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
       14.         └─rlang (local) FUN(X[[i]], ...)
       15.           └─rlang:::abort_coercion(x, "a string")
       16.             └─rlang::abort(msg, call = call)
      
      [ FAIL 14 | WARN 0 | SKIP 1 | PASS 95 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘introduction.Rmd’ using rmarkdown
    
    Quitting from lines 73-75 [unnamed-chunk-4] (introduction.Rmd)
    Error: processing vignette 'introduction.Rmd' failed with diagnostics:
    Can't convert a call to a string.
    --- failed re-building ‘introduction.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘introduction.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# WeightedTreemaps

<details>

* Version: 0.1.2
* GitHub: https://github.com/m-jahn/WeightedTreemaps
* Source code: https://github.com/cran/WeightedTreemaps
* Date/Publication: 2024-01-09 10:20:09 UTC
* Number of recursive dependencies: 60

Run `revdepcheck::cloud_details(, "WeightedTreemaps")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘WeightedTreemaps-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: drawTreemap
    > ### Title: drawTreemap
    > ### Aliases: drawTreemap
    > 
    > ### ** Examples
    > 
    > # load package
    > library(WeightedTreemaps)
    > 
    > # generate dummy data
    > df <- data.frame(
    +   A = rep(c("abcd", "efgh"), each = 4),
    +   B = letters[1:8],
    +   size = c(37, 52, 58, 27, 49, 44, 34, 45)
    + )
    > 
    > # compute treemap
    > tm <- voronoiTreemap(
    +   data = df,
    +   levels = c("B"),
    +   cell_size = "size",
    +   shape = "circle",
    +   positioning = "regular",
    +   seed = 123
    + )
    Error in `FUN()`:
    ! Can't convert a call to a string.
    Backtrace:
         ▆
      1. └─WeightedTreemaps::voronoiTreemap(...)
      2.   └─WeightedTreemaps (local) voronoi_core(level = 1, df = data)
      3.     ├─tibble::deframe(dplyr::count(df, get(levels[level])))
      4.     ├─dplyr::count(df, get(levels[level]))
      5.     └─dplyr:::count.data.frame(df, get(levels[level]))
      6.       └─dplyr:::map_chr(by_exprs, as_string)
      7.         └─dplyr:::.rlang_purrr_map_mold(.x, .f, character(1), ...)
      8.           └─base::vapply(.x, .f, .mold, ..., USE.NAMES = FALSE)
      9.             └─rlang (local) FUN(X[[i]], ...)
     10.               └─rlang:::abort_coercion(x, "a string")
     11.                 └─rlang::abort(msg, call = call)
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 10.8Mb
      sub-directories of 1Mb or more:
        doc    1.2Mb
        libs   8.9Mb
    ```

