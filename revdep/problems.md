# activatr

<details>

* Version: 0.2.0
* GitHub: https://github.com/dschafer/activatr
* Source code: https://github.com/cran/activatr
* Date/Publication: 2023-08-22 07:30:12 UTC
* Number of recursive dependencies: 108

Run `revdepcheck::cloud_details(, "activatr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
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

# APCtools

<details>

* Version: 1.0.4
* GitHub: https://github.com/bauer-alex/APCtools
* Source code: https://github.com/cran/APCtools
* Date/Publication: 2023-01-13 23:30:02 UTC
* Number of recursive dependencies: 107

Run `revdepcheck::cloud_details(, "APCtools")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
        5. │ └─plot_dat %>% filter(cohort %in% apc_range$cohort)
        6. ├─dplyr::filter(., cohort %in% apc_range$cohort)
        7. └─dplyr:::filter.data.frame(., cohort %in% apc_range$cohort)
        8.   └─dplyr::filter(...)
        9.     ├─dplyr::dplyr_row_slice(.data, loc, preserve = .preserve)
       10.     └─dplyr:::dplyr_row_slice.data.frame(.data, loc, preserve = .preserve)
       11.       ├─dplyr::dplyr_reconstruct(vec_slice(data, i), data)
       12.       │ └─dplyr:::dplyr_new_data_frame(data)
       13.       │   ├─row.names %||% .row_names_info(x, type = 0L)
       14.       │   └─base::.row_names_info(x, type = 0L)
       15.       └─vctrs::vec_slice(data, i)
      
      [ FAIL 1 | WARN 80 | SKIP 0 | PASS 86 ]
      Error: Test failures
      Execution halted
    ```

# arrow

<details>

* Version: 13.0.0
* GitHub: https://github.com/apache/arrow
* Source code: https://github.com/cran/arrow
* Date/Publication: 2023-08-30 16:50:40 UTC
* Number of recursive dependencies: 77

Run `revdepcheck::cloud_details(, "arrow")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      
        `actual$min_int`: NA
      `expected$min_int`:  1
      
        `actual$max_int`: NA
      `expected$max_int`: 10
      Backtrace:
          ▆
       1. └─arrow:::compare_dplyr_binding(...) at test-dplyr-summarize.R:548:2
       2.   └─arrow:::expect_equal(via_table, expected, ...) at tests/testthat/helper-expectation.R:102:2
       3.     └─testthat::expect_equal(...) at tests/testthat/helper-expectation.R:43:4
      
      [ FAIL 1 | WARN 9 | SKIP 77 | PASS 6403 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 143.4Mb
      sub-directories of 1Mb or more:
        R       8.0Mb
        libs  134.8Mb
    ```

*   checking Rd cross-references ... NOTE
    ```
    Package unavailable to check Rd xrefs: ‘readr’
    ```

# auk

<details>

* Version: 0.6.0
* GitHub: https://github.com/CornellLabofOrnithology/auk
* Source code: https://github.com/cran/auk
* Date/Publication: 2022-10-29 22:15:59 UTC
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
    ...
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

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 552 marked UTF-8 strings
    ```

# BayesianReasoning

<details>

* Version: 0.4.1
* GitHub: https://github.com/gorkang/BayesianReasoning
* Source code: https://github.com/cran/BayesianReasoning
* Date/Publication: 2022-01-07 13:53:16 UTC
* Number of recursive dependencies: 85

Run `revdepcheck::cloud_details(, "BayesianReasoning")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-PPV_heatmap.R:173:3'): WARNINGS because of Wrong parameters ────
      Error in `slice(.data, ..., .by = {
          {
              .by
          }
      }, .preserve = .preserve)`: Can't compute indices.
      Caused by error:
      ! `size` must be less than or equal to 0 (size of data).
      ℹ set `replace = TRUE` to use sampling with replacement.
      
      [ FAIL 1 | WARN 1 | SKIP 0 | PASS 113 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespace in Imports field not imported from: ‘utils’
      All declared Imports should be used.
    ```

# biclustermd

<details>

* Version: 0.2.3
* GitHub: https://github.com/jreisner/biclustermd
* Source code: https://github.com/cran/biclustermd
* Date/Publication: 2021-06-17 15:10:06 UTC
* Number of recursive dependencies: 84

Run `revdepcheck::cloud_details(, "biclustermd")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      
          matches
      
      > 
      > test_check("biclustermd")
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 67 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-row.names.R:19:5'): row.names() is a subset of gather() ──────
      row.names(sbc) not equal to ... %>% select(row_cluster, row_name).
      Component "row_name": 3 string mismatches
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 67 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespace in Imports field not imported from: ‘nycflights13’
      All declared Imports should be used.
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

# cmcR

<details>

* Version: 0.1.11
* GitHub: NA
* Source code: https://github.com/cran/cmcR
* Date/Publication: 2022-12-10 14:00:02 UTC
* Number of recursive dependencies: 123

Run `revdepcheck::cloud_details(, "cmcR")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      ── 1. Error ('test-decision.R:213:3'): decision_ functions work as expected ────
      Error: Error evaluating duckdb query: Binder Error: Column "n" referenced that exists in the SELECT clause - but this column cannot be referenced before it is defined
      Backtrace:
          ▆
       1. └─testthat::expect_equal(originalMethod_cmcCounts, high_cmcCounts) at test-decision.R:213:2
       2.   ├─testthat::compare(act$val, exp$val, ...)
       3.   └─testthat:::compare.numeric(act$val, exp$val, ...)
       4.     ├─base::all.equal(...)
       5.     └─base::all.equal.numeric(...)
       6.       └─base::attr.all.equal(...)
      
      ══ DONE ════════════════════════════════════════════════════════════════════════
      I believe in you!
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.2Mb
      sub-directories of 1Mb or more:
        data   2.3Mb
        doc    2.3Mb
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
    Last 13 lines of output:
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-matrix_functions.R:58:3'): Default case ──────────────────────
      `res` not equal to `expected_df`.
      Component "x": Modes: character, numeric
      Component "x": target is character, current is numeric
      Component "y": Modes: character, numeric
      Component "y": target is character, current is numeric
      Component "point_x": 1 string mismatch
      Component "point_y": 1 string mismatch
      Component "dot_radius": 1 string mismatch
      
      [ FAIL 1 | WARN 1 | SKIP 0 | PASS 222 ]
      Error: Test failures
      Execution halted
    ```

# CodelistGenerator

<details>

* Version: 1.7.0
* GitHub: NA
* Source code: https://github.com/cran/CodelistGenerator
* Date/Publication: 2023-08-16 08:42:32 UTC
* Number of recursive dependencies: 116

Run `revdepcheck::cloud_details(, "CodelistGenerator")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘CodelistGenerator-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: getICD10StandardCodes
    > ### Title: Get corresponding standard codes for ICD-10 chapters and
    > ###   sub-chapters
    > ### Aliases: getICD10StandardCodes
    > 
    > ### ** Examples
    > 
    ...
      5. ├─dplyr::inner_join(...)
      6. └─dplyr:::inner_join.data.frame(...)
      7.   └─dplyr::inner_join(...)
      8.     ├─dplyr::auto_copy(x, y, copy = copy)
      9.     └─dplyr:::auto_copy.data.frame(x, y, copy = copy)
     10.       └─dplyr:::as_duckplyr_df(y)
     11.         └─rlang::abort("Must pass a plain data frame or a tibble to `as_duckplyr_df()`.")
    Execution halted
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
        7.   └─dplyr::inner_join(...)
        8.     ├─dplyr::auto_copy(x, y, copy = copy)
        9.     └─dplyr:::auto_copy.data.frame(x, y, copy = copy)
       10.       └─dplyr:::as_duckplyr_df(y)
       11.         └─rlang::abort("Must pass a plain data frame or a tibble to `as_duckplyr_df()`.")
      
      [ FAIL 3 | WARN 0 | SKIP 3 | PASS 127 ]
      Error: Test failures
      In addition: Warning messages:
      1: Connection is garbage-collected, use dbDisconnect() to avoid this. 
      2: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this. 
      3: Connection is garbage-collected, use dbDisconnect() to avoid this. 
      Execution halted
      Warning message:
      Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this. 
    ```

# cogmapr

<details>

* Version: 0.9.3
* GitHub: NA
* Source code: https://github.com/cran/cogmapr
* Date/Publication: 2022-01-04 15:40:07 UTC
* Number of recursive dependencies: 75

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
    ...
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

# crosshap

<details>

* Version: 1.2.2
* GitHub: NA
* Source code: https://github.com/cran/crosshap
* Date/Publication: 2023-05-02 07:50:08 UTC
* Number of recursive dependencies: 117

Run `revdepcheck::cloud_details(, "crosshap")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      Backtrace:
          ▆
       1. ├─crosshap::prepare_hap_umap(...) at test-umap.R:4:0
       2. │ └─... %>% ...
       3. ├─dplyr::left_join(., HapObject_eps$Indfile, .data$hap, by = "Ind")
       4. ├─dplyr:::left_join.data.frame(...)
       5. │ └─dplyr:::rel_try(...)
       6. ├─hap
       7. └─rlang:::`$.rlang_fake_data_pronoun`(.data, hap)
       8.   └─rlang:::stop_fake_data_subset(call)
       9.     └─rlang::abort(...)
      
      [ FAIL 1 | WARN 0 | SKIP 6 | PASS 4 ]
      Error: Test failures
      Execution halted
    ```

# CSCNet

<details>

* Version: 0.1.2
* GitHub: NA
* Source code: https://github.com/cran/CSCNet
* Date/Publication: 2022-11-08 18:50:02 UTC
* Number of recursive dependencies: 172

Run `revdepcheck::cloud_details(, "CSCNet")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘CSCNet.Rmd’ using rmarkdown
    
    Quitting from lines 109-169 [unnamed-chunk-7] (CSCNet.Rmd)
    Error: processing vignette 'CSCNet.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Invalid Error: Invalid input type, expected 'list' actual 'character'
    --- failed re-building ‘CSCNet.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘CSCNet.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# cubelyr

<details>

* Version: 1.0.2
* GitHub: https://github.com/hadley/cubelyr
* Source code: https://github.com/cran/cubelyr
* Date/Publication: 2022-11-07 15:50:02 UTC
* Number of recursive dependencies: 45

Run `revdepcheck::cloud_details(, "cubelyr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      > library(cubelyr)
      > 
      > test_check("cubelyr")
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 29 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-cube.R:54:3'): incomplete ────────────────────────────────────
      filter(as_tibble(cube), s != 1 | j != 2) not equal to as_tibble(d).
      Component "s": Mean relative difference: 0.6666667
      Component "j": Mean relative difference: 0.6666667
      Component "value": Mean relative difference: 0.6666667
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 29 ]
      Error: Test failures
      Execution halted
    ```

# datacutr

<details>

* Version: 0.1.0
* GitHub: NA
* Source code: https://github.com/cran/datacutr
* Date/Publication: 2023-03-31 15:10:02 UTC
* Number of recursive dependencies: 120

Run `revdepcheck::cloud_details(, "datacutr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      > library(testthat)
      > library(datacutr)
      > 
      > test_check("datacutr")
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 40 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-apply_cut.R:11:3'): Test whether records are correctly removed where DCUT_TEMP_REMOVE='Y' ──
      apply_cut(dsin = input1, dcutvar = DCUT_TEMP_REMOVE, dthchangevar = NULL) not equal to `expected1`.
      Component "USUBJID": 2 string mismatches
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 40 ]
      Error: Test failures
      Execution halted
    ```

# DescrTab2

<details>

* Version: 2.1.16
* GitHub: https://github.com/imbi-heidelberg/DescrTab2
* Source code: https://github.com/cran/DescrTab2
* Date/Publication: 2022-09-06 08:50:02 UTC
* Number of recursive dependencies: 168

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
    Last 13 lines of output:
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

*   checking re-building of vignette outputs ... WARNING
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘a_usage_guide.Rmd’ using rmarkdown
    --- finished re-building ‘a_usage_guide.Rmd’
    
    --- re-building ‘b_test_choice_tree_pdf.Rmd’ using rmarkdown
    A new version of TeX Live has been released. If you need to install or update any LaTeX packages, you have to upgrade TinyTeX with tinytex::reinstall_tinytex(repository = "illinois").
    
    tlmgr: Local TeX Live (2022) is older than remote repository (2023).
    Cross release updates are only supported with
      update-tlmgr-latest(.sh/.exe) --update
    ...
    --- finished re-building ‘d_validation_statement.Rmd’
    
    --- re-building ‘e_maintenance_guide.Rmd’ using rmarkdown
    --- finished re-building ‘e_maintenance_guide.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘b_test_choice_tree_pdf.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# DSjobtracker

<details>

* Version: 0.1.1
* GitHub: NA
* Source code: https://github.com/cran/DSjobtracker
* Date/Publication: 2020-12-14 10:00:02 UTC
* Number of recursive dependencies: 76

Run `revdepcheck::cloud_details(, "DSjobtracker")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘DSjobtracker.Rmd’ using rmarkdown
    
    Quitting from lines 136-155 [unnamed-chunk-9] (DSjobtracker.Rmd)
    Error: processing vignette 'DSjobtracker.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Out of Range Error: cannot take logarithm of zero
    --- failed re-building ‘DSjobtracker.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘DSjobtracker.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 149 marked UTF-8 strings
    ```

# echoice2

<details>

* Version: 0.2.3
* GitHub: https://github.com/ninohardt/echoice2
* Source code: https://github.com/cran/echoice2
* Date/Publication: 2023-03-12 18:10:02 UTC
* Number of recursive dependencies: 75

Run `revdepcheck::cloud_details(, "echoice2")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘echoice2-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: dd_LL_sr
    > ### Title: Log-Likelihood for screening hmnl model
    > ### Aliases: dd_LL_sr
    > 
    > ### ** Examples
    > 
    > data(icecream_discrete)
    > #fit model
    > icecream_est <- icecream_discrete %>% dd_est_hmnl_screen(R=10, keep=1, cores=2)
    Using 2 cores
    Error: Error evaluating duckdb query: Invalid Error: Invalid input type, expected 'list' actual 'pairlist'
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 18.4Mb
      sub-directories of 1Mb or more:
        doc    1.3Mb
        libs  16.4Mb
    ```

# egor

<details>

* Version: 1.23.3
* GitHub: https://github.com/tilltnet/egor
* Source code: https://github.com/cran/egor
* Date/Publication: 2023-03-16 04:40:02 UTC
* Number of recursive dependencies: 89

Run `revdepcheck::cloud_details(, "egor")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
        4. │   │ └─base::withCallingHandlers(...)
        5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        6. ├─dplyr::left_join(x, res, copy = TRUE)
        7. └─egor:::left_join.egor(x, res, copy = TRUE)
        8.   ├─dplyr::left_join(...)
        9.   └─dplyr:::left_join.data.frame(...)
       10.     └─dplyr::left_join(...)
       11.       ├─dplyr::auto_copy(x, y, copy = copy)
       12.       └─dplyr:::auto_copy.data.frame(x, y, copy = copy)
       13.         └─dplyr:::as_duckplyr_df(y)
       14.           └─rlang::abort("Must pass a plain data frame or a tibble to `as_duckplyr_df()`.")
      
      [ FAIL 1 | WARN 8 | SKIP 15 | PASS 205 ]
      Error: Test failures
      Execution halted
    ```

# ezplot

<details>

* Version: 0.7.8
* GitHub: NA
* Source code: https://github.com/cran/ezplot
* Date/Publication: 2023-06-17 07:30:02 UTC
* Number of recursive dependencies: 107

Run `revdepcheck::cloud_details(, "ezplot")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
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

# FFTrees

<details>

* Version: 2.0.0
* GitHub: https://github.com/ndphillips/FFTrees
* Source code: https://github.com/cran/FFTrees
* Date/Publication: 2023-06-05 23:30:02 UTC
* Number of recursive dependencies: 114

Run `revdepcheck::cloud_details(, "FFTrees")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      47: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      48: source_file(path, env(env), wrap = wrap)
      49: FUN(X[[i]], ...)
      50: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      51: doTryCatch(return(expr), name, parentenv, handler)
      52: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      53: tryCatchList(expr, classes, parentenv, handlers)
      54: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      55: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      56: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      57: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      58: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      59: test_check("FFTrees")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘FFTrees_accuracy_statistics.Rmd’ using rmarkdown
    --- finished re-building ‘FFTrees_accuracy_statistics.Rmd’
    
    --- re-building ‘FFTrees_examples.Rmd’ using rmarkdown
    
     *** caught segfault ***
    address 0x3, cause 'memory not mapped'
    
    Traceback:
    ...
    46: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    47: vweave_rmarkdown(...)
    48: engine$weave(file, quiet = quiet, encoding = enc)
    49: doTryCatch(return(expr), name, parentenv, handler)
    50: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    51: tryCatchList(expr, classes, parentenv, handlers)
    52: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    53: tools:::buildVignettes(dir = "/tmp/workdir/FFTrees/new/FFTrees.Rcheck/vign_test/FFTrees")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.2Mb
      sub-directories of 1Mb or more:
        doc   3.4Mb
    ```

# fgeo.analyze

<details>

* Version: 1.1.14
* GitHub: https://github.com/forestgeo/fgeo.analyze
* Source code: https://github.com/cran/fgeo.analyze
* Date/Publication: 2020-12-05 05:40:12 UTC
* Number of recursive dependencies: 100

Run `revdepcheck::cloud_details(, "fgeo.analyze")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
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

# forestmangr

<details>

* Version: 0.9.5
* GitHub: https://github.com/sollano/forestmangr
* Source code: https://github.com/cran/forestmangr
* Date/Publication: 2023-02-15 22:20:02 UTC
* Number of recursive dependencies: 126

Run `revdepcheck::cloud_details(, "forestmangr")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘forestmangr-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: est_clutter
    > ### Title: Estimate future and present basal area, volume, TCA, CMI and MMI
    > ###   values of the Clutter Growth and Yield Model
    > ### Aliases: est_clutter
    > 
    > ### ** Examples
    > 
    ...
      3.   ├─ggplot2::ggplot_build(x)
      4.   └─ggplot2:::ggplot_build.ggplot(x)
      5.     └─layout$setup(data, plot$data, plot$plot_env)
      6.       └─ggplot2 (local) setup(..., self = self)
      7.         └─self$facet$compute_layout(data, self$facet_params)
      8.           └─ggplot2 (local) compute_layout(..., self = self)
      9.             └─ggplot2::combine_vars(data, params$plot_env, vars, drop = params$drop)
     10.               └─cli::cli_abort("Faceting variables must have at least one value")
     11.                 └─rlang::abort(...)
    Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘eq_group_fit_en.Rmd’ using rmarkdown
    --- finished re-building ‘eq_group_fit_en.Rmd’
    
    --- re-building ‘eq_group_fit_ptbr.Rmd’ using rmarkdown
    --- finished re-building ‘eq_group_fit_ptbr.Rmd’
    
    --- re-building ‘invent_vol_plot_en.Rmd’ using rmarkdown
    --- finished re-building ‘invent_vol_plot_en.Rmd’
    
    ...
    Quitting from lines 87-88 [unnamed-chunk-7] (yield_growth_ptbr.Rmd)
    Error: processing vignette 'yield_growth_ptbr.Rmd' failed with diagnostics:
    Faceting variables must have at least one value
    --- failed re-building ‘yield_growth_ptbr.Rmd’
    
    SUMMARY: processing the following files failed:
      ‘yield_growth_en.Rmd’ ‘yield_growth_ptbr.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# frailtyEM

<details>

* Version: 1.0.1
* GitHub: https://github.com/tbalan/frailtyEM
* Source code: https://github.com/cran/frailtyEM
* Date/Publication: 2019-09-22 13:00:10 UTC
* Number of recursive dependencies: 79

Run `revdepcheck::cloud_details(, "frailtyEM")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘frailtyEM-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: summary.emfrail
    > ### Title: Summary for 'emfrail' objects
    > ### Aliases: summary.emfrail
    > 
    > ### ** Examples
    > 
    > data("bladder")
    ...
    11: tryCatch(withCallingHandlers(expr, condition = function(cnd) {    {        .__handler_frame__. <- TRUE        .__setup_frame__. <- frame        if (inherits(cnd, "message")) {            except <- c("warning", "error")        }        else if (inherits(cnd, "warning")) {            except <- "error"        }        else {            except <- ""        }    }    while (!is_null(cnd)) {        if (inherits(cnd, "error")) {            out <- handlers[[1L]](cnd)            if (!inherits(out, "rlang_zap"))                 throw(out)        }        inherit <- .subset2(.subset2(cnd, "rlang"), "inherit")        if (is_false(inherit)) {            return()        }        cnd <- .subset2(cnd, "parent")    }}), stackOverflowError = handlers[[1L]])
    12: rlang::try_fetch(rel, error = identity)
    13: rel_try(`.locale argument not supported` = !is.null(.locale),     `dplyr.legacy_locale not supported` = isTRUE(getOption("dplyr.legacy_locale")),     {        rel <- duckdb_rel_from_df(.data)        if (length(dots) == 0) {            return(.data)        }        exprs <- rel_translate_dots(dots, .data)        out_rel <- rel_order(rel, exprs)        out <- rel_to_df(out_rel)        out <- dplyr_reconstruct(out, .data)        return(out)    })
    14: arrange.data.frame(., z)
    15: arrange(., z)
    16: mutate(., x = 1:n())
    17: ggplot(., aes(x = x, y = z))
    18: sum_mod$frail %>% arrange(z) %>% mutate(x = 1:n()) %>% ggplot(aes(x = x,     y = z))
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

## In both

*   checking LazyData ... NOTE
    ```
      'LazyData' is specified without a 'data' directory
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘frailtyEM_manual.Rnw’ using Sweave
    Loading required package: survival
    Loading required package: gridExtra
    Warning: The `<scale>` argument of `guides()` cannot be `FALSE`. Use
    "none" instead as of ggplot2 3.3.4.
    Warning: Removed 2 rows containing missing values (`geom_path()`).
    Warning in data("kidney") : data set ‘kidney’ not found
    Warning in emfrail(Surv(time, status) ~ age + sex + cluster(id), data = kidney,  :
      Hessian virtually 0; frailty variance might be at the edge of the parameter space.
    ...
    l.55 \RequirePackage
                        [T1]{fontenc}^^M
    !  ==> Fatal error occurred, no output PDF file produced!
    --- failed re-building ‘frailtyEM_manual.Rnw’
    
    SUMMARY: processing the following file failed:
      ‘frailtyEM_manual.Rnw’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# funcharts

<details>

* Version: 1.3.1
* GitHub: https://github.com/unina-sfere/funcharts
* Source code: https://github.com/cran/funcharts
* Date/Publication: 2023-02-20 16:40:05 UTC
* Number of recursive dependencies: 114

Run `revdepcheck::cloud_details(, "funcharts")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘funcharts-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: regr_cc_fof_real_time
    > ### Title: Real-time functional regression control chart
    > ### Aliases: regr_cc_fof_real_time
    > 
    > ### ** Examples
    > 
    > library(funcharts)
    ...
    13: rel_try(`Can't use relational with zero-column result set.` = (length(exprs) ==     0), {    rel <- duckdb_rel_from_df(.data)    out <- exprs_project(rel, exprs, .data)    return(out)})
    14: select.data.frame(., -contains("contribution_"))
    15: select(., -contains("contribution_"))
    16: out %>% select(-contains("contribution_"))
    17: regr_cc_fof(object = mod_list[[ii]], mfdobj_y_new = mfdobj_y_new_list[[ii]],     mfdobj_x_new = mfdobj_x_new_list[[ii]], mfdobj_y_tuning = mfdobj_y_tuning_list[[ii]],     mfdobj_x_tuning = mfdobj_x_tuning_list[[ii]], alpha = alpha,     include_covariates = include_covariates, absolute_error = absolute_error)
    18: FUN(X[[i]], ...)
    19: lapply(seq_along(mod_list), single_k)
    20: regr_cc_fof_real_time(mod_list = mod_list, mfdobj_y_new_list = mfdobj_y2_list,     mfdobj_x_new_list = mfdobj_x2_list)
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      43: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      44: source_file(path, env(env), wrap = wrap)
      45: FUN(X[[i]], ...)
      46: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      47: doTryCatch(return(expr), name, parentenv, handler)
      48: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      49: tryCatchList(expr, classes, parentenv, handlers)
      50: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      51: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      52: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      53: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      54: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      55: test_check("funcharts")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

# funneljoin

<details>

* Version: 0.2.0
* GitHub: NA
* Source code: https://github.com/cran/funneljoin
* Date/Publication: 2023-03-21 20:00:02 UTC
* Number of recursive dependencies: 59

Run `revdepcheck::cloud_details(, "funneljoin")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
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
      
      [ FAIL 17 | WARN 0 | SKIP 1 | PASS 384 ]
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

# ggfortify

<details>

* Version: 0.4.16
* GitHub: https://github.com/sinhrks/ggfortify
* Source code: https://github.com/cran/ggfortify
* Date/Publication: 2023-03-20 01:50:02 UTC
* Number of recursive dependencies: 125

Run `revdepcheck::cloud_details(, "ggfortify")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘test-all.R’
    Running the tests in ‘tests/test-all.R’ failed.
    Last 13 lines of output:
      41: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      42: source_file(path, env(env), wrap = wrap)
      43: FUN(X[[i]], ...)
      44: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      45: doTryCatch(return(expr), name, parentenv, handler)
      46: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      47: tryCatchList(expr, classes, parentenv, handlers)
      48: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      49: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      50: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      51: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      52: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      53: test_check("ggfortify")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

# ggmice

<details>

* Version: 0.1.0
* GitHub: https://github.com/amices/ggmice
* Source code: https://github.com/cran/ggmice
* Date/Publication: 2023-08-07 14:20:02 UTC
* Number of recursive dependencies: 120

Run `revdepcheck::cloud_details(, "ggmice")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘ggmice.Rmd’ using rmarkdown
    
     *** caught segfault ***
    address 0x2ec, cause 'memory not mapped'
    
    Traceback:
     1: duckdb:::df_is_materialized(df)
     2: doTryCatch(return(expr), name, parentenv, handler)
     3: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    ...
    38: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    39: vweave_rmarkdown(...)
    40: engine$weave(file, quiet = quiet, encoding = enc)
    41: doTryCatch(return(expr), name, parentenv, handler)
    42: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    43: tryCatchList(expr, classes, parentenv, handlers)
    44: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    45: tools:::buildVignettes(dir = "/tmp/workdir/ggmice/new/ggmice.Rcheck/vign_test/ggmice")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

# ggmotif

<details>

* Version: 0.2.1
* GitHub: NA
* Source code: https://github.com/cran/ggmotif
* Date/Publication: 2022-08-11 10:30:05 UTC
* Number of recursive dependencies: 160

Run `revdepcheck::cloud_details(, "ggmotif")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘ggmotif-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: getMotifFromMEME
    > ### Title: Extract and Visualize Motif Information from MEME Software
    > ### Aliases: getMotifFromMEME
    > 
    > ### ** Examples
    > 
    > filepath <- system.file("examples", "meme.txt", package = "ggmotif")
    > motif.info <- getMotifFromMEME(data = filepath, format = "txt")
    Error in df.motif.temp$input.seq.motif[j] <- stringr::str_split(df.motif.temp$raw[j],  : 
      replacement has length zero
    Calls: getMotifFromMEME
    Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘ggmotif.Rmd’ using rmarkdown
    
    Quitting from lines 102-104 [unnamed-chunk-4] (ggmotif.Rmd)
    Error: processing vignette 'ggmotif.Rmd' failed with diagnostics:
    replacement has length zero
    --- failed re-building ‘ggmotif.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘ggmotif.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespaces in Imports field not imported from:
      ‘cowplot’ ‘ggsci’ ‘memes’ ‘universalmotif’
      All declared Imports should be used.
    ```

# ggseqplot

<details>

* Version: 0.8.2
* GitHub: https://github.com/maraab23/ggseqplot
* Source code: https://github.com/cran/ggseqplot
* Date/Publication: 2023-03-15 12:10:15 UTC
* Number of recursive dependencies: 130

Run `revdepcheck::cloud_details(, "ggseqplot")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      45: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      46: source_file(path, env(env), wrap = wrap)
      47: FUN(X[[i]], ...)
      48: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      49: doTryCatch(return(expr), name, parentenv, handler)
      50: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      51: tryCatchList(expr, classes, parentenv, handlers)
      52: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      53: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      54: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      55: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      56: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      57: test_check("ggseqplot")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘ggseqplot.Rmd’ using rmarkdown
    
     *** caught segfault ***
    address 0x7d0, cause 'memory not mapped'
    
    Traceback:
     1: duckdb:::df_is_materialized(df)
     2: doTryCatch(return(expr), name, parentenv, handler)
     3: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    ...
    38: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    39: vweave_rmarkdown(...)
    40: engine$weave(file, quiet = quiet, encoding = enc)
    41: doTryCatch(return(expr), name, parentenv, handler)
    42: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    43: tryCatchList(expr, classes, parentenv, handlers)
    44: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    45: tools:::buildVignettes(dir = "/tmp/workdir/ggseqplot/new/ggseqplot.Rcheck/vign_test/ggseqplot")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

# gtsummary

<details>

* Version: 1.7.2
* GitHub: https://github.com/ddsjoberg/gtsummary
* Source code: https://github.com/cran/gtsummary
* Date/Publication: 2023-07-15 21:10:14 UTC
* Number of recursive dependencies: 207

Run `revdepcheck::cloud_details(, "gtsummary")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘gallery.Rmd’ using rmarkdown
    --- finished re-building ‘gallery.Rmd’
    
    --- re-building ‘gtsummary_definition.Rmd’ using rmarkdown
    --- finished re-building ‘gtsummary_definition.Rmd’
    
    --- re-building ‘inline_text.Rmd’ using rmarkdown
    --- finished re-building ‘inline_text.Rmd’
    
    ...
    Quitting from lines 48-56 [unnamed-chunk-2] (themes.Rmd)
    Error: processing vignette 'themes.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Invalid Error: Invalid input type, expected 'list' actual 'character'
    --- failed re-building ‘themes.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘themes.Rmd’
    
    Error: Vignette re-building failed.
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
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string '56R' to BOOL
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
    Error evaluating duckdb query: Conversion Error: Could not convert string '17RS' to BOOL
    --- failed re-building ‘eplet-mm.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘eplet-mm.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# IMP

<details>

* Version: 1.1
* GitHub: https://github.com/anup50695/IMPPackage
* Source code: https://github.com/cran/IMP
* Date/Publication: 2016-01-29 22:46:46
* Number of recursive dependencies: 60

Run `revdepcheck::cloud_details(, "IMP")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘IMP-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: staticConfMatrix
    > ### Title: Confusion Matrix for Binary Classification Models
    > ### Aliases: staticConfMatrix
    > 
    > ### ** Examples
    > 
    > model_1 <- glm(Species ~ Sepal.Length,data=iris,family=binomial)
    ...
    13: rel_try({    rel <- duckdb_rel_from_df(.data)    if (length(by_names) > 0) {        rel <- oo_prep(rel)    }    dots <- dplyr_quosures(...)    dots <- fix_auto_name(dots)    names_used <- character()    names_new <- character()    names_out <- rel_names(rel)    for (i in seq_along(dots)) {        dot <- dots[[i]]        new <- names(dots)[[i]]        names_new <- c(names_new, new)        new_pos <- match(new, names_out, nomatch = length(names_out) +             1L)        exprs <- imap(set_names(names_out), relexpr_reference,             rel = NULL)        new_expr <- rel_translate(dot, names_data = names_out,             alias = new, partition = by_names, need_window = TRUE)        exprs[[new_pos]] <- new_expr        rel <- rel_project(rel, unname(exprs))        names_out[[new_pos]] <- new        new_names_used <- intersect(attr(new_expr, "used"), names(.data))        names_used <- c(names_used, setdiff(new_names_used, names_used))    }    if (length(by_names) > 0) {        rel <- oo_restore(rel)    }    out <- rel_to_df(rel)    out <- dplyr_reconstruct(out, .data)    names_original <- names(.data)    out <- mutate_relocate(out = out, before = {        {            .before        }    }, after = {        {            .after        }    }, names_original = names_original)    used <- set_names(names(out) %in% names_used, names(out))    names_groups <- by_names    out <- duckplyr_mutate_keep(out = out, keep = keep, used = used,         names_new = names_new, names_groups = names_groups)    return(out)})
    14: mutate.data.frame(., pred_prob = as.factor(ifelse(x[, 2] >= t,     "Pred-1", "Pred-0")))
    15: mutate(., pred_prob = as.factor(ifelse(x[, 2] >= t, "Pred-1",     "Pred-0")))
    16: x %>% mutate(pred_prob = as.factor(ifelse(x[, 2] >= t, "Pred-1",     "Pred-0")))
    17: conf_mat(x, t)
    18: FUN(X[[i]], ...)
    19: lapply(list_models, function(x) conf_mat(x, t))
    20: staticConfMatrix(list(df1, df2), t = 0.2)
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

## In both

*   checking LazyData ... NOTE
    ```
      'LazyData' is specified without a 'data' directory
    ```

# IPEDS

<details>

* Version: 0.1.0
* GitHub: NA
* Source code: https://github.com/cran/IPEDS
* Date/Publication: 2022-11-01 07:52:51 UTC
* Number of recursive dependencies: 80

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
    ...
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

# itsdm

<details>

* Version: 0.2.1
* GitHub: https://github.com/LLeiSong/itsdm
* Source code: https://github.com/cran/itsdm
* Date/Publication: 2023-06-11 00:00:02 UTC
* Number of recursive dependencies: 85

Run `revdepcheck::cloud_details(, "itsdm")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘itsdm-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: independent_response
    > ### Title: Calculate independent responses of each variables.
    > ### Aliases: independent_response
    > 
    > ### ** Examples
    > 
    > # Using a pseudo presence-only occurrence dataset of
    ...
    15: mutate(., variable = names(responses_cont)[n])
    16: responses_cont[[n]] %>% mutate(variable = names(responses_cont)[n])
    17: FUN(X[[i]], ...)
    18: lapply(1:length(responses_cont), function(n) {    responses_cont[[n]] %>% mutate(variable = names(responses_cont)[n])})
    19: do.call(rbind, lapply(1:length(responses_cont), function(n) {    responses_cont[[n]] %>% mutate(variable = names(responses_cont)[n])}))
    20: .plot_responses(x, smooth_span)
    21: plot.IndependentResponse(independent_responses)
    22: plot(independent_responses)
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

# lares

<details>

* Version: 5.2.2
* GitHub: https://github.com/laresbernardo/lares
* Source code: https://github.com/cran/lares
* Date/Publication: 2023-05-18 10:40:02 UTC
* Number of recursive dependencies: 117

Run `revdepcheck::cloud_details(, "lares")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘lares-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: ohse
    > ### Title: One Hot Smart Encoding (Dummy Variables)
    > ### Aliases: ohse
    > 
    > ### ** Examples
    > 
    > data(dft)
    ...
    14: mutate.data.frame(.tbl, !!!funs)
    15: mutate(.tbl, !!!funs)
    16: mutate_all(., as.character)
    17: replace(., is.na(.), "NAs")
    18: vector_values %>% mutate_all(as.character) %>% replace(., is.na(.),     "NAs")
    19: ohse(dft, limit = 3)
    20: head(., 3)
    21: ohse(dft, limit = 3) %>% head(3)
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

# LifeInsuranceContracts

<details>

* Version: 0.0.4
* GitHub: NA
* Source code: https://github.com/cran/LifeInsuranceContracts
* Date/Publication: 2022-09-11 12:02:54 UTC
* Number of recursive dependencies: 95

Run `revdepcheck::cloud_details(, "LifeInsuranceContracts")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘using-the-lifeinsurancecontracts-package.Rmd’ using rmarkdown
    
     *** caught segfault ***
    address 0x3, cause 'memory not mapped'
    
    Traceback:
     1: duckdb:::df_is_materialized(df)
     2: doTryCatch(return(expr), name, parentenv, handler)
     3: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    ...
    52: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    53: vweave_rmarkdown(...)
    54: engine$weave(file, quiet = quiet, encoding = enc)
    55: doTryCatch(return(expr), name, parentenv, handler)
    56: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    57: tryCatchList(expr, classes, parentenv, handlers)
    58: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    59: tools:::buildVignettes(dir = "/tmp/workdir/LifeInsuranceContracts/new/LifeInsuranceContracts.Rcheck/vign_test/LifeInsuranceContracts")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

# listcompr

<details>

* Version: 0.4.0
* GitHub: https://github.com/patrickroocks/listcompr
* Source code: https://github.com/cran/listcompr
* Date/Publication: 2021-10-02 15:50:02 UTC
* Number of recursive dependencies: 53

Run `revdepcheck::cloud_details(, "listcompr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.r’
    Running the tests in ‘tests/testthat.r’ failed.
    Last 13 lines of output:
      > 
      > test_check("listcompr")
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 125 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('testbase.r:294:3'): tests with dplyr ──────────────────────────────
      dplyr::filter(...) not equal to data.frame(...).
      Component "a_1": Mean relative difference: 0.6666667
      Component "a_2": Mean relative difference: 0.6666667
      Component "a_3": Mean relative difference: 0.6666667
      Component "a_4": Mean relative difference: 0.6666667
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 125 ]
      Error: Test failures
      Execution halted
    ```

# MACP

<details>

* Version: 0.1.0
* GitHub: https://github.com/mrbakhsh/MACP
* Source code: https://github.com/cran/MACP
* Date/Publication: 2023-02-28 17:32:30 UTC
* Number of recursive dependencies: 235

Run `revdepcheck::cloud_details(, "MACP")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘MACP_tutorial.Rmd’ using rmarkdown
    
    Quitting from lines 329-341 [unnamed-chunk-13] (MACP_tutorial.Rmd)
    Error: processing vignette 'MACP_tutorial.Rmd' failed with diagnostics:
    argument is of length zero
    --- failed re-building ‘MACP_tutorial.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘MACP_tutorial.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespace in Imports field not imported from: ‘fmsb’
      All declared Imports should be used.
    ```

# manynet

<details>

* Version: 0.2.1
* GitHub: https://github.com/snlab-ch/manynet
* Source code: https://github.com/cran/manynet
* Date/Publication: 2023-08-11 13:40:06 UTC
* Number of recursive dependencies: 115

Run `revdepcheck::cloud_details(, "manynet")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘manynet-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: from
    > ### Title: Tools for joining lists of networks, graphs, and matrices
    > ### Aliases: from from_subgraphs from_egos from_waves from_slices
    > 
    > ### ** Examples
    > 
    > ison_adolescents %>%
    ...
      4.     ├─dplyr::full_join(out, object2, by = by, copy = TRUE)
      5.     └─tidygraph:::full_join.tbl_graph(out, object2, by = by, copy = TRUE)
      6.       ├─dplyr::full_join(...)
      7.       └─dplyr:::full_join.data.frame(...)
      8.         └─dplyr::full_join(...)
      9.           ├─dplyr::auto_copy(x, y, copy = copy)
     10.           └─dplyr:::auto_copy.data.frame(x, y, copy = copy)
     11.             └─dplyr:::as_duckplyr_df(y)
     12.               └─rlang::abort("Must pass a plain data frame or a tibble to `as_duckplyr_df()`.")
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
        4. └─manynet::from_subgraphs(to_subgraphs(unicorn, "unicorn"))
        5.   └─manynet::join_nodes(out, ann[[i]])
        6.     ├─dplyr::full_join(out, object2, by = by, copy = TRUE)
        7.     └─tidygraph:::full_join.tbl_graph(out, object2, by = by, copy = TRUE)
        8.       ├─dplyr::full_join(...)
        9.       └─dplyr:::full_join.data.frame(...)
       10.         └─dplyr::full_join(...)
       11.           ├─dplyr::auto_copy(x, y, copy = copy)
       12.           └─dplyr:::auto_copy.data.frame(x, y, copy = copy)
       13.             └─dplyr:::as_duckplyr_df(y)
       14.               └─rlang::abort("Must pass a plain data frame or a tibble to `as_duckplyr_df()`.")
      
      [ FAIL 1 | WARN 0 | SKIP 7 | PASS 301 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking package dependencies ... NOTE
    ```
    Package which this enhances but not available for checking: ‘Rgraphviz’
    ```

# markets

<details>

* Version: 1.1.4
* GitHub: https://github.com/pi-kappa-devel/markets
* Source code: https://github.com/cran/markets
* Date/Publication: 2023-01-06 00:50:02 UTC
* Number of recursive dependencies: 73

Run `revdepcheck::cloud_details(, "markets")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      48: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      49: source_file(path, env(env), wrap = wrap)
      50: FUN(X[[i]], ...)
      51: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      52: doTryCatch(return(expr), name, parentenv, handler)
      53: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      54: tryCatchList(expr, classes, parentenv, handlers)
      55: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      56: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      57: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      58: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      59: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      60: test_check("markets")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘basic_usage.Rmd’ using rmarkdown
    
     *** caught segfault ***
    address 0xfa0, cause 'memory not mapped'
    
    Traceback:
     1: duckdb:::df_is_materialized(df)
     2: doTryCatch(return(expr), name, parentenv, handler)
     3: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    ...
    49: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    50: vweave_rmarkdown(...)
    51: engine$weave(file, quiet = quiet, encoding = enc)
    52: doTryCatch(return(expr), name, parentenv, handler)
    53: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    54: tryCatchList(expr, classes, parentenv, handlers)
    55: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    56: tools:::buildVignettes(dir = "/tmp/workdir/markets/new/markets.Rcheck/vign_test/markets")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.4Mb
      sub-directories of 1Mb or more:
        libs   4.0Mb
    ```

# metalite.ae

<details>

* Version: 0.1.1
* GitHub: https://github.com/Merck/metalite.ae
* Source code: https://github.com/cran/metalite.ae
* Date/Publication: 2023-02-24 19:50:02 UTC
* Number of recursive dependencies: 104

Run `revdepcheck::cloud_details(, "metalite.ae")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      [65] 2.38095238    | 2.38095238      [65]            
      [66] 1.19047619    | 1.19047619      [66]            
      [67] 5.98006645    | 5.98006645      [67]            
      [68] 0.00000000    - 0.02768549      [68]            
      [69] 0.02768549    - -1.13510520     [69]            
      [70] 2.38095238    - 0.00000000      [70]            
      [71] 2.38095238    - 1.19047619      [71]            
      [72] 0.02768549    - 1.19047619      [72]            
      [73] 4.78959025    - 0.00000000      [73]            
      [74] 1.19047619    - 2.38095238      [74]            
       ... ...             ...             and 168 more ...
      
      [ FAIL 3 | WARN 0 | SKIP 8 | PASS 195 ]
      Error: Test failures
      Execution halted
    ```

# mpathsenser

<details>

* Version: 1.1.3
* GitHub: NA
* Source code: https://github.com/cran/mpathsenser
* Date/Publication: 2023-02-07 14:12:31 UTC
* Number of recursive dependencies: 108

Run `revdepcheck::cloud_details(, "mpathsenser")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      [540] "12345_540"           | "12345_540"             [520]           
      [541] "12345_541"           | "12345_541"             [521]           
      [542] "12345_542"           | "12345_542"             [522]           
      [543] "12345_543"           -                                         
      [544] "12345_544"           -                                         
      [545] "12345_545"           -                                         
      [546] "12345_546"           -                                         
      [547] "12345_547"           | "12345_547"             [523]           
      [548] "12345_548"           -                                         
      [549] "12345_549"           -                                         
        ... ...                     ...                     and 547 more ...
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 474 ]
      Error: Test failures
      Execution halted
    ```

# mpwR

<details>

* Version: 0.1.4
* GitHub: NA
* Source code: https://github.com/cran/mpwR
* Date/Publication: 2023-05-05 18:10:02 UTC
* Number of recursive dependencies: 112

Run `revdepcheck::cloud_details(, "mpwR")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
              - "LFQ Intensity 02" [2]
              - "LFQ Intensity 03" [3]
              - "LFQ Intensity 01" [4]
              - "LFQ Intensity 02" [5]
              - "LFQ Intensity 03" [6]
              - "LFQ Intensity 03" [7]
      ── Failure ('test_utils_reports.R:332:4'): generate_summary_Report works ───────
      output$`Proteingroup.IDs [abs.] with a CV LFQ < 20 [%]` (`actual`) not equal to 3 (`expected`).
      
        `actual`: 0
      `expected`: 3
      
      [ FAIL 6 | WARN 123 | SKIP 0 | PASS 654 ]
      Error: Test failures
      Execution halted
    ```

# msigdbr

<details>

* Version: 7.5.1
* GitHub: https://github.com/igordot/msigdbr
* Source code: https://github.com/cran/msigdbr
* Date/Publication: 2022-03-30 07:00:16 UTC
* Number of recursive dependencies: 54

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
      installed size is 13.1Mb
      sub-directories of 1Mb or more:
        R  13.0Mb
    ```

# msSPChelpR

<details>

* Version: 0.9.0
* GitHub: https://github.com/marianschmidt/msSPChelpR
* Source code: https://github.com/cran/msSPChelpR
* Date/Publication: 2022-06-10 23:50:02 UTC
* Number of recursive dependencies: 74

Run `revdepcheck::cloud_details(, "msSPChelpR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘msSPChelpR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: asir
    > ### Title: Calculate age-standardized incidence rates
    > ### Aliases: asir
    > 
    > ### ** Examples
    > 
    > #load sample data
    ...
    +       sex_var = "sex.1",
    +       year_var = "t_yeardiag.2", 
    +       site_var = "t_site_icd.2",
    +       pyar_var = "population_pyar")
    Using person-years at risk [PYAR] from reference population as pyears for calculating incidence rates.
    Be careful, in this calculation it is assumed that all included regions have collected data for the full time period: 1990 to 2010
                           If you have included registries with differing times, please check this assumption by looking at groups with 0 incidence and specify option 'inclusion_restrictions' if needed.
    Error: rapi_execute: Unsupported column type for bind
    Error: Error evaluating duckdb query: Invalid Error: std::exception
    Execution halted
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
* Number of recursive dependencies: 120

Run `revdepcheck::cloud_details(, "multiverse")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      
      Error in FUN(X[[i]], ...) : error
       test_check -> test_dir -> test_files -> test_files_serial -> with_reporter -> lapply -> FUN -> source_file -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> test_that -> test_code -> tryCatchOne -> tryCatchList -> withCallingHandlers -> eval -> eval -> expect_warning -> quasi_capture -> .capture -> withCallingHandlers -> eval_bare -> execute_multiverse -> mapply ->  -> app -> FUN -> tryStack -> lapply -> FUN -> FUN -> stop -> FUN(X[[i]], ...) 
      
      [ FAIL 1 | WARN 1 | SKIP 0 | PASS 207 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-parse_multiverse.R:389:3'): `parse_multiverse` works when conditions are specified ──
      as.list(p_tbl_df) not equal to as.list(p_tbl_df.ref).
      Component "values_y": 2 string mismatches
      Component "values_z": 3 string mismatches
      
      [ FAIL 1 | WARN 1 | SKIP 0 | PASS 207 ]
      Error: Test failures
      Execution halted
    ```

# ohenery

<details>

* Version: 0.1.1
* GitHub: https://github.com/shabbychef/ohenery
* Source code: https://github.com/cran/ohenery
* Date/Publication: 2019-10-15 06:30:02 UTC
* Number of recursive dependencies: 66

Run `revdepcheck::cloud_details(, "ohenery")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
       4. │   │ └─base::withCallingHandlers(...)
       5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
       6. └─ohenery::rsm(g = g, mu = mu)
       7.   └─base::stopifnot(...)
      ── Error ('test-basic.r:60:2'): rsm bits ───────────────────────────────────────
      Error in `eval_bare(expr, quo_get_env(quo))`: object 'y3' not found
      Backtrace:
          ▆
       1. └─testthat::expect_equal(y1, y3) at test-basic.r:60:8
       2.   └─testthat::quasi_label(enquo(expected), expected.label, arg = "expected")
       3.     └─rlang::eval_bare(expr, quo_get_env(quo))
      
      [ FAIL 2 | WARN 1 | SKIP 1 | PASS 146 ]
      Error: Test failures
      Execution halted
    ```

# oncomsm

<details>

* Version: 0.1.4
* GitHub: https://github.com/Boehringer-Ingelheim/oncomsm
* Source code: https://github.com/cran/oncomsm
* Date/Publication: 2023-04-17 07:00:02 UTC
* Number of recursive dependencies: 124

Run `revdepcheck::cloud_details(, "oncomsm")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      
      `actual`:   FALSE
      `expected`: TRUE 
      Backtrace:
          ▆
       1. └─oncomsm (local) test_calibration(scale_factor, shape) at test-sampling.R:221:6
       2.   └─testthat::expect_true(...) at test-sampling.R:213:4
      
      [ FAIL 7 | WARN 0 | SKIP 3 | PASS 52 ]
      Deleting unused snapshots:
      • plots/plot-mstate-srp-model-2.svg
      • plots/plot-mstate-srp-model-3.svg
      • plots/plot-srp-model-2.svg
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 61.6Mb
      sub-directories of 1Mb or more:
        doc    1.1Mb
        libs  59.4Mb
    ```

*   checking for GNU extensions in Makefiles ... NOTE
    ```
    GNU make is a SystemRequirements.
    ```

# OpenLand

<details>

* Version: 1.0.2
* GitHub: https://github.com/reginalexavier/OpenLand
* Source code: https://github.com/cran/OpenLand
* Date/Publication: 2021-11-02 07:20:02 UTC
* Number of recursive dependencies: 120

Run `revdepcheck::cloud_details(, "OpenLand")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      demo_int_pixel$category_lvlLoss$categoryData$GL_pixel[10] not equal to 1684.
      1/1 mismatches
      [1] 1611 - 1684 == -73
      ── Failure ('test_intensityAnalysis.R:65:3'): Behavior of the intensityAnalysis ──
      demo_int_pixel$transition_lvlGain_n$transitionData$T_i2n_pixel[18] not equal to 380.
      1/1 mismatches
      [1] 379 - 380 == -1
      ── Failure ('test_intensityAnalysis.R:66:3'): Behavior of the intensityAnalysis ──
      demo_int_pixel$transition_lvlLoss_m$transitionData$T_m2j_pixel[15] not equal to 382.
      1/1 mismatches
      [1] 409 - 382 == 27
      
      [ FAIL 3 | WARN 1 | SKIP 0 | PASS 109 ]
      Error: Test failures
      Execution halted
    ```

# optimall

<details>

* Version: 0.1.2
* GitHub: https://github.com/yangjasp/optimall
* Source code: https://github.com/cran/optimall
* Date/Publication: 2022-11-09 07:20:02 UTC
* Number of recursive dependencies: 122

Run `revdepcheck::cloud_details(, "optimall")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      > 
      > test_check("optimall")
      [ FAIL 1 | WARN 0 | SKIP 1 | PASS 204 ]
      
      ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
      • On Linux (1): 'test-optimall_shiny.R:15:1'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-split_strata.R:383:3'): order is preserved in dataframe with ids provided ──
      all(...) not equal to TRUE.
      1 element mismatch
      
      [ FAIL 1 | WARN 0 | SKIP 1 | PASS 204 ]
      Error: Test failures
      Execution halted
    ```

# OutliersO3

<details>

* Version: 0.6.3
* GitHub: NA
* Source code: https://github.com/cran/OutliersO3
* Date/Publication: 2020-04-25 00:10:02 UTC
* Number of recursive dependencies: 135

Run `revdepcheck::cloud_details(, "OutliersO3")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘OutliersO3-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: O3plotColours
    > ### Title: Set colours for O3 plots
    > ### Aliases: O3plotColours
    > 
    > ### ** Examples
    > 
    > c1 <- O3prep(stackloss, k1=2, method=c("HDo", "BAC"), tolHDo=0.025, tolBAC=0.01)
    > c2 <- O3plotM(c1)
    Error: Error evaluating duckdb query: Conversion Error: Could not convert string 'A' to DOUBLE
    Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘DrawingO3plots.Rmd’ using rmarkdown
    
    Quitting from lines 25-32 [unnamed-chunk-1] (DrawingO3plots.Rmd)
    Error: processing vignette 'DrawingO3plots.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Conversion Error: Could not convert string 'A' to DOUBLE
    --- failed re-building ‘DrawingO3plots.Rmd’
    
    --- re-building ‘MultTolLevels.Rmd’ using rmarkdown
    
    ...
    --- failed re-building ‘PCPsO3.Rmd’
    
    --- re-building ‘xtraO3methods.Rmd’ using rmarkdown
    --- finished re-building ‘xtraO3methods.Rmd’
    
    SUMMARY: processing the following files failed:
      ‘DrawingO3plots.Rmd’ ‘MultTolLevels.Rmd’ ‘PCPsO3.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# pestr

<details>

* Version: 0.8.2
* GitHub: https://github.com/mczyzj/pestr
* Source code: https://github.com/cran/pestr
* Date/Publication: 2021-01-20 11:00:02 UTC
* Number of recursive dependencies: 79

Run `revdepcheck::cloud_details(, "pestr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test_tabletools.R:384:3'): Test that distribution f returns correct values
                from database ──
      test_distri[[2]] not equal to `testing_distri_df`.
      Attributes: < Component "row.names": Numeric: lengths (8, 6) differ >
      Component "eppocode": Lengths (8, 6) differ (string compare on first 6)
      Component "eppocode": 2 string mismatches
      Component "distribution": Lengths (8, 6) differ (string compare on first 6)
      Component "distribution": 2 string mismatches
      
      [ FAIL 1 | WARN 30 | SKIP 5 | PASS 78 ]
      Error: Test failures
      In addition: Warning message:
      call dbDisconnect() when finished working with a connection 
      Execution halted
    ```

## In both

*   checking LazyData ... NOTE
    ```
      'LazyData' is specified without a 'data' directory
    ```

# promotionImpact

<details>

* Version: 0.1.5
* GitHub: https://github.com/ncsoft/promotionImpact
* Source code: https://github.com/cran/promotionImpact
* Date/Publication: 2021-04-13 15:00:05 UTC
* Number of recursive dependencies: 123

Run `revdepcheck::cloud_details(, "promotionImpact")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘promotionImpact-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: compareModels
    > ### Title: compare several models
    > ### Aliases: compareModels
    > 
    > ### ** Examples
    > 
    > ## Don't show: 
    ...
    10: tryCatchList(expr, classes, parentenv, handlers)
    11: tryCatch(withCallingHandlers(expr, condition = function(cnd) {    {        .__handler_frame__. <- TRUE        .__setup_frame__. <- frame        if (inherits(cnd, "message")) {            except <- c("warning", "error")        }        else if (inherits(cnd, "warning")) {            except <- "error"        }        else {            except <- ""        }    }    while (!is_null(cnd)) {        if (inherits(cnd, "error")) {            out <- handlers[[1L]](cnd)            if (!inherits(out, "rlang_zap"))                 throw(out)        }        inherit <- .subset2(.subset2(cnd, "rlang"), "inherit")        if (is_false(inherit)) {            return()        }        cnd <- .subset2(cnd, "parent")    }}), stackOverflowError = handlers[[1L]])
    12: rlang::try_fetch(rel, error = identity)
    13: rel_try(`.locale argument not supported` = !is.null(.locale),     `dplyr.legacy_locale not supported` = isTRUE(getOption("dplyr.legacy_locale")),     {        rel <- duckdb_rel_from_df(.data)        if (length(dots) == 0) {            return(.data)        }        exprs <- rel_translate_dots(dots, .data)        out_rel <- rel_order(rel, exprs)        out <- rel_to_df(out_rel)        out <- dplyr_reconstruct(out, .data)        return(out)    })
    14: arrange.data.frame(., date)
    15: arrange(., date)
    16: data %>% arrange(date)
    17: promotionImpact(data = sim.data.sub, promotion = sim.promotion.sub,     time.field = "dt", target.field = "simulated_sales", trend = FALSE,     period = NULL, structural.change = FALSE, logged = TRUE,     differencing = TRUE, synergy.promotion = FALSE, synergy.var = NULL,     allow.missing = TRUE)
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

# protti

<details>

* Version: 0.6.0
* GitHub: https://github.com/jpquast/protti
* Source code: https://github.com/cran/protti
* Date/Publication: 2023-01-20 10:30:02 UTC
* Number of recursive dependencies: 198

Run `revdepcheck::cloud_details(, "protti")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      🔬 Have fun analysing your data! 💻
      > 
      > test_check("protti")
      [ FAIL 1 | WARN 63 | SKIP 0 | PASS 106 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-qc_functions.R:104:3'): qc_cvs works ─────────────────────────
      round(cvs$median_cv, digits = 2) not equal to c(6.06, 6.07).
      2/2 mismatches (average diff: 0.01)
      [1] 6.07 - 6.06 ==  0.01
      [2] 6.06 - 6.07 == -0.01
      
      [ FAIL 1 | WARN 63 | SKIP 0 | PASS 106 ]
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
    ...
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
    ...
    --- failed re-building ‘PupilPre_Message_Alignment.Rmd’
    
    --- re-building ‘PupilPre_Plotting.Rmd’ using rmarkdown
    --- finished re-building ‘PupilPre_Plotting.Rmd’
    
    SUMMARY: processing the following files failed:
      ‘PupilPre_Basic_Preprocessing.Rmd’ ‘PupilPre_Message_Alignment.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# purgeR

<details>

* Version: 1.8
* GitHub: NA
* Source code: https://github.com/cran/purgeR
* Date/Publication: 2023-08-16 08:20:02 UTC
* Number of recursive dependencies: 131

Run `revdepcheck::cloud_details(, "purgeR")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      43: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      44: source_file(path, env(env), wrap = wrap)
      45: FUN(X[[i]], ...)
      46: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      47: doTryCatch(return(expr), name, parentenv, handler)
      48: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      49: tryCatchList(expr, classes, parentenv, handlers)
      50: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      51: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      52: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      53: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      54: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      55: test_check("purgeR")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  9.9Mb
      sub-directories of 1Mb or more:
        libs   9.1Mb
    ```

# reappraised

<details>

* Version: 0.1.0
* GitHub: NA
* Source code: https://github.com/cran/reappraised
* Date/Publication: 2023-03-20 11:10:02 UTC
* Number of recursive dependencies: 143

Run `revdepcheck::cloud_details(, "reappraised")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘reappraised.Rmd’ using rmarkdown
    
     *** caught segfault ***
    address 0x3, cause 'memory not mapped'
    
    Traceback:
     1: duckdb:::df_is_materialized(df)
     2: doTryCatch(return(expr), name, parentenv, handler)
     3: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    ...
    41: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    42: vweave_rmarkdown(...)
    43: engine$weave(file, quiet = quiet, encoding = enc)
    44: doTryCatch(return(expr), name, parentenv, handler)
    45: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    46: tryCatchList(expr, classes, parentenv, handlers)
    47: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    48: tools:::buildVignettes(dir = "/tmp/workdir/reappraised/new/reappraised.Rcheck/vign_test/reappraised")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

# rprev

<details>

* Version: 1.0.5
* GitHub: https://github.com/stulacy/rprev-dev
* Source code: https://github.com/cran/rprev
* Date/Publication: 2021-05-04 16:40:03 UTC
* Number of recursive dependencies: 124

Run `revdepcheck::cloud_details(, "rprev")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘diagnostics.Rmd’ using rmarkdown
    
     *** caught segfault ***
    address 0x64, cause 'memory not mapped'
    
    Traceback:
     1: duckdb:::df_is_materialized(df)
     2: doTryCatch(return(expr), name, parentenv, handler)
     3: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    ...
    44: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    45: vweave_rmarkdown(...)
    46: engine$weave(file, quiet = quiet, encoding = enc)
    47: doTryCatch(return(expr), name, parentenv, handler)
    48: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    49: tryCatchList(expr, classes, parentenv, handlers)
    50: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    51: tools:::buildVignettes(dir = "/tmp/workdir/rprev/new/rprev.Rcheck/vign_test/rprev")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
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

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘how-to-use-rwicc.Rmd’ using rmarkdown
    
    Quitting from lines 74-80 [unnamed-chunk-5] (how-to-use-rwicc.Rmd)
    Error: processing vignette 'how-to-use-rwicc.Rmd' failed with diagnostics:
    Error evaluating duckdb query: Invalid Error: Invalid input type, expected 'list' actual 'character'
    --- failed re-building ‘how-to-use-rwicc.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘how-to-use-rwicc.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# sf

<details>

* Version: 1.0-14
* GitHub: https://github.com/r-spatial/sf
* Source code: https://github.com/cran/sf
* Date/Publication: 2023-07-11 08:40:02 UTC
* Number of recursive dependencies: 156

Run `revdepcheck::cloud_details(, "sf")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘sf1.Rmd’ using rmarkdown
    --- finished re-building ‘sf1.Rmd’
    
    --- re-building ‘sf2.Rmd’ using rmarkdown
    --- finished re-building ‘sf2.Rmd’
    
    --- re-building ‘sf3.Rmd’ using rmarkdown
    --- finished re-building ‘sf3.Rmd’
    
    ...
    42: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    43: vweave_rmarkdown(...)
    44: engine$weave(file, quiet = quiet, encoding = enc)
    45: doTryCatch(return(expr), name, parentenv, handler)
    46: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    47: tryCatchList(expr, classes, parentenv, handlers)
    48: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    49: tools:::buildVignettes(dir = "/tmp/workdir/sf/new/sf.Rcheck/vign_test/sf")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 25.9Mb
      sub-directories of 1Mb or more:
        doc      1.7Mb
        libs    19.1Mb
        sqlite   1.5Mb
    ```

# sfnetworks

<details>

* Version: 0.6.3
* GitHub: https://github.com/luukvdmeer/sfnetworks
* Source code: https://github.com/cran/sfnetworks
* Date/Publication: 2023-03-22 16:40:02 UTC
* Number of recursive dependencies: 106

Run `revdepcheck::cloud_details(, "sfnetworks")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      42: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      43: source_file(path, env(env), wrap = wrap)
      44: FUN(X[[i]], ...)
      45: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      46: doTryCatch(return(expr), name, parentenv, handler)
      47: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      48: tryCatchList(expr, classes, parentenv, handlers)
      49: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      50: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      51: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      52: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      53: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      54: test_check("sfnetworks")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘sfn01_structure.Rmd’ using rmarkdown
    --- finished re-building ‘sfn01_structure.Rmd’
    
    --- re-building ‘sfn02_preprocess_clean.Rmd’ using rmarkdown
    --- finished re-building ‘sfn02_preprocess_clean.Rmd’
    
    --- re-building ‘sfn03_join_filter.Rmd’ using rmarkdown
    
     *** caught segfault ***
    ...
    41: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    42: vweave_rmarkdown(...)
    43: engine$weave(file, quiet = quiet, encoding = enc)
    44: doTryCatch(return(expr), name, parentenv, handler)
    45: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    46: tryCatchList(expr, classes, parentenv, handlers)
    47: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    48: tools:::buildVignettes(dir = "/tmp/workdir/sfnetworks/new/sfnetworks.Rcheck/vign_test/sfnetworks")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

# ShinyItemAnalysis

<details>

* Version: 1.5.0
* GitHub: https://github.com/patriciamar/ShinyItemAnalysis
* Source code: https://github.com/cran/ShinyItemAnalysis
* Date/Publication: 2023-05-08 10:00:06 UTC
* Number of recursive dependencies: 136

Run `revdepcheck::cloud_details(, "ShinyItemAnalysis")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘ShinyItemAnalysis-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: coef,BlisClass-method
    > ### Title: Get Coefficients from a fitted BLIS model
    > ### Aliases: coef,BlisClass-method
    > 
    > ### ** Examples
    > 
    > fitted_blis <- fit_blis(HCItest[, 1:20], HCIkey)
    Error: pars input does not contain the appropriate classes, which should match pars = 'values'
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.3Mb
      sub-directories of 1Mb or more:
        ShinyItemAnalysis   2.3Mb
        data                1.9Mb
    ```

# sovereign

<details>

* Version: 1.2.1
* GitHub: https://github.com/tylerJPike/sovereign
* Source code: https://github.com/cran/sovereign
* Date/Publication: 2022-01-04 17:20:01 UTC
* Number of recursive dependencies: 99

Run `revdepcheck::cloud_details(, "sovereign")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      42: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      43: source_file(path, env(env), wrap = wrap)
      44: FUN(X[[i]], ...)
      45: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      46: doTryCatch(return(expr), name, parentenv, handler)
      47: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      48: tryCatchList(expr, classes, parentenv, handlers)
      49: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      50: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      51: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      52: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      53: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      54: test_check("sovereign")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

# stabiliser

<details>

* Version: 1.0.6
* GitHub: NA
* Source code: https://github.com/cran/stabiliser
* Date/Publication: 2023-05-17 11:00:05 UTC
* Number of recursive dependencies: 149

Run `revdepcheck::cloud_details(, "stabiliser")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘stabiliser.Rmd’ using knitr
    
    Quitting from lines 63-64 [unnamed-chunk-6] (stabiliser.Rmd)
    Error: processing vignette 'stabiliser.Rmd' failed with diagnostics:
    $ operator is invalid for atomic vectors
    --- failed re-building ‘stabiliser.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘stabiliser.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespace in Imports field not imported from: ‘knitr’
      All declared Imports should be used.
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

# SWMPr

<details>

* Version: 2.5.0
* GitHub: https://github.com/fawda123/SWMPr
* Source code: https://github.com/cran/SWMPr
* Date/Publication: 2023-07-16 20:00:02 UTC
* Number of recursive dependencies: 116

Run `revdepcheck::cloud_details(, "SWMPr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      19: eval(exprs, env)
      20: eval(exprs, env)
      21: withCallingHandlers(invisible(eval(exprs, env)), error = function(err) {    abort(paste0("In path: ", encodeString(path, quote = "\"")),         parent = err)})
      22: source_file(path, env = env, chdir = chdir, wrap = wrap)
      23: FUN(X[[i]], ...)
      24: lapply(files, function(path) {    source_file(path, env = env, chdir = chdir, wrap = wrap)})
      25: source_dir(path, "^helper.*\\.[rR]$", env = env, wrap = FALSE)
      26: source_test_helpers(".", env)
      27: test_files_setup_state(test_dir, test_package, load_helpers,     env)
      28: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      29: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      30: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      31: test_check("SWMPr")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.4Mb
      sub-directories of 1Mb or more:
        data   4.6Mb
        help   1.4Mb
    ```

# text2sdg

<details>

* Version: 1.1.1
* GitHub: https://github.com/dwulff/text2sdg
* Source code: https://github.com/cran/text2sdg
* Date/Publication: 2023-03-17 20:50:02 UTC
* Number of recursive dependencies: 94

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

# tfrmt

<details>

* Version: 0.0.3
* GitHub: https://github.com/GSK-Biostatistics/tfrmt
* Source code: https://github.com/cran/tfrmt
* Date/Publication: 2023-06-22 16:02:35 UTC
* Number of recursive dependencies: 96

Run `revdepcheck::cloud_details(, "tfrmt")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      [9] "GSK123456 100 mg"       - "Placebo"                [9]
      
          actual$visit | expected$visit    
      [2] NA           | NA             [2]
      [3] NA           | NA             [3]
      [4] "Week 12"    | "Week 12"      [4]
      [5] "Week 4"     - "Week 12"      [5]
      [6] "Week 8"     - "Week 4"       [6]
      [7] "Week 8"     - "Week 4"       [7]
      [8] "Week 4"     - "Week 8"       [8]
      [9] "Week 12"    - "Week 8"       [9]
      
      [ FAIL 1 | WARN 0 | SKIP 9 | PASS 490 ]
      Error: Test failures
      Execution halted
    ```

# tglkmeans

<details>

* Version: 0.3.11
* GitHub: https://github.com/tanaylab/tglkmeans
* Source code: https://github.com/cran/tglkmeans
* Date/Publication: 2023-08-21 09:00:02 UTC
* Number of recursive dependencies: 89

Run `revdepcheck::cloud_details(, "tglkmeans")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      44: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      45: source_file(path, env(env), wrap = wrap)
      46: FUN(X[[i]], ...)
      47: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      48: doTryCatch(return(expr), name, parentenv, handler)
      49: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      50: tryCatchList(expr, classes, parentenv, handlers)
      51: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      52: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      53: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      54: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      55: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      56: test_check("tglkmeans")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

# tidyjson

<details>

* Version: 0.3.2
* GitHub: https://github.com/colearendt/tidyjson
* Source code: https://github.com/cran/tidyjson
* Date/Publication: 2023-01-07 00:20:02 UTC
* Number of recursive dependencies: 97

Run `revdepcheck::cloud_details(, "tidyjson")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘tidyjson-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: spread_values
    > ### Title: Spreads specific scalar values of a JSON object into new columns
    > ### Aliases: spread_values
    > 
    > ### ** Examples
    > 
    > 
    ...
    13: rel_try({    rel <- duckdb_rel_from_df(.data)    if (length(by_names) > 0) {        rel <- oo_prep(rel)    }    dots <- dplyr_quosures(...)    dots <- fix_auto_name(dots)    names_used <- character()    names_new <- character()    names_out <- rel_names(rel)    for (i in seq_along(dots)) {        dot <- dots[[i]]        new <- names(dots)[[i]]        names_new <- c(names_new, new)        new_pos <- match(new, names_out, nomatch = length(names_out) +             1L)        exprs <- imap(set_names(names_out), relexpr_reference,             rel = NULL)        new_expr <- rel_translate(dot, names_data = names_out,             alias = new, partition = by_names, need_window = TRUE)        exprs[[new_pos]] <- new_expr        rel <- rel_project(rel, unname(exprs))        names_out[[new_pos]] <- new        new_names_used <- intersect(attr(new_expr, "used"), names(.data))        names_used <- c(names_used, setdiff(new_names_used, names_used))    }    if (length(by_names) > 0) {        rel <- oo_restore(rel)    }    out <- rel_to_df(rel)    out <- dplyr_reconstruct(out, .data)    names_original <- names(.data)    out <- mutate_relocate(out = out, before = {        {            .before        }    }, after = {        {            .after        }    }, names_original = names_original)    used <- set_names(names(out) %in% names_used, names(out))    names_groups <- by_names    out <- duckplyr_mutate_keep(out = out, keep = keep, used = used,         names_new = names_new, names_groups = names_groups)    return(out)})
    14: mutate.data.frame(., ..id = seq_len(n()))
    15: NextMethod(generic, .data)
    16: mutate.tbl_json(., ..id = seq_len(n()))
    17: dplyr::mutate(., ..id = seq_len(n()))
    18: .x %>% dplyr::mutate(..id = seq_len(n()))
    19: spread_all(.)
    20: c(json, json2) %>% spread_all
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      51: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      52: source_file(path, env(env), wrap = wrap)
      53: FUN(X[[i]], ...)
      54: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      55: doTryCatch(return(expr), name, parentenv, handler)
      56: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      57: tryCatchList(expr, classes, parentenv, handlers)
      58: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      59: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      60: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      61: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      62: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      63: test_check("tidyjson")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

# tidyquery

<details>

* Version: 0.2.4
* GitHub: https://github.com/ianmcook/tidyquery
* Source code: https://github.com/cran/tidyquery
* Date/Publication: 2023-01-14 16:30:02 UTC
* Number of recursive dependencies: 67

Run `revdepcheck::cloud_details(, "tidyquery")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      `actual$office_id`:   "a" "c" "d"
      `expected$office_id`: "d" "a" "c"
      
      `actual$city`:   "Istanbul"  "Rosario"  "Singapore"
      `expected$city`: "Singapore" "Istanbul" "Rosario"  
      
      `actual$state_province`:   "Istanbul" "Santa Fe" NA        
      `expected$state_province`: NA         "Istanbul" "Santa Fe"
      
      `actual$country`:   "tr" "ar" "sg"
      `expected$country`: "sg" "tr" "ar"
      
      [ FAIL 1 | WARN 0 | SKIP 4 | PASS 234 ]
      Error: Test failures
      Execution halted
    ```

# tidytransit

<details>

* Version: 1.6.0
* GitHub: https://github.com/r-transit/tidytransit
* Source code: https://github.com/cran/tidytransit
* Date/Publication: 2023-06-23 12:30:02 UTC
* Number of recursive dependencies: 100

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
    ...
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
      installed size is  7.0Mb
      sub-directories of 1Mb or more:
        doc       1.9Mb
        extdata   4.5Mb
    ```

# toxEval

<details>

* Version: 1.3.0
* GitHub: https://github.com/DOI-USGS/toxEval
* Source code: https://github.com/cran/toxEval
* Date/Publication: 2023-04-14 17:20:02 UTC
* Number of recursive dependencies: 128

Run `revdepcheck::cloud_details(, "toxEval")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      
      x[5]: "Pyrene"
      y[5]: "Pentachlorophenol"
      ── Failure ('tests_summary.R:453:3'): Testing levels ───────────────────────────
      tail(levels(plot_heat$data$chnm), 5) not equal to c("Bromacil", "Metolachlor", "Atrazine", "Prometon", "Pentachlorophenol").
      2/5 mismatches
      x[1]: "Metolachlor"
      y[1]: "Bromacil"
      
      x[2]: "Metalaxyl"
      y[2]: "Metolachlor"
      
      [ FAIL 4 | WARN 0 | SKIP 20 | PASS 19 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  8.1Mb
      sub-directories of 1Mb or more:
        R   7.2Mb
    ```

# vcfR

<details>

* Version: 1.14.0
* GitHub: https://github.com/knausb/vcfR
* Source code: https://github.com/cran/vcfR
* Date/Publication: 2023-02-10 15:00:05 UTC
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
    ...
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
    Last 13 lines of output:
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
      
      [ FAIL 3 | WARN 0 | SKIP 0 | PASS 487 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 15.3Mb
      sub-directories of 1Mb or more:
        libs  12.8Mb
    ```

# vDiveR

<details>

* Version: 1.1.0
* GitHub: NA
* Source code: https://github.com/cran/vDiveR
* Date/Publication: 2023-04-15 06:30:02 UTC
* Number of recursive dependencies: 109

Run `revdepcheck::cloud_details(, "vDiveR")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
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
      ‘maps’ ‘readr’
      All declared Imports should be used.
    ```

# vivaldi

<details>

* Version: 1.0.1
* GitHub: https://github.com/GreshamLab/vivaldi
* Source code: https://github.com/cran/vivaldi
* Date/Publication: 2023-03-21 20:10:02 UTC
* Number of recursive dependencies: 105

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
    ...
    --- finished re-building ‘VWPre_Message_Alignment.Rmd’
    
    --- re-building ‘VWPre_Plotting.Rmd’ using rmarkdown
    --- finished re-building ‘VWPre_Plotting.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘VWPre_Basic_Preprocessing.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

