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
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmpm1WdDj/datacut_2025-02-01_044850.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmpm1WdDj/rmarkdown-str13341c2bd9d5.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmpm1WdDj/datacut_2025-02-01_044852.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmpm1WdDj/rmarkdown-str133453d9cc64.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmpm1WdDj/datacut_2025-02-01_044853.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmpm1WdDj/rmarkdown-str13344e075643.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmpm1WdDj/datacut_2025-02-01_044854.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmpm1WdDj/rmarkdown-str13342b4df86f.html 
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

# eSDM

<details>

* Version: 0.4.4
* GitHub: https://github.com/swfsc/eSDM
* Source code: https://github.com/cran/eSDM
* Date/Publication: 2024-10-07 22:20:02 UTC
* Number of recursive dependencies: 131

Run `revdepcheck::cloud_details(, "eSDM")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘example-analysis.Rmd’ using rmarkdown
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.6Mb
      sub-directories of 1Mb or more:
        data      1.5Mb
        extdata   1.5Mb
        shiny     2.2Mb
    ```

# ezplot

<details>

* Version: 0.7.13
* GitHub: NA
* Source code: https://github.com/cran/ezplot
* Date/Publication: 2024-01-28 11:30:05 UTC
* Number of recursive dependencies: 108

Run `revdepcheck::cloud_details(, "ezplot")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
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

# GeoTox

<details>

* Version: 0.2.0
* GitHub: https://github.com/NIEHS/GeoTox
* Source code: https://github.com/cran/GeoTox
* Date/Publication: 2024-11-15 14:20:02 UTC
* Number of recursive dependencies: 143

Run `revdepcheck::cloud_details(, "GeoTox")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘GeoTox-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: GeoTox
    > ### Title: GeoTox S3 object
    > ### Aliases: GeoTox plot.GeoTox
    > 
    > ### ** Examples
    > 
    > # Use a subset of the package data for demonstration purposes
    > set.seed(2357)
    > n <- 10 # Population size
    > m <- 5 # Number of regions
    > idx <- if (m < 100) sample(1:100, m) else 1:100
    > 
    > geoTox <- GeoTox() |> 
    +   # Set region and group boundaries (for plotting)
    +   set_boundaries(region = geo_tox_data$boundaries$county,
    +                  group  = geo_tox_data$boundaries$state) |> 
    +   # Simulate populations for each region
    +   simulate_population(age           = split(geo_tox_data$age, ~FIPS)[idx],
    +                       obesity       = geo_tox_data$obesity[idx, ],
    +                       exposure      = split(geo_tox_data$exposure, ~FIPS)[idx],
    +                       simulated_css = geo_tox_data$simulated_css,
    +                       n             = n) |> 
    +   # Estimated Hill parameters
    +   set_hill_params(geo_tox_data$dose_response |>
    +                     fit_hill(assay = "endp", chem = "casn") |> 
    +                     dplyr::filter(!tp.sd.imputed, !logAC50.sd.imputed)) |>
    +   # Calculate response
    +   calculate_response() |>
    +   # Perform sensitivity analysis
    +   sensitivity_analysis()
    Error in if (any(AC50 < 0)) { : missing value where TRUE/FALSE needed
    Calls: sensitivity_analysis ... .calc_concentration_response -> <Anonymous> -> <Anonymous> -> f -> hill_conc
    Execution halted
    ```

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
      > library(GeoTox)
      > 
      > test_check("GeoTox")
      [ FAIL 5 | WARN 0 | SKIP 0 | PASS 334 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-GeoTox.R:40:3'): package data subset ─────────────────────────
      Expected `... <- NULL` to run without any errors.
      i Actually got a <simpleError> with text:
        missing value where TRUE/FALSE needed
      ── Failure ('test-GeoTox.R:62:3'): package data subset ─────────────────────────
      Expected `capture_output(print(geoTox))` to run without any errors.
      i Actually got a <simpleError> with text:
        object 'geoTox' not found
      ── Failure ('test-GeoTox.R:65:3'): package data subset ─────────────────────────
      Expected `plot(geoTox, type = "hill")` to run without any errors.
      i Actually got a <simpleError> with text:
        object 'geoTox' not found
      ── Failure ('test-GeoTox.R:67:3'): package data subset ─────────────────────────
      Expected `plot(geoTox, type = "exposure")` to run without any errors.
      i Actually got a <simpleError> with text:
        object 'geoTox' not found
      ── Error ('test-GeoTox.R:70:3'): package data subset ───────────────────────────
      Error in `eval(code, test_env)`: object 'geoTox' not found
      Backtrace:
          ▆
       1. ├─testthat::expect_warning(plot(geoTox), "Multiple assays found, using first assay") at test-GeoTox.R:70:3
       2. │ └─testthat:::expect_condition_matching(...)
       3. │   └─testthat:::quasi_capture(...)
       4. │     ├─testthat (local) .capture(...)
       5. │     │ └─base::withCallingHandlers(...)
       6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
       7. └─base::plot(geoTox)
      
      [ FAIL 5 | WARN 0 | SKIP 0 | PASS 334 ]
      Error: Test failures
      Execution halted
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘introduction.Rmd’ using rmarkdown
    
    Quitting from lines 33-55 [unnamed-chunk-2] (introduction.Rmd)
    Error: processing vignette 'introduction.Rmd' failed with diagnostics:
    missing value where TRUE/FALSE needed
    --- failed re-building ‘introduction.Rmd’
    
    --- re-building ‘package_data.Rmd’ using rmarkdown
    --- finished re-building ‘package_data.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘introduction.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 775 marked UTF-8 strings
    ```

# handwriterRF

<details>

* Version: 1.1.1
* GitHub: https://github.com/CSAFE-ISU/handwriterRF
* Source code: https://github.com/cran/handwriterRF
* Date/Publication: 2025-01-29 00:20:01 UTC
* Number of recursive dependencies: 127

Run `revdepcheck::cloud_details(, "handwriterRF")` for more info

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
      > library(handwriterRF)
      > 
      > test_check("handwriterRF")
      Copying samples to project directory > docs...
      
      Estimating writer profiles...
      Listing documents to be processed...
      Creating output directory...
      Directory already exists.
      Processing document w0030_s01_pWOZ_r01.png...
      path in readPNGBinary: /tmp/RtmpNNXYAz/comparison/docs/w0030_s01_pWOZ_r01.png
      Starting Processing...
      Getting Nodes...
      Skeletonizing writing...
      Splitting document into components...
      Merging nodes...
      Finding paths...
      Split paths into graphs...
      Organizing graphs...
      Creating graph lists...
      Adding character features...
      Document processing complete
      Saving processed document w0030_s01_pWOZ_r01.png...
      
      Processing document w0030_s01_pWOZ_r02.png...
      path in readPNGBinary: /tmp/RtmpNNXYAz/comparison/docs/w0030_s01_pWOZ_r02.png
      Starting Processing...
      Getting Nodes...
      Skeletonizing writing...
      Splitting document into components...
      Merging nodes...
      Finding paths...
      Split paths into graphs...
      Organizing graphs...
      Creating graph lists...
      Adding character features...
      Document processing complete
      Saving processed document w0030_s01_pWOZ_r02.png...
      
      All documents were successfully processed...
      
      Loading graphs for w0030_s01_pWOZ_r01_proclist.rds
      Getting cluster assignments for w0030_s01_pWOZ_r01
      Saving cluster assignments for  w0030_s01_pWOZ_r01 
      
      Loading graphs for w0030_s01_pWOZ_r02_proclist.rds
      Getting cluster assignments for w0030_s01_pWOZ_r02
      Saving cluster assignments for  w0030_s01_pWOZ_r02 
      
      Calculating distance between samples...
      Calculating similarity score...
      Calculating distance between samples...
      Calculating similarity score...
      Calculating distance between samples...
      Calculating similarity score...
      Calculating distance between samples...
      Calculating similarity score...
      Calculating SLR...
      Calculating distance between samples...
      Calculating similarity score...
      Calculating SLR...
      Killed
    ```

# heemod

<details>

* Version: 1.0.2
* GitHub: https://github.com/aphp/heemod
* Source code: https://github.com/cran/heemod
* Date/Publication: 2024-09-11 16:00:02 UTC
* Number of recursive dependencies: 139

Run `revdepcheck::cloud_details(, "heemod")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(heemod)
      > 
      > test_check("heemod")
      I: detected use of 'state_time', expanding states: A, B.
      I: detected use of 'state_time', expanding states: A, B.
      I: detected use of 'state_time', expanding states: A, B.
      I: detected use of 'state_time', expanding states: A, B.
      I: detected use of 'state_time', expanding states: A, B.
      I: detected use of 'state_time', expanding state: A.
      I: detected use of 'state_time', expanding state: B.
      I: detected use of 'state_time', expanding state: C.
      Updating strategy 'I'...
      Updating strategy 'II'...
      Updating strategy 'I'...
      Updating strategy 'II'...
      No weights specified in update, using equal weights.
      Updating strategy 'I'...
      Updating strategy 'II'...
      Loading required namespace: diagram
      I: detected use of 'state_time', expanding state: A.
      I: detected use of 'state_time', expanding state: A.
      Updating strategy 'standard'...
      Updating strategy 'new'...
      Updating strategy 'standard'...
      Updating strategy 'new'...
      Cluster closed.
      Loading required package: survival
      Resampling strategy 'I'...
      Resampling strategy 'II'...
      Resampling strategy 'I'...
      Resampling strategy 'II'...
      Resampling strategy 'I'...
      Resampling strategy 'II'...
      Loading required namespace: logitnorm
      I: detected use of 'state_time', expanding state: X2.
      II: detected use of 'state_time', expanding state: X2.
      Resampling strategy 'I'...
      Resampling strategy 'II'...
      `dplyr::filter(bc, group == "Good")` is a complex expression. If you need to
      perform PSA, please make sure the data.frame does not include the package
      environment, i.e. is not preceded by `::`.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      Resampling strategy 'I'...
      Resampling strategy 'I'...
      Resampling strategy 'I'...
      Resampling strategy 'II'...
      Resampling strategy 'I'...
      Resampling strategy 'I'...
      No covariates provided, returning aggregate survival across all subjects.
      Resampling strategy 'I'...
      Resampling strategy 'I'...
      `km_2` must be a <surv_fit>
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      Resampling strategy 'I'...
      Resampling strategy 'II'...
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      No covariates provided, returning aggregate survival across all subjects.
      Resampling strategy 'I'...
      Resampling strategy 'standard'...
      Resampling strategy 'new'...
      Updating strategy 'standard'...
      Updating strategy 'new'...
      [ FAIL 10 | WARN 0 | SKIP 1 | PASS 504 ]
      
      ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
      • empty test (1): 'test_starting_values.R:200:1'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test_efficiency_frontier.R:15:5'): Identify Frontier Scenarios ────
      `result1` (`actual`) not equal to c("Scenario 1", "Scenario 5", "Scenario 8") (`expected`).
      
      `actual`:   "Scenario 8"                          
      `expected`: "Scenario 1" "Scenario 5" "Scenario 8"
      ── Failure ('test_efficiency_frontier.R:32:5'): Identify Frontier Scenarios ────
      `result2` (`actual`) not equal to c("Scenario 2", "Scenario 5") (`expected`).
      
      `actual`:   "Scenario 5"             
      `expected`: "Scenario 2" "Scenario 5"
      ── Failure ('test_efficiency_frontier.R:47:5'): Identify Frontier Scenarios ────
      `result3` (`actual`) not equal to c("Scenario 1", "Scenario 2", "Scenario 4", "Scenario 6") (`expected`).
      
      `actual`:   "Scenario 6"                                       
      `expected`: "Scenario 1" "Scenario 2" "Scenario 4" "Scenario 6"
      ── Failure ('test_efficiency_frontier.R:63:5'): Identify Frontier Scenarios ────
      `result4` (`actual`) not equal to c("Scenario 1", "Scenario 6") (`expected`).
      
      `actual`:   "Scenario 6"             
      `expected`: "Scenario 1" "Scenario 6"
      ── Failure ('test_efficiency_frontier.R:78:5'): Identify Frontier Scenarios ────
      `result5` (`actual`) not equal to c("Scenario 1", "Scenario 2", "Scenario 3", "Scenario 4", "Scenario 5") (`expected`).
      
      `actual`:   "Scenario 5"                                                    
      `expected`: "Scenario 1" "Scenario 2" "Scenario 3" "Scenario 4" "Scenario 5"
      ── Failure ('test_efficiency_frontier.R:95:5'): Identify Frontier Scenarios ────
      `result6` (`actual`) not equal to c("Scenario 1", "Scenario 4", "Scenario 7") (`expected`).
      
      `actual`:   "Scenario 7"                          
      `expected`: "Scenario 1" "Scenario 4" "Scenario 7"
      ── Failure ('test_efficiency_frontier.R:113:5'): Identify Frontier Scenarios ───
      `result7` (`actual`) not equal to c("Scenario 2", "Scenario 4", "Scenario 5", "Scenario 7") (`expected`).
      
      `actual`:   "Scenario 7"                                       
      `expected`: "Scenario 2" "Scenario 4" "Scenario 5" "Scenario 7"
      ── Failure ('test_efficiency_frontier.R:128:5'): Identify Frontier Scenarios ───
      `result8` (`actual`) not equal to c("Scenario 1", "Scenario 2") (`expected`).
      
      `actual`:   "Scenario 2"             
      `expected`: "Scenario 1" "Scenario 2"
      ── Failure ('test_efficiency_frontier.R:206:5'): Identify Frontier Scenarios ───
      `result13` (`actual`) not equal to c("Scenario 2", "Scenario 3") (`expected`).
      
      `actual`:   "Scenario 3"             
      `expected`: "Scenario 2" "Scenario 3"
      ── Failure ('test_run_model.R:234:5'): run_model behaves as expected ───────────
      s_mod$frontier (`actual`) not equal to c("I", "II") (`expected`).
      
      `actual`:   "II"     
      `expected`: "I"  "II"
      
      [ FAIL 10 | WARN 0 | SKIP 1 | PASS 504 ]
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
    
    Processing "/tmp/RtmpQIXHj9" ...
      -- [1/16] Parsing "/tmp/RtmpQIXHj9/A2-i129.tsv.gz" -- immunarch
      -- [2/16] Parsing "/tmp/RtmpQIXHj9/A2-i131.tsv.gz" -- immunarch
      -- [3/16] Parsing "/tmp/RtmpQIXHj9/A2-i132.tsv.gz" -- immunarch
      -- [4/16] Parsing "/tmp/RtmpQIXHj9/A2-i133.tsv.gz" -- immunarch
      -- [5/16] Parsing "/tmp/RtmpQIXHj9/A4-i191.tsv.gz" -- immunarch
      -- [6/16] Parsing "/tmp/RtmpQIXHj9/A4-i192.tsv.gz" -- immunarch
      -- [7/16] Parsing "/tmp/RtmpQIXHj9/MS1.tsv.gz" -- immunarch
      -- [8/16] Parsing "/tmp/RtmpQIXHj9/MS2.tsv.gz" -- immunarch
      -- [9/16] Parsing "/tmp/RtmpQIXHj9/MS3.tsv.gz" -- immunarch
      -- [10/16] Parsing "/tmp/RtmpQIXHj9/MS4.tsv.gz" -- immunarch
      -- [11/16] Parsing "/tmp/RtmpQIXHj9/MS5.tsv.gz" -- immunarch
      -- [12/16] Parsing "/tmp/RtmpQIXHj9/MS6.tsv.gz" -- immunarch
      -- [13/16] Parsing "/tmp/RtmpQIXHj9/duckplyr1a7373d62ba9.duckdb" -- Warning in readLines(f, 1) : line 1 appears to contain an embedded nul
    Warning in readLines(f, 1) :
      incomplete final line found on '/tmp/RtmpQIXHj9/duckplyr1a7373d62ba9.duckdb'
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
      testthat 2025-02-01 04:53:14 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:14 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:14 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:14 DEBUG test_check: One stage sample size is 15.  Search bounds are 20 to 30.
      testthat 2025-02-01 04:53:14 TRACE test_check: Building grid - nTotal, nStage1: 264
      testthat 2025-02-01 04:53:14 TRACE test_check: Building grid - nTotal, nStage1, rTotal: 6710
      testthat 2025-02-01 04:53:14 TRACE test_check: Building grid - nTotal, nStage1, rTotal, rFutility: 26620
      testthat 2025-02-01 04:53:14 TRACE test_check: Building grid - nTotal, nStage1, rTotal, rFutility, rSuccess: 97571
      testthat 2025-02-01 04:53:14 TRACE test_check: Grid has 97571 rows.
      testthat 2025-02-01 04:53:14 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:14 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:14 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:14 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:14 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:14 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:14 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:14 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:14 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:14 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:14 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:14 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:14 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:14 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:14 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:14 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Entry
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
      testthat 2025-02-01 04:53:15 DEBUG test_check: Exit
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
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 41 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-xgboost.R:107:3'): boost_tree_offset() works with recipes ────
      predict(mod, xgtrain) (`actual`) not identical to predict(xgb_off, us_deaths)$.pred (`expected`).
      
           actual  | expected                 
       [1] 18862.6 - 14442.7  [1]             
       [2] 19066.5 - 14598.8  [2]             
       [3] 19277.9 - 14760.6  [3]             
       [4] 19589.9 - 14999.6  [4]             
       [5] 19855.2 - 15202.7  [5]             
       [6] 20072.9 - 15369.4  [6]             
       [7] 20321.9 - 15560.0  [7]             
       [8] 20445.3 - 15654.5  [8]             
       [9] 20530.8 - 15720.0  [9]             
      [10] 22075.8 - 16306.7  [10]            
       ... ...       ...      and 130 more ...
      ── Failure ('test-xgboost.R:137:3'): finalize works ────────────────────────────
      Expected `fit(tune::finalize_workflow(wf, param_grid), us_deaths)` to run without any errors.
      i Actually got a <simpleError> with text:
        [04:51:33] src/data/data.cc:461: Check failed: valid: Label contains NaN, infinity or a value too large.
        Stack trace:
          [bt] (0) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x72d4d) [0x7f42cc953d4d]
          [bt] (1) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x14dc26) [0x7f42cca2ec26]
          [bt] (2) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x14f443) [0x7f42cca30443]
          [bt] (3) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(XGDMatrixSetFloatInfo+0x7e) [0x7f42ccba2aee]
          [bt] (4) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(XGDMatrixSetInfo_R+0x609) [0x7f42cc94f879]
          [bt] (5) /opt/R/4.4.0/lib/R/lib/libR.so(+0x105a3e) [0x7f42e3fd4a3e]
          [bt] (6) /opt/R/4.4.0/lib/R/lib/libR.so(+0x1491f0) [0x7f42e40181f0]
          [bt] (7) /opt/R/4.4.0/lib/R/lib/libR.so(+0x15ccfa) [0x7f42e402bcfa]
          [bt] (8) /opt/R/4.4.0/lib/R/lib/libR.so(Rf_eval+0x17b) [0x7f42e402c06b]
        
        
      
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 41 ]
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
* Number of recursive dependencies: 140

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

