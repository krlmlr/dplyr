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
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 42 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-xgboost.R:107:3'): boost_tree_offset() works with recipes ────
      predict(mod, xgtrain) (`actual`) not identical to predict(xgb_off, us_deaths)$.pred (`expected`).
      
           actual | expected                 
       [1] 18863  - 23330    [1]             
       [2] 19066  - 23582    [2]             
       [3] 19278  - 23844    [3]             
       [4] 19590  - 24229    [4]             
       [5] 19855  - 24558    [5]             
       [6] 20073  - 24827    [6]             
       [7] 20322  - 25135    [7]             
       [8] 20445  - 25287    [8]             
       [9] 20531  - 25393    [9]             
      [10] 22076  - 25443    [10]            
       ... ...      ...      and 130 more ...
      ── Failure ('test-xgboost.R:137:3'): finalize works ────────────────────────────
      Expected `fit(tune::finalize_workflow(wf, param_grid), us_deaths)` to run without any errors.
      i Actually got a <simpleError> with text:
        [20:44:19] src/data/data.cc:461: Check failed: valid: Label contains NaN, infinity or a value too large.
        Stack trace:
          [bt] (0) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x72d4d) [0x7f978c79ad4d]
          [bt] (1) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x14dc26) [0x7f978c875c26]
          [bt] (2) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x14f443) [0x7f978c877443]
          [bt] (3) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(XGDMatrixSetFloatInfo+0x7e) [0x7f978c9e9aee]
          [bt] (4) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(XGDMatrixSetInfo_R+0x609) [0x7f978c796879]
          [bt] (5) /opt/R/4.4.0/lib/R/lib/libR.so(+0x105a3e) [0x7f97a3e78a3e]
          [bt] (6) /opt/R/4.4.0/lib/R/lib/libR.so(+0x1491f0) [0x7f97a3ebc1f0]
          [bt] (7) /opt/R/4.4.0/lib/R/lib/libR.so(+0x15ccfa) [0x7f97a3ecfcfa]
          [bt] (8) /opt/R/4.4.0/lib/R/lib/libR.so(Rf_eval+0x17b) [0x7f97a3ed006b]
        
        
      
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 42 ]
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

