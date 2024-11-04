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

# brokenstick

<details>

* Version: 2.5.0
* GitHub: https://github.com/growthcharts/brokenstick
* Source code: https://github.com/cran/brokenstick
* Date/Publication: 2023-03-22 23:00:06 UTC
* Number of recursive dependencies: 118

Run `revdepcheck::cloud_details(, "brokenstick")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library("testthat")
      > library("brokenstick")
      > 
      > test_check("brokenstick")
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 56 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-brokenstick.R:26:3'): accepts integer outcome ──────────────────
      Error: `Sigma` is symmetric but not positive
      Backtrace:
           ▆
        1. ├─testthat::expect_silent(brokenstick(f, data, knots = 0:3)) at test-brokenstick.R:26:3
        2. │ └─testthat:::quasi_capture(enquo(object), NULL, evaluate_promise)
        3. │   ├─testthat (local) .capture(...)
        4. │   │ ├─withr::with_output_sink(...)
        5. │   │ │ └─base::force(code)
        6. │   │ ├─base::withCallingHandlers(...)
        7. │   │ └─base::withVisible(code)
        8. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        9. └─brokenstick::brokenstick(f, data, knots = 0:3)
       10.   └─brokenstick:::brokenstick_bridge(...)
       11.     └─brokenstick::kr(y = y, x = X, g = g, control = control)
       12.       └─brokenstick:::kr_vector(y, ry, xg, type, intercept = FALSE, control = control)
       13.         └─matrixsampling::rwishart(n = 1L, nu = nu, Sigma = chol2inv(chol.default(symridge(psi_smoothed))))
       14.           └─matrixsampling:::matrixroot(Sigma, symmetric = !checkSymmetry)
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 56 ]
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
      
      `actual$default_duckdb_connection$con@conn_ref` is <pointer: 0x55c9927f7780>
      `expected$default_duckdb_connection$con@conn_ref` is <pointer: 0x55c993a9f260>
      
      `actual$default_duckdb_connection$con@driver@database_ref` is <pointer: 0x55c992e47e40>
      `expected$default_duckdb_connection$con@driver@database_ref` is <pointer: 0x55c993e65850>
      
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
      
      actual$duckplyr_macros[11:17] vs expected$duckplyr_macros[11:17]
        ___log10"(x) AS CASE WHEN x < 0 THEN CAST('NaN' AS double) WHEN x = 0 THEN CAST('-Inf' AS double) ELSE log10(x) END"
        ___log"(x) AS CASE WHEN x < 0 THEN CAST('NaN' AS double) WHEN x = 0 THEN CAST('-Inf' AS double) ELSE ln(x) END"
        grepl"(pattern, x) AS (CASE WHEN x IS NULL THEN FALSE ELSE regexp_matches(x, pattern) END)"
      - if_else"(test, yes, no) AS (CASE WHEN test THEN yes ELSE no END)"
      + if_else"(test, yes, no) AS (CASE WHEN test IS NULL THEN NULL ELSE CASE WHEN test THEN yes ELSE no END END)"
        |"(x, y) AS (x OR y)"
        &"(x, y) AS (x AND y)"
        !"(x) AS (NOT x)"
      
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
      
      body(actual$rel_aggregate.duckdb_relation)[5:9] vs body(expected$rel_aggregate.duckdb_relation)[5:10]
        `        aggregates = duckdb_aggregates)`
        `    meta_rel_register(out, expr(duckdb$rel_aggregate(!!meta_rel_get(rel)$name, `
        `        groups = list(!!!to_duckdb_exprs_meta(groups)), aggregates = list(!!!to_duckdb_exprs_meta(aggregates)))))`
      - `    out`
      - `}`
      + `    check_duplicate_names(out)`
      + `    out`
      + `}`
      
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
      
      body(actual$rel_join.duckdb_relation)[16:20] vs body(expected$rel_join.duckdb_relation)[16:21]
        `            !!meta_rel_get(right)$name, list(!!!to_duckdb_exprs_meta(conds)), `
        `            !!join, !!join_ref_type)))`
        `    }`
      - `    out`
      - `}`
      + `    check_duplicate_names(out)`
      + `    out`
      + `}`
      
      `environment(actual$rel_join.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_join.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_join.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_join.relational_df)` is <env:namespace:dplyr>
      
      body(actual$rel_join_impl)[12:17] vs body(expected$rel_join_impl)[12:20]
        `    }`
        `    else {`
        `        by <- as_join_by(by, error_call = error_call)`
        `    }`
      + `    if (mutating) {`
      + `        check_relationship(relationship, x, y, by, error_call = error_call)`
      + `    }`
        `    x_by <- by$x`
        `    y_by <- by$y`
        `    x_rel <- duckdb_rel_from_df(x)`
      
      body(actual$rel_join_impl)[20:29] vs body(expected$rel_join_impl)[23:32]
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
      
      `formals(actual$rel_join_impl)` is length 8
      `formals(expected$rel_join_impl)` is length 9
      
      names(formals(actual$rel_join_impl))[5:8] vs names(formals(expected$rel_join_impl))[5:9]
        "na_matches"
        "suffix"
        "keep"
      - "error_call"
      + "relationship"
      + "error_call"
      
      `formals(actual$rel_join_impl)$relationship` is absent
      `formals(expected$rel_join_impl)$relationship` is NULL
      
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
      
      body(actual$rel_project.duckdb_relation)[3:7] vs body(expected$rel_project.duckdb_relation)[3:8]
        `    out <- duckdb$rel_project(rel, duckdb_exprs)`
        `    meta_rel_register(out, expr(duckdb$rel_project(!!meta_rel_get(rel)$name, `
        `        list(!!!to_duckdb_exprs_meta(exprs)))))`
      - `    out`
      - `}`
      + `    check_duplicate_names(out)`
      + `    out`
      + `}`
      
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
      `expected$rel_stats_env$rel_aggregate`: 33
      
        `actual$rel_stats_env$rel_distinct`: 10
      `expected$rel_stats_env$rel_distinct`: 19
      
        `actual$rel_stats_env$rel_filter`: 103
      `expected$rel_stats_env$rel_filter`:  27
      
        `actual$rel_stats_env$rel_join`: 71
      `expected$rel_stats_env$rel_join`: 11
      
      `actual$rel_stats_env$rel_limit` is an integer vector (5)
      `expected$rel_stats_env$rel_limit` is absent
      
        `actual$rel_stats_env$rel_names`: 777
      `expected$rel_stats_env$rel_names`: 390
      
        `actual$rel_stats_env$rel_order`: 282
      `expected$rel_stats_env$rel_order`:  82
      
        `actual$rel_stats_env$rel_project`: 940
      `expected$rel_stats_env$rel_project`: 364
      
        `actual$rel_stats_env$rel_set_alias`: 142
      `expected$rel_stats_env$rel_set_alias`:  22
      
        `actual$rel_stats_env$rel_to_df`: 509
      `expected$rel_stats_env$rel_to_df`: 220
      
      `environment(actual$rel_stats_get)` is <env:namespace:duckplyr>
      `environment(expected$rel_stats_get)` is <env:namespace:dplyr>
      
      `environment(actual$rel_to_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_to_df)` is <env:namespace:dplyr>
      
      body(actual$rel_to_df.duckdb_relation) vs body(expected$rel_to_df.duckdb_relation)
        `{`
      - `    if (anyDuplicated(tolower(names(rel)))) {`
      - `        cli::cli_abort("Column names are case-insensitive in duckdb, fallback required.")`
      - `    }`
        `    duckdb$rel_to_altrep(rel)`
        `}`
      
      `environment(actual$rel_to_df.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_to_df.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_to_df.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_to_df.relational_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_translate)` is <env:namespace:duckplyr>
      `environment(expected$rel_translate)` is <env:namespace:dplyr>
      
      body(actual$rel_translate_dots)[2:18] vs body(expected$rel_translate_dots)[2:7]
        `    if (is.null(names(dots))) {`
        `        map(dots, rel_translate, data)`
        `    }`
      - `    else if (forbid_new) {`
      - `        out <- accumulate(seq_along(dots), .init = NULL, function(.x, `
      - `            .y) {`
      - `            new <- names(dots)[[.y]]`
      - `            translation <- rel_translate(dots[[.y]], alias = new, `
      - `                data, names_forbidden = .x$new)`
      - `            list(new = c(.x$new, new), translation = c(.x$translation, `
      and 7 more ...
      
      `formals(actual$rel_translate_dots)` is length 3
      `formals(expected$rel_translate_dots)` is length 2
      
      `names(formals(actual$rel_translate_dots))`:   "dots" "data" "forbid_new"
      `names(formals(expected$rel_translate_dots))`: "dots" "data"             
      
      `formals(actual$rel_translate_dots)$forbid_new` is a logical vector (FALSE)
      `formals(expected$rel_translate_dots)$forbid_new` is absent
      
      `environment(actual$rel_translate_dots)` is <env:namespace:duckplyr>
      `environment(expected$rel_translate_dots)` is <env:namespace:dplyr>
      
      body(actual$rel_translate_lang)[47:52] vs body(expected$rel_translate_lang)[47:55]
        `            }`
        `        } else {`
        `            has_na <- FALSE`
        `        }`
      + `        if (length(values) > 100) {`
      + `            cli::cli_abort("Can't translate {.code {name}} with more than 100 values.")`
      + `        }`
        `        consts <- map(values, do_translate)`
        `        ops <- map(consts, ~list(lhs, .x))`
        `        cmp <- map(ops, relexpr_function, name = "r_base::==")`
      
      body(actual$rel_translate_lang)[71:77] vs body(expected$rel_translate_lang)[74:82]
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
      
      body(actual$rel_try)[1:9] vs body(expected$rel_try)[1:13]
        `{`
        `    call_name <- as.character(sys.call(-1)[[1]])`
      + `    meta_call(call_name)`
        `    if (length(call_name) == 1 && !(call_name %in% stats$calls)) {`
        `        stats$calls <- c(stats$calls, call_name)`
        `    }`
        `    stats$attempts <- stats$attempts + 1L`
      + `    if (Sys.getenv("DUCKPLYR_TELEMETRY_PREP_TEST") == "TRUE") {`
      + `        force(call)`
      + `    }`
      and 3 more ...
      
      body(actual$rel_try)[33:46] vs body(expected$rel_try)[37:42]
        `            }`
        `            return()`
        `        }`
      - `    }`
      - `    max_expression_depth <- DBI::dbGetQuery(get_default_duckdb_connection(), `
      - `        "SELECT current_setting('max_expression_depth')")[[1]]`
      - `    if (max_expression_depth != 100) {`
      - `        DBI::dbExecute(get_default_duckdb_connection(), "SET max_expression_depth TO 100")`
      - `        withr::defer({`
      - `            DBI::dbExecute(get_default_duckdb_connection(), "SET max_expression_depth TO 200")`
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
      `expected$stats$attempts`:  933
      
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
      `expected$stats$fallback`: 726
      
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
      
      🛠: 1603
      🔨:  864
      🦆:  739
      add_count, anti_join, arrange, compute, count, cross_join, distinct, do, eval, filter, full_join, group_by, group_keys, group_map, group_modify, group_split, head, inner_join, intersect, left_join, mutate, mutate.data.frame, nest_join, pull, reframe, relocate, rename, rename_with, right_join, rows_append, rows_delete, rows_insert, rows_patch, rows_update, rows_upsert, rowwise, select, semi_join, setdiff, setequal, slice, slice_head, slice_sample, slice_tail, summarise, symdiff, transmute, ungroup, union_all
      
      00:01:00.381271
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
      
      The following object is masked from 'package:testthat':
      
          matches
      
      The following objects are masked from 'package:stats':
      
          filter, lag
      
      The following objects are masked from 'package:base':
      
          intersect, setdiff, setequal, union
      
      Loading required package: ggplot2
      Loading required package: splitfngr
      Loading required package: numDeriv
      Loading required package: rmarkdown
      Loading required package: tidyr
      
      Attaching package: 'tidyr'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      > 
      > test_check("GauPro")
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 3086 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test_kernel_model_and_kernels.R:215:7'): Cts kernels 1D ───────────
      5 Cubic gpvmatches 17 / 39 seed = 463362 is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test_kernel_model_and_kernels.R:215:7'): Cts kernels 1D ───────────
      17 Cubic gpvmatches 17 / 39 seed = 463362 is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 3086 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 14.2Mb
      sub-directories of 1Mb or more:
        R      2.0Mb
        libs  11.4Mb
    ```

# LMoFit

<details>

* Version: 0.1.7
* GitHub: NA
* Source code: https://github.com/cran/LMoFit
* Date/Publication: 2024-05-14 07:33:23 UTC
* Number of recursive dependencies: 62

Run `revdepcheck::cloud_details(, "LMoFit")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is  6.5Mb
      sub-directories of 1Mb or more:
        data   6.0Mb
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

# PubChemR

<details>

* Version: 2.1.1
* GitHub: https://github.com/selcukorkmaz/PubChemR
* Source code: https://github.com/cran/PubChemR
* Date/Publication: 2024-10-01 14:20:01 UTC
* Number of recursive dependencies: 68

Run `revdepcheck::cloud_details(, "PubChemR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘PubChemR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: get_all_sources
    > ### Title: Retrieve All Sources from PubChem
    > ### Aliases: get_all_sources
    > 
    > ### ** Examples
    > 
    > get_all_sources(
    +   domain = 'substance'
    + )
    Error in value[[3L]](cond) : 
      Failed to retrieve sources for the specified domain: c(Code = "PUGREST.ServerBusy", Message = "Too many requests or server too busy")
    Calls: get_all_sources ... tryCatch -> tryCatchList -> tryCatchOne -> <Anonymous>
    Execution halted
    ```

## In both

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
      > library(PubChemR)
      > 
      > # Functions used globally in package tests (testthat) ----
      > allSuccess <- function(object){
      +   all(unlist(lapply(object$result, "[[", "success")))
      + }
      > 
      > testRequest <- function(object, ...){
      +   test_that(paste0("pulling via '", request_args(object, "namespace"), "' is succesfull"), {
      +     expect_true(allSuccess(object))
      +   })
      + 
      +   test_that("prints output to the R Console", {
      +     expect_output(print(object))
      +   })
      + }
      > 
      > # Set 'skipTests' FALSE to run test codes. This is set TRUE to skip
      > # all tests on GitHub actions since some of PubChem requests were incomplete due to
      > # timeout and/or API related issues. BUILD & CHECK actions on GitHub returns error
      > # even if all tests were passed on local installations of R.
      > skipTests <- FALSE
      > 
      > if (!skipTests){
      +   test_check("PubChemR")
      + }
      The file has been saved to '/tmp/Rtmpnq0onf/aspirin.json'
      The file has been saved to '/tmp/Rtmpnq0onf/aspirin.json'
      The file has been saved to '/tmp/Rtmpnq0onf/aspirin.json'
      The file has been saved to '/tmp/Rtmpnq0onf/aspirin.json'
      The file has been saved to '/tmp/Rtmpnq0onf/aspirin.sdf'
      Request failed [400]. Retrying in 1 seconds...
      Request failed [400]. Retrying in 5.1 seconds...
      SDF file saved successfully:
        File Name: 'aspirin_20241103_213017.sdf'
        Saved at: /tmp/Rtmpnq0onf
      SDF file saved successfully:
        File Name: 'file.sdf'
        Saved at: /tmp/Rtmpnq0onf
      'path' is not specified. Saving files into a temporary folder.
      SDF file saved successfully:
        File Name: 'file.sdf'
        Saved at: /tmp/Rtmpnq0onf
      
       PubChem Substance Details (comment)
      
       Same as: <a href="http://pubchem.ncbi.nlm.nih.gov/summary/summary.cgi?sid=7847177">D00109</a>
       Is a reactant of enzyme EC: 3.1.1.55
      
      
       PubChem Substance Details (comment)
      
       Same as: <a href="http://pubchem.ncbi.nlm.nih.gov/summary/summary.cgi?sid=7847177">D00109</a>
       Is a reactant of enzyme EC: 3.1.1.55
      
      [ FAIL 6 | WARN 16 | SKIP 0 | PASS 199 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-get_aids.R:20:5'): pulling aids via 'cid' is succesfull ──────
      allSuccess(object) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-get_aids.R:24:5'): AIDs succesfully returns 'data.frame' and 'list' ──
      {
          ...
      } is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      Backtrace:
          ▆
       1. └─PubChemR (local) toDataFrame(object) at test-get_aids.R:24:5
       2.   └─testthat::expect_true(...) at test-get_aids.R:5:3
      ── Failure ('test-get_compounds.R:30:1'): pulling via 'smiles' is succesfull ───
      allSuccess(object) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-get_properties.R:12:1'): pulling via 'cid' is succesfull ─────
      allSuccess(object) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-get_properties.R:24:3'): all requested properties returned successfully. ──
      all(propNamesRequested %in% propNamesReturned) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-get_properties.R:38:3'): .slot vector of length >1 returns warning and accepts the first element in .slot ──
      (all(is.data.frame(tmp), nrow(tmp) == 1, ncol(tmp) == 2)) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      
      [ FAIL 6 | WARN 16 | SKIP 0 | PASS 199 ]
      Error: Test failures
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
      [ FAIL 9 | WARN 1 | SKIP 0 | PASS 33 ]
      
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
      
      [ FAIL 9 | WARN 1 | SKIP 0 | PASS 33 ]
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

# SDMtune

<details>

* Version: 1.3.1
* GitHub: https://github.com/ConsBiol-unibern/SDMtune
* Source code: https://github.com/cran/SDMtune
* Date/Publication: 2023-07-03 12:20:02 UTC
* Number of recursive dependencies: 125

Run `revdepcheck::cloud_details(, "SDMtune")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is  5.2Mb
      sub-directories of 1Mb or more:
        R      3.0Mb
        libs   1.0Mb
    ```

# SSDM

<details>

* Version: 0.2.9
* GitHub: https://github.com/sylvainschmitt/SSDM
* Source code: https://github.com/cran/SSDM
* Date/Publication: 2023-10-24 13:40:18 UTC
* Number of recursive dependencies: 118

Run `revdepcheck::cloud_details(, "SSDM")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is  5.7Mb
      sub-directories of 1Mb or more:
        R     2.0Mb
        doc   3.3Mb
    ```

