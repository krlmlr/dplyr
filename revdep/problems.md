# activatr

<details>

* Version: 0.2.1
* GitHub: https://github.com/dschafer/activatr
* Source code: https://github.com/cran/activatr
* Date/Publication: 2024-07-27 21:20:02 UTC
* Number of recursive dependencies: 106

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
      [ FAIL 6 | WARN 0 | SKIP 0 | PASS 98 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test_act_tbl.R:23:3'): summary works ──────────────────────────────
      s$Time inherits from `'numeric'` not `'character'`.
      ── Failure ('test_act_tbl.R:26:3'): summary works ──────────────────────────────
      s$AvgPace inherits from `'numeric'` not `'character'`.
      ── Failure ('test_act_tbl.R:28:3'): summary works ──────────────────────────────
      s$MaxPace inherits from `'numeric'` not `'character'`.
      ── Failure ('test_act_tbl.R:70:3'): summary allows for metric system ───────────
      s$Time inherits from `'numeric'` not `'character'`.
      ── Failure ('test_act_tbl.R:73:3'): summary allows for metric system ───────────
      s$AvgPace inherits from `'numeric'` not `'character'`.
      ── Failure ('test_act_tbl.R:75:3'): summary allows for metric system ───────────
      s$MaxPace inherits from `'numeric'` not `'character'`.
      
      [ FAIL 6 | WARN 0 | SKIP 0 | PASS 98 ]
      Error: Test failures
      Execution halted
    ```

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
      ■■■■■                             14% | ETA: 21s
      ■■■■■■■■■■                        29% | ETA: 14s
      ■■■■■■■■■■■■                      36% | ETA: 25s
      ■■■■■■■■■■■■■■                    43% | ETA: 23s
      ■■■■■■■■■■■■■■■■■■                57% | ETA: 14s
      ■■■■■■■■■■■■■■■■■■■■              64% | ETA: 17s
      ■■■■■■■■■■■■■■■■■■■■■■            71% | ETA: 13s
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
      list()
      attr(,"class")
      [1] "waiver"
      list()
      attr(,"class")
      [1] "waiver"
      list()
      attr(,"class")
      [1] "waiver"
      Haplotype phenotype averages of wt individuals only:
               A    B    C    D    E
      Pheno 44.9 47.4 42.3 45.9 48.4
      list()
      attr(,"class")
      [1] "waiver"
      ■■■■■■■■■■■                       33% | ETA:  6s
      ■■■■■■■■■■■■■■■■■■■■■             67% | ETA:  2s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■        83% | ETA:  4s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■  100% | ETA:  0s
      WARNING: Phenotype association scores (phenodiff) not calculated for 252 of 2041 sites
      NOTE: 432 sites have more heterozygous individuals (1/0) than one of the homozygous states (1/1 or 0/0).
      
      Haplotyping was performed with hetphenos = F, meaning phenotype association scores for heterozygous sites was ignored.
      ✔ Haplotyping complete!
      Info saved in Haplotypes_30_E objects
      [ FAIL 1 | WARN 0 | SKIP 6 | PASS 5 ]
      
      ══ Skipped tests (6) ═══════════════════════════════════════════════════════════
      • On CRAN (6): 'test-clustree.R:14:1', 'test-clustree.R:19:1',
        'test-crosshapviz.R:13:3', 'test-crosshapviz.R:18:3',
        'test-crosshapviz.R:23:3', 'test-crosshapviz.R:28:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
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
      
      [ FAIL 1 | WARN 0 | SKIP 6 | PASS 5 ]
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
      [ FAIL 2 | WARN 0 | SKIP 71 | PASS 3614 ]
      
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
      ── Failure ('test_cross_validate.R:1413:3'): gaussian models work with repeated cross_validate() ──
      CVgausslist$Coefficients[[1]] inherits from `'data.frame'` not `'character'`.
      ── Failure ('test_validate_fn.R:4529:3'): testing nested tibbles in multinomial validate_fn() ──
      class(output_19148) not equal to c("tbl_df", "tbl", "data.frame").
      Lengths differ: 1 is not 3
      
      [ FAIL 2 | WARN 0 | SKIP 71 | PASS 3614 ]
      Error: Test failures
      Execution halted
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
      
      `actual$default_duckdb_connection$con@conn_ref` is <pointer: 0x55e568838780>
      `expected$default_duckdb_connection$con@conn_ref` is <pointer: 0x55e57185ff60>
      
      `actual$default_duckdb_connection$con@driver@database_ref` is <pointer: 0x55e56d17abb0>
      `expected$default_duckdb_connection$con@driver@database_ref` is <pointer: 0x55e57185f3b0>
      
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
      
      actual$duckplyr_macros[1:10] vs expected$duckplyr_macros[1:10]
        ___null"() AS CAST(NULL AS BOOLEAN)"
      - <"(x, y) AS \"r_base::<\"(x, y)"
      + <"(x, y) AS (x < y)"
      - <="(x, y) AS \"r_base::<=\"(x, y)"
      + <="(x, y) AS (x <= y)"
      - >"(x, y) AS \"r_base::>\"(x, y)"
      + >"(x, y) AS (x > y)"
      - >="(x, y) AS \"r_base::>=\"(x, y)"
      + >="(x, y) AS (x >= y)"
      - =="(x, y) AS \"r_base::==\"(x, y)"
      + =="(x, y) AS (x == y)"
      - !="(x, y) AS \"r_base::!=\"(x, y)"
      + !="(x, y) AS (x != y)"
        ___divide"(x, y) AS CASE WHEN y = 0 THEN CASE WHEN x = 0 THEN CAST('NaN' AS double) WHEN x > 0 THEN CAST('+Infinity' AS double) ELSE CAST('-Infinity' AS double) END ELSE CAST(x AS double) / y END"
        is.na"(x) AS (x IS NULL OR isnan(x))"
        n"() AS CAST(COUNT(*) AS int32)"
      
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
      
      body(actual$rel_find_call)[6:34] vs body(expected$rel_find_call)[6:46]
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
      and 31 more ...
      
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
      
      body(actual$rel_join_impl)[20:29] vs body(expected$rel_join_impl)[20:29]
        `    y_rel <- rel_set_alias(y_rel, "rhs")`
        `    vars <- join_cols(x_names = x_names, y_names = y_names, by = by, `
        `        suffix = suffix, keep = keep, error_call = error_call)`
      - `    x_in <- vec_ptype(x)`
      + `    x_in <- map(as.list(x)[vars$x$key], vec_ptype_safe)`
      - `    y_in <- vec_ptype(y)`
      + `    y_in <- map(as.list(y)[vars$y$key], vec_ptype_safe)`
      - `    x_key <- set_names(x_in[vars$x$key], names(vars$x$key))`
      + `    x_key <- as.data.frame(set_names(x_in, names(vars$x$key)))`
      - `    y_key <- set_names(y_in[vars$y$key], names(vars$x$key))`
      + `    y_key <- as.data.frame(set_names(y_in, names(vars$x$key)))`
        `    join_ptype_common(x_key, y_key, vars, error_call = error_call)`
        `    if (mutating) {`
        `        if (length(intersect(x_names, y_names)) != 0) {`
      
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
      
      body(actual$rel_translate_lang)[71:77] vs body(expected$rel_translate_lang)[71:79]
        `    })`
        `    aliases <- c(sd = "stddev", first = "first_value", last = "last_value", `
        `        nth = "nth_value", \`/\` = "___divide", log10 = "___log10", `
      - `        log = "___log", as.integer = "r_base::as.integer", NULL)`
      + `        log = "___log", as.integer = "r_base::as.integer", \`<\` = "r_base::<", `
      + `        \`<=\` = "r_base::<=", \`>\` = "r_base::>", \`>=\` = "r_base::>=", `
      + `        \`==\` = "r_base::==", \`!=\` = "r_base::!=", NULL)`
        `    known_window <- c("rank", "dense_rank", "percent_rank", "row_number", `
        `        "first", "last", "nth", "cume_dist", "lead", "lag", "ntile", `
        `        "sum", "mean", "sd", "min", "max", "median", NULL)`
      
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
      
      `names(formals(actual$rel_try))`:   "rel"  "..." "call"
      `names(formals(expected$rel_try))`: "call" "rel" "..." 
      
      `formals(actual$rel_try)$call` is NULL
      `formals(expected$rel_try)$call` is absent
      
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
      
        `actual$stats$attempts`: 1063
      `expected$stats$attempts`:  925
      
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
      
        `actual$stats$fallback`: 549
      `expected$stats$fallback`: 753
      
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
      
      body(actual$to_duckdb_expr)[20:26] vs body(expected$to_duckdb_expr)[20:25]
        `        }`
        `        out`
        `    }, relational_relexpr_constant = {`
      - `        check_df_for_rel(tibble(constant = x$val))`
        `        if ("experimental" %in% names(formals(duckdb$expr_constant))) {`
        `            experimental <- (Sys.getenv("DUCKPLYR_EXPERIMENTAL") == `
        `                "TRUE")`
      
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
      
      🛠: 1531
      🔨:  852
      🦆:  679
      add_count, anti_join, arrange, compute, count, cross_join, distinct, do, eval, filter, full_join, group_by, group_keys, group_map, group_modify, group_split, head, inner_join, intersect, left_join, mutate, mutate.data.frame, nest_join, pull, reframe, relocate, rename, rename_with, right_join, rows_append, rows_delete, rows_insert, rows_patch, rows_update, rows_upsert, rowwise, select, semi_join, setdiff, setequal, slice, slice_head, slice_sample, slice_tail, summarise, symdiff, transmute, ungroup, union_all
      
      00:00:44.999251
      Execution halted
    ```

# fairadapt

<details>

* Version: 1.0.0
* GitHub: https://github.com/dplecko/fairadapt
* Source code: https://github.com/cran/fairadapt
* Date/Publication: 2024-09-06 12:50:08 UTC
* Number of recursive dependencies: 107

Run `revdepcheck::cloud_details(, "fairadapt")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘jss.Rmd’ using rmarkdown
    ```

## Newly fixed

*   checking re-building of vignette outputs ... WARNING
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘jss.Rmd’ using rmarkdown
    This is pdfTeX, Version 3.141592653-2.6-1.40.26 (TeX Live 2024) (preloaded format=pdflatex)
     restricted \write18 enabled.
    entering extended mode
    tlmgr search --file --global '/standalone.cls'
    Trying to automatically install missing LaTeX packages...
    tlmgr install standalone
    tlmgr: package repository https://us.mirrors.cicku.me/ctan/systems/texlive/tlnet (verified)
    [1/6, ??:??/??:??] install: adjustbox [14k]
    [2/6, 00:00/00:00] install: collectbox [3k]
    [3/6, 00:00/00:00] install: currfile [4k]
    [4/6, 00:00/00:00] install: filemod [4k]
    [5/6, 00:00/00:00] install: gincltex [2k]
    [6/6, 00:00/00:00] install: standalone [12k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    This is pdfTeX, Version 3.141592653-2.6-1.40.26 (TeX Live 2024) (preloaded format=pdflatex)
     restricted \write18 enabled.
    entering extended mode
    tlmgr search --file --global '/tikz.sty'
    Trying to automatically install missing LaTeX packages...
    tlmgr install pgf
    tlmgr: package repository https://us.mirrors.cicku.me/ctan/systems/texlive/tlnet (verified)
    [1/2, ??:??/??:??] install: fp [19k]
    [2/2, 00:00/00:00] install: pgf [701k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    This is pdfTeX, Version 3.141592653-2.6-1.40.26 (TeX Live 2024) (preloaded format=pdflatex)
     restricted \write18 enabled.
    entering extended mode
    tlmgr search --file --global '/grfext.sty'
    Trying to automatically install missing LaTeX packages...
    tlmgr install grfext
    tlmgr: package repository https://ctan.math.illinois.edu/systems/texlive/tlnet (verified)
    [1/1, ??:??/??:??] install: grfext [3k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
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

# HH

<details>

* Version: 3.1-52
* GitHub: NA
* Source code: https://github.com/cran/HH
* Date/Publication: 2024-02-11 00:00:02 UTC
* Number of recursive dependencies: 165

Run `revdepcheck::cloud_details(, "HH")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is  5.1Mb
      sub-directories of 1Mb or more:
        R      1.5Mb
        help   1.5Mb
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
      o Timing:The full joyn is executed in 0.000488 seconds.
      o Timing: The entire joyn function, including checks, is executed in 0.022527
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

# miWQS

<details>

* Version: 0.4.4
* GitHub: https://github.com/phargarten2/miWQS
* Source code: https://github.com/cran/miWQS
* Date/Publication: 2021-04-02 21:50:02 UTC
* Number of recursive dependencies: 149

Run `revdepcheck::cloud_details(, "miWQS")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘README.Rmd’ using rmarkdown
    tlmgr: package repository https://ctan.math.illinois.edu/systems/texlive/tlnet (verified)
    [1/2, ??:??/??:??] install: biblatex [251k]
    [2/2, 00:00/00:00] install: logreq [4k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    INFO - This is Biber 2.19
    INFO - Logfile is 'README.blg'
    INFO - Reading 'README.bcf'
    ERROR - Error: Found biblatex control file version 3.11, expected version 3.10.
    This means that your biber (2.19) and biblatex (3.20) versions are incompatible.
    See compat matrix in biblatex or biber PDF documentation.
    INFO - ERRORS: 1
    Warning: LaTeX Warning: Empty bibliography on input line 181.
    Warning: LaTeX Warning: There were undefined references.
    Warning: LaTeX Warning: Label(s) may have changed. Rerun to get cross-references right.
    Warning: Package biblatex Warning: Please (re)run Biber on the file:
    Warning: (biblatex)                README
    Warning: (biblatex)                and rerun LaTeX afterwards.
    Error: processing vignette 'README.Rmd' failed with diagnostics:
    Failed to build the bibliography via biber
    --- failed re-building ‘README.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘README.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## Newly fixed

*   checking re-building of vignette outputs ... WARNING
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘README.Rmd’ using rmarkdown
    
    tlmgr: Remote database (revision 72662 of the texlive-scripts package)
    seems to be older than the local installation (rev 72673 of
    texlive-scripts); please use a different mirror and/or wait a day or two.
    
    Warning in system2("tlmgr", args, ...) :
      running command ''tlmgr' search --file --global '/biblatex.sty'' had status 1 and error message 'Function not implemented'
    ! LaTeX Error: File `biblatex.sty' not found.
    
    ! Emergency stop.
    <read *> 
    
    Error: processing vignette 'README.Rmd' failed with diagnostics:
    LaTeX failed to compile /tmp/workdir/miWQS/old/miWQS.Rcheck/vign_test/miWQS/vignettes/README.tex. See https://yihui.org/tinytex/r/#debugging for debugging tips. See README.log for more info.
    --- failed re-building ‘README.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘README.Rmd’
    
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

* Version: 1.2.1
* GitHub: https://github.com/darwin-eu-dev/PatientProfiles
* Source code: https://github.com/cran/PatientProfiles
* Date/Publication: 2024-10-25 04:40:02 UTC
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
      [ FAIL 2 | WARN 0 | SKIP 104 | PASS 167 ]
      
      ══ Skipped tests (104) ═════════════════════════════════════════════════════════
      • On CRAN (104): 'test-addAttributes.R:2:3', 'test-addCategories.R:2:3',
        'test-addCategories.R:69:3', 'test-addCategories.R:106:3',
        'test-addCategories.R:155:3', 'test-addConceptIntersect.R:2:3',
        'test-addConceptIntersect.R:97:3', 'test-addConceptIntersect.R:138:3',
        'test-addConceptIntersect.R:168:3', 'test-addConceptIntersect.R:199:3',
        'test-addCohortIntersect.R:277:3', 'test-addCohortIntersect.R:353:3',
        'test-addCohortIntersect.R:398:3', 'test-addCohortIntersect.R:509:3',
        'test-addCohortIntersect.R:600:3', 'test-addCohortIntersect.R:660:3',
        'test-addCohortIntersect.R:734:3', 'test-addCohortIntersect.R:752:3',
        'test-addCohortIntersect.R:838:3', 'test-addDeath.R:104:3',
        'test-addDeath.R:149:3', 'test-addDeath.R:247:3', 'test-addDeath.R:290:3',
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
        'test-addTableIntersect.R:28:3', 'test-addTableIntersect.R:209:3',
        'test-addTableIntersect.R:316:3', 'test-addTableIntersect.R:451:3',
        'test-addTableIntersect.R:581:3', 'test-checks.R:2:3', 'test-checks.R:106:3',
        'test-checks.R:157:3', 'test-checks.R:177:3', 'test-checks.R:189:3',
        'test-checks.R:237:3', 'test-checks.R:264:3', 'test-addDemographics.R:2:3',
        'test-addDemographics.R:24:3', 'test-addDemographics.R:352:3',
        'test-addDemographics.R:419:3', 'test-addDemographics.R:685:3',
        'test-addDemographics.R:834:3', 'test-addDemographics.R:852:3',
        'test-addDemographics.R:964:3', 'test-addDemographics.R:1043:3',
        'test-addDemographics.R:1155:3', 'test-addDemographics.R:1220:3',
        'test-addDemographics.R:1246:3', 'test-addDemographics.R:1273:3',
        'test-addDemographics.R:1289:3', 'test-addDemographics.R:1300:3',
        'test-addDemographics.R:1318:3', 'test-addDemographics.R:1346:3',
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
      
      [ FAIL 2 | WARN 0 | SKIP 104 | PASS 167 ]
      Error: Test failures
      Execution halted
    ```

# plutor

<details>

* Version: 0.1.0
* GitHub: https://github.com/william-swl/plutor
* Source code: https://github.com/cran/plutor
* Date/Publication: 2023-10-27 08:00:02 UTC
* Number of recursive dependencies: 114

Run `revdepcheck::cloud_details(, "plutor")` for more info

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
      > library(plutor)
      > 
      > test_check("plutor")
      [ FAIL 10 | WARN 12 | SKIP 17 | PASS 0 ]
      
      ══ Skipped tests (17) ══════════════════════════════════════════════════════════
      • On CRAN (17): 'test-Position.R:4:3', 'test-Position.R:17:3',
        'test-Scales.R:2:3', 'test-Scales.R:13:3', 'test-Scales.R:24:3',
        'test-Scales.R:35:3', 'test-Stat.R:4:3', 'test-Stat.R:14:3',
        'test-Stat.R:27:3', 'test-color.R:2:3', 'test-color.R:11:3',
        'test-color.R:21:3', 'test-geom_compare.R:127:3',
        'test-geom_compare.R:165:3', 'test-geom_describe.R:4:3',
        'test-geom_describe.R:15:3', 'test-theme.R:2:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-geom_compare.R:4:3'): geom_compare ─────────────────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 3 or 1, not 0.
      ── Error ('test-geom_compare.R:15:3'): geom_compare, log10 ─────────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 3 or 1, not 0.
      ── Error ('test-geom_compare.R:26:3'): geom_compare, facet ─────────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 3 or 1, not 0.
      ── Error ('test-geom_compare.R:38:3'): geom_compare, ignore ns ─────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 2 or 1, not 0.
      ── Error ('test-geom_compare.R:52:3'): geom_compare, ignore ns partly ──────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 3 or 1, not 0.
      ── Error ('test-geom_compare.R:66:3'): geom_compare, fc1 ───────────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 2 or 1, not 0.
      ── Error ('test-geom_compare.R:82:3'): geom_compare, paired ────────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 1, not 0.
      ── Error ('test-geom_compare.R:98:3'): geom_compare, inline ────────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 2 or 1, not 0.
      ── Error ('test-geom_compare.R:113:3'): geom_compare, cp_ref ───────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 2 or 1, not 0.
      ── Error ('test-geom_compare.R:178:3'): geom_compare, manual comparisons table ──
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 3 or 1, not 0.
      
      [ FAIL 10 | WARN 12 | SKIP 17 | PASS 0 ]
      Error: Test failures
      Execution halted
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
      
      v Found 4 of 7 names
      
      -- Fuzzy matching 3 names --
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      ! No author information supplied - matching on taxon name only
      
      -- Exact matching  names --
      
      v Found 4 of  names
      
      -- Fuzzy matching 3 names --
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      
      -- Exact matching 7 names --
      
      v Found 4 of 7 names
      
      -- Matching complete! --
      
      v Matched 4 of 7 names
      i Exact (with author): 2
      i Exact (without author): 2
      i No match found: 3
      ! Names with multiple matches: 0
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `genus`, `species`, `infra_rank`, and `infra` columns
      ! No author information supplied - matching on taxon name only
      
      -- Exact matching  names --
      
      v Found 4 of  names
      
      -- Fuzzy matching 3 names --
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      
      -- Exact matching 7 names --
      
      v Found 4 of 7 names
      
      -- Fuzzy matching 3 names --
      
      i No area specified. Generating global summary.
      i Aggregating occurrence types across input area ("the world") - see `?wcvp_summary()` for details.
      i No area specified. Generating global summary.
      i Matches to input geography found at Continent (Level 1)
      i Aggregating occurrence types across input area ("ASIA-TROPICAL") - see `?wcvp_summary()` for details.
      [ FAIL 9 | WARN 0 | SKIP 0 | PASS 33 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
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
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:2:3
       2. │ └─rWCVP::wcvp_match_fuzzy(...)
       3. │   └─... %>% filter(!is.na(.data$wcvp_id))
       4. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       5. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       6.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       7.     └─base::toupper(word)
      ── Error ('test-match_names.R:16:3'): match names without author returns expected output ──
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:16:3
       2. │ └─rWCVP::wcvp_match_fuzzy(...)
       3. │   └─... %>% filter(!is.na(.data$wcvp_id))
       4. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       5. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       6.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       7.     └─base::toupper(word)
      ── Error ('test-match_names.R:44:3'): match names without taxon name parts returns expected output ──
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:44:3
       2. │ └─rWCVP::wcvp_match_fuzzy(...)
       3. │   └─... %>% filter(!is.na(.data$wcvp_id))
       4. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       5. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       6.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       7.     └─base::toupper(word)
      ── Error ('test-match_names.R:58:3'): match names returns original columns ─────
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:58:3
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
      installed size is  9.2Mb
      sub-directories of 1Mb or more:
        data      6.5Mb
        extdata   2.4Mb
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 16 marked UTF-8 strings
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

