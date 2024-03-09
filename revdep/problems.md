# arrow

<details>

* Version: 14.0.2.1
* GitHub: https://github.com/apache/arrow
* Source code: https://github.com/cran/arrow
* Date/Publication: 2024-02-23 17:00:11 UTC
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
      [ FAIL 1 | WARN 0 | SKIP 79 | PASS 6465 ]
      
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
        'test-dataset-write.R:591:3', 'test-dataset.R:860:3',
        'test-dplyr-filter.R:291:3', 'test-dplyr-funcs-conditional.R:23:1',
        'test-dplyr-funcs-datetime.R:26:1', 'test-dplyr-funcs-math.R:22:1',
        'test-dplyr-funcs-string.R:21:1', 'test-dplyr-funcs-type.R:24:1',
        'test-dplyr-funcs.R:19:1', 'test-dplyr-glimpse.R:27:3',
        'test-dplyr-glimpse.R:33:3', 'test-dplyr-glimpse.R:39:3',
        'test-dplyr-glimpse.R:45:3', 'test-dplyr-glimpse.R:51:3',
        'test-dplyr-glimpse.R:75:3', 'test-dplyr-glimpse.R:93:3',
        'test-dplyr-glimpse.R:101:3', 'test-dplyr-join.R:125:3',
        'test-dplyr-mutate.R:520:3', 'test-dplyr-query.R:625:3',
        'test-dplyr-slice.R:107:3', 'test-dplyr-summarize.R:307:3',
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
      • https://issues.apache.org/jira/browse/ARROW-7653 (1): 'test-dataset.R:512:3'
      • minio is not installed. (1): 'test-s3-minio.R:19:1'
      • pyarrow not available for testing (1): 'test-python.R:38:1'
      • tolower(Sys.info()[["sysname"]]) != "windows" is TRUE (1):
        'test-compressed.R:27:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-dplyr-summarize.R:550:3'): summarize() with min() and max() ──
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
       1. └─arrow:::compare_dplyr_binding(...) at test-dplyr-summarize.R:550:3
       2.   └─arrow:::expect_equal(via_table, expected, ...) at tests/testthat/helper-expectation.R:102:3
       3.     └─testthat::expect_equal(...) at tests/testthat/helper-expectation.R:43:5
      
      [ FAIL 1 | WARN 0 | SKIP 79 | PASS 6465 ]
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
    > library("autoCovariateSelection")
    > data(rwd)
    > head(rwd, 3)
      person_id index_date event_date event_code event_concept_id domain treatment
    1     21047 2010-06-10 2010-02-21      78650         44825809     dx         1
    2     21047 2010-06-10 2010-03-01       2449         44828786     dx         1
    3     21047 2010-06-10 2010-01-19      25002         44836915     dx         1
      outcome_date last_enrollment_date
    1         <NA>           2011-01-01
    2         <NA>           2011-01-01
    3         <NA>           2011-01-01
    > basetable <- rwd %>% select(person_id, treatment, outcome_date) %>% distinct()
    > head(basetable, 3)
      person_id treatment outcome_date
    1     21047         1         <NA>
    2    378287         1         <NA>
    3    320862         1         <NA>
    > patientIds <- basetable$person_id
    > step1 <- get_candidate_covariates(df = rwd,  domainVarname = "domain",
    + eventCodeVarname = "event_code" , patientIdVarname = "person_id",
    + patientIdVector = patientIds,n = 100, min_num_patients = 10)
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
      
          matches
      
      The following objects are masked from 'package:stats':
      
          filter, lag
      
      The following objects are masked from 'package:base':
      
          intersect, setdiff, setequal, union
      
      > test_check("autoCovariateSelection")
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 3 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-run.R:19:3'): testing end-to-end run of automated covariate selection... ──
      Error: Error evaluating duckdb query: Parser Error: Maximum tree depth of 1000 exceeded in logical planner
      Backtrace:
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

# causalBatch

<details>

* Version: 1.2.0
* GitHub: https://github.com/neurodata/causal_batch
* Source code: https://github.com/cran/causalBatch
* Date/Publication: 2024-03-01 10:32:37 UTC
* Number of recursive dependencies: 137

Run `revdepcheck::cloud_details(, "causalBatch")` for more info

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
      > library(causalBatch)
      > 
      > test_check("causalBatch")
      Found2batches
      Adjusting for1covariate(s) or covariate level(s)
      Standardizing Data across genes
      Fitting L/S model and finding priors
      Finding parametric adjustments
      Adjusting the Data
      
      Found2batches
      Adjusting for1covariate(s) or covariate level(s)
      Standardizing Data across genes
      Fitting L/S model and finding priors
      Finding parametric adjustments
      Adjusting the Data
      
      Loading required package: ks
      
      Attaching package: 'ks'
      
      The following object is masked from 'package:testthat':
      
          compare
      
      [ FAIL 1 | WARN 0 | SKIP 3 | PASS 37 ]
      
      ══ Skipped tests (3) ═══════════════════════════════════════════════════════════
      • On CRAN (3): 'test-causal_cdcorr.R:31:3', 'test-causal_cdcorr.R:46:3',
        'test-causal_cdcorr.R:89:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-kway_match.R:79:3'): K-way matching increases covariate overlap ──
      ov.before < ov.after is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      
      [ FAIL 1 | WARN 0 | SKIP 3 | PASS 37 ]
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

* Version: 2.2.3
* GitHub: NA
* Source code: https://github.com/cran/CodelistGenerator
* Date/Publication: 2024-03-08 22:20:02 UTC
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
    > main_path <- paste0(system.file("testdata", package = "cogmapr"), '/')
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
      > 
      > library(testthat)
      > library(crosshap)
      > 
      > test_check("crosshap")
      ■■■■■                             14% | ETA: 14s
      ■■■■■■■■■■                        29% | ETA:  9s
      ■■■■■■■■■■■■■■                    43% | ETA: 10s
      ■■■■■■■■■■■■■■■■■■                57% | ETA:  7s
      ■■■■■■■■■■■■■■■■■■■■■■            71% | ETA:  5s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■       86% | ETA:  2s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■  100% | ETA:  0s
      ✔ Haplotyping complete!
      Info saved in Haplotypes_30_E objects
      # A tibble: 28 x 11
              x     y node    MGs_eps cluster  size mean_na.rm_phenodiff sc3_stability
       *  <dbl> <dbl> <chr>   <fct>   <fct>   <int>                <dbl>         <dbl>
       1 -4.81      2 MGs_ep~ 0.4     0        1470                 2.61        0.0344
       2 -1.31      2 MGs_ep~ 0.4     MG1        69                 2.69        0.289 
       3  0.688     2 MGs_ep~ 0.4     MG2        49                 2.64        0.205 
       4  2.69      2 MGs_ep~ 0.4     MG3        55                 2.38        0.493 
       5  4.69      2 MGs_ep~ 0.4     MG4        35                 2.56        0.540 
       6  6.69      2 MGs_ep~ 0.4     MG5        37                 1.25        0.540 
       7  8.69      2 MGs_ep~ 0.4     MG6        32                 4.39        0.627 
       8 10.7       2 MGs_ep~ 0.4     MG7       294                 2.15        0.528 
       9 -6.31      1 MGs_ep~ 0.8     0        1203                 2.67        0.281 
      10 -5.31      1 MGs_ep~ 0.8     MG1        30                 3.46        0.329 
      # i 18 more rows
      # i 3 more variables: .ggraph.orig_index <int>, circular <lgl>,
      #   .ggraph.index <int>
      ■■■■■■■■■■■                       33% | ETA:  4s
      ■■■■■■■■■■■■■■■■■■■■■             67% | ETA:  2s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■  100% | ETA:  0s
      ✔ Haplotyping complete!
      Info saved in Haplotypes_30_E objects
      ■■■■■■■■■■■                       33% | ETA:  4s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■        83% | ETA:  1s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■  100% | ETA:  0s
      ✔ Haplotyping complete!
      Info saved in Haplotypes_30_E objects
      [ FAIL 5 | WARN 0 | SKIP 2 | PASS 4 ]
      
      ══ Skipped tests (2) ═══════════════════════════════════════════════════════════
      • On CRAN (2): 'test-clustree.R:14:1', 'test-clustree.R:19:1'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-hapviz.R:12:3'): test crosshap viz ─────────────────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'A' to DOUBLE
      Backtrace:
          ▆
       1. └─crosshap::crosshap_viz(HapObject = testHapObject, epsilon = 0.61) at test-hapviz.R:12:3
       2.   └─crosshap::build_bot_halfeyeplot(...)
       3.     ├─base::setdiff(...)
       4.     │ └─base::as.vector(y)
       5.     ├─base::unique(halfeyedat$hap)
       6.     └─base::unique.default(halfeyedat$hap)
      ── Error ('test-hapviz.R:17:1'): test alt crosshap viz ─────────────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'A' to DOUBLE
      Backtrace:
          ▆
       1. └─crosshap::crosshap_viz(...) at test-hapviz.R:17:1
       2.   └─crosshap::build_bot_halfeyeplot(...)
       3.     ├─base::setdiff(...)
       4.     │ └─base::as.vector(y)
       5.     ├─base::unique(halfeyedat$hap)
       6.     └─base::unique.default(halfeyedat$hap)
      ── Error ('test-hapviz.R:22:1'): test no labels crosshap viz ───────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'A' to DOUBLE
      Backtrace:
          ▆
       1. └─crosshap::crosshap_viz(...) at test-hapviz.R:22:1
       2.   └─crosshap::build_bot_halfeyeplot(...)
       3.     ├─base::setdiff(...)
       4.     │ └─base::as.vector(y)
       5.     ├─base::unique(halfeyedat$hap)
       6.     └─base::unique.default(halfeyedat$hap)
      ── Error ('test-hapviz.R:27:1'): test isolate_groups ───────────────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'A' to DOUBLE
      Backtrace:
           ▆
        1. ├─crosshap::crosshap_viz(...) at test-hapviz.R:27:1
        2. │ └─crosshap::build_bot_halfeyeplot(...)
        3. │   └─no0data %>% ...
        4. ├─dplyr::mutate(...)
        5. └─dplyr:::mutate.data.frame(...)
        6.   └─dplyr::mutate(...)
        7.     └─dplyr:::compute_by(...)
        8.       ├─dplyr::group_data(data)
        9.       ├─dplyr:::group_data.tbl_df(data)
       10.       ├─base::NextMethod()
       11.       └─dplyr:::group_data.data.frame(data)
       12.         └─dplyr::group_data(.data)
       13.           └─base::nrow(.data)
       14.             ├─base::dim(x)
       15.             └─base::dim.data.frame(x)
       16.               └─base::.row_names_info(x, 2L)
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
    > missing_value_check(DD.dict.B, DS.data.B, non.NA.missing.codes = c(-9999,-4444))
    $Message
    [1] "ERROR: some variables have non-encoded missing value codes."
    
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
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in if (any(x < 0) || anyNA(x)) stop("all entries of 'x' must be nonnegative and finite"): missing value where TRUE/FALSE needed
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in t.test.default(x = numeric(0)): not enough 'x' observations
      
      Error converted to warning: Error in wilcox.test.default(x = numeric(0), correct = FALSE): not enough (non-missing) 'x' observations
      
      [ FAIL 1 | WARN 191 | SKIP 7 | PASS 201 ]
      
      ══ Skipped tests (7) ═══════════════════════════════════════════════════════════
      • On CRAN (6): 'test_console_output.R:17:1', 'test_html.R:5:5',
        'test_numeric.R:44:1', 'test_tests.R:24:1', 'test_tex.R:4:3',
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

# dtrackr

<details>

* Version: 0.4.4
* GitHub: https://github.com/terminological/dtrackr
* Source code: https://github.com/cran/dtrackr
* Date/Publication: 2023-09-04 12:10:02 UTC
* Number of recursive dependencies: 125

Run `revdepcheck::cloud_details(, "dtrackr")` for more info

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
      
      > library(dtrackr)
      
      Attaching package: 'dtrackr'
      
      The following objects are masked from 'package:dplyr':
      
          add_tally, bind_cols, bind_rows
      
      The following object is masked from 'package:stats':
      
          filter
      
      The following object is masked from 'package:utils':
      
          history
      
      The following object is masked from 'package:base':
      
          comment
      
      > 
      > test_check("dtrackr")
      Couldn't find a suitable web browser!
      Set the BROWSER environment variable to your desired browser.
      Warning: program returned non-zero exit code #256
      /usr/bin/xdg-open: 869: x-www-browser: not found
      /usr/bin/xdg-open: 869: firefox: not found
      /usr/bin/xdg-open: 869: iceweasel: not found
      /usr/bin/xdg-open: 869: seamonkey: not found
      /usr/bin/xdg-open: 869: mozilla: not found
      /usr/bin/xdg-open: 869: epiphany: not found
      /usr/bin/xdg-open: 869: konqueror: not found
      /usr/bin/xdg-open: 869: chromium: not found
      /usr/bin/xdg-open: 869: chromium-browser: not found
      /usr/bin/xdg-open: 869: google-chrome: not found
      /usr/bin/xdg-open: 869: www-browser: not found
      /usr/bin/xdg-open: 869: links2: not found
      /usr/bin/xdg-open: 869: elinks: not found
      /usr/bin/xdg-open: 869: links: not found
      /usr/bin/xdg-open: 869: lynx: not found
      /usr/bin/xdg-open: 869: w3m: not found
      xdg-open: no method available for opening '/tmp/Rtmp4CeDuC/viewhtml1dfc210e670d/index.html'
      Couldn't find a suitable web browser!
      Set the BROWSER environment variable to your desired browser.
      Warning: program returned non-zero exit code #256
      /usr/bin/xdg-open: 869: x-www-browser: not found
      /usr/bin/xdg-open: 869: firefox: not found
      /usr/bin/xdg-open: 869: iceweasel: not found
      /usr/bin/xdg-open: 869: seamonkey: not found
      /usr/bin/xdg-open: 869: mozilla: not found
      /usr/bin/xdg-open: 869: epiphany: not found
      /usr/bin/xdg-open: 869: konqueror: not found
      /usr/bin/xdg-open: 869: chromium: not found
      /usr/bin/xdg-open: 869: chromium-browser: not found
      /usr/bin/xdg-open: 869: google-chrome: not found
      /usr/bin/xdg-open: 869: www-browser: not found
      /usr/bin/xdg-open: 869: links2: not found
      /usr/bin/xdg-open: 869: elinks: not found
      /usr/bin/xdg-open: 869: links: not found
      /usr/bin/xdg-open: 869: lynx: not found
      /usr/bin/xdg-open: 869: w3m: not found
      xdg-open: no method available for opening '/tmp/Rtmp4CeDuC/viewhtml1dfc246cc872/index.html'
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 51 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-p_others.R:11:3'): ungrouping works ────────────────────────────
      <tibble_error_column_names_must_be_unique/tibble_error/rlang_error/error/condition>
      Error in `as_tibble(data)`: Column name `.count` must not be duplicated.
      Use `.name_repair` to specify repair.
      Caused by error in `repaired_names()`:
      ! Names must be unique.
      ✖ These names are duplicated:
        * ".count" at locations 1 and 2.
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 51 ]
      Error: Test failures
      Execution halted
    ```

# duckplyr

<details>

* Version: 0.3.0
* GitHub: https://github.com/duckdblabs/duckplyr
* Source code: https://github.com/cran/duckplyr
* Date/Publication: 2023-12-11 07:40:10 UTC
* Number of recursive dependencies: 87

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
      [ FAIL 5 | WARN 0 | SKIP 318 | PASS 1214 ]
      
      ══ Skipped tests (318) ═════════════════════════════════════════════════════════
      • Can't set a non-UTF-8 encoding (1): 'test-mutate.R:444:3'
      • Can't use 'en_US' locale (1): 'test-arrange.R:345:3'
      • External vector? (5): 'test-as_duckplyr_df.R:2020:3',
        'test-as_duckplyr_df.R:2036:3', 'test-as_duckplyr_df.R:2052:3',
        'test-as_duckplyr_df.R:2066:3', 'test-as_duckplyr_df.R:2082:3'
      • Grouped (1): 'test-as_duckplyr_df.R:2302:3'
      • Hack (1): 'test-as_duckplyr_df.R:575:3'
      • Missing or empty names not allowed. (6): 'test-mutate.R:901:3',
        'test-filter.R:648:3', 'test-select.R:40:3', 'test-select.R:136:3',
        'test-select.R:145:3', 'test-summarise.R:440:3'
      • Must pass a plain data frame or a tibble to `as_duckplyr_df()`. (156):
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
        'test-filter.R:8:5', 'test-filter.R:27:3', 'test-filter.R:118:3',
        'test-filter.R:158:3', 'test-filter.R:185:3', 'test-filter.R:223:3',
        'test-filter.R:229:3', 'test-filter.R:237:3', 'test-filter.R:303:3',
        'test-filter.R:319:3', 'test-filter.R:361:3', 'test-filter.R:437:3',
        'test-filter.R:544:3', 'test-filter.R:567:3', 'test-filter.R:578:3',
        'test-filter.R:621:3', 'test-filter.R:633:3', 'test-filter.R:704:3',
        'test-filter.R:713:3', 'test-count-tally.R:57:3', 'test-count-tally.R:66:3',
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
        'test-deprec-do.R:49:3', 'test-deprec-do.R:63:5', 'test-deprec-do.R:94:3',
        'test-deprec-do.R:105:3', 'test-deprec-do.R:178:3', 'test-deprec-do.R:183:3',
        'test-deprec-do.R:198:3', 'test-distinct.R:50:3', 'test-distinct.R:56:3',
        'test-distinct.R:64:3', 'test-distinct.R:115:3', 'test-distinct.R:156:3',
        'test-group-map.R:6:3', 'test-group-map.R:40:3', 'test-group-map.R:72:3',
        'test-group-map.R:84:3', 'test-join.R:497:3', 'test-join.R:628:3',
        'test-join.R:650:3', 'test-join.R:673:3', 'test-join.R:683:3',
        'test-rename.R:9:3', 'test-rename.R:31:3', 'test-select.R:4:3',
        'test-select.R:12:3', 'test-select.R:28:3', 'test-select.R:87:3',
        'test-select.R:106:3', 'test-select.R:176:3', 'test-sets.R:38:3',
        'test-sets.R:46:3', 'test-slice.R:8:3', 'test-slice.R:21:3',
        'test-slice.R:31:3', 'test-slice.R:48:3', 'test-slice.R:79:3',
        'test-slice.R:99:3', 'test-slice.R:123:3', 'test-slice.R:135:3',
        'test-slice.R:202:3', 'test-slice.R:211:3', 'test-slice.R:334:3',
        'test-slice.R:379:3', 'test-slice.R:393:3', 'test-slice.R:587:3',
        'test-slice.R:613:3', 'test-slice.R:634:3', 'test-summarise.R:19:3',
        'test-summarise.R:45:3', 'test-summarise.R:61:3', 'test-summarise.R:77:3',
        'test-summarise.R:96:3', 'test-summarise.R:131:3', 'test-summarise.R:189:3',
        'test-summarise.R:207:3', 'test-summarise.R:212:3', 'test-summarise.R:222:3',
        'test-summarise.R:236:3', 'test-summarise.R:242:3', 'test-summarise.R:256:3',
        'test-summarise.R:273:3', 'test-summarise.R:285:3', 'test-summarise.R:325:3',
        'test-summarise.R:338:3', 'test-summarise.R:346:3', 'test-summarise.R:406:3',
        'test-summarise.R:415:3', 'test-transmute.R:2:3', 'test-transmute.R:9:3',
        'test-transmute.R:27:3', 'test-transmute.R:49:3', 'test-transmute.R:82:3'
      • Must pass data frame without row names to `as_duckplyr_df()`. (30):
        'test-mutate.R:17:3', 'test-mutate.R:716:3', 'test-mutate.R:891:3',
        'test-filter.R:53:3', 'test-filter.R:102:3', 'test-filter.R:269:3',
        'test-filter.R:312:5', 'test-filter.R:383:3', 'test-filter.R:588:3',
        'test-count-tally.R:135:3', 'test-count-tally.R:187:3',
        'test-arrange.R:309:3', 'test-deprec-do.R:71:3', 'test-deprec-do.R:77:3',
        'test-deprec-do.R:86:5', 'test-relocate.R:37:3', 'test-rename.R:24:3',
        'test-select.R:48:3', 'test-select.R:58:3', 'test-select.R:115:3',
        'test-select.R:119:3', 'test-select.R:123:3', 'test-select.R:129:3',
        'test-select.R:158:3', 'test-sets.R:137:3', 'test-sets.R:141:3',
        'test-summarise.R:89:3', 'test-summarise.R:426:3', 'test-transmute.R:55:3',
        'test-transmute.R:90:3'
      • On CRAN (90): 'test-mutate.R:138:3', 'test-mutate.R:198:3',
        'test-filter.R:404:3', 'test-filter.R:422:3', 'test-filter.R:431:3',
        'test-filter.R:695:3', 'test-filter.R:721:3', 'test-count-tally.R:47:3',
        'test-count-tally.R:120:3', 'test-count-tally.R:163:3',
        'test-count-tally.R:219:3', 'test-across.R:144:3', 'test-across.R:153:3',
        'test-across.R:209:3', 'test-across.R:619:3', 'test-across.R:769:3',
        'test-across.R:798:3', 'test-across.R:1155:3', 'test-across.R:1199:3',
        'test-across.R:1228:3', 'test-across.R:1293:3', 'test-across.R:1305:3',
        'test-all-equal.R:2:3', 'test-all-equal.R:27:3', 'test-all-equal.R:36:3',
        'test-all-equal.R:47:3', 'test-all-equal.R:61:3', 'test-all-equal.R:114:3',
        'test-all-equal.R:142:3', 'test-all-equal.R:155:3', 'test-all-equal.R:163:3',
        'test-all-equal.R:171:3', 'test-arrange.R:29:3', 'test-arrange.R:169:3',
        'test-arrange.R:178:3', 'test-arrange.R:192:3', 'test-arrange.R:321:3',
        'test-colwise-select.R:175:3', 'test-demo.R:4:3', 'test-deprec-funs.R:119:3',
        'test-deprec-funs.R:127:3', 'test-distinct.R:180:3', 'test-duckplyr.R:18:3',
        'test-expr.R:4:3', 'test-group-map.R:121:3', 'test-join.R:151:3',
        'test-join.R:338:3', 'test-join.R:350:3', 'test-join.R:391:3',
        'test-join.R:470:3', 'test-join.R:518:3', 'test-join.R:555:3',
        'test-join.R:605:3', 'test-join.R:709:3', 'test-join.R:720:3',
        'test-join.R:731:3', 'test-join.R:754:3', 'test-join.R:768:3',
        'test-relational-duckdb.R:37:3', 'test-relational-duckdb.R:80:3',
        'test-relational-duckdb.R:99:3', 'test-relational-rel.R:2:3',
        'test-relational.R:4:3', 'test-relocate.R:30:3', 'test-rename.R:75:3',
        'test-rename.R:85:3', 'test-rename.R:94:3', 'test-sets.R:59:3',
        'test-sets.R:73:3', 'test-sets.R:83:3', 'test-slice.R:40:3',
        'test-slice.R:63:3', 'test-slice.R:71:3', 'test-slice.R:109:3',
        'test-slice.R:193:3', 'test-slice.R:219:3', 'test-slice.R:230:3',
        'test-slice.R:240:3', 'test-slice.R:248:3', 'test-slice.R:299:3',
        'test-slice.R:342:3', 'test-slice.R:405:3', 'test-slice.R:517:3',
        'test-slice.R:524:3', 'test-slice.R:559:3', 'test-slice.R:571:3',
        'test-summarise.R:158:3', 'test-summarise.R:397:3', 'test-summarise.R:540:3',
        'test-tpch.R:110:3'
      • RSQLite cannot be loaded (2): 'test-count-tally.R:86:3',
        'test-count-tally.R:98:3'
      • Random seed (2): 'test-as_duckplyr_df.R:1817:3',
        'test-as_duckplyr_df.R:1833:3'
      • TODO duckdb (21): 'test-mutate.R:94:3', 'test-filter.R:89:3',
        'test-filter.R:599:3', 'test-across.R:221:3', 'test-across.R:602:3',
        'test-across.R:956:3', 'test-all-equal.R:180:3', 'test-generics.R:160:3',
        'test-group-map.R:64:3', 'test-join.R:59:3', 'test-join.R:357:3',
        'test-join.R:363:3', 'test-join.R:382:3', 'test-join.R:420:3',
        'test-join.R:446:3', 'test-join.R:456:3', 'test-sets.R:123:3',
        'test-summarise.R:30:3', 'test-summarise.R:197:3', 'test-summarise.R:308:3',
        'test-summarise.R:449:3'
      • WAT (1): 'test-as_duckplyr_df.R:1364:3'
      • Won't need (1): 'test-prom.R:2:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-as_duckplyr_df.R:2196:3'): as_duckplyr_df() and symdiff() ──────
      Error: Cannot combine LEFT and RIGHT relations of different connections!
      Backtrace:
           ▆
        1. ├─test_df_x %>% as_duckplyr_df() %>% symdiff(test_df_y) at test-as_duckplyr_df.R:2196:3
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
      ── Failure ('test-dplyr.R:16:3'): no homonyms ──────────────────────────────────
      `objs_duckplyr` (`actual`) not identical to objs_dplyr[names(objs_duckplyr)] (`expected`).
      
      body(actual$as_duckplyr_df)[4:16] vs body(expected$as_duckplyr_df)[4:13]
        `    }`
        `    if (!identical(class(.data), "data.frame") && !identical(class(.data), `
        `        c("tbl_df", "tbl", "data.frame"))) {`
      - `        abort("Must pass a plain data frame or a tibble to \`as_duckplyr_df()\`.")`
      - `    }`
      - `    if (is.character(.row_names_info(.data, 0L))) {`
      - `        abort("Must pass data frame without row names to \`as_duckplyr_df()\`.")`
      + `        cli::cli_abort("Must pass a plain data frame or a tibble to \`as_duckplyr_df()\`.")`
        `    }`
        `    if (anyNA(names(.data)) || any(names(.data) == "")) {`
      - `        abort("Missing or empty names not allowed.")`
      + `        cli::cli_abort("Missing or empty names not allowed.")`
      and 3 more ...
      
      `environment(actual$as_duckplyr_df)` is <env:namespace:duckplyr>
      `environment(expected$as_duckplyr_df)` is <env:namespace:dplyr>
      
      body(actual$check_df_for_rel)[1:25] vs body(expected$check_df_for_rel)[1:33]
        `{`
        `    if (is.character(.row_names_info(df, 0L))) {`
      - `        stop("Need data frame without row names to convert to relational.")`
      + `        cli::cli_abort("Need data frame without row names to convert to relational.")`
        `    }`
        `    for (i in seq_along(df)) {`
        `        col <- .subset2(df, i)`
        `        if (!is.null(names(col))) {`
      - `            stop("Can't convert named vectors to relational. Affected column: \`", `
      - `                names(df)[[i]], "\`.")`
      + `            cli::cli_abort("Can't convert named vectors to relational. Affected column: {.var {names(df)[[i]]}}.")`
        `        }`
      and 26 more ...
      
      body(actual$check_df_for_rel)[30:37] vs body(expected$check_df_for_rel)[38:44]
        `            {`
        `                for (i in seq_along(df)) {`
        `                  if (!identical(df[[i]], roundtrip[[i]])) {`
      - `                    stop("Imperfect roundtrip. Affected column: \`", `
      - `                      names(df)[[i]], "\`.")`
      + `                    cli::cli_abort("Imperfect roundtrip. Affected column: {.var {names(df)[[i]]}}.")`
        `                  }`
        `                }`
        `            })`
      
      body(actual$check_df_for_rel)[41:48] vs body(expected$check_df_for_rel)[48:54]
        `            df_attrib <- attributes(df[[i]])`
        `            roundtrip_attrib <- attributes(roundtrip[[i]])`
        `            if (!identical(df_attrib, roundtrip_attrib)) {`
      - `                stop("Attributes are lost during conversion. Affected column: \`", `
      - `                  names(df)[[i]], "\`.")`
      + `                cli::cli_abort("Attributes are lost during conversion. Affected column: {.var {names(df)[[i]]}}.")`
        `            }`
        `        }`
        `    }`
      
      `environment(actual$check_df_for_rel)` is <env:namespace:duckplyr>
      `environment(expected$check_df_for_rel)` is <env:namespace:dplyr>
      
      body(actual$create_default_duckdb_connection)[1:5] vs body(expected$create_default_duckdb_connection)[1:8]
        `{`
        `    con <- DBI::dbConnect(duckdb::duckdb())`
      + `    DBI::dbExecute(con, "set memory_limit='2GB'")`
      + `    DBI::dbExecute(con, paste0("pragma temp_directory='", tempdir(), `
      + `        "'"))`
        `    for (i in seq_along(duckplyr_macros)) {`
        `        sql <- paste0("CREATE MACRO \\"", names(duckplyr_macros)[[i]], `
        `            "\\"", duckplyr_macros[[i]])`
      
      `environment(actual$create_default_duckdb_connection)` is <env:namespace:duckplyr>
      `environment(expected$create_default_duckdb_connection)` is <env:namespace:dplyr>
      
      `actual$default_duckdb_connection$con@conn_ref` is <pointer: 0x55f7abd06b80>
      `expected$default_duckdb_connection$con@conn_ref` is <pointer: 0x55f7ace7b8a0>
      
      `actual$default_duckdb_connection$con@driver@database_ref` is <pointer: 0x55f7a93969d0>
      `expected$default_duckdb_connection$con@driver@database_ref` is <pointer: 0x55f7ad0f0dc0>
      
      `environment(actual$df_from_file)` is <env:namespace:duckplyr>
      `environment(expected$df_from_file)` is <env:namespace:dplyr>
      
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
      
      `environment(actual$duckplyr_df_from_file)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_df_from_file)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_distinct)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_distinct)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_do)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_do)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_filter)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_filter)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_full_join)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_full_join)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_group_vars)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_group_vars)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_inner_join)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_inner_join)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_intersect)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_intersect)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_left_join)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_left_join)` is <env:namespace:dplyr>
      
      names(actual$duckplyr_macros)[10:14] vs names(expected$duckplyr_macros)[7:24]
        "___divide"
        "is.na"
        "n"
      - "log10"
      - "log"
      + "___log10"
      + "___log"
      + "grepl"
      + "as.integer"
      + "if_else"
      + "|"
      + "&"
      and 11 more ...
      
      actual$duckplyr_macros[7:13] vs expected$duckplyr_macros[4:24]
        >="(x, y) AS x >= y"
        =="(x, y) AS x = y"
        !="(x, y) AS x <> y"
      - ___divide"(x, y) AS CASE WHEN x = 0 AND y = 0 THEN CAST('NaN' AS double) ELSE CAST(x AS double) / y END"
      + ___divide"(x, y) AS CASE WHEN y = 0 THEN CASE WHEN x = 0 THEN CAST('NaN' AS double) WHEN x > 0 THEN CAST('+Infinity' AS double) ELSE CAST('-Infinity' AS double) END ELSE CAST(x AS double) / y END"
        is.na"(x) AS (x IS NULL)"
        n"() AS CAST(COUNT(*) AS int32)"
      - log10"(x) AS CASE WHEN x < 0 THEN CAST('NaN' AS double) WHEN x = 0 THEN CAST('-Inf' AS double) ELSE log(x) END"
      + ___log10"(x) AS CASE WHEN x < 0 THEN CAST('NaN' AS double) WHEN x = 0 THEN CAST('-Inf' AS double) ELSE log10(x) END"
      + ___log"(x) AS CASE WHEN x < 0 THEN CAST('NaN' AS double) WHEN x = 0 THEN CAST('-Inf' AS double) ELSE ln(x) END"
      + grepl"(pattern, x) AS (CASE WHEN x IS NULL THEN FALSE ELSE regexp_matches(x, pattern) END)"
      + as.integer"(x) AS CAST(x AS int32)"
      and 14 more ...
      
      `environment(actual$duckplyr_mutate)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_mutate)` is <env:namespace:dplyr>
      
      `environment(actual$duckplyr_mutate_keep)` is <env:namespace:duckplyr>
      `environment(expected$duckplyr_mutate_keep)` is <env:namespace:dplyr>
      
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
      
      body(actual$oo_prep)[5:11] vs body(expected$oo_prep)[5:11]
        `    }`
        `    names <- rel_names(rel)`
        `    if (colname %in% names) {`
      - `        abort("Must use column name not yet present in rel")`
      + `        cli::cli_abort("Can't use column {.var {colname}} already present in rel for order preservation")`
        `    }`
        `    proj_exprs <- imap(set_names(names), relexpr_reference, rel = NULL)`
        `    proj_exprs <- c(proj_exprs, if (length(extra_cols_pre)) map(extra_cols_pre, `
      
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
      
      body(actual$rel_join_impl)[46:53] vs body(expected$rel_join_impl)[46:54]
        `    if (na_matches == "na") {`
        `        cond_by[cond_by == "=="] <- "___eq_na_matches_na"`
        `    }`
      - `    conds <- pmap(list(cond_by, x_by, y_by), ~relexpr_function(..1, `
      - `        list(..2, ..3)))`
      + `    conds <- pmap(list(cond_by, x_by, y_by), function(...) {`
      + `        relexpr_function(..1, list(..2, ..3))`
      + `    })`
        `    if (any(by$filter != "none")) {`
        `        join_ref_type <- "asof"`
        `    }`
      
      body(actual$rel_join_impl)[72:79] vs body(expected$rel_join_impl)[73:82]
        `            }`
        `            else {`
        `                exprs[by_pos[eq_idx]] <- pmap(list(x_by[eq_idx], `
      - `                  y_by[eq_idx], names(vars$x$key)[eq_idx]), ~relexpr_function("___coalesce", `
      - `                  list(..1, ..2), alias = ..3))`
      + `                  y_by[eq_idx], names(vars$x$key)[eq_idx]), function(...) {`
      + `                  relexpr_function("___coalesce", list(..1, ..2), `
      + `                    alias = ..3)`
      + `                })`
        `            }`
        `        }`
        `        out <- rel_project(joined, exprs)`
      
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
      
        `actual$rel_stats_env$rel_aggregate`: 24
      `expected$rel_stats_env$rel_aggregate`: 14
      
        `actual$rel_stats_env$rel_filter`: 49
      `expected$rel_stats_env$rel_filter`: 21
      
        `actual$rel_stats_env$rel_join`: 10
      `expected$rel_stats_env$rel_join`:  9
      
        `actual$rel_stats_env$rel_names`: 432
      `expected$rel_stats_env$rel_names`: 345
      
        `actual$rel_stats_env$rel_order`: 124
      `expected$rel_stats_env$rel_order`:  69
      
        `actual$rel_stats_env$rel_project`: 427
      `expected$rel_stats_env$rel_project`: 301
      
        `actual$rel_stats_env$rel_set_alias`: 20
      `expected$rel_stats_env$rel_set_alias`: 18
      
        `actual$rel_stats_env$rel_to_df`: 220
      `expected$rel_stats_env$rel_to_df`: 165
      
        `actual$rel_stats_env$rel_union_all`: 8
      `expected$rel_stats_env$rel_union_all`: 7
      
      `environment(actual$rel_stats_get)` is <env:namespace:duckplyr>
      `environment(expected$rel_stats_get)` is <env:namespace:dplyr>
      
      `environment(actual$rel_to_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_to_df)` is <env:namespace:dplyr>
      
      `environment(actual$rel_to_df.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_to_df.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_to_df.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_to_df.relational_df)` is <env:namespace:dplyr>
      
      body(actual$rel_translate)[14:19] vs body(expected$rel_translate)[14:22]
        `            expr <- quo_get_expr(expr)`
        `        }`
        `        switch(typeof(expr), character = , logical = , integer = , `
        `            double = relexpr_constant(expr), symbol = {`
      + `                if (as.character(expr) %in% names_forbidden) {`
      + `                  cli::cli_abort("Can't reuse summary variable {.var {as.character(expr)}}.")`
      + `                }`
        `                if (as.character(expr) %in% names_data) {`
        `                  ref <- as.character(expr)`
        `                  if (!(ref %in% used)) {`
      
      body(actual$rel_translate)[26:44] vs body(expected$rel_translate)[29:55]
        `                  relexpr_constant(val)`
        `                }`
        `            }, language = {`
        `                name <- as.character(expr[[1]])`
      + `                if (name[[1]] == "::") {`
      + `                  pkg <- name[[2]]`
      + `                  name <- name[[3]]`
      + `                } else {`
      + `                  pkg <- NULL`
      + `                }`
        `                switch(name, \`(\` = {`
      and 18 more ...
      
      body(actual$rel_translate)[46:53] vs body(expected$rel_translate)[57:63]
        `                  args <- as.list(call[-1])`
        `                  bad <- !(names(args) %in% c("x", "format"))`
        `                  if (any(bad)) {`
      - `                    abort(paste0(name, "(", names(args)[which(bad)[[1]]], `
      - `                      " = ) not supported"))`
      + `                    cli::cli_abort("{name}({names(args)[which(bad)[[1]]]} = ) not supported")`
        `                  }`
        `                }, \`%in%\` = {`
        `                  tryCatch({`
      
      body(actual$rel_translate)[55:68] vs body(expected$rel_translate)[65:91]
        `                    consts <- map(values, do_translate, in_window = in_window)`
        `                    ops <- map(consts, list, do_translate(expr[[2]]))`
        `                    cmp <- map(ops, relexpr_function, name = "==")`
      - `                    alt <- reduce(cmp, ~relexpr_function("|", `
      - `                      list(.x, .y)))`
      + `                    alt <- reduce(cmp, function(.x, .y) {`
      + `                      relexpr_function("|", list(.x, .y))`
      + `                    })`
        `                    return(alt)`
        `                  }, error = identity)`
      + `                }, \`$\` = {`
      + `                  if (expr[[2]] == ".data") {`
      and 17 more ...
      
      body(actual$rel_translate)[74:80] vs body(expected$rel_translate)[97:103]
        `                known <- c(names(duckplyr_macros), names(aliases), `
        `                  known_window, known_ops, known_funs)`
        `                if (!(name %in% known)) {`
      - `                  abort(paste0("Unknown function: ", name))`
      + `                  cli::cli_abort("Unknown function: {.code {name}()}")`
        `                }`
        `                if (name %in% names(aliases)) {`
        `                  name <- aliases[[name]]`
      
      body(actual$rel_translate)[108:114] vs body(expected$rel_translate)[131:137]
        `                    offset_expr = offset_expr, default_expr = default_expr)`
        `                }`
        `                fun`
      - `            }, abort(paste0("Internal: Unknown type ", typeof(expr))))`
      + `            }, cli::cli_abort("Internal: Unknown type {.val {typeof(expr)}}"))`
        `    }`
        `    out <- do_translate(expr)`
        `    if (!is.null(alias) && !identical(alias, "")) {`
      
      `formals(actual$rel_translate)` is length 6
      `formals(expected$rel_translate)` is length 7
      
      names(formals(actual$rel_translate))[4:6] vs names(formals(expected$rel_translate))[4:7]
        "alias"
        "partition"
        "need_window"
        "names_data"
      + "names_forbidden"
      
      `formals(actual$rel_translate)$names_forbidden` is absent
      `formals(expected$rel_translate)$names_forbidden` is NULL
      
      `environment(actual$rel_translate)` is <env:namespace:duckplyr>
      `environment(expected$rel_translate)` is <env:namespace:dplyr>
      
      body(actual$rel_translate_dots)[2:7] vs body(expected$rel_translate_dots)[2:18]
        `{`
        `    if (is.null(names(dots))) {`
        `        map(dots, rel_translate, data)`
        `    }`
      + `    else if (forbid_new) {`
      + `        out <- accumulate(seq_along(dots), .init = NULL, function(.x, `
      + `            .y) {`
      + `            new <- names(dots)[[.y]]`
      + `            translation <- rel_translate(dots[[.y]], alias = new, `
      + `                data, names_forbidden = .x$new)`
      + `            list(new = c(.x$new, new), translation = c(.x$translation, `
      and 7 more ...
      
      `formals(actual$rel_translate_dots)` is length 2
      `formals(expected$rel_translate_dots)` is length 3
      
      `names(formals(actual$rel_translate_dots))`:   "dots" "data"             
      `names(formals(expected$rel_translate_dots))`: "dots" "data" "forbid_new"
      
      `formals(actual$rel_translate_dots)$forbid_new` is absent
      `formals(expected$rel_translate_dots)$forbid_new` is a logical vector (FALSE)
      
      `environment(actual$rel_translate_dots)` is <env:namespace:duckplyr>
      `environment(expected$rel_translate_dots)` is <env:namespace:dplyr>
      
      body(actual$rel_try)[1:9] vs body(expected$rel_try)[1:15]
        `{`
      - `    call <- as.character(sys.call(-1)[[1]])`
      + `    call_name <- as.character(sys.call(-1)[[1]])`
      - `    if (!(list(call) %in% stats$calls)) {`
      + `    if (!(call_name %in% stats$calls)) {`
      - `        stats$calls <- c(stats$calls, call)`
      + `        stats$calls <- c(stats$calls, call_name)`
        `    }`
        `    stats$attempts <- stats$attempts + 1L`
      + `    if (Sys.getenv("DUCKPLYR_TELEMETRY_TEST") == "TRUE") {`
      + `        force(call)`
      + `        json <- call_to_json(error_cnd(message = paste0("Error in ", `
      + `            call$name)), call)`
      and 5 more ...
      
      body(actual$rel_try)[18:24] vs body(expected$rel_try)[24:30]
        `                    i = names(dots)[[i]]))`
        `                }`
        `                if (Sys.getenv("DUCKPLYR_FORCE") == "TRUE") {`
      - `                  abort("Fallback not available with DUCKPLYR_FORCE")`
      + `                  cli::cli_abort("Fallback not available with {.envvar DUCKPLYR_FORCE}.")`
        `                }`
        `            }`
        `            return()`
      
      body(actual$rel_try)[29:34] vs body(expected$rel_try)[35:41]
        `        return(rel)`
        `    }`
        `    out <- rlang::try_fetch(rel, error = identity)`
        `    if (inherits(out, "error")) {`
      + `        tel_collect(out, call)`
        `        if (Sys.getenv("DUCKPLYR_FALLBACK_INFO") == "TRUE") {`
        `            rlang::cnd_signal(rlang::message_cnd(message = "Error processing with relational.", `
        `                parent = out))`
      
      body(actual$rel_try)[36:40] vs body(expected$rel_try)[43:47]
        `        stats$fallback <- stats$fallback + 1L`
        `        return()`
        `    }`
      - `    stop("Must use a return() in rel_try().")`
      + `    cli::cli_abort("Must use a return() in rel_try().")`
        `}`
      
      `formals(actual$rel_try)` is length 2
      `formals(expected$rel_try)` is length 3
      
      `names(formals(actual$rel_try))`:   "rel" "..."       
      `names(formals(expected$rel_try))`: "rel" "..." "call"
      
      `formals(actual$rel_try)$call` is absent
      `formals(expected$rel_try)$call` is NULL
      
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
      
        `actual$stats$attempts`:  608
      `expected$stats$attempts`: 1657
      
           actual$stats$calls       | expected$stats$calls                         
       [1] "add_count.duckplyr_df"  - "add_count"                   [1]            
       [2] "mutate.duckplyr_df"     - "mutate"                      [2]            
       [3] "anti_join.duckplyr_df"  - "group_data.data.frame"       [3]            
       [4] "arrange.duckplyr_df"    - "dplyr_col_modify.data.frame" [4]            
       [5] "compute.duckplyr_df"    - "add_count.data.frame"        [5]            
       [6] "count.duckplyr_df"      - "mutate.data.frame"           [6]            
       [7] "summarise.duckplyr_df"  - "anti_join"                   [7]            
       [8] "cross_join.duckplyr_df" - "dplyr_row_slice.data.frame"  [8]            
       [9] "distinct.duckplyr_df"   - "anti_join.data.frame"        [9]            
      [10] "union_all.duckplyr_df"  - "arrange"                     [10]           
       ... ...                        ...                           and 69 more ...
      
        `actual$stats$fallback`:  382
      `expected$stats$fallback`: 1507
      
      `environment(actual$stats_show)` is <env:namespace:duckplyr>
      `environment(expected$stats_show)` is <env:namespace:dplyr>
      
      body(actual$to_duckdb_expr)[32:36] vs body(expected$to_duckdb_expr)[32:36]
        `            duckdb$expr_set_alias(out, x$alias)`
        `        }`
        `        out`
      - `    }, \`NULL\` = NULL, stop("Unknown expr class: ", class(x)[[1]]))`
      + `    }, \`NULL\` = NULL, cli::cli_abort("Unknown expr class: {.cls {class(x))}}"))`
        `}`
      
      `environment(actual$to_duckdb_expr)` is <env:namespace:duckplyr>
      `environment(expected$to_duckdb_expr)` is <env:namespace:dplyr>
      
      body(actual$to_duckdb_expr_meta)[51:55] vs body(expected$to_duckdb_expr_meta)[51:55]
        `            })`
        `        }`
        `        out`
      - `    }, \`NULL\` = expr(NULL), stop("Unknown expr class: ", class(x)[[1]]))`
      + `    }, \`NULL\` = expr(NULL), cli::cli_abort("Unknown expr class: {.cls {class(x))}}"))`
        `}`
      
      `environment(actual$to_duckdb_expr_meta)` is <env:namespace:duckplyr>
      `environment(expected$to_duckdb_expr_meta)` is <env:namespace:dplyr>
      
      `environment(actual$to_duckdb_exprs)` is <env:namespace:duckplyr>
      `environment(expected$to_duckdb_exprs)` is <env:namespace:dplyr>
      
      `environment(actual$to_duckdb_exprs_meta)` is <env:namespace:duckplyr>
      `environment(expected$to_duckdb_exprs_meta)` is <env:namespace:dplyr>
      
      [ FAIL 5 | WARN 0 | SKIP 318 | PASS 1214 ]
      Error: Test failures
      In addition: Warning messages:
      1: In normalizePath(tools::R_user_dir("R.cache", which = "cache")) :
        path[1]="/root/.cache/R/R.cache": No such file or directory
      2: In normalizePath(tools::R_user_dir("R.cache", which = "cache")) :
        path[1]="/root/.cache/R/R.cache": No such file or directory
      3: In normalizePath(tools::R_user_dir("R.cache", which = "cache")) :
        path[1]="/root/.cache/R/R.cache": No such file or directory
      
      🛠: 1182
      🔨:  547
      🦆:  635
      add_count, anti_join, arrange, compute, count, cross_join, distinct, do, eval, filter, full_join, inner_join, intersect, left_join, mutate, mutate.data.frame, nest_join, pull, reframe, relocate, rename, rename_with, right_join, rows_append, rows_delete, rows_insert, rows_patch, rows_update, rows_upsert, select, semi_join, setdiff, setequal, slice, slice_head, slice_sample, slice_tail, summarise, symdiff, transmute, ungroup, union_all
      
      00:00:43.73335
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
      > 
      > library(testthat)
      > library(ern)
      
      ern version: 1.3.1 
      
      If not already installed, software JAGS is recommended. 
      (https://sourceforge.net/projects/mcmc-jags/files/)
      
      > 
      > test_check("ern")
      Compiling model graph
         Resolving undeclared variables
         Allocating nodes
      Graph information:
         Observed stochastic nodes: 8
         Unobserved stochastic nodes: 58
         Total graph size: 790
      
      Initializing model
      
      Wastewater data smoothed using loess method
      iterations Richardson-Lucy deconvolution:  20
      -----
      The clinical testing data you input is not daily. `ern` requires daily data to compute Rt. `ern` will infer daily reports from your inputs. See `prm.daily` and `prm.daily.check` arguments of `estimate_R_cl()` for daily inference options.
      -----
      Assuming the first observed report (from 2020-03-14)
      is aggregated over 7 previous days
      (second observation's aggregation period).
      This can be changed in `estimate_R_cl()`, using the
      `prm.daily` argument (set a value for `first.agg.period`
      in this parameter list).
      -----
      Running MCMC model to infer daily reports from aggregated reports...
      
      Compiling model graph
         Resolving undeclared variables
         Allocating nodes
      Graph information:
         Observed stochastic nodes: 8
         Unobserved stochastic nodes: 58
         Total graph size: 790
      
      Initializing model
      
      - Filtering out any daily inferred reports associated
      with inferred aggregates outside of the specified tolerance of 10%...
      Before filtering: 56 daily reports
      After filtering:  42 daily reports
      To reduce the number of observations dropped in filtering, either:
        - adjust MCMC parameters in prm.daily (burn, iter, chains) to
            improve chances of MCMC convergence,
        - increase tolerance for this check (prm.daily.check$agg.reldiff.tol)
      Using default config in `EpiEstim::estimate_R()`.
      Deconvolution reporting delays...
      iterations Richardson-Lucy deconvolution:  10
      Deconvolution incubation period...
      iterations Richardson-Lucy deconvolution:  10
      Using default config in `EpiEstim::estimate_R()`.
      Deconvolution reporting delays...
      iterations Richardson-Lucy deconvolution:  10
      Deconvolution incubation period...
      iterations Richardson-Lucy deconvolution:  10
      Deconvolution reporting delays...
      iterations Richardson-Lucy deconvolution:  10
      Deconvolution incubation period...
      iterations Richardson-Lucy deconvolution:  10
      Using default config in `EpiEstim::estimate_R()`.
      Deconvolution reporting delays...
      iterations Richardson-Lucy deconvolution:  6
      Deconvolution incubation period...
      iterations Richardson-Lucy deconvolution:  10
      Deconvolution reporting delays...
      iterations Richardson-Lucy deconvolution:  10
      Deconvolution incubation period...
      iterations Richardson-Lucy deconvolution:  10
      iterations Richardson-Lucy deconvolution:  9
      Deconvolution incubation period...
      iterations Richardson-Lucy deconvolution:  9
      Wastewater data smoothed using loess method
      Wastewater data smoothed using loess method
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  6
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  8
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      
      ERROR: `si_distr` must be specified in `config.EpiEstim`. ABORTING!
      Wastewater data smoothed using loess method
      Wastewater data smoothed using rollmean method
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 175 ]
      
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

* Version: 0.4.1
* GitHub: https://github.com/smwoodman/eSDM
* Source code: https://github.com/cran/eSDM
* Date/Publication: 2024-02-14 23:30:02 UTC
* Number of recursive dependencies: 126

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
      
      $R
      [1] 3
      
      $rate
      [1] 0.02413113
      
      $lower
      [1] 0.0084585
      
      $upper
      [1] 0.06812388
      
      $time
      [1] 4.525246
      
      $date1
      [1] 18937.96
      
      $date2
      [1] 20600.72
      
      [ FAIL 1 | WARN 3 | SKIP 14 | PASS 297 ]
      
      ══ Skipped tests (14) ══════════════════════════════════════════════════════════
      • FIXME: Real groups don't produce the same output (1):
        'test-demography_ctfs.R:52:3'
      • bciex cannot be loaded (3): 'test-byyr.R:58:5',
        'test-demography_ctfs.R:415:5', 'test-fgeo_topography.R:57:5'
      • bukittimah cannot be loaded (1): 'test-byyr.R:72:5'
      • can_access_private_data is not TRUE (1): 'test-tt_test.R:196:3'
      • ctfs cannot be loaded (4): 'test-abundance.R:10:3',
        'test-abundanceperquad2.R:4:3', 'test-demography_ctfs.R:126:5',
        'test-fill.dimension.R:4:3'
      • empty test (1): 'test-tt_test.R:132:1'
      • fgeo.data cannot be loaded (1): 'test-demography_ctfs.R:17:3'
      • ngel cannot be loaded (1): 'test-byyr.R:86:5'
      • pasoh cannot be loaded (1): 'test-fgeo_habitat.R:67:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-byyr.R:21:3'): basal_area_byyr and abundance_byyr fail with informative errors ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (DATE -> DOUBLE)
      Backtrace:
           ▆
        1. ├─testthat::expect_silent(...) at test-byyr.R:21:3
        2. │ └─testthat:::quasi_capture(enquo(object), NULL, evaluate_promise)
        3. │   ├─testthat (local) .capture(...)
        4. │   │ ├─withr::with_output_sink(...)
        5. │   │ │ └─base::force(code)
        6. │   │ ├─base::withCallingHandlers(...)
        7. │   │ └─base::withVisible(code)
        8. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        9. ├─fgeo.analyze::abundance_byyr(vft, exactdate > 0, dbh > 0)
       10. │ └─fgeo.analyze:::add_years(pick_byyr(main_stems, ...))
       11. │   ├─drop_if_missing_dates(data) %>% mean_years() %>% ...
       12. │   └─fgeo.analyze:::drop_if_missing_dates(data)
       13. │     └─fgeo.analyze:::insensitive(data)
       14. │       └─base::structure(x, class = c("insensitive", class(x)))
       15. ├─fgeo.tool::drop_if_na(., "year")
       16. │ └─base::is.data.frame(dfm)
       17. ├─fgeo.analyze:::mean_years(.)
       18. │ └─... %>% rename_matches(data)
       19. ├─fgeo.tool::rename_matches(., data)
       20. │ └─fgeo.tool::extract_insensitive(names(x), names(y))
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
* Number of recursive dependencies: 261

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
      • Run Name: finn_fcst-20240309T052722Z
      
      ℹ Prepping Data
      ✔ Prepping Data [11s]
      
      ℹ Creating Model Workflows
      ✔ Creating Model Workflows [393ms]
      
      ℹ Creating Model Hyperparameters
      ✔ Creating Model Hyperparameters [373ms]
      
      ℹ Creating Train Test Splits
      ✔ Creating Train Test Splits [4s]
      
      ℹ Training Individual Models
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ✔ Training Individual Models [4.2s]
      
      ℹ Training Ensemble Models
      ℹ Ensemble models have been turned off.
      ℹ Training Ensemble Models
      ✔ Training Ensemble Models [20ms]
      
      ℹ Selecting Best Models
      ✔ Selecting Best Models [711ms]
      
      ! return_data is deprecated, please use 'get_forecast_data()' to get finnts results
      [1] "First Dt Val 11000"
      Finn Submission Info
      • Experiment Name: finn_fcst
      • Run Name: finn_fcst-20240309T052743Z
      
      ℹ Prepping Data
      ✔ Prepping Data [10.3s]
      
      ℹ Creating Model Workflows
      ✔ Creating Model Workflows [326ms]
      
      ℹ Creating Model Hyperparameters
      ✔ Creating Model Hyperparameters [377ms]
      
      ℹ Creating Train Test Splits
      ✔ Creating Train Test Splits [1.4s]
      
      ℹ Training Individual Models
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ✔ Training Individual Models [59.3s]
      
      ℹ Training Ensemble Models
      ℹ Ensemble models have been turned off.
      ℹ Training Ensemble Models
      ✔ Training Ensemble Models [19ms]
      
      ℹ Selecting Best Models
      ✔ Selecting Best Models [3.9s]
      
      ℹ Reconciling Hierarchical Forecasts
      ✔ Reconciling Hierarchical Forecasts [1.7s]
      
      ! return_data is deprecated, please use 'get_forecast_data()' to get finnts results
      [1] "First Dt Val 9.15263561424672" "First Dt Val 10.0227830082431"
      [3] "First Dt Val 10.4670642059706" "First Dt Val 11.0353096862118"
      [5] "First Dt Val 12.537166248181" 
      Finn Submission Info
      • Experiment Name: finn_fcst
      • Run Name: finn_fcst-20240309T052901Z
      
      ℹ Prepping Data
      ✔ Prepping Data [11.9s]
      
      ℹ Creating Model Workflows
      ✔ Creating Model Workflows [327ms]
      
      ℹ Creating Model Hyperparameters
      ✔ Creating Model Hyperparameters [386ms]
      
      ℹ Creating Train Test Splits
      ✔ Creating Train Test Splits [2.6s]
      
      ℹ Training Individual Models
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 1: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 2: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ! 3: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 4: internal:
        A correlation computation is required, but `estimate` is constant and ...
        standard deviation, resulting in a divide by 0 error. `NA` will be ret...
      ! 5: internal:
        A correlation computation is required, but the inputs are size zero or...
        the standard deviation cannot be computed. `NA` will be returned.
      ✔ Training Individual Models [1m 7.9s]
      
      ℹ Training Ensemble Models
      ℹ Ensemble models have been turned off.
      ℹ Training Ensemble Models
      ✔ Training Ensemble Models [19ms]
      
      ℹ Selecting Best Models
      ✔ Selecting Best Models [4.4s]
      
      ℹ Reconciling Hierarchical Forecasts
      ✔ Reconciling Hierarchical Forecasts [1.6s]
      
      ! return_data is deprecated, please use 'get_forecast_data()' to get finnts results
      [1] "First Dt Val 185" "First Dt Val 213" "First Dt Val 122" "First Dt Val 187"
      [ FAIL 1 | WARN 7 | SKIP 0 | PASS 79 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-forecast_time_series.R:100:3'): final forecast data rows are meaningful ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (DATE -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_equal(nrow(future_frame), forecast_horizon) at test-forecast_time_series.R:100:3
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
      
          filter
      
      > 
      > test_check("funneljoin")
      [ FAIL 17 | WARN 0 | SKIP 1 | PASS 408 ]
      
      ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
      • On CRAN (1): 'test_remote.R:3:1'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_firstwithin.R:32:3'): after_join works with mode = inner and type = firstwithin-any ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_equal(nrow(res), 3) at test_firstwithin.R:32:3
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─base::nrow(res)
       5.   ├─base::dim(x)
       6.   └─base::dim.data.frame(x)
       7.     └─base::.row_names_info(x, 2L)
      ── Error ('test_firstwithin.R:44:3'): after_join works with mode = inner and type = firstwithin-first ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_equal(nrow(res), 2) at test_firstwithin.R:44:3
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─base::nrow(res)
       5.   ├─base::dim(x)
       6.   └─base::dim.data.frame(x)
       7.     └─base::.row_names_info(x, 2L)
      ── Error ('test_firstwithin.R:52:3'): after_join works with mode = right and type = firstwithin-any ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
           ▆
        1. ├─clicks %>% ... at test_firstwithin.R:52:3
        2. ├─funneljoin::after_right_join(...)
        3. │ └─funneljoin::after_join(...)
        4. │   └─... %>% dplyr::select(..idx, ..idy, .gap)
        5. ├─dplyr::select(., ..idx, ..idy, .gap)
        6. ├─dplyr::mutate(...)
        7. └─dplyr:::mutate.data.frame(...)
        8.   └─dplyr::mutate(...)
        9.     └─dplyr:::compute_by(...)
       10.       ├─dplyr::group_data(data)
       11.       ├─dplyr:::group_data.tbl_df(data)
       12.       ├─base::NextMethod()
       13.       └─dplyr:::group_data.data.frame(data)
       14.         └─dplyr::group_data(.data)
       15.           └─base::nrow(.data)
       16.             ├─base::dim(x)
       17.             └─base::dim.data.frame(x)
       18.               └─base::.row_names_info(x, 2L)
      ── Error ('test_max_gap.R:12:3'): after_join works with mode = left and type = any-any and max_gap = difftime ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_true(...) at test_max_gap.R:12:3
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. ├─base::Ops.Date(res$timestamp.y, res$timestamp.x)
       5. └─base::NextMethod(.Generic)
      ── Error ('test_max_gap.R:26:3'): after_join works with mode = left and type = any-any and max_gap = numeric ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_true(...) at test_max_gap.R:26:3
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. ├─base::Ops.Date(res$timestamp.y, res$timestamp.x)
       5. └─base::NextMethod(.Generic)
      ── Error ('test_max_gap.R:41:3'): after_join works with mode = inner and type = any-any and max_gap = difftime ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_true(nrow(res) >= 4) at test_max_gap.R:41:3
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─base::nrow(res)
       5.   ├─base::dim(x)
       6.   └─base::dim.data.frame(x)
       7.     └─base::.row_names_info(x, 2L)
      ── Error ('test_max_gap.R:57:3'): after_join works with mode = inner and type = any-any and max_gap = numeric ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_true(nrow(res) >= 4) at test_max_gap.R:57:3
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─base::nrow(res)
       5.   ├─base::dim(x)
       6.   └─base::dim.data.frame(x)
       7.     └─base::.row_names_info(x, 2L)
      ── Error ('test_max_gap.R:73:3'): after_join works with mode = right and type = any-any and max_gap = difftime ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_true(...) at test_max_gap.R:73:3
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. ├─base::Ops.Date(res$timestamp.y, res$timestamp.x)
       5. └─base::NextMethod(.Generic)
      ── Error ('test_max_gap.R:88:3'): after_join works with mode = right and type = any-any and max_gap = numeric ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_true(...) at test_max_gap.R:88:3
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. ├─base::Ops.Date(res$timestamp.y, res$timestamp.x)
       5. └─base::NextMethod(.Generic)
      ── Error ('test_max_gap.R:104:3'): after_join works with mode = anti and type = any-any and max_gap = difftime ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_true(2 %in% res$user_id) at test_max_gap.R:104:3
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─2 %in% res$user_id
      ── Error ('test_max_gap.R:117:3'): after_join works with mode = anti and type = any-any and max_gap = numeric ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_true(2 %in% res$user_id) at test_max_gap.R:117:3
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─2 %in% res$user_id
      ── Error ('test_max_gap.R:130:3'): after_join works with mode = semi and type = any-any and max_gap = difftime ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_true(!2 %in% res$user_id) at test_max_gap.R:130:3
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─2 %in% res$user_id
      ── Error ('test_max_gap.R:142:3'): after_join works with mode = semi and type = any-any and max_gap = numeric ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_true(!2 %in% res$user_id) at test_max_gap.R:142:3
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─2 %in% res$user_id
      ── Error ('test_max_gap.R:155:3'): after_join works with mode = full and type = any-any and max_gap = difftime ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_true(nrow(res) >= 10) at test_max_gap.R:155:3
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─base::nrow(res)
       5.   ├─base::dim(x)
       6.   └─base::dim.data.frame(x)
       7.     └─base::.row_names_info(x, 2L)
      ── Error ('test_max_gap.R:173:3'): after_join works with mode = full and type = any-any and max_gap = numeric ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_true(nrow(res) >= 10) at test_max_gap.R:173:3
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─base::nrow(res)
       5.   ├─base::dim(x)
       6.   └─base::dim.data.frame(x)
       7.     └─base::.row_names_info(x, 2L)
      ── Error ('test_max_gap.R:187:3'): after_join works with mode = left, type = any-any, max_gap = difftime, and gap_col is TRUE ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
           ▆
        1. ├─funneljoin::after_join(...) at test_max_gap.R:187:3
        2. │ └─... %>% dplyr::select(..idx, ..idy, .gap)
        3. ├─dplyr::select(., ..idx, ..idy, .gap)
        4. ├─dplyr::mutate(...)
        5. └─dplyr:::mutate.data.frame(...)
        6.   └─dplyr::mutate(...)
        7.     └─dplyr:::compute_by(...)
        8.       ├─dplyr::group_data(data)
        9.       ├─dplyr:::group_data.tbl_df(data)
       10.       ├─base::NextMethod()
       11.       └─dplyr:::group_data.data.frame(data)
       12.         └─dplyr::group_data(.data)
       13.           └─base::nrow(.data)
       14.             ├─base::dim(x)
       15.             └─base::dim.data.frame(x)
       16.               └─base::.row_names_info(x, 2L)
      ── Error ('test_max_gap.R:202:3'): after_join works with mode = left, type = any-any, max_gap = numeric, and gap_col is TRUE ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIME -> DOUBLE)
      Backtrace:
           ▆
        1. ├─funneljoin::after_join(...) at test_max_gap.R:202:3
        2. │ └─... %>% dplyr::select(..idx, ..idy, .gap)
        3. ├─dplyr::select(., ..idx, ..idy, .gap)
        4. ├─dplyr::mutate(...)
        5. └─dplyr:::mutate.data.frame(...)
        6.   └─dplyr::mutate(...)
        7.     └─dplyr:::compute_by(...)
        8.       ├─dplyr::group_data(data)
        9.       ├─dplyr:::group_data.tbl_df(data)
       10.       ├─base::NextMethod()
       11.       └─dplyr:::group_data.data.frame(data)
       12.         └─dplyr::group_data(.data)
       13.           └─base::nrow(.data)
       14.             ├─base::dim(x)
       15.             └─base::dim.data.frame(x)
       16.               └─base::.row_names_info(x, 2L)
      
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

# glmmfields

<details>

* Version: 0.1.8
* GitHub: https://github.com/seananderson/glmmfields
* Source code: https://github.com/cran/glmmfields
* Date/Publication: 2023-10-20 17:50:02 UTC
* Number of recursive dependencies: 109

Run `revdepcheck::cloud_details(, "glmmfields")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is 127.1Mb
      sub-directories of 1Mb or more:
        libs  126.3Mb
    ```

*   checking for GNU extensions in Makefiles ... NOTE
    ```
    GNU make is a SystemRequirements.
    ```

## Newly fixed

*   checking whether package ‘glmmfields’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/glmmfields/old/glmmfields.Rcheck/00install.out’ for details.
    ```

# heemod

<details>

* Version: 1.0.1
* GitHub: https://github.com/aphp/heemod
* Source code: https://github.com/cran/heemod
* Date/Publication: 2024-01-31 12:30:02 UTC
* Number of recursive dependencies: 135

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
      I: detected use of 'state_time', expanding states: A, B.
      I: detected use of 'state_time', expanding states: A, B.
      I: detected use of 'state_time', expanding state: A.
      I: detected use of 'state_time', expanding state: B.
      I: detected use of 'state_time', expanding state: C.
      Updating strategy 'I'...
      Updating strategy 'II'...
      Updating strategy 'I'...
      Updating strategy 'II'...
      No weights specified in update, using equal weights.
      Updating strategy 'I'...
      Updating strategy 'II'...
      Loading required namespace: diagram
      I: detected use of 'state_time', expanding state: A.
      I: detected use of 'state_time', expanding state: A.
      Updating strategy 'standard'...
      Updating strategy 'new'...
      Updating strategy 'standard'...
      Updating strategy 'new'...
      Cluster closed.
      Loading required package: survival
      Resampling strategy 'I'...
      Resampling strategy 'II'...
      Resampling strategy 'I'...
      Resampling strategy 'II'...
      Resampling strategy 'I'...
      Resampling strategy 'II'...
      Loading required namespace: logitnorm
      I: detected use of 'state_time', expanding state: X2.
      II: detected use of 'state_time', expanding state: X2.
      Resampling strategy 'I'...
      Resampling strategy 'II'...
      `dplyr::filter(bc, group == "Good")` is a complex expression. If you need to
      perform PSA, please make sure the data.frame does not include the package
      environment, i.e. is not preceded by `::`.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      Resampling strategy 'I'...
      Resampling strategy 'I'...
      Resampling strategy 'I'...
      Resampling strategy 'II'...
      Resampling strategy 'I'...
      Resampling strategy 'I'...
      No covariates provided, returning aggregate survival across all subjects.
      Resampling strategy 'I'...
      Resampling strategy 'I'...
      `km_2` must be a <surv_fit>
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      Resampling strategy 'I'...
      Resampling strategy 'II'...
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      Resampling strategy 'I'...
      Resampling strategy 'standard'...
      Resampling strategy 'new'...
      Updating strategy 'standard'...
      Updating strategy 'new'...
      [ FAIL 10 | WARN 0 | SKIP 1 | PASS 504 ]
      
      ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
      • empty test (1): 'test_starting_values.R:200:1'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test_efficiency_frontier.R:15:5'): Identify Frontier Scenarios ────
      `result1` (`actual`) not equal to c("Scenario 1", "Scenario 5", "Scenario 8") (`expected`).
      
      `actual`:   "Scenario 8"                          
      `expected`: "Scenario 1" "Scenario 5" "Scenario 8"
      ── Failure ('test_efficiency_frontier.R:32:5'): Identify Frontier Scenarios ────
      `result2` (`actual`) not equal to c("Scenario 2", "Scenario 5") (`expected`).
      
      `actual`:   "Scenario 5"             
      `expected`: "Scenario 2" "Scenario 5"
      ── Failure ('test_efficiency_frontier.R:47:5'): Identify Frontier Scenarios ────
      `result3` (`actual`) not equal to c("Scenario 1", "Scenario 2", "Scenario 4", "Scenario 6") (`expected`).
      
      `actual`:   "Scenario 6"                                       
      `expected`: "Scenario 1" "Scenario 2" "Scenario 4" "Scenario 6"
      ── Failure ('test_efficiency_frontier.R:63:5'): Identify Frontier Scenarios ────
      `result4` (`actual`) not equal to c("Scenario 1", "Scenario 6") (`expected`).
      
      `actual`:   "Scenario 6"             
      `expected`: "Scenario 1" "Scenario 6"
      ── Failure ('test_efficiency_frontier.R:78:5'): Identify Frontier Scenarios ────
      `result5` (`actual`) not equal to c("Scenario 1", "Scenario 2", "Scenario 3", "Scenario 4", "Scenario 5") (`expected`).
      
      `actual`:   "Scenario 5"                                                    
      `expected`: "Scenario 1" "Scenario 2" "Scenario 3" "Scenario 4" "Scenario 5"
      ── Failure ('test_efficiency_frontier.R:95:5'): Identify Frontier Scenarios ────
      `result6` (`actual`) not equal to c("Scenario 1", "Scenario 4", "Scenario 7") (`expected`).
      
      `actual`:   "Scenario 7"                          
      `expected`: "Scenario 1" "Scenario 4" "Scenario 7"
      ── Failure ('test_efficiency_frontier.R:113:5'): Identify Frontier Scenarios ───
      `result7` (`actual`) not equal to c("Scenario 2", "Scenario 4", "Scenario 5", "Scenario 7") (`expected`).
      
      `actual`:   "Scenario 7"                                       
      `expected`: "Scenario 2" "Scenario 4" "Scenario 5" "Scenario 7"
      ── Failure ('test_efficiency_frontier.R:128:5'): Identify Frontier Scenarios ───
      `result8` (`actual`) not equal to c("Scenario 1", "Scenario 2") (`expected`).
      
      `actual`:   "Scenario 2"             
      `expected`: "Scenario 1" "Scenario 2"
      ── Failure ('test_efficiency_frontier.R:206:5'): Identify Frontier Scenarios ───
      `result13` (`actual`) not equal to c("Scenario 2", "Scenario 3") (`expected`).
      
      `actual`:   "Scenario 3"             
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
                                                         Institution Institution ID
    1                                       Alabama State University         100724
    2                         Chattahoochee Valley Community College         101028
    3                 George C Wallace State Community College-Selma         101301
    4                                 Lawson State Community College         101569
    5                                                  Miles College         101675
    6                                             Oakwood University         101912
    7                                 Bishop State Community College         102030
    8                                Shelton State Community College         102067
    9                                              Talladega College         102298
    10                   H Councill Trenholm State Community College         102313
    11                                           Tuskegee University         102377
    12                                               Charter College         102845
    13                                     Brookline College-Phoenix         104090
    14                                       Central Arizona College         104346
    15                                     GateWay Community College         105145
    16                                                  Dine College         105297
    17                                     Ottawa University-Phoenix         105367
    18                                 Pima Medical Institute-Tucson         105534
    19                              South Mountain Community College         105792
    20                          University of Arkansas at Pine Bluff         106412
    21                           Arkansas State University Mid-South         107318
    22                                    Southeast Arkansas College         107637
    23                                  Art Center College of Design         109651
    24                                     Barstow Community College         109907
    25                                California College of the Arts         110370
    26                                California Lutheran University         110413
    27                    Alliant International University-San Diego         110468
    28                              California Institute of the Arts         111081
    29                                     Claremont McKenna College         112260
    30                         Western University of Health Sciences         112525
    31                                               Compton College         112686
    32                            Dominican University of California         113698
    33  FIDM-Fashion Institute of Design & Merchandising-Los Angeles         114354
    34                                               Gavilan College         114938
    35                          Golden Gate University-San Francisco         115083
    36                                         Holy Names University         115728
    37                                          La Sierra University         117627
    38                                         Loma Linda University         117636
    39             Southern California University of Health Sciences         117672
    40                                              College of Marin         118347
    41                                 Mount Saint Mary's University         119173
    42                                           Napa Valley College         119331
    43                                            Occidental College         120254
    44                                Otis College of Art and Design         120403
    45                                          Palo Alto University         120698
    46                                          Pacific Oaks College         120768
    47                                            Palo Verde College         120953
    48                                Point Loma Nazarene University         121309
    49                                                Pomona College         121345
    50                                           Porterville College         121363
    51                                        University of Redlands         121691
    52                            San Joaquin Valley College-Visalia         122685
    53                            Saint Mary's College of California         123554
    54                    Vanguard University of Southern California         123651
    55                                                  Taft College         124113
    56                                 Carrington College-Sacramento         125532
    57                                              Whittier College         125763
    58                                           Woodbury University         125897
    59                                        Adams State University         126182
    60                                              Colorado College         126678
    61                          Lincoln College of Technology-Denver         126951
    62                                   Asnuntuck Community College         128577
    63                                      University of Bridgeport         128744
    64                                           Connecticut College         128902
    65                                            Goodwin University         129154
    66                          Eastern Connecticut State University         129215
    67                                     Capital Community College         129367
    68                                  Manchester Community College         129695
    69                                   Middlesex Community College         129756
    70                                    University of Saint Joseph         130314
    71                                               Trinity College         130590
    72                                      Tunxis Community College         130606
    73                                           Wesleyan University         130697
    74                                     Delaware State University         130934
    75                        University of the District of Columbia         131399
    76                                          Gallaudet University         131450
    77                                 Trinity Washington University         131876
    78                                    Bethune-Cookman University         132602
    79                                         Edward Waters College         133526
    80                                       AdventHealth University         133872
    81                                         North Florida College         136145
    82                                Palm Beach Atlantic University         136330
    83                                               Rollins College         136950
    84                                           Agnes Scott College         138600
    85                                      Albany Technical College         138682
    86                                     Atlanta Technical College         138840
    87                                              Point University         138868
    88                            Atlanta Metropolitan State College         138901
    89                                      Clark Atlanta University         138947
    90                                     Augusta Technical College         138956
    91                                             Brenau University         139199
    92                                    Columbus Technical College         139357
    93                                    East Georgia State College         139621
    94                                  Fort Valley State University         139719
    95                                          Gordon State College         139968
    96                                               Life University         140252
    97                                             Morehouse College         140553
    98                                    Savannah Technical College         140942
    99                                     Savannah State University         140960
    100                                           Shorter University         140988
    101                                              Spelman College         141060
    102                          Wiregrass Georgia Technical College         141255
    103                             Chaminade University of Honolulu         141486
    104                                 University of Hawaii at Hilo         141565
    105                                    Hawaii Pacific University         141644
    106                                   Honolulu Community College         141680
    107                                      Kauai Community College         141802
    108                            University of Hawaii Maui College         141839
    109                               University of Hawaii-West Oahu         141981
    110                                   Windward Community College         141990
    111                       School of the Art Institute of Chicago         143048
    112     The Chicago School of Professional Psychology at Chicago         143978
    113                                     Chicago State University         144005
    114                City Colleges of Chicago-Kennedy-King College         144157
    115                City Colleges of Chicago-Olive-Harvey College         144175
    116             City Colleges of Chicago-Richard J Daley College         144193
    117                                   Governors State University         145336
    118                                 Illinois Wesleyan University         145646
    119                                            Judson University         146339
    120                                          Lake Forest College         146481
    121                                        Moody Bible Institute         147369
    122                                        North Central College         147660
    123                                        Prairie State College         148007
    124                                         Roosevelt University         148487
    125                                         Dominican University         148496
    126                           University of Illinois Springfield         148654
    127                                       South Suburban College         149365
    128                                              Wheaton College         149781
    129                                            DePauw University         150400
    130                              Indiana Institute of Technology         151290
    131                                Indiana University-South Bend         151342
    132                                 Indiana University-Northwest         151360
    133                          Rose-Hulman Institute of Technology         152318
    134                                                  Coe College         153144
    135                                             Grinnell College         153384
    136                           Maharishi International University         153861
    137                              Seward County Community College         155858
    138                                  Asbury Theological Seminary         156222
    139                                                Berea College         156295
    140                                    Kentucky State University         157058
    141                                          Spalding University         157757
    142                Central Louisiana Technical Community College         158088
    143                                           Dillard University         158802
    144                                      Nunez Community College         158884
    145                        Louisiana State University-Alexandria         159382
    146                            Louisiana State University-Eunice         159407
    147                                Loyola University New Orleans         159656
    148                                     University of Holy Cross         160065
    149               Franciscan Missionaries of Our Lady University         160074
    150                           Southern University at New Orleans         160630
    151                            Southern University at Shreveport         160649
    152                               Xavier University of Louisiana         160904
    153                                                Bates College         160977
    154                                              Bowdoin College         161004
    155                                                Colby College         161086
    156                             Baltimore City Community College         161864
    157                                      University of Baltimore         161873
    158                                      Coppin State University         162283
    159                                   Frostburg State University         162584
    160                                              Goucher College         162654
    161                                                 Hood College         162760
    162                            Maryland Institute College of Art         163295
    163                         University of Maryland Eastern Shore         163338
    164                           Hult International Business School         164368
    165                                             Clark University         165334
    166                                  Framingham State University         165866
    167                                            Lasell University         166391
    168                      Massachusetts College of Art and Design         166674
    169                                        Mount Holyoke College         166939
    170                                North Shore Community College         167312
    171                                    Roxbury Community College         167631
    172                                                Smith College         167835
    173                                            Wellesley College         168218
    174                            Wentworth Institute of Technology         168227
    175                                              Wheaton College         168281
    176                                           Andrews University         168740
    177                                   MIAT College of Technology         169655
    178                                  University of Detroit Mercy         169716
    179                                   Grace Christian University         170000
    180                                            Hillsdale College         170286
    181                                            Kalamazoo College         170532
    182                            Lawrence Technological University         170675
    183                                          Augsburg University         173045
    184                                             Carleton College         173258
    185                                           Macalester College         173902
    186                                              St Olaf College         174844
    187                                      Alcorn State University         175342
    188                                    Coahoma Community College         175519
    189                                       Delta State University         175616
    190                          Mississippi Valley State University         176044
    191                                Harris-Stowe State University         177551
    192                                           Lincoln University         177940
    193                      Midwestern Baptist Theological Seminary         178208
    194                               Berkeley College-Woodland Park         183789
    195                                           Bloomfield College         183822
    196                                              Drew University         184348
    197                                          Felician University         184612
    198                Fairleigh Dickinson University-Florham Campus         184694
    199                                    Georgian Court University         184773
    200                                             Rider University         186283
    201                                     Saint Peter's University         186432
    202                                   Saint Elizabeth University         186618
    203                                  Navajo Technical University         187596
    204                                     Clovis Community College         187639
    205                 Eastern New Mexico University-Roswell Campus         187666
    206                              New Mexico Highlands University         187897
    207                                    New Mexico Junior College         187903
    208                       University of New Mexico-Gallup Campus         187958
    209                New Mexico Institute of Mining and Technology         187967
    210                         New Mexico State University-Carlsbad         188003
    211              University of New Mexico-Valencia County Campus         188049
    212                                  Northern New Mexico College         188058
    213                                   Santa Fe Community College         188137
    214                                Western New Mexico University         188304
    215                 Vaughn College of Aeronautics and Technology         188340
    216                                                 Bard College         189088
    217                                              Barnard College         189097
    218                                    Berkeley College-New York         189228
    219                                           Colgate University         190099
    220                                             Hamilton College         191515
    221                                                 Iona College         191931
    222                                                  LIM College         192271
    223                               Long Island Business Institute         192509
    224                                            Manhattan College         192703
    225                               College of Mount Saint Vincent         193399
    226                                           Niagara University         193973
    227                                                Nyack College         194161
    228                                         Pratt Institute-Main         194578
    229                                           St Francis College         195173
    230                                       Sarah Lawrence College         195304
    231                                             Skidmore College         195526
    232                         SUNY College of Technology at Canton         196015
    233                                   SUNY Polytechnic Institute         196112
    234                                     SUNY at Purchase College         196219
    235                    SUNY Downstate Health Sciences University         196255
    236                                   Upstate Medical University         196307
    237                                               Vassar College         197133
    238                             South Piedmont Community College         197850
    239                                     Bladen Community College         198011
    240                                             Davidson College         198385
    241                           Durham Technical Community College         198455
    242                                  Edgecombe Community College         198491
    243                              Elizabeth City State University         198507
    244                               James Sprunt Community College         198729
    245                                   Johnson C Smith University         198756
    246                        Platt College-Miller-Motte-Wilmington         198978
    247                                       Nash Community College         199087
    248                                   Piedmont Community College         199324
    249                                   Richmond Community College         199449
    250                                    Robeson Community College         199476
    251                                 Saint Augustine's University         199582
    252                                    Sampson Community College         199625
    253                                              Shaw University         199643
    254                            Vance-Granville Community College         199838
    255                                     Central State University         201690
    256                                           Denison University         202523
    257                                               Kenyon College         203535
    258                                  Miami University-Middletown         204015
    259                                              Oberlin College         204501
    260                          Ohio State University-Newark Campus         204705
    261                                       The College of Wooster         206589
    262                                           Cameron University         206914
    263                                        Connors State College         206996
    264                               Eastern Oklahoma State College         207050
    265                                   Redlands Community College         207069
    266                                          Langston University         207209
    267                            Northeastern Oklahoma A&M College         207290
    268                University of Oklahoma-Health Sciences Center         207342
    269                                      Oral Roberts University         207582
    270                                      Rogers State University         207661
    271                                       Seminole State College         207740
    272                                          University of Tulsa         207971
    273                                        Lewis & Clark College         209056
    274                           Oregon Health & Science University         209490
    275                                           Pacific University         209612
    276                                       University of Portland         209825
    277                                                 Reed College         209922
    278                                        Willamette University         210401
    279                                           Arcadia University         211088
    280                                            Bryn Mawr College         211273
    281                                        Chestnut Hill College         211583
    282                                           Eastern University         212133
    283                                Franklin and Marshall College         212577
    284                                            Haverford College         212911
    285                                            Lafayette College         213385
    286                                           Lincoln University         213598
    287                                               Peirce College         214883
    288                                   The University of the Arts         215105
    289                                   Cairn University-Langhorne         215114
    290                 Philadelphia College of Osteopathic Medicine         215123
    291                                   University of the Sciences         215132
    292                            University of Pittsburgh-Bradford         215266
    293                                           Swarthmore College         216287
    294                                Rhode Island School of Design         217493
    295                                      Aiken Technical College         217615
    296                          Technical College of the Lowcountry         217712
    297                                             Benedict College         217721
    298                                 Southern Wesleyan University         217776
    299                                           Claflin University         217873
    300                        Florence-Darlington Technical College         218025
    301                                         Limestone University         218238
    302                         Orangeburg Calhoun Technical College         218487
    303                       University of South Carolina-Lancaster         218672
    304                          University of South Carolina-Sumter         218690
    305                              South Carolina State University         218733
    306                                       York Technical College         218991
    307                      National American University-Rapid City         219204
    308                                        Oglala Lakota College         219277
    309                                                 Lane College         220598
    310                                               Rhodes College         221351
    311                                Southern Adventist University         221661
    312                                          Amberton University         222628
    313                                         Coastal Bend College         223320
    314                                           Brazosport College         223506
    315                                   Concordia University Texas         224004
    316                               Texas A&M University-Texarkana         224545
    317                                    Western Technical College         224679
    318                                            Galveston College         224961
    319                                   Houston Baptist University         225399
    320                               University of Houston-Victoria         225502
    321                                  Huston-Tillotson University         225575
    322                              Lamar State College-Port Arthur         226116
    323                                      College of the Mainland         226408
    324                                              Midland College         226806
    325                              Our Lady of the Lake University         227331
    326                                    Saint Edward's University         227845
    327                                      University of St Thomas         227863
    328                                        St. Mary's University         228149
    329                                      Southwestern University         228343
    330                                    Sul Ross State University         228501
    331 The University of Texas Health Science Center at San Antonio         228644
    332                                    Texas Wesleyan University         229160
    333                                           Trinity University         229267
    334                                   Wayland Baptist University         229780
    335                              Brigham Young University-Hawaii         230047
    336                                           Middlebury College         230959
    337                     Bryant & Stratton College-Virginia Beach         231785
    338                                           Hampton University         232265
    339                                University of Mary Washington         232681
    340                                Paul D Camp Community College         233037
    341                                       University of Richmond         233374
    342                                    Virginia State University         234155
    343                                    Virginia Union University         234164
    344                                   City University of Seattle         234915
    345                                  The Evergreen State College         235167
    346                                      Bates Technical College         235671
    347                                     Renton Technical College         236382
    348                                    Saint Martin's University         236452
    349                                   Seattle Pacific University         236577
    350                                              Whitman College         237057
    351                                          Lawrence University         239017
    352                             University of Wisconsin-Parkside         240374
    353                                   Herzing University-Madison         240392
    354                             American Samoa Community College         240736
    355                                       Guam Community College         240745
    356                                           University of Guam         240754
    357                                    Northern Marianas College         240790
    358                       Universidad Adventista de las Antillas         241191
    359                               Universidad Central de Bayamon         241225
    360          Inter American University of Puerto Rico-San German         242617
    361           Inter American University of Puerto Rico-Aguadilla         242626
    362        Inter American University of Puerto Rico-Barranquitas         242644
    363               Inter American University of Puerto Rico-Ponce         242662
    364             Inter American University of Puerto Rico-Guayama         242699
    365             Inter American University of Puerto Rico-Bayamon         242705
    366                          University of Puerto Rico-Aguadilla         243106
    367                            University of Puerto Rico-Arecibo         243115
    368                            University of Puerto Rico-Bayamon         243133
    369                           University of Puerto Rico-Carolina         243142
    370                              University of Puerto Rico-Cayey         243151
    371                            University of Puerto Rico-Humacao         243179
    372                              University of Puerto Rico-Ponce         243212
    373                              Universidad del Sagrado Corazon         243443
    374                       Universidad Politecnica de Puerto Rico         243577
    375                             University of the Virgin Islands         243665
    376                                            Parker University         243823
    377                   EDP University of Puerto Rico Inc-San Juan         243832
    378                           Georgia Piedmont Technical College         244446
    379                             Mid-America Christian University         245953
    380                                   Southern Technical College         366553
    381              University of St. Augustine for Health Sciences         367954
    382                                                 EDIC College         376321
    383                              College of the Marshall Islands         376695
    384                                     Hawaii Community College         383190
    385                                        Everglades University         385619
    386                            Copper Mountain Community College         395362
    387                                                  ASA College         404994
    388                           Galen College of Nursing-Tampa Bay         406024
    389                         Galen College of Nursing-San Antonio         406033
    390                      Florida National University-Main Campus         408844
    391                             River Parishes Community College         436304
    392                                         Stratford University         438498
    393                 American InterContinental University-Atlanta         438586
    394                                             Cascadia College         439190
    395                         Johnson & Wales University-Charlotte         445708
    396                        Roseman University of Health Sciences         445735
    397                                     Northwest Career College         445948
    398              Harrisburg University of Science and Technology         446640
    399                                     United States University         447050
    400                                Rasmussen University-Illinois         448673
    401                                      Fortis College-Columbus         450058
    402                              Southwest University at El Paso         451556
    403                          Bryant & Stratton College-Wauwatosa         451750
    404                                               Jersey College         455196
    405                                   Woodland Community College         455512
    406 The Chicago School of Professional Psychology at Los Angeles         455664
    407                                               Unitek College         459204
    408                                   Touro University Worldwide         459727
    409                                Mildred Elley-New York Campus         461014
    410                               Los Angeles Pacific University         474863
    411            CUNY Stella and Charles Guttman Community College         475565
    412                       Florida Institute of Technology-Online         480569
    413                                    DeVry College of New York         482413
    414                                  DeVry University-California         482431
    415                                     DeVry University-Georgia         482468
    416                               Florida Polytechnic University         482936
    417                           Texas A&M University-Central Texas         483036
    418                            Louisiana Delta Community College         483212
    419                                  High Desert Medical College         484002
    420                          University of North Texas at Dallas         484905
    421                              Coastal Pines Technical College         485458
    422            The University of Tennessee Health Science Center         487010
    423                                         Westcliff University         490133
        % of Students Recieved Aid Institution Size Student Diversity
    1                           93                2                97
    2                           80                2                57
    3                           82                2                80
    4                           88                2                87
    5                           94                2                96
    6                           86                2                99
    7                           83                2                72
    8                           53                2                44
    9                          100                2                97
    10                          84                2                76
    11                          57                2                99
    12                          81                2                63
    13                          57                2                67
    14                          71                2                59
    15                          40                2                70
    16                          80                2                99
    17                          53                2                59
    18                          65                2                63
    19                          43                2                83
    20                          97                2                96
    21                          53                2                66
    22                          90                2                80
    23                          76                2                88
    24                          79                2                73
    25                          73                2                82
    26                          95                2                60
    27                           9                2                57
    28                          94                2                59
    29                          47                2                60
    30                          NA                2                65
    31                          51                2                98
    32                          83                2                69
    33                          53                2                66
    34                          44                2                75
    35                          74                2                63
    36                          93                2                82
    37                          91                2                88
    38                          68                2                72
    39                          24                2                63
    40                          32                2                51
    41                          56                2                88
    42                          55                2                75
    43                          72                2                52
    44                          88                2                76
    45                          88                2                48
    46                          70                2                78
    47                          46                2                59
    48                          85                2                48
    49                          69                2                69
    50                          73                2                87
    51                          85                2                62
    52                          61                2                74
    53                          97                2                59
    54                          96                2                62
    55                          42                2                72
    56                          60                2                72
    57                          95                2                77
    58                          91                2                65
    59                          67                2                48
    60                          48                2                35
    61                          89                2                50
    62                          50                2                35
    63                          78                2                67
    64                          94                2                32
    65                          88                2                50
    66                          79                2                31
    67                          65                2                78
    68                          51                2                50
    69                          48                2                36
    70                          93                2                36
    71                          51                2                37
    72                          56                2                44
    73                          42                2                44
    74                          73                2                91
    75                          67                2                94
    76                          82                2                50
    77                          91                2                96
    78                          95                2                99
    79                          29                2                84
    80                          61                2                63
    81                          59                2                32
    82                          79                2                38
    83                          76                2                43
    84                          97                2                68
    85                          90                2                82
    86                          81                2                96
    87                          95                2                49
    88                          80                2                98
    89                          86                2               100
    90                          75                2                58
    91                          85                2                51
    92                          85                2                63
    93                          77                2                58
    94                          87                2                98
    95                          85                2                48
    96                          82                2                51
    97                          76                2               100
    98                          89                2                66
    99                          87                2                97
    100                         81                2                38
    101                         78                2               100
    102                         95                2                47
    103                         86                2                84
    104                         73                2                81
    105                         59                2                77
    106                         27                2                93
    107                         44                2                84
    108                         41                2                84
    109                         50                2                91
    110                         24                2                87
    111                         89                2                62
    112                         91                2                50
    113                         85                2                96
    114                         52                2                97
    115                         48                2                98
    116                         27                2                91
    117                         68                2                67
    118                        100                2                30
    119                         70                2                55
    120                         98                2                47
    121                         87                2                33
    122                         98                2                31
    123                         45                2                83
    124                         90                2                61
    125                         92                2                70
    126                         68                2                36
    127                         51                2                83
    128                         84                2                30
    129                         96                2                37
    130                         86                2                46
    131                         78                2                33
    132                         64                2                49
    133                         97                2                34
    134                         96                2                31
    135                         86                2                47
    136                         49                2                64
    137                         40                2                67
    138                         NA                2                42
    139                        100                2                50
    140                         63                2                89
    141                         80                2                32
    142                         54                2                44
    143                         94                2               100
    144                         65                2                59
    145                         65                2                36
    146                         65                2                33
    147                         89                2                50
    148                         68                2                56
    149                         67                2                30
    150                         79                2                98
    151                         64                2                94
    152                         88                2                96
    153                         44                2                32
    154                         52                2                44
    155                         48                2                37
    156                         54                2                94
    157                         76                2                66
    158                         73                2                98
    159                         65                2                47
    160                         92                2                45
    161                         97                2                40
    162                         96                2                66
    163                         83                2                83
    164                         68                2                98
    165                         91                2                42
    166                         60                2                38
    167                         94                2                33
    168                         82                2                37
    169                         76                2                55
    170                         50                2                48
    171                         66                2                93
    172                         71                2                51
    173                         60                2                64
    174                         84                2                36
    175                         98                2                31
    176                         82                2                75
    177                         33                2                57
    178                         88                2                41
    179                         80                2                40
    180                         98                2               NaN
    181                         99                2                40
    182                         73                2                31
    183                         97                2                52
    184                         61                2                43
    185                         82                2                46
    186                         96                2                32
    187                         87                2                98
    188                         97                2                94
    189                         64                2                42
    190                         89                2                99
    191                         97                2                95
    192                         62                2                61
    193                         47                2                30
    194                         97                2                85
    195                         97                2                92
    196                         88                2                51
    197                         92                2                70
    198                         95                2                41
    199                         84                2                33
    200                         93                2                43
    201                         91                2                82
    202                         74                2                68
    203                         67                2                99
    204                         53                2                59
    205                         33                2                65
    206                         85                2                79
    207                         40                2                69
    208                         40                2                88
    209                         78                2                45
    210                         31                2                67
    211                         25                2                77
    212                         86                2                87
    213                         25                2                69
    214                         59                2                69
    215                         72                2                85
    216                         76                2                49
    217                         42                2                54
    218                         91                2                93
    219                         46                2                33
    220                         56                2                33
    221                         89                2                48
    222                         83                2                59
    223                        100                2                95
    224                         97                2                45
    225                         99                2                69
    226                         90                2                33
    227                         95                2                89
    228                         75                2                66
    229                         97                2                73
    230                         80                2                37
    231                         52                2                37
    232                         80                2                33
    233                         75                2                30
    234                         67                2                51
    235                         47                2                66
    236                         78                2                31
    237                         62                2                42
    238                         27                2                40
    239                         53                2                54
    240                         73                2                33
    241                         83                2                67
    242                         90                2                66
    243                         81                2                82
    244                         74                2                56
    245                         97                2                98
    246                         83                2                67
    247                         66                2                48
    248                         37                2                37
    249                         91                2                53
    250                         77                2                78
    251                         96                2                97
    252                         60                2                52
    253                         93                2                98
    254                         45                2                51
    255                         96                2                72
    256                         96                2                38
    257                         66                2                31
    258                         36                2                30
    259                         87                2                40
    260                         65                2                35
    261                         96                2                40
    262                         73                2                50
    263                         82                2                54
    264                         84                2                41
    265                         89                2                31
    266                         85                2                93
    267                         83                2                51
    268                         46                2                33
    269                         83                2                57
    270                         77                2                45
    271                         60                2                44
    272                         94                2                45
    273                         92                2                32
    274                         58                2                35
    275                         89                2                47
    276                         99                2                46
    277                         52                2                40
    278                         89                2                34
    279                         90                2                37
    280                         70                2                50
    281                         88                2                55
    282                         94                2                49
    283                         63                2                43
    284                         46                2                48
    285                         55                2                31
    286                         94                2                99
    287                         82                2                78
    288                         98                2                45
    289                         94                2                32
    290                         NA                2                48
    291                         97                2                51
    292                         91                2                32
    293                         60                2                66
    294                         35                2                73
    295                         92                2                44
    296                         80                2                48
    297                         98                2                99
    298                         85                2                30
    299                         95                2                98
    300                         84                2                51
    301                         82                2                54
    302                         92                2                58
    303                         81                2                31
    304                         82                2                38
    305                         90                2                97
    306                         74                2                42
    307                         81                2                61
    308                         85                2                97
    309                         93                2               100
    310                         93                2                35
    311                         90                2                57
    312                         12                2                57
    313                         35                2                81
    314                         32                2                56
    315                         77                2                58
    316                         81                2                47
    317                         53                2                88
    318                         42                2                64
    319                         92                2                76
    320                         75                2                70
    321                         97                2                95
    322                         48                2                73
    323                         31                2                57
    324                         55                2                67
    325                         93                2                88
    326                         91                2                64
    327                         79                2                79
    328                         93                2                80
    329                         97                2                40
    330                         76                2                77
    331                         64                2                64
    332                         97                2                69
    333                         97                2                43
    334                         55                2                66
    335                         80                2                73
    336                         43                2                39
    337                         94                2                75
    338                         72                2                99
    339                         72                2                30
    340                         40                2                45
    341                         72                2                37
    342                         91                2                97
    343                         91                2                99
    344                         37                2                48
    345                         71                2                34
    346                         17                2                35
    347                         30                2                63
    348                         83                2                54
    349                         95                2                51
    350                         81                2                38
    351                         98                2                40
    352                         53                2                38
    353                         91                2                47
    354                         82                2               100
    355                         73                2                98
    356                         67                2                97
    357                         86                2                99
    358                         95                2                99
    359                         86                2               100
    360                         94                2               100
    361                         95                2               100
    362                         94                2               100
    363                         90                2               100
    364                         92                2               100
    365                         92                2               100
    366                         97                2                99
    367                         96                2               100
    368                         77                2               100
    369                         83                2               100
    370                         91                2               100
    371                         93                2               100
    372                         98                2               100
    373                         75                2               100
    374                         84                2               100
    375                         76                2                96
    376                         96                2                49
    377                         75                2               100
    378                         88                2                90
    379                         74                2                53
    380                         80                2                49
    381                         NA                2                47
    382                         75                2               100
    383                         90                2               100
    384                         46                2                86
    385                         64                2                50
    386                         87                2                60
    387                         89                2                93
    388                         51                2                47
    389                         54                2                66
    390                         87                2                98
    391                         50                2                49
    392                         59                2                84
    393                         89                2                85
    394                         13                2                46
    395                        100                2                66
    396                         40                2                60
    397                         93                2                80
    398                         96                2                85
    399                          1                2                65
    400                         84                2                69
    401                         80                2                62
    402                         94                2                93
    403                         93                2                60
    404                         60                2                83
    405                         40                2                73
    406                         67                2                60
    407                         57                2                84
    408                         82                2                49
    409                         88                2                98
    410                         47                2                78
    411                         87                2                95
    412                         67                2                45
    413                         71                2                73
    414                         76                2                70
    415                         88                2                71
    416                        100                2                39
    417                         79                2                61
    418                         78                2                48
    419                         73                2                74
    420                         85                2                88
    421                         96                2                35
    422                         72                2                30
    423                         21                2                85
        Staff Diversity % of Students Disabled                   Region
    1                77                      1                Southeast
    2                26                      1                Southeast
    3                89                      1                Southeast
    4                57                      2                Southeast
    5                85                      1                Southeast
    6                96                      2                Southeast
    7                63                      1                Southeast
    8                27                      1                Southeast
    9                71                      1                Southeast
    10               57                      1                Southeast
    11               80                      1                Southeast
    12               23                      1                 Far West
    13               35                      1                Southwest
    14               26                      2                Southwest
    15               22                      1                Southwest
    16               67                      1                Southwest
    17               33                      1                Southwest
    18               25                      1                Southwest
    19               43                      1                Southwest
    20               85                      2                Southeast
    21               31                      1                Southeast
    22               39                      2                Southeast
    23               34                      2                 Far West
    24               38                      2                 Far West
    25               42                      2                 Far West
    26               31                      2                 Far West
    27               33                      1                 Far West
    28               25                      2                 Far West
    29               24                      2                 Far West
    30               52                     -2                 Far West
    31               63                      1                 Far West
    32               26                      2                 Far West
    33               38                      2                 Far West
    34               42                      1                 Far West
    35               23                      1                 Far West
    36               49                      2                 Far West
    37               41                      1                 Far West
    38               41                      1                 Far West
    39               48                      2                 Far West
    40               23                      2                 Far West
    41               35                      1                 Far West
    42               39                      2                 Far West
    43               37                      2                 Far West
    44               33                      2                 Far West
    45               24                      2                 Far West
    46               64                      1                 Far West
    47               50                      2                 Far West
    48               21                      2                 Far West
    49               44                      2                 Far West
    50               34                      2                 Far West
    51               25                      2                 Far West
    52               29                      1                 Far West
    53               40                      2                 Far West
    54               29                      2                 Far West
    55               20                      1                 Far West
    56               30                      1                 Far West
    57               42                      2                 Far West
    58               24                      2                 Far West
    59               22                      2          Rocky Mountains
    60               32                      2          Rocky Mountains
    61               27                      1          Rocky Mountains
    62               27                      2              New England
    63               20                      1              New England
    64               26                      2              New England
    65               24                      1              New England
    66               34                      2              New England
    67               23                      1              New England
    68               21                      2              New England
    69               27                      2              New England
    70               23                      1              New England
    71               24                      1              New England
    72               26                      2              New England
    73               32                      2              New England
    74               66                      1                 Mid East
    75               80                      1                 Mid East
    76               36                      2                 Mid East
    77               58                      2                 Mid East
    78               77                      1                Southeast
    79               87                      2                Southeast
    80               38                      1                Southeast
    81               20                      1                Southeast
    82               26                      2                Southeast
    83               21                      2                Southeast
    84               31                      2                Southeast
    85               74                      1                Southeast
    86               94                      1                Southeast
    87               20                      1                Southeast
    88               86                      1                Southeast
    89               91                      1                Southeast
    90               48                      2                Southeast
    91               22                      1                Southeast
    92               46                      1                Southeast
    93               23                      1                Southeast
    94               79                      1                Southeast
    95               25                      1                Southeast
    96               30                      1                Southeast
    97               93                      2                Southeast
    98               32                      2                Southeast
    99               69                      1                Southeast
    100              21                      1                Southeast
    101              85                      2                Southeast
    102              24                      1                Southeast
    103              43                      1                 Far West
    104              46                      1                 Far West
    105              38                      1                 Far West
    106              67                      1                 Far West
    107              38                      2                 Far West
    108              33                      1                 Far West
    109              59                      1                 Far West
    110              60                      1                 Far West
    111              28                      2              Great Lakes
    112              30                      1              Great Lakes
    113              76                      1              Great Lakes
    114              87                      1              Great Lakes
    115              78                      1              Great Lakes
    116              57                      1              Great Lakes
    117              40                      1              Great Lakes
    118              20                      1              Great Lakes
    119              22                      2              Great Lakes
    120              31                      2              Great Lakes
    121              30                      1              Great Lakes
    122              21                      2              Great Lakes
    123              26                      2              Great Lakes
    124              41                      1              Great Lakes
    125              29                      2              Great Lakes
    126              33                      1              Great Lakes
    127              38                      1              Great Lakes
    128              21                      2              Great Lakes
    129              26                      1              Great Lakes
    130              24                      1              Great Lakes
    131              21                      1              Great Lakes
    132              31                      1              Great Lakes
    133              22                      2              Great Lakes
    134              20                      2                   Plains
    135              30                      2                   Plains
    136              33                      2                   Plains
    137              22                      1                   Plains
    138              20                     -2                Southeast
    139              24                      1                Southeast
    140              57                      1                Southeast
    141              23                      2                Southeast
    142              32                      1                Southeast
    143              80                      1                Southeast
    144              21                      1                Southeast
    145              24                      1                Southeast
    146              24                      2                Southeast
    147              21                      2                Southeast
    148              24                      1                Southeast
    149              24                      2                Southeast
    150              73                      2                Southeast
    151              92                      1                Southeast
    152              62                      2                Southeast
    153              28                      2              New England
    154              25                      2              New England
    155              22                      2              New England
    156              79                      1                 Mid East
    157              31                      1                 Mid East
    158              86                      2                 Mid East
    159              21                      2                 Mid East
    160              26                      1                 Mid East
    161              26                      2                 Mid East
    162              21                      2                 Mid East
    163              60                      1                 Mid East
    164              45                      1              New England
    165              31                      2              New England
    166              22                      2              New England
    167              21                      2              New England
    168              26                      2              New England
    169              37                      2              New England
    170              20                      2              New England
    171              51                      2              New England
    172              27                      1              New England
    173              29                      2              New England
    174              26                      2              New England
    175              26                      2              New England
    176              38                      1              Great Lakes
    177              39                      1              Great Lakes
    178              29                      2              Great Lakes
    179              20                      2              Great Lakes
    180             NaN                      1              Great Lakes
    181              30                      2              Great Lakes
    182              49                      2              Great Lakes
    183              21                      2                   Plains
    184              27                      2                   Plains
    185              29                      2                   Plains
    186              21                      2                   Plains
    187              84                      1                Southeast
    188              78                      1                Southeast
    189              29                      1                Southeast
    190              86                      1                Southeast
    191              72                      1                   Plains
    192              35                      1                   Plains
    193              32                      1                   Plains
    194              44                      1                 Mid East
    195              23                      2                 Mid East
    196              30                      2                 Mid East
    197              25                      2                 Mid East
    198              25                      2                 Mid East
    199              23                      2                 Mid East
    200              21                      2                 Mid East
    201              24                      2                 Mid East
    202              26                      2                 Mid East
    203              74                      1                Southwest
    204              21                      1                Southwest
    205              24                      1                Southwest
    206              44                      1                Southwest
    207              24                      1                Southwest
    208              48                      1                Southwest
    209              35                      1                Southwest
    210              38                      1                Southwest
    211              33                      1                Southwest
    212              47                      2                Southwest
    213              35                      1                Southwest
    214              31                      2                Southwest
    215              42                      1                 Mid East
    216              27                      2                 Mid East
    217              29                      2                 Mid East
    218              36                      1                 Mid East
    219              27                      2                 Mid East
    220              26                      2                 Mid East
    221              25                      2                 Mid East
    222              29                      2                 Mid East
    223              71                      1                 Mid East
    224              21                      2                 Mid East
    225              28                      2                 Mid East
    226              22                      2                 Mid East
    227              56                      1                 Mid East
    228              24                      2                 Mid East
    229              21                      2                 Mid East
    230              24                      2                 Mid East
    231              21                      2                 Mid East
    232              23                      2                 Mid East
    233              33                      2                 Mid East
    234              21                      2                 Mid East
    235              41                      1                 Mid East
    236              28                      1                 Mid East
    237              31                      2                 Mid East
    238              26                      1                Southeast
    239              29                      1                Southeast
    240              29                      2                Southeast
    241              32                      1                Southeast
    242              21                      1                Southeast
    243              75                      1                Southeast
    244              25                      1                Southeast
    245              69                      1                Southeast
    246              67                      1                Southeast
    247              22                      1                Southeast
    248              24                      1                Southeast
    249              23                      1                Southeast
    250              43                      1                Southeast
    251              79                      1                Southeast
    252              24                      1                Southeast
    253              69                      1                Southeast
    254              40                      1                Southeast
    255              61                      1              Great Lakes
    256              32                      2              Great Lakes
    257              26                      2              Great Lakes
    258              23                      2              Great Lakes
    259              29                      2              Great Lakes
    260              30                      1              Great Lakes
    261              24                      2              Great Lakes
    262              20                      1                Southwest
    263              24                      1                Southwest
    264              23                      1                Southwest
    265              22                      1                Southwest
    266              75                      1                Southwest
    267              21                      1                Southwest
    268              35                      1                Southwest
    269              20                      2                Southwest
    270              26                      1                Southwest
    271              31                      1                Southwest
    272              25                      2                Southwest
    273              22                      2                 Far West
    274              24                      2                 Far West
    275              21                      2                 Far West
    276              20                      2                 Far West
    277              30                      2                 Far West
    278              24                      2                 Far West
    279              25                      2                 Mid East
    280              34                      2                 Mid East
    281              23                      1                 Mid East
    282              21                      2                 Mid East
    283              20                      2                 Mid East
    284              33                      2                 Mid East
    285              24                      2                 Mid East
    286              75                      2                 Mid East
    287              28                      1                 Mid East
    288              22                      2                 Mid East
    289              23                      2                 Mid East
    290              28                     -2                 Mid East
    291              27                      1                 Mid East
    292              20                      1                 Mid East
    293              26                      2                 Mid East
    294              28                      2              New England
    295              37                      1                Southeast
    296              24                      1                Southeast
    297              87                      1                Southeast
    298              24                      2                Southeast
    299              75                      1                Southeast
    300              28                      2                Southeast
    301              20                      1                Southeast
    302              27                      1                Southeast
    303              21                      1                Southeast
    304              24                      1                Southeast
    305              80                      2                Southeast
    306              30                      1                Southeast
    307             100                      1                   Plains
    308              56                      1                   Plains
    309              72                      1                Southeast
    310              24                      2                Southeast
    311              20                      1                Southeast
    312              22                      1                Southwest
    313              61                      1                Southwest
    314              26                      1                Southwest
    315              24                      2                Southwest
    316              30                      1                Southwest
    317              89                      1                Southwest
    318              32                      2                Southwest
    319              24                      1                Southwest
    320              53                      1                Southwest
    321              75                      1                Southwest
    322              30                      2                Southwest
    323              37                      2                Southwest
    324              21                      1                Southwest
    325              42                      2                Southwest
    326              20                      2                Southwest
    327              38                      2                Southwest
    328              31                      2                Southwest
    329              28                      2                Southwest
    330              42                      1                Southwest
    331              43                      1                Southwest
    332              20                      2                Southwest
    333              27                      2                Southwest
    334              21                      1                Southwest
    335              29                      1                 Far West
    336              21                      2              New England
    337              50                      1                Southeast
    338              80                      1                Southeast
    339              27                      2                Southeast
    340              25                      1                Southeast
    341              21                      2                Southeast
    342              75                      1                Southeast
    343              76                      1                Southeast
    344              26                      1                 Far West
    345              26                      2                 Far West
    346              23                      2                 Far West
    347              34                      1                 Far West
    348              21                      2                 Far West
    349              27                      2                 Far West
    350              20                      2                 Far West
    351              20                      2              Great Lakes
    352              30                      2              Great Lakes
    353              30                      1              Great Lakes
    354              91                      1 Other U.S. Jurisdictions
    355              84                      1 Other U.S. Jurisdictions
    356              69                      1 Other U.S. Jurisdictions
    357              56                      1 Other U.S. Jurisdictions
    358              97                      2 Other U.S. Jurisdictions
    359             100                      1 Other U.S. Jurisdictions
    360              98                      2 Other U.S. Jurisdictions
    361             100                      2 Other U.S. Jurisdictions
    362             100                      1 Other U.S. Jurisdictions
    363              98                      2 Other U.S. Jurisdictions
    364             100                      1 Other U.S. Jurisdictions
    365             100                      1 Other U.S. Jurisdictions
    366              98                      2 Other U.S. Jurisdictions
    367             100                      2 Other U.S. Jurisdictions
    368             100                      2 Other U.S. Jurisdictions
    369             100                      1 Other U.S. Jurisdictions
    370             100                      2 Other U.S. Jurisdictions
    371              96                      2 Other U.S. Jurisdictions
    372             100                      2 Other U.S. Jurisdictions
    373              99                      2 Other U.S. Jurisdictions
    374              99                      1 Other U.S. Jurisdictions
    375              55                      1 Other U.S. Jurisdictions
    376              32                      1                Southwest
    377             100                      1 Other U.S. Jurisdictions
    378              62                      1                Southeast
    379              21                      1                Southwest
    380              20                      1                Southeast
    381              30                     -2                 Far West
    382             100                      1 Other U.S. Jurisdictions
    383              82                      1 Other U.S. Jurisdictions
    384              59                      1                 Far West
    385              35                      1                Southeast
    386              24                      2                 Far West
    387              60                      1                 Mid East
    388              26                      1                Southeast
    389              46                      1                Southwest
    390              89                      1                Southeast
    391              30                      1                Southeast
    392              43                      1                Southeast
    393              50                      1                Southeast
    394              23                      2                 Far West
    395              23                      2                Southeast
    396              32                      1                 Far West
    397              60                      1                 Far West
    398              28                      1                 Mid East
    399              50                      1                 Far West
    400              38                      1              Great Lakes
    401              23                      1              Great Lakes
    402              87                      1                Southwest
    403              32                      1              Great Lakes
    404              45                      1                 Mid East
    405              33                      2                 Far West
    406              42                      1                 Far West
    407              77                      1                 Far West
    408              38                      1                 Far West
    409              40                      1                 Mid East
    410              45                      2                 Far West
    411              50                      2                 Mid East
    412              30                      1                Southeast
    413              45                      1                 Mid East
    414              58                      1                 Far West
    415              50                      1                Southeast
    416              49                      2                Southeast
    417              26                      2                Southwest
    418              31                      1                Southeast
    419              73                      1                 Far West
    420              41                      1                Southwest
    421              22                      1                Southeast
    422              33                      1                Southeast
    423              27                      1                 Far West
        Type of Institution Religious Affiliation Calendar System
    1                     1                    -2               1
    2                     1                    -2               1
    3                     1                    -2               1
    4                     1                    -2               1
    5                     4                    55               1
    6                     4                    95               1
    7                     1                    -2               1
    8                     1                    -2               1
    9                     4                    76               1
    10                    1                    -2               1
    11                    3                    -2               1
    12                    2                    -2               5
    13                    2                    -2               7
    14                    1                    -2               1
    15                    1                    -2               1
    16                    1                    -2               1
    17                    4                    52               1
    18                    2                    -2               6
    19                    1                    -2               1
    20                    1                    -2               1
    21                    1                    -2               1
    22                    1                    -2               1
    23                    3                    -2               1
    24                    1                    -2               1
    25                    3                    -2               1
    26                    4                    39               1
    27                    2                    -2               1
    28                    3                    -2               1
    29                    3                    -2               1
    30                    3                    -2               1
    31                    1                    -2               1
    32                    3                    -2               1
    33                    2                    -2               2
    34                    1                    -2               1
    35                    3                    -2               3
    36                    4                    30               1
    37                    4                    95               2
    38                    4                    95               2
    39                    3                    -2               3
    40                    1                    -2               1
    41                    4                    30               1
    42                    1                    -2               1
    43                    3                    -2               1
    44                    3                    -2               1
    45                    3                    -2               2
    46                    3                    -2               1
    47                    1                    -2               1
    48                    4                    59               1
    49                    3                    -2               1
    50                    1                    -2               1
    51                    3                    -2               4
    52                    2                    -2               6
    53                    4                    30               4
    54                    4                    27               1
    55                    1                    -2               1
    56                    2                    -2               6
    57                    3                    -2               4
    58                    3                    -2               1
    59                    1                    -2               1
    60                    3                    -2               1
    61                    2                    -2               6
    62                    1                    -2               1
    63                    3                    -2               1
    64                    3                    -2               1
    65                    3                    -2               1
    66                    1                    -2               1
    67                    1                    -2               1
    68                    1                    -2               1
    69                    1                    -2               1
    70                    4                    30               1
    71                    3                    -2               1
    72                    1                    -2               1
    73                    3                    -2               1
    74                    1                    -2               1
    75                    1                    -2               1
    76                    3                    -2               1
    77                    4                    30               1
    78                    4                    71               1
    79                    4                    51               1
    80                    4                    95               3
    81                    1                    -2               1
    82                    4                    42               1
    83                    3                    -2               1
    84                    4                    66               1
    85                    1                    -2               1
    86                    1                    -2               1
    87                    4                    48               1
    88                    1                    -2               1
    89                    4                    71               1
    90                    1                    -2               1
    91                    3                    -2               1
    92                    1                    -2               1
    93                    1                    -2               1
    94                    1                    -2               1
    95                    1                    -2               1
    96                    3                    -2               2
    97                    3                    -2               1
    98                    1                    -2               1
    99                    1                    -2               1
    100                   4                    54               1
    101                   3                    -2               1
    102                   1                    -2               1
    103                   4                    30               1
    104                   1                    -2               1
    105                   3                    -2               1
    106                   1                    -2               1
    107                   1                    -2               1
    108                   1                    -2               1
    109                   1                    -2               1
    110                   1                    -2               1
    111                   3                    -2               1
    112                   3                    -2               1
    113                   1                    -2               1
    114                   1                    -2               1
    115                   1                    -2               1
    116                   1                    -2               1
    117                   1                    -2               1
    118                   3                    -2               4
    119                   4                    54               1
    120                   3                    -2               1
    121                   4                    42               1
    122                   4                    71               1
    123                   1                    -2               1
    124                   3                    -2               1
    125                   4                    30               1
    126                   1                    -2               1
    127                   1                    -2               1
    128                   4                    88               1
    129                   3                    -2               4
    130                   3                    -2               1
    131                   1                    -2               1
    132                   1                    -2               1
    133                   3                    -2               2
    134                   4                    66               1
    135                   3                    -2               1
    136                   3                    -2               1
    137                   1                    -2               1
    138                   4                    42               4
    139                   3                    -2               1
    140                   1                    -2               1
    141                   4                    30               1
    142                   1                    -2               1
    143                   4                    71               1
    144                   1                    -2               1
    145                   1                    -2               1
    146                   1                    -2               1
    147                   4                    30               1
    148                   4                    30               1
    149                   4                    30               1
    150                   1                    -2               1
    151                   1                    -2               1
    152                   4                    30               1
    153                   3                    -2               4
    154                   3                    -2               1
    155                   3                    -2               4
    156                   1                    -2               1
    157                   1                    -2               1
    158                   1                    -2               1
    159                   1                    -2               1
    160                   3                    -2               1
    161                   3                    -2               1
    162                   3                    -2               1
    163                   1                    -2               1
    164                   3                    -2               5
    165                   3                    -2               1
    166                   1                    -2               1
    167                   3                    -2               1
    168                   1                    -2               1
    169                   3                    -2               1
    170                   1                    -2               1
    171                   1                    -2               1
    172                   3                    -2               1
    173                   3                    -2               1
    174                   3                    -2               1
    175                   3                    -2               1
    176                   4                    95               1
    177                   2                    -2               5
    178                   4                    30               1
    179                   4                    79               1
    180                   4                    88               1
    181                   3                    -2               2
    182                   3                    -2               1
    183                   4                    39               1
    184                   3                    -2               3
    185                   4                    66               1
    186                   4                    39               4
    187                   1                    -2               1
    188                   1                    -2               1
    189                   1                    -2               1
    190                   1                    -2               1
    191                   1                    -2               1
    192                   1                    -2               1
    193                   4                    75               1
    194                   2                    -2               1
    195                   4                    66               1
    196                   4                    71               1
    197                   4                    30               1
    198                   3                    -2               1
    199                   4                    30               1
    200                   3                    -2               1
    201                   4                    30               1
    202                   4                    30               1
    203                   1                    -2               1
    204                   1                    -2               1
    205                   1                    -2               1
    206                   1                    -2               1
    207                   1                    -2               1
    208                   1                    -2               1
    209                   1                    -2               1
    210                   1                    -2               1
    211                   1                    -2               1
    212                   1                    -2               1
    213                   1                    -2               1
    214                   1                    -2               1
    215                   3                    -2               1
    216                   3                    -2               1
    217                   3                    -2               1
    218                   2                    -2               1
    219                   3                    -2               1
    220                   3                    -2               1
    221                   4                    30               1
    222                   2                    -2               1
    223                   2                    -2               1
    224                   4                    30               1
    225                   4                    30               1
    226                   4                    30               1
    227                   4                    34               1
    228                   3                    -2               1
    229                   3                    -2               1
    230                   3                    -2               1
    231                   3                    -2               1
    232                   1                    -2               1
    233                   1                    -2               1
    234                   1                    -2               1
    235                   1                    -2               1
    236                   1                    -2               1
    237                   3                    -2               1
    238                   1                    -2               1
    239                   1                    -2               1
    240                   4                    66               1
    241                   1                    -2               1
    242                   1                    -2               1
    243                   1                    -2               1
    244                   1                    -2               1
    245                   3                    -2               1
    246                   2                    -2               6
    247                   1                    -2               1
    248                   1                    -2               1
    249                   1                    -2               1
    250                   1                    -2               1
    251                   4                    73               1
    252                   1                    -2               1
    253                   4                    54               1
    254                   1                    -2               1
    255                   1                    -2               1
    256                   3                    -2               1
    257                   3                    -2               1
    258                   1                    -2               1
    259                   3                    -2               4
    260                   1                    -2               1
    261                   3                    -2               1
    262                   1                    -2               1
    263                   1                    -2               1
    264                   1                    -2               1
    265                   1                    -2               1
    266                   1                    -2               1
    267                   1                    -2               1
    268                   1                    -2               1
    269                   4                    79               1
    270                   1                    -2               1
    271                   1                    -2               1
    272                   4                    66               1
    273                   3                    -2               1
    274                   1                    -2               2
    275                   3                    -2               1
    276                   4                    30               1
    277                   3                    -2               1
    278                   3                    -2               1
    279                   4                    66               1
    280                   3                    -2               1
    281                   4                    30               1
    282                   4                    52               1
    283                   3                    -2               1
    284                   3                    -2               1
    285                   4                    66               1
    286                   1                    -2               1
    287                   3                    -2               1
    288                   3                    -2               1
    289                   3                    -2               1
    290                   3                    -2               3
    291                   3                    -2               1
    292                   1                    -2               1
    293                   3                    -2               1
    294                   3                    -2               4
    295                   1                    -2               1
    296                   1                    -2               1
    297                   4                    54               1
    298                   4                    89               1
    299                   4                    71               1
    300                   1                    -2               1
    301                   3                    -2               1
    302                   1                    -2               1
    303                   1                    -2               1
    304                   1                    -2               1
    305                   1                    -2               1
    306                   1                    -2               1
    307                   2                    -2               2
    308                   1                    -2               1
    309                   4                    55               1
    310                   4                    66               1
    311                   4                    95               1
    312                   4                    88               1
    313                   1                    -2               1
    314                   1                    -2               1
    315                   4                    68               1
    316                   1                    -2               1
    317                   2                    -2               6
    318                   1                    -2               1
    319                   4                    75               1
    320                   1                    -2               1
    321                   4                    78               1
    322                   1                    -2               1
    323                   1                    -2               1
    324                   1                    -2               1
    325                   4                    30               1
    326                   4                    30               1
    327                   4                    30               1
    328                   4                    30               1
    329                   4                    71               1
    330                   1                    -2               1
    331                   1                    -2               1
    332                   4                    71               1
    333                   4                    66               1
    334                   4                    75               1
    335                   4                    94               1
    336                   3                    -2               4
    337                   2                    -2               1
    338                   3                    -2               1
    339                   1                    -2               1
    340                   1                    -2               1
    341                   3                    -2               1
    342                   1                    -2               1
    343                   4                    54               1
    344                   3                    -2               2
    345                   1                    -2               2
    346                   1                    -2               2
    347                   1                    -2               2
    348                   4                    30               1
    349                   4                    64               2
    350                   3                    -2               1
    351                   3                    -2               3
    352                   1                    -2               1
    353                   3                    -2               1
    354                   1                    -2               1
    355                   1                    -2               1
    356                   1                    -2               1
    357                   1                    -2               1
    358                   4                    95               1
    359                   4                    30               1
    360                   3                    -2               1
    361                   3                    -2               1
    362                   3                    -2               1
    363                   3                    -2               1
    364                   3                    -2               1
    365                   3                    -2               1
    366                   1                    -2               1
    367                   1                    -2               1
    368                   1                    -2               1
    369                   1                    -2               2
    370                   1                    -2               1
    371                   1                    -2               1
    372                   1                    -2               1
    373                   4                    30               1
    374                   3                    -2               3
    375                   1                    -2               1
    376                   3                    -2               3
    377                   3                    -2               1
    378                   1                    -2               1
    379                   4                    57               1
    380                   2                    -2               2
    381                   2                    -2               3
    382                   2                    -2               1
    383                   1                    -2               1
    384                   1                    -2               1
    385                   3                    -2               1
    386                   1                    -2               1
    387                   2                    -2               3
    388                   2                    -2               7
    389                   2                    -2               7
    390                   2                    -2               1
    391                   1                    -2               1
    392                   2                    -2               2
    393                   2                    -2               2
    394                   1                    -2               2
    395                   3                    -2               1
    396                   3                    -2               5
    397                   2                    -2               7
    398                   3                    -2               1
    399                   2                    -2               1
    400                   2                    -2               2
    401                   2                    -2               5
    402                   2                    -2               2
    403                   2                    -2               1
    404                   2                    -2               6
    405                   1                    -2               1
    406                   3                    -2               1
    407                   2                    -2               5
    408                   3                    -2               1
    409                   2                    -2               1
    410                   4                    88               5
    411                   1                    -2               1
    412                   3                    -2               5
    413                   2                    -2               1
    414                   2                    -2               1
    415                   2                    -2               1
    416                   1                    -2               1
    417                   1                    -2               1
    418                   1                    -2               1
    419                   2                    -2               7
    420                   1                    -2               1
    421                   1                    -2               1
    422                   1                    -2               1
    423                   2                    -2               5
        Open Admissions Policy Years Required For Entering          Vet Programs
    1                        2                          -2    Programs Available
    2                        1                          -2    Programs Available
    3                        1                          -2    Programs Available
    4                        1                          -2    Programs Available
    5                        1                          -2    Programs Available
    6                        2                          -2    Programs Available
    7                        1                          -2    Programs Available
    8                        1                          -2    Programs Available
    9                        1                          -2    Programs Available
    10                       1                          -2    Programs Available
    11                       2                          -2    Programs Available
    12                       1                          -2    Programs Available
    13                       1                          -2    Programs Available
    14                       1                          -2    Programs Available
    15                       1                          -2    Programs Available
    16                       1                          -2    Programs Available
    17                       1                          -2    Programs Available
    18                       1                           2 No Programs Available
    19                       1                          -2    Programs Available
    20                       2                          -2    Programs Available
    21                       1                          -2    Programs Available
    22                       1                          -2    Programs Available
    23                       2                          -2    Programs Available
    24                       1                          -2    Programs Available
    25                       2                          -2    Programs Available
    26                       2                          -2    Programs Available
    27                       2                          -2    Programs Available
    28                       2                          -2    Programs Available
    29                       2                          -2    Programs Available
    30                      -2                           2    Programs Available
    31                       1                          -2    Programs Available
    32                       2                          -2    Programs Available
    33                       2                           2    Programs Available
    34                       1                          -2    Programs Available
    35                      -2                           1    Programs Available
    36                       2                          -2    Programs Available
    37                       2                          -2    Programs Available
    38                      -2                           2 No Programs Available
    39                       1                           2    Programs Available
    40                       1                          -2    Programs Available
    41                       2                          -2    Programs Available
    42                       1                          -2    Programs Available
    43                       2                          -2    Programs Available
    44                       2                          -2    Programs Available
    45                      -2                           2    Programs Available
    46                       2                           2    Programs Available
    47                       1                          -2    Programs Available
    48                       2                          -2    Programs Available
    49                       2                          -2    Programs Available
    50                       1                          -2    Programs Available
    51                       2                          -2    Programs Available
    52                       1                           2    Programs Available
    53                       2                          -2    Programs Available
    54                       2                          -2    Programs Available
    55                       1                          -2    Programs Available
    56                       1                          -2    Programs Available
    57                       2                          -2    Programs Available
    58                       2                          -2    Programs Available
    59                       2                          -2    Programs Available
    60                       2                          -2    Programs Available
    61                       1                          -2    Programs Available
    62                       1                          -2    Programs Available
    63                       2                          -2    Programs Available
    64                       2                          -2    Programs Available
    65                       1                          -2    Programs Available
    66                       2                          -2    Programs Available
    67                       1                          -2    Programs Available
    68                       1                          -2    Programs Available
    69                       1                          -2    Programs Available
    70                       2                          -2    Programs Available
    71                       2                          -2    Programs Available
    72                       1                          -2    Programs Available
    73                       2                          -2    Programs Available
    74                       2                          -2    Programs Available
    75                       1                          -2    Programs Available
    76                       2                          -2    Programs Available
    77                       2                          -2    Programs Available
    78                       2                          -2    Programs Available
    79                       2                          -2    Programs Available
    80                       2                          -2    Programs Available
    81                       1                           2    Programs Available
    82                       2                          -2    Programs Available
    83                       2                          -2    Programs Available
    84                       2                          -2    Programs Available
    85                       1                          -2    Programs Available
    86                       1                          -2    Programs Available
    87                       2                          -2    Programs Available
    88                       1                          -2    Programs Available
    89                       2                          -2    Programs Available
    90                       1                          -2    Programs Available
    91                       2                          -2    Programs Available
    92                       1                          -2    Programs Available
    93                       1                          -2    Programs Available
    94                       2                          -2    Programs Available
    95                       2                          -2    Programs Available
    96                       2                          -2    Programs Available
    97                       2                          -2    Programs Available
    98                       1                          -2    Programs Available
    99                       2                          -2    Programs Available
    100                      2                          -2    Programs Available
    101                      2                          -2 No Programs Available
    102                      1                          -2    Programs Available
    103                      2                          -2    Programs Available
    104                      2                          -2    Programs Available
    105                      2                          -2    Programs Available
    106                      1                          -2    Programs Available
    107                      1                          -2    Programs Available
    108                      1                          -2    Programs Available
    109                      2                          -2    Programs Available
    110                      1                          -2    Programs Available
    111                      2                          -2    Programs Available
    112                      2                           2    Programs Available
    113                      2                          -2    Programs Available
    114                      1                          -2    Programs Available
    115                      1                          -2    Programs Available
    116                      1                          -2    Programs Available
    117                      2                          -2    Programs Available
    118                      2                          -2    Programs Available
    119                      2                          -2    Programs Available
    120                      2                          -2    Programs Available
    121                      2                          -2    Programs Available
    122                      2                          -2    Programs Available
    123                      1                          -2    Programs Available
    124                      2                          -2    Programs Available
    125                      2                          -2    Programs Available
    126                      2                          -2    Programs Available
    127                      1                          -2    Programs Available
    128                      2                          -2    Programs Available
    129                      2                          -2    Programs Available
    130                      2                          -2    Programs Available
    131                      2                          -2    Programs Available
    132                      2                          -2    Programs Available
    133                      2                          -2    Programs Available
    134                      2                          -2    Programs Available
    135                      2                          -2    Programs Available
    136                      2                          -2    Programs Available
    137                      1                          -2    Programs Available
    138                     -2                           4 No Programs Available
    139                      2                          -2 No Programs Available
    140                      2                          -2    Programs Available
    141                      2                          -2    Programs Available
    142                      1                          -2    Programs Available
    143                      2                          -2    Programs Available
    144                      1                          -2    Programs Available
    145                      2                          -2    Programs Available
    146                      1                          -2    Programs Available
    147                      2                          -2    Programs Available
    148                      2                          -2    Programs Available
    149                      2                          -2    Programs Available
    150                      2                          -2    Programs Available
    151                      1                          -2 No Programs Available
    152                      2                          -2    Programs Available
    153                      2                          -2    Programs Available
    154                      2                          -2    Programs Available
    155                      2                          -2    Programs Available
    156                      1                          -2    Programs Available
    157                      2                          -2    Programs Available
    158                      2                          -2    Programs Available
    159                      2                          -2    Programs Available
    160                      2                          -2    Programs Available
    161                      2                          -2    Programs Available
    162                      2                          -2    Programs Available
    163                      2                          -2    Programs Available
    164                      2                           4 No Programs Available
    165                      2                          -2    Programs Available
    166                      2                          -2    Programs Available
    167                      2                          -2    Programs Available
    168                      2                          -2    Programs Available
    169                      2                          -2    Programs Available
    170                      1                          -2    Programs Available
    171                      1                          -2    Programs Available
    172                      2                          -2    Programs Available
    173                      2                          -2    Programs Available
    174                      2                          -2    Programs Available
    175                      2                          -2    Programs Available
    176                      2                          -2    Programs Available
    177                      2                          -2    Programs Available
    178                      2                          -2    Programs Available
    179                      2                          -2    Programs Available
    180                      2                          -2    Programs Available
    181                      2                          -2    Programs Available
    182                      2                          -2    Programs Available
    183                      2                          -2    Programs Available
    184                      2                          -2    Programs Available
    185                      2                          -2    Programs Available
    186                      2                          -2    Programs Available
    187                      2                          -2    Programs Available
    188                      1                          -2    Programs Available
    189                      2                          -2    Programs Available
    190                      2                          -2    Programs Available
    191                      1                          -2 No Programs Available
    192                      1                           2    Programs Available
    193                      2                          -2    Programs Available
    194                      1                          -2    Programs Available
    195                      2                          -2    Programs Available
    196                      2                          -2    Programs Available
    197                      2                          -2    Programs Available
    198                      2                          -2    Programs Available
    199                      2                          -2    Programs Available
    200                      2                          -2    Programs Available
    201                      2                          -2    Programs Available
    202                      2                          -2    Programs Available
    203                      1                          -2    Programs Available
    204                      1                          -2    Programs Available
    205                      1                          -2    Programs Available
    206                      1                          -2    Programs Available
    207                      1                          -2    Programs Available
    208                      1                          -2    Programs Available
    209                      2                          -2    Programs Available
    210                      1                          -2    Programs Available
    211                      1                          -2    Programs Available
    212                      1                          -2    Programs Available
    213                      1                          -2    Programs Available
    214                      1                          -2    Programs Available
    215                      1                          -2    Programs Available
    216                      2                          -2 No Programs Available
    217                      2                          -2 No Programs Available
    218                      1                          -2    Programs Available
    219                      2                          -2    Programs Available
    220                      2                          -2    Programs Available
    221                      2                          -2    Programs Available
    222                      2                          -2    Programs Available
    223                      2                          -2    Programs Available
    224                      2                          -2    Programs Available
    225                      2                          -2    Programs Available
    226                      2                          -2    Programs Available
    227                      2                          -2    Programs Available
    228                      2                          -2 No Programs Available
    229                      2                          -2    Programs Available
    230                      2                          -2    Programs Available
    231                      2                          -2    Programs Available
    232                      2                          -2    Programs Available
    233                      2                           2    Programs Available
    234                      2                          -2    Programs Available
    235                     -2                           2 No Programs Available
    236                     -2                           2    Programs Available
    237                      2                          -2    Programs Available
    238                      1                          -2    Programs Available
    239                      1                          -2    Programs Available
    240                      2                          -2    Programs Available
    241                      1                          -2    Programs Available
    242                      1                          -2    Programs Available
    243                      2                          -2    Programs Available
    244                      1                          -2    Programs Available
    245                      2                          -2    Programs Available
    246                      1                          -2    Programs Available
    247                      1                          -2    Programs Available
    248                      1                          -2    Programs Available
    249                      1                          -2    Programs Available
    250                      1                          -2    Programs Available
    251                      2                          -2    Programs Available
    252                      1                          -2    Programs Available
    253                      2                          -2    Programs Available
    254                      1                          -2    Programs Available
    255                      2                          -2    Programs Available
    256                      2                          -2    Programs Available
    257                      2                          -2    Programs Available
    258                      1                          -2    Programs Available
    259                      2                          -2    Programs Available
    260                      1                          -2    Programs Available
    261                      2                          -2    Programs Available
    262                      1                          -2    Programs Available
    263                      1                          -2    Programs Available
    264                      1                          -2    Programs Available
    265                      1                          -2    Programs Available
    266                      1                          -2    Programs Available
    267                      1                          -2    Programs Available
    268                     -2                           2    Programs Available
    269                      2                          -2    Programs Available
    270                      1                          -2    Programs Available
    271                      1                          -2    Programs Available
    272                      2                          -2    Programs Available
    273                      2                          -2    Programs Available
    274                     -2                           1    Programs Available
    275                      2                          -2    Programs Available
    276                      2                          -2    Programs Available
    277                      2                          -2    Programs Available
    278                      2                          -2    Programs Available
    279                      2                          -2    Programs Available
    280                      2                          -2    Programs Available
    281                      2                          -2    Programs Available
    282                      2                          -2    Programs Available
    283                      2                          -2    Programs Available
    284                      2                          -2 No Programs Available
    285                      2                          -2    Programs Available
    286                      2                          -2    Programs Available
    287                      1                          -2    Programs Available
    288                      2                          -2    Programs Available
    289                      2                          -2    Programs Available
    290                     -2                           4    Programs Available
    291                      2                          -2    Programs Available
    292                      2                          -2    Programs Available
    293                      2                          -2    Programs Available
    294                      2                          -2    Programs Available
    295                      1                          -2    Programs Available
    296                      1                          -2    Programs Available
    297                      2                          -2    Programs Available
    298                      2                          -2    Programs Available
    299                      2                          -2 No Programs Available
    300                      1                          -2    Programs Available
    301                      2                          -2    Programs Available
    302                      1                          -2    Programs Available
    303                      2                          -2    Programs Available
    304                      2                          -2    Programs Available
    305                      2                          -2    Programs Available
    306                      1                          -2    Programs Available
    307                      1                          -2    Programs Available
    308                      1                          -2    Programs Available
    309                      1                          -2    Programs Available
    310                      2                          -2    Programs Available
    311                      2                          -2    Programs Available
    312                     -2                          -2    Programs Available
    313                      1                          -2    Programs Available
    314                      1                           2    Programs Available
    315                      2                          -2    Programs Available
    316                      2                          -2    Programs Available
    317                      1                          -2    Programs Available
    318                      1                           2    Programs Available
    319                      2                          -2    Programs Available
    320                      2                          -2    Programs Available
    321                      2                          -2    Programs Available
    322                      1                          -2    Programs Available
    323                      1                          -2    Programs Available
    324                      1                           2    Programs Available
    325                      2                          -2    Programs Available
    326                      2                          -2    Programs Available
    327                      2                          -2    Programs Available
    328                      2                          -2    Programs Available
    329                      2                          -2    Programs Available
    330                      2                          -2    Programs Available
    331                     -2                           2    Programs Available
    332                      2                          -2    Programs Available
    333                      2                          -2    Programs Available
    334                      2                          -2    Programs Available
    335                      2                          -2    Programs Available
    336                      2                          -2    Programs Available
    337                      1                          -2    Programs Available
    338                      2                          -2    Programs Available
    339                      2                          -2    Programs Available
    340                      1                          -2    Programs Available
    341                      2                          -2    Programs Available
    342                      2                          -2    Programs Available
    343                      2                          -2 No Programs Available
    344                      1                          -2    Programs Available
    345                      2                          -2    Programs Available
    346                      1                          -2    Programs Available
    347                      1                           2    Programs Available
    348                      2                          -2    Programs Available
    349                      2                          -2    Programs Available
    350                      2                          -2    Programs Available
    351                      2                          -2    Programs Available
    352                      2                          -2    Programs Available
    353                      2                          -2    Programs Available
    354                      1                           2    Programs Available
    355                      1                          -2    Programs Available
    356                      1                          -2    Programs Available
    357                      1                          -2    Programs Available
    358                      2                          -2    Programs Available
    359                      2                          -2    Programs Available
    360                      2                          -2    Programs Available
    361                      2                          -2    Programs Available
    362                      2                          -2    Programs Available
    363                      2                           6    Programs Available
    364                      2                          -2    Programs Available
    365                      2                          -2    Programs Available
    366                      2                          -2    Programs Available
    367                      2                          -2 No Programs Available
    368                      2                          -2 No Programs Available
    369                      2                          -2    Programs Available
    370                      2                           1 No Programs Available
    371                      2                          -2    Programs Available
    372                      2                          -2    Programs Available
    373                      2                          -2    Programs Available
    374                      1                          -2    Programs Available
    375                      2                          -2    Programs Available
    376                      1                          -2    Programs Available
    377                      2                          -2    Programs Available
    378                      1                          -2    Programs Available
    379                      1                          -2    Programs Available
    380                      1                          -2    Programs Available
    381                     -2                           4    Programs Available
    382                      2                          -2    Programs Available
    383                      1                          -2    Programs Available
    384                      1                          -2    Programs Available
    385                      2                          -2    Programs Available
    386                      1                          -2    Programs Available
    387                      1                          -2    Programs Available
    388                      1                          -2 No Programs Available
    389                      1                          -2 No Programs Available
    390                      1                          -2    Programs Available
    391                      1                          -2    Programs Available
    392                      1                           3    Programs Available
    393                      1                          -2    Programs Available
    394                      1                           2    Programs Available
    395                      2                          -2    Programs Available
    396                     -2                           2    Programs Available
    397                      1                          -2    Programs Available
    398                      1                          -2    Programs Available
    399                      1                          -2    Programs Available
    400                      1                          -2    Programs Available
    401                      1                          -2 No Programs Available
    402                      1                           1    Programs Available
    403                      1                          -2    Programs Available
    404                      2                          -2 No Programs Available
    405                      1                          -2    Programs Available
    406                      2                           2    Programs Available
    407                      1                           2    Programs Available
    408                      1                          -2    Programs Available
    409                      1                          -2 No Programs Available
    410                      1                          -2    Programs Available
    411                      1                          -2 No Programs Available
    412                      2                          -2    Programs Available
    413                      2                          -2    Programs Available
    414                      2                          -2    Programs Available
    415                      2                          -2    Programs Available
    416                      2                          -2    Programs Available
    417                      2                           1    Programs Available
    418                      1                          -2    Programs Available
    419                      1                          -2    Programs Available
    420                      2                          -2    Programs Available
    421                      1                          -2    Programs Available
    422                     -2                           2    Programs Available
    423                      2                          -2    Programs Available
            Alternative Credit       Alternative Tuition Payment
    1   Takes alternate credit     Takes alternate tuition plans
    2   Takes alternate credit     Takes alternate tuition plans
    3   Takes alternate credit     Takes alternate tuition plans
    4   Takes alternate credit     Takes alternate tuition plans
    5   Takes alternate credit     Takes alternate tuition plans
    6   Takes alternate credit     Takes alternate tuition plans
    7   Takes alternate credit     Takes alternate tuition plans
    8   Takes alternate credit     Takes alternate tuition plans
    9   Takes alternate credit     Takes alternate tuition plans
    10  Takes alternate credit     Takes alternate tuition plans
    11  Takes alternate credit     Takes alternate tuition plans
    12  Takes alternate credit     Takes alternate tuition plans
    13  Takes alternate credit     Takes alternate tuition plans
    14  Takes alternate credit     Takes alternate tuition plans
    15  Takes alternate credit     Takes alternate tuition plans
    16  Takes alternate credit     Takes alternate tuition plans
    17  Takes alternate credit     Takes alternate tuition plans
    18  Takes alternate credit     Takes alternate tuition plans
    19  Takes alternate credit     Takes alternate tuition plans
    20  Takes alternate credit     Takes alternate tuition plans
    21  Takes alternate credit     Takes alternate tuition plans
    22  Takes alternate credit     Takes alternate tuition plans
    23  Takes alternate credit     Takes alternate tuition plans
    24  Takes alternate credit Takes no alternate tuition pplans
    25  Takes alternate credit     Takes alternate tuition plans
    26  Takes alternate credit     Takes alternate tuition plans
    27  Takes alternate credit     Takes alternate tuition plans
    28  Takes alternate credit     Takes alternate tuition plans
    29  Takes alternate credit     Takes alternate tuition plans
    30  Takes alternate credit     Takes alternate tuition plans
    31  Takes alternate credit Takes no alternate tuition pplans
    32  Takes alternate credit     Takes alternate tuition plans
    33  Takes alternate credit     Takes alternate tuition plans
    34  Takes alternate credit Takes no alternate tuition pplans
    35  Takes alternate credit     Takes alternate tuition plans
    36  Takes alternate credit     Takes alternate tuition plans
    37  Takes alternate credit     Takes alternate tuition plans
    38  Takes alternate credit     Takes alternate tuition plans
    39  Takes alternate credit     Takes alternate tuition plans
    40  Takes alternate credit     Takes alternate tuition plans
    41  Takes alternate credit     Takes alternate tuition plans
    42  Takes alternate credit Takes no alternate tuition pplans
    43  Takes alternate credit     Takes alternate tuition plans
    44  Takes alternate credit     Takes alternate tuition plans
    45  Takes alternate credit     Takes alternate tuition plans
    46  Takes alternate credit     Takes alternate tuition plans
    47  Takes alternate credit Takes no alternate tuition pplans
    48  Takes alternate credit     Takes alternate tuition plans
    49  Takes alternate credit     Takes alternate tuition plans
    50  Takes alternate credit Takes no alternate tuition pplans
    51  Takes alternate credit     Takes alternate tuition plans
    52  Takes alternate credit     Takes alternate tuition plans
    53  Takes alternate credit     Takes alternate tuition plans
    54  Takes alternate credit     Takes alternate tuition plans
    55  Takes alternate credit     Takes alternate tuition plans
    56  Takes alternate credit     Takes alternate tuition plans
    57  Takes alternate credit     Takes alternate tuition plans
    58  Takes alternate credit     Takes alternate tuition plans
    59  Takes alternate credit     Takes alternate tuition plans
    60  Takes alternate credit     Takes alternate tuition plans
    61  Takes alternate credit     Takes alternate tuition plans
    62  Takes alternate credit     Takes alternate tuition plans
    63  Takes alternate credit     Takes alternate tuition plans
    64  Takes alternate credit     Takes alternate tuition plans
    65  Takes alternate credit     Takes alternate tuition plans
    66  Takes alternate credit     Takes alternate tuition plans
    67  Takes alternate credit     Takes alternate tuition plans
    68  Takes alternate credit     Takes alternate tuition plans
    69  Takes alternate credit     Takes alternate tuition plans
    70  Takes alternate credit     Takes alternate tuition plans
    71  Takes alternate credit     Takes alternate tuition plans
    72  Takes alternate credit     Takes alternate tuition plans
    73  Takes alternate credit     Takes alternate tuition plans
    74  Takes alternate credit     Takes alternate tuition plans
    75  Takes alternate credit     Takes alternate tuition plans
    76  Takes alternate credit Takes no alternate tuition pplans
    77  Takes alternate credit     Takes alternate tuition plans
    78  Takes alternate credit     Takes alternate tuition plans
    79  Takes alternate credit     Takes alternate tuition plans
    80  Takes alternate credit     Takes alternate tuition plans
    81  Takes alternate credit     Takes alternate tuition plans
    82  Takes alternate credit     Takes alternate tuition plans
    83  Takes alternate credit     Takes alternate tuition plans
    84  Takes alternate credit     Takes alternate tuition plans
    85  Takes alternate credit     Takes alternate tuition plans
    86  Takes alternate credit     Takes alternate tuition plans
    87  Takes alternate credit     Takes alternate tuition plans
    88  Takes alternate credit Takes no alternate tuition pplans
    89  Takes alternate credit     Takes alternate tuition plans
    90  Takes alternate credit     Takes alternate tuition plans
    91  Takes alternate credit     Takes alternate tuition plans
    92  Takes alternate credit Takes no alternate tuition pplans
    93  Takes alternate credit Takes no alternate tuition pplans
    94  Takes alternate credit     Takes alternate tuition plans
    95  Takes alternate credit     Takes alternate tuition plans
    96  Takes alternate credit     Takes alternate tuition plans
    97  Takes alternate credit     Takes alternate tuition plans
    98  Takes alternate credit     Takes alternate tuition plans
    99  Takes alternate credit     Takes alternate tuition plans
    100 Takes alternate credit     Takes alternate tuition plans
    101 Takes alternate credit     Takes alternate tuition plans
    102 Takes alternate credit     Takes alternate tuition plans
    103 Takes alternate credit     Takes alternate tuition plans
    104 Takes alternate credit     Takes alternate tuition plans
    105 Takes alternate credit     Takes alternate tuition plans
    106 Takes alternate credit     Takes alternate tuition plans
    107 Takes alternate credit     Takes alternate tuition plans
    108 Takes alternate credit     Takes alternate tuition plans
    109 Takes alternate credit     Takes alternate tuition plans
    110 Takes alternate credit     Takes alternate tuition plans
    111 Takes alternate credit     Takes alternate tuition plans
    112 Takes alternate credit     Takes alternate tuition plans
    113 Takes alternate credit     Takes alternate tuition plans
    114 Takes alternate credit     Takes alternate tuition plans
    115 Takes alternate credit     Takes alternate tuition plans
    116 Takes alternate credit     Takes alternate tuition plans
    117 Takes alternate credit     Takes alternate tuition plans
    118 Takes alternate credit     Takes alternate tuition plans
    119 Takes alternate credit     Takes alternate tuition plans
    120 Takes alternate credit     Takes alternate tuition plans
    121 Takes alternate credit     Takes alternate tuition plans
    122 Takes alternate credit     Takes alternate tuition plans
    123 Takes alternate credit     Takes alternate tuition plans
    124 Takes alternate credit     Takes alternate tuition plans
    125 Takes alternate credit     Takes alternate tuition plans
    126 Takes alternate credit     Takes alternate tuition plans
    127 Takes alternate credit     Takes alternate tuition plans
    128 Takes alternate credit     Takes alternate tuition plans
    129 Takes alternate credit     Takes alternate tuition plans
    130 Takes alternate credit     Takes alternate tuition plans
    131 Takes alternate credit     Takes alternate tuition plans
    132 Takes alternate credit     Takes alternate tuition plans
    133 Takes alternate credit     Takes alternate tuition plans
    134 Takes alternate credit     Takes alternate tuition plans
    135 Takes alternate credit     Takes alternate tuition plans
    136 Takes alternate credit     Takes alternate tuition plans
    137 Takes alternate credit     Takes alternate tuition plans
    138 Takes alternate credit     Takes alternate tuition plans
    139 Takes alternate credit Takes no alternate tuition pplans
    140 Takes alternate credit     Takes alternate tuition plans
    141 Takes alternate credit     Takes alternate tuition plans
    142 Takes alternate credit     Takes alternate tuition plans
    143 Takes alternate credit     Takes alternate tuition plans
    144 Takes alternate credit     Takes alternate tuition plans
    145 Takes alternate credit     Takes alternate tuition plans
    146 Takes alternate credit     Takes alternate tuition plans
    147 Takes alternate credit     Takes alternate tuition plans
    148 Takes alternate credit     Takes alternate tuition plans
    149 Takes alternate credit     Takes alternate tuition plans
    150 Takes alternate credit     Takes alternate tuition plans
    151 Takes alternate credit     Takes alternate tuition plans
    152 Takes alternate credit     Takes alternate tuition plans
    153 Takes alternate credit     Takes alternate tuition plans
    154 Takes alternate credit     Takes alternate tuition plans
    155 Takes alternate credit     Takes alternate tuition plans
    156 Takes alternate credit     Takes alternate tuition plans
    157 Takes alternate credit     Takes alternate tuition plans
    158 Takes alternate credit     Takes alternate tuition plans
    159 Takes alternate credit     Takes alternate tuition plans
    160 Takes alternate credit     Takes alternate tuition plans
    161 Takes alternate credit     Takes alternate tuition plans
    162 Takes alternate credit     Takes alternate tuition plans
    163 Takes alternate credit     Takes alternate tuition plans
    164 Takes alternate credit     Takes alternate tuition plans
    165 Takes alternate credit     Takes alternate tuition plans
    166 Takes alternate credit     Takes alternate tuition plans
    167 Takes alternate credit     Takes alternate tuition plans
    168 Takes alternate credit     Takes alternate tuition plans
    169 Takes alternate credit     Takes alternate tuition plans
    170 Takes alternate credit     Takes alternate tuition plans
    171 Takes alternate credit     Takes alternate tuition plans
    172 Takes alternate credit     Takes alternate tuition plans
    173 Takes alternate credit     Takes alternate tuition plans
    174 Takes alternate credit     Takes alternate tuition plans
    175 Takes alternate credit     Takes alternate tuition plans
    176 Takes alternate credit     Takes alternate tuition plans
    177 Takes alternate credit     Takes alternate tuition plans
    178 Takes alternate credit     Takes alternate tuition plans
    179 Takes alternate credit     Takes alternate tuition plans
    180 Takes alternate credit     Takes alternate tuition plans
    181 Takes alternate credit     Takes alternate tuition plans
    182 Takes alternate credit     Takes alternate tuition plans
    183 Takes alternate credit     Takes alternate tuition plans
    184 Takes alternate credit     Takes alternate tuition plans
    185 Takes alternate credit     Takes alternate tuition plans
    186 Takes alternate credit     Takes alternate tuition plans
    187 Takes alternate credit     Takes alternate tuition plans
    188 Takes alternate credit Takes no alternate tuition pplans
    189 Takes alternate credit     Takes alternate tuition plans
    190 Takes alternate credit Takes no alternate tuition pplans
    191 Takes alternate credit     Takes alternate tuition plans
    192 Takes alternate credit     Takes alternate tuition plans
    193 Takes alternate credit     Takes alternate tuition plans
    194 Takes alternate credit     Takes alternate tuition plans
    195 Takes alternate credit     Takes alternate tuition plans
    196 Takes alternate credit     Takes alternate tuition plans
    197 Takes alternate credit     Takes alternate tuition plans
    198 Takes alternate credit     Takes alternate tuition plans
    199 Takes alternate credit     Takes alternate tuition plans
    200 Takes alternate credit     Takes alternate tuition plans
    201 Takes alternate credit     Takes alternate tuition plans
    202 Takes alternate credit     Takes alternate tuition plans
    203 Takes alternate credit     Takes alternate tuition plans
    204 Takes alternate credit     Takes alternate tuition plans
    205 Takes alternate credit     Takes alternate tuition plans
    206 Takes alternate credit     Takes alternate tuition plans
    207 Takes alternate credit     Takes alternate tuition plans
    208 Takes alternate credit     Takes alternate tuition plans
    209 Takes alternate credit Takes no alternate tuition pplans
    210 Takes alternate credit Takes no alternate tuition pplans
    211 Takes alternate credit     Takes alternate tuition plans
    212 Takes alternate credit     Takes alternate tuition plans
    213 Takes alternate credit     Takes alternate tuition plans
    214 Takes alternate credit     Takes alternate tuition plans
    215 Takes alternate credit     Takes alternate tuition plans
    216 Takes alternate credit     Takes alternate tuition plans
    217 Takes alternate credit     Takes alternate tuition plans
    218 Takes alternate credit     Takes alternate tuition plans
    219 Takes alternate credit     Takes alternate tuition plans
    220 Takes alternate credit     Takes alternate tuition plans
    221 Takes alternate credit     Takes alternate tuition plans
    222 Takes alternate credit     Takes alternate tuition plans
    223 Takes alternate credit     Takes alternate tuition plans
    224 Takes alternate credit     Takes alternate tuition plans
    225 Takes alternate credit     Takes alternate tuition plans
    226 Takes alternate credit     Takes alternate tuition plans
    227 Takes alternate credit     Takes alternate tuition plans
    228 Takes alternate credit     Takes alternate tuition plans
    229 Takes alternate credit     Takes alternate tuition plans
    230 Takes alternate credit     Takes alternate tuition plans
    231 Takes alternate credit     Takes alternate tuition plans
    232 Takes alternate credit     Takes alternate tuition plans
    233 Takes alternate credit     Takes alternate tuition plans
    234 Takes alternate credit     Takes alternate tuition plans
    235 Takes alternate credit     Takes alternate tuition plans
    236 Takes alternate credit     Takes alternate tuition plans
    237 Takes alternate credit     Takes alternate tuition plans
    238 Takes alternate credit     Takes alternate tuition plans
    239 Takes alternate credit     Takes alternate tuition plans
    240 Takes alternate credit     Takes alternate tuition plans
    241 Takes alternate credit     Takes alternate tuition plans
    242 Takes alternate credit     Takes alternate tuition plans
    243 Takes alternate credit     Takes alternate tuition plans
    244 Takes alternate credit Takes no alternate tuition pplans
    245 Takes alternate credit     Takes alternate tuition plans
    246 Takes alternate credit     Takes alternate tuition plans
    247 Takes alternate credit     Takes alternate tuition plans
    248 Takes alternate credit     Takes alternate tuition plans
    249 Takes alternate credit     Takes alternate tuition plans
    250 Takes alternate credit Takes no alternate tuition pplans
    251 Takes alternate credit     Takes alternate tuition plans
    252 Takes alternate credit Takes no alternate tuition pplans
    253 Takes alternate credit     Takes alternate tuition plans
    254 Takes alternate credit     Takes alternate tuition plans
    255 Takes alternate credit     Takes alternate tuition plans
    256 Takes alternate credit     Takes alternate tuition plans
    257 Takes alternate credit     Takes alternate tuition plans
    258 Takes alternate credit     Takes alternate tuition plans
    259 Takes alternate credit     Takes alternate tuition plans
    260 Takes alternate credit     Takes alternate tuition plans
    261 Takes alternate credit     Takes alternate tuition plans
    262 Takes alternate credit     Takes alternate tuition plans
    263 Takes alternate credit     Takes alternate tuition plans
    264 Takes alternate credit Takes no alternate tuition pplans
    265 Takes alternate credit     Takes alternate tuition plans
    266 Takes alternate credit     Takes alternate tuition plans
    267 Takes alternate credit     Takes alternate tuition plans
    268 Takes alternate credit     Takes alternate tuition plans
    269 Takes alternate credit     Takes alternate tuition plans
    270 Takes alternate credit     Takes alternate tuition plans
    271 Takes alternate credit     Takes alternate tuition plans
    272 Takes alternate credit     Takes alternate tuition plans
    273 Takes alternate credit     Takes alternate tuition plans
    274 Takes alternate credit     Takes alternate tuition plans
    275 Takes alternate credit     Takes alternate tuition plans
    276 Takes alternate credit     Takes alternate tuition plans
    277 Takes alternate credit     Takes alternate tuition plans
    278 Takes alternate credit     Takes alternate tuition plans
    279 Takes alternate credit     Takes alternate tuition plans
    280 Takes alternate credit     Takes alternate tuition plans
    281 Takes alternate credit     Takes alternate tuition plans
    282 Takes alternate credit     Takes alternate tuition plans
    283 Takes alternate credit     Takes alternate tuition plans
    284 Takes alternate credit     Takes alternate tuition plans
    285 Takes alternate credit     Takes alternate tuition plans
    286 Takes alternate credit     Takes alternate tuition plans
    287 Takes alternate credit     Takes alternate tuition plans
    288 Takes alternate credit     Takes alternate tuition plans
    289 Takes alternate credit     Takes alternate tuition plans
    290 Takes alternate credit     Takes alternate tuition plans
    291 Takes alternate credit     Takes alternate tuition plans
    292 Takes alternate credit     Takes alternate tuition plans
    293 Takes alternate credit     Takes alternate tuition plans
    294 Takes alternate credit     Takes alternate tuition plans
    295 Takes alternate credit     Takes alternate tuition plans
    296 Takes alternate credit     Takes alternate tuition plans
    297 Takes alternate credit     Takes alternate tuition plans
    298 Takes alternate credit     Takes alternate tuition plans
    299 Takes alternate credit     Takes alternate tuition plans
    300 Takes alternate credit     Takes alternate tuition plans
    301 Takes alternate credit     Takes alternate tuition plans
    302 Takes alternate credit Takes no alternate tuition pplans
    303 Takes alternate credit Takes no alternate tuition pplans
    304 Takes alternate credit Takes no alternate tuition pplans
    305 Takes alternate credit     Takes alternate tuition plans
    306 Takes alternate credit     Takes alternate tuition plans
    307 Takes alternate credit Takes no alternate tuition pplans
    308 Takes alternate credit Takes no alternate tuition pplans
    309 Takes alternate credit     Takes alternate tuition plans
    310 Takes alternate credit     Takes alternate tuition plans
    311 Takes alternate credit     Takes alternate tuition plans
    312 Takes alternate credit     Takes alternate tuition plans
    313 Takes alternate credit     Takes alternate tuition plans
    314 Takes alternate credit     Takes alternate tuition plans
    315 Takes alternate credit     Takes alternate tuition plans
    316 Takes alternate credit     Takes alternate tuition plans
    317 Takes alternate credit     Takes alternate tuition plans
    318 Takes alternate credit     Takes alternate tuition plans
    319 Takes alternate credit     Takes alternate tuition plans
    320 Takes alternate credit     Takes alternate tuition plans
    321 Takes alternate credit     Takes alternate tuition plans
    322 Takes alternate credit     Takes alternate tuition plans
    323 Takes alternate credit     Takes alternate tuition plans
    324 Takes alternate credit     Takes alternate tuition plans
    325 Takes alternate credit     Takes alternate tuition plans
    326 Takes alternate credit     Takes alternate tuition plans
    327 Takes alternate credit     Takes alternate tuition plans
    328 Takes alternate credit     Takes alternate tuition plans
    329 Takes alternate credit     Takes alternate tuition plans
    330 Takes alternate credit     Takes alternate tuition plans
    331 Takes alternate credit     Takes alternate tuition plans
    332 Takes alternate credit     Takes alternate tuition plans
    333 Takes alternate credit     Takes alternate tuition plans
    334 Takes alternate credit     Takes alternate tuition plans
    335 Takes alternate credit     Takes alternate tuition plans
    336 Takes alternate credit     Takes alternate tuition plans
    337 Takes alternate credit     Takes alternate tuition plans
    338 Takes alternate credit     Takes alternate tuition plans
    339 Takes alternate credit     Takes alternate tuition plans
    340 Takes alternate credit     Takes alternate tuition plans
    341 Takes alternate credit     Takes alternate tuition plans
    342 Takes alternate credit     Takes alternate tuition plans
    343 Takes alternate credit     Takes alternate tuition plans
    344 Takes alternate credit     Takes alternate tuition plans
    345 Takes alternate credit     Takes alternate tuition plans
    346 Takes alternate credit     Takes alternate tuition plans
    347 Takes alternate credit     Takes alternate tuition plans
    348 Takes alternate credit     Takes alternate tuition plans
    349 Takes alternate credit     Takes alternate tuition plans
    350 Takes alternate credit     Takes alternate tuition plans
    351 Takes alternate credit     Takes alternate tuition plans
    352 Takes alternate credit     Takes alternate tuition plans
    353 Takes alternate credit     Takes alternate tuition plans
    354 Takes alternate credit     Takes alternate tuition plans
    355 Takes alternate credit     Takes alternate tuition plans
    356 Takes alternate credit     Takes alternate tuition plans
    357 Takes alternate credit     Takes alternate tuition plans
    358 Takes alternate credit     Takes alternate tuition plans
    359 Takes alternate credit     Takes alternate tuition plans
    360 Takes alternate credit     Takes alternate tuition plans
    361 Takes alternate credit     Takes alternate tuition plans
    362 Takes alternate credit     Takes alternate tuition plans
    363 Takes alternate credit     Takes alternate tuition plans
    364 Takes alternate credit     Takes alternate tuition plans
    365 Takes alternate credit     Takes alternate tuition plans
    366 Takes alternate credit     Takes alternate tuition plans
    367 Takes alternate credit     Takes alternate tuition plans
    368 Takes alternate credit     Takes alternate tuition plans
    369 Takes alternate credit     Takes alternate tuition plans
    370 Takes alternate credit     Takes alternate tuition plans
    371 Takes alternate credit     Takes alternate tuition plans
    372 Takes alternate credit     Takes alternate tuition plans
    373 Takes alternate credit     Takes alternate tuition plans
    374 Takes alternate credit     Takes alternate tuition plans
    375 Takes alternate credit     Takes alternate tuition plans
    376 Takes alternate credit     Takes alternate tuition plans
    377 Takes alternate credit     Takes alternate tuition plans
    378 Takes alternate credit     Takes alternate tuition plans
    379 Takes alternate credit     Takes alternate tuition plans
    380 Takes alternate credit     Takes alternate tuition plans
    381 Takes alternate credit     Takes alternate tuition plans
    382 Takes alternate credit     Takes alternate tuition plans
    383 Takes alternate credit     Takes alternate tuition plans
    384 Takes alternate credit     Takes alternate tuition plans
    385 Takes alternate credit     Takes alternate tuition plans
    386 Takes alternate credit     Takes alternate tuition plans
    387 Takes alternate credit     Takes alternate tuition plans
    388 Takes alternate credit     Takes alternate tuition plans
    389 Takes alternate credit     Takes alternate tuition plans
    390 Takes alternate credit     Takes alternate tuition plans
    391 Takes alternate credit     Takes alternate tuition plans
    392 Takes alternate credit     Takes alternate tuition plans
    393 Takes alternate credit     Takes alternate tuition plans
    394 Takes alternate credit     Takes alternate tuition plans
    395 Takes alternate credit     Takes alternate tuition plans
    396 Takes alternate credit     Takes alternate tuition plans
    397 Takes alternate credit     Takes alternate tuition plans
    398 Takes alternate credit     Takes alternate tuition plans
    399 Takes alternate credit     Takes alternate tuition plans
    400 Takes alternate credit     Takes alternate tuition plans
    401 Takes alternate credit     Takes alternate tuition plans
    402 Takes alternate credit Takes no alternate tuition pplans
    403 Takes alternate credit     Takes alternate tuition plans
    404 Takes alternate credit     Takes alternate tuition plans
    405 Takes alternate credit     Takes alternate tuition plans
    406 Takes alternate credit     Takes alternate tuition plans
    407 Takes alternate credit     Takes alternate tuition plans
    408 Takes alternate credit     Takes alternate tuition plans
    409 Takes alternate credit     Takes alternate tuition plans
    410 Takes alternate credit     Takes alternate tuition plans
    411 Takes alternate credit     Takes alternate tuition plans
    412 Takes alternate credit Takes no alternate tuition pplans
    413 Takes alternate credit     Takes alternate tuition plans
    414 Takes alternate credit     Takes alternate tuition plans
    415 Takes alternate credit     Takes alternate tuition plans
    416 Takes alternate credit     Takes alternate tuition plans
    417 Takes alternate credit     Takes alternate tuition plans
    418 Takes alternate credit     Takes alternate tuition plans
    419 Takes alternate credit     Takes alternate tuition plans
    420 Takes alternate credit     Takes alternate tuition plans
    421 Takes alternate credit     Takes alternate tuition plans
    422 Takes alternate credit     Takes alternate tuition plans
    423 Takes alternate credit     Takes alternate tuition plans
                                Distance Education           Counseling Services
    1      Offers distance education opportunities    Offers counseling services
    2      Offers distance education opportunities    Offers counseling services
    3      Offers distance education opportunities    Offers counseling services
    4      Offers distance education opportunities    Offers counseling services
    5      Offers distance education opportunities    Offers counseling services
    6      Offers distance education opportunities    Offers counseling services
    7      Offers distance education opportunities    Offers counseling services
    8      Offers distance education opportunities    Offers counseling services
    9      Offers distance education opportunities    Offers counseling services
    10     Offers distance education opportunities    Offers counseling services
    11     Offers distance education opportunities    Offers counseling services
    12     Offers distance education opportunities    Offers counseling services
    13     Offers distance education opportunities    Offers counseling services
    14     Offers distance education opportunities    Offers counseling services
    15     Offers distance education opportunities    Offers counseling services
    16     Offers distance education opportunities    Offers counseling services
    17     Offers distance education opportunities    Offers counseling services
    18     Offers distance education opportunities    Offers counseling services
    19     Offers distance education opportunities    Offers counseling services
    20     Offers distance education opportunities    Offers counseling services
    21     Offers distance education opportunities    Offers counseling services
    22     Offers distance education opportunities    Offers counseling services
    23     Offers distance education opportunities    Offers counseling services
    24     Offers distance education opportunities    Offers counseling services
    25     Offers distance education opportunities    Offers counseling services
    26     Offers distance education opportunities    Offers counseling services
    27     Offers distance education opportunities    Offers counseling services
    28  Offers no distance education opportunities    Offers counseling services
    29  Offers no distance education opportunities    Offers counseling services
    30     Offers distance education opportunities    Offers counseling services
    31     Offers distance education opportunities    Offers counseling services
    32     Offers distance education opportunities    Offers counseling services
    33     Offers distance education opportunities    Offers counseling services
    34     Offers distance education opportunities    Offers counseling services
    35     Offers distance education opportunities    Offers counseling services
    36     Offers distance education opportunities    Offers counseling services
    37     Offers distance education opportunities    Offers counseling services
    38     Offers distance education opportunities    Offers counseling services
    39     Offers distance education opportunities    Offers counseling services
    40     Offers distance education opportunities    Offers counseling services
    41     Offers distance education opportunities    Offers counseling services
    42     Offers distance education opportunities    Offers counseling services
    43  Offers no distance education opportunities    Offers counseling services
    44     Offers distance education opportunities    Offers counseling services
    45     Offers distance education opportunities    Offers counseling services
    46     Offers distance education opportunities    Offers counseling services
    47     Offers distance education opportunities    Offers counseling services
    48     Offers distance education opportunities    Offers counseling services
    49  Offers no distance education opportunities    Offers counseling services
    50     Offers distance education opportunities    Offers counseling services
    51     Offers distance education opportunities    Offers counseling services
    52     Offers distance education opportunities    Offers counseling services
    53  Offers no distance education opportunities    Offers counseling services
    54     Offers distance education opportunities    Offers counseling services
    55     Offers distance education opportunities    Offers counseling services
    56     Offers distance education opportunities    Offers counseling services
    57     Offers distance education opportunities    Offers counseling services
    58     Offers distance education opportunities    Offers counseling services
    59     Offers distance education opportunities    Offers counseling services
    60     Offers distance education opportunities    Offers counseling services
    61  Offers no distance education opportunities    Offers counseling services
    62     Offers distance education opportunities    Offers counseling services
    63     Offers distance education opportunities    Offers counseling services
    64     Offers distance education opportunities    Offers counseling services
    65     Offers distance education opportunities    Offers counseling services
    66     Offers distance education opportunities    Offers counseling services
    67     Offers distance education opportunities    Offers counseling services
    68     Offers distance education opportunities    Offers counseling services
    69     Offers distance education opportunities    Offers counseling services
    70     Offers distance education opportunities    Offers counseling services
    71  Offers no distance education opportunities    Offers counseling services
    72     Offers distance education opportunities    Offers counseling services
    73  Offers no distance education opportunities    Offers counseling services
    74     Offers distance education opportunities    Offers counseling services
    75     Offers distance education opportunities    Offers counseling services
    76     Offers distance education opportunities    Offers counseling services
    77     Offers distance education opportunities    Offers counseling services
    78     Offers distance education opportunities    Offers counseling services
    79     Offers distance education opportunities    Offers counseling services
    80     Offers distance education opportunities    Offers counseling services
    81     Offers distance education opportunities    Offers counseling services
    82     Offers distance education opportunities    Offers counseling services
    83  Offers no distance education opportunities    Offers counseling services
    84     Offers distance education opportunities    Offers counseling services
    85     Offers distance education opportunities    Offers counseling services
    86     Offers distance education opportunities    Offers counseling services
    87     Offers distance education opportunities    Offers counseling services
    88     Offers distance education opportunities    Offers counseling services
    89     Offers distance education opportunities    Offers counseling services
    90     Offers distance education opportunities    Offers counseling services
    91     Offers distance education opportunities    Offers counseling services
    92     Offers distance education opportunities    Offers counseling services
    93     Offers distance education opportunities    Offers counseling services
    94     Offers distance education opportunities    Offers counseling services
    95     Offers distance education opportunities    Offers counseling services
    96     Offers distance education opportunities    Offers counseling services
    97  Offers no distance education opportunities    Offers counseling services
    98     Offers distance education opportunities    Offers counseling services
    99     Offers distance education opportunities    Offers counseling services
    100    Offers distance education opportunities    Offers counseling services
    101 Offers no distance education opportunities    Offers counseling services
    102    Offers distance education opportunities    Offers counseling services
    103    Offers distance education opportunities    Offers counseling services
    104    Offers distance education opportunities    Offers counseling services
    105    Offers distance education opportunities    Offers counseling services
    106    Offers distance education opportunities    Offers counseling services
    107    Offers distance education opportunities    Offers counseling services
    108    Offers distance education opportunities    Offers counseling services
    109    Offers distance education opportunities    Offers counseling services
    110    Offers distance education opportunities    Offers counseling services
    111 Offers no distance education opportunities    Offers counseling services
    112    Offers distance education opportunities    Offers counseling services
    113    Offers distance education opportunities    Offers counseling services
    114    Offers distance education opportunities    Offers counseling services
    115    Offers distance education opportunities    Offers counseling services
    116    Offers distance education opportunities    Offers counseling services
    117    Offers distance education opportunities    Offers counseling services
    118    Offers distance education opportunities    Offers counseling services
    119    Offers distance education opportunities    Offers counseling services
    120    Offers distance education opportunities    Offers counseling services
    121    Offers distance education opportunities    Offers counseling services
    122    Offers distance education opportunities    Offers counseling services
    123    Offers distance education opportunities    Offers counseling services
    124    Offers distance education opportunities    Offers counseling services
    125    Offers distance education opportunities    Offers counseling services
    126    Offers distance education opportunities    Offers counseling services
    127    Offers distance education opportunities    Offers counseling services
    128    Offers distance education opportunities    Offers counseling services
    129 Offers no distance education opportunities    Offers counseling services
    130    Offers distance education opportunities    Offers counseling services
    131    Offers distance education opportunities    Offers counseling services
    132    Offers distance education opportunities    Offers counseling services
    133    Offers distance education opportunities    Offers counseling services
    134 Offers no distance education opportunities    Offers counseling services
    135 Offers no distance education opportunities    Offers counseling services
    136    Offers distance education opportunities    Offers counseling services
    137    Offers distance education opportunities    Offers counseling services
    138    Offers distance education opportunities    Offers counseling services
    139 Offers no distance education opportunities    Offers counseling services
    140    Offers distance education opportunities    Offers counseling services
    141    Offers distance education opportunities    Offers counseling services
    142    Offers distance education opportunities    Offers counseling services
    143    Offers distance education opportunities    Offers counseling services
    144    Offers distance education opportunities    Offers counseling services
    145    Offers distance education opportunities    Offers counseling services
    146    Offers distance education opportunities    Offers counseling services
    147    Offers distance education opportunities    Offers counseling services
    148    Offers distance education opportunities    Offers counseling services
    149    Offers distance education opportunities    Offers counseling services
    150    Offers distance education opportunities    Offers counseling services
    151    Offers distance education opportunities    Offers counseling services
    152    Offers distance education opportunities    Offers counseling services
    153 Offers no distance education opportunities    Offers counseling services
    154 Offers no distance education opportunities    Offers counseling services
    155 Offers no distance education opportunities    Offers counseling services
    156    Offers distance education opportunities    Offers counseling services
    157    Offers distance education opportunities    Offers counseling services
    158    Offers distance education opportunities    Offers counseling services
    159    Offers distance education opportunities    Offers counseling services
    160    Offers distance education opportunities    Offers counseling services
    161    Offers distance education opportunities    Offers counseling services
    162    Offers distance education opportunities    Offers counseling services
    163    Offers distance education opportunities    Offers counseling services
    164 Offers no distance education opportunities    Offers counseling services
    165    Offers distance education opportunities    Offers counseling services
    166    Offers distance education opportunities    Offers counseling services
    167    Offers distance education opportunities    Offers counseling services
    168    Offers distance education opportunities    Offers counseling services
    169    Offers distance education opportunities    Offers counseling services
    170    Offers distance education opportunities    Offers counseling services
    171    Offers distance education opportunities    Offers counseling services
    172 Offers no distance education opportunities    Offers counseling services
    173    Offers distance education opportunities    Offers counseling services
    174    Offers distance education opportunities    Offers counseling services
    175    Offers distance education opportunities    Offers counseling services
    176    Offers distance education opportunities    Offers counseling services
    177    Offers distance education opportunities    Offers counseling services
    178    Offers distance education opportunities    Offers counseling services
    179    Offers distance education opportunities    Offers counseling services
    180 Offers no distance education opportunities    Offers counseling services
    181    Offers distance education opportunities    Offers counseling services
    182    Offers distance education opportunities    Offers counseling services
    183    Offers distance education opportunities    Offers counseling services
    184 Offers no distance education opportunities    Offers counseling services
    185 Offers no distance education opportunities    Offers counseling services
    186    Offers distance education opportunities    Offers counseling services
    187    Offers distance education opportunities    Offers counseling services
    188    Offers distance education opportunities    Offers counseling services
    189    Offers distance education opportunities    Offers counseling services
    190    Offers distance education opportunities    Offers counseling services
    191    Offers distance education opportunities    Offers counseling services
    192    Offers distance education opportunities    Offers counseling services
    193    Offers distance education opportunities    Offers counseling services
    194    Offers distance education opportunities    Offers counseling services
    195    Offers distance education opportunities    Offers counseling services
    196    Offers distance education opportunities    Offers counseling services
    197    Offers distance education opportunities    Offers counseling services
    198    Offers distance education opportunities    Offers counseling services
    199    Offers distance education opportunities    Offers counseling services
    200    Offers distance education opportunities    Offers counseling services
    201    Offers distance education opportunities    Offers counseling services
    202    Offers distance education opportunities    Offers counseling services
    203    Offers distance education opportunities    Offers counseling services
    204    Offers distance education opportunities    Offers counseling services
    205    Offers distance education opportunities    Offers counseling services
    206    Offers distance education opportunities    Offers counseling services
    207    Offers distance education opportunities    Offers counseling services
    208    Offers distance education opportunities    Offers counseling services
    209    Offers distance education opportunities    Offers counseling services
    210    Offers distance education opportunities    Offers counseling services
    211    Offers distance education opportunities    Offers counseling services
    212    Offers distance education opportunities    Offers counseling services
    213    Offers distance education opportunities    Offers counseling services
    214    Offers distance education opportunities    Offers counseling services
    215    Offers distance education opportunities    Offers counseling services
    216 Offers no distance education opportunities    Offers counseling services
    217 Offers no distance education opportunities    Offers counseling services
    218    Offers distance education opportunities    Offers counseling services
    219    Offers distance education opportunities    Offers counseling services
    220 Offers no distance education opportunities    Offers counseling services
    221    Offers distance education opportunities    Offers counseling services
    222    Offers distance education opportunities    Offers counseling services
    223 Offers no distance education opportunities    Offers counseling services
    224    Offers distance education opportunities    Offers counseling services
    225    Offers distance education opportunities    Offers counseling services
    226    Offers distance education opportunities    Offers counseling services
    227    Offers distance education opportunities Offers no counseling services
    228 Offers no distance education opportunities    Offers counseling services
    229    Offers distance education opportunities    Offers counseling services
    230    Offers distance education opportunities    Offers counseling services
    231 Offers no distance education opportunities    Offers counseling services
    232    Offers distance education opportunities    Offers counseling services
    233    Offers distance education opportunities    Offers counseling services
    234    Offers distance education opportunities    Offers counseling services
    235    Offers distance education opportunities    Offers counseling services
    236    Offers distance education opportunities    Offers counseling services
    237 Offers no distance education opportunities    Offers counseling services
    238    Offers distance education opportunities    Offers counseling services
    239    Offers distance education opportunities    Offers counseling services
    240    Offers distance education opportunities    Offers counseling services
    241    Offers distance education opportunities    Offers counseling services
    242    Offers distance education opportunities    Offers counseling services
    243    Offers distance education opportunities    Offers counseling services
    244    Offers distance education opportunities    Offers counseling services
    245    Offers distance education opportunities    Offers counseling services
    246    Offers distance education opportunities    Offers counseling services
    247    Offers distance education opportunities    Offers counseling services
    248    Offers distance education opportunities    Offers counseling services
    249    Offers distance education opportunities    Offers counseling services
    250    Offers distance education opportunities    Offers counseling services
    251    Offers distance education opportunities    Offers counseling services
    252    Offers distance education opportunities    Offers counseling services
    253    Offers distance education opportunities    Offers counseling services
    254    Offers distance education opportunities    Offers counseling services
    255    Offers distance education opportunities    Offers counseling services
    256 Offers no distance education opportunities    Offers counseling services
    257 Offers no distance education opportunities    Offers counseling services
    258    Offers distance education opportunities    Offers counseling services
    259 Offers no distance education opportunities    Offers counseling services
    260    Offers distance education opportunities    Offers counseling services
    261    Offers distance education opportunities    Offers counseling services
    262    Offers distance education opportunities    Offers counseling services
    263    Offers distance education opportunities    Offers counseling services
    264    Offers distance education opportunities    Offers counseling services
    265    Offers distance education opportunities    Offers counseling services
    266    Offers distance education opportunities    Offers counseling services
    267    Offers distance education opportunities    Offers counseling services
    268    Offers distance education opportunities    Offers counseling services
    269    Offers distance education opportunities    Offers counseling services
    270    Offers distance education opportunities    Offers counseling services
    271    Offers distance education opportunities    Offers counseling services
    272    Offers distance education opportunities    Offers counseling services
    273    Offers distance education opportunities    Offers counseling services
    274    Offers distance education opportunities    Offers counseling services
    275    Offers distance education opportunities    Offers counseling services
    276    Offers distance education opportunities    Offers counseling services
    277 Offers no distance education opportunities    Offers counseling services
    278 Offers no distance education opportunities    Offers counseling services
    279    Offers distance education opportunities    Offers counseling services
    280 Offers no distance education opportunities    Offers counseling services
    281    Offers distance education opportunities    Offers counseling services
    282    Offers distance education opportunities    Offers counseling services
    283 Offers no distance education opportunities    Offers counseling services
    284 Offers no distance education opportunities    Offers counseling services
    285    Offers distance education opportunities    Offers counseling services
    286    Offers distance education opportunities    Offers counseling services
    287    Offers distance education opportunities    Offers counseling services
    288    Offers distance education opportunities    Offers counseling services
    289    Offers distance education opportunities    Offers counseling services
    290    Offers distance education opportunities    Offers counseling services
    291    Offers distance education opportunities    Offers counseling services
    292    Offers distance education opportunities    Offers counseling services
    293    Offers distance education opportunities    Offers counseling services
    294 Offers no distance education opportunities    Offers counseling services
    295    Offers distance education opportunities    Offers counseling services
    296    Offers distance education opportunities    Offers counseling services
    297    Offers distance education opportunities    Offers counseling services
    298    Offers distance education opportunities    Offers counseling services
    299    Offers distance education opportunities    Offers counseling services
    300    Offers distance education opportunities    Offers counseling services
    301    Offers distance education opportunities    Offers counseling services
    302    Offers distance education opportunities    Offers counseling services
    303    Offers distance education opportunities    Offers counseling services
    304    Offers distance education opportunities    Offers counseling services
    305    Offers distance education opportunities    Offers counseling services
    306    Offers distance education opportunities    Offers counseling services
    307    Offers distance education opportunities    Offers counseling services
    308    Offers distance education opportunities    Offers counseling services
    309    Offers distance education opportunities    Offers counseling services
    310    Offers distance education opportunities    Offers counseling services
    311    Offers distance education opportunities    Offers counseling services
    312    Offers distance education opportunities    Offers counseling services
    313    Offers distance education opportunities    Offers counseling services
    314    Offers distance education opportunities    Offers counseling services
    315    Offers distance education opportunities    Offers counseling services
    316    Offers distance education opportunities    Offers counseling services
    317 Offers no distance education opportunities    Offers counseling services
    318    Offers distance education opportunities    Offers counseling services
    319    Offers distance education opportunities    Offers counseling services
    320    Offers distance education opportunities    Offers counseling services
    321    Offers distance education opportunities    Offers counseling services
    322    Offers distance education opportunities    Offers counseling services
    323    Offers distance education opportunities    Offers counseling services
    324    Offers distance education opportunities    Offers counseling services
    325    Offers distance education opportunities    Offers counseling services
    326    Offers distance education opportunities    Offers counseling services
    327    Offers distance education opportunities    Offers counseling services
    328    Offers distance education opportunities    Offers counseling services
    329 Offers no distance education opportunities    Offers counseling services
    330    Offers distance education opportunities    Offers counseling services
    331    Offers distance education opportunities    Offers counseling services
    332    Offers distance education opportunities    Offers counseling services
    333    Offers distance education opportunities    Offers counseling services
    334    Offers distance education opportunities    Offers counseling services
    335    Offers distance education opportunities    Offers counseling services
    336    Offers distance education opportunities    Offers counseling services
    337    Offers distance education opportunities    Offers counseling services
    338    Offers distance education opportunities    Offers counseling services
    339    Offers distance education opportunities    Offers counseling services
    340    Offers distance education opportunities    Offers counseling services
    341    Offers distance education opportunities    Offers counseling services
    342    Offers distance education opportunities    Offers counseling services
    343    Offers distance education opportunities    Offers counseling services
    344    Offers distance education opportunities    Offers counseling services
    345 Offers no distance education opportunities    Offers counseling services
    346    Offers distance education opportunities    Offers counseling services
    347    Offers distance education opportunities    Offers counseling services
    348    Offers distance education opportunities    Offers counseling services
    349    Offers distance education opportunities    Offers counseling services
    350 Offers no distance education opportunities    Offers counseling services
    351 Offers no distance education opportunities    Offers counseling services
    352    Offers distance education opportunities    Offers counseling services
    353    Offers distance education opportunities    Offers counseling services
    354 Offers no distance education opportunities    Offers counseling services
    355    Offers distance education opportunities    Offers counseling services
    356    Offers distance education opportunities    Offers counseling services
    357    Offers distance education opportunities    Offers counseling services
    358    Offers distance education opportunities    Offers counseling services
    359    Offers distance education opportunities    Offers counseling services
    360    Offers distance education opportunities    Offers counseling services
    361    Offers distance education opportunities    Offers counseling services
    362    Offers distance education opportunities    Offers counseling services
    363    Offers distance education opportunities    Offers counseling services
    364    Offers distance education opportunities    Offers counseling services
    365    Offers distance education opportunities    Offers counseling services
    366    Offers distance education opportunities    Offers counseling services
    367    Offers distance education opportunities    Offers counseling services
    368    Offers distance education opportunities    Offers counseling services
    369    Offers distance education opportunities    Offers counseling services
    370    Offers distance education opportunities    Offers counseling services
    371 Offers no distance education opportunities    Offers counseling services
    372    Offers distance education opportunities    Offers counseling services
    373    Offers distance education opportunities    Offers counseling services
    374    Offers distance education opportunities    Offers counseling services
    375    Offers distance education opportunities    Offers counseling services
    376    Offers distance education opportunities    Offers counseling services
    377    Offers distance education opportunities    Offers counseling services
    378    Offers distance education opportunities    Offers counseling services
    379    Offers distance education opportunities    Offers counseling services
    380    Offers distance education opportunities    Offers counseling services
    381    Offers distance education opportunities    Offers counseling services
    382    Offers distance education opportunities    Offers counseling services
    383    Offers distance education opportunities    Offers counseling services
    384    Offers distance education opportunities    Offers counseling services
    385    Offers distance education opportunities    Offers counseling services
    386    Offers distance education opportunities    Offers counseling services
    387    Offers distance education opportunities    Offers counseling services
    388    Offers distance education opportunities    Offers counseling services
    389    Offers distance education opportunities    Offers counseling services
    390    Offers distance education opportunities    Offers counseling services
    391    Offers distance education opportunities    Offers counseling services
    392    Offers distance education opportunities    Offers counseling services
    393    Offers distance education opportunities    Offers counseling services
    394    Offers distance education opportunities    Offers counseling services
    395    Offers distance education opportunities    Offers counseling services
    396    Offers distance education opportunities    Offers counseling services
    397    Offers distance education opportunities    Offers counseling services
    398    Offers distance education opportunities    Offers counseling services
    399    Offers distance education opportunities    Offers counseling services
    400    Offers distance education opportunities    Offers counseling services
    401    Offers distance education opportunities    Offers counseling services
    402    Offers distance education opportunities    Offers counseling services
    403    Offers distance education opportunities    Offers counseling services
    404 Offers no distance education opportunities    Offers counseling services
    405    Offers distance education opportunities    Offers counseling services
    406    Offers distance education opportunities    Offers counseling services
    407    Offers distance education opportunities    Offers counseling services
    408    Offers distance education opportunities    Offers counseling services
    409    Offers distance education opportunities    Offers counseling services
    410    Offers distance education opportunities    Offers counseling services
    411 Offers no distance education opportunities    Offers counseling services
    412    Offers distance education opportunities    Offers counseling services
    413    Offers distance education opportunities    Offers counseling services
    414    Offers distance education opportunities    Offers counseling services
    415    Offers distance education opportunities    Offers counseling services
    416    Offers distance education opportunities    Offers counseling services
    417    Offers distance education opportunities    Offers counseling services
    418    Offers distance education opportunities    Offers counseling services
    419    Offers distance education opportunities    Offers counseling services
    420    Offers distance education opportunities    Offers counseling services
    421    Offers distance education opportunities    Offers counseling services
    422    Offers distance education opportunities    Offers counseling services
    423    Offers distance education opportunities    Offers counseling services
                  Employment Services           Daycare Services Live On-Campus
    1      Offers employment services Offers no daycare services              2
    2   Offers no employment services Offers no daycare services              2
    3      Offers employment services Offers no daycare services              2
    4      Offers employment services Offers no daycare services              2
    5   Offers no employment services Offers no daycare services              2
    6      Offers employment services    Offers daycare services              2
    7      Offers employment services Offers no daycare services              2
    8      Offers employment services    Offers daycare services              2
    9      Offers employment services Offers no daycare services              2
    10     Offers employment services Offers no daycare services              2
    11     Offers employment services Offers no daycare services              2
    12     Offers employment services Offers no daycare services              2
    13     Offers employment services Offers no daycare services              2
    14     Offers employment services    Offers daycare services              2
    15     Offers employment services    Offers daycare services              2
    16     Offers employment services    Offers daycare services              2
    17  Offers no employment services Offers no daycare services             -2
    18     Offers employment services Offers no daycare services              2
    19     Offers employment services Offers no daycare services              2
    20     Offers employment services    Offers daycare services              2
    21     Offers employment services Offers no daycare services              2
    22     Offers employment services Offers no daycare services              2
    23     Offers employment services Offers no daycare services              2
    24     Offers employment services Offers no daycare services              2
    25     Offers employment services Offers no daycare services              2
    26     Offers employment services Offers no daycare services              2
    27     Offers employment services Offers no daycare services              2
    28     Offers employment services Offers no daycare services              2
    29     Offers employment services Offers no daycare services              2
    30     Offers employment services Offers no daycare services             -2
    31     Offers employment services    Offers daycare services              2
    32     Offers employment services Offers no daycare services              2
    33     Offers employment services Offers no daycare services              2
    34     Offers employment services Offers no daycare services              2
    35     Offers employment services Offers no daycare services             -2
    36     Offers employment services Offers no daycare services              2
    37     Offers employment services Offers no daycare services              2
    38     Offers employment services Offers no daycare services             -2
    39     Offers employment services Offers no daycare services             -2
    40     Offers employment services    Offers daycare services              2
    41     Offers employment services Offers no daycare services              2
    42     Offers employment services    Offers daycare services              2
    43     Offers employment services    Offers daycare services              1
    44     Offers employment services Offers no daycare services              2
    45  Offers no employment services Offers no daycare services             -2
    46     Offers employment services Offers no daycare services              2
    47  Offers no employment services Offers no daycare services              2
    48     Offers employment services Offers no daycare services              2
    49     Offers employment services Offers no daycare services              2
    50     Offers employment services    Offers daycare services              2
    51     Offers employment services Offers no daycare services              2
    52     Offers employment services Offers no daycare services              2
    53     Offers employment services Offers no daycare services              2
    54     Offers employment services Offers no daycare services              2
    55     Offers employment services    Offers daycare services              2
    56  Offers no employment services Offers no daycare services              2
    57     Offers employment services Offers no daycare services              2
    58     Offers employment services Offers no daycare services              2
    59     Offers employment services    Offers daycare services              2
    60  Offers no employment services    Offers daycare services              2
    61     Offers employment services Offers no daycare services              2
    62     Offers employment services    Offers daycare services              2
    63     Offers employment services Offers no daycare services              2
    64     Offers employment services Offers no daycare services              2
    65     Offers employment services Offers no daycare services              2
    66     Offers employment services Offers no daycare services              2
    67     Offers employment services    Offers daycare services              2
    68     Offers employment services Offers no daycare services              2
    69     Offers employment services Offers no daycare services              2
    70     Offers employment services Offers no daycare services              2
    71     Offers employment services Offers no daycare services              2
    72     Offers employment services    Offers daycare services              2
    73     Offers employment services Offers no daycare services              1
    74     Offers employment services Offers no daycare services              2
    75     Offers employment services    Offers daycare services              2
    76     Offers employment services Offers no daycare services              2
    77     Offers employment services Offers no daycare services              2
    78  Offers no employment services Offers no daycare services              2
    79     Offers employment services Offers no daycare services              2
    80     Offers employment services Offers no daycare services              2
    81     Offers employment services Offers no daycare services              2
    82     Offers employment services Offers no daycare services              2
    83     Offers employment services Offers no daycare services              2
    84     Offers employment services Offers no daycare services              2
    85     Offers employment services    Offers daycare services              2
    86     Offers employment services    Offers daycare services              2
    87     Offers employment services Offers no daycare services              2
    88  Offers no employment services Offers no daycare services              2
    89     Offers employment services Offers no daycare services              2
    90     Offers employment services Offers no daycare services              2
    91     Offers employment services Offers no daycare services              2
    92     Offers employment services Offers no daycare services              2
    93     Offers employment services Offers no daycare services              2
    94     Offers employment services    Offers daycare services              2
    95     Offers employment services Offers no daycare services              2
    96     Offers employment services Offers no daycare services              2
    97     Offers employment services Offers no daycare services              2
    98     Offers employment services Offers no daycare services              2
    99     Offers employment services Offers no daycare services              2
    100    Offers employment services Offers no daycare services              2
    101    Offers employment services Offers no daycare services              2
    102    Offers employment services Offers no daycare services              2
    103    Offers employment services Offers no daycare services              2
    104    Offers employment services Offers no daycare services              2
    105    Offers employment services Offers no daycare services              2
    106    Offers employment services    Offers daycare services              2
    107    Offers employment services    Offers daycare services              2
    108    Offers employment services    Offers daycare services              2
    109    Offers employment services Offers no daycare services              2
    110    Offers employment services Offers no daycare services              2
    111    Offers employment services Offers no daycare services              2
    112    Offers employment services Offers no daycare services              2
    113    Offers employment services Offers no daycare services              2
    114    Offers employment services    Offers daycare services              2
    115    Offers employment services    Offers daycare services              2
    116    Offers employment services    Offers daycare services              2
    117    Offers employment services    Offers daycare services              2
    118    Offers employment services Offers no daycare services              2
    119    Offers employment services Offers no daycare services              2
    120    Offers employment services Offers no daycare services              2
    121    Offers employment services Offers no daycare services              2
    122    Offers employment services Offers no daycare services              2
    123    Offers employment services Offers no daycare services              2
    124    Offers employment services Offers no daycare services              2
    125    Offers employment services    Offers daycare services              2
    126    Offers employment services    Offers daycare services              2
    127    Offers employment services Offers no daycare services              2
    128    Offers employment services Offers no daycare services              2
    129    Offers employment services Offers no daycare services              2
    130    Offers employment services Offers no daycare services              2
    131    Offers employment services Offers no daycare services              2
    132    Offers employment services Offers no daycare services              2
    133    Offers employment services Offers no daycare services              2
    134    Offers employment services Offers no daycare services              2
    135    Offers employment services Offers no daycare services              1
    136    Offers employment services    Offers daycare services              2
    137    Offers employment services Offers no daycare services              2
    138    Offers employment services Offers no daycare services             -2
    139    Offers employment services    Offers daycare services              2
    140    Offers employment services Offers no daycare services              2
    141    Offers employment services Offers no daycare services              2
    142 Offers no employment services Offers no daycare services              2
    143    Offers employment services Offers no daycare services              2
    144    Offers employment services Offers no daycare services              2
    145    Offers employment services    Offers daycare services              2
    146    Offers employment services Offers no daycare services              2
    147    Offers employment services    Offers daycare services              2
    148    Offers employment services Offers no daycare services              2
    149 Offers no employment services Offers no daycare services              2
    150    Offers employment services Offers no daycare services              2
    151 Offers no employment services Offers no daycare services              2
    152    Offers employment services Offers no daycare services              2
    153    Offers employment services Offers no daycare services              1
    154    Offers employment services    Offers daycare services              1
    155    Offers employment services Offers no daycare services              2
    156    Offers employment services    Offers daycare services              2
    157    Offers employment services Offers no daycare services              2
    158    Offers employment services    Offers daycare services              2
    159    Offers employment services Offers no daycare services              2
    160    Offers employment services Offers no daycare services              2
    161    Offers employment services Offers no daycare services              2
    162    Offers employment services Offers no daycare services              2
    163    Offers employment services    Offers daycare services              2
    164    Offers employment services Offers no daycare services              2
    165    Offers employment services Offers no daycare services              2
    166    Offers employment services    Offers daycare services              2
    167    Offers employment services Offers no daycare services              2
    168    Offers employment services Offers no daycare services              2
    169    Offers employment services Offers no daycare services              2
    170    Offers employment services Offers no daycare services              2
    171    Offers employment services Offers no daycare services              2
    172    Offers employment services Offers no daycare services              2
    173    Offers employment services Offers no daycare services              2
    174    Offers employment services Offers no daycare services              2
    175    Offers employment services Offers no daycare services              2
    176    Offers employment services    Offers daycare services              2
    177    Offers employment services Offers no daycare services              2
    178    Offers employment services Offers no daycare services              2
    179    Offers employment services Offers no daycare services              2
    180    Offers employment services Offers no daycare services              2
    181    Offers employment services Offers no daycare services              1
    182    Offers employment services Offers no daycare services              2
    183    Offers employment services Offers no daycare services              2
    184    Offers employment services Offers no daycare services              1
    185    Offers employment services Offers no daycare services              1
    186    Offers employment services Offers no daycare services              2
    187    Offers employment services Offers no daycare services              2
    188    Offers employment services Offers no daycare services              2
    189    Offers employment services Offers no daycare services              2
    190    Offers employment services    Offers daycare services              2
    191    Offers employment services    Offers daycare services              2
    192 Offers no employment services Offers no daycare services              2
    193    Offers employment services Offers no daycare services              2
    194    Offers employment services Offers no daycare services              2
    195    Offers employment services Offers no daycare services              2
    196    Offers employment services    Offers daycare services              2
    197    Offers employment services    Offers daycare services              2
    198    Offers employment services Offers no daycare services              2
    199    Offers employment services Offers no daycare services              2
    200    Offers employment services Offers no daycare services              2
    201    Offers employment services Offers no daycare services              2
    202    Offers employment services Offers no daycare services              2
    203    Offers employment services    Offers daycare services              2
    204    Offers employment services Offers no daycare services              2
    205    Offers employment services    Offers daycare services              2
    206    Offers employment services Offers no daycare services              2
    207    Offers employment services Offers no daycare services              2
    208    Offers employment services    Offers daycare services              2
    209    Offers employment services    Offers daycare services              2
    210    Offers employment services Offers no daycare services              2
    211    Offers employment services Offers no daycare services              2
    212    Offers employment services Offers no daycare services              2
    213    Offers employment services    Offers daycare services              2
    214    Offers employment services    Offers daycare services              2
    215    Offers employment services Offers no daycare services              2
    216    Offers employment services Offers no daycare services              2
    217    Offers employment services Offers no daycare services              2
    218    Offers employment services Offers no daycare services              2
    219    Offers employment services Offers no daycare services              1
    220    Offers employment services Offers no daycare services              1
    221    Offers employment services Offers no daycare services              2
    222    Offers employment services Offers no daycare services              2
    223    Offers employment services Offers no daycare services              2
    224    Offers employment services Offers no daycare services              2
    225    Offers employment services Offers no daycare services              2
    226    Offers employment services Offers no daycare services              2
    227    Offers employment services Offers no daycare services              2
    228    Offers employment services Offers no daycare services              2
    229    Offers employment services Offers no daycare services              2
    230    Offers employment services Offers no daycare services              2
    231    Offers employment services Offers no daycare services              2
    232    Offers employment services Offers no daycare services              2
    233    Offers employment services Offers no daycare services              2
    234    Offers employment services    Offers daycare services              2
    235    Offers employment services    Offers daycare services             -2
    236    Offers employment services    Offers daycare services             -2
    237    Offers employment services    Offers daycare services              2
    238    Offers employment services Offers no daycare services              2
    239 Offers no employment services Offers no daycare services              2
    240 Offers no employment services Offers no daycare services              1
    241    Offers employment services Offers no daycare services              2
    242    Offers employment services Offers no daycare services              2
    243    Offers employment services Offers no daycare services              2
    244    Offers employment services Offers no daycare services              2
    245    Offers employment services Offers no daycare services              2
    246    Offers employment services Offers no daycare services              2
    247    Offers employment services    Offers daycare services              2
    248    Offers employment services    Offers daycare services              2
    249    Offers employment services Offers no daycare services              2
    250    Offers employment services Offers no daycare services              2
    251    Offers employment services Offers no daycare services              2
    252 Offers no employment services Offers no daycare services              2
    253    Offers employment services Offers no daycare services              2
    254    Offers employment services    Offers daycare services              2
    255 Offers no employment services Offers no daycare services              2
    256 Offers no employment services Offers no daycare services              2
    257    Offers employment services Offers no daycare services              1
    258    Offers employment services    Offers daycare services              2
    259    Offers employment services Offers no daycare services              2
    260    Offers employment services Offers no daycare services              2
    261    Offers employment services Offers no daycare services              2
    262    Offers employment services Offers no daycare services              2
    263    Offers employment services Offers no daycare services              2
    264    Offers employment services Offers no daycare services              2
    265    Offers employment services Offers no daycare services              2
    266    Offers employment services Offers no daycare services              2
    267 Offers no employment services Offers no daycare services              2
    268    Offers employment services    Offers daycare services             -2
    269    Offers employment services Offers no daycare services              2
    270    Offers employment services Offers no daycare services              2
    271 Offers no employment services Offers no daycare services              2
    272    Offers employment services Offers no daycare services              2
    273    Offers employment services Offers no daycare services              2
    274 Offers no employment services Offers no daycare services             -2
    275    Offers employment services Offers no daycare services              2
    276    Offers employment services Offers no daycare services              2
    277    Offers employment services    Offers daycare services              2
    278    Offers employment services Offers no daycare services              2
    279    Offers employment services Offers no daycare services              2
    280    Offers employment services Offers no daycare services              1
    281    Offers employment services Offers no daycare services              2
    282    Offers employment services Offers no daycare services              2
    283    Offers employment services Offers no daycare services              2
    284 Offers no employment services Offers no daycare services              2
    285    Offers employment services Offers no daycare services              1
    286    Offers employment services Offers no daycare services              2
    287    Offers employment services Offers no daycare services              2
    288    Offers employment services Offers no daycare services              2
    289 Offers no employment services Offers no daycare services              2
    290    Offers employment services Offers no daycare services             -2
    291    Offers employment services Offers no daycare services              2
    292    Offers employment services Offers no daycare services              2
    293    Offers employment services Offers no daycare services              1
    294    Offers employment services Offers no daycare services              2
    295    Offers employment services Offers no daycare services              2
    296    Offers employment services Offers no daycare services              2
    297    Offers employment services Offers no daycare services              2
    298    Offers employment services Offers no daycare services              2
    299    Offers employment services Offers no daycare services              2
    300    Offers employment services    Offers daycare services              2
    301    Offers employment services Offers no daycare services              2
    302    Offers employment services Offers no daycare services              2
    303    Offers employment services Offers no daycare services              2
    304    Offers employment services Offers no daycare services              2
    305    Offers employment services Offers no daycare services              2
    306    Offers employment services Offers no daycare services              2
    307    Offers employment services Offers no daycare services              2
    308 Offers no employment services Offers no daycare services              2
    309 Offers no employment services Offers no daycare services              2
    310    Offers employment services Offers no daycare services              2
    311    Offers employment services Offers no daycare services              2
    312 Offers no employment services Offers no daycare services             -2
    313    Offers employment services Offers no daycare services              2
    314    Offers employment services    Offers daycare services              2
    315    Offers employment services Offers no daycare services              2
    316    Offers employment services Offers no daycare services              2
    317    Offers employment services Offers no daycare services              2
    318    Offers employment services Offers no daycare services              2
    319    Offers employment services Offers no daycare services              2
    320    Offers employment services Offers no daycare services              2
    321    Offers employment services Offers no daycare services              2
    322    Offers employment services Offers no daycare services              2
    323 Offers no employment services Offers no daycare services              2
    324    Offers employment services    Offers daycare services              2
    325    Offers employment services Offers no daycare services              2
    326    Offers employment services Offers no daycare services              2
    327    Offers employment services Offers no daycare services              2
    328    Offers employment services Offers no daycare services              2
    329    Offers employment services Offers no daycare services              2
    330    Offers employment services    Offers daycare services              2
    331    Offers employment services Offers no daycare services             -2
    332    Offers employment services Offers no daycare services              2
    333    Offers employment services Offers no daycare services              2
    334    Offers employment services Offers no daycare services              2
    335    Offers employment services Offers no daycare services              2
    336    Offers employment services Offers no daycare services              1
    337    Offers employment services    Offers daycare services              2
    338    Offers employment services Offers no daycare services              2
    339    Offers employment services Offers no daycare services              2
    340    Offers employment services Offers no daycare services              2
    341    Offers employment services Offers no daycare services              2
    342    Offers employment services Offers no daycare services              2
    343    Offers employment services Offers no daycare services              2
    344    Offers employment services Offers no daycare services             -2
    345    Offers employment services    Offers daycare services              2
    346    Offers employment services    Offers daycare services              2
    347    Offers employment services Offers no daycare services              2
    348    Offers employment services Offers no daycare services              2
    349    Offers employment services Offers no daycare services              2
    350    Offers employment services Offers no daycare services              2
    351    Offers employment services Offers no daycare services              2
    352    Offers employment services Offers no daycare services              2
    353    Offers employment services Offers no daycare services              2
    354    Offers employment services Offers no daycare services              2
    355 Offers no employment services Offers no daycare services              2
    356    Offers employment services Offers no daycare services              2
    357    Offers employment services Offers no daycare services              2
    358    Offers employment services Offers no daycare services              2
    359 Offers no employment services    Offers daycare services              2
    360    Offers employment services    Offers daycare services              2
    361    Offers employment services Offers no daycare services              2
    362    Offers employment services Offers no daycare services              2
    363    Offers employment services Offers no daycare services              2
    364    Offers employment services Offers no daycare services              2
    365    Offers employment services Offers no daycare services              2
    366    Offers employment services Offers no daycare services              2
    367 Offers no employment services Offers no daycare services              2
    368    Offers employment services Offers no daycare services              2
    369    Offers employment services Offers no daycare services              2
    370 Offers no employment services Offers no daycare services              2
    371 Offers no employment services Offers no daycare services              2
    372 Offers no employment services Offers no daycare services              2
    373    Offers employment services Offers no daycare services              2
    374 Offers no employment services Offers no daycare services              2
    375    Offers employment services    Offers daycare services              2
    376    Offers employment services Offers no daycare services              2
    377    Offers employment services    Offers daycare services              2
    378    Offers employment services Offers no daycare services              2
    379    Offers employment services Offers no daycare services              2
    380    Offers employment services Offers no daycare services              2
    381    Offers employment services Offers no daycare services             -2
    382    Offers employment services Offers no daycare services              2
    383    Offers employment services Offers no daycare services              2
    384    Offers employment services    Offers daycare services              2
    385    Offers employment services Offers no daycare services              2
    386    Offers employment services Offers no daycare services              2
    387    Offers employment services Offers no daycare services              2
    388    Offers employment services Offers no daycare services              2
    389    Offers employment services Offers no daycare services              2
    390    Offers employment services    Offers daycare services              2
    391 Offers no employment services Offers no daycare services              2
    392    Offers employment services Offers no daycare services              2
    393 Offers no employment services Offers no daycare services              2
    394    Offers employment services Offers no daycare services              2
    395    Offers employment services Offers no daycare services              2
    396    Offers employment services Offers no daycare services             -2
    397    Offers employment services Offers no daycare services              2
    398    Offers employment services Offers no daycare services              2
    399 Offers no employment services Offers no daycare services              2
    400    Offers employment services Offers no daycare services              2
    401    Offers employment services Offers no daycare services              2
    402    Offers employment services Offers no daycare services              2
    403    Offers employment services    Offers daycare services              2
    404    Offers employment services Offers no daycare services              2
    405    Offers employment services    Offers daycare services              2
    406    Offers employment services Offers no daycare services              2
    407 Offers no employment services Offers no daycare services              2
    408 Offers no employment services Offers no daycare services              2
    409    Offers employment services Offers no daycare services              2
    410 Offers no employment services Offers no daycare services              2
    411    Offers employment services Offers no daycare services              2
    412    Offers employment services Offers no daycare services              2
    413    Offers employment services Offers no daycare services              2
    414    Offers employment services Offers no daycare services              2
    415    Offers employment services Offers no daycare services              2
    416    Offers employment services Offers no daycare services              2
    417    Offers employment services Offers no daycare services              2
    418    Offers employment services    Offers daycare services              2
    419    Offers employment services Offers no daycare services              2
    420    Offers employment services Offers no daycare services              2
    421    Offers employment services Offers no daycare services              2
    422 Offers no employment services Offers no daycare services             -2
    423    Offers employment services Offers no daycare services              2
        Room Price Board Price Undergraduate Application Fee
    1         3500        2550                            25
    2            .           .                             0
    3            .           .                             0
    4         3000        1760                             0
    5         4182        3166                             0
    6         4692        4958                            25
    7            .           .                             0
    8            .           .                             0
    9            .           .                            25
    10           .           .                             0
    11        4540        5304                            25
    12           .           .                             0
    13           .           .                             0
    14        3000        4300                             0
    15           .           .                             0
    16        1280        2960                            20
    17           .           .                            50
    18           .           .                            50
    19           .           .                             0
    20        4600        3872                            30
    21           .           .                             0
    22           .           .                             0
    23           .           .                            50
    24           .           .                             0
    25       13057        5536                            70
    26        7890        6705                            25
    27           .           .                            65
    28        7040        5769                            70
    29        9300        8000                            70
    30           .           .                             .
    31           .           .                             0
    32        8702        6932                             0
    33           .           .                            25
    34           .           .                             0
    35           .           .                            40
    36        6944        6149                             0
    37        4740        4050                             0
    38        4380           .                            60
    39           .           .                            50
    40           .           .                             0
    41           .           .                            50
    42           .           .                             0
    43        9450        8030                            65
    44           .           .                            50
    45           .           .                             0
    46           .           .                            55
    47           .           .                             0
    48           .           .                            55
    49       10304        7516                            70
    50           .           .                             0
    51       11152        4188                            50
    52           .           .                             0
    53           .           .                            60
    54        6020        5430                            45
    55           .           .                             0
    56           .           .                             0
    57        8054        6824                            50
    58        8259        5072                            85
    59        3916        5000                            30
    60        7992        5400                             0
    61           .           .                             0
    62           .           .                             0
    63           .           .                             0
    64        9410        6880                             0
    65        4500        1700                            50
    66        8270        6164                            50
    67           .           .                            20
    68           .           .                             0
    69           .           .                            20
    70        6896        5346                            50
    71        9960        5340                            65
    72           .           .                             0
    73           .           .                            55
    74        7490        4628                            35
    75           .           .                            35
    76        7968        6960                            50
    77        3760        7160                             0
    78        7376        2520                            25
    79        3788        4222                            25
    80        4400           .                            20
    81           .           .                            20
    82        5696        5026                            50
    83        9250        5790                            50
    84        6270        6780                             0
    85           .           .                            25
    86           .           .                            25
    87        4500        4000                             0
    88           .           .                            20
    89        5878        4220                            35
    90           .           .                            25
    91           .           .                             0
    92           .           .                            25
    93        6520        3144                            20
    94        4722        3650                            20
    95        6025        3142                            30
    96        8000        6400                            50
    97       10194        4078                            50
    98           .           .                            25
    99        3812        3950                             0
    100       5000        4400                            25
    101          .           .                            40
    102          .           .                            25
    103       7780        6830                            50
    104       3544        5452                            50
    105          .           .                            50
    106          .           .                            25
    107          .           .                            25
    108          .           .                            25
    109          .           .                            50
    110          .           .                            25
    111      13100        2480                            65
    112          .           .                            50
    113          .           .                            25
    114          .           .                             0
    115          .           .                             0
    116          .           .                             0
    117       7468        3000                            25
    118       7414        4426                             0
    119          .           .                            50
    120       5274        5680                             0
    121       6730        4980                            50
    122       7998        3794                            25
    123          .           .                             0
    124       9975        4700                            40
    125          .           .                            25
    126       7460        4200                            50
    127          .           .                             0
    128       6000        4065                            50
    129          .           .                             0
    130       8188        4140                             0
    131          .           .                            35
    132          .           .                            35
    133       9441        6249                            60
    134       4840        5334                            30
    135       6548        7316                             0
    136       3400        4000                            20
    137       2810        2400                             0
    138          .           .                             .
    139       3772        3492                             0
    140       3340        3340                            30
    141       4600        3000                             0
    142          .           .                             0
    143       6156        4184                            36
    144          .           .                             0
    145       4950        3000                            20
    146       7140        3294                            25
    147       7688        5918                             0
    148       7400           .                             0
    149          .           .                            35
    150       6480        2680                            20
    151          .           .                            20
    152          .           .                             0
    153          .           .                            60
    154       6451        6989                            65
    155       7910        7385                             0
    156          .           .                             0
    157          .           .                            35
    158       5985        4670                            50
    159       5700        5384                            45
    160       7688        7028                            55
    161       6600        6410                             0
    162      11790        3260                            70
    163       5514        4571                            35
    164      13950        5000                            75
    165       5800        4000                             0
    166       9020        4400                            50
    167          .           .                             0
    168          .           .                            70
    169       7860        8160                            60
    170          .           .                             0
    171          .           .                             0
    172       9400        9360                             0
    173       9194        8578                             0
    174      11766        3200                            50
    175       7764        6614                            60
    176       5040        4500                            30
    177          .           .                            25
    178          .           .                             0
    179          .           .                             0
    180       5900        6010                            35
    181       5121        5409                             0
    182       7300        3600                            30
    183       5740        5146                             0
    184       7995        7152                             0
    185       7026        6058                            40
    186       5590        6070                             0
    187       7360        3428                             0
    188       1800        2620                             0
    189       4505        3480                            25
    190       4386        3612                             0
    191       6941        2750                             0
    192       5472        3650                             0
    193       3900        4310                            25
    194          .           .                            50
    195          .           .                            40
    196       9099        5624                            40
    197          .           .                            30
    198       9166        4872                            50
    199       5712        5712                            40
    200      10020        5480                            50
    201       9904        6046                             0
    202          .           .                            35
    203       2280        3990                             0
    204          .           .                             0
    205          .           .                             0
    206       4588        4320                            25
    207       1650        2750                             0
    208          .           .                            15
    209          .           .                            15
    210          .           .                            20
    211          .           .                            15
    212          .           .                             0
    213          .           .                             0
    214       5900        4380                            30
    215      10880        3300                            40
    216          .           .                            50
    217      10826        7030                            75
    218          .           .                            50
    219       7260        7775                            60
    220       8120        6740                            60
    221          .           .                             0
    222      17346           .                            40
    223          .           .                             0
    224          .           .                            75
    225          .           .                             0
    226       5400        6450                             0
    227          .           .                            25
    228       9422        3872                            50
    229      15300        3800                             0
    230      10420        5400                             0
    231       9178        6346                            65
    232       8100        5400                            50
    233       7162        4860                            50
    234       9098        5450                            50
    235       9410           .                            50
    236      10972           .                            50
    237          .           .                            65
    238          .           .                             0
    239          .           .                             0
    240       7700        7525                            50
    241          .           .                             0
    242          .           .                             0
    243       5117        3666                            30
    244          .           .                             0
    245       4086        3014                            25
    246          .           .                            40
    247          .           .                             0
    248          .           .                             0
    249          .           .                             0
    250          .           .                             0
    251       3432        4510                            35
    252          .           .                             0
    253       3842        4672                            25
    254          .           .                             0
    255       5600        4880                            35
    256       7600        6470                             0
    257       5420        7410                             0
    258          .           .                            35
    259       8600        8734                             0
    260          .           .                            60
    261       6190        6560                             0
    262       2310        3360                            20
    263       4508        3120                             0
    264          .           .                            15
    265       5868           .                            25
    266       7163        3350                             0
    267       2300        3498                             0
    268       5970           .                            50
    269       4050        4600                            35
    270       5490        3485                             0
    271          .           .                            15
    272       6976        6056                            50
    273       7566        5868                             0
    274          .           .                            55
    275       7404        6016                            40
    276          .           .                            50
    277       7970        7360                             0
    278       7000        6480                             0
    279       9000        5050                            30
    280       9760        7340                            50
    281          .           .                            35
    282       5960        5244                            35
    283       8550        5900                            60
    284      10086        6980                            65
    285      10056        6207                            65
    286       4242        3712                             0
    287          .           .                            50
    288      11380        6250                            60
    289       5857        5330                            25
    290          .           .                             .
    291      10821        6773                             0
    292       5826        3786                             0
    293       8542        8112                            60
    294          .           .                            60
    295          .           .                             0
    296          .           .                             0
    297          .           .                            25
    298       4152        4920                            25
    299       4030        5450                            30
    300          .           .                             0
    301       5744        4785                            25
    302          .           .                             0
    303          .           .                            40
    304          .           .                            40
    305       6600        3290                            25
    306          .           .                             0
    307          .           .                             0
    308       1575           .                             0
    309       4760        2850                             0
    310          .           .                             0
    311       4720        3450                            25
    312          .           .                             0
    313          .           .                             0
    314          .           .                             0
    315       7490        5460                            25
    316       6416        4384                            30
    317          .           .                           100
    318       3000        3923                             0
    319       4850        4280                             0
    320       4850        4295                            25
    321       4406        4043                            25
    322          .           .                             0
    323          .           .                             0
    324       2200        3050                             0
    325       6020        4222                             0
    326       8322        5590                            50
    327       5880        3590                             0
    328       7520        4530                             0
    329       6110        5650                             0
    330       5938        3388                            50
    331          .           .                           100
    332       4950        4780                             0
    333       8690        5733                             0
    334       3520        5188                            35
    335          .           .                            35
    336          .           .                            65
    337          .           .                             0
    338       6432        5934                            50
    339       6848        5090                            50
    340          .           .                             0
    341       6300        7130                            50
    342       6744        4800                             0
    343       3976        4858                            25
    344       9810         600                            50
    345       8914        3821                            50
    346          .           .                             0
    347          .           .                            30
    348       5860        6550                             0
    349       6921        5766                            50
    350       6080        7720                            50
    351       5652        5325                             0
    352       4835        2828                            25
    353          .           .                             0
    354          .           .                             0
    355          .           .                             0
    356       2268        1600                            52
    357          .           .                            25
    358       1600        4600                            20
    359       2700           .                            25
    360       1200           .                             0
    361          .           .                             0
    362          .           .                             0
    363          .           .                             0
    364          .           .                             0
    365       4000           .                             0
    366          .           .                            30
    367          .           .                            30
    368          .           .                            30
    369          .           .                            30
    370          .           .                            30
    371          .           .                             0
    372          .           .                             0
    373       3100           .                            15
    374       4950           .                            30
    375       4500        5780                            25
    376          .           .                            50
    377          .           .                            15
    378          .           .                            25
    379       4456        3936                             0
    380          .           .                             0
    381          .           .                             .
    382          .           .                            25
    383        740          80                             5
    384       3544        5452                            25
    385          .           .                            50
    386          .           .                             0
    387          .           .                            25
    388          .           .                             0
    389          .           .                             0
    390          .           .                             0
    391          .           .                             0
    392          .           .                             0
    393          .           .                             0
    394          .           .                             0
    395      10537        4408                             0
    396          .           .                            90
    397          .           .                           100
    398       7500           .                             0
    399          .           .                             0
    400          .           .                             0
    401          .           .                             0
    402          .           .                             0
    403          .           .                             0
    404          .           .                            50
    405          .           .                             0
    406          .           .                            50
    407          .           .                             0
    408          .           .                             0
    409          .           .                            25
    410          .           .                             0
    411          .           .                            65
    412          .           .                             0
    413          .           .                            30
    414          .           .                            30
    415          .           .                            30
    416          .           .                            30
    417          .           .                            30
    418          .           .                             0
    419          .           .                           200
    420       6010        3292                            40
    421          .           .                            25
    422          .           .                            75
    423       6000           .                            30
        Graduate Application Fee
    1                         25
    2                          .
    3                          .
    4                          .
    5                          .
    6                        100
    7                          .
    8                          .
    9                         75
    10                         .
    11                        35
    12                         .
    13                         .
    14                         .
    15                         .
    16                         .
    17                        75
    18                         .
    19                         .
    20                        45
    21                         .
    22                         .
    23                        50
    24                         .
    25                        70
    26                        50
    27                        65
    28                        70
    29                         0
    30                        53
    31                         .
    32                         0
    33                        25
    34                         .
    35                        70
    36                         0
    37                         0
    38                        60
    39                        50
    40                         .
    41                        50
    42                         .
    43                        60
    44                        50
    45                        80
    46                        55
    47                         .
    48                        50
    49                         .
    50                         .
    51                        50
    52                         .
    53                        50
    54                        45
    55                         .
    56                         .
    57                        70
    58                        85
    59                        30
    60                         0
    61                         .
    62                         .
    63                         0
    64                         .
    65                        50
    66                        50
    67                         .
    68                         .
    69                         .
    70                        50
    71                        75
    72                         .
    73                         0
    74                        50
    75                        50
    76                        75
    77                         0
    78                        50
    79                         .
    80                       100
    81                         .
    82                        50
    83                        50
    84                         0
    85                         .
    86                         .
    87                         0
    88                         .
    89                        40
    90                         .
    91                         0
    92                         .
    93                         .
    94                        20
    95                         .
    96                        50
    97                         .
    98                         .
    99                        25
    100                       25
    101                        .
    102                        .
    103                       40
    104                       50
    105                       50
    106                        .
    107                        .
    108                        .
    109                        .
    110                        .
    111                       45
    112                       50
    113                       30
    114                        .
    115                        .
    116                        .
    117                       50
    118                        .
    119                       50
    120                       50
    121                       50
    122                        0
    123                        .
    124                       40
    125                       25
    126                       60
    127                        .
    128                       30
    129                        .
    130                        0
    131                       40
    132                       40
    133                       75
    134                        .
    135                        .
    136                       20
    137                        .
    138                       50
    139                        .
    140                       30
    141                       30
    142                        .
    143                        .
    144                        .
    145                        .
    146                        .
    147                        0
    148                        0
    149                       50
    150                       25
    151                        .
    152                       30
    153                        .
    154                        .
    155                        .
    156                        .
    157                       50
    158                       50
    159                       45
    160                        0
    161                       50
    162                       75
    163                       50
    164                      150
    165                       75
    166                       50
    167                       40
    168                       90
    169                       50
    170                        .
    171                        .
    172                       60
    173                        .
    174                       50
    175                        .
    176                       60
    177                        .
    178                        0
    179                        0
    180                       25
    181                        .
    182                       50
    183                        0
    184                        .
    185                        .
    186                        .
    187                       10
    188                        .
    189                       30
    190                        0
    191                        .
    192                       30
    193                       25
    194                       50
    195                       40
    196                       40
    197                       40
    198                       50
    199                       40
    200                       50
    201                        0
    202                       35
    203                       50
    204                        .
    205                        .
    206                       25
    207                        .
    208                        .
    209                       16
    210                        .
    211                        .
    212                        0
    213                        .
    214                       40
    215                       75
    216                       65
    217                        .
    218                        .
    219                       50
    220                        .
    221                        0
    222                       40
    223                        .
    224                       75
    225                        0
    226                        0
    227                       40
    228                       50
    229                       75
    230                       60
    231                        0
    232                        .
    233                       60
    234                       85
    235                       75
    236                       65
    237                       65
    238                        .
    239                        .
    240                        .
    241                        .
    242                        .
    243                       30
    244                        .
    245                       40
    246                        .
    247                        .
    248                        .
    249                        .
    250                        .
    251                        .
    252                        .
    253                       50
    254                        .
    255                        .
    256                        .
    257                        .
    258                       50
    259                      100
    260                       60
    261                        .
    262                       20
    263                        .
    264                        .
    265                        .
    266                       25
    267                        .
    268                       50
    269                       35
    270                        0
    271                        .
    272                       55
    273                       50
    274                       75
    275                       40
    276                        0
    277                       75
    278                        0
    279                       50
    280                       50
    281                       55
    282                        0
    283                        .
    284                        .
    285                        .
    286                       50
    287                       50
    288                       60
    289                       25
    290                       50
    291                        0
    292                        .
    293                        .
    294                       60
    295                        .
    296                        .
    297                       25
    298                       25
    299                       50
    300                        .
    301                        0
    302                        .
    303                        .
    304                        .
    305                       25
    306                        .
    307                        0
    308                       15
    309                        .
    310                       25
    311                       40
    312                        0
    313                        .
    314                        .
    315                       50
    316                       30
    317                        .
    318                        .
    319                        0
    320                       25
    321                      100
    322                        .
    323                        .
    324                        .
    325                       40
    326                       50
    327                       35
    328                        0
    329                        .
    330                       25
    331                      120
    332                       68
    333                       50
    334                       50
    335                        .
    336                       75
    337                        .
    338                       50
    339                       50
    340                        .
    341                       50
    342                        0
    343                       25
    344                       50
    345                       50
    346                        .
    347                        .
    348                       50
    349                       50
    350                        .
    351                        .
    352                       56
    353                        0
    354                        .
    355                        .
    356                       52
    357                        .
    358                       25
    359                       30
    360                       31
    361                       31
    362                       31
    363                       31
    364                       31
    365                       31
    366                        .
    367                        .
    368                        .
    369                        .
    370                        .
    371                        .
    372                        .
    373                       25
    374                       50
    375                       25
    376                       50
    377                       25
    378                        .
    379                        0
    380                        .
    381                      100
    382                        .
    383                        .
    384                        .
    385                       50
    386                        .
    387                        .
    388                        .
    389                        .
    390                        0
    391                        .
    392                        0
    393                        0
    394                        .
    395                        0
    396                      100
    397                        .
    398                        0
    399                        0
    400                        0
    401                        .
    402                        .
    403                        .
    404                        .
    405                        .
    406                       50
    407                        .
    408                        0
    409                        .
    410                        0
    411                        .
    412                        0
    413                       30
    414                       30
    415                       30
    416                       30
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

# linelist

<details>

* Version: 1.1.0
* GitHub: https://github.com/epiverse-trace/linelist
* Source code: https://github.com/cran/linelist
* Date/Publication: 2024-02-28 17:30:02 UTC
* Number of recursive dependencies: 60

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
      > test_results <- test_check("linelist")
      Starting 2 test processes
      [ FAIL 0 | WARN 2 | SKIP 9 | PASS 133 ]
      
      ══ Skipped tests (9) ═══════════════════════════════════════════════════════════
      • On CRAN (9): 'test-deprecated.R:5:3', 'test-deprecated.R:13:3',
        'test-deprecated.R:19:3', 'test-deprecated.R:27:3',
        'test-compat-dplyr.R:58:3', 'test-compat-dplyr.R:70:3',
        'test-compat-dplyr.R:139:3', 'test-print.R:3:3', 'test-validate_types.R:26:3'
      
      [ FAIL 0 | WARN 2 | SKIP 9 | PASS 133 ]
      > 
      > if (any(as.data.frame(test_results)$warning > 0)) {
      +   stop("tests failed with warnings")
      + }
      Error: tests failed with warnings
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
      [ FAIL 12 | WARN 83 | SKIP 0 | PASS 574 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_ID.R:90:5'): get_ID_Report works ───────────────────────────────
      Error in `data.frame(..., check.names = FALSE)`: arguments imply differing number of rows: 0, 2
      Backtrace:
          ▆
       1. ├─mpwR::get_ID_Report(input_list = data) at test_ID.R:90:5
       2. │ └─mpwR:::generate_ID_Report(...)
       3. │   ├─cbind(MQ_pg[, -1], ID_Report) %>% reorder_ID_Report(.)
       4. │   └─base::cbind(MQ_pg[, -1], ID_Report)
       5. │     └─base::cbind(deparse.level, ...)
       6. │       └─base::data.frame(..., check.names = FALSE)
       7. └─mpwR:::reorder_ID_Report(.)
      ── Error ('test_Upset.R:106:4'): get_Upset_list works ──────────────────────────
      Error in `group_by(.data, ..., .add = .add, .drop = .drop)`: Must group by variables found in `.data`.
      x Column `ProteinGroup.IDs_mpwR` is not found.
      Backtrace:
           ▆
        1. ├─mpwR::get_Upset_list(input_list = data, level = "ProteinGroup.IDs") at test_Upset.R:106:4
        2. │ └─tidy_MQ_pep_pg(input_list[[i]][["data"]][["pg"]]) %>% ...
        3. ├─mpwR:::prepare_Upset(...)
        4. │ └─... %>% unlist(., use.names = FALSE)
        5. ├─base::unlist(., use.names = FALSE)
        6. ├─dplyr::select(., all_of(level))
        7. ├─dplyr::filter(., .data$n_perc >= percentage_runs)
        8. ├─dplyr::mutate(., n_perc = (n/max(n)) * 100)
        9. ├─dplyr::ungroup(.)
       10. ├─dplyr::count(.)
       11. ├─dplyr::group_by(., .data[[level]])
       12. └─dplyr:::group_by.data.frame(., .data[[level]])
       13.   └─dplyr::group_by(.data, ..., .add = .add, .drop = .drop)
       14.     └─dplyr::group_by_prepare(.data, ..., .add = .add, error_call = current_env())
       15.       └─rlang::abort(bullets, call = error_call)
      ── Error ('test_summary.R:116:2'): get_summary_Report works ────────────────────
      Error in `data.frame(..., check.names = FALSE)`: arguments imply differing number of rows: 0, 3
      Backtrace:
          ▆
       1. ├─mpwR::get_summary_Report(input_list = data) at test_summary.R:116:2
       2. │ └─mpwR:::generate_summary_Report(...)
       3. │   └─mpwR:::generate_ID_Report(...)
       4. │     ├─cbind(MQ_pg[, -1], ID_Report) %>% reorder_ID_Report(.)
       5. │     └─base::cbind(MQ_pg[, -1], ID_Report)
       6. │       └─base::cbind(deparse.level, ...)
       7. │         └─base::data.frame(..., check.names = FALSE)
       8. └─mpwR:::reorder_ID_Report(.)
      ── Failure ('test_utils_helpers.R:117:4'): tidy_MQ_pep_pg works ────────────────
      nrow(output) (`actual`) not equal to 7 (`expected`).
      
        `actual`: 0
      `expected`: 7
      ── Failure ('test_utils_helpers.R:119:4'): tidy_MQ_pep_pg works ────────────────
      output$Run_mpwR (`actual`) not equal to c(...) (`expected`).
      
       actual | expected          
              - "Intensity 01" [1]
              - "Intensity 02" [2]
              - "Intensity 03" [3]
              - "Intensity 01" [4]
              - "Intensity 02" [5]
              - "Intensity 03" [6]
              - "Intensity 01" [7]
      ── Failure ('test_utils_helpers.R:325:4'): tidy_MQ_LFQ works ───────────────────
      nrow(output) (`actual`) not equal to 7 (`expected`).
      
        `actual`: 0
      `expected`: 7
      ── Failure ('test_utils_helpers.R:327:4'): tidy_MQ_LFQ works ───────────────────
      output$Run_mpwR (`actual`) not equal to c(...) (`expected`).
      
       actual | expected              
              - "LFQ Intensity 01" [1]
              - "LFQ Intensity 02" [2]
              - "LFQ Intensity 03" [3]
              - "LFQ Intensity 01" [4]
              - "LFQ Intensity 02" [5]
              - "LFQ Intensity 03" [6]
              - "LFQ Intensity 03" [7]
      ── Failure ('test_utils_helpers.R:332:4'): tidy_MQ_LFQ works ───────────────────
      nrow(output) (`actual`) not equal to 7 (`expected`).
      
        `actual`: 0
      `expected`: 7
      ── Failure ('test_utils_helpers.R:334:4'): tidy_MQ_LFQ works ───────────────────
      output$Run_mpwR (`actual`) not equal to c(...) (`expected`).
      
       actual | expected              
              - "LFQ Intensity 01" [1]
              - "LFQ Intensity 02" [2]
              - "LFQ Intensity 03" [3]
              - "LFQ Intensity 01" [4]
              - "LFQ Intensity 02" [5]
              - "LFQ Intensity 03" [6]
              - "LFQ Intensity 03" [7]
      ── Failure ('test_utils_reports.R:24:4'): generate_DC_Report works ─────────────
      output_MQ$ProteinGroup.IDs (`actual`) not equal to c(0, 33.33, 66.67) (`expected`).
      
        `actual`: 0  0  0
      `expected`: 0 33 67
      ── Error ('test_utils_reports.R:107:4'): generate_ID_Report works ──────────────
      Error in `data.frame(..., check.names = FALSE)`: arguments imply differing number of rows: 0, 3
      Backtrace:
          ▆
       1. ├─mpwR:::generate_ID_Report(...) at test_utils_reports.R:107:4
       2. │ ├─cbind(MQ_pg[, -1], ID_Report) %>% reorder_ID_Report(.)
       3. │ └─base::cbind(MQ_pg[, -1], ID_Report)
       4. │   └─base::cbind(deparse.level, ...)
       5. │     └─base::data.frame(..., check.names = FALSE)
       6. └─mpwR:::reorder_ID_Report(.)
      ── Error ('test_utils_reports.R:322:4'): generate_summary_Report works ─────────
      Error in `data.frame(..., check.names = FALSE)`: arguments imply differing number of rows: 0, 3
      Backtrace:
          ▆
       1. ├─mpwR:::generate_summary_Report(...) at test_utils_reports.R:322:4
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
    
    --- re-building ‘Workflow.Rmd’ using rmarkdown
    
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
* Number of recursive dependencies: 53

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

# myClim

<details>

* Version: 1.1.0
* GitHub: https://github.com/ibot-geoecology/myClim
* Source code: https://github.com/cran/myClim
* Date/Publication: 2024-02-16 11:20:02 UTC
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
    > data1 <- mc_calc_vwc(mc_data_example_agg, soiltype="sand", localities="A2E32")
    Error in `purrr::map()`:
    ℹ In index: 2.
    ℹ With name: A2E32.
    Caused by error in `purrr::pmap()`:
    ℹ In index: 1.
    Caused by error:
    ! Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (TIMESTAMP -> DOUBLE)
    Backtrace:
         ▆
      1. ├─myClim::mc_calc_vwc(mc_data_example_agg, soiltype = "sand", localities = "A2E32")
      2. │ └─purrr::map(data$localities, locality_function)
      3. │   └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      4. │     ├─purrr:::with_indexed_errors(...)
      5. │     │ └─base::withCallingHandlers(...)
      6. │     ├─purrr:::call_with_cleanup(...)
      7. │     └─myClim (local) .f(.x[[i]], ...)
      8. │       └─myClim (local) call_vwc(locality)
      9. │         └─myClim:::.calc_add_vwc_to_item(...)
     10. │           └─purrr::pmap(...)
     11. │             └─purrr:::pmap_("list", .l, .f, ..., .progress = .progress)
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

# omopgenerics

<details>

* Version: 0.0.3
* GitHub: NA
* Source code: https://github.com/cran/omopgenerics
* Date/Publication: 2024-02-23 09:50:02 UTC
* Number of recursive dependencies: 61

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
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 525 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-methodBind.R:53:3'): bind a cohort_set ───────────────────────
      data.frame(settings(newcdm$new_cohort)) (`actual`) not identical to data.frame(dplyr::bind_rows(settings(newcdm$cohort1), settings(newcdm$cohort2))) (`expected`).
      
      `actual$cohort_definition_id` is a double vector (1, 2, 3)
      `expected$cohort_definition_id` is an integer vector (1, 2, 3)
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 525 ]
      Error: Test failures
      Execution halted
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
    > # Load example data
    > data("Pupilex1")
    > 
    > dat <- ppl_prep_data(Pupilex1, Subject = "RECORDING_SESSION_LABEL",
    +                      Item = "item",
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
    
    --- re-building ‘PupilPre_Interpolation_and_Filtering.Rmd’ using rmarkdown
    --- finished re-building ‘PupilPre_Interpolation_and_Filtering.Rmd’
    
    --- re-building ‘PupilPre_Message_Alignment.Rmd’ using rmarkdown
    
    Quitting from lines 36-39 [unnamed-chunk-2] (PupilPre_Message_Alignment.Rmd)
    Error: processing vignette 'PupilPre_Message_Alignment.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Conversion Error: Could not convert string 'factor' to DOUBLE
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

* Version: 1.1.0
* GitHub: https://github.com/s87jackson/rfars
* Source code: https://github.com/cran/rfars
* Date/Publication: 2024-02-15 20:40:02 UTC
* Number of recursive dependencies: 147

Run `revdepcheck::cloud_details(, "rfars")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘Counts.Rmd’ using rmarkdown
    trying URL 'https://static.nhtsa.gov/nhtsa/downloads/FARS/2021/National/FARS2021NationalSAS.zip'
    Content type 'application/x-zip-compressed' length 43216670 bytes (41.2 MB)
    ==================================================
    downloaded 41.2 MB
    
    
    Quitting from lines 36-37 [unnamed-chunk-2] (Counts.Rmd)
    Error: processing vignette 'Counts.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Parser Error: Maximum tree depth of 1000 exceeded in logical planner
    --- failed re-building ‘Counts.Rmd’
    
    --- re-building ‘Crash_sequence_of_events.Rmd’ using rmarkdown
    trying URL 'https://static.nhtsa.gov/nhtsa/downloads/CRSS/2021/CRSS2021SAS.zip'
    Content type 'application/x-zip-compressed' length 62354127 bytes (59.5 MB)
    ==================================================
    downloaded 59.5 MB
    
    
    Quitting from lines 43-46 [unnamed-chunk-2] (Crash_sequence_of_events.Rmd)
    Error: processing vignette 'Crash_sequence_of_events.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Out of Memory Error: could not allocate block of size 102.6MB (1.9GB/2.0GB used)
    --- failed re-building ‘Crash_sequence_of_events.Rmd’
    
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
      
      ══ Skipped tests (19) ══════════════════════════════════════════════════════════
      • On CRAN (19): 'test-metrics.R:345:3', 'test-metrics.R:412:3',
        'test-metrics.R:459:3', 'test-metrics.R:506:3', 'test-metrics.R:605:3',
        'test-metrics.R:672:3', 'test-metrics.R:691:3', 'test-metrics.R:710:3',
        'test-metrics.R:729:3', 'test-metrics.R:748:3', 'test-metrics.R:767:3',
        'test-metrics.R:786:3', 'test-metrics.R:854:3', 'test-metrics.R:879:3',
        'test-metrics.R:968:3', 'test-metrics.R:1001:3', 'test-metrics.R:1035:3',
        'test-metrics.R:1069:3', 'test-sfn_data_classes.R:60:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-sfn_dplyr_methods.R:14:3'): sfn_filter returns correct results ──
      Error in `validObject(.Object)`: invalid class "sfn_data" object: 1: nrow(*_flags) =! nrow(*_flags) | nrow(*_flags) =! nrow(*_data)
      invalid class "sfn_data" object: 2: nrow(sapf_flags) != length(timestamp) | nrow(env_flags) != length(timestamp)
      Backtrace:
           ▆
        1. └─sapfluxnetr::sfn_filter(...) at test-sfn_dplyr_methods.R:14:3
        2.   └─sapfluxnetr::sfn_data(...)
        3.     └─methods::new(`<chr>`, ...)
        4.       ├─methods::initialize(value, ...)
        5.       └─sapfluxnetr::initialize(value, ...)
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
    > 
    > ## model as txt
    > data <- system.file("extdata", "data_utf8.csv", package = "sfc")
    > model <- system.file("extdata", "model_utf8.txt", package = "sfc")
    > sfc(data, model, sample.size = 100, fileEncoding = "UTF-8")
    Read 12 items
    Warning: `funs()` was deprecated in dplyr 0.8.0.
    ℹ Please use a list of either functions or lambdas:
    
    # Simple named list: list(mean = mean, median = median)
    
    # Auto named with `tibble::lst()`: tibble::lst(mean, median)
    
    # Using lambdas list(~ mean(., trim = .2), ~ median(., na.rm = TRUE))
    ℹ The deprecated feature was likely used in the sfc package.
      Please report the issue at <https://github.com/ctfysh/sfc/issues>.
    Warning: `mutate_each()` was deprecated in dplyr 0.7.0.
    ℹ Please use `across()` instead.
    ℹ The deprecated feature was likely used in the sfc package.
      Please report the issue at <https://github.com/ctfysh/sfc/issues>.
    Warning: `arrange_()` was deprecated in dplyr 0.7.0.
    ℹ Please use `arrange()` instead.
    ℹ See vignette('programming') for more help
    ℹ The deprecated feature was likely used in the sfc package.
      Please report the issue at <https://github.com/ctfysh/sfc/issues>.
    Warning: `group_by_()` was deprecated in dplyr 0.7.0.
    ℹ Please use `group_by()` instead.
    ℹ See vignette('programming') for more help
    ℹ The deprecated feature was likely used in the sfc package.
      Please report the issue at <https://github.com/ctfysh/sfc/issues>.
    Joining with `by = join_by(NAME, TIME)`
    Joining with `by = join_by(NAME, TIME.1)`
    Joining with `by = join_by(NAME, TIME.1)`
    Warning: `gather_()` was deprecated in tidyr 1.2.0.
    ℹ Please use `gather()` instead.
    ℹ The deprecated feature was likely used in the sfc package.
      Please report the issue at <https://github.com/ctfysh/sfc/issues>.
    Joining with `by = join_by(TIME, START, END)`
    Joining with `by = join_by(TIME, START, END)`
    Joining with `by = join_by(SAMPLE)`
    Joining with `by = join_by(SAMPLE)`
    $result
        TIME START END       MEAN     MEDIAN        SD        CV         Q05
    1  Y2000     R  Ch  9.1269626  9.2517683 1.2429956 0.1361894  7.66793260
    2  Y2000     R   W  1.1514136  1.1881802 0.7254646 0.6300643  0.11353623
    3  Y2000    Ch  Cr  5.8741947  6.0106524 0.7252518 0.1234640  4.70829274
    4  Y2000    Ch   H  1.5093658  1.3927675 0.5943490 0.3937740  0.75941612
    5  Y2000    Ch   W  3.6823505  3.2043698 2.5496099 0.6923865  0.70029593
    6  Y2000    Cr   H  2.2936131  2.2455357 0.4684950 0.2042607  1.64366752
    7  Y2000    Cr   A  2.0387672  1.9960318 0.4164400 0.2042607  1.46103780
    8  Y2000    Cr   W  1.5418144  1.2537048 1.1618201 0.7535408  0.06372729
    9  Y2000     H   W  5.0187561  5.1526629 0.8465251 0.1686723  3.53567788
    10 Y2000     A   H  1.2157772  1.1577926 0.4021988 0.3308162  0.60041041
    11 Y2000     A   W  0.8229899  0.8034518 0.4084649 0.4963183  0.17524948
    12 Y2000     W  Ch  1.9389484  1.6212669 1.4644213 0.7552658  0.38876502
    13 Y2005     R  Ch 18.7094646 18.8733333 2.7725754 0.1481911 15.02082203
    14 Y2005     R   W  2.0800820  1.7118459 1.8159740 0.8730300  0.38348073
    15 Y2005    Ch  Cr 12.5471519 12.0523163 1.9808909 0.1578757  9.63917845
    16 Y2005    Ch   H  3.4098412  3.2380631 0.9968182 0.2923357  2.12379343
    17 Y2005    Ch   W  6.2753096  4.1279184 6.2608737 0.9976996  0.62792470
    18 Y2005    Cr   H  4.8791345  4.7629587 0.7767956 0.1592077  3.78574028
    19 Y2005    Cr   A  4.3370085  4.2337410 0.6904850 0.1592077  3.36510247
    20 Y2005    Cr   W  3.3310089  3.3154182 1.6408173 0.4925887  1.05670968
    21 Y2005     H   W 10.7780980 10.6997997 1.5527338 0.1440638  8.80351905
    22 Y2005     A   H  2.4891223  2.3441945 0.6369350 0.2558874  1.55974670
    23 Y2005     A   W  1.8478862  1.7468969 0.8755287 0.4738001  0.60618505
    24 Y2005     W  Ch  3.5228381  1.9185925 4.2273265 1.1999775  0.30141239
              Q25       Q75       Q95
    1   8.1874697  9.567497 11.085344
    2   0.7363854  1.534323  2.196282
    3   5.4193253  6.189076  6.998384
    4   0.9878119  2.016307  2.482153
    5   1.4454481  5.151217  8.358092
    6   1.9380896  2.661231  3.003930
    7   1.7227463  2.365539  2.670160
    8   0.6872777  2.240829  3.407917
    9   4.7044875  5.567078  6.196421
    10  0.9460668  1.578352  1.778003
    11  0.6545345  1.087186  1.394128
    12  0.8854977  2.711305  4.497706
    13 16.3421102 20.544892 22.149100
    14  0.6312908  2.786509  5.384330
    15 11.1536712 14.585427 15.124270
    16  2.8817942  3.909479  5.390115
    17  1.8675023  7.866039 19.136737
    18  4.4507047  5.498670  5.905683
    19  3.9561820  4.887707  5.249496
    20  2.3120082  4.183474  5.393350
    21  9.5730370 11.523755 13.636808
    22  2.0897204  2.808258  3.490168
    23  1.3488574  2.440691  3.093050
    24  0.9510200  3.717618 12.013758
    
    $sample.size
    [1] 18
    
    > 
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
      [ FAIL 4 | WARN 2170 | SKIP 4 | PASS 79 ]
      
      ══ Skipped tests (4) ═══════════════════════════════════════════════════════════
      • On CRAN (4): 'test_S3_orivisit.R:31:3', 'test_S3_simaerep.R:4:3',
        'test_eval_sites.R:25:3', 'test_validation.R:53:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_S3_orivisit.R:13:3'): orivisit must retrieve original visit data from parent environment ──
      Error in `!all_equal(df_summary, x$df_summary)`: invalid argument type
      Backtrace:
          ▆
       1. ├─base::as.data.frame(visit_test) at test_S3_orivisit.R:13:3
       2. └─simaerep:::as.data.frame.orivisit(visit_test)
      ── Error ('test_S3_simaerep.R:13:3'): simaerep must retrieve original visit data from parent environment ──
      Error in `!all_equal(df_summary, x$df_summary)`: invalid argument type
      Backtrace:
          ▆
       1. ├─base::as.data.frame(aerep_test$visit) at test_S3_simaerep.R:13:3
       2. └─simaerep:::as.data.frame.orivisit(aerep_test$visit)
      ── Error ('test_S3_simaerep.R:18:3'): plot.simaerep with what='ur' ─────────────
      Error in `!all_equal(df_summary, x$df_summary)`: invalid argument type
      Backtrace:
          ▆
       1. ├─testthat::expect_s3_class(...) at test_S3_simaerep.R:18:3
       2. │ └─testthat::quasi_label(enquo(object), arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. ├─base::plot(aerep_test, what = "ur", study = "A")
       5. └─simaerep:::plot.simaerep(aerep_test, what = "ur", study = "A")
       6.   ├─base::as.data.frame(x$visit, env = env)
       7.   └─simaerep:::as.data.frame.orivisit(x$visit, env = env)
      ── Error ('test_S3_simaerep.R:22:3'): plot.simaerep with what='med75' ──────────
      Error in `!all_equal(df_summary, x$df_summary)`: invalid argument type
      Backtrace:
          ▆
       1. ├─testthat::expect_s3_class(...) at test_S3_simaerep.R:22:3
       2. │ └─testthat::quasi_label(enquo(object), arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. ├─base::plot(aerep_test, what = "med75", study = "A", verbose = FALSE)
       5. └─simaerep:::plot.simaerep(...)
       6.   ├─base::as.data.frame(x$visit, env = env)
       7.   └─simaerep:::as.data.frame.orivisit(x$visit, env = env)
      
      [ FAIL 4 | WARN 2170 | SKIP 4 | PASS 79 ]
      Deleting unused snapshots:
      • validation/study-025.svg
      • validation/study-050.svg
      • validation/study-075.svg
      • validation/study-100.svg
      Error: Test failures
      Execution halted
    ```

# starschemar

<details>

* Version: 1.2.4
* GitHub: https://github.com/josesamos/starschemar
* Source code: https://github.com/cran/starschemar
* Date/Publication: 2024-01-08 15:30:02 UTC
* Number of recursive dependencies: 60

Run `revdepcheck::cloud_details(, "starschemar")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘starschemar-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: constellation
    > ### Title: 'constellation' S3 class
    > ### Aliases: constellation
    > 
    > ### ** Examples
    > 
    > 
    > ct <- constellation(list(st_mrs_age, st_mrs_cause), name = "mrs")
    Error in `eval_select_impl()`:
    ! `x` must be a vector, not a <tbl_df/tbl/data.frame/dimension_table> object.
    Backtrace:
         ▆
      1. └─starschemar::constellation(list(st_mrs_age, st_mrs_cause), name = "mrs")
      2.   └─starschemar:::conform_all_dimensions(ct)
      3.     └─starschemar:::conform_dimensions(ct, name = d)
      4.       └─starschemar:::union_of_dimensions(dl, name = name, type = "conformed")
      5.         ├─base::unlist(dplyr::summarise_all(dimensions[[1]], class))
      6.         └─dplyr::summarise_all(dimensions[[1]], class)
      7.           ├─dplyr::summarise(.tbl, !!!funs)
      8.           └─dplyr:::summarise.data.frame(.tbl, !!!funs)
      9.             └─dplyr:::eval_select_by(enquo(.by), .data)
     10.               └─tidyselect::eval_select(...)
     11.                 └─tidyselect:::eval_select_impl(...)
     12.                   └─vctrs::vec_assert(x)
     13.                     └─vctrs:::stop_scalar_type(x, arg, call = call)
     14.                       └─vctrs:::stop_vctrs(...)
     15.                         └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call)
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(starschemar)
      > 
      > test_check("starschemar")
      [ FAIL 8 | WARN 0 | SKIP 0 | PASS 161 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-constellation.R:4:3'): constellation works ─────────────────────
      <vctrs_error_scalar_type/vctrs_error/rlang_error/error/condition>
      Error in `eval_select_impl(data, names(data), as_quosure(expr, env), include = include, 
          exclude = exclude, strict = strict, name_spec = name_spec, 
          allow_rename = allow_rename, allow_empty = allow_empty, allow_predicates = allow_predicates, 
          error_call = error_call, )`: `x` must be a vector, not a <tbl_df/tbl/data.frame/dimension_table> object.
      Backtrace:
           ▆
        1. └─starschemar::constellation(...) at test-constellation.R:4:3
        2.   └─starschemar:::conform_all_dimensions(ct)
        3.     └─starschemar:::conform_dimensions(ct, name = d)
        4.       └─starschemar:::union_of_dimensions(dl, name = name, type = "conformed")
        5.         ├─base::unlist(dplyr::summarise_all(dimensions[[1]], class))
        6.         └─dplyr::summarise_all(dimensions[[1]], class)
        7.           ├─dplyr::summarise(.tbl, !!!funs)
        8.           └─dplyr:::summarise.data.frame(.tbl, !!!funs)
        9.             └─dplyr:::eval_select_by(enquo(.by), .data)
       10.               └─tidyselect::eval_select(...)
       11.                 └─tidyselect:::eval_select_impl(...)
       12.                   └─vctrs::vec_assert(x)
       13.                     └─vctrs:::stop_scalar_type(x, arg, call = call)
       14.                       └─vctrs:::stop_vctrs(...)
       15.                         └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call)
      ── Error ('test-modify_conformed_dimension_records.R:4:3'): modify_conformed_dimension_records works ──
      <vctrs_error_scalar_type/vctrs_error/rlang_error/error/condition>
      Error in `eval_select_impl(data, names(data), as_quosure(expr, env), include = include, 
          exclude = exclude, strict = strict, name_spec = name_spec, 
          allow_rename = allow_rename, allow_empty = allow_empty, allow_predicates = allow_predicates, 
          error_call = error_call, )`: `x` must be a vector, not a <tbl_df/tbl/data.frame/dimension_table> object.
      Backtrace:
           ▆
        1. ├─starschemar::modify_conformed_dimension_records(...) at test-modify_conformed_dimension_records.R:4:3
        2. └─starschemar:::modify_conformed_dimension_records.constellation(...)
        3.   └─starschemar:::update_dimensions(ct$dimension, updates)
        4.     ├─starschemar:::update_dimension(dimensions[[d]], updates)
        5.     └─starschemar:::update_dimension.dimension_table(...)
        6.       └─dplyr::summarise_all(mod_dim, class)
        7.         ├─dplyr::summarise(.tbl, !!!funs)
        8.         └─dplyr:::summarise.data.frame(.tbl, !!!funs)
        9.           └─dplyr:::eval_select_by(enquo(.by), .data)
       10.             └─tidyselect::eval_select(...)
       11.               └─tidyselect:::eval_select_impl(...)
       12.                 └─vctrs::vec_assert(x)
       13.                   └─vctrs:::stop_scalar_type(x, arg, call = call)
       14.                     └─vctrs:::stop_vctrs(...)
       15.                       └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call)
      ── Error ('test-modify_dimension_records.R:4:3'): modify_dimension_records works ──
      <vctrs_error_scalar_type/vctrs_error/rlang_error/error/condition>
      Error in `eval_select_impl(data, names(data), as_quosure(expr, env), include = include, 
          exclude = exclude, strict = strict, name_spec = name_spec, 
          allow_rename = allow_rename, allow_empty = allow_empty, allow_predicates = allow_predicates, 
          error_call = error_call, )`: `x` must be a vector, not a <tbl_df/tbl/data.frame/dimension_table> object.
      Backtrace:
           ▆
        1. ├─starschemar::modify_dimension_records(st_mrs_age_test, updates_st_mrs_age_test) at test-modify_dimension_records.R:4:3
        2. └─starschemar:::modify_dimension_records.star_schema(...)
        3.   └─starschemar:::update_dimensions(dimensions, updates)
        4.     ├─starschemar:::update_dimension(dimensions[[d]], updates)
        5.     └─starschemar:::update_dimension.dimension_table(...)
        6.       └─dplyr::summarise_all(mod_dim, class)
        7.         ├─dplyr::summarise(.tbl, !!!funs)
        8.         └─dplyr:::summarise.data.frame(.tbl, !!!funs)
        9.           └─dplyr:::eval_select_by(enquo(.by), .data)
       10.             └─tidyselect::eval_select(...)
       11.               └─tidyselect:::eval_select_impl(...)
       12.                 └─vctrs::vec_assert(x)
       13.                   └─vctrs:::stop_scalar_type(x, arg, call = call)
       14.                     └─vctrs:::stop_vctrs(...)
       15.                       └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call)
      ── Error ('test-purge_dimensions_constellation.R:10:3'): purge_dimensions_constellation works ──
      <vctrs_error_scalar_type/vctrs_error/rlang_error/error/condition>
      Error in `eval_select_impl(data, names(data), as_quosure(expr, env), include = include, 
          exclude = exclude, strict = strict, name_spec = name_spec, 
          allow_rename = allow_rename, allow_empty = allow_empty, allow_predicates = allow_predicates, 
          error_call = error_call, )`: `x` must be a vector, not a <tbl_df/tbl/data.frame/dimension_table> object.
      Backtrace:
           ▆
        1. ├─starschemar::purge_dimensions_constellation(...) at test-purge_dimensions_constellation.R:10:3
        2. └─starschemar:::purge_dimensions_constellation.constellation(...)
        3.   └─starschemar:::conform_all_dimensions(ct)
        4.     └─starschemar:::conform_dimensions(ct, name = d)
        5.       └─starschemar:::union_of_dimensions(dl, name = name, type = "conformed")
        6.         ├─base::unlist(dplyr::summarise_all(dimensions[[1]], class))
        7.         └─dplyr::summarise_all(dimensions[[1]], class)
        8.           ├─dplyr::summarise(.tbl, !!!funs)
        9.           └─dplyr:::summarise.data.frame(.tbl, !!!funs)
       10.             └─dplyr:::eval_select_by(enquo(.by), .data)
       11.               └─tidyselect::eval_select(...)
       12.                 └─tidyselect:::eval_select_impl(...)
       13.                   └─vctrs::vec_assert(x)
       14.                     └─vctrs:::stop_scalar_type(x, arg, call = call)
       15.                       └─vctrs:::stop_vctrs(...)
       16.                         └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call)
      ── Error ('test-union_of_dimensions.R:4:3'): union_of_dimensions works ─────────
      <vctrs_error_scalar_type/vctrs_error/rlang_error/error/condition>
      Error in `eval_select_impl(data, names(data), as_quosure(expr, env), include = include, 
          exclude = exclude, strict = strict, name_spec = name_spec, 
          allow_rename = allow_rename, allow_empty = allow_empty, allow_predicates = allow_predicates, 
          error_call = error_call, )`: `x` must be a vector, not a <tbl_df/tbl/data.frame/dimension_table> object.
      Backtrace:
           ▆
        1. └─starschemar:::union_of_dimensions(...) at test-union_of_dimensions.R:4:3
        2.   ├─base::unlist(dplyr::summarise_all(dimensions[[1]], class))
        3.   └─dplyr::summarise_all(dimensions[[1]], class)
        4.     ├─dplyr::summarise(.tbl, !!!funs)
        5.     └─dplyr:::summarise.data.frame(.tbl, !!!funs)
        6.       └─dplyr:::eval_select_by(enquo(.by), .data)
        7.         └─tidyselect::eval_select(...)
        8.           └─tidyselect:::eval_select_impl(...)
        9.             └─vctrs::vec_assert(x)
       10.               └─vctrs:::stop_scalar_type(x, arg, call = call)
       11.                 └─vctrs:::stop_vctrs(...)
       12.                   └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call)
      ── Error ('test-update_dimension.R:4:3'): update_dimension works ───────────────
      <vctrs_error_scalar_type/vctrs_error/rlang_error/error/condition>
      Error in `eval_select_impl(data, names(data), as_quosure(expr, env), include = include, 
          exclude = exclude, strict = strict, name_spec = name_spec, 
          allow_rename = allow_rename, allow_empty = allow_empty, allow_predicates = allow_predicates, 
          error_call = error_call, )`: `x` must be a vector, not a <tbl_df/tbl/data.frame/dimension_table> object.
      Backtrace:
           ▆
        1. ├─starschemar:::update_dimension(...) at test-update_dimension.R:4:3
        2. └─starschemar:::update_dimension.dimension_table(...)
        3.   └─dplyr::summarise_all(mod_dim, class)
        4.     ├─dplyr::summarise(.tbl, !!!funs)
        5.     └─dplyr:::summarise.data.frame(.tbl, !!!funs)
        6.       └─dplyr:::eval_select_by(enquo(.by), .data)
        7.         └─tidyselect::eval_select(...)
        8.           └─tidyselect:::eval_select_impl(...)
        9.             └─vctrs::vec_assert(x)
       10.               └─vctrs:::stop_scalar_type(x, arg, call = call)
       11.                 └─vctrs:::stop_vctrs(...)
       12.                   └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call)
      ── Error ('test-update_dimensions.R:4:3'): update_dimensions works ─────────────
      <vctrs_error_scalar_type/vctrs_error/rlang_error/error/condition>
      Error in `eval_select_impl(data, names(data), as_quosure(expr, env), include = include, 
          exclude = exclude, strict = strict, name_spec = name_spec, 
          allow_rename = allow_rename, allow_empty = allow_empty, allow_predicates = allow_predicates, 
          error_call = error_call, )`: `x` must be a vector, not a <tbl_df/tbl/data.frame/dimension_table> object.
      Backtrace:
           ▆
        1. └─starschemar:::update_dimensions(ct_mrs_test$dimension, updates_st_mrs_age_test) at test-update_dimensions.R:4:3
        2.   ├─starschemar:::update_dimension(dimensions[[d]], updates)
        3.   └─starschemar:::update_dimension.dimension_table(...)
        4.     └─dplyr::summarise_all(mod_dim, class)
        5.       ├─dplyr::summarise(.tbl, !!!funs)
        6.       └─dplyr:::summarise.data.frame(.tbl, !!!funs)
        7.         └─dplyr:::eval_select_by(enquo(.by), .data)
        8.           └─tidyselect::eval_select(...)
        9.             └─tidyselect:::eval_select_impl(...)
       10.               └─vctrs::vec_assert(x)
       11.                 └─vctrs:::stop_scalar_type(x, arg, call = call)
       12.                   └─vctrs:::stop_vctrs(...)
       13.                     └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call)
      ── Error ('test-update_facts_with_dimensions.R:5:3'): update_facts_with_dimensions works ──
      <vctrs_error_scalar_type/vctrs_error/rlang_error/error/condition>
      Error in `eval_select_impl(data, names(data), as_quosure(expr, env), include = include, 
          exclude = exclude, strict = strict, name_spec = name_spec, 
          allow_rename = allow_rename, allow_empty = allow_empty, allow_predicates = allow_predicates, 
          error_call = error_call, )`: `x` must be a vector, not a <tbl_df/tbl/data.frame/dimension_table> object.
      Backtrace:
           ▆
        1. └─starschemar:::update_dimensions(dimensions, updates_st_mrs_age_test) at test-update_facts_with_dimensions.R:5:3
        2.   ├─starschemar:::update_dimension(dimensions[[d]], updates)
        3.   └─starschemar:::update_dimension.dimension_table(...)
        4.     └─dplyr::summarise_all(mod_dim, class)
        5.       ├─dplyr::summarise(.tbl, !!!funs)
        6.       └─dplyr:::summarise.data.frame(.tbl, !!!funs)
        7.         └─dplyr:::eval_select_by(enquo(.by), .data)
        8.           └─tidyselect::eval_select(...)
        9.             └─tidyselect:::eval_select_impl(...)
       10.               └─vctrs::vec_assert(x)
       11.                 └─vctrs:::stop_scalar_type(x, arg, call = call)
       12.                   └─vctrs:::stop_vctrs(...)
       13.                     └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call)
      
      [ FAIL 8 | WARN 0 | SKIP 0 | PASS 161 ]
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

# table.express

<details>

* Version: 0.4.2
* GitHub: https://github.com/asardaes/table.express
* Source code: https://github.com/cran/table.express
* Date/Publication: 2023-04-02 22:30:02 UTC
* Number of recursive dependencies: 55

Run `revdepcheck::cloud_details(, "table.express")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(table.express)
      
      Attaching package: 'table.express'
      
      The following object is masked from 'package:stats':
      
          filter
      
      > library(testthat)
      
      Attaching package: 'testthat'
      
      The following object is masked from 'package:table.express':
      
          matches
      
      > 
      > # old reporter for CMD checks
      > options(testthat.default_reporter = "summary")
      > 
      > #' To test in a local machine:
      > #' Sys.setenv(NOT_CRAN = "true"); test_dir("tests/testthat/")
      > #' OR
      > #' devtools::test()
      > #'
      > testthat::test_check("table.express")
      [ FAIL 6 | WARN 0 | SKIP 1 | PASS 604 ]
      
      ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
      • On CRAN (1): 'test-90-namespace.R:4:5'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-10-unit.R:14:1'): group_by can delegate to data.frame method when necessary. ──
      Error in `if (!(call_name %in% stats$calls)) {
          stats$calls <- c(stats$calls, call_name)
      }`: the condition has length > 1
      Backtrace:
          ▆
       1. ├─testthat::expect_equal(...)
       2. │ └─testthat::quasi_label(enquo(expected), expected.label, arg = "expected")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─dplyr:::group_by.data.frame(lhs, x)
       5.   └─dplyr:::rel_try(...)
      ── Error ('test-10-unit.R:26:1'): left_join can delegate to data.frame method when necessary. ──
      Error in `if (!(call_name %in% stats$calls)) {
          stats$calls <- c(stats$calls, call_name)
      }`: the condition has length > 1
      Backtrace:
          ▆
       1. ├─testthat::expect_equal(...)
       2. │ └─testthat::quasi_label(enquo(expected), expected.label, arg = "expected")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─dplyr:::left_join.data.frame(lhs, rhs, "x")
       5.   └─dplyr:::rel_try(...)
      ── Error ('test-10-unit.R:28:1'): semi_join can delegate to data.frame method when necessary. ──
      Error in `if (!(call_name %in% stats$calls)) {
          stats$calls <- c(stats$calls, call_name)
      }`: the condition has length > 1
      Backtrace:
          ▆
       1. ├─testthat::expect_equal(...)
       2. │ └─testthat::quasi_label(enquo(expected), expected.label, arg = "expected")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─dplyr:::semi_join.data.frame(lhs, rhs, "x")
       5.   └─dplyr:::rel_try(...)
      ── Error ('test-10-unit.R:29:1'): inner_join can delegate to data.frame method when necessary. ──
      Error in `if (!(call_name %in% stats$calls)) {
          stats$calls <- c(stats$calls, call_name)
      }`: the condition has length > 1
      Backtrace:
          ▆
       1. ├─testthat::expect_equal(...)
       2. │ └─testthat::quasi_label(enquo(expected), expected.label, arg = "expected")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─dplyr:::inner_join.data.frame(lhs, rhs, "x")
       5.   └─dplyr:::rel_try(...)
      ── Error ('test-10-unit.R:30:1'): right_join can delegate to data.frame method when necessary. ──
      Error in `if (!(call_name %in% stats$calls)) {
          stats$calls <- c(stats$calls, call_name)
      }`: the condition has length > 1
      Backtrace:
          ▆
       1. ├─testthat::expect_equal(...)
       2. │ └─testthat::quasi_label(enquo(expected), expected.label, arg = "expected")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─dplyr:::right_join.data.frame(lhs, rhs, "x")
       5.   └─dplyr:::rel_try(...)
      ── Error ('test-10-unit.R:31:1'): anti_join can delegate to data.frame method when necessary. ──
      Error in `if (!(call_name %in% stats$calls)) {
          stats$calls <- c(stats$calls, call_name)
      }`: the condition has length > 1
      Backtrace:
          ▆
       1. ├─testthat::expect_equal(...)
       2. │ └─testthat::quasi_label(enquo(expected), expected.label, arg = "expected")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─dplyr:::anti_join.data.frame(rhs, lhs, by = c("x", "v"))
       5.   └─dplyr:::rel_try(...)
      
      [ FAIL 6 | WARN 0 | SKIP 1 | PASS 604 ]
      Error: Test failures
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
* Number of recursive dependencies: 99

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
    --- finished re-building ‘introduction.Rmd’
    
    --- re-building ‘servicepatterns.Rmd’ using rmarkdown
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

# unheadr

<details>

* Version: 0.3.3
* GitHub: https://github.com/luisDVA/unheadr
* Source code: https://github.com/cran/unheadr
* Date/Publication: 2022-08-15 05:40:02 UTC
* Number of recursive dependencies: 75

Run `revdepcheck::cloud_details(, "unheadr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(unheadr)
      > 
      > test_check("unheadr")
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 31 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-untangle2.R:8:3'): target variable is called 'regex' ─────────
      `untangle2(df, regex = "^gp", orig = regex, new = new_col)` did not produce any warnings.
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 31 ]
      Error: Test failures
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
    > # load the data
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
      
         *****       ***   vcfR   ***       *****
         This is vcfR 1.15.0 
           browseVignettes('vcfR') # Documentation
           citation('vcfR') # Citation
         *****       *****      *****       *****
      
      [ FAIL 3 | WARN 0 | SKIP 0 | PASS 487 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_vcfRtidy.R:92:3'): extract_gt_tidy works for all elements ──────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '.' to DOUBLE
      Backtrace:
          ▆
       1. ├─base::suppressMessages(Z <- extract_gt_tidy(vcf)) at test_vcfRtidy.R:92:3
       2. │ └─base::withCallingHandlers(...)
       3. ├─vcfR::extract_gt_tidy(vcf)
       4. │ └─vcfR:::guess_types(format_df %>% dplyr::filter(ID %in% format_fields))
       5. │   └─... %>% dplyr::bind_rows(tmp)
       6. └─dplyr::bind_rows(., tmp)
       7.   └─vctrs::vec_rbind(!!!dots, .names_to = .id, .error_call = current_env())
      ── Error ('test_vcfRtidy.R:103:3'): vcfR2tidy works ────────────────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'A' to DOUBLE
      Backtrace:
          ▆
       1. ├─vcfR::vcfR2tidy(vcfR_test, info_only = FALSE) at test_vcfRtidy.R:103:3
       2. │ ├─base::do.call(what = extract_info_tidy, args = info_dots)
       3. │ └─vcfR (local) `<fn>`(x = `<vcfR[,8,4]>`)
       4. │   └─vcfR:::guess_types(info_df)
       5. │     └─... %>% dplyr::bind_rows(tmp)
       6. └─dplyr::bind_rows(., tmp)
       7.   └─vctrs::vec_rbind(!!!dots, .names_to = .id, .error_call = current_env())
      ── Error ('test_vcfRtidy.R:139:3'): extract_info_tidy works with Flags ─────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'A' to DOUBLE
      Backtrace:
          ▆
       1. ├─vcfR::extract_info_tidy(vcfR_test, info_types = TRUE) at test_vcfRtidy.R:139:3
       2. │ └─vcfR:::guess_types(info_df)
       3. │   └─... %>% dplyr::bind_rows(tmp)
       4. └─dplyr::bind_rows(., tmp)
       5.   └─vctrs::vec_rbind(!!!dots, .names_to = .id, .error_call = current_env())
      
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
      > 
      > library(testthat)
      > library(vDiveR)
      > 
      > test_check("vDiveR")
      [ FAIL 8 | WARN 0 | SKIP 0 | PASS 63 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-concat-seq.R:58:5'): Test Case 3: 9-mer HCS (single host), with FASTA output ──
      HCS_1host[1, 1] (`actual`) not equal to ">HCS_A_1" (`expected`).
      
      `names(actual)` is a character vector ('HCS')
      `names(expected)` is absent
      ── Failure ('test-concat-seq.R:59:5'): Test Case 3: 9-mer HCS (single host), with FASTA output ──
      HCS_1host[2, 1] (`actual`) not equal to "MSTNPKPQRKTKRNTNRR" (`expected`).
      
      `names(actual)` is a character vector ('Sequence')
      `names(expected)` is absent
      ── Failure ('test-concat-seq.R:61:5'): Test Case 3: 9-mer HCS (single host), with FASTA output ──
      HCS_1host[5, 1] (`actual`) not equal to ">HCS_A_3" (`expected`).
      
      `names(actual)` is a character vector ('HCS')
      `names(expected)` is absent
      ── Failure ('test-concat-seq.R:62:5'): Test Case 3: 9-mer HCS (single host), with FASTA output ──
      HCS_1host[6, 1] (`actual`) not equal to "RKTSERSQPRGRRQPIPK" (`expected`).
      
      `names(actual)` is a character vector ('Sequence')
      `names(expected)` is absent
      ── Failure ('test-concat-seq.R:64:5'): Test Case 3: 9-mer HCS (single host), with FASTA output ──
      HCS_1host[11, 1] (`actual`) not equal to ">HCS_B_1" (`expected`).
      
      `names(actual)` is a character vector ('HCS')
      `names(expected)` is absent
      ── Failure ('test-concat-seq.R:65:5'): Test Case 3: 9-mer HCS (single host), with FASTA output ──
      HCS_1host[12, 1] (`actual`) not equal to "TSLTGRDKN" (`expected`).
      
      `names(actual)` is a character vector ('Sequence')
      `names(expected)` is absent
      ── Failure ('test-concat-seq.R:74:5'): Test Case 4: 9-mer CCS (single host), with FASTA output ──
      CCS_1host[1, 1] (`actual`) not equal to ">CCS_A_1" (`expected`).
      
      `names(actual)` is a character vector ('CCS')
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
    --- finished re-building ‘VWPre_Interest_Areas.Rmd’
    
    --- re-building ‘VWPre_Message_Alignment.Rmd’ using rmarkdown
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

* Version: 1.0.0
* GitHub: https://github.com/bergsmat/yamlet
* Source code: https://github.com/cran/yamlet
* Date/Publication: 2024-02-16 14:00:02 UTC
* Number of recursive dependencies: 104

Run `revdepcheck::cloud_details(, "yamlet")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘yamlet-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: promote
    > ### Title: Promote Something
    > ### Aliases: promote
    > ### Keywords: internal
    > 
    > ### ** Examples
    > 
    > example(promote.data.frame)
    
    prmt..> example(promote.list)
    
    prmt.l> library(magrittr)
    
    prmt.l> file <- system.file(package = 'yamlet', 'extdata','phenobarb.csv')
    
    prmt.l> x <- file %>% decorate
    
    prmt.l> # Note that there are two elements each for value label and value guide.
    prmt.l> x %>% decorations(event, value)
    - event
     - label: type of event
     - guide: dose, conc
    - value
     - label
      - event == 'dose': dose of drug administered
      - event == 'conc': serum phenobarbital concentration
     - guide
      - event == 'dose': µg/kg
      - event == 'conc': µg/L
    
    prmt.l> # After filtering, only one set is relevant.
    prmt.l> # promote() identifies and retains such.
    prmt.l> x %>% dplyr:::filter.data.frame(event == 'dose') %>% decorations(value)
    Error in if (!(call_name %in% stats$calls)) { : 
      the condition has length > 1
    Calls: example ... eval -> %>% -> decorations -> <Anonymous> -> rel_try
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(yamlet)
      
      Attaching package: 'yamlet'
      
      The following object is masked from 'package:stats':
      
          filter
      
      > 
      > test_check("yamlet")
      tibble [4 × 1] (S3: tbl_df/tbl/data.frame)
       $ RACE: 'dvec' chr [1:4] "WHITE" "WHITE" "WHITE" "WHITE"
        ..- attr(*, "label")= chr "Race"
       'dvec' int [1:4] 0 1 0 1
       - attr(*, "label")= chr "sex"
       - attr(*, "guide")=List of 2
        ..$ female: int 0
        ..$ male  : int 1
       'dvec' int [1:4] 0 1 0 1
       - attr(*, "label")= chr "sex"
       - attr(*, "guide")=List of 2
        ..$ female: int 0
        ..$ male  : int 1
       'dvec' num(0) 
      List of 2
       $ : 'dvec' num 1
       $ : 'dvec' num 1
      blq: [ LOQ Y/N, [ 'No': 0, 'Yes': 1 ]]
      letters: [ Letters, [ a, b, c, NA ]]
      letters: [ Letters, [ a, b, c, 'NA' ]]
      [ FAIL 2 | WARN 1 | SKIP 2 | PASS 504 ]
      
      ══ Skipped tests (2) ═══════════════════════════════════════════════════════════
      • empty test (2): 'test-yamlet.R:1340:1', 'test-yamlet.R:1345:1'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-dvec.R:485:3'): dvec int and double are coerced compatibly during merge ──
      `left_join(data.frame(ID = 1), data.frame(ID = "1", TIME = 0))` did not throw an error.
      ── Error ('test-yamlet.R:710:1'): promote is stable ────────────────────────────
      Error in `if (!(call_name %in% stats$calls)) {
          stats$calls <- c(stats$calls, call_name)
      }`: the condition has length > 1
      Backtrace:
          ▆
       1. ├─testthat::expect_equal_to_reference(...) at test-yamlet.R:710:1
       2. │ └─testthat::expect_known_value(..., update = update)
       3. │   └─testthat::quasi_label(enquo(object), label, arg = "object")
       4. │     └─rlang::eval_bare(expr, quo_get_env(quo))
       5. ├─... %>% decorations(value)
       6. ├─yamlet::decorations(., value)
       7. ├─yamlet::promote(., event)
       8. └─dplyr:::filter.data.frame(., event == "dose")
       9.   └─dplyr:::rel_try(...)
      
      [ FAIL 2 | WARN 1 | SKIP 2 | PASS 504 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking re-building of vignette outputs ... WARNING
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘scripted_html.Rmd’ using rmarkdown
    --- finished re-building ‘scripted_html.Rmd’
    
    --- re-building ‘scripted_pdf.Rmd’ using rmarkdown
    
    tlmgr: Remote database (revision 70461 of the texlive-scripts package)
    seems to be older than the local installation (rev 70498 of
    texlive-scripts); please use a different mirror and/or wait a day or two.
    
    Warning in system2("tlmgr", args, ...) :
      running command ''tlmgr' search --file --global '/wrapfig.sty'' had status 1
    ! LaTeX Error: File `wrapfig.sty' not found.
    
    ! Emergency stop.
    <read *> 
    
    Error: processing vignette 'scripted_pdf.Rmd' failed with diagnostics:
    LaTeX failed to compile /tmp/workdir/yamlet/new/yamlet.Rcheck/vign_test/yamlet/vignettes/scripted_pdf.tex. See https://yihui.org/tinytex/r/#debugging for debugging tips. See scripted_pdf.log for more info.
    --- failed re-building ‘scripted_pdf.Rmd’
    
    --- re-building ‘yamlet-introduction.Rmd’ using rmarkdown
    --- finished re-building ‘yamlet-introduction.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘scripted_pdf.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

