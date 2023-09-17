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

# APCI

<details>

* Version: 1.0.6
* GitHub: NA
* Source code: https://github.com/cran/APCI
* Date/Publication: 2022-11-11 08:00:02 UTC
* Number of recursive dependencies: 86

Run `revdepcheck::cloud_details(, "APCI")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘1_tests.R’
    Running the tests in ‘tests/1_tests.R’ failed.
    Last 13 lines of output:
          acc2:pcc2     acc3:pcc2     acc4:pcc2     acc5:pcc2     acc6:pcc2 
       -0.230615151  -0.014524201  -0.276240721   0.012607910   0.476839156 
          acc7:pcc2     acc8:pcc2     acc9:pcc2     acc1:pcc3     acc2:pcc3 
        0.111003728  -0.296227551   0.304570219   0.008181475   0.003055604 
          acc3:pcc3     acc4:pcc3     acc5:pcc3     acc6:pcc3     acc7:pcc3 
       -0.351655223   0.089076224   0.213414663  -0.319108009   0.174600807 
          acc8:pcc3     acc9:pcc3     acc1:pcc4     acc2:pcc4     acc3:pcc4 
       -0.089133079   0.104004588  -0.394424286   0.006189405   0.335628308 
          acc4:pcc4     acc5:pcc4     acc6:pcc4     acc7:pcc4     acc8:pcc4 
        0.270788168   0.196922074  -0.127954418  -0.073260766  -0.311902209 
          acc9:pcc4     acc1:pcc5     acc2:pcc5     acc3:pcc5     acc4:pcc5 
        0.040281017   0.023985760   0.232865825  -0.132857008  -0.078999637 
          acc5:pcc5     acc6:pcc5     acc7:pcc5     acc8:pcc5     acc9:pcc5 
       -0.487994557  -0.359116765   0.380874539   0.610149055  -0.279580507 
      Killed
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

# duckplyr

<details>

* Version: 0.2.0
* GitHub: https://github.com/duckdblabs/duckplyr
* Source code: https://github.com/cran/duckplyr
* Date/Publication: 2023-09-10 21:10:02 UTC
* Number of recursive dependencies: 90

Run `revdepcheck::cloud_details(, "duckplyr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      In addition: Warning messages:
      1: In normalizePath(tools::R_user_dir("R.cache", which = "cache")) :
        path[1]="/root/.cache/R/R.cache": No such file or directory
      2: In normalizePath(tools::R_user_dir("R.cache", which = "cache")) :
        path[1]="/root/.cache/R/R.cache": No such file or directory
      3: In normalizePath(tools::R_user_dir("R.cache", which = "cache")) :
        path[1]="/root/.cache/R/R.cache": No such file or directory
      
      🛠: 871
      🔨: 560
      🦆: 311
      add_count, anti_join, arrange, compute, count, cross_join, distinct, do, eval, filter, full_join, inner_join, intersect, left_join, mutate, nest_join, pull, reframe, relocate, rename, rename_with, right_join, rows_append, rows_delete, rows_insert, rows_patch, rows_update, rows_upsert, select, semi_join, setdiff, setequal, slice, slice_head, slice_tail, summarise, symdiff, transmute, ungroup, union_all
      
      00:00:45.851548
      Execution halted
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

# eiCompare

<details>

* Version: 3.0.4
* GitHub: https://github.com/RPVote/eiCompare
* Source code: https://github.com/cran/eiCompare
* Date/Publication: 2023-08-31 13:30:02 UTC
* Number of recursive dependencies: 146

Run `revdepcheck::cloud_details(, "eiCompare")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘bisg.Rmd’ using rmarkdown
    
    Quitting from lines 164-175 [unnamed-chunk-16] (bisg.Rmd)
    Error: processing vignette 'bisg.Rmd' failed with diagnostics:
    no applicable method for 'tbl_vars' applied to an object of class "NULL"
    --- failed re-building ‘bisg.Rmd’
    
    --- re-building ‘ei.Rmd’ using rmarkdown
    --- finished re-building ‘ei.Rmd’
    ...
    Quitting from lines 235-263 [performance_analysis] (performance_analysis.Rmd)
    Error: processing vignette 'performance_analysis.Rmd' failed with diagnostics:
    No columns selected for aggregation.
    --- failed re-building ‘performance_analysis.Rmd’
    
    SUMMARY: processing the following files failed:
      ‘bisg.Rmd’ ‘performance_analysis.Rmd’
    
    Error: Vignette re-building failed.
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

# finnts

<details>

* Version: 0.3.0
* GitHub: https://github.com/microsoft/finnts
* Source code: https://github.com/cran/finnts
* Date/Publication: 2023-08-09 22:30:10 UTC
* Number of recursive dependencies: 240

Run `revdepcheck::cloud_details(, "finnts")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      ── Error ('test-forecast_time_series.R:100:3'): final forecast data rows are meaningful ──
      Error: Error evaluating duckdb query: Conversion Error: Unimplemented type for cast (DATE -> DOUBLE)
      Backtrace:
          ▆
       1. ├─testthat::expect_equal(nrow(future_frame), forecast_horizon) at test-forecast_time_series.R:100:2
       2. │ └─testthat::quasi_label(enquo(object), label, arg = "object")
       3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
       4. └─base::nrow(future_frame)
       5.   ├─base::dim(x)
       6.   └─base::dim.data.frame(x)
       7.     └─base::.row_names_info(x, 2L)
      
      [ FAIL 1 | WARN 6 | SKIP 0 | PASS 79 ]
      Error: Test failures
      Execution halted
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

# gapclosing

<details>

* Version: 1.0.2
* GitHub: https://github.com/ilundberg/gapclosing
* Source code: https://github.com/cran/gapclosing
* Date/Publication: 2021-10-11 07:40:22 UTC
* Number of recursive dependencies: 86

Run `revdepcheck::cloud_details(, "gapclosing")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘gapclosing.Rmd’ using rmarkdown
    
    Quitting from lines 93-103 [unnamed-chunk-4] (gapclosing.Rmd)
    Error: processing vignette 'gapclosing.Rmd' failed with diagnostics:
    task 352 failed - "task 2 failed - "This looks like it has been freed""
    --- failed re-building ‘gapclosing.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘gapclosing.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
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

# metacore

<details>

* Version: 0.1.2
* GitHub: https://github.com/atorus-research/metacore
* Source code: https://github.com/cran/metacore
* Date/Publication: 2023-03-02 17:10:03 UTC
* Number of recursive dependencies: 71

Run `revdepcheck::cloud_details(, "metacore")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      > library(metacore)
      > 
      > test_check("metacore")
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 70 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-reader.R:403:4'): values_spec reader tests ───────────────────
      `spec_value_spec` not equal to `ref_value_spec`.
      Component "where": 5 string mismatches
      Component "derivation_id": 5 string mismatches
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 70 ]
      Error: Test failures
      Execution halted
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

# OlinkAnalyze

<details>

* Version: 3.5.1
* GitHub: NA
* Source code: https://github.com/cran/OlinkAnalyze
* Date/Publication: 2023-08-08 21:00:02 UTC
* Number of recursive dependencies: 211

Run `revdepcheck::cloud_details(, "OlinkAnalyze")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      • pca_plot/pca-basic-plotting.svg
      • pca_plot/pca-plot-color-by-treatment.svg
      • pca_plot/pca-plot-drop-assays-and-drop-samples.svg
      • pca_plot/pca-plot-internal-2.svg
      • pca_plot/pca-plot-internal-3.svg
      • pca_plot/pca-plot-internal-4.svg
      • pca_plot/pca-plot-internal.svg
      • pca_plot/pca-plot-label-outliers.svg
      • pca_plot/pca-plot-not-label-outliers.svg
      • pca_plot/pca-plot-panel-1.svg
      • pca_plot/pca-plot-panel-2.svg
      • pca_plot/pca-plot-with-loadings.svg
      • pca_plot/pca-plot.svg
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘OutlierExclusion.Rmd’ using rmarkdown
    --- finished re-building ‘OutlierExclusion.Rmd’
    
    --- re-building ‘Vignett.Rmd’ using rmarkdown
    Killed
    ```

# oncomsm

<details>

* Version: 0.1.4
* GitHub: https://github.com/Boehringer-Ingelheim/oncomsm
* Source code: https://github.com/cran/oncomsm
* Date/Publication: 2023-04-17 07:00:02 UTC
* Number of recursive dependencies: 125

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
      installed size is 65.2Mb
      sub-directories of 1Mb or more:
        doc    1.1Mb
        libs  62.8Mb
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

* Version: 0.1.3
* GitHub: https://github.com/yangjasp/optimall
* Source code: https://github.com/cran/optimall
* Date/Publication: 2023-09-06 21:20:02 UTC
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
      [ FAIL 1 | WARN 0 | SKIP 1 | PASS 211 ]
      
      ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
      • On Linux (1): 'test-optimall_shiny.R:15:1'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-split_strata.R:383:3'): order is preserved in dataframe with ids provided ──
      all(...) not equal to TRUE.
      1 element mismatch
      
      [ FAIL 1 | WARN 0 | SKIP 1 | PASS 211 ]
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

# partition

<details>

* Version: 0.1.4
* GitHub: https://github.com/USCbiostats/partition
* Source code: https://github.com/cran/partition
* Date/Publication: 2021-10-05 04:20:02 UTC
* Number of recursive dependencies: 90

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
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 11.0Mb
      sub-directories of 1Mb or more:
        doc    1.2Mb
        libs   8.5Mb
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

# rfars

<details>

* Version: 0.3.0
* GitHub: https://github.com/s87jackson/rfars
* Source code: https://github.com/cran/rfars
* Date/Publication: 2023-05-05 09:40:02 UTC
* Number of recursive dependencies: 92

Run `revdepcheck::cloud_details(, "rfars")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘Crash_sequences.Rmd’ using rmarkdown
    trying URL 'https://static.nhtsa.gov/nhtsa/downloads/CRSS/2021/CRSS2021SAS.zip'
    Content type 'application/x-zip-compressed' length 62354127 bytes (59.5 MB)
    ==================================================
    downloaded 59.5 MB
    
    Killed
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 806 marked UTF-8 strings
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

# ThermalSampleR

<details>

* Version: 0.1.1
* GitHub: NA
* Source code: https://github.com/cran/ThermalSampleR
* Date/Publication: 2023-06-13 08:20:18 UTC
* Number of recursive dependencies: 86

Run `revdepcheck::cloud_details(, "ThermalSampleR")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘test_boot_one.R’
      Running ‘test_boot_two.R’
      Running ‘test_equiv_tost.R’
    Running the tests in ‘tests/test_equiv_tost.R’ failed.
    Last 13 lines of output:
      +   response = response,
      +   # Define the skewness parameters
      +   skews = c(1,10),
      +   # Define the equivalence of subsets to full population CT estimate (unit = degree Celcius)
      +   equiv_margin = 1,
    ...
      +   # Size of the population to sample (will test subsamples of size pop_n - x against pop_n for equivalence). Defaults to population size = 30
      +   pop_n = 5
      + )
      Error in seq.default(round(max(plot_var_dat$nsamp), 0)) : 
        'from' must be a finite number
      Calls: equiv_tost ... continuous_scale -> check_breaks_labels -> seq -> seq.default
      In addition: Warning message:
      In max(plot_var_dat$nsamp) :
        no non-missing arguments to max; returning -Inf
      Execution halted
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespaces in Imports field not imported from:
      ‘MASS’ ‘base’ ‘graphics’ ‘janitor’ ‘rlang’ ‘testthat’ ‘utils’
      All declared Imports should be used.
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

* Version: 1.2.0
* GitHub: NA
* Source code: https://github.com/cran/vDiveR
* Date/Publication: 2023-09-12 05:10:02 UTC
* Number of recursive dependencies: 131

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
      ‘DT’ ‘maps’ ‘readr’
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

