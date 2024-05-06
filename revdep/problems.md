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
      [ FAIL 2 | WARN 0 | SKIP 8 | PASS 281 ]
      
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
      
      [ FAIL 2 | WARN 0 | SKIP 8 | PASS 281 ]
      Error: Test failures
      Execution halted
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
      • On CRAN (5): 'test-outer-methods.R:188:3', 'test-outer-methods.R:335:3',
        'test-outer-methods.R:482:3', 'test-outer-methods.R:513:3',
        'test-outer-methods.R:524:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-results-longcr.R:214:3'): as_longcr.widecr does simple converting ──
      `output` not identical to `output_ref`.
      Length mismatch: comparison on first 3 components
      ── Failure ('test-results-longcr.R:236:3'): as_longcr.widecr orders by game and pair id during repair ──
      `output` not equal to `output_ref`.
      Length mismatch: comparison on first 3 components
      ── Failure ('test-results-longcr.R:253:3'): as_longcr.widecr preserves column types ──
      as_longcr(input_types1, repair = TRUE) not identical to `output_ref_types1`.
      Length mismatch: comparison on first 3 components
      Factor 'game'
      ── Failure ('test-results-longcr.R:268:3'): as_longcr.widecr preserves column types ──
      as_longcr(input_types2, repair = TRUE) not identical to `output_ref_types2`.
      Length mismatch: comparison on first 3 components
      Character 'game'
      ── Failure ('test-results-longcr.R:279:3'): as_longcr.widecr preserves column types ──
      as_longcr(input_types3, repair = TRUE) not identical to `output_ref_types3`.
      Length mismatch: comparison on first 3 components
      Factor 'player'
      ── Failure ('test-results-longcr.R:290:3'): as_longcr.widecr preserves column types ──
      as_longcr(input_types4, repair = TRUE) not identical to `output_ref_types4`.
      Length mismatch: comparison on first 3 components
      Character 'player'
      ── Failure ('test-results-longcr.R:301:3'): as_longcr.widecr preserves column types ──
      as_longcr(input_types5, repair = TRUE) not identical to `output_ref_types5`.
      Length mismatch: comparison on first 3 components
      Character 'score'
      ── Failure ('test-results-longcr.R:318:3'): as_longcr.widecr preserves column types ──
      as_longcr(input_types6, repair = TRUE) not identical to `output_ref_types6`.
      Length mismatch: comparison on first 3 components
      List-column 'score'
      ── Failure ('test-results-longcr.R:339:3'): as_longcr.widecr removes duplicated 'game'-'player'
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

# dyngen

<details>

* Version: 1.0.5
* GitHub: https://github.com/dynverse/dyngen
* Source code: https://github.com/cran/dyngen
* Date/Publication: 2022-10-12 15:22:39 UTC
* Number of recursive dependencies: 209

Run `revdepcheck::cloud_details(, "dyngen")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘dyngen-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: list_backbones
    > ### Title: List of all predefined backbone models
    > ### Aliases: list_backbones backbone_bifurcating
    > ###   backbone_bifurcating_converging backbone_bifurcating_cycle
    > ###   backbone_bifurcating_loop backbone_branching backbone_binary_tree
    > ###   backbone_consecutive_bifurcating backbone_trifurcating
    > ###   backbone_converging backbone_cycle backbone_cycle_simple
    > ###   backbone_linear backbone_linear_simple backbone_disconnected
    > 
    > ### ** Examples
    > 
    > names(list_backbones())
     [1] "bifurcating"             "bifurcating_converging" 
     [3] "bifurcating_cycle"       "bifurcating_loop"       
     [5] "binary_tree"             "branching"              
     [7] "consecutive_bifurcating" "converging"             
     [9] "cycle"                   "cycle_simple"           
    [11] "disconnected"            "linear"                 
    [13] "linear_simple"           "trifurcating"           
    > 
    > bb <- backbone_bifurcating()
    > bb <- backbone_bifurcating_converging()
    > bb <- backbone_bifurcating_cycle()
    > bb <- backbone_bifurcating_loop()
    > bb <- backbone_binary_tree()
    > bb <- backbone_branching()
    > bb <- backbone_consecutive_bifurcating()
    > bb <- backbone_converging()
    > bb <- backbone_cycle()
    > bb <- backbone_cycle_simple()
    > bb <- backbone_disconnected()
    Error: length(leps) not equal to 1
    Execution halted
    ```

# healthdb

<details>

* Version: 0.2.0
* GitHub: https://github.com/KevinHzq/healthdb
* Source code: https://github.com/cran/healthdb
* Date/Publication: 2024-05-05 21:20:02 UTC
* Number of recursive dependencies: 66

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
      [ FAIL 1 | WARN 2 | SKIP 6 | PASS 210 ]
      
      ══ Skipped tests (6) ═══════════════════════════════════════════════════════════
      • On CRAN (6): 'test-define_case.R:42:3', 'test-if_dates.R:2:3',
        'test-if_dates.R:26:3', 'test-if_dates.R:33:3',
        'test-restrict_dates_sql.R:26:3', 'test-restrict_dates_sql.R:98:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-exclude.R:56:3'): edge case - variable contains NA on database works ──
      out_db %>% dplyr::collect() (`actual`) not equal to dplyr::filter(...) (`expected`).
      
      actual vs expected
                       uid clnt_id dates   ans diagx diagx_1 diagx_2
        actual[1, ]      1       3 18521 any     s       x       999
        actual[2, ]      2      20 18498 any     e       t       999
      - actual[3, ]      3       5 17537 any     c       r       NA 
      + expected[3, ]    4      11 16502 any     f       i       999
      - actual[4, ]      4      11 16502 any     f       i       999
      + expected[4, ]    5      40 18500 any     n       u       999
      - actual[5, ]      5      40 18500 any     n       u       999
      + expected[5, ]    6      17 17285 any     o       d       999
      - actual[6, ]      6      17 17285 any     o       d       999
      + expected[6, ]   15      17 16800 noise   999     999     999
      - actual[7, ]      7      11 16945 any     h       e       NA 
      + expected[7, ]   16       5 18012 noise   999     NA      999
      - actual[8, ]      8       9 18592 any     w       m       NA 
      + expected[8, ]   17      50 18267 noise   999     999     999
      - actual[9, ]     13      13 16784 noise   999     999     NA 
      + expected[9, ]   18      21 18516 noise   999     999     999
      - actual[10, ]    14      15 17919 noise   999     999     NA 
      + expected[10, ]  19      14 17124 noise   999     999     999
      and 11 more ...
      
        `actual$uid`: 1 2 3 4 5  6  7  8 13 14 and 11 more...
      `expected$uid`: 1 2 4 5 6 15 16 17 18 19            ...
      
        `actual$clnt_id`: 3 20  5 11 40 17 11  9 13 15 and 11 more...
      `expected$clnt_id`: 3 20 11 40 17 17  5 50 21 14            ...
      
           actual$dates | expected$dates                
       [1] 18521        | 18521          [1]            
       [2] 18498        | 18498          [2]            
       [3] 17537        - 16502          [3]            
       [4] 16502        - 18500          [4]            
       [5] 18500        - 17285          [5]            
       [6] 17285        - 16800          [6]            
       [7] 16945        - 18012          [7]            
       [8] 18592        - 18267          [8]            
       [9] 16784        - 18516          [9]            
      [10] 17919        - 17124          [10]           
       ... ...            ...            and 11 more ...
      
      `actual$ans[3:11]`:  "any" "any" "any" "any" "any" "any" "noise" "noise" "noise"
      `expected$ans[3:8]`: "any" "any" "any"                   "noise" "noise" "noise"
      
           actual$ans | expected$ans     
      [13] "noise"    | "noise"      [10]
      [14] "noise"    | "noise"      [11]
      [15] "noise"    | "noise"      [12]
      [16] "noise"    -                  
      [17] "noise"    -                  
      [18] "noise"    -                  
      [19] "noise"    -                  
      [20] "noise"    -                  
      [21] "noise"    -                  
      
      `actual$diagx[1:11]`:  "s" "e" "c" "f" "n" "o" "h" "w" "999" "999" and 1 more...
      `expected$diagx[1:8]`: "s" "e"     "f" "n" "o"         "999" "999" ...          
      
      `actual$diagx[13:21]`:   "999" "999" "999" "999" "999" "999" "999" "999" "999"
      `expected$diagx[10:12]`: "999" "999" "999"                                    
      
      `actual$diagx_1`:   "x" "t" "r" "i" "u" "d" "e" "m" "999" "999" and 11 more...
      `expected$diagx_1`: "x" "t"     "i" "u" "d"         "999"       ...           
      
           actual$diagx_2 | expected$diagx_2                
       [1] "999"          | "999"            [3]            
       [2] "999"          | "999"            [4]            
       [3] NA             - "999"            [5]            
       [4] "999"          | "999"            [6]            
       [5] "999"          | "999"            [7]            
       [6] "999"          | "999"            [8]            
       [7] NA             - "999"            [9]            
       [8] NA             - "999"            [10]           
       [9] NA             -                                 
      [10] NA             -                                 
       ... ...              ...              and 11 more ...
      
      [ FAIL 1 | WARN 2 | SKIP 6 | PASS 210 ]
      Error: Test failures
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

# MassWateR

<details>

* Version: 2.1.4
* GitHub: https://github.com/massbays-tech/MassWateR
* Source code: https://github.com/cran/MassWateR
* Date/Publication: 2023-11-19 15:20:07 UTC
* Number of recursive dependencies: 137

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
    > respth <- system.file('extdata/ExampleResults.xlsx', package = 'MassWateR')
    > 
    > # results data
    > resdat <- readMWRresults(respth)
    Running checks on results data...
    
    	Checking column names... OK
    	Checking all required columns are present... OK
    	Checking valid Activity Types... OK
    	Checking Activity Start Date formats... OK
    	Checking depth data present... OK
    	Checking for non-numeric values in Activity Depth/Height Measure... OK
    	Checking Activity Depth/Height Unit... OK
    	Checking Activity Relative Depth Name formats... OK
    	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
    	Checking Characteristic Name formats... OK
    	Checking Result Values... OK
    	Checking QC Reference Values... OK
    	Checking for missing entries for Result Unit... OK
    	Checking if more than one unit per Characteristic Name... OK
    	Checking acceptable units for each entry in Characteristic Name... OK
    
    All checks passed!
    > 
    > # accuracy path
    > accpth <- system.file('extdata/ExampleDQOAccuracy.xlsx', 
    +      package = 'MassWateR')
    > 
    > # accuracy data
    > accdat <- readMWRacc(accpth)
    Running checks on data quality objectives for accuracy...
    
    	Checking column names... OK
    	Checking all required columns are present... OK
    	Checking column types... OK
    	Checking no "na" in Value Range... OK
    	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
    	Checking overlaps in Value Range... OK
    	Checking gaps in Value Range... OK
    	Checking Parameter formats... OK
    	Checking for missing entries for unit (uom)... OK
    	Checking if more than one unit (uom) per Parameter... OK
    	Checking acceptable units (uom) for each entry in Parameter... OK
    	Checking empty columns... OK
    
    All checks passed!
    > 
    > # site data path
    > sitpth <- system.file('extdata/ExampleSites.xlsx', package = 'MassWateR')
    > 
    > # site data
    > sitdat <- readMWRsites(sitpth)
    Running checks on site metadata...
    
    	Checking column names... OK
    	Checking all required columns are present... OK
    	Checking for missing latitude or longitude values... OK
    	Checking for non-numeric values in latitude... OK
    	Checking for non-numeric values in longitude... OK
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
      
      The following objects are masked from 'package:base':
      
          date, intersect, setdiff, union
      
      
      Attaching package: 'dplyr'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      The following objects are masked from 'package:stats':
      
          filter, lag
      
      The following objects are masked from 'package:base':
      
          intersect, setdiff, setequal, union
      
      Running checks on data quality objectives for accuracy...
      
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... OK
      	Checking Parameter formats... OK
      	Checking for missing entries for unit (uom)... OK
      	Checking if more than one unit (uom) per Parameter... OK
      	Checking acceptable units (uom) for each entry in Parameter... OK
      	Checking empty columns... WARNING
      
      All checks passed (1 WARNING(s))!
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... WARNING
      	Checking Parameter formats... OK
      	Checking for missing entries for unit (uom)... OK
      	Checking if more than one unit (uom) per Parameter... OK
      	Checking acceptable units (uom) for each entry in Parameter... OK
      	Checking empty columns... OK
      
      All checks passed (1 WARNING(s))!
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... OK
      	Checking Parameter formats... OK
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... OK
      	Checking Parameter formats... OK
      	Checking for missing entries for unit (uom)... OK
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... WARNING
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... OK
      	Checking Parameter formats... OK
      	Checking for missing entries for unit (uom)... OK
      	Checking if more than one unit (uom) per Parameter... OK
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... OK
      	Checking Parameter formats... OK
      	Checking for missing entries for unit (uom)... OK
      	Checking if more than one unit (uom) per Parameter... OK
      	Checking acceptable units (uom) for each entry in Parameter... OK
      	Checking empty columns... WARNING
      
      All checks passed (1 WARNING(s))!
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      Running checks on data quality objectives for frequency and completeness...
      
      Running checks on data quality objectives for frequency and completeness...
      
      	Checking column names... OK
      Running checks on data quality objectives for frequency and completeness...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      Running checks on data quality objectives for frequency and completeness...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for non-numeric values... OK
      Running checks on data quality objectives for frequency and completeness...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for non-numeric values... OK
      	Checking for values outside of 0 and 100... OK
      Running checks on data quality objectives for frequency and completeness...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for non-numeric values... OK
      	Checking for values outside of 0 and 100... OK
      	Checking Parameter formats... OK
      	Checking empty columns... WARNING
      
      All checks passed (1 WARNING(s))!
      Running checks on results data...
      
      Running checks on results data...
      
      	Checking column names... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... WARNING
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      	Checking if more than one unit per Characteristic Name... OK
      	Checking acceptable units for each entry in Characteristic Name... OK
      
      All checks passed (1 WARNING(s))!
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... WARNING
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      	Checking if more than one unit per Characteristic Name... OK
      	Checking acceptable units for each entry in Characteristic Name... OK
      
      All checks passed (1 WARNING(s))!
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... WARNING
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      	Checking if more than one unit per Characteristic Name... OK
      	Checking acceptable units for each entry in Characteristic Name... OK
      
      All checks passed (1 WARNING(s))!
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      	Checking if more than one unit per Characteristic Name... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      	Checking if more than one unit per Characteristic Name... OK
      	Checking acceptable units for each entry in Characteristic Name... OK
      Running checks on site metadata...
      
      Running checks on site metadata...
      
      	Checking column names... OK
      Running checks on site metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      Running checks on site metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for missing latitude or longitude values... OK
      Running checks on site metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for missing latitude or longitude values... OK
      	Checking for non-numeric values in latitude... OK
      Running checks on site metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for missing latitude or longitude values... OK
      	Checking for non-numeric values in latitude... OK
      	Checking for non-numeric values in longitude... OK
      Running checks on site metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for missing latitude or longitude values... OK
      	Checking for non-numeric values in latitude... OK
      	Checking for non-numeric values in longitude... OK
      	Checking for positive values in longitude... OK
      Running checks on WQX metadata...
      
      Running checks on WQX metadata...
      
      	Checking column names... OK
      Running checks on WQX metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      Running checks on WQX metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking unique parameters... OK
      	Checking Parameter formats... WARNING
      
      All checks passed (1 WARNING(s))!
      Running checks on data quality objectives for frequency and completeness...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for non-numeric values... OK
      	Checking for values outside of 0 and 100... OK
      	Checking Parameter formats... OK
      	Checking empty columns... OK
      
      All checks passed!
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... OK
      	Checking Parameter formats... OK
      	Checking for missing entries for unit (uom)... OK
      	Checking if more than one unit (uom) per Parameter... OK
      	Checking acceptable units (uom) for each entry in Parameter... OK
      	Checking empty columns... OK
      
      All checks passed!
      Running checks on data quality objectives for frequency and completeness...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for non-numeric values... OK
      	Checking for values outside of 0 and 100... OK
      	Checking Parameter formats... OK
      	Checking empty columns... OK
      
      All checks passed!
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      	Checking if more than one unit per Characteristic Name... OK
      	Checking acceptable units for each entry in Characteristic Name... OK
      
      All checks passed!
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      	Checking if more than one unit per Characteristic Name... OK
      	Checking acceptable units for each entry in Characteristic Name... OK
      
      All checks passed!
      Running checks on site metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for missing latitude or longitude values... OK
      	Checking for non-numeric values in latitude... OK
      	Checking for non-numeric values in longitude... OK
      	Checking for positive values in longitude... OK
      	Checking for missing entries for Monitoring Location ID... OK
      
      All checks passed!
      Running checks on WQX metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking unique parameters... OK
      	Checking Parameter formats... OK
      
      All checks passed!
      Running checks on WQX metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking unique parameters... OK
      	Checking Parameter formats... OK
      
      All checks passed!
      [ FAIL 5 | WARN 17 | SKIP 5 | PASS 183 ]
      
      ══ Skipped tests (5) ═══════════════════════════════════════════════════════════
      • On CRAN (5): 'test-anlzMWRmap.R:2:3', 'test-anlzMWRmap.R:8:3',
        'test-anlzMWRmap.R:14:3', 'test-anlzMWRmap.R:24:3', 'test-anlzMWRmap.R:30:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-anlzMWRdate.R:22:3'): Checking output format group as location ──
      Error: Location group not found in site metadata file for DO: Tributaries, should be any of Assabet
      Backtrace:
          ▆
       1. └─MassWateR::anlzMWRdate(...) at test-anlzMWRdate.R:22:3
       2.   └─MassWateR::utilMWRfilter(...)
      ── Error ('test-anlzMWRdate.R:34:3'): Checking output format group as location, repel = FALSE ──
      Error: Location group not found in site metadata file for DO: Tributaries, should be any of Assabet
      Backtrace:
          ▆
       1. └─MassWateR::anlzMWRdate(...) at test-anlzMWRdate.R:34:3
       2.   └─MassWateR::utilMWRfilter(...)
      ── Error ('test-anlzMWRoutlier.R:22:3'): Checking output format log-scale ──────
      Error: E.coli not found or no surface data in results file, should be one of DO
      Backtrace:
          ▆
       1. └─MassWateR::anlzMWRoutlier(...) at test-anlzMWRoutlier.R:22:3
       2.   └─MassWateR::utilMWRfilter(resdat = resdat, param = param, dtrng = dtrng)
      ── Error ('test-anlzMWRsite.R:17:3'): Checking output format jittered boxplot, byresultatt ──
      Error: Ammonia not found or no surface data in results file, should be one of DO
      Backtrace:
          ▆
       1. └─MassWateR::anlzMWRsite(...) at test-anlzMWRsite.R:17:3
       2.   └─MassWateR::utilMWRfilter(...)
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
      
      The following objects are masked from 'package:base':
      
          date, intersect, setdiff, union
      
      
      Attaching package: 'dplyr'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      The following objects are masked from 'package:stats':
      
          filter, lag
      
      The following objects are masked from 'package:base':
      
          intersect, setdiff, setequal, union
      
      Running checks on data quality objectives for accuracy...
      
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... OK
      	Checking Parameter formats... OK
      	Checking for missing entries for unit (uom)... OK
      	Checking if more than one unit (uom) per Parameter... OK
      	Checking acceptable units (uom) for each entry in Parameter... OK
      	Checking empty columns... WARNING
      
      All checks passed (1 WARNING(s))!
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... WARNING
      	Checking Parameter formats... OK
      	Checking for missing entries for unit (uom)... OK
      	Checking if more than one unit (uom) per Parameter... OK
      	Checking acceptable units (uom) for each entry in Parameter... OK
      	Checking empty columns... OK
      
      All checks passed (1 WARNING(s))!
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... OK
      	Checking Parameter formats... OK
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... OK
      	Checking Parameter formats... OK
      	Checking for missing entries for unit (uom)... OK
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... WARNING
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... OK
      	Checking Parameter formats... OK
      	Checking for missing entries for unit (uom)... OK
      	Checking if more than one unit (uom) per Parameter... OK
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... OK
      	Checking Parameter formats... OK
      	Checking for missing entries for unit (uom)... OK
      	Checking if more than one unit (uom) per Parameter... OK
      	Checking acceptable units (uom) for each entry in Parameter... OK
      	Checking empty columns... WARNING
      
      All checks passed (1 WARNING(s))!
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      Running checks on data quality objectives for frequency and completeness...
      
      Running checks on data quality objectives for frequency and completeness...
      
      	Checking column names... OK
      Running checks on data quality objectives for frequency and completeness...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      Running checks on data quality objectives for frequency and completeness...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for non-numeric values... OK
      Running checks on data quality objectives for frequency and completeness...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for non-numeric values... OK
      	Checking for values outside of 0 and 100... OK
      Running checks on data quality objectives for frequency and completeness...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for non-numeric values... OK
      	Checking for values outside of 0 and 100... OK
      	Checking Parameter formats... OK
      	Checking empty columns... WARNING
      
      All checks passed (1 WARNING(s))!
      Running checks on results data...
      
      Running checks on results data...
      
      	Checking column names... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... WARNING
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      	Checking if more than one unit per Characteristic Name... OK
      	Checking acceptable units for each entry in Characteristic Name... OK
      
      All checks passed (1 WARNING(s))!
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... WARNING
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      	Checking if more than one unit per Characteristic Name... OK
      	Checking acceptable units for each entry in Characteristic Name... OK
      
      All checks passed (1 WARNING(s))!
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... WARNING
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      	Checking if more than one unit per Characteristic Name... OK
      	Checking acceptable units for each entry in Characteristic Name... OK
      
      All checks passed (1 WARNING(s))!
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      	Checking if more than one unit per Characteristic Name... OK
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      	Checking if more than one unit per Characteristic Name... OK
      	Checking acceptable units for each entry in Characteristic Name... OK
      Running checks on site metadata...
      
      Running checks on site metadata...
      
      	Checking column names... OK
      Running checks on site metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      Running checks on site metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for missing latitude or longitude values... OK
      Running checks on site metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for missing latitude or longitude values... OK
      	Checking for non-numeric values in latitude... OK
      Running checks on site metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for missing latitude or longitude values... OK
      	Checking for non-numeric values in latitude... OK
      	Checking for non-numeric values in longitude... OK
      Running checks on site metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for missing latitude or longitude values... OK
      	Checking for non-numeric values in latitude... OK
      	Checking for non-numeric values in longitude... OK
      	Checking for positive values in longitude... OK
      Running checks on WQX metadata...
      
      Running checks on WQX metadata...
      
      	Checking column names... OK
      Running checks on WQX metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      Running checks on WQX metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking unique parameters... OK
      	Checking Parameter formats... WARNING
      
      All checks passed (1 WARNING(s))!
      Running checks on data quality objectives for frequency and completeness...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for non-numeric values... OK
      	Checking for values outside of 0 and 100... OK
      	Checking Parameter formats... OK
      	Checking empty columns... OK
      
      All checks passed!
      Running checks on data quality objectives for accuracy...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking column types... OK
      	Checking no "na" in Value Range... OK
      	Checking for text other than <=, ≤, <, >=, ≥, >, ±, %, AQL, BQL, log, or all... OK
      	Checking overlaps in Value Range... OK
      	Checking gaps in Value Range... OK
      	Checking Parameter formats... OK
      	Checking for missing entries for unit (uom)... OK
      	Checking if more than one unit (uom) per Parameter... OK
      	Checking acceptable units (uom) for each entry in Parameter... OK
      	Checking empty columns... OK
      
      All checks passed!
      Running checks on data quality objectives for frequency and completeness...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for non-numeric values... OK
      	Checking for values outside of 0 and 100... OK
      	Checking Parameter formats... OK
      	Checking empty columns... OK
      
      All checks passed!
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      	Checking if more than one unit per Characteristic Name... OK
      	Checking acceptable units for each entry in Characteristic Name... OK
      
      All checks passed!
      Running checks on results data...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking valid Activity Types... OK
      	Checking Activity Start Date formats... OK
      	Checking depth data present... OK
      	Checking for non-numeric values in Activity Depth/Height Measure... OK
      	Checking Activity Depth/Height Unit... OK
      	Checking Activity Relative Depth Name formats... OK
      	Checking values in Activity Depth/Height Measure > 1 m / 3.3 ft... OK
      	Checking Characteristic Name formats... OK
      	Checking Result Values... OK
      	Checking QC Reference Values... OK
      	Checking for missing entries for Result Unit... OK
      	Checking if more than one unit per Characteristic Name... OK
      	Checking acceptable units for each entry in Characteristic Name... OK
      
      All checks passed!
      Running checks on site metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking for missing latitude or longitude values... OK
      	Checking for non-numeric values in latitude... OK
      	Checking for non-numeric values in longitude... OK
      	Checking for positive values in longitude... OK
      	Checking for missing entries for Monitoring Location ID... OK
      
      All checks passed!
      Running checks on WQX metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking unique parameters... OK
      	Checking Parameter formats... OK
      
      All checks passed!
      Running checks on WQX metadata...
      
      	Checking column names... OK
      	Checking all required columns are present... OK
      	Checking unique parameters... OK
      	Checking Parameter formats... OK
      
      All checks passed!
      [ FAIL 5 | WARN 17 | SKIP 5 | PASS 183 ]
      
      ══ Skipped tests (5) ═══════════════════════════════════════════════════════════
      • On CRAN (5): 'test-anlzMWRmap.R:2:3', 'test-anlzMWRmap.R:8:3',
        'test-anlzMWRmap.R:14:3', 'test-anlzMWRmap.R:24:3', 'test-anlzMWRmap.R:30:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-anlzMWRdate.R:22:3'): Checking output format group as location ──
      Error: Location group not found in site metadata file for DO: Tributaries, should be any of Assabet
      Backtrace:
          ▆
       1. └─MassWateR::anlzMWRdate(...) at test-anlzMWRdate.R:22:3
       2.   └─MassWateR::utilMWRfilter(...)
      ── Error ('test-anlzMWRdate.R:34:3'): Checking output format group as location, repel = FALSE ──
      Error: Location group not found in site metadata file for DO: Tributaries, should be any of Assabet
      Backtrace:
          ▆
       1. └─MassWateR::anlzMWRdate(...) at test-anlzMWRdate.R:34:3
       2.   └─MassWateR::utilMWRfilter(...)
      ── Error ('test-anlzMWRoutlier.R:22:3'): Checking output format log-scale ──────
      Error: E.coli not found or no surface data in results file, should be one of DO
      Backtrace:
          ▆
       1. └─MassWateR::anlzMWRoutlier(...) at test-anlzMWRoutlier.R:22:3
       2.   └─MassWateR::utilMWRfilter(resdat = resdat, param = param, dtrng = dtrng)
      ── Error ('test-anlzMWRsite.R:17:3'): Checking output format jittered boxplot, byresultatt ──
      Error: Ammonia not found or no surface data in results file, should be one of DO
      Backtrace:
          ▆
       1. └─MassWateR::anlzMWRsite(...) at test-anlzMWRsite.R:17:3
       2.   └─MassWateR::utilMWRfilter(...)
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

# migraph

<details>

* Version: 1.3.4
* GitHub: https://github.com/stocnet/migraph
* Source code: https://github.com/cran/migraph
* Date/Publication: 2024-03-07 11:50:02 UTC
* Number of recursive dependencies: 120

Run `revdepcheck::cloud_details(, "migraph")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(manynet)
      > library(migraph)
      > 
      > test_check("migraph")
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 266 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-motif_census.R:72:3'): node activity works ───────────────────
      top3(test) not equal to c(333, 207, 3).
      3/3 mismatches (average diff: 167)
      [1] 594 - 333 == 261
      [2] 426 - 207 == 219
      [3]  23 -   3 ==  20
      ── Failure ('test-motif_census.R:79:3'): node exclusivity works ────────────────
      top3(test) not equal to c(1, 0, 0).
      1/3 mismatches
      [1] 2 - 1 == 1
      
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 266 ]
      Error: Test failures
      Execution halted
    ```

# portalr

<details>

* Version: 0.4.1
* GitHub: https://github.com/weecology/portalr
* Source code: https://github.com/cran/portalr
* Date/Publication: 2023-08-23 16:50:02 UTC
* Number of recursive dependencies: 107

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
      [ FAIL 4 | WARN 2 | SKIP 42 | PASS 147 ]
      
      ══ Skipped tests (42) ══════════════════════════════════════════════════════════
      • On CRAN (42): 'test-01-data-retrieval.R:6:5',
        'test-01-data-retrieval.R:39:5', 'test-01-data-retrieval.R:46:5',
        'test-01-data-retrieval.R:61:5', 'test-01-data-retrieval.R:76:5',
        'test-03-summarize-rodents.R:6:3', 'test-03-summarize-rodents.R:32:3',
        'test-03-summarize-rodents.R:38:3', 'test-03-summarize-rodents.R:60:3',
        'test-03-summarize-rodents.R:85:3', 'test-03-summarize-rodents.R:110:3',
        'test-03-summarize-rodents.R:129:3', 'test-03-summarize-rodents.R:195:3',
        'test-99-regression.R:6:3', 'test-99-regression.R:16:3',
        'test-99-regression.R:24:3', 'test-99-regression.R:42:3',
        'test-99-regression.R:66:3', 'test-99-regression.R:76:3',
        'test-99-regression.R:85:3', 'test-99-regression.R:98:3',
        'test-99-regression.R:107:3', 'test-99-regression.R:116:3',
        'test-99-regression.R:128:3', 'test-99-regression.R:139:3',
        'test-99-regression.R:151:3', 'test-99-regression.R:160:3',
        'test-99-regression.R:169:3', 'test-99-regression.R:179:3',
        'test-99-regression.R:193:3', 'test-99-regression.R:205:3',
        'test-99-regression.R:213:3', 'test-99-regression.R:225:3',
        'test-99-regression.R:233:3', 'test-99-regression.R:245:3',
        'test-99-regression.R:253:3', 'test-99-regression.R:265:3',
        'test-99-regression.R:278:3', 'test-99-regression.R:288:3',
        'test-99-regression.R:298:3', 'test-99-regression.R:316:3',
        'test-99-regression.R:328:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-10-summarize_ants.R:10:3'): colony_presence_absence returns expected results ──
      sum(test.colony$presence, na.rm = T) not equal to 4930.
      1/1 mismatches
      [1] 763 - 4930 == -4167
      ── Failure ('test-10-summarize_ants.R:12:3'): colony_presence_absence returns expected results ──
      nrow(test.colony) not equal to 190512.
      1/1 mismatches
      [1] 155232 - 190512 == -35280
      ── Failure ('test-10-summarize_ants.R:38:3'): colony_presence_absence returns expected results ──
      sum(test.colony$presence, na.rm = T) not equal to 1170.
      1/1 mismatches
      [1] 179 - 1170 == -991
      ── Failure ('test-10-summarize_ants.R:40:3'): colony_presence_absence returns expected results ──
      nrow(test.colony) not equal to 3888.
      1/1 mismatches
      [1] 3168 - 3888 == -720
      
      [ FAIL 4 | WARN 2 | SKIP 42 | PASS 147 ]
      Error: Test failures
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

