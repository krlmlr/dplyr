# activatr

<details>

* Version: 0.2.1
* GitHub: https://github.com/dschafer/activatr
* Source code: https://github.com/cran/activatr
* Date/Publication: 2024-07-27 21:20:02 UTC
* Number of recursive dependencies: 106

Run `revdepcheck::cloud_details(, "activatr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(activatr)
      > 
      > test_check("activatr")
      [ FAIL 6 | WARN 0 | SKIP 0 | PASS 98 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test_act_tbl.R:23:3'): summary works ──────────────────────────────
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

# cardx

<details>

* Version: 0.2.1
* GitHub: https://github.com/insightsengineering/cardx
* Source code: https://github.com/cran/cardx
* Date/Publication: 2024-09-03 04:10:02 UTC
* Number of recursive dependencies: 126

Run `revdepcheck::cloud_details(, "cardx")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘spelling.R’
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > test_check("cardx")
      Loading required package: cardx
      
      Attaching package: 'cardx'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      Starting 2 test processes
      [ FAIL 31 | WARN 0 | SKIP 44 | PASS 463 ]
      
      ══ Skipped tests (44) ══════════════════════════════════════════════════════════
      • On CRAN (44): 'test-ard_attributes.survey.design.R:7:3',
        'test-ard_car_anova.R:14:3', 'test-ard_car_anova.R:18:3',
        'test-ard_car_vif.R:4:3', 'test-ard_car_vif.R:29:3',
        'test-ard_aod_wald_test.R:12:3',
        'test-ard_categorical_ci.survey.design.R:7:3',
        'test-ard_categorical.survey.design.R:428:3',
        'test-ard_categorical.survey.design.R:1195:3',
        'test-ard_continuous_ci.survey.design.R:7:3',
        'test-ard_continuous_ci.survey.design.R:191:3',
        'test-ard_dichotomous.survey.design.R:413:3',
        'test-ard_effectsize_cohens_d.R:38:3', 'test-ard_effectsize_hedges_g.R:34:3',
        'test-ard_proportion_ci.R:92:3', 'test-ard_proportion_ci.R:113:3',
        'test-ard_regression.R:6:3', 'test-ard_regression.R:30:3',
        'test-ard_regression.R:50:3', 'test-ard_regression_basic.R:12:3',
        'test-ard_stats_aov.R:25:3', 'test-ard_stats_kruskal_test.R:22:3',
        'test-ard_stats_mood_test.R:22:3', 'test-ard_stats_oneway_test.R:24:3',
        'test-ard_stats_poisson_test.R:74:3', 'test-ard_survey_svychisq.R:28:3',
        'test-ard_survey_svyranktest.R:18:3', 'test-ard_survival_survfit.R:4:3',
        'test-ard_survival_survfit.R:15:3', 'test-ard_survival_survfit.R:26:3',
        'test-ard_survival_survfit.R:37:3', 'test-ard_survival_survfit.R:57:3',
        'test-ard_survival_survfit.R:91:3', 'test-ard_survival_survfit.R:102:3',
        'test-ard_survival_survfit.R:137:3', 'test-ard_survival_survfit_diff.R:40:3',
        'test-ard_total_n.survey.design.R:4:3', 'test-construction_helpers.R:4:3',
        'test-construction_helpers.R:104:3', 'test-proportion_ci.R:12:3',
        'test-proportion_ci.R:138:3', 'test-ard_continuous.survey.design.R:70:3',
        'test-ard_continuous.survey.design.R:322:3',
        'test-ard_continuous.survey.design.R:338:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-ard_categorical.survey.design.R:59:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (109, 2092, 325, 285, 706, ...)
      ── Failure ('test-ard_categorical.survey.design.R:65:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.0 1.0 1.0 1.0 1.0 1.0 1.0 1.0 1.0 1.0 and 2 more...
      `expected`: 0.5 0.7 0.4 0.6 0.7 0.8 0.5 0.3 0.6 0.4           ...
      ── Failure ('test-ard_categorical.survey.design.R:119:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (1490, 1490, 1490, 1490, 1490, ...)
      ── Failure ('test-ard_categorical.survey.design.R:126:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.00 1.00 1.00 1.00 1.00 1.00 1.00 1.00 1.00 1.00 and 2 more...
      `expected`: 0.03 0.97 0.08 0.11 0.35 0.45 0.08 0.92 0.29 0.17           ...
      ── Failure ('test-ard_categorical.survey.design.R:181:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (2201, 2201, 2201, 2201, 2201, ...)
      ── Failure ('test-ard_categorical.survey.design.R:188:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.0 1.0 1.0 1.0 1.0 1.0 1.0 1.0 1.0 1.0 and 2 more...
      `expected`: 0.0 0.7 0.1 0.1 0.2 0.3 0.0 0.3 0.1 0.1           ...
      ── Failure ('test-ard_categorical.survey.design.R:277:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (325, 285, 706, 885, 109, ...)
      ── Failure ('test-ard_categorical.survey.design.R:329:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (2201, 2201, 2201, 2201, 2201, ...)
      ── Failure ('test-ard_categorical.survey.design.R:335:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.00 1.00 1.00 1.00 1.00 1.00
      `expected`: 0.15 0.13 0.32 0.40 0.05 0.95
      ── Failure ('test-ard_categorical.survey.design.R:378:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (2201, 2201, 2201, 2201, 2201, ...)
      ── Failure ('test-ard_categorical.survey.design.R:384:3'): ard_categorical.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.00 1.00 1.00 1.00 1.00 1.00
      `expected`: 0.15 0.13 0.32 0.40 0.05 0.95
      ── Failure ('test-ard_categorical.survey.design.R:517:3'): ard_categorical.survey.design() works for unobserved factor levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (109, 109, 109, 285, 285, ...)
      ── Failure ('test-ard_categorical.survey.design.R:523:3'): ard_categorical.survey.design() works for unobserved factor levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `names(actual)[10:12]`:   "p" "p" "p"                        
      `names(expected)[10:18]`: "p" "p" "p" "p" "p" "p" "p" "p" "p"
      
           actual | expected                        
       [1] 1      - 0                 [1]           
       [2] 1      - 0                 [2]           
       [3] 1      - 0                 [3]           
       [4] 1      - 0                 [4]           
       [5] 1      - 0                 [5]           
       [6] 1      - 0                 [6]           
       [7] 1      - 0.23954802259887  [7]           
       [8] 1      - 0.252124645892351 [8]           
       [9] 1      - 0.312619502868069 [9]           
      [10] 1      - 0.375384615384615 [10]          
       ... ...      ...               and 8 more ...
      ── Failure ('test-ard_categorical.survey.design.R:575:3'): ard_categorical.survey.design() works for unobserved factor levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (0, 0, 0, 0, 0, ...)
      ── Failure ('test-ard_categorical.survey.design.R:581:3'): ard_categorical.survey.design() works for unobserved factor levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
        `actual`: 1.00 1.00 1.00 1.00 1.00 1.00 1.00 1.00 1.00 1.00 and 2 more...
      `expected`: 0.03 0.08 0.08 0.11 0.17 0.25 0.29 0.30 0.35 0.45           ...
      ── Failure ('test-ard_categorical.survey.design.R:633:3'): ard_categorical.survey.design() works for unobserved factor levels ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (2201, 2201, 2201, 2201, 2201, ...)
      ── Failure ('test-ard_categorical.survey.design.R:639:3'): ard_categorical.survey.design() works for unobserved factor levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `names(actual)[10:12]`:   "p" "p" "p"                        
      `names(expected)[10:18]`: "p" "p" "p" "p" "p" "p" "p" "p" "p"
      
           actual | expected                         
       [1] 1      - 0                  [1]           
       [2] 1      - 0                  [2]           
       [3] 1      - 0                  [3]           
       [4] 1      - 0                  [4]           
       [5] 1      - 0                  [5]           
       [6] 1      - 0                  [6]           
       [7] 1      - 0.0236256247160382 [7]           
       [8] 1      - 0.0258973194002726 [8]           
       [9] 1      - 0.0536119945479328 [9]           
      [10] 1      - 0.0554293502953203 [10]          
       ... ...      ...                and 8 more ...
      ── Failure ('test-ard_categorical.survey.design.R:813:3'): ard_categorical.survey.design() works for unobserved logical levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (109, 109, 285, 285, 325, ...)
      ── Failure ('test-ard_categorical.survey.design.R:819:3'): ard_categorical.survey.design() works for unobserved logical levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `names(actual)[4:6]`:    "p" "p" "p"                        
      `names(expected)[4:12]`: "p" "p" "p" "p" "p" "p" "p" "p" "p"
      
        `actual[1:3]`:             1 1 1
      `expected[1:9]`: 0 0 0 0 0 0 1 1 1
      ── Failure ('test-ard_categorical.survey.design.R:871:3'): ard_categorical.survey.design() works for unobserved logical levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (0, 0, 0, 0, 0, ...)
      ── Failure ('test-ard_categorical.survey.design.R:877:3'): ard_categorical.survey.design() works for unobserved logical levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
        `actual`: 1.00 1.00 1.00 1.00 1.00 1.00
      `expected`: 0.05 0.13 0.15 0.32 0.40 0.95
      ── Failure ('test-ard_categorical.survey.design.R:929:3'): ard_categorical.survey.design() works for unobserved logical levels ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (2201, 2201, 2201, 2201, 2201, ...)
      ── Failure ('test-ard_categorical.survey.design.R:935:3'): ard_categorical.survey.design() works for unobserved logical levels ──
      sort(...) (`actual`) not equal to sort(...) (`expected`).
      
      `names(actual)[4:6]`:    "p" "p" "p"                        
      `names(expected)[4:12]`: "p" "p" "p" "p" "p" "p" "p" "p" "p"
      
          actual | expected                         
      [1] 1      - 0                  [1]           
      [2] 1      - 0                  [2]           
      [3] 1      - 0                  [3]           
      [4] 1      - 0                  [4]           
      [5] 1      - 0                  [5]           
      [6] 1      - 0                  [6]           
                 - 0.0495229441163108 [7]           
                 - 0.129486597001363  [8]           
                 - 0.147660154475239  [9]           
                 - 0.320763289413903  [10]          
      ... ...      ...                and 2 more ...
      ── Failure ('test-ard_dichotomous.survey.design.R:62:3'): ard_dichotomous.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is a double vector (11, 11, 13, 13)
      ── Failure ('test-ard_dichotomous.survey.design.R:68:3'): ard_dichotomous.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.00 1.00 1.00 1.00
      `expected`: 0.09 0.91 0.46 0.54
      ── Failure ('test-ard_dichotomous.survey.design.R:141:3'): ard_dichotomous.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is a double vector (18, 14, 18, 14)
      ── Failure ('test-ard_dichotomous.survey.design.R:147:3'): ard_dichotomous.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.0 1.0 1.0 1.0
      `expected`: 0.1 0.7 0.3 0.5
      ── Failure ('test-ard_dichotomous.survey.design.R:217:3'): ard_dichotomous.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (32, 32, 32, 32)
      ── Failure ('test-ard_dichotomous.survey.design.R:223:3'): ard_dichotomous.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: 1.0 1.0 1.0 1.0
      `expected`: 0.0 0.3 0.2 0.2
      ── Failure ('test-ard_missing.survey.design.R:40:3'): ard_missing.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
      `actual` is NULL
      `expected` is an integer vector (1490, 1490, 711, 711)
      ── Failure ('test-ard_missing.survey.design.R:70:3'): ard_missing.survey.design() works ──
      unlist(...) (`actual`) not equal to unlist(...) (`expected`).
      
        `actual`: NaN NaN NaN NaN
      `expected`:   0   0   0   0
      
      [ FAIL 31 | WARN 0 | SKIP 44 | PASS 463 ]
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
      ■■■■■                             14% | ETA: 34s
      ■■■■■■■■■■■■                      36% | ETA: 36s
      ■■■■■■■■■■■■■■                    43% | ETA: 32s
      ■■■■■■■■■■■■■■■■■■■■              64% | ETA: 22s
      ■■■■■■■■■■■■■■■■■■■■■■            71% | ETA: 18s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■       86% | ETA:  8s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■     93% | ETA:  5s
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
      ■■■■■■■■■■■                       33% | ETA: 10s
      ■■■■■■■■■■■■■■■■■■■■■             67% | ETA:  3s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■        83% | ETA:  4s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■  100% | ETA:  0s
      WARNING: Phenotype association scores (phenodiff) not calculated for 252 of 2041 sites
      NOTE: 432 sites have more heterozygous individuals (1/0) than one of the homozygous states (1/1 or 0/0).
      
      Haplotyping was performed with hetphenos = F, meaning phenotype association scores for heterozygous sites was ignored.
      ✔ Haplotyping complete!
      Info saved in Haplotypes_30_E objects
      list()
      attr(,"class")
      [1] "waiver"
      list()
      attr(,"class")
      [1] "waiver"
      list()
      attr(,"class")
      [1] "waiver"
      Haplotype phenotype averages of wt individuals only:
               A    B    C    D    E
      Pheno 44.9 47.4 42.3 45.9 48.4
      list()
      attr(,"class")
      [1] "waiver"
      ■■■■■■■■■■■                       33% | ETA: 10s
      ■■■■■■■■■■■■■■■■■■■■■             67% | ETA:  3s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■        83% | ETA:  5s
      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■  100% | ETA:  0s
      WARNING: Phenotype association scores (phenodiff) not calculated for 252 of 2041 sites
      NOTE: 432 sites have more heterozygous individuals (1/0) than one of the homozygous states (1/1 or 0/0).
      
      Haplotyping was performed with hetphenos = F, meaning phenotype association scores for heterozygous sites was ignored.
      ✔ Haplotyping complete!
      Info saved in Haplotypes_30_E objects
      [ FAIL 1 | WARN 0 | SKIP 6 | PASS 5 ]
      
      ══ Skipped tests (6) ═══════════════════════════════════════════════════════════
      • On CRAN (6): 'test-clustree.R:14:1', 'test-clustree.R:19:1',
        'test-crosshapviz.R:13:3', 'test-crosshapviz.R:18:3',
        'test-crosshapviz.R:23:3', 'test-crosshapviz.R:28:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
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
      
      [ FAIL 1 | WARN 0 | SKIP 6 | PASS 5 ]
      Error: Test failures
      Execution halted
    ```

# cvms

<details>

* Version: 1.6.2
* GitHub: https://github.com/ludvigolsen/cvms
* Source code: https://github.com/cran/cvms
* Date/Publication: 2024-07-31 10:40:38 UTC
* Number of recursive dependencies: 151

Run `revdepcheck::cloud_details(, "cvms")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(cvms)
      > 
      > if (require("xpectr")) {
      +   test_check("cvms")
      + }
      Loading required package: xpectr
      [ FAIL 2 | WARN 0 | SKIP 71 | PASS 3614 ]
      
      ══ Skipped tests (71) ══════════════════════════════════════════════════════════
      • Fails in check - IMPROVE THESE TESTS (1): 'test_example_functions.R:7:3'
      • On CRAN (58): 'test_baseline.R:9:3', 'test_baseline.R:630:3',
        'test_baseline.R:921:3', 'test_baseline.R:1218:3', 'test_baseline.R:1518:3',
        'test_baseline.R:3602:3', 'test_baseline.R:3694:3',
        'test_cross_validate.R:134:3', 'test_cross_validate.R:246:3',
        'test_cross_validate.R:734:3', 'test_cross_validate.R:935:3',
        'test_cross_validate.R:969:3', 'test_cross_validate.R:1019:3',
        'test_cross_validate.R:1245:3', 'test_cross_validate.R:1518:3',
        'test_cross_validate.R:1859:3', 'test_cross_validate.R:2200:3',
        'test_cross_validate.R:2395:3', 'test_cross_validate.R:2511:3',
        'test_cross_validate.R:3138:3', 'test_cross_validate.R:3216:3',
        'test_cross_validate_fn.R:101:3', 'test_cross_validate_fn.R:512:3',
        'test_cross_validate_fn.R:752:3', 'test_cross_validate_fn.R:969:3',
        'test_cross_validate_fn.R:1056:3', 'test_cross_validate_fn.R:1308:3',
        'test_cross_validate_fn.R:1419:3', 'test_cross_validate_fn.R:1552:3',
        'test_cross_validate_fn.R:1952:3', 'test_cross_validate_fn.R:2061:3',
        'test_cross_validate_fn.R:2248:3', 'test_cross_validate_fn.R:2525:3',
        'test_cross_validate_fn.R:2574:3', 'test_cross_validate_fn.R:2615:3',
        'test_cross_validate_fn.R:3292:3', 'test_cross_validate_fn.R:3357:3',
        'test_cross_validate_fn.R:3425:3', 'test_cross_validate_fn.R:3485:3',
        'test_evaluate.R:3845:3', 'test_evaluate.R:4268:3', 'test_evaluate.R:4767:3',
        'test_evaluate.R:5412:3', 'test_most_challenging.R:8:3',
        'test_most_challenging.R:369:3', 'test_most_challenging.R:742:3',
        'test_most_challenging.R:1502:3', 'test_select_definitions.R:7:3',
        'test_select_metrics.R:7:3', 'test_select_metrics.R:573:3',
        'test_validate.R:123:3', 'test_validate.R:296:3', 'test_validate.R:430:3',
        'test_validate.R:665:3', 'test_validate_fn.R:185:3',
        'test_validate_fn.R:828:3', 'test_validate_fn.R:2195:3',
        'test_validate_fn.R:3079:3'
      • Skipping check for CRAN release due to r_hub failure (1):
        'test_combine_predictors.R:259:3'
      • Skipping parallel tests (3): 'test_parallelization.R:11:3',
        'test_parallelization.R:56:3', 'test_parallelization.R:141:3'
      • Skipping test as R version is > 4.2. (1): 'test_cross_validate_fn.R:469:3'
      • empty test (1): 'test_parallelization.R:99:1'
      • keras and tensorflow take too long and have too many dependencies (1):
        'test_cross_validate_fn.R:2333:3'
      • mac and ubuntu give different warnings (4): 'test_cross_validate.R:596:3',
        'test_cross_validate.R:664:3', 'test_helpers.R:42:3', 'test_helpers.R:287:3'
      • tidymodels have too many dependencies (1): 'test_cross_validate_fn.R:2460:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test_cross_validate.R:1413:3'): gaussian models work with repeated cross_validate() ──
      CVgausslist$Coefficients[[1]] inherits from `'data.frame'` not `'character'`.
      ── Failure ('test_validate_fn.R:4529:3'): testing nested tibbles in multinomial validate_fn() ──
      class(output_19148) not equal to c("tbl_df", "tbl", "data.frame").
      Lengths differ: 1 is not 3
      
      [ FAIL 2 | WARN 0 | SKIP 71 | PASS 3614 ]
      Error: Test failures
      Execution halted
    ```

# gtsummary

<details>

* Version: 2.0.3
* GitHub: https://github.com/ddsjoberg/gtsummary
* Source code: https://github.com/cran/gtsummary
* Date/Publication: 2024-10-04 19:30:02 UTC
* Number of recursive dependencies: 187

Run `revdepcheck::cloud_details(, "gtsummary")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘gtsummary-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: tbl_ard_hierarchical
    > ### Title: ARD Hierarchical Table
    > ### Aliases: tbl_ard_hierarchical
    > 
    > ### ** Examples
    > 
    > ADAE_subset <- cards::ADAE |>
    +   dplyr::filter(
    +     AESOC %in% unique(cards::ADAE$AESOC)[1:5],
    +     AETERM %in% unique(cards::ADAE$AETERM)[1:5]
    +   )
    > 
    > # Example 1: Event Rates  --------------------
    > # First, build the ARD
    > ard <-
    +   cards::ard_stack_hierarchical(
    +     data = ADAE_subset,
    +     variables = c(AESOC, AETERM),
    +     by = TRTA,
    +     denominator = cards::ADSL |> mutate(TRTA = ARM),
    +     id = USUBJID
    +   )
    > 
    > # Second, build table from the ARD
    > tbl_ard_hierarchical(
    +   cards = ard,
    +   variables = c(AESOC, AETERM),
    +   by = TRTA
    + )
    Error in pier_summary_hierarchical(cards = cards, variables = variables,  : 
      object '.' not found
    Calls: tbl_ard_hierarchical ... pier_summary_hierarchical -> <Anonymous> -> left_join.data.frame -> rel_try
    Execution halted
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

# joyn

<details>

* Version: 0.2.3
* GitHub: https://github.com/randrescastaneda/joyn
* Source code: https://github.com/cran/joyn
* Date/Publication: 2024-08-21 01:20:02 UTC
* Number of recursive dependencies: 94

Run `revdepcheck::cloud_details(, "joyn")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(joyn)
      
      Attaching package: 'joyn'
      
      The following object is masked from 'package:base':
      
          merge
      
      > 
      > test_check("joyn")
      x Error: Input table x has no columns.
      x Error: Input table x has no columns.
      x Error: Input table y has no columns.
      x Error: Neither x or y table has columns.
      x Error: Table x has the following column duplicated: x.  Please rename or
      remove and try again.
      x Error: table x is not uniquely identified by id
      Duplicate counts in x:
            id copies
         <int>  <int>
      1:     1      2
      x Error: table y is not uniquely identified by id
      Duplicate counts in y:
            id copies
         <num>  <int>
      1:     2      2
      x Error: table x is not uniquely identified by id1
      x Error: table y is not uniquely identified by id1
      Duplicate counts in x:
           id1 copies
         <num>  <int>
      1:     1      2
      Duplicate counts in y:
           id1 copies
         <num>  <int>
      1:     3      2
      x Error: table y is not uniquely identified by id
      Duplicate counts in y:
            id copies
         <num>  <int>
      1:     2      2
      x Error: table y is not uniquely identified by id
      Duplicate counts in y:
            id copies
         <num>  <int>
      1:     2      2
      ! Warning: argument copy = TRUE is not active in this version of joyn
      ! Warning: joyn does not currently allow inequality joins, so keep = NULL will
      retain only keys in x
      inner join: df1[id1, id2] 3/4 (75%) <1:1st> df3[id1, id2] 3/4 (75%)
      i Note: Joyn's report available in variable .joyn
      v This is an info message
      o Timing:The full joyn is executed in 0.000583 seconds.
      o Timing: The entire joyn function, including checks, is executed in 0.028341
      seconds.
      ! Warning: Currently, joyn allows only na_matches = 'na'
      x This is a warning message
      ! Warning: Currently, joyn allows only na_matches = 'na'
      x This is a warning message
      v first try
      v first try info
      v second try warn
      v first try info
      v third try note
      v second try warn
      x Error: table y is not uniquely identified by id
      x Error: table x is not uniquely identified by id
      x Error: table y is not uniquely identified by id
      -- JOYn Report --
      
        .joyn n percent
      1     x 2    100%
      2     y 1     50%
      3 total 2    100%
      ---------------------------------------------------------- End of JOYn report --
      i Note: Joyn's report available in variable .joyn
      ! Warning: cannot use arguments update_values = TRUE and/or update_NAs = TRUE
      for anti join
      x Error: table x is not uniquely identified by id
      v There are no duplicates in data frame
      > we found 1 possible id
      v There are no duplicates in data frame
      > we found 1 possible id
      ! Since `exclude` is NULL, `include` directive does not make sense. Ignored.
      v There are no duplicates in data frame
      > we found 1 possible id
      v There are no duplicates in data frame
      > we found 2 possible ids
      ! Data has duplicates. returning NULL
      
      -- Duplicates in terms of `t` 
        copies n percent
      1      1 1   33.3%
      2      2 2   66.7%
      3  total 3    100%
      ------------------------------------------------------- End of is_id() report --
      ! Variable rer is not available in data frame. Nothing is excluded.
      v There are no duplicates in data frame
      > we found 1 possible id
      v There are no duplicates in data frame
      > we found 1 possible id
      v There are no duplicates in data frame
      > we found 1 possible id
      
      ── JOYn Report ──
      
        .joyn n percent
      1     x 2     25%
      2     y 1   12.5%
      3 x & y 5   62.5%
      4 total 8    100%
      ────────────────────────────────────────────────────────── End of JOYn report ──
      ℹ Note: Joyn's report available in variable .joyn
      ℹ Note: Removing key variables id from id, x, category, and t
      i name x- is an invalid variable name. It will be changed to x.
      i name is an invalid variable name. It will be changed to X
      [ FAIL 1 | WARN 0 | SKIP 3 | PASS 463 ]
      
      ══ Skipped tests (3) ═══════════════════════════════════════════════════════════
      • This test is not needed anymore because the match is always m:m in
        collapse::join (1): 'test-joyn_workhorse.R:76:3'
      • joyn_workhorse does not check match type (1): 'test-joyn_workhorse.R:202:3'
      • warning of cartesian is not working well yet - (1):
        'test-merge-data.table.R:69:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-dplyr-joins.R:1711:3'): ANTI JOIN - Conducts ANTI join ─────────
      Error in `eval(code, test_env)`: object 's' not found
      Backtrace:
          ▆
       1. ├─dplyr::anti_join(x1, y1, by = "id", s) at test-dplyr-joins.R:1711:3
       2. └─dplyr:::anti_join.data.frame(x1, y1, by = "id", s)
       3.   └─dplyr:::rel_try(...)
      
      [ FAIL 1 | WARN 0 | SKIP 3 | PASS 463 ]
      Error: Test failures
      Execution halted
    ```

# PatientProfiles

<details>

* Version: 1.2.1
* GitHub: https://github.com/darwin-eu-dev/PatientProfiles
* Source code: https://github.com/cran/PatientProfiles
* Date/Publication: 2024-10-25 04:40:02 UTC
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
      [ FAIL 2 | WARN 0 | SKIP 104 | PASS 167 ]
      
      ══ Skipped tests (104) ═════════════════════════════════════════════════════════
      • On CRAN (104): 'test-addAttributes.R:2:3', 'test-addCategories.R:2:3',
        'test-addCategories.R:69:3', 'test-addCategories.R:106:3',
        'test-addCategories.R:155:3', 'test-addConceptIntersect.R:2:3',
        'test-addConceptIntersect.R:97:3', 'test-addConceptIntersect.R:138:3',
        'test-addConceptIntersect.R:168:3', 'test-addConceptIntersect.R:199:3',
        'test-addCohortIntersect.R:277:3', 'test-addCohortIntersect.R:353:3',
        'test-addCohortIntersect.R:398:3', 'test-addCohortIntersect.R:509:3',
        'test-addCohortIntersect.R:600:3', 'test-addCohortIntersect.R:660:3',
        'test-addCohortIntersect.R:734:3', 'test-addCohortIntersect.R:752:3',
        'test-addCohortIntersect.R:838:3', 'test-addDeath.R:104:3',
        'test-addDeath.R:149:3', 'test-addDeath.R:247:3', 'test-addDeath.R:290:3',
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
        'test-addTableIntersect.R:28:3', 'test-addTableIntersect.R:209:3',
        'test-addTableIntersect.R:316:3', 'test-addTableIntersect.R:451:3',
        'test-addTableIntersect.R:581:3', 'test-checks.R:2:3', 'test-checks.R:106:3',
        'test-checks.R:157:3', 'test-checks.R:177:3', 'test-checks.R:189:3',
        'test-checks.R:237:3', 'test-checks.R:264:3', 'test-addDemographics.R:2:3',
        'test-addDemographics.R:24:3', 'test-addDemographics.R:352:3',
        'test-addDemographics.R:419:3', 'test-addDemographics.R:685:3',
        'test-addDemographics.R:834:3', 'test-addDemographics.R:852:3',
        'test-addDemographics.R:964:3', 'test-addDemographics.R:1043:3',
        'test-addDemographics.R:1155:3', 'test-addDemographics.R:1220:3',
        'test-addDemographics.R:1246:3', 'test-addDemographics.R:1273:3',
        'test-addDemographics.R:1289:3', 'test-addDemographics.R:1300:3',
        'test-addDemographics.R:1318:3', 'test-addDemographics.R:1346:3',
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
      
      [ FAIL 2 | WARN 0 | SKIP 104 | PASS 167 ]
      Error: Test failures
      Execution halted
    ```

# plutor

<details>

* Version: 0.1.0
* GitHub: https://github.com/william-swl/plutor
* Source code: https://github.com/cran/plutor
* Date/Publication: 2023-10-27 08:00:02 UTC
* Number of recursive dependencies: 114

Run `revdepcheck::cloud_details(, "plutor")` for more info

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
      > library(plutor)
      > 
      > test_check("plutor")
      [ FAIL 10 | WARN 12 | SKIP 17 | PASS 0 ]
      
      ══ Skipped tests (17) ══════════════════════════════════════════════════════════
      • On CRAN (17): 'test-Position.R:4:3', 'test-Position.R:17:3',
        'test-Scales.R:2:3', 'test-Scales.R:13:3', 'test-Scales.R:24:3',
        'test-Scales.R:35:3', 'test-Stat.R:4:3', 'test-Stat.R:14:3',
        'test-Stat.R:27:3', 'test-color.R:2:3', 'test-color.R:11:3',
        'test-color.R:21:3', 'test-geom_compare.R:127:3',
        'test-geom_compare.R:165:3', 'test-geom_describe.R:4:3',
        'test-geom_describe.R:15:3', 'test-theme.R:2:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-geom_compare.R:4:3'): geom_compare ─────────────────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 3 or 1, not 0.
      ── Error ('test-geom_compare.R:15:3'): geom_compare, log10 ─────────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 3 or 1, not 0.
      ── Error ('test-geom_compare.R:26:3'): geom_compare, facet ─────────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 3 or 1, not 0.
      ── Error ('test-geom_compare.R:38:3'): geom_compare, ignore ns ─────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 2 or 1, not 0.
      ── Error ('test-geom_compare.R:52:3'): geom_compare, ignore ns partly ──────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 3 or 1, not 0.
      ── Error ('test-geom_compare.R:66:3'): geom_compare, fc1 ───────────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 2 or 1, not 0.
      ── Error ('test-geom_compare.R:82:3'): geom_compare, paired ────────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 1, not 0.
      ── Error ('test-geom_compare.R:98:3'): geom_compare, inline ────────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 2 or 1, not 0.
      ── Error ('test-geom_compare.R:113:3'): geom_compare, cp_ref ───────────────────
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 2 or 1, not 0.
      ── Error ('test-geom_compare.R:178:3'): geom_compare, manual comparisons table ──
      Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, 
          position = position, show.legend = show.legend, inherit.aes = inherit.aes, 
          params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, 
              tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, 
              ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, 
              comparisons = comparisons, paired = paired, alternative = alternative, 
              test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, 
              cp_inline = cp_inline, brackets_widen = brackets_widen, 
              fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, 
              lineend = lineend, ...))`: Problem while converting geom to grob.
      i Error occurred in the 2nd layer.
      Caused by error in `mutate()`:
      i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
      Caused by error:
      ! `yend` must be size 3 or 1, not 0.
      
      [ FAIL 10 | WARN 12 | SKIP 17 | PASS 0 ]
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

*   checking re-building of vignette outputs ... ERROR
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
* Number of recursive dependencies: 92

Run `revdepcheck::cloud_details(, "text2sdg")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘text2sdg.Rmd’ using rmarkdown
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 37 marked UTF-8 strings
    ```

