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

# PatientProfiles

<details>

* Version: 1.0.0
* GitHub: https://github.com/darwin-eu-dev/PatientProfiles
* Source code: https://github.com/cran/PatientProfiles
* Date/Publication: 2024-05-16 15:00:15 UTC
* Number of recursive dependencies: 195

Run `revdepcheck::cloud_details(, "PatientProfiles")` for more info

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
      > # * https://r-pkgs.org/tests.html
      > # * https://testthat.r-lib.org/reference/test_package.html#special-files
      > 
      > library(testthat)
      > library(PatientProfiles)
      > 
      > test_check("PatientProfiles")
      Starting 2 test processes
      [ FAIL 3 | WARN 0 | SKIP 21 | PASS 795 ]
      
      ══ Skipped tests (21) ══════════════════════════════════════════════════════════
      • On CRAN (21): 'test-addAttributes.R:2:3', 'test-addCategories.R:2:3',
        'test-addCategories.R:56:3', 'test-addCategories.R:93:3',
        'test-addConceptIntersect.R:2:3', 'test-addConceptIntersect.R:97:3',
        'test-addConceptIntersect.R:128:3', 'test-addConceptIntersect.R:158:3',
        'test-addFutureObservation.R:2:3', 'test-addFutureObservation.R:13:3',
        'test-addFutureObservation.R:27:3', 'test-addFutureObservation.R:87:3',
        'test-addFutureObservation.R:147:3', 'test-addFutureObservation.R:209:3',
        'test-addFutureObservation.R:253:3', 'test-addPriorObservation.R:2:3',
        'test-addPriorObservation.R:13:3', 'test-addPriorObservation.R:27:3',
        'test-addPriorObservation.R:73:3', 'test-addPriorObservation.R:118:3',
        'test-addPriorObservation.R:180:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-addDemographics.R:629:3'): age at cohort entry, missing year/month/day of birth ──
      all(c(9, NA) %in% result$age) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-addDemographics.R:681:3'): multiple cohortIds, check age at cohort end ──
      all(c(15, 13, NA) %in% result$age) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-addDemographics.R:823:3'): age group checks ──────────────────
      ... %>% is.na() is not TRUE
      
      `actual`:       
      `expected`: TRUE
      
      [ FAIL 3 | WARN 0 | SKIP 21 | PASS 795 ]
      Error: Test failures
      Execution halted
    ```

