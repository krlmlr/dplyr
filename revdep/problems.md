# admiral

<details>

* Version: 1.2.0
* GitHub: https://github.com/pharmaverse/admiral
* Source code: https://github.com/cran/admiral
* Date/Publication: 2025-01-15 19:50:02 UTC
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
      > test_check("admiral", stop_on_warning = TRUE)
      [ FAIL 0 | WARN 20 | SKIP 116 | PASS 672 ]
      
      ══ Skipped tests (116) ═════════════════════════════════════════════════════════
      • On CRAN (116): 'test-admiral_options.R:9:3', 'test-call_derivation.R:112:3',
        'test-call_derivation.R:131:3', 'test-call_derivation.R:152:3',
        'test-call_derivation.R:173:3', 'test-call_derivation.R:194:3',
        'test-call_derivation.R:212:3', 'test-call_user_fun.R:2:3',
        'test-compute_age_years.R:40:3', 'test-compute_scale.R:111:3',
        'test-compute_scale.R:124:3', 'test-consolidate_metadata.R:75:3',
        'test-create_query_data.R:263:3', 'test-create_query_data.R:324:3',
        'test-create_query_data.R:336:3', 'test-create_query_data.R:347:3',
        'test-create_query_data.R:360:3', 'test-create_query_data.R:373:3',
        'test-create_query_data.R:384:3', 'test-create_query_data.R:396:3',
        'test-create_query_data.R:407:3', 'test-create_query_data.R:418:3',
        'test-create_query_data.R:429:3', 'test-create_query_data.R:441:3',
        'test-create_query_data.R:454:3', 'test-create_query_data.R:467:3',
        'test-create_query_data.R:475:3', 'test-create_single_dose_dataset.R:220:3',
        'test-create_single_dose_dataset.R:237:3',
        'test-create_single_dose_dataset.R:261:3',
        'test-create_single_dose_dataset.R:277:3',
        'test-derive_extreme_event.R:620:3', 'test-derive_joined.R:256:3',
        'test-derive_merged.R:146:3', 'test-derive_merged.R:281:3',
        'test-derive_merged.R:296:3', 'test-derive_merged.R:312:3',
        'test-derive_merged.R:325:3', 'test-derive_merged.R:339:3',
        'test-derive_merged.R:405:3', 'test-derive_merged.R:478:3',
        'test-derive_merged.R:513:3', 'test-derive_merged.R:646:3',
        'test-derive_merged.R:659:3', 'test-derive_param_bmi.R:114:3',
        'test-derive_param_bsa.R:305:3', 'test-derive_param_computed.R:477:3',
        'test-derive_param_computed.R:514:3', 'test-derive_param_computed.R:531:3',
        'test-derive_param_computed.R:552:3',
        'test-derive_param_extreme_record.R:32:3', 'test-derive_param_map.R:149:3',
        'test-derive_param_qtc.R:112:3', 'test-derive_param_rr.R:52:3',
        'test-derive_param_tte.R:454:3', 'test-derive_param_tte.R:515:3',
        'test-derive_param_tte.R:576:3', 'test-derive_param_tte.R:635:3',
        'test-derive_param_tte.R:921:3', 'test-derive_param_tte.R:981:3',
        'test-derive_param_tte.R:1122:3', 'test-derive_var_base.R:128:3',
        'test-derive_var_dthcaus.R:32:3', 'test-derive_var_dthcaus.R:664:3',
        'test-derive_var_extreme_date.R:28:3',
        'test-derive_var_extreme_date.R:171:3',
        'test-derive_var_extreme_date.R:325:3',
        'test-derive_var_merged_ef_msrc.R:130:3', 'test-derive_var_ontrtfl.R:419:3',
        'test-derive_var_trtemfl.R:154:3', 'test-derive_var_trtemfl.R:165:3',
        'test-derive_var_trtemfl.R:176:3', 'test-derive_var_trtemfl.R:187:3',
        'test-derive_var_trtemfl.R:210:3', 'test-derive_vars_aage.R:69:3',
        'test-derive_vars_aage.R:86:3', 'test-derive_vars_aage.R:149:3',
        'test-derive_vars_atc.R:83:3', 'test-derive_vars_cat.R:79:3',
        'test-derive_vars_cat.R:331:3', 'test-derive_vars_cat.R:347:3',
        'test-derive_vars_crit_flag.R:76:3', 'test-derive_vars_crit_flag.R:97:3',
        'test-derive_vars_dt.R:181:3', 'test-derive_vars_dt.R:197:3',
        'test-derive_vars_dt.R:502:3', 'test-derive_vars_dt.R:547:3',
        'test-derive_vars_dt.R:566:3', 'test-derive_vars_dtm.R:356:3',
        'test-derive_vars_dtm.R:553:3', 'test-derive_vars_dtm.R:637:3',
        'test-derive_vars_dtm.R:685:3', 'test-derive_vars_dtm.R:705:3',
        'test-derive_vars_dtm.R:785:3', 'test-derive_vars_dy.R:248:3',
        'test-derive_vars_query.R:152:3', 'test-derive_vars_query.R:173:3',
        'test-derive_vars_query.R:247:3', 'test-derive_vars_query.R:263:3',
        'test-derive_vars_transposed.R:66:3', 'test-derive_vars_transposed.R:111:3',
        'test-dt_level.R:42:3', 'test-dt_level.R:49:3', 'test-duplicates.R:43:3',
        'test-get_summary_records.R:25:3', 'test-period_dataset.R:128:3',
        'test-period_dataset.R:151:3', 'test-period_dataset.R:174:3',
        'test-period_dataset.R:321:3', 'test-period_dataset.R:348:3',
        'test-roxygen2.R:20:3', 'test-transform_range.R:28:3',
        'test-transform_range.R:40:3', 'test-user_helpers.R:16:3',
        'test-user_helpers.R:41:3', 'test-user_utils.R:250:3'
      
      [ FAIL 0 | WARN 20 | SKIP 116 | PASS 672 ]
      Error: Tests generated warnings
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

* Version: 18.1.0.1
* GitHub: https://github.com/apache/arrow
* Source code: https://github.com/cran/arrow
* Date/Publication: 2025-01-08 06:40:02 UTC
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
      [ FAIL 1 | WARN 0 | SKIP 85 | PASS 6672 ]
      
      ══ Skipped tests (85) ══════════════════════════════════════════════════════════
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
      • On CRAN (66): 'test-Array.R:209:3', 'test-Array.R:216:3',
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
        'test-dplyr-summarize.R:835:3', 'test-dplyr-summarize.R:1287:3',
        'test-duckdb.R:19:1', 'test-extension.R:43:3', 'test-extension.R:214:3',
        'test-extra-package-roundtrip.R:18:1', 'test-feather.R:143:3',
        'test-feather.R:262:3', 'test-feather.R:332:3', 'test-filesystem.R:138:3',
        'test-filesystem.R:146:3', 'test-filesystem.R:155:3',
        'test-filesystem.R:167:3', 'test-filesystem.R:178:3',
        'test-filesystem.R:193:3', 'test-gcs.R:118:1', 'test-io.R:71:3',
        'test-ipc-stream.R:44:3', 'test-ipc-stream.R:48:3', 'test-parquet.R:116:3',
        'test-parquet.R:485:3', 'test-python.R:19:3', 'test-safe-call-into-r.R:21:3',
        'test-safe-call-into-r.R:36:3', 'test-safe-call-into-r.R:51:3',
        'test-type.R:61:3', 'test-udf.R:62:3', 'test-util.R:37:3'
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
      
      [ FAIL 1 | WARN 0 | SKIP 85 | PASS 6672 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 125.9Mb
      sub-directories of 1Mb or more:
        R       7.5Mb
        libs  117.7Mb
    ```

*   checking Rd cross-references ... NOTE
    ```
    Package unavailable to check Rd xrefs: ‘readr’
    ```

# datacutr

<details>

* Version: 0.2.2
* GitHub: https://github.com/pharmaverse/datacutr
* Source code: https://github.com/cran/datacutr
* Date/Publication: 2025-01-10 10:40:01 UTC
* Number of recursive dependencies: 120

Run `revdepcheck::cloud_details(, "datacutr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(datacutr)
      > 
      > test_check("datacutr")
      [1] "At least 1 patient with missing datacut date."
      [1] "At least 1 patient with missing datacut date, all records will be kept."
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmpi82nfA/datacut_2025-01-31_205022.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmpi82nfA/rmarkdown-str19843d8ab6a3.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmpi82nfA/datacut_2025-01-31_205024.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmpi82nfA/rmarkdown-str19842cf74ed9.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmpi82nfA/datacut_2025-01-31_205025.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmpi82nfA/rmarkdown-str198428c22b64.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmpi82nfA/datacut_2025-01-31_205025.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmpi82nfA/rmarkdown-str19843517d79b.html 
      [1] "At least 1 patient with missing datacut date, all records will be kept."
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 58 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-create_dcut.R:42:3'): One observation in DCUT ────────────────
      create_dcut(...) not equal to `expected_dcutna`.
      Component "DCUTDTC": Modes: numeric, logical
      Component "DCUTDTC": target is numeric, current is logical
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 58 ]
      Error: Test failures
      Execution halted
    ```

# DiSCos

<details>

* Version: 0.1.1
* GitHub: https://github.com/Davidvandijcke/DiSCos
* Source code: https://github.com/cran/DiSCos
* Date/Publication: 2024-07-23 03:30:03 UTC
* Number of recursive dependencies: 121

Run `revdepcheck::cloud_details(, "DiSCos")` for more info

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
      > library(DiSCos)
      Loading required package: data.table
      Loading required package: ggplot2
      > 
      > options(datatable.auto.thread = 1)  # Limit data.table to 1 thread
      > Sys.setenv(OMP_NUM_THREADS = 1) # limit environment to 1 thread
      > 
      > test_check("DiSCos")
      Warning: in parln3(lmom, ...): L-skew is negative, try reversing the data Y <- -X, to avoid a log(<0) error
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> parln3 -> warning -> parln3(lmom, ...)
      Warning: in are.pargam.valid(z): Parameter ALPHA is not > 0, invalid
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> are.pargam.valid -> warning -> are.pargam.valid(z)
      Warning: in are.pargam.valid(z): Parameter BETA is not > 0, invalid
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> are.pargam.valid -> warning -> are.pargam.valid(z)
      Warning: in pargam(lmom, ...): Parameters can not be computed likely because L1 <= L2 or L2 <= 0
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> warning -> pargam(lmom, ...)
      Warning: in parln3(lmom, ...): L-skew is negative, try reversing the data Y <- -X, to avoid a log(<0) error
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> parln3 -> warning -> parln3(lmom, ...)
      Warning: in are.pargam.valid(z): Parameter BETA is not > 0, invalid
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> are.pargam.valid -> warning -> are.pargam.valid(z)
      Warning: in pargam(lmom, ...): Parameters can not be computed likely because L1 <= L2 or L2 <= 0
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> warning -> pargam(lmom, ...)
      Warning: in parrice(lmom, ...): LCV too small (<0.0236) for Rice as implemented
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> parrice -> warning -> parrice(lmom, ...)
      Warning: in are.pargam.valid(z): Parameter BETA is not > 0, invalid
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> are.pargam.valid -> warning -> are.pargam.valid(z)
      Warning: in pargam(lmom, ...): Parameters can not be computed likely because L1 <= L2 or L2 <= 0
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> warning -> pargam(lmom, ...)
      Warning: in parrice(lmom, ...): LCV too small (<0.0236) for Rice as implemented
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> parrice -> warning -> parrice(lmom, ...)
      Warning: in are.pargam.valid(z): Parameter ALPHA is not > 0, invalid
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> are.pargam.valid -> warning -> are.pargam.valid(z)
      Warning: in pargam(lmom, ...): Parameters can not be computed likely because L1 <= L2 or L2 <= 0
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> warning -> pargam(lmom, ...)
      Warning: in parrice(lmom, ...): LCV too small (<0.0236) for Rice as implemented
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> parrice -> warning -> parrice(lmom, ...)
      Warning: in are.pargam.valid(z): Parameter ALPHA is not > 0, invalid
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> are.pargam.valid -> warning -> are.pargam.valid(z)
      Warning: in pargam(lmom, ...): Parameters can not be computed likely because L1 <= L2 or L2 <= 0
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> warning -> pargam(lmom, ...)
      Warning: in parrice(lmom, ...): LCV too small (<0.0236) for Rice as implemented
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> parrice -> warning -> parrice(lmom, ...)
      Warning: in are.pargam.valid(z): Parameter ALPHA is not > 0, invalid
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> are.pargam.valid -> warning -> are.pargam.valid(z)
      Warning: in pargam(lmom, ...): Parameters can not be computed likely because L1 <= L2 or L2 <= 0
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> warning -> pargam(lmom, ...)
      Warning: in parln3(lmom, ...): L-skew is negative, try reversing the data Y <- -X, to avoid a log(<0) error
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> parln3 -> warning -> parln3(lmom, ...)
      Warning: in parrice(lmom, ...): LCV too small (<0.0236) for Rice as implemented
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> parrice -> warning -> parrice(lmom, ...)
      Warning: in are.parsmd.valid(z, nowarn = TRUE): Parameter A is not > 0, invalid
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> parsmd -> are.parsmd.valid -> warning -> are.parsmd.valid(z, nowarn = TRUE)
      Warning: in are.pargam.valid(z): Parameter ALPHA is not > 0, invalid
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> are.pargam.valid -> warning -> are.pargam.valid(z)
      Warning: in pargam(lmom, ...): Parameters can not be computed likely because L1 <= L2 or L2 <= 0
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> warning -> pargam(lmom, ...)
      Warning: in parln3(lmom, ...): L-skew is negative, try reversing the data Y <- -X, to avoid a log(<0) error
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> parln3 -> warning -> parln3(lmom, ...)
      Warning: in parrice(lmom, ...): LCV too small (<0.0236) for Rice as implemented
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> parrice -> warning -> parrice(lmom, ...)
      Warning: in are.pargam.valid(z): Parameter BETA is not > 0, invalid
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> are.pargam.valid -> warning -> are.pargam.valid(z)
      Warning: in pargam(lmom, ...): Parameters can not be computed likely because L1 <= L2 or L2 <= 0
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> warning -> pargam(lmom, ...)
      Warning: in parrice(lmom, ...): LCV too small (<0.0236) for Rice as implemented
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> parrice -> warning -> parrice(lmom, ...)
      Warning: in are.pargam.valid(z): Parameter ALPHA is not > 0, invalid
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> are.pargam.valid -> warning -> are.pargam.valid(z)
      Warning: in pargam(lmom, ...): Parameters can not be computed likely because L1 <= L2 or L2 <= 0
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> pargam -> warning -> pargam(lmom, ...)
      Warning: in parrice(lmom, ...): LCV too small (<0.0236) for Rice as implemented
      -- tryStack sys.calls: test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_no_error -> expect_no_ -> quasi_capture -> .capture -> try_fetch -> withCallingHandlers -> eval_bare -> DiSCo -> mclapply.hack -> lapply -> FUN -> myQuant -> extremeStat::distLquantile -> distLfit -> lapply -> FUN -> tryStack -> lmomco::lmom2par -> parrice -> warning -> parrice(lmom, ...)
      
      Call:
      DiSCoTEA(disco = disco, agg = "quantileDiff", graph = TRUE)
      
      Reference: Gunsilius, Florian F. "Distributional synthetic controls." Econometrica 91, no. 3 (2023): 1105-1117. 
      
      Aggregated Distribution Differences, Quantile Δ 
       Time X_from X_to Quantile Δ Std. Error   [95%  Conf. Band]  
       2003      0  0.9    -0.0508     0.0699 -0.1334      0.0171  
       2004      0  0.9    -0.1492     0.0491 -0.2257     -0.1171 *
      ---
      Signif. codes: `*' Confidence band for distribution differences does not cover 0
      
      Permutation test for quantile range: [0, 0.9] 
      P-value:  0.176 
      Number of control units:  33 
      Number of pre-treatment periods: 5
      Number of post-treatment periods: 2
      N=652,870
      
      Call:
      DiSCoTEA(disco = disco, agg = "quantile")
      
      Reference: Gunsilius, Florian F. "Distributional synthetic controls." Econometrica 91, no. 3 (2023): 1105-1117. 
      
      No treatment effects to summarize, set graph=TRUE in function call or specify a treatment effect option in `agg`.
      Call:
      DiSCoTEA(disco = disco, agg = "quantile")
      
      Reference: Gunsilius, Florian F. "Distributional synthetic controls." Econometrica 91, no. 3 (2023): 1105-1117. 
      
      No treatment effects to summarize, set graph=TRUE in function call or specify a treatment effect option in `agg`.
      Call:
      DiSCoTEA(disco = disco, agg = "cdf")
      
      Reference: Gunsilius, Florian F. "Distributional synthetic controls." Econometrica 91, no. 3 (2023): 1105-1117. 
      
      No treatment effects to summarize, set graph=TRUE in function call or specify a treatment effect option in `agg`.
      Call:
      DiSCoTEA(disco = disco, agg = "cdf")
      
      Reference: Gunsilius, Florian F. "Distributional synthetic controls." Econometrica 91, no. 3 (2023): 1105-1117. 
      
      No treatment effects to summarize, set graph=TRUE in function call or specify a treatment effect option in `agg`.
      Call:
      DiSCoTEA(disco = disco, agg = "quantileDiff")
      
      Reference: Gunsilius, Florian F. "Distributional synthetic controls." Econometrica 91, no. 3 (2023): 1105-1117. 
      
      Aggregated Distribution Differences, Quantile Δ 
       Time X_from X_to Quantile Δ Std. Error   [95%  Conf. Band]  
          2   0.00 0.25    -3.1149     0.0832 -3.4032     -3.2915 *
          2   0.25 0.50    -0.5900     0.1802 -0.7864     -0.5443 *
          2   0.50 0.75    -0.4505     0.3749 -0.5950     -0.0913 *
          2   0.75 1.00     0.2993     0.5222 -0.1052      0.5964  
      ---
      Signif. codes: `*' Confidence band for distribution differences does not cover 0
      
      No permutation test performed. 
      Number of pre-treatment periods: 1
      Number of post-treatment periods: 1
      N=10,000
      
      Call:
      DiSCoTEA(disco = disco, agg = "quantileDiff")
      
      Reference: Gunsilius, Florian F. "Distributional synthetic controls." Econometrica 91, no. 3 (2023): 1105-1117. 
      
      Aggregated Distribution Differences, Quantile Δ 
       Time X_from X_to Quantile Δ Std. Error  [95%  Conf. Band]  
          2   0.00 0.25     2.9313     0.1357 2.8928      3.0751 *
          2   0.25 0.50     2.2455     0.5058 2.0634      2.7429 *
          2   0.50 0.75     3.0117     0.1604 2.9527      3.1682 *
          2   0.75 1.00     1.2742     0.5918 0.6860      1.4812 *
      ---
      Signif. codes: `*' Confidence band for distribution differences does not cover 0
      
      No permutation test performed. 
      Number of pre-treatment periods: 1
      Number of post-treatment periods: 1
      N=10,000
      
      Call:
      DiSCoTEA(disco = disco, agg = "quantileDiff")
      
      Reference: Gunsilius, Florian F. "Distributional synthetic controls." Econometrica 91, no. 3 (2023): 1105-1117. 
      
      Aggregated Distribution Differences, Quantile Δ 
       Time X_from X_to Quantile Δ Std. Error   [95%  Conf. Band]  
          2   0.00 0.25    -3.1149     0.0832 -3.4032     -3.2915 *
          2   0.25 0.50    -0.5900     0.1802 -0.7864     -0.5443 *
          2   0.50 0.75    -0.4505     0.3749 -0.5950     -0.0913 *
          2   0.75 1.00     0.2993     0.5222 -0.1052      0.5964  
      ---
      Signif. codes: `*' Confidence band for distribution differences does not cover 0
      
      No permutation test performed. 
      Number of pre-treatment periods: 1
      Number of post-treatment periods: 1
      N=10,000
      
      Call:
      DiSCoTEA(disco = disco, agg = "quantileDiff")
      
      Reference: Gunsilius, Florian F. "Distributional synthetic controls." Econometrica 91, no. 3 (2023): 1105-1117. 
      
      Aggregated Distribution Differences, Quantile Δ 
       Time X_from X_to Quantile Δ Std. Error  [95%  Conf. Band]  
          2   0.00 0.25     2.9313     0.1357 2.8928      3.0751 *
          2   0.25 0.50     2.2455     0.5058 2.0634      2.7429 *
          2   0.50 0.75     3.0117     0.1604 2.9527      3.1682 *
          2   0.75 1.00     1.2742     0.5918 0.6860      1.4812 *
      ---
      Signif. codes: `*' Confidence band for distribution differences does not cover 0
      
      No permutation test performed. 
      Number of pre-treatment periods: 1
      Number of post-treatment periods: 1
      N=10,000
      [ FAIL 1 | WARN 2 | SKIP 1 | PASS 113 ]
      
      ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
      • empty test (1): 'test-DiSCoTEA.R:2:1'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-DiSCo.R:13:3'): mixture weights sum up to 1 ────────────────────
      Error in `quantile.default(x, probs = (1 - cl)/2)`: missing values and NaN's not allowed if 'na.rm' is FALSE
      Backtrace:
          ▆
       1. └─DiSCos::DiSCo(...) at test-DiSCo.R:13:3
       2.   └─DiSCos:::parseBoots(...)
       3.     └─DiSCos (local) getCIs(q_boot, cl, q_d, uniform)
       4.       └─base::apply(...)
       5.         └─DiSCos (local) FUN(newX[, i], ...)
       6.           ├─stats::quantile(x, probs = (1 - cl)/2)
       7.           └─stats:::quantile.default(x, probs = (1 - cl)/2)
      
      [ FAIL 1 | WARN 2 | SKIP 1 | PASS 113 ]
      Error: Test failures
      Execution halted
    ```

# eSDM

<details>

* Version: 0.4.4
* GitHub: https://github.com/swfsc/eSDM
* Source code: https://github.com/cran/eSDM
* Date/Publication: 2024-10-07 22:20:02 UTC
* Number of recursive dependencies: 131

Run `revdepcheck::cloud_details(, "eSDM")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘example-analysis.Rmd’ using rmarkdown
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.6Mb
      sub-directories of 1Mb or more:
        data      1.5Mb
        extdata   1.5Mb
        shiny     2.2Mb
    ```

# ezplot

<details>

* Version: 0.7.13
* GitHub: NA
* Source code: https://github.com/cran/ezplot
* Date/Publication: 2024-01-28 11:30:05 UTC
* Number of recursive dependencies: 108

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

# GeoTox

<details>

* Version: 0.2.0
* GitHub: https://github.com/NIEHS/GeoTox
* Source code: https://github.com/cran/GeoTox
* Date/Publication: 2024-11-15 14:20:02 UTC
* Number of recursive dependencies: 143

Run `revdepcheck::cloud_details(, "GeoTox")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘GeoTox-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: GeoTox
    > ### Title: GeoTox S3 object
    > ### Aliases: GeoTox plot.GeoTox
    > 
    > ### ** Examples
    > 
    > # Use a subset of the package data for demonstration purposes
    > set.seed(2357)
    > n <- 10 # Population size
    > m <- 5 # Number of regions
    > idx <- if (m < 100) sample(1:100, m) else 1:100
    > 
    > geoTox <- GeoTox() |> 
    +   # Set region and group boundaries (for plotting)
    +   set_boundaries(region = geo_tox_data$boundaries$county,
    +                  group  = geo_tox_data$boundaries$state) |> 
    +   # Simulate populations for each region
    +   simulate_population(age           = split(geo_tox_data$age, ~FIPS)[idx],
    +                       obesity       = geo_tox_data$obesity[idx, ],
    +                       exposure      = split(geo_tox_data$exposure, ~FIPS)[idx],
    +                       simulated_css = geo_tox_data$simulated_css,
    +                       n             = n) |> 
    +   # Estimated Hill parameters
    +   set_hill_params(geo_tox_data$dose_response |>
    +                     fit_hill(assay = "endp", chem = "casn") |> 
    +                     dplyr::filter(!tp.sd.imputed, !logAC50.sd.imputed)) |>
    +   # Calculate response
    +   calculate_response() |>
    +   # Perform sensitivity analysis
    +   sensitivity_analysis()
    Error in if (any(AC50 < 0)) { : missing value where TRUE/FALSE needed
    Calls: sensitivity_analysis ... .calc_concentration_response -> <Anonymous> -> <Anonymous> -> f -> hill_conc
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
      > # * https://r-pkgs.org/testing-design.html#sec-tests-files-overview
      > # * https://testthat.r-lib.org/articles/special-files.html
      > 
      > library(testthat)
      > library(GeoTox)
      > 
      > test_check("GeoTox")
      [ FAIL 5 | WARN 0 | SKIP 0 | PASS 334 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-GeoTox.R:40:3'): package data subset ─────────────────────────
      Expected `... <- NULL` to run without any errors.
      i Actually got a <simpleError> with text:
        missing value where TRUE/FALSE needed
      ── Failure ('test-GeoTox.R:62:3'): package data subset ─────────────────────────
      Expected `capture_output(print(geoTox))` to run without any errors.
      i Actually got a <simpleError> with text:
        object 'geoTox' not found
      ── Failure ('test-GeoTox.R:65:3'): package data subset ─────────────────────────
      Expected `plot(geoTox, type = "hill")` to run without any errors.
      i Actually got a <simpleError> with text:
        object 'geoTox' not found
      ── Failure ('test-GeoTox.R:67:3'): package data subset ─────────────────────────
      Expected `plot(geoTox, type = "exposure")` to run without any errors.
      i Actually got a <simpleError> with text:
        object 'geoTox' not found
      ── Error ('test-GeoTox.R:70:3'): package data subset ───────────────────────────
      Error in `eval(code, test_env)`: object 'geoTox' not found
      Backtrace:
          ▆
       1. ├─testthat::expect_warning(plot(geoTox), "Multiple assays found, using first assay") at test-GeoTox.R:70:3
       2. │ └─testthat:::expect_condition_matching(...)
       3. │   └─testthat:::quasi_capture(...)
       4. │     ├─testthat (local) .capture(...)
       5. │     │ └─base::withCallingHandlers(...)
       6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
       7. └─base::plot(geoTox)
      
      [ FAIL 5 | WARN 0 | SKIP 0 | PASS 334 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘introduction.Rmd’ using rmarkdown
    
    Quitting from lines 33-55 [unnamed-chunk-2] (introduction.Rmd)
    Error: processing vignette 'introduction.Rmd' failed with diagnostics:
    missing value where TRUE/FALSE needed
    --- failed re-building ‘introduction.Rmd’
    
    --- re-building ‘package_data.Rmd’ using rmarkdown
    --- finished re-building ‘package_data.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘introduction.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 775 marked UTF-8 strings
    ```

# handwriterRF

<details>

* Version: 1.1.1
* GitHub: https://github.com/CSAFE-ISU/handwriterRF
* Source code: https://github.com/cran/handwriterRF
* Date/Publication: 2025-01-29 00:20:01 UTC
* Number of recursive dependencies: 127

Run `revdepcheck::cloud_details(, "handwriterRF")` for more info

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
      > library(handwriterRF)
      > 
      > test_check("handwriterRF")
      Copying samples to project directory > docs...
      
      Estimating writer profiles...
      Listing documents to be processed...
      Creating output directory...
      Directory already exists.
      Processing document w0030_s01_pWOZ_r01.png...
      path in readPNGBinary: /tmp/RtmpsyH1sS/comparison/docs/w0030_s01_pWOZ_r01.png
      Starting Processing...
      Getting Nodes...
      Skeletonizing writing...
      Splitting document into components...
      Merging nodes...
      Finding paths...
      Split paths into graphs...
      Organizing graphs...
      Creating graph lists...
      Adding character features...
      Document processing complete
      Saving processed document w0030_s01_pWOZ_r01.png...
      
      Processing document w0030_s01_pWOZ_r02.png...
      path in readPNGBinary: /tmp/RtmpsyH1sS/comparison/docs/w0030_s01_pWOZ_r02.png
      Starting Processing...
      Getting Nodes...
      Skeletonizing writing...
      Splitting document into components...
      Merging nodes...
      Finding paths...
      Split paths into graphs...
      Organizing graphs...
      Creating graph lists...
      Adding character features...
      Document processing complete
      Saving processed document w0030_s01_pWOZ_r02.png...
      
      All documents were successfully processed...
      
      Loading graphs for w0030_s01_pWOZ_r01_proclist.rds
      Getting cluster assignments for w0030_s01_pWOZ_r01
      Saving cluster assignments for  w0030_s01_pWOZ_r01 
      
      Loading graphs for w0030_s01_pWOZ_r02_proclist.rds
      Getting cluster assignments for w0030_s01_pWOZ_r02
      Saving cluster assignments for  w0030_s01_pWOZ_r02 
      
      Calculating distance between samples...
      Calculating similarity score...
      Calculating distance between samples...
      Calculating similarity score...
      Calculating distance between samples...
      Calculating similarity score...
      Calculating distance between samples...
      Calculating similarity score...
      Calculating SLR...
      Calculating distance between samples...
      Calculating similarity score...
      Calculating SLR...
      Killed
    ```

# heemod

<details>

* Version: 1.0.2
* GitHub: https://github.com/aphp/heemod
* Source code: https://github.com/cran/heemod
* Date/Publication: 2024-09-11 16:00:02 UTC
* Number of recursive dependencies: 139

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

# immunarch

<details>

* Version: 0.9.1
* GitHub: https://github.com/immunomind/immunarch
* Source code: https://github.com/cran/immunarch
* Date/Publication: 2024-03-18 19:10:06 UTC
* Number of recursive dependencies: 201

Run `revdepcheck::cloud_details(, "immunarch")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘immunarch-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: repSave
    > ### Title: Save immune repertoires to the disk
    > ### Aliases: repSave
    > 
    > ### ** Examples
    > 
    > data(immdata)
    > # Reduce data to save time on examples
    > immdata$data <- purrr::map(immdata$data, ~ .x %>% head(10))
    > dirpath <- tempdir()
    > # Save the list of repertoires
    > repSave(immdata, dirpath)
    Warning: The `path` argument of `write_tsv()` is deprecated as of readr 1.4.0.
    ℹ Please use the `file` argument instead.
    ℹ The deprecated feature was likely used in the immunarch package.
      Please report the issue at <https://github.com/immunomind/immunarch/issues>.
    Warning: The `path` argument of `write_lines()` is deprecated as of readr 1.4.0.
    ℹ Please use the `file` argument instead.
    ℹ The deprecated feature was likely used in the immunarch package.
      Please report the issue at <https://github.com/immunomind/immunarch/issues>.
    > # Load it and check if it is the same
    > new_immdata <- repLoad(dirpath)
    
    == Step 1/3: loading repertoire files... ==
    
    Processing "/tmp/Rtmpf4v5Z2" ...
      -- [1/16] Parsing "/tmp/Rtmpf4v5Z2/A2-i129.tsv.gz" -- immunarch
      -- [2/16] Parsing "/tmp/Rtmpf4v5Z2/A2-i131.tsv.gz" -- immunarch
      -- [3/16] Parsing "/tmp/Rtmpf4v5Z2/A2-i132.tsv.gz" -- immunarch
      -- [4/16] Parsing "/tmp/Rtmpf4v5Z2/A2-i133.tsv.gz" -- immunarch
      -- [5/16] Parsing "/tmp/Rtmpf4v5Z2/A4-i191.tsv.gz" -- immunarch
      -- [6/16] Parsing "/tmp/Rtmpf4v5Z2/A4-i192.tsv.gz" -- immunarch
      -- [7/16] Parsing "/tmp/Rtmpf4v5Z2/MS1.tsv.gz" -- immunarch
      -- [8/16] Parsing "/tmp/Rtmpf4v5Z2/MS2.tsv.gz" -- immunarch
      -- [9/16] Parsing "/tmp/Rtmpf4v5Z2/MS3.tsv.gz" -- immunarch
      -- [10/16] Parsing "/tmp/Rtmpf4v5Z2/MS4.tsv.gz" -- immunarch
      -- [11/16] Parsing "/tmp/Rtmpf4v5Z2/MS5.tsv.gz" -- immunarch
      -- [12/16] Parsing "/tmp/Rtmpf4v5Z2/MS6.tsv.gz" -- immunarch
      -- [13/16] Parsing "/tmp/Rtmpf4v5Z2/duckplyr1a745b76fc04.duckdb" -- Warning in readLines(f, 1) : line 1 appears to contain an embedded nul
    Warning in readLines(f, 1) :
      incomplete final line found on '/tmp/Rtmpf4v5Z2/duckplyr1a745b76fc04.duckdb'
    Error in stri_trim_both(string) : 
      invalid UTF-8 byte sequence detected; try calling stri_enc_toutf8()
    Calls: repLoad ... .detect_format -> ifelse -> str_trim -> stri_trim_both
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  9.7Mb
      sub-directories of 1Mb or more:
        data   5.5Mb
        doc    1.6Mb
    ```

# msigdbr

<details>

* Version: 7.5.1
* GitHub: https://github.com/igordot/msigdbr
* Source code: https://github.com/cran/msigdbr
* Date/Publication: 2022-03-30 07:00:16 UTC
* Number of recursive dependencies: 51

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

* Version: 0.1.2
* GitHub: https://github.com/openpharma/mtdesign
* Source code: https://github.com/cran/mtdesign
* Date/Publication: 2024-11-05 14:10:15 UTC
* Number of recursive dependencies: 59

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
      testthat 2025-01-31 20:58:55 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:55 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:55 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:55 DEBUG test_check: One stage sample size is 15.  Search bounds are 20 to 30.
      testthat 2025-01-31 20:58:55 TRACE test_check: Building grid - nTotal, nStage1: 264
      testthat 2025-01-31 20:58:55 TRACE test_check: Building grid - nTotal, nStage1, rTotal: 6710
      testthat 2025-01-31 20:58:55 TRACE test_check: Building grid - nTotal, nStage1, rTotal, rFutility: 26620
      testthat 2025-01-31 20:58:55 TRACE test_check: Building grid - nTotal, nStage1, rTotal, rFutility, rSuccess: 97571
      testthat 2025-01-31 20:58:56 TRACE test_check: Grid has 97571 rows.
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Entry
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      testthat 2025-01-31 20:58:56 DEBUG test_check: Exit
      Killed
    ```

# offsetreg

<details>

* Version: 1.1.0
* GitHub: https://github.com/mattheaphy/offsetreg
* Source code: https://github.com/cran/offsetreg
* Date/Publication: 2024-04-11 14:40:03 UTC
* Number of recursive dependencies: 123

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
      
           actual  | expected                 
       [1] 18862.6 - 13245.7  [1]             
       [2] 19066.5 - 13388.9  [2]             
       [3] 19277.9 - 13537.3  [3]             
       [4] 19589.9 - 13756.4  [4]             
       [5] 19855.2 - 13942.7  [5]             
       [6] 20072.9 - 14095.6  [6]             
       [7] 20321.9 - 14270.4  [7]             
       [8] 20445.3 - 18671.6  [8]             
       [9] 20530.8 - 18749.7  [9]             
      [10] 22075.8 - 22413.5  [10]            
       ... ...       ...      and 130 more ...
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 42 ]
      Error: Test failures
      Execution halted
    ```

# partition

<details>

* Version: 0.2.2
* GitHub: https://github.com/USCbiostats/partition
* Source code: https://github.com/cran/partition
* Date/Publication: 2024-10-09 17:00:02 UTC
* Number of recursive dependencies: 94

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
      installed size is  8.9Mb
      sub-directories of 1Mb or more:
        libs   6.8Mb
    ```

# rfars

<details>

* Version: 1.2.0
* GitHub: https://github.com/s87jackson/rfars
* Source code: https://github.com/cran/rfars
* Date/Publication: 2024-04-06 04:40:02 UTC
* Number of recursive dependencies: 140

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
* Number of recursive dependencies: 129

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

