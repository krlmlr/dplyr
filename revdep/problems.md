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
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: One stage sample size is 15.  Search bounds are 20 to 30.
      testthat 2024-12-14 21:30:22 TRACE test_check: Building grid - nTotal, nStage1: 264
      testthat 2024-12-14 21:30:22 TRACE test_check: Building grid - nTotal, nStage1, rTotal: 6710
      testthat 2024-12-14 21:30:22 TRACE test_check: Building grid - nTotal, nStage1, rTotal, rFutility: 26620
      testthat 2024-12-14 21:30:22 TRACE test_check: Building grid - nTotal, nStage1, rTotal, rFutility, rSuccess: 97571
      testthat 2024-12-14 21:30:22 TRACE test_check: Grid has 97571 rows.
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:22 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Entry
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
      testthat 2024-12-14 21:30:23 DEBUG test_check: Exit
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
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 40 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-xgboost.R:137:3'): finalize works ────────────────────────────
      Expected `fit(tune::finalize_workflow(wf, param_grid), us_deaths)` to run without any errors.
      i Actually got a <simpleError> with text:
        [21:21:00] src/data/data.cc:461: Check failed: valid: Label contains NaN, infinity or a value too large.
        Stack trace:
          [bt] (0) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x72d4d) [0x7fd92d669d4d]
          [bt] (1) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x14dc26) [0x7fd92d744c26]
          [bt] (2) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x14f443) [0x7fd92d746443]
          [bt] (3) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(XGDMatrixSetFloatInfo+0x7e) [0x7fd92d8b8aee]
          [bt] (4) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(XGDMatrixSetInfo_R+0x609) [0x7fd92d665879]
          [bt] (5) /opt/R/4.4.0/lib/R/lib/libR.so(+0x105a3e) [0x7fd944d4da3e]
          [bt] (6) /opt/R/4.4.0/lib/R/lib/libR.so(+0x1491f0) [0x7fd944d911f0]
          [bt] (7) /opt/R/4.4.0/lib/R/lib/libR.so(+0x15ccfa) [0x7fd944da4cfa]
          [bt] (8) /opt/R/4.4.0/lib/R/lib/libR.so(Rf_eval+0x17b) [0x7fd944da506b]
        
        
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 40 ]
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
* Number of recursive dependencies: 137

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

