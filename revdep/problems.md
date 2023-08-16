# activatr

<details>

* Version: 0.1.1
* GitHub: https://github.com/dschafer/activatr
* Source code: https://github.com/cran/activatr
* Date/Publication: 2023-05-01 22:00:02 UTC
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

# admiral

<details>

* Version: 0.11.1
* GitHub: https://github.com/pharmaverse/admiral
* Source code: https://github.com/cran/admiral
* Date/Publication: 2023-07-06 18:50:05 UTC
* Number of recursive dependencies: 122

Run `revdepcheck::cloud_details(, "admiral")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
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
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
    ```

# admiralvaccine

<details>

* Version: 0.1.0
* GitHub: https://github.com/pharmaverse/admiralvaccine
* Source code: https://github.com/cran/admiralvaccine
* Date/Publication: 2023-06-27 16:50:06 UTC
* Number of recursive dependencies: 131

Run `revdepcheck::cloud_details(, "admiralvaccine")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘adce.Rmd’ using rmarkdown
    --- finished re-building ‘adce.Rmd’
    
    --- re-building ‘adface.Rmd’ using rmarkdown
    
    Quitting from lines 209-212 [unnamed-chunk-11] (adface.Rmd)
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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
    Complete output:
      > library(testthat)
      > library(APCtools)
      > 
      > test_check("APCtools")
      Loading required package: nlme
      This is mgcv 1.8-40. For overview type 'help("mgcv-package")'.
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
    ```

# arrow

<details>

* Version: 12.0.1.1
* GitHub: https://github.com/apache/arrow
* Source code: https://github.com/cran/arrow
* Date/Publication: 2023-07-18 18:50:07 UTC
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
       2.   └─arrow:::expect_equal(via_table, expected, ...) at tests/testthat/helper-expectation.R:101:2
       3.     └─testthat::expect_equal(...) at tests/testthat/helper-expectation.R:42:4
      
      [ FAIL 1 | WARN 9 | SKIP 78 | PASS 7627 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 137.8Mb
      sub-directories of 1Mb or more:
        R       4.2Mb
        libs  133.0Mb
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
    > abd <- ebd_zf %>% 
    +   # convert count to integer, drop records with no count
    +   dplyr::mutate(observation_count = as.integer(observation_count)) %>% 
    +   dplyr::filter(!is.na(observation_count)) %>% 
    +   # filter to repeated visits
    +   filter_repeat_visits(n_days = 30)
    Error: Conversion Error: Could not convert string 'X' to INT32
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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

# bpmnR

<details>

* Version: 0.1.0
* GitHub: NA
* Source code: https://github.com/cran/bpmnR
* Date/Publication: 2023-04-04 20:30:02 UTC
* Number of recursive dependencies: 113

Run `revdepcheck::cloud_details(, "bpmnR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘bpmnR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: calculate_CFC
    > ### Title: Control Flow Complexity (CFC) ----------
    > ### Aliases: calculate_CFC
    > 
    > ### ** Examples
    > 
    > library(dplyr)
    ...
    + objectType = c("startEvent","endEvent"))
    > flows <- tibble(id = c("flow1","flow2"), name = c("flow1","flow2"),
    + sourceRef = c("start","task"), targetRef = c("task","end"),
    + objectType = c("sequenceFlow","sequenceFlow"))
    > model <- create_bpmn(nodes, flows, events)
    Error: This looks like it has been freed
    Error: Invalid Error: std::exception
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

# causact

<details>

* Version: 0.4.2
* GitHub: https://github.com/flyaflya/causact
* Source code: https://github.com/cran/causact
* Date/Publication: 2022-06-14 16:00:02 UTC
* Number of recursive dependencies: 118

Run `revdepcheck::cloud_details(, "causact")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘causact-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: dag_greta
    > ### Title: Generate a representative sample of the posterior distribution
    > ### Aliases: dag_greta
    > 
    > ### ** Examples
    > 
    > library(greta)
    ...
    +   dag_plate("Car Model","x",
    +             data = carModelDF$carModel,
    +             nodeLabels = "theta")
    > 
    > graph %>% dag_render()
    Error: This looks like it has been freed
    Error: Invalid Error: std::exception
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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
* Number of recursive dependencies: 122

Run `revdepcheck::cloud_details(, "cmcR")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      > library(cmcR)
      > 
      > test_check("cmcR",reporter = SummaryReporter)
        adding: bindata/ (stored 0%)
        adding: bindata/data.bin (deflated 58%)
        adding: main.xml (deflated 62%)
        adding: md5checksum.hex (stored 0%)
        adding: bindata/ (stored 0%)
        adding: bindata/data.bin (deflated 58%)
        adding: main.xml (deflated 62%)
        adding: md5checksum.hex (stored 0%)
      comparison: ..
      decision: 1terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
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

* Version: 1.6.0
* GitHub: NA
* Source code: https://github.com/cran/CodelistGenerator
* Date/Publication: 2023-07-07 17:30:02 UTC
* Number of recursive dependencies: 114

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
      
      [ FAIL 2 | WARN 0 | SKIP 3 | PASS 119 ]
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
    > ## Here 0.6 is used only for producing an output. No signif. diff. is reported.
    > RelationshipTestSummary(my.project, units = c("Belgium", "Québec"), 0.6)
    Warning: `rename_()` was deprecated in dplyr 0.7.0.
    ℹ Please use `rename()` instead.
    ℹ The deprecated feature was likely used in the cogmapr package.
      Please report the issue at <https://gitlab.com/FrdVnW/cogmapr/-/issues>.
    Error: Conversion Error: Could not convert string 'NR' to DOUBLE
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

# consortr

<details>

* Version: 0.9.1
* GitHub: NA
* Source code: https://github.com/cran/consortr
* Date/Publication: 2021-09-14 16:30:08 UTC
* Number of recursive dependencies: 86

Run `revdepcheck::cloud_details(, "consortr")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘consortr-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: consort_from_metadata
    > ### Title: Function to generate consort diagrams
    > ### Aliases: consort_from_metadata
    > 
    > ### ** Examples
    > 
    > data <- data.frame(a = c('m', 'm', 'n', 'n'), 
    ...
    +                        parent = c(0, 1), 
    +                        color = c("black", "black"), 
    +                        hidden = c(FALSE, FALSE), 
    +                        split_var = c('a', NA))
    > consort_diagram <- consort_from_metadata(metadata, data)
    Error: This looks like it has been freed
    Error: Invalid Error: std::exception
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

# Covid19Wastewater

<details>

* Version: 1.0.0
* GitHub: NA
* Source code: https://github.com/cran/Covid19Wastewater
* Date/Publication: 2023-08-15 09:50:02 UTC
* Number of recursive dependencies: 107

Run `revdepcheck::cloud_details(, "Covid19Wastewater")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘Aux_info_data.Rmd’ using rmarkdown
    A new version of TeX Live has been released. If you need to install or update any LaTeX packages, you have to upgrade TinyTeX with tinytex::reinstall_tinytex(repository = "illinois").
    tlmgr: package repository https://ctan.math.illinois.edu/systems/texlive/tlnet (not verified: valid signature with expired key)
    [1/1, ??:??/??:??] install: grffile [4k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    --- finished re-building ‘Aux_info_data.Rmd’
    ...
    --- failed re-building ‘time_series_offset.Rmd’
    
    --- re-building ‘variant_data.Rmd’ using rmarkdown
    --- finished re-building ‘variant_data.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘time_series_offset.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## Newly fixed

*   checking re-building of vignette outputs ... WARNING
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘Aux_info_data.Rmd’ using rmarkdown
    A new version of TeX Live has been released. If you need to install or update any LaTeX packages, you have to upgrade TinyTeX with tinytex::reinstall_tinytex(repository = "illinois").
    
    tlmgr: Local TeX Live (2022) is older than remote repository (2023).
    Cross release updates are only supported with
      update-tlmgr-latest(.sh/.exe) --update
    See https://tug.org/texlive/upgrade.html for details.
    Warning in system2("tlmgr", args, ...) :
      running command ''tlmgr' search --file --global '/grffile.sty'' had status 1
    ...
    
    SUMMARY: processing the following files failed:
      ‘Aux_info_data.Rmd’ ‘HFG_data_case.Rmd’ ‘HFG_data_waste.Rmd’
      ‘Intercepter_data_case.Rmd’ ‘calculated_info.Rmd’ ‘example_data.Rmd’
      ‘linear_forest.Rmd’ ‘longitudinal_data_case.Rmd’
      ‘longitudinal_data_waste.Rmd’ ‘outliers.Rmd’ ‘population_data.Rmd’
      ‘smoothing.Rmd’ ‘time_series_offset.Rmd’ ‘variant_data.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking examples ... ERROR
    ```
    Running examples in ‘Covid19Wastewater-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: OffsetHeatmap
    > ### Title: Outputs a heatmap of the offset for variant / time windows and
    > ###   population size / region
    > ### Aliases: OffsetHeatmap
    > 
    > ### ** Examples
    > 
    ...
     17. │               └─rlang (local) FUN(X[[i]], ...)
     18. ├─base::as.Date(start + firstday)
     19. ├─base::as.Date.numeric(start + firstday)
     20. │ └─base::stop("'origin' must be supplied")
     21. └─base::.handleSimpleError(...)
     22.   └─rlang (local) h(simpleError(msg, call))
     23.     └─handlers[[1L]](cnd)
     24.       └─cli::cli_abort(...)
     25.         └─rlang::abort(...)
    Execution halted
    ```

# critpath

<details>

* Version: 0.2.1
* GitHub: NA
* Source code: https://github.com/cran/critpath
* Date/Publication: 2023-06-06 12:20:02 UTC
* Number of recursive dependencies: 79

Run `revdepcheck::cloud_details(, "critpath")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘CPMandPERT.Rmd’ using rmarkdown
    --- finished re-building ‘CPMandPERT.Rmd’
    
    --- re-building ‘Introduction.Rmd’ using rmarkdown
    
    Quitting from lines 166-167 [unnamed-chunk-6] (Introduction.Rmd)
    
    Quitting from lines 166-167 [unnamed-chunk-6] (Introduction.Rmd)
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.6Mb
      sub-directories of 1Mb or more:
        doc   6.4Mb
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
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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

# DiagrammeR

<details>

* Version: 1.0.10
* GitHub: https://github.com/rich-iannone/DiagrammeR
* Source code: https://github.com/cran/DiagrammeR
* Date/Publication: 2023-05-18 14:30:07 UTC
* Number of recursive dependencies: 99

Run `revdepcheck::cloud_details(, "DiagrammeR")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(DiagrammeR)
      > 
      > suppressWarnings(RNGversion("3.5.0"))
      > test_check("DiagrammeR")
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 1 marked UTF-8 string
    ```

# discAUC

<details>

* Version: 1.0.0
* GitHub: NA
* Source code: https://github.com/cran/discAUC
* Date/Publication: 2023-03-17 15:40:12 UTC
* Number of recursive dependencies: 53

Run `revdepcheck::cloud_details(, "discAUC")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘test-all.R’
    Running the tests in ‘tests/test-all.R’ failed.
    Complete output:
      > library(testthat)
      > library(discAUC)
      > 
      > test_check("discAUC")
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
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
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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
    Error: Invalid Error: Invalid input type, expected 'list' actual 'character'
    Error: std::exception
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 18.3Mb
      sub-directories of 1Mb or more:
        doc    1.3Mb
        libs  16.4Mb
    ```

# edeaR

<details>

* Version: 0.9.4
* GitHub: https://github.com/bupaverse/edeaR
* Source code: https://github.com/cran/edeaR
* Date/Publication: 2023-04-27 08:33:06 UTC
* Number of recursive dependencies: 98

Run `revdepcheck::cloud_details(, "edeaR")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘filters.Rmd’ using rmarkdown
    --- finished re-building ‘filters.Rmd’
    
    --- re-building ‘metrics.Rmd’ using rmarkdown
    --- finished re-building ‘metrics.Rmd’
    
    --- re-building ‘queue.Rmd’ using rmarkdown
    --- finished re-building ‘queue.Rmd’
    
    --- re-building ‘work_schedules.Rmd’ using rmarkdown
    
    Quitting from lines 102-103 [unnamed-chunk-9] (work_schedules.Rmd)
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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

# escalation

<details>

* Version: 0.1.5
* GitHub: NA
* Source code: https://github.com/cran/escalation
* Date/Publication: 2023-05-29 18:10:02 UTC
* Number of recursive dependencies: 126

Run `revdepcheck::cloud_details(, "escalation")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘A100-DoseSelectors.Rmd’ using rmarkdown
    --- finished re-building ‘A100-DoseSelectors.Rmd’
    
    --- re-building ‘A205-CRM.Rmd’ using rmarkdown
    
    Quitting from lines 326-334 [unnamed-chunk-21] (A205-CRM.Rmd)
    
    Quitting from lines 326-334 [unnamed-chunk-21] (A205-CRM.Rmd)
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 13.7Mb
      sub-directories of 1Mb or more:
        doc  13.1Mb
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
    Complete output:
      > library(testthat)
      > library(fgeo.analyze)
      > 
      > test_check("fgeo.analyze")
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
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
* Number of recursive dependencies: 239

Run `revdepcheck::cloud_details(, "finnts")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      ✔ Training Individual Models [2.3s]
      
      ℹ Training Ensemble Models
      ℹ Ensemble models have been turned off.
      ℹ Training Ensemble Models
      ✔ Training Ensemble Models [25ms]
      
      ℹ Selecting Best Models
      ✔ Selecting Best Models [669ms]
      
      ! return_data is deprecated, please use 'get_forecast_data()' to get finnts results
      [1] "First Dt Val 11000"
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
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
      > library(testthat)
      > library(funneljoin)
      
      Attaching package: 'funneljoin'
      
      The following object is masked from 'package:stats':
      
          filter
      
      > 
      > test_check("funneljoin")
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘funneljoin.Rmd’ using rmarkdown
    
    Quitting from lines 75-82 [unnamed-chunk-5] (funneljoin.Rmd)
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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

# gibasa

<details>

* Version: 0.9.5
* GitHub: https://github.com/paithiov909/gibasa
* Source code: https://github.com/cran/gibasa
* Date/Publication: 2023-07-09 09:00:07 UTC
* Number of recursive dependencies: 59

Run `revdepcheck::cloud_details(, "gibasa")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(gibasa)
      > 
      > test_check("gibasa")
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 13.2Mb
      sub-directories of 1Mb or more:
        libs  12.8Mb
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 553 marked UTF-8 strings
    ```

*   checking for GNU extensions in Makefiles ... NOTE
    ```
    GNU make is a SystemRequirements.
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
      ...
    --- re-building ‘gallery.Rmd’ using rmarkdown
    --- finished re-building ‘gallery.Rmd’
    
    --- re-building ‘gtsummary_definition.Rmd’ using rmarkdown
    --- finished re-building ‘gtsummary_definition.Rmd’
    
    --- re-building ‘inline_text.Rmd’ using rmarkdown
    --- finished re-building ‘inline_text.Rmd’
    ...
    
    --- re-building ‘tbl_summary.Rmd’ using rmarkdown
    --- finished re-building ‘tbl_summary.Rmd’
    
    --- re-building ‘themes.Rmd’ using rmarkdown
    
    Quitting from lines 48-56 [unnamed-chunk-2] (themes.Rmd)
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

# healthyR

<details>

* Version: 0.2.1
* GitHub: https://github.com/spsanderson/healthyR
* Source code: https://github.com/cran/healthyR
* Date/Publication: 2023-04-06 22:20:03 UTC
* Number of recursive dependencies: 154

Run `revdepcheck::cloud_details(, "healthyR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘healthyR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: ts_census_los_daily_tbl
    > ### Title: Time Series - Census and LOS by Day
    > ### Aliases: ts_census_los_daily_tbl
    > 
    > ### ** Examples
    > 
    > library(healthyR)
    ...
    +    , .start_date_col  = visit_start_date_time
    +    , .end_date_col    = visit_end_date_time
    + )
    Error: Invalid Input Error: Could not parse string "2020-01-01 06:10:00" according to format specifier "%Y-Inappropriate ioctl for device--2072592272"
    2020-01-01 06:10:00
               ^
    Error: Full specifier did not match: trailing characters
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.5Mb
      sub-directories of 1Mb or more:
        data   1.5Mb
        doc    3.8Mb
    ```

# healthyR.ai

<details>

* Version: 0.0.13
* GitHub: https://github.com/spsanderson/healthyR.ai
* Source code: https://github.com/cran/healthyR.ai
* Date/Publication: 2023-04-03 00:20:02 UTC
* Number of recursive dependencies: 222

Run `revdepcheck::cloud_details(, "healthyR.ai")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘healthyR.ai-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: pca_your_recipe
    > ### Title: Perform PCA
    > ### Aliases: pca_your_recipe
    > 
    > ### ** Examples
    > 
    > suppressPackageStartupMessages(library(timetk))
    ...
    +   mutate(date_col = as.Date(date_col))
    > 
    > splits <- initial_split(data = data_tbl, prop = 0.8)
    Error: Invalid Input Error: Could not parse string "2013-01-01 00:00:00" according to format specifier "%Y-Success-614840368"
    2013-01-01 00:00:00
               ^
    Error: Full specifier did not match: trailing characters
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘auto-kmeans.Rmd’ using rmarkdown
    --- finished re-building ‘auto-kmeans.Rmd’
    
    --- re-building ‘getting-started.Rmd’ using rmarkdown
    
    Quitting from lines 59-75 [data_set] (getting-started.Rmd)
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

# healthyR.ts

<details>

* Version: 0.2.9
* GitHub: https://github.com/spsanderson/healthyR.ts
* Source code: https://github.com/cran/healthyR.ts
* Date/Publication: 2023-06-24 04:50:02 UTC
* Number of recursive dependencies: 217

Run `revdepcheck::cloud_details(, "healthyR.ts")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘healthyR.ts-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: ts_ma_plot
    > ### Title: Time Series Moving Average Plot
    > ### Aliases: ts_ma_plot
    > 
    > ### ** Examples
    > 
    > suppressPackageStartupMessages(library(dplyr))
    ...
    +   .data = data_tbl,
    +   .date_col = date_col,
    +   .value_col = value
    + )
    Warning: Non-numeric columns being dropped: date_col
    Warning: Non-numeric columns being dropped: date_col
    Warning: Non-numeric columns being dropped: date_col
    Warning: Removed 11 rows containing missing values (`geom_line()`).
    Error: Invalid input: date_trans works with objects of class Date only
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.1Mb
      sub-directories of 1Mb or more:
        doc   5.3Mb
    ```

# heuristicsmineR

<details>

* Version: 0.3.0
* GitHub: https://github.com/bupaverse/heuristicsmineR
* Source code: https://github.com/cran/heuristicsmineR
* Date/Publication: 2023-04-04 13:20:06 UTC
* Number of recursive dependencies: 110

Run `revdepcheck::cloud_details(, "heuristicsmineR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘heuristicsmineR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: causal_custom
    > ### Title: Custom map profile
    > ### Aliases: causal_custom
    > 
    > ### ** Examples
    > 
    > causal_net(L_heur_1,
    ...
    5 a          d          0.929       3     6    13     1.29e9   1288900636. "128…
    6 b          e          0.917       4     7    21     1.29e9   1288900724. "128…
    7 c          e          0.917       5     7    21     1.29e9   1288900724. "128…
    8 d          e          0.929       6     7    17     1.29e9   1288900713. "128…
    # ℹ 1 more variable: penwidth <dbl>
    Error: This looks like it has been freed
    Error: Invalid Error: std::exception
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.3Mb
      sub-directories of 1Mb or more:
        libs   4.2Mb
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
    Error: Conversion Error: Could not convert string '56R' to BOOL
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘allele-haplotype.Rmd’ using rmarkdown
    --- finished re-building ‘allele-haplotype.Rmd’
    
    --- re-building ‘eplet-mm.Rmd’ using rmarkdown
    
    Quitting from lines 48-53 [unnamed-chunk-3] (eplet-mm.Rmd)
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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
    419                        .
    420                       50
    421                        .
    422                       75
    423                       30
    > school_preferences(size = 3, daycare_service = "Yes", app_fee = 50, region = "Southeast")
    Error: Conversion Error: Could not convert string '.' to DOUBLE
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 46 marked UTF-8 strings
    ```

# ipfr

<details>

* Version: 1.0.2
* GitHub: https://github.com/dkyleward/ipfr
* Source code: https://github.com/cran/ipfr
* Date/Publication: 2020-04-01 20:20:02 UTC
* Number of recursive dependencies: 89

Run `revdepcheck::cloud_details(, "ipfr")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘ipfr-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: ipu_matrix
    > ### Title: Balance a matrix given row and column targets
    > ### Aliases: ipu_matrix
    > 
    > ### ** Examples
    > 
    > mtx <- matrix(data = runif(9), nrow = 3, ncol = 3)
    ...
    12: tryCatch(withCallingHandlers(expr, condition = function(cnd) {    {        .__handler_frame__. <- TRUE        .__setup_frame__. <- frame        if (inherits(cnd, "message")) {            except <- c("warning", "error")        }        else if (inherits(cnd, "warning")) {            except <- "error"        }        else {            except <- ""        }    }    while (!is_null(cnd)) {        if (inherits(cnd, "error")) {            out <- handlers[[1L]](cnd)            if (!inherits(out, "rlang_zap"))                 throw(out)        }        inherit <- .subset2(.subset2(cnd, "rlang"), "inherit")        if (is_false(inherit)) {            return()        }        cnd <- .subset2(cnd, "parent")    }}), stackOverflowError = handlers[[1L]])
    13: rlang::try_fetch(rel, error = identity)
    14: rel_try(`No implicit cross joins for left_join()` = is_cross_by(by),     `No relational implementation for left_join(copy = TRUE)` = copy,     {        out <- rel_join_impl(x, y, by, "left", na_matches, suffix,             keep, error_call)        return(out)    })
    15: left_join.data.frame(., geo_equiv, by = primary_id)
    16: dplyr::left_join(., geo_equiv, by = primary_id)
    17: seed %>% dplyr::left_join(geo_equiv, by = primary_id)
    18: ipu(seed, targets, ...)
    19: ipu_matrix(mtx, row_targets, column_targets)
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

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
      54: test_check("ipfr")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘common_ipf_problems.Rmd’ using rmarkdown
    --- finished re-building ‘common_ipf_problems.Rmd’
    
    --- re-building ‘using_ipfr.Rmd’ using rmarkdown
    
     *** caught segfault ***
    address 0x3, cause 'memory not mapped'
    
    Traceback:
    ...
    41: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    42: vweave_rmarkdown(...)
    43: engine$weave(file, quiet = quiet, encoding = enc)
    44: doTryCatch(return(expr), name, parentenv, handler)
    45: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    46: tryCatchList(expr, classes, parentenv, handlers)
    47: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    48: tools:::buildVignettes(dir = "/tmp/workdir/ipfr/new/ipfr.Rcheck/vign_test/ipfr")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

## In both

*   checking LazyData ... NOTE
    ```
      'LazyData' is specified without a 'data' directory
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

# lsnstat

<details>

* Version: 1.0.0
* GitHub: https://github.com/La-Societe-Nouvelle/lsnstat
* Source code: https://github.com/cran/lsnstat
* Date/Publication: 2023-04-22 06:50:02 UTC
* Number of recursive dependencies: 28

Run `revdepcheck::cloud_details(, "lsnstat")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘lsnstat-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: lsnstat_macrodata
    > ### Title: R companion of 'La Societe Nouvelle' macro_data API services
    > ### Aliases: lsnstat_macrodata
    > 
    > ### ** Examples
    > 
    > 
    ...
    > # data for division "10" between 2023 and 2025.
    > 
    > lsnstat_macrodata(dataset = "na_cpeb", filters="classification=A88&activity=10&year=2023+2024+2025")
    Error: Invalid Input Error: Could not parse string "2023-05-09T22:00:00.000Z" according to format specifier "%Y-Success--1672274320"
    2023-05-09T22:00:00.000Z
              ^
    Error: Full specifier did not match: trailing characters
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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
      installed size is  6.2Mb
      sub-directories of 1Mb or more:
        libs   4.0Mb
    ```

# matuR

<details>

* Version: 0.0.1.0
* GitHub: https://github.com/josedv82/matuR
* Source code: https://github.com/cran/matuR
* Date/Publication: 2020-11-19 10:20:02 UTC
* Number of recursive dependencies: 40

Run `revdepcheck::cloud_details(, "matuR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘matuR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: maturation_cm
    > ### Title: Maturation and Biobanding Metrics
    > ### Aliases: maturation_cm
    > 
    > ### ** Examples
    > 
    > maturation_cm(data_sample)
    Error: Invalid Input Error: Could not parse string "2020-07-01 00:00:00" according to format specifier "%Y-No such file or directory--1823598096"
    2020-07-01 00:00:00
               ^
    Error: Full specifier did not match: trailing characters
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

# meshed

<details>

* Version: 0.2.3
* GitHub: NA
* Source code: https://github.com/cran/meshed
* Date/Publication: 2022-09-19 22:56:15 UTC
* Number of recursive dependencies: 62

Run `revdepcheck::cloud_details(, "meshed")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘meshed-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: predict.spmeshed
    > ### Title: Posterior predictive sampling for models based on MGPs
    > ### Aliases: predict.spmeshed
    > 
    > ### ** Examples
    > 
    > 
    ...
    +                     n_burn = mcmc_burn, 
    +                     n_thin = mcmc_thin, 
    +                     settings = list(forced_grid=FALSE, cache=FALSE),
    +                     prior=list(phi=c(1,15)),
    +                     verbose = 0,
    +                     n_threads = 1)
    Error: Invalid Error: Invalid input type, expected 'list' actual 'integer'
    Error: std::exception
    Timing stopped at: 0 0 0.001
    Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘multivariate_irregular.Rmd’ using rmarkdown
    
    Quitting from lines 103-118 [unnamed-chunk-3] (multivariate_irregular.Rmd)
    
    Quitting from lines 103-118 [unnamed-chunk-3] (multivariate_irregular.Rmd)
    Error: processing vignette 'multivariate_irregular.Rmd' failed with diagnostics:
    std::exception
    --- failed re-building ‘multivariate_irregular.Rmd’
    
    ...
    Error: processing vignette 'univariate_irregular_poisson.Rmd' failed with diagnostics:
    std::exception
    --- failed re-building ‘univariate_irregular_poisson.Rmd’
    
    SUMMARY: processing the following files failed:
      ‘multivariate_irregular.Rmd’ ‘univariate_gridded.Rmd’
      ‘univariate_irregular.Rmd’ ‘univariate_irregular_poisson.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 39.5Mb
      sub-directories of 1Mb or more:
        libs  38.3Mb
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

*   checking examples ... ERROR
    ```
    Running examples in ‘metacore-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: get_control_term
    > ### Title: Get Control Term
    > ### Aliases: get_control_term
    > 
    > ### ** Examples
    > 
    > meta_ex <- spec_to_metacore(metacore_example("p21_mock.xlsx"))
    Error: This looks like it has been freed
    Error: Invalid Error: std::exception
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(metacore)
      > 
      > test_check("metacore")
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘Building_Specification_Readers.Rmd’ using rmarkdown
    
    Quitting from lines 125-136 [unnamed-chunk-9] (Building_Specification_Readers.Rmd)
    
    Quitting from lines 125-136 [unnamed-chunk-9] (Building_Specification_Readers.Rmd)
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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

# metatools

<details>

* Version: 0.1.5
* GitHub: https://github.com/pharmaverse/metatools
* Source code: https://github.com/cran/metatools
* Date/Publication: 2023-03-13 10:00:05 UTC
* Number of recursive dependencies: 67

Run `revdepcheck::cloud_details(, "metatools")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘metatools-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: create_var_from_codelist
    > ### Title: Create Variable from Codelist
    > ### Aliases: create_var_from_codelist
    > 
    > ### ** Examples
    > 
    > library(metacore)
    ...
    +   3, "F", "Female",
    +   4, "U", "Unknown",
    +   5, "M", "Male",
    + )
    > spec <- spec_to_metacore(metacore_example("p21_mock.xlsx"), quiet = TRUE)
    Error: This looks like it has been freed
    Error: Invalid Error: std::exception
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      The following variable(s) were dropped:
        foo
        foo2
      
       Metadata successfully imported
      
       Metadata successfully imported
      Loading in metacore object with suppressed warnings
      No missing or extra variables
      
       Metadata successfully imported
      Loading in metacore object with suppressed warnings
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
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
      installed size is  6.0Mb
      sub-directories of 1Mb or more:
        R   5.9Mb
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
    +       year_var = "t_yeardiag.2", 
    +       site_var = "t_site_icd.2",
    +       pyar_var = "population_pyar")
    Using person-years at risk [PYAR] from reference population as pyears for calculating incidence rates.
    Be careful, in this calculation it is assumed that all included regions have collected data for the full time period: 1990 to 2010
                           If you have included registries with differing times, please check this assumption by looking at groups with 0 incidence and specify option 'inclusion_restrictions' if needed.
    Error: Invalid Error: Invalid input type, expected 'list' actual 'integer'
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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

# NetworkExtinction

<details>

* Version: 1.0.3
* GitHub: NA
* Source code: https://github.com/cran/NetworkExtinction
* Date/Publication: 2023-03-31 11:40:02 UTC
* Number of recursive dependencies: 100

Run `revdepcheck::cloud_details(, "NetworkExtinction")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘NetworkExtinction-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: DegreeDistribution
    > ### Title: Degree distribution of the network
    > ### Aliases: DegreeDistribution
    > 
    > ### ** Examples
    > 
    > library(NetworkExtinction)
    > data("chilean_intertidal")
    > DegreeDistribution(chilean_intertidal)
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/tests.html
      > # * https://testthat.r-lib.org/reference/test_package.html#special-files
      > 
      > library(testthat)
      > library(NetworkExtinction)
      > 
      > test_check("NetworkExtinction")
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘NetworkExtinction.Rmd’ using rmarkdown
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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
      > # Created: 2018-09-17
      > # Copyright: Steven E. Pav, 2018-2019
      > # Author: Steven E. Pav <shabbychef@gmail.com>
      > # Comments: Steven E. Pav
      > 
      > # because Hadley says it should be like this.
      > # see https://github.com/hadley/devtools/wiki/Testing
      > 
      > library(testthat)
      > library(ohenery)
      > 
      > test_check("ohenery")
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
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
      ANOVA model fit to each assay: NPX~treatment2
      Variables and covariates converted from character to factors: treatment2
      Means estimated for each assay from ANOVA model:  NPX~treatment2
      Using Max LOD as filter criteria...
      Using Plate LOD as filter criteria...
      Using Plate_LOD as filter criteria...
      Bridging normalization with overlapping samples will be performed.
      Bridging normalization with subset normalization will be performed.
      Bridging normalization with subset normalization will be performed.
      Bridging normalization with overlapping samples will be performed.
      Bridging normalization with overlapping samples will be performed.
      Adding missing columns...
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
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

# omopr

<details>

* Version: 0.2
* GitHub: NA
* Source code: https://github.com/cran/omopr
* Date/Publication: 2020-06-25 08:40:06 UTC
* Number of recursive dependencies: 50

Run `revdepcheck::cloud_details(, "omopr")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘omopr.Rmd’ using rmarkdown
    
    Quitting from lines 80-81 [unnamed-chunk-12] (omopr.Rmd)
    Error: processing vignette 'omopr.Rmd' failed with diagnostics:
    Must pass a plain data frame or a tibble to `as_duckplyr_df()`.
    --- failed re-building ‘omopr.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘omopr.Rmd’
    
    Error: Vignette re-building failed.
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
* Number of recursive dependencies: 122

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
* Number of recursive dependencies: 134

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
    Error: Conversion Error: Could not convert string 'A' to DOUBLE
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘DrawingO3plots.Rmd’ using rmarkdown
    
    Quitting from lines 25-32 [unnamed-chunk-1] (DrawingO3plots.Rmd)
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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

# portalr

<details>

* Version: 0.4.0
* GitHub: https://github.com/weecology/portalr
* Source code: https://github.com/cran/portalr
* Date/Publication: 2023-04-22 00:32:30 UTC
* Number of recursive dependencies: 107

Run `revdepcheck::cloud_details(, "portalr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      Backtrace:
          ▆
       1. ├─portalr::bait_presence_absence(path = portal_data_path, level = "plot") at test-10-summarize_ants.R:49:2
       2. │ ├─compute_presence(bait, level) %>% as.data.frame()
       3. │ └─portalr:::compute_presence(bait, level)
       4. │   └─... %>% ...
       5. ├─base::as.data.frame(.)
       6. ├─tidyr::complete(., !!!grouping, fill = list(presence = 0))
       7. ├─dplyr::mutate(., presence = 1)
       8. ├─dplyr::distinct(.)
       9. └─dplyr::select(., dplyr::all_of(vars_to_keep))
      
      [ FAIL 12 | WARN 43 | SKIP 43 | PASS 20 ]
      Error: Test failures
      Execution halted
    ```

# processanimateR

<details>

* Version: 1.0.5
* GitHub: https://github.com/bupaverse/processanimateR
* Source code: https://github.com/cran/processanimateR
* Date/Publication: 2022-07-20 12:40:03 UTC
* Number of recursive dependencies: 117

Run `revdepcheck::cloud_details(, "processanimateR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘processanimateR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: animate_process
    > ### Title: Animate cases on a process map
    > ### Aliases: animate_process
    > 
    > ### ** Examples
    > 
    > data(example_log)
    > 
    > # Animate the process with default options (absolute time and 60s duration)
    > animate_process(example_log)
    Error: This looks like it has been freed
    Error: Invalid Error: std::exception
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘use-external-data-to-change-tokens.Rmd’ using rmarkdown
    
    Quitting from lines 23-49 [unnamed-chunk-1] (use-external-data-to-change-tokens.Rmd)
    
    Quitting from lines 23-49 [unnamed-chunk-1] (use-external-data-to-change-tokens.Rmd)
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 11.6Mb
      sub-directories of 1Mb or more:
        doc           8.8Mb
        htmlwidgets   2.6Mb
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
        All required columns are present in the data.
    Checking optional columns...
        All optional columns are present in the data.
    Working on required columns...
        RECORDING_SESSION_LABEL renamed to Subject. 
        item renamed to Item.
    Error: Conversion Error: Could not convert string 'factor' to DOUBLE
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘PupilPre_Basic_Preprocessing.Rmd’ using rmarkdown
    
    Quitting from lines 80-81 [unnamed-chunk-4] (PupilPre_Basic_Preprocessing.Rmd)
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

# purgeR

<details>

* Version: 1.7
* GitHub: NA
* Source code: https://github.com/cran/purgeR
* Date/Publication: 2022-12-07 20:40:02 UTC
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
      installed size is  9.8Mb
      sub-directories of 1Mb or more:
        libs   9.1Mb
    ```

# RavenR

<details>

* Version: 2.2.0
* GitHub: https://github.com/rchlumsk/RavenR
* Source code: https://github.com/cran/RavenR
* Date/Publication: 2022-10-28 21:02:50 UTC
* Number of recursive dependencies: 141

Run `revdepcheck::cloud_details(, "RavenR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘RavenR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: rvn_rvi_process_diagrammer
    > ### Title: Plot Raven hydrologic process network using DiagrammeR
    > ### Aliases: rvn_rvi_process_diagrammer
    > 
    > ### ** Examples
    > 
    > d1 <- rvn_rvi_read(system.file("extdata","Nith.rvi", package="RavenR")) %>%
    ...
    > # plot diagram using the DiagrammeR package
    > library(DiagrammeR)
    > 
    > d1 %>%
    +   render_graph()
    Error: This looks like it has been freed
    Error: Invalid Error: std::exception
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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

# rock

<details>

* Version: 0.6.7
* GitHub: NA
* Source code: https://github.com/cran/rock
* Date/Publication: 2022-12-13 12:30:02 UTC
* Number of recursive dependencies: 140

Run `revdepcheck::cloud_details(, "rock")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘rock-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: show_fullyMergedCodeTrees
    > ### Title: Show the fully merged code tree(s)
    > ### Aliases: show_fullyMergedCodeTrees
    > 
    > ### ** Examples
    > 
    > ### Get path to example source
    ...
    > ### Load example source
    > loadedExample <- rock::parse_source(exampleFile);
    > 
    > ### Show merged code tree
    > show_fullyMergedCodeTrees(loadedExample);
    Error: This looks like it has been freed
    Error: Invalid Error: std::exception
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > testthat::test_check("rock");
      Loading required package: rock
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
    ```

## In both

*   checking re-building of vignette outputs ... WARNING
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘introduction_to_rock.Rmd’ using rmarkdown
    A new version of TeX Live has been released. If you need to install or update any LaTeX packages, you have to upgrade TinyTeX with tinytex::reinstall_tinytex(repository = "illinois").
    
    tlmgr: Local TeX Live (2022) is older than remote repository (2023).
    Cross release updates are only supported with
      update-tlmgr-latest(.sh/.exe) --update
    See https://tug.org/texlive/upgrade.html for details.
    Warning in system2("tlmgr", args, ...) :
    ...
    
    Error: processing vignette 'introduction_to_rock.Rmd' failed with diagnostics:
    LaTeX failed to compile /tmp/workdir/rock/new/rock.Rcheck/vign_test/rock/vignettes/introduction_to_rock.tex. See https://yihui.org/tinytex/r/#debugging for debugging tips. See introduction_to_rock.log for more info.
    --- failed re-building ‘introduction_to_rock.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘introduction_to_rock.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
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
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

# sf

<details>

* Version: 1.0-14
* GitHub: https://github.com/r-spatial/sf
* Source code: https://github.com/cran/sf
* Date/Publication: 2023-07-11 08:40:02 UTC
* Number of recursive dependencies: 158

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
      installed size is 25.6Mb
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

# sgsR

<details>

* Version: 1.4.4
* GitHub: https://github.com/tgoodbody/sgsR
* Source code: https://github.com/cran/sgsR
* Date/Publication: 2023-06-13 07:00:02 UTC
* Number of recursive dependencies: 120

Run `revdepcheck::cloud_details(, "sgsR")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      It may be desirable to make the sf package available;
      package maintainers should consider adding sf to Suggests:.
      The sp package is now running under evolution status 2
           (status 2 uses the sf package in place of rgdal)
      Column coordinates names for 'existing' are lowercase - converting to uppercase.
      Sub-sampling based on ALL 'existing' metric distributions. Ensure only attributes of interest are included.
      Implementing proportional allocation of samples.
      Sub-sampling based on ALL 'existing' metric distributions. Ensure only attributes of interest are included.
      Sub-sampling based on ALL 'existing' metric distributions. Ensure only attributes of interest are included.
      Sub-sampling based on 'raster' distributions.
      Using `zq90` as sampling constraint.
      Implementing proportional allocation of samples.
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
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

# simmer.plot

<details>

* Version: 0.1.18
* GitHub: https://github.com/r-simmer/simmer.plot
* Source code: https://github.com/cran/simmer.plot
* Date/Publication: 2023-07-17 21:30:02 UTC
* Number of recursive dependencies: 91

Run `revdepcheck::cloud_details(, "simmer.plot")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      > library(simmer.plot)
      Loading required package: simmer
      Loading required package: ggplot2
      
      Attaching package: 'simmer.plot'
      
      The following objects are masked from 'package:simmer':
      
          get_mon_arrivals, get_mon_attributes, get_mon_resources
      
      > 
      > test_check("simmer.plot")
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
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

# ssimparser

<details>

* Version: 0.1.1
* GitHub: NA
* Source code: https://github.com/cran/ssimparser
* Date/Publication: 2022-01-11 18:30:02 UTC
* Number of recursive dependencies: 22

Run `revdepcheck::cloud_details(, "ssimparser")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘ssimparser-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: load_ssim_flights
    > ### Title: load_ssim_flights
    > ### Aliases: load_ssim_flights
    > 
    > ### ** Examples
    > 
    > # Get 3 samples as a character vector
    ...
    + dplyr::arrange(desc(flight_date))
    [1] "File to load has 17 rows"
    [1] "data frame has 17 rows"
    Error: Invalid Input Error: Could not parse string "2020-11-07 18:45:00" according to format specifier "%Y-Success--746982112"
    2020-11-07 18:45:00
               ^
    Error: Full specifier did not match: trailing characters
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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

* Version: 0.3.10
* GitHub: https://github.com/tanaylab/tglkmeans
* Source code: https://github.com/cran/tglkmeans
* Date/Publication: 2023-06-26 08:30:02 UTC
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
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.9Mb
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
* Number of recursive dependencies: 129

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
    > 
    > 
    > # extract all the INFO and FORMAT fields into a list of tidy
    > # data frames: fix, gt, and meta. Here we don't coerce columns
    > # to integer or numeric types...
    > Z <- vcfR2tidy(vcf)
    Error: Conversion Error: Could not convert string 'A' to DOUBLE
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      > #library("vcfR")
      > #
      > #
      > test_check("vcfR")
      Loading required package: vcfR
      
         *****       ***   vcfR   ***       *****
         This is vcfR 1.14.0 
           browseVignettes('vcfR') # Documentation
           citation('vcfR') # Citation
         *****       *****      *****       *****
      
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 14.7Mb
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
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
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
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

