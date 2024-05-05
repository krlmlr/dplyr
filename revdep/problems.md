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

