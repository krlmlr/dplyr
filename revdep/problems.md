# admiral

<details>

* Version: 1.1.1
* GitHub: https://github.com/pharmaverse/admiral
* Source code: https://github.com/cran/admiral
* Date/Publication: 2024-06-17 13:10:08 UTC
* Number of recursive dependencies: 78

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
      > test_check("admiral")
      [ FAIL 1 | WARN 0 | SKIP 88 | PASS 661 ]
      
      ══ Skipped tests (88) ══════════════════════════════════════════════════════════
      • On CRAN (88): 'test-call_derivation.R:112:3', 'test-call_derivation.R:131:3',
        'test-call_derivation.R:152:3', 'test-call_derivation.R:173:3',
        'test-call_derivation.R:194:3', 'test-call_derivation.R:212:3',
        'test-call_user_fun.R:2:3', 'test-compute_age_years.R:40:3',
        'test-compute_scale.R:111:3', 'test-consolidate_metadata.R:102:3',
        'test-create_query_data.R:263:3', 'test-create_query_data.R:324:3',
        'test-create_query_data.R:336:3', 'test-create_query_data.R:347:3',
        'test-create_query_data.R:360:3', 'test-create_query_data.R:373:3',
        'test-create_query_data.R:384:3', 'test-create_query_data.R:396:3',
        'test-create_query_data.R:407:3', 'test-create_query_data.R:418:3',
        'test-create_query_data.R:429:3', 'test-create_query_data.R:441:3',
        'test-create_query_data.R:454:3', 'test-create_query_data.R:467:3',
        'test-create_query_data.R:475:3', 'test-create_single_dose_dataset.R:217:3',
        'test-create_single_dose_dataset.R:234:3',
        'test-create_single_dose_dataset.R:258:3',
        'test-create_single_dose_dataset.R:274:3',
        'test-derive_extreme_event.R:620:3', 'test-derive_joined.R:256:3',
        'test-derive_merged.R:146:3', 'test-derive_merged.R:281:3',
        'test-derive_merged.R:296:3', 'test-derive_merged.R:312:3',
        'test-derive_merged.R:325:3', 'test-derive_merged.R:339:3',
        'test-derive_merged.R:421:3', 'test-derive_merged.R:494:3',
        'test-derive_merged.R:529:3', 'test-derive_merged.R:706:3',
        'test-derive_param_computed.R:405:3', 'test-derive_param_computed.R:426:3',
        'test-derive_param_tte.R:452:3', 'test-derive_param_tte.R:513:3',
        'test-derive_param_tte.R:574:3', 'test-derive_param_tte.R:633:3',
        'test-derive_param_tte.R:892:3', 'test-derive_var_base.R:128:3',
        'test-derive_var_dthcaus.R:576:3', 'test-derive_var_extreme_date.R:226:3',
        'test-derive_var_merged_ef_msrc.R:130:3', 'test-derive_var_ontrtfl.R:419:3',
        'test-derive_var_trtemfl.R:154:3', 'test-derive_var_trtemfl.R:165:3',
        'test-derive_var_trtemfl.R:176:3', 'test-derive_var_trtemfl.R:187:3',
        'test-derive_vars_aage.R:69:3', 'test-derive_vars_aage.R:86:3',
        'test-derive_vars_aage.R:149:3', 'test-derive_vars_dt.R:181:3',
        'test-derive_vars_dt.R:197:3', 'test-derive_vars_dt.R:436:3',
        'test-derive_vars_dt.R:481:3', 'test-derive_vars_dt.R:500:3',
        'test-derive_vars_dtm.R:356:3', 'test-derive_vars_dtm.R:553:3',
        'test-derive_vars_dtm.R:637:3', 'test-derive_vars_dtm.R:685:3',
        'test-derive_vars_dtm.R:705:3', 'test-derive_vars_dtm.R:785:3',
        'test-derive_vars_dy.R:248:3', 'test-derive_vars_query.R:152:3',
        'test-derive_vars_query.R:173:3', 'test-derive_vars_query.R:239:3',
        'test-derive_vars_transposed.R:58:3', 'test-dt_level.R:42:3',
        'test-dt_level.R:49:3', 'test-duplicates.R:43:3',
        'test-period_dataset.R:128:3', 'test-period_dataset.R:151:3',
        'test-period_dataset.R:174:3', 'test-period_dataset.R:321:3',
        'test-period_dataset.R:348:3', 'test-roxygen2.R:20:3',
        'test-user_helpers.R:16:3', 'test-user_helpers.R:41:3',
        'test-user_utils.R:249:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-derive_merged.R:692:3'): derive_var_merged_summary Test 28: error when relatioship is
                incorrectly specificed 'one-to-one' ──
      `derive_vars_merged(...)` did not throw the expected error.
      
      [ FAIL 1 | WARN 0 | SKIP 88 | PASS 661 ]
      Error: Test failures
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

# healthdb

<details>

* Version: 0.3.1
* GitHub: https://github.com/KevinHzq/healthdb
* Source code: https://github.com/cran/healthdb
* Date/Publication: 2024-05-23 02:10:02 UTC
* Number of recursive dependencies: 68

Run `revdepcheck::cloud_details(, "healthdb")` for more info

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
      > library(healthdb)
      > 
      > test_check("healthdb")
      
      The following records have start > end:
         uid clnt_id      dates   ans diagx diagx_1 diagx_2   end_date
      1   14       1 2020-12-15 noise   999     999     999 2020-12-08
      2   21       4 2019-05-19 noise   999     999     999 2019-05-12
      3    8       5 2016-07-02   any     t       q    <NA> 2016-06-25
      4    3      13 2015-11-17   any     z       x     999 2015-11-10
      5   19      17 2018-03-16 noise   999    <NA>    <NA> 2018-03-09
      6   22      19 2016-11-30 noise   999    <NA>    <NA> 2016-11-23
      7    5      19 2018-07-12   any     y       i     999 2018-07-05
      8   20      19 2018-09-26 noise   999     999    <NA> 2018-09-19
      9   11      21 2019-07-26   all     a       n       z 2019-07-19
      10  13      22 2015-08-05 noise   999     999     999 2015-07-29
      11   6      29 2019-05-01   any     k       o    <NA> 2019-04-24
      12  18      29 2020-12-12 noise   999    <NA>    <NA> 2020-12-05
      13  17      31 2016-10-02 noise   999    <NA>     999 2016-09-25
      14  16      31 2020-01-07 noise   999     999    <NA> 2019-12-31
      15   4      33 2019-12-22   any     c       x     999 2019-12-15
      16  12      36 2016-12-09   all     b       e       i 2016-12-02
      17  23      37 2018-06-08 noise   999    <NA>     999 2018-06-01
      18  10      37 2020-08-30   all     y       k       z 2020-08-23
      19   7      40 2015-02-21   any     q       g     999 2015-02-14
      20  24      40 2020-04-28 noise   999    <NA>    <NA> 2020-04-21
      21  25      41 2019-05-19 noise   999     999    <NA> 2019-05-12
      22   2      41 2019-08-29   any     a       b     999 2019-08-22
      23   9      45 2016-07-29   all     t       w       g 2016-07-22
      24   1      46 2015-06-14   any     p       d    <NA> 2015-06-07
      25  15      48 2016-08-07 noise   999     999     999 2016-07-31
      
      The following records have missing dates:
        uid clnt_id      dates ans diagx diagx_1 diagx_2 end_date
      1   1      21 2020-08-27 any     i       v     999       NA
      > --------------Inclusion step--------------
      
      i Identify records with condition(s):
      * where at least one of the diagx, diagx_1, diagx_2 column(s) in each record
      * contains a value exactly matched values in set: letters
      i To see the final query generated by 'dbplyr', use dplyr::show_query() on the output.
      To extract the SQL string, use dbplyr::remote_query().
      
      This message is displayed once per session.
      > --------------Exclusion step--------------
      
      i Identify records with condition(s):
      * where at least one of the diagx, diagx_1, diagx_2 column(s) in each record
      * contains a value exactly matched values in set: c("a", "b")
      i Exclude records in `data` through anti_join with `excl` matching on (by argument): "clnt_id" 
      
      > --------------No. rows restriction--------------
      
      i Apply restriction that each client must have at least 2 records with distinct dates. Clients/groups which did not met the condition were excluded.
      > --------------Time span restriction--------------
      
      i Exclude a subset of `data` that satisfies condition: ans == "noise" 
      Check NAs in the result; SQL handles missing value differently compared to R.
      
      i Exclude a subset of `data` that satisfies condition: ans == "noise" 
      
      i Consider being explicit about NA, e.g., condition = var == 'val' | is.na(var)
      
      i Exclude a subset of `data` that satisfies condition: ans == "noise" 
      Check NAs in the result; SQL handles missing value differently compared to R.
      
      i Consider being explicit about NA, e.g., condition = var == 'val' | is.na(var)
      
      i Identify records with condition(s):
      * where at least one of the diagx, diagx_1, diagx_2 column(s) in each record
      * contains a value exactly matched values in set: letters
      i Identify records with condition(s):
      * where at least one of the diagx, diagx_1, diagx_2 column(s) in each record
      * contains a value exactly matched values in set: 1:10
      [ FAIL 1 | WARN 2 | SKIP 6 | PASS 220 ]
      
      ══ Skipped tests (6) ═══════════════════════════════════════════════════════════
      • On CRAN (6): 'test-define_case.R:42:3', 'test-if_dates.R:2:3',
        'test-if_dates.R:26:3', 'test-if_dates.R:33:3',
        'test-restrict_dates_sql.R:26:3', 'test-restrict_dates_sql.R:101:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-fetch_var.R:115:3'): not one to one warning works ──────────────
      Error in `trace_back(top = getOption("testthat_topenv"), bottom = trace_env)`: Can't find `bottom` on the call tree.
      Backtrace:
          ▆
       1. ├─... %>% expect_warning() at test-fetch_var.R:115:3
       2. └─testthat::expect_warning(.)
       3.   └─testthat:::expect_condition_matching(...)
       4.     └─testthat::expect(...)
       5.       └─rlang::trace_back(top = getOption("testthat_topenv"), bottom = trace_env)
       6.         └─rlang:::trace_find_bottom(bottom, frames)
       7.           └─rlang::abort(msg, call = call)
      
      [ FAIL 1 | WARN 2 | SKIP 6 | PASS 220 ]
      Error: Test failures
      Execution halted
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
      
      The following object is masked from 'package:base':
      
          %||%
      
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

* Version: 1.2.0
* GitHub: https://github.com/darwin-eu-dev/PatientProfiles
* Source code: https://github.com/cran/PatientProfiles
* Date/Publication: 2024-09-11 22:52:59 UTC
* Number of recursive dependencies: 126

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
      [ FAIL 2 | WARN 9 | SKIP 106 | PASS 149 ]
      
      ══ Skipped tests (106) ═════════════════════════════════════════════════════════
      • On CRAN (106): 'test-addAttributes.R:2:3', 'test-addCategories.R:2:3',
        'test-addCategories.R:56:3', 'test-addCategories.R:93:3',
        'test-addCategories.R:142:3', 'test-addConceptIntersect.R:2:3',
        'test-addConceptIntersect.R:97:3', 'test-addConceptIntersect.R:128:3',
        'test-addConceptIntersect.R:158:3', 'test-addConceptIntersect.R:189:3',
        'test-addDeath.R:104:3', 'test-addDeath.R:149:3', 'test-addDeath.R:247:3',
        'test-addDeath.R:290:3', 'test-addCohortIntersect.R:277:3',
        'test-addCohortIntersect.R:353:3', 'test-addCohortIntersect.R:398:3',
        'test-addCohortIntersect.R:509:3', 'test-addCohortIntersect.R:600:3',
        'test-addCohortIntersect.R:660:3', 'test-addCohortIntersect.R:734:3',
        'test-addCohortIntersect.R:752:3', 'test-addCohortIntersect.R:838:3',
        'test-addFutureObservation.R:2:3', 'test-addFutureObservation.R:13:3',
        'test-addFutureObservation.R:27:3', 'test-addFutureObservation.R:87:3',
        'test-addFutureObservation.R:147:3', 'test-addFutureObservation.R:209:3',
        'test-addFutureObservation.R:253:3', 'test-addInObservation.R:2:3',
        'test-addInObservation.R:16:3', 'test-addInObservation.R:47:3',
        'test-addInObservation.R:170:3', 'test-addIntersect.R:2:3',
        'test-addIntersect.R:37:3', 'test-addIntersect.R:226:3',
        'test-addIntersect.R:277:3', 'test-addIntersect.R:398:3',
        'test-addIntersect.R:502:3', 'test-addIntersect.R:558:3',
        'test-addIntersect.R:626:3', 'test-addIntersect.R:775:3',
        'test-addIntersect.R:856:3', 'test-addIntersect.R:870:3',
        'test-addIntersect.R:940:3', 'test-addIntersect.R:1027:3',
        'test-addIntersect.R:1208:3', 'test-addIntersect.R:1219:3',
        'test-addObservationPeriodId.R:2:3', 'test-addPriorObservation.R:2:3',
        'test-addPriorObservation.R:13:3', 'test-addPriorObservation.R:27:3',
        'test-addPriorObservation.R:73:3', 'test-addPriorObservation.R:118:3',
        'test-addPriorObservation.R:180:3', 'test-addSex.R:2:3',
        'test-addSex.R:13:3', 'test-addSex.R:25:3', 'test-addSex.R:66:3',
        'test-addDemographics.R:2:3', 'test-addDemographics.R:24:3',
        'test-addDemographics.R:352:3', 'test-addDemographics.R:419:3',
        'test-addDemographics.R:685:3', 'test-addDemographics.R:834:3',
        'test-addDemographics.R:852:3', 'test-addDemographics.R:964:3',
        'test-addDemographics.R:1043:3', 'test-addDemographics.R:1155:3',
        'test-addDemographics.R:1220:3', 'test-addDemographics.R:1246:3',
        'test-addDemographics.R:1273:3', 'test-addDemographics.R:1289:3',
        'test-addDemographics.R:1300:3', 'test-addDemographics.R:1318:3',
        'test-addDemographics.R:1340:3', 'test-checks.R:2:3', 'test-checks.R:110:3',
        'test-checks.R:161:3', 'test-checks.R:181:3', 'test-checks.R:193:3',
        'test-checks.R:207:3', 'test-checks.R:220:3', 'test-checks.R:268:3',
        'test-checks.R:295:3', 'test-addTableIntersect.R:28:3',
        'test-addTableIntersect.R:209:3', 'test-addTableIntersect.R:316:3',
        'test-addTableIntersect.R:451:3', 'test-addTableIntersect.R:581:3',
        'test-format.R:2:3', 'test-format.R:89:3', 'test-format.R:100:3',
        'test-format.R:110:3', 'test-format.R:139:3',
        'test-mockPatientProfiles.R:2:3', 'test-name.R:2:3', 'test-utilities.R:2:3',
        'test-summariseResult.R:205:3', 'test-summariseResult.R:251:3',
        'test-summariseResult.R:308:3', 'test-summariseResult.R:352:3',
        'test-summariseResult.R:373:3', 'test-summariseResult.R:448:3',
        'test-summariseResult.R:534:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-addDemographics.R:618:3'): age at cohort entry, missing year/month/day of birth ──
      all(c(9, NA) %in% result$age) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-addDemographics.R:670:3'): multiple cohortIds, check age at cohort end ──
      all(c(15, 13, NA) %in% result$age) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      
      [ FAIL 2 | WARN 9 | SKIP 106 | PASS 149 ]
      Error: Test failures
      Execution halted
    ```

