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
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpzPuGZX/datacut_2025-02-01_133202.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpzPuGZX/rmarkdown-str1334186580ad.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpzPuGZX/datacut_2025-02-01_133205.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpzPuGZX/rmarkdown-str13345d9fd774.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpzPuGZX/datacut_2025-02-01_133206.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpzPuGZX/rmarkdown-str1334538acede.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpzPuGZX/datacut_2025-02-01_133207.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpzPuGZX/rmarkdown-str13344d52a740.html 
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
    
    Processing "/tmp/Rtmpw3YB4w" ...
      -- [1/14] Parsing "/tmp/Rtmpw3YB4w/A2-i129.tsv.gz" -- immunarch
      -- [2/14] Parsing "/tmp/Rtmpw3YB4w/A2-i131.tsv.gz" -- immunarch
      -- [3/14] Parsing "/tmp/Rtmpw3YB4w/A2-i132.tsv.gz" -- immunarch
      -- [4/14] Parsing "/tmp/Rtmpw3YB4w/A2-i133.tsv.gz" -- immunarch
      -- [5/14] Parsing "/tmp/Rtmpw3YB4w/A4-i191.tsv.gz" -- immunarch
      -- [6/14] Parsing "/tmp/Rtmpw3YB4w/A4-i192.tsv.gz" -- immunarch
      -- [7/14] Parsing "/tmp/Rtmpw3YB4w/MS1.tsv.gz" -- immunarch
      -- [8/14] Parsing "/tmp/Rtmpw3YB4w/MS2.tsv.gz" -- immunarch
      -- [9/14] Parsing "/tmp/Rtmpw3YB4w/MS3.tsv.gz" -- immunarch
      -- [10/14] Parsing "/tmp/Rtmpw3YB4w/MS4.tsv.gz" -- immunarch
      -- [11/14] Parsing "/tmp/Rtmpw3YB4w/MS5.tsv.gz" -- immunarch
      -- [12/14] Parsing "/tmp/Rtmpw3YB4w/MS6.tsv.gz" -- immunarch
      -- [13/14] Parsing "/tmp/Rtmpw3YB4w/metadata.txt" -- metadata
      -- [14/14] Parsing "/tmp/Rtmpw3YB4w/pdf1a47438fcb14" -- unsupported format, skipping
    Processing "/tmp/Rtmpw3YB4w/duckplyr" ...
      -- [1/2] Parsing "/tmp/Rtmpw3YB4w/duckplyr/duckplyr1a472063466d.duckdb" -- Warning in readLines(f, 1) : line 1 appears to contain an embedded nul
    Warning in readLines(f, 1) :
      incomplete final line found on '/tmp/Rtmpw3YB4w/duckplyr/duckplyr1a472063466d.duckdb'
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
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 41 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-xgboost.R:97:3'): boost_tree_offset() works with recipes ───────
      Error in `setinfo.xgb.DMatrix(dmat, names(p), p[[1]])`: [13:34:18] src/data/data.cc:461: Check failed: valid: Label contains NaN, infinity or a value too large.
      Stack trace:
        [bt] (0) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x72d4d) [0x7f319451bd4d]
        [bt] (1) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x14dc26) [0x7f31945f6c26]
        [bt] (2) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x14f443) [0x7f31945f8443]
        [bt] (3) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(XGDMatrixSetFloatInfo+0x7e) [0x7f319476aaee]
        [bt] (4) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(XGDMatrixSetInfo_R+0x609) [0x7f3194517879]
        [bt] (5) /opt/R/4.4.0/lib/R/lib/libR.so(+0x105a3e) [0x7f31abb9ca3e]
        [bt] (6) /opt/R/4.4.0/lib/R/lib/libR.so(+0x1491f0) [0x7f31abbe01f0]
        [bt] (7) /opt/R/4.4.0/lib/R/lib/libR.so(+0x15ccfa) [0x7f31abbf3cfa]
        [bt] (8) /opt/R/4.4.0/lib/R/lib/libR.so(Rf_eval+0x17b) [0x7f31abbf406b]
      
      
      Backtrace:
           ▆
        1. ├─generics::fit(...) at test-xgboost.R:97:3
        2. ├─workflows:::fit.workflow(...)
        3. │ └─workflows::.fit_model(workflow, control)
        4. │   ├─generics::fit(action_model, workflow = workflow, control = control)
        5. │   └─workflows:::fit.action_model(...)
        6. │     └─workflows:::fit_from_xy(spec, mold, case_weights, control_parsnip)
        7. │       ├─generics::fit_xy(...)
        8. │       └─parsnip::fit_xy.model_spec(...)
        9. │         └─parsnip:::xy_xy(...)
       10. │           └─parsnip:::eval_mod(...)
       11. │             └─rlang::eval_tidy(e, env = envir, ...)
       12. └─offsetreg::xgb_train_offset(...)
       13.   └─offsetreg:::as_xgb_data_offset(...)
       14.     └─xgboost::xgb.DMatrix(x, missing = NA, info = info_list)
       15.       ├─xgboost::setinfo(dmat, names(p), p[[1]])
       16.       └─xgboost:::setinfo.xgb.DMatrix(dmat, names(p), p[[1]])
      ── Failure ('test-xgboost.R:137:3'): finalize works ────────────────────────────
      Expected `fit(tune::finalize_workflow(wf, param_grid), us_deaths)` to run without any errors.
      i Actually got a <simpleError> with text:
        [13:34:19] src/data/data.cc:461: Check failed: valid: Label contains NaN, infinity or a value too large.
        Stack trace:
          [bt] (0) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x72d4d) [0x7f319451bd4d]
          [bt] (1) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x14dc26) [0x7f31945f6c26]
          [bt] (2) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x14f443) [0x7f31945f8443]
          [bt] (3) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(XGDMatrixSetFloatInfo+0x7e) [0x7f319476aaee]
          [bt] (4) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(XGDMatrixSetInfo_R+0x609) [0x7f3194517879]
          [bt] (5) /opt/R/4.4.0/lib/R/lib/libR.so(+0x105a3e) [0x7f31abb9ca3e]
          [bt] (6) /opt/R/4.4.0/lib/R/lib/libR.so(+0x1491f0) [0x7f31abbe01f0]
          [bt] (7) /opt/R/4.4.0/lib/R/lib/libR.so(+0x15ccfa) [0x7f31abbf3cfa]
          [bt] (8) /opt/R/4.4.0/lib/R/lib/libR.so(Rf_eval+0x17b) [0x7f31abbf406b]
        
        
      
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 41 ]
      Error: Test failures
      Execution halted
    ```

