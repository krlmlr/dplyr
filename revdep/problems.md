# admiral

<details>

* Version: 1.2.0
* GitHub: https://github.com/pharmaverse/admiral
* Source code: https://github.com/cran/admiral
* Date/Publication: 2025-01-15 19:50:02 UTC
* Number of recursive dependencies: 77

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
      > test_check("admiral", stop_on_warning = TRUE)
      [ FAIL 0 | WARN 20 | SKIP 116 | PASS 672 ]
      
      ══ Skipped tests (116) ═════════════════════════════════════════════════════════
      • On CRAN (116): 'test-admiral_options.R:9:3', 'test-call_derivation.R:112:3',
        'test-call_derivation.R:131:3', 'test-call_derivation.R:152:3',
        'test-call_derivation.R:173:3', 'test-call_derivation.R:194:3',
        'test-call_derivation.R:212:3', 'test-call_user_fun.R:2:3',
        'test-compute_age_years.R:40:3', 'test-compute_scale.R:111:3',
        'test-compute_scale.R:124:3', 'test-consolidate_metadata.R:75:3',
        'test-create_query_data.R:263:3', 'test-create_query_data.R:324:3',
        'test-create_query_data.R:336:3', 'test-create_query_data.R:347:3',
        'test-create_query_data.R:360:3', 'test-create_query_data.R:373:3',
        'test-create_query_data.R:384:3', 'test-create_query_data.R:396:3',
        'test-create_query_data.R:407:3', 'test-create_query_data.R:418:3',
        'test-create_query_data.R:429:3', 'test-create_query_data.R:441:3',
        'test-create_query_data.R:454:3', 'test-create_query_data.R:467:3',
        'test-create_query_data.R:475:3', 'test-create_single_dose_dataset.R:220:3',
        'test-create_single_dose_dataset.R:237:3',
        'test-create_single_dose_dataset.R:261:3',
        'test-create_single_dose_dataset.R:277:3',
        'test-derive_extreme_event.R:620:3', 'test-derive_joined.R:256:3',
        'test-derive_merged.R:146:3', 'test-derive_merged.R:281:3',
        'test-derive_merged.R:296:3', 'test-derive_merged.R:312:3',
        'test-derive_merged.R:325:3', 'test-derive_merged.R:339:3',
        'test-derive_merged.R:405:3', 'test-derive_merged.R:478:3',
        'test-derive_merged.R:513:3', 'test-derive_merged.R:646:3',
        'test-derive_merged.R:659:3', 'test-derive_param_bmi.R:114:3',
        'test-derive_param_bsa.R:305:3', 'test-derive_param_computed.R:477:3',
        'test-derive_param_computed.R:514:3', 'test-derive_param_computed.R:531:3',
        'test-derive_param_computed.R:552:3',
        'test-derive_param_extreme_record.R:32:3', 'test-derive_param_map.R:149:3',
        'test-derive_param_qtc.R:112:3', 'test-derive_param_rr.R:52:3',
        'test-derive_param_tte.R:454:3', 'test-derive_param_tte.R:515:3',
        'test-derive_param_tte.R:576:3', 'test-derive_param_tte.R:635:3',
        'test-derive_param_tte.R:921:3', 'test-derive_param_tte.R:981:3',
        'test-derive_param_tte.R:1122:3', 'test-derive_var_base.R:128:3',
        'test-derive_var_dthcaus.R:32:3', 'test-derive_var_dthcaus.R:664:3',
        'test-derive_var_extreme_date.R:28:3',
        'test-derive_var_extreme_date.R:171:3',
        'test-derive_var_extreme_date.R:325:3',
        'test-derive_var_merged_ef_msrc.R:130:3', 'test-derive_var_ontrtfl.R:419:3',
        'test-derive_var_trtemfl.R:154:3', 'test-derive_var_trtemfl.R:165:3',
        'test-derive_var_trtemfl.R:176:3', 'test-derive_var_trtemfl.R:187:3',
        'test-derive_var_trtemfl.R:210:3', 'test-derive_vars_aage.R:69:3',
        'test-derive_vars_aage.R:86:3', 'test-derive_vars_aage.R:149:3',
        'test-derive_vars_atc.R:83:3', 'test-derive_vars_cat.R:79:3',
        'test-derive_vars_cat.R:331:3', 'test-derive_vars_cat.R:347:3',
        'test-derive_vars_crit_flag.R:76:3', 'test-derive_vars_crit_flag.R:97:3',
        'test-derive_vars_dt.R:181:3', 'test-derive_vars_dt.R:197:3',
        'test-derive_vars_dt.R:502:3', 'test-derive_vars_dt.R:547:3',
        'test-derive_vars_dt.R:566:3', 'test-derive_vars_dtm.R:356:3',
        'test-derive_vars_dtm.R:553:3', 'test-derive_vars_dtm.R:637:3',
        'test-derive_vars_dtm.R:685:3', 'test-derive_vars_dtm.R:705:3',
        'test-derive_vars_dtm.R:785:3', 'test-derive_vars_dy.R:248:3',
        'test-derive_vars_query.R:152:3', 'test-derive_vars_query.R:173:3',
        'test-derive_vars_query.R:247:3', 'test-derive_vars_query.R:263:3',
        'test-derive_vars_transposed.R:66:3', 'test-derive_vars_transposed.R:111:3',
        'test-dt_level.R:42:3', 'test-dt_level.R:49:3', 'test-duplicates.R:43:3',
        'test-get_summary_records.R:25:3', 'test-period_dataset.R:128:3',
        'test-period_dataset.R:151:3', 'test-period_dataset.R:174:3',
        'test-period_dataset.R:321:3', 'test-period_dataset.R:348:3',
        'test-roxygen2.R:20:3', 'test-transform_range.R:28:3',
        'test-transform_range.R:40:3', 'test-user_helpers.R:16:3',
        'test-user_helpers.R:41:3', 'test-user_utils.R:250:3'
      
      [ FAIL 0 | WARN 20 | SKIP 116 | PASS 672 ]
      Error: Tests generated warnings
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

# datacutr

<details>

* Version: 0.2.2
* GitHub: https://github.com/pharmaverse/datacutr
* Source code: https://github.com/cran/datacutr
* Date/Publication: 2025-01-10 10:40:01 UTC
* Number of recursive dependencies: 120

Run `revdepcheck::cloud_details(, "datacutr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(datacutr)
      > 
      > test_check("datacutr")
      [1] "At least 1 patient with missing datacut date."
      [1] "At least 1 patient with missing datacut date, all records will be kept."
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpMHPuS7/datacut_2025-02-01_203444.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpMHPuS7/rmarkdown-str13305ef1bd0f.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpMHPuS7/datacut_2025-02-01_203446.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpMHPuS7/rmarkdown-str1330407f1f45.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpMHPuS7/datacut_2025-02-01_203447.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpMHPuS7/rmarkdown-str133073e17a08.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpMHPuS7/datacut_2025-02-01_203448.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpMHPuS7/rmarkdown-str133021c3f4ae.html 
      [1] "At least 1 patient with missing datacut date, all records will be kept."
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 58 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-create_dcut.R:42:3'): One observation in DCUT ────────────────
      create_dcut(...) not equal to `expected_dcutna`.
      Component "DCUTDTC": Modes: numeric, logical
      Component "DCUTDTC": target is numeric, current is logical
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 58 ]
      Error: Test failures
      Execution halted
    ```

# immunarch

<details>

* Version: 0.9.1
* GitHub: https://github.com/immunomind/immunarch
* Source code: https://github.com/cran/immunarch
* Date/Publication: 2024-03-18 19:10:06 UTC
* Number of recursive dependencies: 201

Run `revdepcheck::cloud_details(, "immunarch")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘immunarch-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: repSave
    > ### Title: Save immune repertoires to the disk
    > ### Aliases: repSave
    > 
    > ### ** Examples
    > 
    > data(immdata)
    > # Reduce data to save time on examples
    > immdata$data <- purrr::map(immdata$data, ~ .x %>% head(10))
    > dirpath <- tempdir()
    > # Save the list of repertoires
    > repSave(immdata, dirpath)
    Warning: The `path` argument of `write_tsv()` is deprecated as of readr 1.4.0.
    ℹ Please use the `file` argument instead.
    ℹ The deprecated feature was likely used in the immunarch package.
      Please report the issue at <https://github.com/immunomind/immunarch/issues>.
    Warning: The `path` argument of `write_lines()` is deprecated as of readr 1.4.0.
    ℹ Please use the `file` argument instead.
    ℹ The deprecated feature was likely used in the immunarch package.
      Please report the issue at <https://github.com/immunomind/immunarch/issues>.
    > # Load it and check if it is the same
    > new_immdata <- repLoad(dirpath)
    
    == Step 1/3: loading repertoire files... ==
    
    Processing "/tmp/RtmpJ1PdGv" ...
      -- [1/14] Parsing "/tmp/RtmpJ1PdGv/A2-i129.tsv.gz" -- immunarch
      -- [2/14] Parsing "/tmp/RtmpJ1PdGv/A2-i131.tsv.gz" -- immunarch
      -- [3/14] Parsing "/tmp/RtmpJ1PdGv/A2-i132.tsv.gz" -- immunarch
      -- [4/14] Parsing "/tmp/RtmpJ1PdGv/A2-i133.tsv.gz" -- immunarch
      -- [5/14] Parsing "/tmp/RtmpJ1PdGv/A4-i191.tsv.gz" -- immunarch
      -- [6/14] Parsing "/tmp/RtmpJ1PdGv/A4-i192.tsv.gz" -- immunarch
      -- [7/14] Parsing "/tmp/RtmpJ1PdGv/MS1.tsv.gz" -- immunarch
      -- [8/14] Parsing "/tmp/RtmpJ1PdGv/MS2.tsv.gz" -- immunarch
      -- [9/14] Parsing "/tmp/RtmpJ1PdGv/MS3.tsv.gz" -- immunarch
      -- [10/14] Parsing "/tmp/RtmpJ1PdGv/MS4.tsv.gz" -- immunarch
      -- [11/14] Parsing "/tmp/RtmpJ1PdGv/MS5.tsv.gz" -- immunarch
      -- [12/14] Parsing "/tmp/RtmpJ1PdGv/MS6.tsv.gz" -- immunarch
      -- [13/14] Parsing "/tmp/RtmpJ1PdGv/metadata.txt" -- metadata
      -- [14/14] Parsing "/tmp/RtmpJ1PdGv/pdf1a433a00823a" -- unsupported format, skipping
    Processing "/tmp/RtmpJ1PdGv/duckplyr" ...
      -- [1/2] Parsing "/tmp/RtmpJ1PdGv/duckplyr/duckplyr1a4321472aa5.duckdb" -- Warning in readLines(f, 1) : line 1 appears to contain an embedded nul
    Warning in readLines(f, 1) :
      incomplete final line found on '/tmp/RtmpJ1PdGv/duckplyr/duckplyr1a4321472aa5.duckdb'
    Error in stri_trim_both(string) : 
      invalid UTF-8 byte sequence detected; try calling stri_enc_toutf8()
    Calls: repLoad ... .detect_format -> ifelse -> str_trim -> stri_trim_both
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  9.7Mb
      sub-directories of 1Mb or more:
        data   5.5Mb
        doc    1.6Mb
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
      
           actual  | expected                 
       [1] 18862.6 - 15634.8  [1]             
       [2] 19066.5 - 15803.8  [2]             
       [3] 19277.9 - 15979.1  [3]             
       [4] 19589.9 - 16237.7  [4]             
       [5] 19855.2 - 16457.6  [5]             
       [6] 20072.9 - 24383.4  [6]             
       [7] 20321.9 - 24685.8  [7]             
       [8] 20445.3 - 24835.7  [8]             
       [9] 20530.8 - 24939.6  [9]             
      [10] 22075.8 - 29267.2  [10]            
       ... ...       ...      and 130 more ...
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 42 ]
      Error: Test failures
      Execution halted
    ```

# optic

<details>

* Version: 1.0.1
* GitHub: https://github.com/randcorporation/optic
* Source code: https://github.com/cran/optic
* Date/Publication: 2023-08-08 13:40:02 UTC
* Number of recursive dependencies: 154

Run `revdepcheck::cloud_details(, "optic")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > 
      > 
      > #------------------------------------------------------------------------------#
      > # OPTIC R Package Code Repository
      > # Copyright (C) 2023 by The RAND Corporation
      > # See README.md for information on usage and licensing
      > #------------------------------------------------------------------------------#
      > 
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/tests.html
      > # * https://testthat.r-lib.org/reference/test_package.html#special-files
      > 
      > library(testthat)
      > library(optic)
      > 
      > test_check("optic")
      Number of Simulations: 24
      Number of Models: 2
      Iteration per Simulation : 2
      Total number of Iterations to Run: 96
      JOB 1 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      
      Attaching package: 'dplyr'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      The following objects are masked from 'package:stats':
      
          filter, lag
      
      The following objects are masked from 'package:base':
      
          intersect, setdiff, setequal, union
      
      JOB 2 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      JOB 3 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: pos
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      JOB 4 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: pos
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      JOB 5 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      JOB 6 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      JOB 7 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: pos
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      JOB 8 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: pos
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      JOB 9 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 10 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 11 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: pos
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 12 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: pos
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 13 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 14 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 15 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: pos
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 16 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: pos
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 17 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      JOB 18 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      JOB 19 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: pos
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      JOB 20 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: pos
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      JOB 21 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      JOB 22 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      JOB 23 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: pos
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      JOB 24 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: pos
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      Number of Simulations: 12
      Number of Models: 2
      Iteration per Simulation : 5
      Total number of Iterations to Run: 120
      JOB 1 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: trend
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: small
                  bias_type: linear
      
      Attaching package: 'MASS'
      
      The following object is masked from 'package:dplyr':
      
          select
      
      JOB 2 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: level
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: small
                  bias_type: linear
      JOB 3 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: trend
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: medium
                  bias_type: linear
      JOB 4 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: level
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: medium
                  bias_type: linear
      JOB 5 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: trend
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: large
                  bias_type: linear
      JOB 6 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: level
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: large
                  bias_type: linear
      JOB 7 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: trend
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: small
                  bias_type: nonlinear
      JOB 8 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: level
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: small
                  bias_type: nonlinear
      JOB 9 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: trend
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: medium
                  bias_type: nonlinear
      JOB 10 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: level
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: medium
                  bias_type: nonlinear
      JOB 11 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: trend
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: large
                  bias_type: nonlinear
      JOB 12 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: level
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: large
                  bias_type: nonlinear
      Number of Simulations: 8
      Number of Models: 3
      Iteration per Simulation : 5
      Total number of Iterations to Run: 120
      JOB 1 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  treat_var: state
      JOB 2 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 3.97146241830065
                  n_units: 5
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  treat_var: state
      JOB 3 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  treat_var: state
      JOB 4 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 3.97146241830065
                  n_units: 5
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  treat_var: state
      JOB 5 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 10
                  prior_control: level
                  treat_var: state
      JOB 6 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 3.97146241830065
                  n_units: 5
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 10
                  prior_control: level
                  treat_var: state
      JOB 7 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 10
                  prior_control: level
                  treat_var: state
      JOB 8 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 3.97146241830065
                  n_units: 5
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 10
                  prior_control: level
                  treat_var: state
      [ FAIL 1 | WARN 1 | SKIP 0 | PASS 4 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-confounding.R:126:3'): confounding simulations work ──────────
      any(is.na(linear_results_df)) is not FALSE
      
      `actual`:   TRUE 
      `expected`: FALSE
      
      [ FAIL 1 | WARN 1 | SKIP 0 | PASS 4 ]
      Error: Test failures
      Execution halted
    ```

# pointblank

<details>

* Version: 0.12.2
* GitHub: https://github.com/rstudio/pointblank
* Source code: https://github.com/cran/pointblank
* Date/Publication: 2024-10-23 03:50:02 UTC
* Number of recursive dependencies: 130

Run `revdepcheck::cloud_details(, "pointblank")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(pointblank)
      > library(dittodb)
      Loading required package: DBI
      > test_check("pointblank")
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 1858 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-snip_fns.R:607:3'): the `snip_lowest()` function works ───────
      run_snip(snip_lowest(column = "e"), small_table) not equal to "0".
      1/1 mismatches
      x[1]: "FALSE"
      y[1]: "0"
      ── Failure ('test-snip_fns.R:635:3'): the `snip_highest()` function works ──────
      run_snip(snip_highest(column = "e"), small_table) not equal to "1".
      1/1 mismatches
      x[1]: "TRUE"
      y[1]: "1"
      
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 1858 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 1 marked UTF-8 string
    ```

