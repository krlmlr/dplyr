# activAnalyzer

<details>

* Version: 2.0.2
* GitHub: https://github.com/pydemull/activAnalyzer
* Source code: https://github.com/cran/activAnalyzer
* Date/Publication: 2024-01-08 23:10:15 UTC
* Number of recursive dependencies: 150

Run `revdepcheck::cloud_details(, "activAnalyzer")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(shinytest2)
      > library(activAnalyzer)
      > 
      > test_check("activAnalyzer")
      Loading required package: shiny
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 32
          weight = 67
          sex = male
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 32
          weight = 67
          sex = male
      You have computed BMR using the following inputs: 
          age = 32
          weight = 67
          sex = male
      You have computed BMR using the following inputs: 
          age = 65
          weight = 58
          sex = female
      You have computed BMR using the following inputs: 
          age = 65
          weight = 58
          sex = undefined
      You have computed BMR using the following inputs: 
          age = 65
          weight = 58
          sex = intersex
      You have computed BMR using the following inputs: 
          age = 65
          weight = 58
          sex = prefer not to say
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 40
          weight = 70
          sex = male
      Joining with `by = join_by(date)`
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 40
          weight = 70
          sex = male
      Joining with `by = join_by(date)`
      You have computed METs using the following inputs: 
          equation = Santos-Lozano et al. (2013) [Older adults]
          weight = 70
          sex = male
      You have computed METs using the following inputs: 
          equation = Santos-Lozano et al. (2013) [Older adults]
          weight = 70
          sex = female
      You have computed METs using the following inputs: 
          equation = Santos-Lozano et al. (2013) [Older adults]
          weight = 70
          sex = undefined
      You have computed METs using the following inputs: 
          equation = Santos-Lozano et al. (2013) [Older adults]
          weight = 70
          sex = intersex
      You have computed METs using the following inputs: 
          equation = Santos-Lozano et al. (2013) [Older adults]
          weight = 70
          sex = prefer not to say
      You have computed METs using the following inputs: 
          equation = Santos-Lozano et al. (2013) [Adults]
          weight = 67
          sex = male
      You have computed METs using the following inputs: 
          equation = Santos-Lozano et al. (2013) [Adults]
          weight = 67
          sex = female
      You have computed METs using the following inputs: 
          equation = Santos-Lozano et al. (2013) [Adults]
          weight = 67
          sex = undefined
      You have computed METs using the following inputs: 
          equation = Santos-Lozano et al. (2013) [Adults]
          weight = 67
          sex = intersex
      You have computed METs using the following inputs: 
          equation = Santos-Lozano et al. (2013) [Adults]
          weight = 67
          sex = prefer not to say
      You have computed METs using the following inputs: 
          equation = Sasaki et al. (2011) [Adults]
          weight = 70
          sex = male
      You have computed METs using the following inputs: 
          equation = Sasaki et al. (2011) [Adults]
          weight = 70
          sex = female
      You have computed METs using the following inputs: 
          equation = Sasaki et al. (2011) [Adults]
          weight = 70
          sex = undefined
      You have computed METs using the following inputs: 
          equation = Sasaki et al. (2011) [Adults]
          weight = 70
          sex = intersex
      You have computed METs using the following inputs: 
          equation = Sasaki et al. (2011) [Adults]
          weight = 70
          sex = prefer not to say
      You have computed METs using the following inputs: 
          equation = Freedson et al. (1998) [Adults]
          weight = 70
          sex = male
      You have computed METs using the following inputs: 
          equation = Freedson et al. (1998) [Adults]
          weight = 70
          sex = female
      You have computed METs using the following inputs: 
          equation = Freedson et al. (1998) [Adults]
          weight = 70
          sex = undefined
      You have computed METs using the following inputs: 
          equation = Freedson et al. (1998) [Adults]
          weight = 70
          sex = intersex
      You have computed METs using the following inputs: 
          equation = Freedson et al. (1998) [Adults]
          weight = 70
          sex = prefer not to say
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 32
          weight = 67
          sex = male
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      You have computed results with the recap_by_day() function using the following inputs: 
               age = 32
               weight = 67
               sex = male
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 32
          weight = 67
          sex = male
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      You have computed results with the recap_by_day() function using the following inputs: 
               age = 32
               weight = 67
               sex = male
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 32
          weight = 67
          sex = male
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      You have computed results with the recap_by_day() function using the following inputs: 
               age = 32
               weight = 67
               sex = male
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 32
          weight = 67
          sex = male
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      You have computed results with the recap_by_day() function using the following inputs: 
               age = 32
               weight = 67
               sex = male
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 40
          weight = 70
          sex = male
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      You have computed results with the recap_by_day() function using the following inputs: 
               age = 40
               weight = 70
               sex = male
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 40
          weight = 70
          sex = male
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 40
          weight = 70
          sex = male
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 40
          weight = 70
          sex = male
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 40
          weight = 70
          sex = male
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 40
          weight = 70
          sex = male
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 32
          weight = 67
          sex = male
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      You have computed results with the recap_by_day() function using the following inputs: 
               age = 32
               weight = 67
               sex = male
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 32
          weight = 67
          sex = male
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      You have computed results with the recap_by_day() function using the following inputs: 
               age = 32
               weight = 67
               sex = male
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 32
          weight = 67
          sex = male
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      You have computed results with the recap_by_day() function using the following inputs: 
               age = 32
               weight = 67
               sex = male
      You have computed BMR using the following inputs: 
          age = 32
          weight = 67
          sex = male
      frame is 90
      streamFrame is 30
      allowanceFrame is 2
      You have computed intensity metrics with the mark_intensity() function using the following inputs: 
          axis = vm
          sed_cutpoint = 200 counts/min
          mpa_cutpoint = 2690 counts/min
          vpa_cutpoint = 6167 counts/min
          equation = Sasaki et al. (2011) [Adults]
          age = 32
          weight = 67
          sex = male
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      Joining with `by = join_by(date)`
      You have computed results with the recap_by_day() function using the following inputs: 
               age = 32
               weight = 67
               sex = male
      You have computed BMR using the following inputs: 
          age = 32
          weight = 67
          sex = male
      [ FAIL 3 | WARN 4 | SKIP 1 | PASS 190 ]
      
      ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
      • On CRAN (1): 'test-golem-recommended.R:39:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-compute_accumulation_metrics.R:27:3'): The function provides numeric and graphic objects ──
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '0-29' to BOOL
      Backtrace:
           ▆
        1. ├─activAnalyzer::compute_accumulation_metrics(...) at test-compute_accumulation_metrics.R:27:3
        2. │ └─summarised_bouts_primer %>% ...
        3. ├─dplyr::mutate(., cum_frac_time = cumsum(prod/sum(prod)), cum_frac_bout = cumsum(n/sum(n)))
        4. └─dplyr:::mutate.data.frame(...)
        5.   └─dplyr::mutate(...)
        6.     └─dplyr:::compute_by(...)
        7.       ├─dplyr::group_data(data)
        8.       ├─dplyr:::group_data.tbl_df(data)
        9.       ├─base::NextMethod()
       10.       └─dplyr:::group_data.data.frame(data)
       11.         └─base::nrow(.data)
       12.           ├─base::dim(x)
       13.           └─base::dim.data.frame(x)
       14.             └─base::.row_names_info(x, 2L)
      ── Error ('test-compute_accumulation_metrics.R:109:1'): The function provides numeric and graphic objects even with customized variable
                names ──
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '0-29' to BOOL
      Backtrace:
           ▆
        1. ├─activAnalyzer::compute_accumulation_metrics(...) at test-compute_accumulation_metrics.R:109:1
        2. │ └─summarised_bouts_primer %>% ...
        3. ├─dplyr::mutate(., cum_frac_time = cumsum(prod/sum(prod)), cum_frac_bout = cumsum(n/sum(n)))
        4. └─dplyr:::mutate.data.frame(...)
        5.   └─dplyr::mutate(...)
        6.     └─dplyr:::compute_by(...)
        7.       ├─dplyr::group_data(data)
        8.       ├─dplyr:::group_data.tbl_df(data)
        9.       ├─base::NextMethod()
       10.       └─dplyr:::group_data.data.frame(data)
       11.         └─base::nrow(.data)
       12.           ├─base::dim(x)
       13.           └─base::dim.data.frame(x)
       14.             └─base::.row_names_info(x, 2L)
      ── Error ('test-do_all_analyses.R:2:3'): The function runs without error ───────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '0-29' to BOOL
      Backtrace:
           ▆
        1. ├─activAnalyzer:::do_all_analyses() at test-do_all_analyses.R:2:3
        2. │ └─activAnalyzer::compute_accumulation_metrics(...)
        3. │   └─summarised_bouts_primer %>% ...
        4. ├─dplyr::mutate(., cum_frac_time = cumsum(prod/sum(prod)), cum_frac_bout = cumsum(n/sum(n)))
        5. └─dplyr:::mutate.data.frame(...)
        6.   └─dplyr::mutate(...)
        7.     └─dplyr:::compute_by(...)
        8.       ├─dplyr::group_data(data)
        9.       ├─dplyr:::group_data.tbl_df(data)
       10.       ├─base::NextMethod()
       11.       └─dplyr:::group_data.data.frame(data)
       12.         └─base::nrow(.data)
       13.           ├─base::dim(x)
       14.           └─base::dim.data.frame(x)
       15.             └─base::.row_names_info(x, 2L)
      
      [ FAIL 3 | WARN 4 | SKIP 1 | PASS 190 ]
      Error: Test failures
      Execution halted
    ```

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘activAnalyzer.Rmd’
      ...
    
    > create_fig_mx_summary(data = mean_results, labels = NULL, 
    +     mpa_cutpoint = 2690, vpa_cutpoint = 6167)
    
    > accum_metrics_sed <- compute_accumulation_metrics(data = mydata_with_intensity_marks, 
    +     behaviour = "sed", dates = c("2021-04-07", "2021-04-08" .... [TRUNCATED] 
    
      When sourcing ‘activAnalyzer.R’:
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string '0-29' to BOOL
    Execution halted
    
      ‘activAnalyzer.Rmd’ using ‘UTF-8’... failed
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘activAnalyzer.Rmd’ using rmarkdown
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.2Mb
      sub-directories of 1Mb or more:
        doc       1.0Mb
        extdata   2.0Mb
    ```

# arrow

<details>

* Version: 15.0.1
* GitHub: https://github.com/apache/arrow
* Source code: https://github.com/cran/arrow
* Date/Publication: 2024-03-12 12:30:10 UTC
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

# cards

<details>

* Version: 0.1.0
* GitHub: https://github.com/insightsengineering/cards
* Source code: https://github.com/cran/cards
* Date/Publication: 2024-02-26 16:50:02 UTC
* Number of recursive dependencies: 48

Run `revdepcheck::cloud_details(, "cards")` for more info

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
      > # * https://r-pkgs.org/testing-design.html#sec-tests-files-overview
      > # * https://testthat.r-lib.org/articles/special-files.html
      > 
      > library(testthat)
      > library(cards)
      
      Attaching package: 'cards'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      > 
      > test_check("cards")
      Starting 2 test processes
      [ FAIL 3 | WARN 0 | SKIP 41 | PASS 111 ]
      
      ══ Skipped tests (41) ══════════════════════════════════════════════════════════
      • On CRAN (41): 'test-ard_attributes.R:2:3', 'test-apply_fmt_fn.R:76:3',
        'test-ard_complex.R:87:3', 'test-ard_categorical.R:6:3',
        'test-ard_categorical.R:77:3', 'test-ard_categorical.R:103:3',
        'test-ard_categorical.R:221:3', 'test-ard_categorical.R:234:3',
        'test-ard_categorical.R:391:3', 'test-ard_categorical.R:498:3',
        'test-ard_categorical.R:576:3', 'test-ard_categorical.R:677:3',
        'test-ard_dichotomous.R:11:3', 'test-ard_dichotomous.R:46:3',
        'test-ard_hierarchical.R:12:3', 'test-ard_hierarchical.R:97:3',
        'test-ard_hierarchical.R:118:3', 'test-ard_hierarchical.R:208:3',
        'test-ard_missing.R:7:3', 'test-ard_missing.R:31:3',
        'test-ard_continuous.R:7:3', 'test-ard_continuous.R:35:3',
        'test-ard_continuous.R:86:3', 'test-ard_continuous.R:106:3',
        'test-ard_continuous.R:234:3', 'test-as_nested_list.R:2:3',
        'test-bind_ard.R:14:3', 'test-bind_ard.R:27:3',
        'test-check_ard_structure.R:2:3', 'test-eval_capture_conditions.R:3:3',
        'test-get_ard_statistics.R:4:3', 'test-print.R:2:3',
        'test-print_ard_conditions.R:3:3', 'test-process_selectors.R:21:3',
        'test-process_selectors.R:52:3', 'test-process_selectors.R:85:3',
        'test-round5.R:2:3', 'test-shuffle_ard.R:9:3', 'test-shuffle_ard.R:68:3',
        'test-shuffle_ard.R:79:3', 'test-tidy_as_ard.R:3:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-ard_categorical.R:352:3'): ard_categorical(denominator='row') works ──
      ...[] (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 0.4
      `expected`: 1.0
      ── Failure ('test-ard_categorical.R:369:3'): ard_categorical(denominator='row') works ──
      ...[] (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 0.4
      `expected`: 1.0
      ── Failure ('test-ard_categorical.R:559:3'): ard_categorical(denominator=<data frame without counts>) works ──
      unique(...) (`actual`) not equal to 0L (`expected`).
      
        `actual`: 0 NaN
      `expected`: 0    
      
      [ FAIL 3 | WARN 0 | SKIP 41 | PASS 111 ]
      Error: Test failures
      Execution halted
    ```

# causalBatch

<details>

* Version: 1.2.0
* GitHub: https://github.com/neurodata/causal_batch
* Source code: https://github.com/cran/causalBatch
* Date/Publication: 2024-03-01 10:32:37 UTC
* Number of recursive dependencies: 138

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

# CausalQueries

<details>

* Version: 1.1.0
* GitHub: https://github.com/integrated-inferences/CausalQueries
* Source code: https://github.com/cran/CausalQueries
* Date/Publication: 2024-04-10 13:50:02 UTC
* Number of recursive dependencies: 125

Run `revdepcheck::cloud_details(, "CausalQueries")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘CausalQueries-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: make_model
    > ### Title: Make a model
    > ### Aliases: make_model
    > 
    > ### ** Examples
    > 
    > make_model(statement = "X -> Y")
    
    Statement: 
    X -> Y
    
    Number of types by node:
    X Y 
    2 4 
    
    Number of unit types: 8
    
    > modelXKY <- make_model("X -> K -> Y; X -> Y")
    > 
    > # Example where cyclicaly dag attempted
    > ## Not run: 
    > ##D  modelXKX <- make_model("X -> K -> X")
    > ## End(Not run)
    > 
    > # Examples with confounding
    > model <- make_model("X->Y; X <-> Y")
    > model$P
    
    Rows are parameters, grouped in parameter sets
    
    Columns are causal types
    
    Cell entries indicate whether a parameter probability isused
    in the calculation of causal type probability
    
             X0.Y00 X1.Y00 X0.Y10 X1.Y10 X0.Y01 X1.Y01 X0.Y11 X1.Y11
    X.0           1      0      1      0      1      0      1      0
    X.1           0      1      0      1      0      1      0      1
    Y.00_X.0      1      0      0      0      0      0      0      0
    Y.10_X.0      0      0      1      0      0      0      0      0
    Y.01_X.0      0      0      0      0      1      0      0      0
    Y.11_X.0      0      0      0      0      0      0      1      0
    Y.00_X.1      0      1      0      0      0      0      0      0
    Y.10_X.1      0      0      0      1      0      0      0      0
    Y.01_X.1      0      0      0      0      0      1      0      0
    Y.11_X.1      0      0      0      0      0      0      0      1
    
     
     param_set  (P)
     X  Y.X.0  Y.X.1> model <- make_model("Y2 <- X -> Y1; X <-> Y1; X <-> Y2")
    > dim(model$P)
    [1] 18 32
    > model$P
    
    Rows are parameters, grouped in parameter sets
    
    Columns are causal types
    
    Cell entries indicate whether a parameter probability isused
    in the calculation of causal type probability
    
              X0.Y100.Y200 X1.Y100.Y200 X0.Y110.Y200 X1.Y110.Y200 X0.Y101.Y200
    X.0                  1            0            1            0            1
    X.1                  0            1            0            1            0
    Y1.00_X.0            1            0            0            0            0
    Y1.10_X.0            0            0            1            0            0
    Y1.01_X.0            0            0            0            0            1
    Y1.11_X.0            0            0            0            0            0
    Y1.00_X.1            0            1            0            0            0
    Y1.10_X.1            0            0            0            1            0
    Y1.01_X.1            0            0            0            0            0
    Y1.11_X.1            0            0            0            0            0
    Y2.00_X.0            1            0            1            0            1
    Y2.10_X.0            0            0            0            0            0
    Y2.01_X.0            0            0            0            0            0
    Y2.11_X.0            0            0            0            0            0
    Y2.00_X.1            0            1            0            1            0
    Y2.10_X.1            0            0            0            0            0
    Y2.01_X.1            0            0            0            0            0
    Y2.11_X.1            0            0            0            0            0
              X1.Y101.Y200 X0.Y111.Y200 X1.Y111.Y200 X0.Y100.Y210 X1.Y100.Y210
    X.0                  0            1            0            1            0
    X.1                  1            0            1            0            1
    Y1.00_X.0            0            0            0            1            0
    Y1.10_X.0            0            0            0            0            0
    Y1.01_X.0            0            0            0            0            0
    Y1.11_X.0            0            1            0            0            0
    Y1.00_X.1            0            0            0            0            1
    Y1.10_X.1            0            0            0            0            0
    Y1.01_X.1            1            0            0            0            0
    Y1.11_X.1            0            0            1            0            0
    Y2.00_X.0            0            1            0            0            0
    Y2.10_X.0            0            0            0            1            0
    Y2.01_X.0            0            0            0            0            0
    Y2.11_X.0            0            0            0            0            0
    Y2.00_X.1            1            0            1            0            0
    Y2.10_X.1            0            0            0            0            1
    Y2.01_X.1            0            0            0            0            0
    Y2.11_X.1            0            0            0            0            0
              X0.Y110.Y210 X1.Y110.Y210 X0.Y101.Y210 X1.Y101.Y210 X0.Y111.Y210
    X.0                  1            0            1            0            1
    X.1                  0            1            0            1            0
    Y1.00_X.0            0            0            0            0            0
    Y1.10_X.0            1            0            0            0            0
    Y1.01_X.0            0            0            1            0            0
    Y1.11_X.0            0            0            0            0            1
    Y1.00_X.1            0            0            0            0            0
    Y1.10_X.1            0            1            0            0            0
    Y1.01_X.1            0            0            0            1            0
    Y1.11_X.1            0            0            0            0            0
    Y2.00_X.0            0            0            0            0            0
    Y2.10_X.0            1            0            1            0            1
    Y2.01_X.0            0            0            0            0            0
    Y2.11_X.0            0            0            0            0            0
    Y2.00_X.1            0            0            0            0            0
    Y2.10_X.1            0            1            0            1            0
    Y2.01_X.1            0            0            0            0            0
    Y2.11_X.1            0            0            0            0            0
              X1.Y111.Y210 X0.Y100.Y201 X1.Y100.Y201 X0.Y110.Y201 X1.Y110.Y201
    X.0                  0            1            0            1            0
    X.1                  1            0            1            0            1
    Y1.00_X.0            0            1            0            0            0
    Y1.10_X.0            0            0            0            1            0
    Y1.01_X.0            0            0            0            0            0
    Y1.11_X.0            0            0            0            0            0
    Y1.00_X.1            0            0            1            0            0
    Y1.10_X.1            0            0            0            0            1
    Y1.01_X.1            0            0            0            0            0
    Y1.11_X.1            1            0            0            0            0
    Y2.00_X.0            0            0            0            0            0
    Y2.10_X.0            0            0            0            0            0
    Y2.01_X.0            0            1            0            1            0
    Y2.11_X.0            0            0            0            0            0
    Y2.00_X.1            0            0            0            0            0
    Y2.10_X.1            1            0            0            0            0
    Y2.01_X.1            0            0            1            0            1
    Y2.11_X.1            0            0            0            0            0
              X0.Y101.Y201 X1.Y101.Y201 X0.Y111.Y201 X1.Y111.Y201 X0.Y100.Y211
    X.0                  1            0            1            0            1
    X.1                  0            1            0            1            0
    Y1.00_X.0            0            0            0            0            1
    Y1.10_X.0            0            0            0            0            0
    Y1.01_X.0            1            0            0            0            0
    Y1.11_X.0            0            0            1            0            0
    Y1.00_X.1            0            0            0            0            0
    Y1.10_X.1            0            0            0            0            0
    Y1.01_X.1            0            1            0            0            0
    Y1.11_X.1            0            0            0            1            0
    Y2.00_X.0            0            0            0            0            0
    Y2.10_X.0            0            0            0            0            0
    Y2.01_X.0            1            0            1            0            0
    Y2.11_X.0            0            0            0            0            1
    Y2.00_X.1            0            0            0            0            0
    Y2.10_X.1            0            0            0            0            0
    Y2.01_X.1            0            1            0            1            0
    Y2.11_X.1            0            0            0            0            0
              X1.Y100.Y211 X0.Y110.Y211 X1.Y110.Y211 X0.Y101.Y211 X1.Y101.Y211
    X.0                  0            1            0            1            0
    X.1                  1            0            1            0            1
    Y1.00_X.0            0            0            0            0            0
    Y1.10_X.0            0            1            0            0            0
    Y1.01_X.0            0            0            0            1            0
    Y1.11_X.0            0            0            0            0            0
    Y1.00_X.1            1            0            0            0            0
    Y1.10_X.1            0            0            1            0            0
    Y1.01_X.1            0            0            0            0            1
    Y1.11_X.1            0            0            0            0            0
    Y2.00_X.0            0            0            0            0            0
    Y2.10_X.0            0            0            0            0            0
    Y2.01_X.0            0            0            0            0            0
    Y2.11_X.0            0            1            0            1            0
    Y2.00_X.1            0            0            0            0            0
    Y2.10_X.1            0            0            0            0            0
    Y2.01_X.1            0            0            0            0            0
    Y2.11_X.1            1            0            1            0            1
              X0.Y111.Y211 X1.Y111.Y211
    X.0                  1            0
    X.1                  0            1
    Y1.00_X.0            0            0
    Y1.10_X.0            0            0
    Y1.01_X.0            0            0
    Y1.11_X.0            1            0
    Y1.00_X.1            0            0
    Y1.10_X.1            0            0
    Y1.01_X.1            0            0
    Y1.11_X.1            0            1
    Y2.00_X.0            0            0
    Y2.10_X.0            0            0
    Y2.01_X.0            0            0
    Y2.11_X.0            1            0
    Y2.00_X.1            0            0
    Y2.10_X.1            0            0
    Y2.01_X.1            0            0
    Y2.11_X.1            0            1
    
     
     param_set  (P)
     X  Y1.X.0  Y1.X.1  Y2.X.0  Y2.X.1> model <- make_model("X1 -> Y <- X2; X1 <-> Y; X2 <-> Y")
    > dim(model$P)
    [1] 68 64
    > model$parameters_df
    Mapping of model parameters to nodal types: 
    
    ----------------------------------------------------------------
    
     param_names: name of parameter
     node: name of endogeneous node associated with the parameter
     gen: partial causal ordering of the parameter's node
     param_set: parameter groupings forming a simplex
     given: if model has confounding gives conditioning nodal type
     param_value: parameter values
     priors: hyperparameters of the prior Dirichlet distribution 
    
    ----------------------------------------------------------------
    
    
     first 10 rows: 
            param_names node gen   param_set nodal_type      given param_value
    1              X1.0   X1   1          X1          0                 0.5000
    2              X1.1   X1   1          X1          1                 0.5000
    3              X2.0   X2   2          X2          0                 0.5000
    4              X2.1   X2   2          X2          1                 0.5000
    5  Y.0000_X1.0_X2.0    Y   3 Y.X1.0.X2.0       0000 X1.0, X2.0      0.0625
    6  Y.1000_X1.0_X2.0    Y   3 Y.X1.0.X2.0       1000 X1.0, X2.0      0.0625
    7  Y.0100_X1.0_X2.0    Y   3 Y.X1.0.X2.0       0100 X1.0, X2.0      0.0625
    8  Y.1100_X1.0_X2.0    Y   3 Y.X1.0.X2.0       1100 X1.0, X2.0      0.0625
    9  Y.0010_X1.0_X2.0    Y   3 Y.X1.0.X2.0       0010 X1.0, X2.0      0.0625
    10 Y.1010_X1.0_X2.0    Y   3 Y.X1.0.X2.0       1010 X1.0, X2.0      0.0625
       priors
    1       1
    2       1
    3       1
    4       1
    5       1
    6       1
    7       1
    8       1
    9       1
    10      1
    > 
    > # A single node graph is also possible
    > model <- make_model("X")
    Error in `mutate()`:
    ℹ In argument: `parents = vapply(...)`.
    Caused by error:
    ! Error evaluating duckdb query: Conversion Error: Could not convert string 'X' to BOOL
    Backtrace:
         ▆
      1. ├─CausalQueries::make_model("X")
      2. │ ├─dplyr::mutate(...)
      3. │ ├─dplyr::mutate(...)
      4. │ └─dplyr:::mutate.data.frame(...)
      5. │   └─dplyr::mutate(...)
      6. │     └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      7. │       ├─base::withCallingHandlers(...)
      8. │       └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      9. │         └─mask$eval_all_mutate(quo)
     10. │           └─dplyr (local) eval()
     11. ├─base::vapply(...)
     12. │ └─CausalQueries (local) FUN(X[[i]], ...)
     13. │   └─base::nrow(dplyr::filter(dag, children == n))
     14. │     ├─base::dim(x)
     15. │     └─base::dim.data.frame(x)
     16. │       └─base::.row_names_info(x, 2L)
     17. └─base::.handleSimpleError(...)
     18.   └─dplyr (local) h(simpleError(msg, call))
     19.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 81.7Mb
      sub-directories of 1Mb or more:
        libs  80.5Mb
    ```

*   checking for GNU extensions in Makefiles ... NOTE
    ```
    GNU make is a SystemRequirements.
    ```

# CCWeights

<details>

* Version: 0.1.6
* GitHub: NA
* Source code: https://github.com/cran/CCWeights
* Date/Publication: 2021-11-09 21:40:02 UTC
* Number of recursive dependencies: 93

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
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'unknown' to DOUBLE
    Execution halted
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
      ■■■■■                             14% | ETA: 15s
      ■■■■■■■■■■                        29% | ETA: 10s
      ■■■■■■■■■■■■                      36% | ETA: 11s
      ■■■■■■■■■■■■■■                    43% | ETA: 12s
      ■■■■■■■■■■■■■■■■■■■■              64% | ETA:  7s
      ■■■■■■■■■■■■■■■■■■■■■■            71% | ETA:  6s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■     93% | ETA:  1s
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
      ■■■■■■■■■■■                       33% | ETA:  4s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■        83% | ETA:  1s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■  100% | ETA:  0s
      WARNING: Phenotype association scores (phenodiff) not calculated for 252 of 2041 sites
      NOTE: 432 sites have more heterozygous individuals (1/0) than one of the homozygous states (1/1 or 0/0).
      
      Haplotyping was performed with hetphenos = F, meaning phenotype association scores for heterozygous sites was ignored.
      ✔ Haplotyping complete!
      Info saved in Haplotypes_30_E objects
      ■■■■■■■■■■■                       33% | ETA:  4s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■        83% | ETA:  1s
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
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'A' to DOUBLE
      Backtrace:
          ▆
       1. └─crosshap::crosshap_viz(HapObject = testHapObject, epsilon = 0.62) at test-crosshapviz.R:12:3
       2.   └─crosshap::build_bot_halfeyeplot(...)
       3.     ├─base::setdiff(...)
       4.     │ └─base::as.vector(y)
       5.     ├─base::unique(halfeyedat$hap)
       6.     └─base::unique.default(halfeyedat$hap)
      ── Error ('test-crosshapviz.R:17:3'): test alt crosshap viz ────────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'A' to DOUBLE
      Backtrace:
          ▆
       1. └─crosshap::crosshap_viz(...) at test-crosshapviz.R:17:3
       2.   └─crosshap::build_bot_halfeyeplot(...)
       3.     ├─base::setdiff(...)
       4.     │ └─base::as.vector(y)
       5.     ├─base::unique(halfeyedat$hap)
       6.     └─base::unique.default(halfeyedat$hap)
      ── Error ('test-crosshapviz.R:22:3'): test no labels crosshap viz ──────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'A' to DOUBLE
      Backtrace:
          ▆
       1. └─crosshap::crosshap_viz(...) at test-crosshapviz.R:22:3
       2.   └─crosshap::build_bot_halfeyeplot(...)
       3.     ├─base::setdiff(...)
       4.     │ └─base::as.vector(y)
       5.     ├─base::unique(halfeyedat$hap)
       6.     └─base::unique.default(halfeyedat$hap)
      ── Error ('test-crosshapviz.R:27:3'): test isolate_groups ──────────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'A' to DOUBLE
      Backtrace:
           ▆
        1. ├─crosshap::crosshap_viz(...) at test-crosshapviz.R:27:3
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
       12.         └─base::nrow(.data)
       13.           ├─base::dim(x)
       14.           └─base::dim.data.frame(x)
       15.             └─base::.row_names_info(x, 2L)
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

# dbGaPCheckup

<details>

* Version: 1.1.0
* GitHub: https://github.com/lwheinsberg/dbGaPCheckup
* Source code: https://github.com/cran/dbGaPCheckup
* Date/Publication: 2023-09-27 15:30:02 UTC
* Number of recursive dependencies: 116

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
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
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
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error in if (any(x < 0) || anyNA(x)) stop("all entries of 'x' must be nonnegative and finite"): missing value where TRUE/FALSE needed
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
      Error converted to warning: Error: Error evaluating duckdb query: Conversion Error: Could not convert string '(Missing)' to DOUBLE
      
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

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘a_usage_guide.Rmd’ using rmarkdown
    --- finished re-building ‘a_usage_guide.Rmd’
    
    --- re-building ‘b_test_choice_tree_pdf.Rmd’ using rmarkdown
    A new version of TeX Live has been released. If you need to install or update any LaTeX packages, you have to upgrade TinyTeX with tinytex::reinstall_tinytex(repository = "illinois").
    
    tlmgr: Local TeX Live (2023) is older than remote repository (2024).
    Cross release updates are only supported with
      update-tlmgr-latest(.sh/.exe) --update
    See https://tug.org/texlive/upgrade.html for details.
    Warning in system2("tlmgr", args, ...) :
      running command ''tlmgr' search --file --global '/pdfpages.sty'' had status 1
    ! LaTeX Error: File `pdfpages.sty' not found.
    
    ! Emergency stop.
    <read *> 
    
    Error: processing vignette 'b_test_choice_tree_pdf.Rmd' failed with diagnostics:
    LaTeX failed to compile /tmp/workdir/DescrTab2/new/DescrTab2.Rcheck/vign_test/DescrTab2/vignettes/b_test_choice_tree_pdf.tex. See https://yihui.org/tinytex/r/#debugging for debugging tips. See b_test_choice_tree_pdf.log for more info.
    --- failed re-building ‘b_test_choice_tree_pdf.Rmd’
    
    --- re-building ‘c_other_software_comparison.Rmd’ using rmarkdown
    --- finished re-building ‘c_other_software_comparison.Rmd’
    
    --- re-building ‘d_validation_statement.Rmd’ using rmarkdown
    --- finished re-building ‘d_validation_statement.Rmd’
    
    --- re-building ‘e_maintenance_guide.Rmd’ using rmarkdown
    --- finished re-building ‘e_maintenance_guide.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘b_test_choice_tree_pdf.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
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
      
      `environment(actual$check_df_for_rel)` is <env:namespace:duckplyr>
      `environment(expected$check_df_for_rel)` is <env:namespace:dplyr>
      
      `environment(actual$create_default_duckdb_connection)` is <env:namespace:duckplyr>
      `environment(expected$create_default_duckdb_connection)` is <env:namespace:dplyr>
      
      `actual$default_duckdb_connection$con@conn_ref` is <pointer: 0x5611e20c37e0>
      `expected$default_duckdb_connection$con@conn_ref` is <pointer: 0x5611e4a55600>
      
      `actual$default_duckdb_connection$con@driver@database_ref` is <pointer: 0x5611e17bf470>
      `expected$default_duckdb_connection$con@driver@database_ref` is <pointer: 0x5611e0304aa0>
      
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
      
      actual$duckplyr_macros[5:11] vs expected$duckplyr_macros[5:11]
        =="(x, y) AS x = y"
        !="(x, y) AS x <> y"
        ___divide"(x, y) AS CASE WHEN y = 0 THEN CASE WHEN x = 0 THEN CAST('NaN' AS double) WHEN x > 0 THEN CAST('+Infinity' AS double) ELSE CAST('-Infinity' AS double) END ELSE CAST(x AS double) / y END"
      - is.na"(x) AS (x IS NULL)"
      + is.na"(x) AS (x IS NULL OR isnan(x))"
        n"() AS CAST(COUNT(*) AS int32)"
        ___log10"(x) AS CASE WHEN x < 0 THEN CAST('NaN' AS double) WHEN x = 0 THEN CAST('-Inf' AS double) ELSE log10(x) END"
        ___log"(x) AS CASE WHEN x < 0 THEN CAST('NaN' AS double) WHEN x = 0 THEN CAST('-Inf' AS double) ELSE ln(x) END"
      
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
      `expected$rel_stats_env$rel_aggregate`: 14
      
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
      
      `environment(actual$rel_to_df.duckdb_relation)` is <env:namespace:duckplyr>
      `environment(expected$rel_to_df.duckdb_relation)` is <env:namespace:dplyr>
      
      `environment(actual$rel_to_df.relational_df)` is <env:namespace:duckplyr>
      `environment(expected$rel_to_df.relational_df)` is <env:namespace:dplyr>
      
      body(actual$rel_translate)[64:70] vs body(expected$rel_translate)[64:70]
        `                    values <- eval(expr[[3]], envir = baseenv())`
        `                    consts <- map(values, do_translate, in_window = in_window)`
        `                    ops <- map(consts, list, do_translate(expr[[2]]))`
      - `                    cmp <- map(ops, relexpr_function, name = "==")`
      + `                    cmp <- map(ops, relexpr_function, name = "___eq_na_matches_na")`
        `                    alt <- reduce(cmp, function(.x, .y) {`
        `                      relexpr_function("|", list(.x, .y))`
        `                    })`
      
      body(actual$rel_translate)[129:134] vs body(expected$rel_translate)[129:137]
        `                if (window) {`
        `                  partitions <- map(partition, relexpr_reference)`
        `                  fun <- relexpr_window(fun, partitions, order_bys, `
        `                    offset_expr = offset_expr, default_expr = default_expr)`
      + `                  if (name == "row_number") {`
      + `                    fun <- relexpr_function("as.integer", list(fun))`
      + `                  }`
        `                }`
        `                fun`
        `            }, cli::cli_abort("Internal: Unknown type {.val {typeof(expr)}}"))`
      
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
      
      00:00:55.590968
      Execution halted
    ```

# ern

<details>

* Version: 2.0.0
* GitHub: NA
* Source code: https://github.com/cran/ern
* Date/Publication: 2024-04-22 13:22:33 UTC
* Number of recursive dependencies: 95

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
      
      ern version: 2.0.0 
      
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
      
      MCMC paramters:
        Number of chains   : 1
        Burn-in iterations : 5
        MCMC iterations    : 5
      Wastewater data smoothed using loess method
      iterations Richardson-Lucy deconvolution:  20
      -----
      The clinical testing data you input is not daily.
      `ern` requires daily data to compute Rt, so it will infer daily reports from your inputs.
      Inference method for daily incidence: `renewal`
      See `prm.daily` and `prm.daily.check` arguments of `estimate_R_cl()` for daily inference options.
      -----
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
      
      MCMC paramters:
        Number of chains   : 1
        Burn-in iterations : 5
        MCMC iterations    : 5
      Aggregating inferred daily reports back using the original reporting schedule, and calculating relative difference with original reports...
      Filtering out any daily inferred reports associated with inferred aggregates outside of the specified tolerance of 10%...
        Before filtering : 56 daily reports
        After filtering  :  42 daily reports
      Using default config in `EpiEstim::estimate_R()`.
      Deconvolution reporting delays...
      iterations Richardson-Lucy deconvolution:  10
      Deconvolution incubation period...
      iterations Richardson-Lucy deconvolution:  10
      -----
      The clinical testing data you input is not daily.
      `ern` requires daily data to compute Rt, so it will infer daily reports from your inputs.
      Inference method for daily incidence: `renewal`
      See `prm.daily` and `prm.daily.check` arguments of `estimate_R_cl()` for daily inference options.
      -----
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
      
      MCMC paramters:
        Number of chains   : 2
        Burn-in iterations : 55
        MCMC iterations    : 55
      Aggregating inferred daily reports back using the original reporting schedule, and calculating relative difference with original reports...
      Filtering out any daily inferred reports associated with inferred aggregates outside of the specified tolerance of 10%...
        Before filtering : 56 daily reports
        After filtering  :  42 daily reports
      To reduce the number of observations dropped in filtering,either:
      - adjust MCMC parameters in prm.daily (burn, iter, chains) to improve chances of MCMC convergence,
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
      iterations Richardson-Lucy deconvolution:  10
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
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      iterations Richardson-Lucy deconvolution:  9
      
      ERROR: `si_distr` must be specified in `config.EpiEstim`. ABORTING!
      Wastewater data smoothed using loess method
      Wastewater data smoothed using rollmean method
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 167 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-agg_to_daily.R:100:3'): internal time index is correctly specified ──
      `check` is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 167 ]
      Error: Test failures
      Execution halted
    ```

# fqar

<details>

* Version: 0.5.3
* GitHub: https://github.com/equitable-equations/fqar
* Source code: https://github.com/cran/fqar
* Date/Publication: 2024-04-13 21:50:02 UTC
* Number of recursive dependencies: 76

Run `revdepcheck::cloud_details(, "fqar")` for more info

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
      > library(fqar)
      > 
      > test_check("fqar")
      data_set must be a dataframe obtained from the universalFQA.org website. Type ?download_transect for help.
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 361 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-download_assessment_list.R:10:5'): download_assessment_list works ──
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'hi' to DOUBLE
      Backtrace:
          ▆
       1. ├─testthat::expect_message(...) at test-download_assessment_list.R:10:5
       2. │ └─testthat:::expect_condition_matching(...)
       3. │   └─testthat:::quasi_capture(...)
       4. │     ├─testthat (local) .capture(...)
       5. │     │ └─base::withCallingHandlers(...)
       6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
       7. └─fqar::download_assessment_list(1, id == "hi")
      ── Error ('test-download_transect_list.R:5:3'): download_transect_list works ───
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'hi' to DOUBLE
      Backtrace:
          ▆
       1. ├─testthat::expect_message(download_transect_list(1, id == "hi")) at test-download_transect_list.R:5:3
       2. │ └─testthat:::expect_condition_matching(...)
       3. │   └─testthat:::quasi_capture(...)
       4. │     ├─testthat (local) .capture(...)
       5. │     │ └─base::withCallingHandlers(...)
       6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
       7. └─fqar::download_transect_list(1, id == "hi")
      
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 361 ]
      Error: Test failures
      Execution halted
    ```

# gtreg

<details>

* Version: 0.3.0
* GitHub: https://github.com/shannonpileggi/gtreg
* Source code: https://github.com/cran/gtreg
* Date/Publication: 2023-11-17 17:10:02 UTC
* Number of recursive dependencies: 102

Run `revdepcheck::cloud_details(, "gtreg")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(gtreg)
      
      Attaching package: 'gtreg'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      > 
      > test_check("gtreg")
      x The `column=` argument is required.
      i Run `show_header_names(x)` to list the column names and headers.
      Variable 'soc' likely not unique in gtsummary table, and the cell(s) you wish
      to display may not be accessible. This may occur when gtsummary tables with
      repeated variable names are combined using `tbl_stack()`.
      [ FAIL 3 | WARN 0 | SKIP 6 | PASS 85 ]
      
      ══ Skipped tests (6) ═══════════════════════════════════════════════════════════
      • On CRAN (6): 'test-add_overall.R:1:1', 'test-style_xxx.R:67:3',
        'test-style_xxx.R:110:3', 'test-tbl_ae.R:1:1', 'test-tbl_ae_count.R:1:1',
        'test-tbl_ae_focus.R:1:1'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-modify_header.R:46:3'): modify_header() works ────────────────
      ... %>% unique() (`actual`) not equal to c(NA, "**Control Group**, N = 44/100 (44%)", "**Experimental Group**, N = 56/100 (56%)") (`expected`).
      
      actual vs expected
        NA
      - "**Control Group**, N = 100/100 (100%)"
      + "**Control Group**, N = 44/100 (44%)"
      - "**Experimental Group**, N = 100/100 (100%)"
      + "**Experimental Group**, N = 56/100 (56%)"
      ── Failure ('test-modify_header.R:94:3'): modify_header() works ────────────────
      t1_modified$table_styling$header %>% filter(!hide) %>% dplyr::pull(label) (`actual`) not equal to c(...) (`expected`).
      
           actual                     | expected                                
       [1] "**Adverse Event**"        | "**Adverse Event**"       [1]           
       [2] "**Grade 1**, N = 10 / 10" - "**Grade 1**, N = 3 / 10" [2]           
       [3] "**Grade 2**, N = 10 / 10" - "**Grade 2**, N = 3 / 10" [3]           
       [4] "**Grade 3**, N = 10 / 10" - "**Grade 3**, N = 3 / 10" [4]           
       [5] "**Grade 4**, N = 10 / 10" - "**Grade 4**, N = 3 / 10" [5]           
       [6] "**Grade 5**, N = 10 / 10" - "**Grade 5**, N = 3 / 10" [6]           
       [7] "**Grade 1**, N = 10 / 10" - "**Grade 1**, N = 7 / 10" [7]           
       [8] "**Grade 2**, N = 10 / 10" - "**Grade 2**, N = 7 / 10" [8]           
       [9] "**Grade 3**, N = 10 / 10" - "**Grade 3**, N = 7 / 10" [9]           
      [10] "**Grade 4**, N = 10 / 10" - "**Grade 4**, N = 7 / 10" [10]          
       ... ...                          ...                       and 1 more ...
      ── Failure ('test-modify_header.R:101:3'): modify_header() works ───────────────
      ... %>% unique() (`actual`) not equal to c(NA, "**Drug A**, N = 3 / 10", "**Drug B**, N = 7 / 10") (`expected`).
      
      `actual`:   NA "**Drug A**, N = 10 / 10" "**Drug B**, N = 10 / 10"
      `expected`: NA "**Drug A**, N = 3 / 10"  "**Drug B**, N = 7 / 10" 
      
      [ FAIL 3 | WARN 0 | SKIP 6 | PASS 85 ]
      Error: Test failures
      Execution halted
    ```

# gtsummary

<details>

* Version: 1.7.2
* GitHub: https://github.com/ddsjoberg/gtsummary
* Source code: https://github.com/cran/gtsummary
* Date/Publication: 2023-07-15 21:10:14 UTC
* Number of recursive dependencies: 206

Run `revdepcheck::cloud_details(, "gtsummary")` for more info

</details>

## Newly broken

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘tbl_summary.Rmd’
      ...
    +     "API in 1999") .... [TRUNCATED] 
    
      When sourcing ‘tbl_summary.R’:
    Error: ℹ In argument: `df_stats = pmap(...)`.
    Caused by error in `pmap()`:
    ℹ In index: 1.
    Caused by error in `rename()`:
    ! Can't rename columns that don't exist.
    ✖ Column `N` doesn't exist.
    Execution halted
    
      ‘gallery.Rmd’ using ‘UTF-8’... OK
      ‘gtsummary_definition.Rmd’ using ‘UTF-8’... OK
      ‘inline_text.Rmd’ using ‘UTF-8’... OK
      ‘rmarkdown.Rmd’ using ‘UTF-8’... OK
      ‘tbl_regression.Rmd’ using ‘UTF-8’... OK
      ‘tbl_summary.Rmd’ using ‘UTF-8’... failed
      ‘themes.Rmd’ using ‘UTF-8’... OK
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

# mpwR

<details>

* Version: 0.1.5
* GitHub: NA
* Source code: https://github.com/cran/mpwR
* Date/Publication: 2023-11-13 23:33:26 UTC
* Number of recursive dependencies: 112

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
      [ FAIL 12 | WARN 67 | SKIP 0 | PASS 514 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test_CV.R:91:5'): get_CV_LFQ_pep works ──────────────────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '' to DOUBLE
      Backtrace:
           ▆
        1. ├─mpwR::get_CV_LFQ_pep(input_list = data) at test_CV.R:91:5
        2. │ └─... %>% ...
        3. ├─mpwR:::calculate_CV(...)
        4. │ └─mpwR:::get_full_profile(input_df = input_prepared, level = level)
        5. │   └─... %>% ...
        6. ├─dplyr::filter(., .data$Nr_Appearances == length(unique(input_df$Run_mpwR)))
        7. ├─dplyr::rename(., Nr_Appearances = n)
        8. ├─dplyr::count(., !!as.symbol(paste0(level, "_mpwR")))
        9. ├─dplyr::ungroup(.)
       10. ├─dplyr::distinct(., !!as.symbol(paste0(level, "_mpwR")), .keep_all = TRUE)
       11. ├─dplyr::group_by(., .data$Run_mpwR)
       12. └─dplyr:::group_by.data.frame(., .data$Run_mpwR)
       13.   └─dplyr::group_by(.data, ..., .add = .add, .drop = .drop)
       14.     └─dplyr::grouped_df(groups$data, groups$group_names, .drop)
       15.       └─dplyr:::compute_groups(data, vars, drop = drop)
       16.         ├─tibble::as_tibble(data)
       17.         └─tibble:::as_tibble.data.frame(data)
       18.           └─base::nrow(x)
       19.             ├─base::dim(x)
       20.             └─base::dim.data.frame(x)
       21.               └─base::.row_names_info(x, 2L)
      ── Error ('test_CV.R:254:5'): get_CV_LFQ_pg works ──────────────────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '' to DOUBLE
      Backtrace:
           ▆
        1. ├─mpwR::get_CV_LFQ_pg(input_list = data) at test_CV.R:254:5
        2. │ └─... %>% ...
        3. ├─mpwR:::calculate_CV(...)
        4. │ └─mpwR:::get_full_profile(input_df = input_prepared, level = level)
        5. │   └─... %>% ...
        6. ├─dplyr::filter(., .data$Nr_Appearances == length(unique(input_df$Run_mpwR)))
        7. ├─dplyr::rename(., Nr_Appearances = n)
        8. ├─dplyr::count(., !!as.symbol(paste0(level, "_mpwR")))
        9. ├─dplyr::ungroup(.)
       10. ├─dplyr::distinct(., !!as.symbol(paste0(level, "_mpwR")), .keep_all = TRUE)
       11. ├─dplyr::group_by(., .data$Run_mpwR)
       12. └─dplyr:::group_by.data.frame(., .data$Run_mpwR)
       13.   └─dplyr::group_by(.data, ..., .add = .add, .drop = .drop)
       14.     └─dplyr::grouped_df(groups$data, groups$group_names, .drop)
       15.       └─dplyr:::compute_groups(data, vars, drop = drop)
       16.         ├─tibble::as_tibble(data)
       17.         └─tibble:::as_tibble.data.frame(data)
       18.           └─base::nrow(x)
       19.             ├─base::dim(x)
       20.             └─base::dim.data.frame(x)
       21.               └─base::.row_names_info(x, 2L)
      ── Error ('test_DC.R:90:5'): get_DC_Report works ───────────────────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '' to DOUBLE
      Backtrace:
           ▆
        1. ├─mpwR::get_DC_Report(input_list = data, metric = "absolute") at test_DC.R:90:5
        2. │ └─mpwR:::generate_DC_Report(...)
        3. │   └─mpwR:::generate_DC_count(input_df = MQ_tidy_pg, level = "ProteinGroup.IDs")
        4. │     └─... %>% dplyr::rename(!!as.symbol(level) := n)
        5. ├─dplyr::rename(., `:=`(!!as.symbol(level), n))
        6. ├─dplyr::count(., .data$Nr_Appearances, .drop = FALSE)
        7. ├─dplyr::rename(., Nr_Appearances = n)
        8. ├─dplyr::count(., !!as.symbol(paste0(level, "_mpwR")))
        9. ├─dplyr::ungroup(.)
       10. ├─dplyr::distinct(., !!as.symbol(paste0(level, "_mpwR")), .keep_all = TRUE)
       11. ├─dplyr::group_by(., .data$Run_mpwR)
       12. └─dplyr:::group_by.data.frame(., .data$Run_mpwR)
       13.   └─dplyr::group_by(.data, ..., .add = .add, .drop = .drop)
       14.     └─dplyr::grouped_df(groups$data, groups$group_names, .drop)
       15.       └─dplyr:::compute_groups(data, vars, drop = drop)
       16.         ├─tibble::as_tibble(data)
       17.         └─tibble:::as_tibble.data.frame(data)
       18.           └─base::nrow(x)
       19.             ├─base::dim(x)
       20.             └─base::dim.data.frame(x)
       21.               └─base::.row_names_info(x, 2L)
      ── Error ('test_ID.R:90:5'): get_ID_Report works ───────────────────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '' to DOUBLE
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
        9. ├─dplyr::ungroup(.)
       10. ├─dplyr::distinct(., !!as.symbol(paste0(level, "_mpwR")), .keep_all = TRUE)
       11. ├─dplyr::group_by(...)
       12. └─dplyr:::group_by.data.frame(...)
       13.   └─dplyr::group_by(.data, ..., .add = .add, .drop = .drop)
       14.     └─dplyr::grouped_df(groups$data, groups$group_names, .drop)
       15.       └─dplyr:::compute_groups(data, vars, drop = drop)
       16.         ├─tibble::as_tibble(data)
       17.         └─tibble:::as_tibble.data.frame(data)
       18.           └─base::nrow(x)
       19.             ├─base::dim(x)
       20.             └─base::dim.data.frame(x)
       21.               └─base::.row_names_info(x, 2L)
      ── Error ('test_MC.R:59:5'): get_MC_Report works ───────────────────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '' to DOUBLE
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
       11.   └─dplyr::count(...)
       12.     ├─dplyr::group_by(x, ..., .add = TRUE, .drop = .drop)
       13.     └─dplyr:::group_by.data.frame(x, ..., .add = TRUE, .drop = .drop)
       14.       └─dplyr::group_by(.data, ..., .add = .add, .drop = .drop)
       15.         └─dplyr::grouped_df(groups$data, groups$group_names, .drop)
       16.           └─dplyr:::compute_groups(data, vars, drop = drop)
       17.             ├─tibble::as_tibble(data)
       18.             └─tibble:::as_tibble.data.frame(data)
       19.               └─base::nrow(x)
       20.                 ├─base::dim(x)
       21.                 └─base::dim.data.frame(x)
       22.                   └─base::.row_names_info(x, 2L)
      ── Error ('test_Upset.R:106:4'): get_Upset_list works ──────────────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '' to DOUBLE
      Backtrace:
          ▆
       1. ├─mpwR::get_Upset_list(input_list = data, level = "ProteinGroup.IDs") at test_Upset.R:106:4
       2. │ └─tidy_MQ_pep_pg(input_list[[i]][["data"]][["pg"]]) %>% ...
       3. ├─mpwR:::prepare_Upset(...)
       4. │ └─... %>% unlist()
       5. └─base::unlist(.)
      ── Error ('test_summary.R:116:2'): get_summary_Report works ────────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '' to DOUBLE
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
       10. ├─dplyr::ungroup(.)
       11. ├─dplyr::distinct(., !!as.symbol(paste0(level, "_mpwR")), .keep_all = TRUE)
       12. ├─dplyr::group_by(...)
       13. └─dplyr:::group_by.data.frame(...)
       14.   └─dplyr::group_by(.data, ..., .add = .add, .drop = .drop)
       15.     └─dplyr::grouped_df(groups$data, groups$group_names, .drop)
       16.       └─dplyr:::compute_groups(data, vars, drop = drop)
       17.         ├─tibble::as_tibble(data)
       18.         └─tibble:::as_tibble.data.frame(data)
       19.           └─base::nrow(x)
       20.             ├─base::dim(x)
       21.             └─base::dim.data.frame(x)
       22.               └─base::.row_names_info(x, 2L)
      ── Error ('test_utils_helpers.R:117:4'): tidy_MQ_pep_pg works ──────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '' to DOUBLE
      Backtrace:
          ▆
       1. ├─testthat::expect_equal(nrow(output), 7) at test_utils_helpers.R:117:4
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─base::nrow(output)
       5.   ├─base::dim(x)
       6.   └─base::dim.data.frame(x)
       7.     └─base::.row_names_info(x, 2L)
      ── Error ('test_utils_helpers.R:325:4'): tidy_MQ_LFQ works ─────────────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '' to DOUBLE
      Backtrace:
          ▆
       1. ├─testthat::expect_equal(nrow(output), 7) at test_utils_helpers.R:325:4
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─base::nrow(output)
       5.   ├─base::dim(x)
       6.   └─base::dim.data.frame(x)
       7.     └─base::.row_names_info(x, 2L)
      ── Error ('test_utils_reports.R:19:4'): generate_DC_Report works ───────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '' to DOUBLE
      Backtrace:
           ▆
        1. ├─mpwR:::generate_DC_Report(...) at test_utils_reports.R:19:4
        2. │ └─mpwR:::generate_DC_count(input_df = MQ_tidy_pg, level = "ProteinGroup.IDs")
        3. │   └─... %>% dplyr::rename(!!as.symbol(level) := n)
        4. ├─dplyr::rename(., `:=`(!!as.symbol(level), n))
        5. ├─dplyr::count(., .data$Nr_Appearances, .drop = FALSE)
        6. ├─dplyr::rename(., Nr_Appearances = n)
        7. ├─dplyr::count(., !!as.symbol(paste0(level, "_mpwR")))
        8. ├─dplyr::ungroup(.)
        9. ├─dplyr::distinct(., !!as.symbol(paste0(level, "_mpwR")), .keep_all = TRUE)
       10. ├─dplyr::group_by(., .data$Run_mpwR)
       11. └─dplyr:::group_by.data.frame(., .data$Run_mpwR)
       12.   └─dplyr::group_by(.data, ..., .add = .add, .drop = .drop)
       13.     └─dplyr::grouped_df(groups$data, groups$group_names, .drop)
       14.       └─dplyr:::compute_groups(data, vars, drop = drop)
       15.         ├─tibble::as_tibble(data)
       16.         └─tibble:::as_tibble.data.frame(data)
       17.           └─base::nrow(x)
       18.             ├─base::dim(x)
       19.             └─base::dim.data.frame(x)
       20.               └─base::.row_names_info(x, 2L)
      ── Error ('test_utils_reports.R:107:4'): generate_ID_Report works ──────────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '' to DOUBLE
      Backtrace:
           ▆
        1. ├─mpwR:::generate_ID_Report(...) at test_utils_reports.R:107:4
        2. │ ├─generate_level_count(MQ_tidy_pg, "ProteinGroup.IDs") %>% ...
        3. │ └─mpwR:::generate_level_count(MQ_tidy_pg, "ProteinGroup.IDs")
        4. │   └─... %>% dplyr::rename(!!as.symbol(level) := n)
        5. ├─dplyr::arrange(., .data$Run_mpwR)
        6. ├─dplyr::rename(., `:=`(!!as.symbol(level), n))
        7. ├─dplyr::count(., .data$Run_mpwR)
        8. ├─dplyr::ungroup(.)
        9. ├─dplyr::distinct(., !!as.symbol(paste0(level, "_mpwR")), .keep_all = TRUE)
       10. ├─dplyr::group_by(...)
       11. └─dplyr:::group_by.data.frame(...)
       12.   └─dplyr::group_by(.data, ..., .add = .add, .drop = .drop)
       13.     └─dplyr::grouped_df(groups$data, groups$group_names, .drop)
       14.       └─dplyr:::compute_groups(data, vars, drop = drop)
       15.         ├─tibble::as_tibble(data)
       16.         └─tibble:::as_tibble.data.frame(data)
       17.           └─base::nrow(x)
       18.             ├─base::dim(x)
       19.             └─base::dim.data.frame(x)
       20.               └─base::.row_names_info(x, 2L)
      ── Error ('test_utils_reports.R:322:4'): generate_summary_Report works ─────────
      Error: Error evaluating duckdb query: Conversion Error: Could not convert string '' to DOUBLE
      Backtrace:
           ▆
        1. ├─mpwR:::generate_summary_Report(...) at test_utils_reports.R:322:4
        2. │ └─mpwR:::generate_ID_Report(...)
        3. │   ├─generate_level_count(MQ_tidy_pg, "ProteinGroup.IDs") %>% ...
        4. │   └─mpwR:::generate_level_count(MQ_tidy_pg, "ProteinGroup.IDs")
        5. │     └─... %>% dplyr::rename(!!as.symbol(level) := n)
        6. ├─dplyr::arrange(., .data$Run_mpwR)
        7. ├─dplyr::rename(., `:=`(!!as.symbol(level), n))
        8. ├─dplyr::count(., .data$Run_mpwR)
        9. ├─dplyr::ungroup(.)
       10. ├─dplyr::distinct(., !!as.symbol(paste0(level, "_mpwR")), .keep_all = TRUE)
       11. ├─dplyr::group_by(...)
       12. └─dplyr:::group_by.data.frame(...)
       13.   └─dplyr::group_by(.data, ..., .add = .add, .drop = .drop)
       14.     └─dplyr::grouped_df(groups$data, groups$group_names, .drop)
       15.       └─dplyr:::compute_groups(data, vars, drop = drop)
       16.         ├─tibble::as_tibble(data)
       17.         └─tibble:::as_tibble.data.frame(data)
       18.           └─base::nrow(x)
       19.             ├─base::dim(x)
       20.             └─base::dim.data.frame(x)
       21.               └─base::.row_names_info(x, 2L)
      
      [ FAIL 12 | WARN 67 | SKIP 0 | PASS 514 ]
      Error: Test failures
      Execution halted
    ```

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘Workflow.Rmd’
      ...
    
    > library(flextable)
    
    > files <- create_example()
    
    > ID_Reports <- get_ID_Report(input_list = files)
    
      When sourcing ‘Workflow.R’:
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string '' to DOUBLE
    Execution halted
    
      ‘Import.Rmd’ using ‘UTF-8’... OK
      ‘Output_Explanations.Rmd’ using ‘UTF-8’... OK
      ‘Requirements.Rmd’ using ‘UTF-8’... OK
      ‘Workflow.Rmd’ using ‘UTF-8’... failed
    ```

*   checking re-building of vignette outputs ... NOTE
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
    
    Quitting from lines  at lines 56-57 [ID-Report] (Workflow.Rmd)
    Error: processing vignette 'Workflow.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Conversion Error: Could not convert string '' to DOUBLE
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

# multiverse

<details>

* Version: 0.6.1
* GitHub: https://github.com/MUCollective/multiverse
* Source code: https://github.com/cran/multiverse
* Date/Publication: 2022-07-04 13:20:02 UTC
* Number of recursive dependencies: 134

Run `revdepcheck::cloud_details(, "multiverse")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(multiverse)
      Loading required package: knitr
      > 
      > test_check("multiverse")
      Error in FUN(X[[i]], ...) : error
       test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_warning -> quasi_capture -> .capture -> withCallingHandlers -> eval_bare -> execute_multiverse -> mapply ->  -> app -> FUN -> tryStack -> lapply -> FUN -> FUN -> stop -> FUN(X[[i]], ...) 
      
      Error in FUN(X[[i]], ...) : error
       test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_warning -> quasi_capture -> .capture -> withCallingHandlers -> eval_bare -> execute_multiverse -> mapply ->  -> app -> FUN -> tryStack -> lapply -> FUN -> FUN -> stop -> FUN(X[[i]], ...) 
      
      [ FAIL 1 | WARN 1 | SKIP 0 | PASS 207 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-parse_multiverse.R:389:3'): `parse_multiverse` works when conditions are specified ──
      as.list(p_tbl_df) not equal to as.list(p_tbl_df.ref).
      Component ".universe": Numeric: lengths (5, 4) differ
      Component "values_y": Lengths (5, 4) differ (string compare on first 4)
      Component "values_y": 1 string mismatch
      Component "values_z": Lengths (5, 4) differ (string compare on first 4)
      Component "values_z": 2 string mismatches
      
      [ FAIL 1 | WARN 1 | SKIP 0 | PASS 207 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘branch.Rmd’
      ...
    
    > M = multiverse()
    
    > M = multiverse()
    
    > execute_multiverse(M)
    
      When sourcing ‘branch.R’:
    Error: invalid 'n' - must contain at least one non-missing element, got none.
    Execution halted
    when running code in ‘frequentist-multiverse-analysis.Rmd’
      ...
    # A tibble: 1 × 5
      .universe .parameter_assignment .code  .results   .errors
          <int> <list>                <list> <list>     <lgl>  
    1         1 <list [0]>            <NULL> <list [0]> NA     
    
    > execute_multiverse(M)
    
      When sourcing ‘frequentist-multiverse-analysis.R’:
    Error: invalid 'n' - must contain at least one non-missing element, got none.
    Execution halted
    
      ‘branch.Rmd’ using ‘UTF-8’... failed
      ‘conditions.Rmd’ using ‘UTF-8’... OK
      ‘durante-multiverse-analysis.Rmd’ using ‘UTF-8’... OK
      ‘execution-multiverse.Rmd’ using ‘UTF-8’... OK
      ‘frequentist-multiverse-analysis.Rmd’ using ‘UTF-8’... failed
      ‘hurricane.Rmd’ using ‘UTF-8’... OK
      ‘multiverse-in-rmd.Rmd’ using ‘UTF-8’... OK
      ‘visualising-multiverse.Rmd’ using ‘UTF-8’... OK
    ```

# NeuroDecodeR

<details>

* Version: 0.2.0
* GitHub: https://github.com/emeyers/NeuroDecodeR
* Source code: https://github.com/cran/NeuroDecodeR
* Date/Publication: 2024-03-15 11:40:02 UTC
* Number of recursive dependencies: 86

Run `revdepcheck::cloud_details(, "NeuroDecodeR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘NeuroDecodeR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: get_num_label_repetitions
    > ### Title: Get the number of sites have at least k trials of each label
    > ###   level
    > ### Aliases: get_num_label_repetitions
    > 
    > ### ** Examples
    > 
    > data_file <- system.file("extdata/ZD_150bins_50sampled.Rda", package = "NeuroDecodeR")
    > label_rep_info <- get_num_label_repetitions(data_file, "stimulus_ID")
    Error: Error evaluating duckdb query: Parser Error: Maximum tree depth of 200 exceeded in logical planner
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(NeuroDecodeR)
      > 
      > test_check("NeuroDecodeR")
      
        |                                                                            
        |                                                                      |   0%
        |                                                                            
        |==================                                                    |  25%
        |                                                                            
        |===================================                                   |  50%
        |                                                                            
        |====================================================                  |  75%
        |                                                                            
        |======================================================================| 100%
        |                                                                            
        |                                                                      |   0%
        |                                                                            
        |===================================                                   |  50%
        |                                                                            
        |======================================================================| 100%
        |                                                                            
        |                                                                      |   0%
        |                                                                            
        |===================================                                   |  50%
        |                                                                            
        |======================================================================| 100%[1] "2024-04-23 17:23:09 UTC"
       [1] 0.1388889 0.1587302 0.1309524 0.1507937 0.1309524 0.1547619 0.1388889
       [8] 0.1666667 0.1309524 0.1587302 0.3333333 0.8412698 0.8452381 0.8174603
      [15] 0.7539683 0.6904762 0.6111111 0.7023810
      1 Mb
      
        |                                                                            
        |                                                                      |   0%
        |                                                                            
        |===================================                                   |  50%
        |                                                                            
        |======================================================================| 100%[ FAIL 1 | WARN 0 | SKIP 0 | PASS 160 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-bin_convert_data.R:237:3'): get_num_label_repetitions() correctly assesses how many times a label was repeated ──
      Error: Error evaluating duckdb query: Parser Error: Maximum tree depth of 200 exceeded in logical planner
      Backtrace:
           ▆
        1. └─NeuroDecodeR::get_num_label_repetitions(file_name, "stimulus_ID") at test-bin_convert_data.R:237:3
        2.   ├─dplyr::left_join(...)
        3.   └─dplyr:::left_join.data.frame(...)
        4.     └─dplyr::left_join(...)
        5.       └─dplyr:::join_mutate(...)
        6.         ├─tibble::as_tibble(x, .name_repair = "minimal")
        7.         └─tibble:::as_tibble.data.frame(x, .name_repair = "minimal")
        8.           └─base::nrow(x)
        9.             ├─base::dim(x)
       10.             └─base::dim.data.frame(x)
       11.               └─base::.row_names_info(x, 2L)
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 160 ]
      Error: Test failures
      Execution halted
    ```

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘introduction_tutorial.Rmd’
      ...
    
    > binned_file_name <- system.file(file.path("extdata", 
    +     "ZD_150bins_50sampled.Rda"), package = "NeuroDecodeR")
    
    > label_rep_info <- get_num_label_repetitions(binned_file_name, 
    +     "stimulus_ID")
    
      When sourcing ‘introduction_tutorial.R’:
    Error: Error evaluating duckdb query: Parser Error: Maximum tree depth of 200 exceeded in logical planner
    Execution halted
    
      ‘NDR_object_specification.Rmd’ using ‘UTF-8’... OK
      ‘data_formats.Rmd’ using ‘UTF-8’... OK
      ‘datasets.Rmd’ using ‘UTF-8’... OK
      ‘generalization_tutorial.Rmd’ using ‘UTF-8’... OK
      ‘introduction_tutorial.Rmd’ using ‘UTF-8’... failed
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘NDR_object_specification.Rmd’ using rmarkdown
    --- finished re-building ‘NDR_object_specification.Rmd’
    
    --- re-building ‘data_formats.Rmd’ using rmarkdown
    --- finished re-building ‘data_formats.Rmd’
    
    --- re-building ‘datasets.Rmd’ using rmarkdown
    --- finished re-building ‘datasets.Rmd’
    
    --- re-building ‘generalization_tutorial.Rmd’ using rmarkdown
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

# PupilPre

<details>

* Version: 0.6.2
* GitHub: NA
* Source code: https://github.com/cran/PupilPre
* Date/Publication: 2020-03-10 05:20:02 UTC
* Number of recursive dependencies: 72

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

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘PupilPre_Basic_Preprocessing.Rmd’
      ...
        All required columns are present in the data.
    Checking optional columns...
        All optional columns are present in the data.
    Working on required columns...
        RECORDING_SESSION_LABEL renamed to Subject. 
        item renamed to Item.
    
      When sourcing ‘PupilPre_Basic_Preprocessing.R’:
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'factor' to DOUBLE
    Execution halted
    when running code in ‘PupilPre_Message_Alignment.Rmd’
      ...
        All required columns are present in the data.
    Checking optional columns...
        All optional columns are present in the data.
    Working on required columns...
        RECORDING_SESSION_LABEL renamed to Subject. 
        item renamed to Item.
    
      When sourcing ‘PupilPre_Message_Alignment.R’:
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'factor' to DOUBLE
    Execution halted
    
      ‘PupilPre_Basic_Preprocessing.Rmd’ using ‘UTF-8’... failed
      ‘PupilPre_Cleanup.Rmd’ using ‘UTF-8’... OK
      ‘PupilPre_Interpolation_and_Filtering.Rmd’ using ‘UTF-8’... OK
      ‘PupilPre_Message_Alignment.Rmd’ using ‘UTF-8’... failed
      ‘PupilPre_Plotting.Rmd’ using ‘UTF-8’... OK
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘PupilPre_Basic_Preprocessing.Rmd’ using rmarkdown
    
    Quitting from lines  at lines 80-81 [unnamed-chunk-4] (PupilPre_Basic_Preprocessing.Rmd)
    Error: processing vignette 'PupilPre_Basic_Preprocessing.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Conversion Error: Could not convert string 'factor' to DOUBLE
    --- failed re-building ‘PupilPre_Basic_Preprocessing.Rmd’
    
    --- re-building ‘PupilPre_Cleanup.Rmd’ using rmarkdown
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

# sampler

<details>

* Version: 0.2.4
* GitHub: https://github.com/mbaldassaro/sampler
* Source code: https://github.com/cran/sampler
* Date/Publication: 2019-09-15 15:40:02 UTC
* Number of recursive dependencies: 24

Run `revdepcheck::cloud_details(, "sampler")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘sampler-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: cpro
    > ### Title: Calculate proportion and margin of error (unequal-sized cluster
    > ###   sample)
    > ### Aliases: cpro
    > 
    > ### ** Examples
    > 
    > alresults <- ssamp(albania, 890, qarku)
    > cpro(df=alresults, numerator=totalVoters, denominator=zgjedhes, ci=95)
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string '' to INT32
    Execution halted
    ```

# sapfluxnetr

<details>

* Version: 0.1.4
* GitHub: https://github.com/sapfluxnet/sapfluxnetr
* Source code: https://github.com/cran/sapfluxnetr
* Date/Publication: 2023-01-25 15:30:02 UTC
* Number of recursive dependencies: 82

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

# starschemar

<details>

* Version: 1.2.4
* GitHub: https://github.com/josesamos/starschemar
* Source code: https://github.com/cran/starschemar
* Date/Publication: 2024-01-08 15:30:02 UTC
* Number of recursive dependencies: 59

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
* Number of recursive dependencies: 70

Run `revdepcheck::cloud_details(, "streamDepletr")` for more info

</details>

## Newly broken

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘intro-to-streamDepletr.Rmd’
      ...
    1 Dorn Creek            0.426
    2 Sixmile Creek         0.574
    
    > fi <- dplyr::left_join(dplyr::summarize(dplyr::group_by(subset(rdll, 
    +     reach %in% fi$reach), reach), dist_min = min(dist)), fi, 
    +     ., by =  .... [TRUNCATED] 
    
      When sourcing ‘intro-to-streamDepletr.R’:
    Error: object '.' not found
    Execution halted
    
      ‘intro-to-streamDepletr.Rmd’ using ‘UTF-8’... failed
    ```

*   checking re-building of vignette outputs ... NOTE
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
* Number of recursive dependencies: 93

Run `revdepcheck::cloud_details(, "text2sdg")` for more info

</details>

## Newly broken

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘text2sdg.Rmd’
      ...
    Elsevier     0.75   0.24     1.00 0.29 0.23  0.27
    SDGO         0.34   0.14     0.29 1.00 0.35  0.19
    SDSN         0.27   0.12     0.23 0.35 1.00  0.19
    SIRIS        0.32   0.30     0.27 0.19 0.19  1.00
    
    > crosstab_sdg(hits_all, compare = "sdgs") %>% round(2)
    
      When sourcing ‘text2sdg.R’:
    Error: object 'document' not found
    Execution halted
    
      ‘text2sdg.Rmd’ using ‘UTF-8’... failed
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘text2sdg.Rmd’ using rmarkdown
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
* Number of recursive dependencies: 96

Run `revdepcheck::cloud_details(, "tidytransit")` for more info

</details>

## Newly broken

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘frequency.Rmd’
      ...
    |104N    |1        |            0|ASP18GEN-1087-Weekday-00 |           31|          465|
    |104S    |1        |            1|ASP18GEN-1087-Weekday-00 |           47|          306|
    
    > one_line_stops <- am_stop_freq %>% filter(route_id == 
    +     1 & direction_id == 0) %>% left_join(gtfs$stops, by = "stop_id") %>% 
    +     mutate(mean .... [TRUNCATED] 
    
      When sourcing ‘frequency.R’:
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'GS' to DOUBLE
    Execution halted
    
      ‘frequency.Rmd’ using ‘UTF-8’... failed
      ‘introduction.Rmd’ using ‘UTF-8’... OK
      ‘servicepatterns.Rmd’ using ‘UTF-8’... OK
      ‘timetable.Rmd’ using ‘UTF-8’... OK
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘frequency.Rmd’ using rmarkdown
    
    Quitting from lines  at lines 198-202 [unnamed-chunk-12] (frequency.Rmd)
    Error: processing vignette 'frequency.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Conversion Error: Could not convert string 'GS' to DOUBLE
    --- failed re-building ‘frequency.Rmd’
    
    --- re-building ‘introduction.Rmd’ using rmarkdown
    --- finished re-building ‘introduction.Rmd’
    
    --- re-building ‘servicepatterns.Rmd’ using rmarkdown
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  7.1Mb
      sub-directories of 1Mb or more:
        doc       2.0Mb
        extdata   4.5Mb
    ```

# unheadr

<details>

* Version: 0.3.3
* GitHub: https://github.com/luisDVA/unheadr
* Source code: https://github.com/cran/unheadr
* Date/Publication: 2022-08-15 05:40:02 UTC
* Number of recursive dependencies: 74

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
* Number of recursive dependencies: 100

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
* Number of recursive dependencies: 102

Run `revdepcheck::cloud_details(, "vivaldi")` for more info

</details>

## Newly broken

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘vignette.Rmd’
      ...
    "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random3_m1_AF_random-a3_frac_0.01_BWA_varscan_custom.ann.vcf", "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random3_m2_AF_random-a1_frac_0.01_BWA_freebayes_custom.ann.vcf", "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random3_m2_AF_random-a1_frac_0.01_BWA_ivar_custom.ann.vcf", "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random3_m2_AF_random-a1_frac_0.01_BWA_varscan_custom.ann.vcf", 
    "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random3_m2_AF_random-a2_frac_0.01_BWA_freebayes_custom.ann.vcf", "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random3_m2_AF_random-a2_frac_0.01_BWA_ivar_custom.ann.vcf", "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random3_m2_AF_random-a2_frac_0.01_BWA_varscan_custom.ann.vcf", "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random3_m2_AF_random-a3_frac_0.01_BWA_freebayes_custom.ann.vcf", 
    "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random3_m2_AF_random-a3_frac_0.01_BWA_ivar_custom.ann.vcf", "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random3_m2_AF_random-a3_frac_0.01_BWA_varscan_custom.ann.vcf", "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random4_m1_AF_random-a4_frac_0.01_BWA_freebayes_custom.ann.vcf", "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random4_m1_AF_random-a4_frac_0.01_BWA_ivar_custom.ann.vcf", 
    "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random4_m1_AF_random-a4_frac_0.01_BWA_varscan_custom.ann.vcf", "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random4_m2_AF_random-a4_frac_0.01_BWA_freebayes_custom.ann.vcf", "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random4_m2_AF_random-a4_frac_0.01_BWA_ivar_custom.ann.vcf", "/tmp/workdir/vivaldi/new/vivaldi.Rcheck/vivaldi/extdata/vcfs/H1N1-random4_m2_AF_random-a4_frac_0.01_BWA_varscan_custom.ann.vcf"
    )
    Sample name is: H1N1-random3_m1_AF_random-a1_frac_0.01_BWA_freebayes_custom.ann
    
      When sourcing ‘vignette.R’:
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'A' to DOUBLE
    Execution halted
    
      ‘vignette.Rmd’ using ‘UTF-8’... failed
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘vignette.Rmd’ using rmarkdown
    
    Quitting from lines  at lines 76-83 [unnamed-chunk-5] (vignette.Rmd)
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
* Number of recursive dependencies: 69

Run `revdepcheck::cloud_details(, "VWPre")` for more info

</details>

## Newly broken

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘VWPre_Basic_Preprocessing.Rmd’
      ...
    Checking optional columns...
        The following optional is not present in the data:  EYE_TRACKED 
    
    Working on required columns...
        RECORDING_SESSION_LABEL renamed to Subject. 
        itemid renamed to Item.
    
      When sourcing ‘VWPre_Basic_Preprocessing.R’:
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'factor' to DOUBLE
    Execution halted
    
      ‘VWPre_Basic_Preprocessing.Rmd’ using ‘UTF-8’... failed
      ‘VWPre_Interest_Areas.Rmd’ using ‘UTF-8’... OK
      ‘VWPre_Message_Alignment.Rmd’ using ‘UTF-8’... OK
      ‘VWPre_Plotting.Rmd’ using ‘UTF-8’... OK
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘VWPre_Basic_Preprocessing.Rmd’ using rmarkdown
    
    Quitting from lines  at lines 78-79 [unnamed-chunk-4] (VWPre_Basic_Preprocessing.Rmd)
    Error: processing vignette 'VWPre_Basic_Preprocessing.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Conversion Error: Could not convert string 'factor' to DOUBLE
    --- failed re-building ‘VWPre_Basic_Preprocessing.Rmd’
    
    --- re-building ‘VWPre_Interest_Areas.Rmd’ using rmarkdown
    --- finished re-building ‘VWPre_Interest_Areas.Rmd’
    
    --- re-building ‘VWPre_Message_Alignment.Rmd’ using rmarkdown
    --- finished re-building ‘VWPre_Message_Alignment.Rmd’
    
    --- re-building ‘VWPre_Plotting.Rmd’ using rmarkdown
    ```

# zipcodeR

<details>

* Version: 0.3.5
* GitHub: https://github.com/gavinrozzi/zipcodeR
* Source code: https://github.com/cran/zipcodeR
* Date/Publication: 2022-10-03 22:00:02 UTC
* Number of recursive dependencies: 100

Run `revdepcheck::cloud_details(, "zipcodeR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘zipcodeR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: zip_distance
    > ### Title: Calculate the distance between two ZIP codes in miles
    > ### Aliases: zip_distance
    > 
    > ### ** Examples
    > 
    > zip_distance("08731", "08901")
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'NA' to DOUBLE
    Execution halted
    ```

*   checking running R code from vignettes ... ERROR
    ```
    Errors in running code in vignettes:
    when running code in ‘geographic.Rmd’
      ...
    
    > knitr::opts_chunk$set(echo = TRUE)
    
    > set.seed(1000)
    
    > zip_distance("08731", "08753")
    
      When sourcing ‘geographic.R’:
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'NA' to DOUBLE
    Execution halted
    
      ‘geographic.Rmd’ using ‘UTF-8’... failed
      ‘zipcodeR.Rmd’ using ‘UTF-8’... OK
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘geographic.Rmd’ using knitr
    
    Quitting from lines  at lines 27-28 [unnamed-chunk-1] (geographic.Rmd)
    Error: processing vignette 'geographic.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Conversion Error: Could not convert string 'NA' to DOUBLE
    --- failed re-building ‘geographic.Rmd’
    
    --- re-building ‘zipcodeR.Rmd’ using knitr
    --- finished re-building ‘zipcodeR.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘geographic.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 5 marked UTF-8 strings
    ```

