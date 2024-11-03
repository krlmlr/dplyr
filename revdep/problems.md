# gutenbergr

<details>

* Version: 0.2.4
* GitHub: https://github.com/ropensci/gutenbergr
* Source code: https://github.com/cran/gutenbergr
* Date/Publication: 2023-11-12 12:03:21 UTC
* Number of recursive dependencies: 89

Run `revdepcheck::cloud_details(, "gutenbergr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(gutenbergr)
      > 
      > test_check("gutenbergr")
      [ FAIL 2 | WARN 0 | SKIP 8 | PASS 25 ]
      
      ══ Skipped tests (8) ═══════════════════════════════════════════════════════════
      • On CRAN (8): 'test-download.R:9:3', 'test-download.R:21:3',
        'test-download.R:52:3', 'test-download.R:62:3', 'test-download.R:69:3',
        'test-mock.R:2:3', 'test-utils.R:2:3', 'test-utils.R:16:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-metadata.R:3:1'): gutenberg_works does appropriate filtering by default ──
      Error in `FUN(X[[i]], ...)`: promise already under evaluation: recursive default argument reference or earlier problems?
      ── Error ('test-metadata.R:51:1'): gutenberg_works gives error messages with named arguments ──
      Error in `is_missing(x)`: promise already under evaluation: recursive default argument reference or earlier problems?
      
      [ FAIL 2 | WARN 0 | SKIP 8 | PASS 25 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘intro.Rmd’ using rmarkdown
    
    Quitting from lines 52-53 [works] (intro.Rmd)
    Error: processing vignette 'intro.Rmd' failed with diagnostics:
    evaluation nested too deeply: infinite recursion / options(expressions=)?
    --- failed re-building ‘intro.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘intro.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  7.9Mb
      sub-directories of 1Mb or more:
        data   7.5Mb
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 20255 marked UTF-8 strings
    ```

# himach

<details>

* Version: 0.3.2
* GitHub: https://github.com/david6marsh/himach
* Source code: https://github.com/cran/himach
* Date/Publication: 2023-09-20 07:40:02 UTC
* Number of recursive dependencies: 109

Run `revdepcheck::cloud_details(, "himach")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(himach)
      > 
      > test_check("himach")
      
      Adding missing grouping variables: `timestamp`
      Adding missing grouping variables: `timestamp`
      Adding missing grouping variables: `phaseID`
      Adding missing grouping variables: `phaseID`
      Adding missing grouping variables: `phaseID`
      Adding missing grouping variables: `phaseID`
      Adding missing grouping variables: `phaseID`
      [ FAIL 3 | WARN 0 | SKIP 9 | PASS 53 ]
      
      ══ Skipped tests (9) ═══════════════════════════════════════════════════════════
      • On CRAN (9): 'test_grid.R:26:3', 'test_map.R:108:3', 'test_routes.R:101:3',
        'test_routes.R:139:3', 'test_utils.R:4:3', 'test_utils.R:12:3',
        'test_utils.R:31:3', 'test_utils.R:40:3', 'test_utils.R:55:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test_map.R:85:3'): can plot flight profile ────────────────────────
      `z <- profile_routes(filter(NZ_routes, .data$routeID == "NZAA<>NZCH"))` produced messages.
      ── Failure ('test_map.R:89:3'): can plot flight profile ────────────────────────
      `... <- NULL` produced messages.
      ── Failure ('test_map.R:93:3'): can plot flight profile ────────────────────────
      `... <- NULL` produced messages.
      
      [ FAIL 3 | WARN 0 | SKIP 9 | PASS 53 ]
      Error: Test failures
      Execution halted
    ```

# offsetreg

<details>

* Version: 1.1.0
* GitHub: https://github.com/mattheaphy/offsetreg
* Source code: https://github.com/cran/offsetreg
* Date/Publication: 2024-04-11 14:40:03 UTC
* Number of recursive dependencies: 124

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
      
           actual | expected                 
       [1] 18863  - 15636    [1]             
       [2] 19066  - 15805    [2]             
       [3] 19278  - 15981    [3]             
       [4] 19590  - 16239    [4]             
       [5] 19855  - 16459    [5]             
       [6] 20073  - 16640    [6]             
       [7] 20322  - 16846    [7]             
       [8] 20445  - 16948    [8]             
       [9] 20531  - 17019    [9]             
      [10] 22076  - 18526    [10]            
       ... ...      ...      and 130 more ...
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 42 ]
      Error: Test failures
      Execution halted
    ```

# PSAboot

<details>

* Version: 1.3.8
* GitHub: https://github.com/jbryer/PSAboot
* Source code: https://github.com/cran/PSAboot
* Date/Publication: 2023-10-23 19:20:02 UTC
* Number of recursive dependencies: 109

Run `revdepcheck::cloud_details(, "PSAboot")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘MatchingOrder.Rmd’ using rmarkdown
    
    Quitting from lines 110-121 [lalonde.psaboot] (MatchingOrder.Rmd)
    Error: processing vignette 'MatchingOrder.Rmd' failed with diagnostics:
    $ operator is invalid for atomic vectors
    --- failed re-building ‘MatchingOrder.Rmd’
    
    --- re-building ‘PSAboot.Rmd’ using rmarkdown
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.3Mb
      sub-directories of 1Mb or more:
        doc   5.5Mb
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 4 marked UTF-8 strings
    ```

# random.cdisc.data

<details>

* Version: 0.3.16
* GitHub: https://github.com/insightsengineering/random.cdisc.data
* Source code: https://github.com/cran/random.cdisc.data
* Date/Publication: 2024-10-10 09:40:02 UTC
* Number of recursive dependencies: 62

Run `revdepcheck::cloud_details(, "random.cdisc.data")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > pkg_name <- "random.cdisc.data"
      > library(pkg_name, character.only = TRUE)
      > testthat::test_check(pkg_name)
      Adding missing grouping variables: `PARCAT2`
      Adding missing grouping variables: `PARCAT2`
      [ FAIL 1 | WARN 0 | SKIP 21 | PASS 84 ]
      
      ══ Skipped tests (21) ══════════════════════════════════════════════════════════
      • On CRAN (21): 'test-row_values.R:9:3', 'test-row_values.R:19:3',
        'test-row_values.R:29:3', 'test-row_values.R:39:3', 'test-row_values.R:49:3',
        'test-row_values.R:59:3', 'test-row_values.R:69:3', 'test-row_values.R:79:3',
        'test-row_values.R:89:3', 'test-row_values.R:99:3',
        'test-row_values.R:107:3', 'test-row_values.R:117:3',
        'test-row_values.R:127:3', 'test-row_values.R:137:3',
        'test-row_values.R:147:3', 'test-row_values.R:157:3',
        'test-row_values.R:167:3', 'test-row_values.R:177:3',
        'test-row_values.R:187:3', 'test-row_values.R:197:3',
        'test-row_values.R:207:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-rdata.R:8:3'): r<data> functions work ────────────────────────
      `radex(adsl, seed = 1)` produced messages.
      
      [ FAIL 1 | WARN 0 | SKIP 21 | PASS 84 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  7.2Mb
      sub-directories of 1Mb or more:
        data   6.5Mb
    ```

# simMetric

<details>

* Version: 0.1.1
* GitHub: NA
* Source code: https://github.com/cran/simMetric
* Date/Publication: 2022-10-31 17:42:27 UTC
* Number of recursive dependencies: 35

Run `revdepcheck::cloud_details(, "simMetric")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(simMetric)
      > 
      > test_check("simMetric")
      Adding missing grouping variables: `idx`, `idx2`
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 20 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-join_metrics.R:10:3'): joining metrics works ─────────────────
      `{ ... }` produced messages.
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 20 ]
      Error: Test failures
      Execution halted
    ```

# SomaDataIO

<details>

* Version: 6.1.0
* GitHub: https://github.com/SomaLogic/SomaDataIO
* Source code: https://github.com/cran/SomaDataIO
* Date/Publication: 2024-03-26 04:00:02 UTC
* Number of recursive dependencies: 127

Run `revdepcheck::cloud_details(, "SomaDataIO")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(SomaDataIO)
      ═══════════════════════════════════════════════════════════════════════ Legal ══
         SomaDataIO™
         
         Copyright © 2024 SomaLogic Operating Co., Inc.
         
         The `SomaDataIO` package is licensed under the MIT license
         (`LICENSE.md`) and is intended solely for research use only ("RUO")
         purposes. The code contained herein may *not* be used for
         diagnostic, clinical, therapeutic, or other commercial purposes.
         Further, "SomaDataIO" and "SomaLogic" are trademarks owned by
         SomaLogic Operating Co., Inc. No license is hereby granted to these
         trademarks other than for purposes of identifying the origin or
         source of the Software. The above copyright notice and this
         permission notice shall be included in all copies or substantial
         portions of the Software.
         
         THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
         EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
         MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
         NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
         HOLDER(S) BE LIABLE FOR ANY CLAIM, DAMAGES, WHETHER DIRECT OR
         INDIRECT, OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
         OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
         SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
      ════════════════════════════════════════════════════════════════════════════════
      
      Attaching package: 'SomaDataIO'
      
      The following object is masked from 'package:stats':
      
          filter
      
      > 
      > test_check("SomaDataIO")
      [ FAIL 1 | WARN 0 | SKIP 23 | PASS 889 ]
      
      ══ Skipped tests (23) ══════════════════════════════════════════════════════════
      • Add increased coverage unit tests for `pivotExpressionSet()`; issue #6 (1):
        'test-pivotExpressionSet.R:12:3'
      • On CRAN (22): 'test-S3-median.R:5:3', 'test-S3-merge.R:9:3',
        'test-S3-print.R:15:3', 'test-S3-summary.R:50:3', 'test-diffAdats.R:7:3',
        'test-diffAdats.R:12:3', 'test-diffAdats.R:17:3', 'test-diffAdats.R:24:3',
        'test-diffAdats.R:29:3', 'test-diffAdats.R:37:3', 'test-getAnalytes.R:23:3',
        'test-getTargetNames.R:13:3', 'test-groupGenerics.R:154:3',
        'test-is-intact-attr.R:46:3', 'test-loadAdatsAsList.R:23:3',
        'test-loadAdatsAsList.R:28:3', 'test-loadAdatsAsList.R:62:3',
        'test-parseHeader.R:29:3', 'test-read-adat.R:30:3', 'test-read-adat.R:40:3',
        'test-scaleAnalytes.R:67:3', 'test-scaleAnalytes.R:73:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-is-intact-attr.R:72:3'): verbosity is triggered only when called directly ──
      ls(envir = .env) (`actual`) not equal to character(0) (`expected`).
      
      `actual`:   "get_ns_exports_lookup"
      `expected`:                        
      
      [ FAIL 1 | WARN 0 | SKIP 23 | PASS 889 ]
      Error: Test failures
      Execution halted
    ```

