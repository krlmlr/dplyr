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

