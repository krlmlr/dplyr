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
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpcxgURY/datacut_2025-02-01_054214.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpcxgURY/rmarkdown-str1334236d10c8.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpcxgURY/datacut_2025-02-01_054217.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpcxgURY/rmarkdown-str13346230e5b8.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpcxgURY/datacut_2025-02-01_054219.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpcxgURY/rmarkdown-str13345024a7e8.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpcxgURY/datacut_2025-02-01_054219.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpcxgURY/rmarkdown-str1334654d78b9.html 
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
      path in readPNGBinary: /tmp/RtmpuobuYe/comparison/docs/w0030_s01_pWOZ_r01.png
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
      path in readPNGBinary: /tmp/RtmpuobuYe/comparison/docs/w0030_s01_pWOZ_r02.png
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
    
    Processing "/tmp/Rtmp0vODF3" ...
      -- [1/14] Parsing "/tmp/Rtmp0vODF3/A2-i129.tsv.gz" -- immunarch
      -- [2/14] Parsing "/tmp/Rtmp0vODF3/A2-i131.tsv.gz" -- immunarch
      -- [3/14] Parsing "/tmp/Rtmp0vODF3/A2-i132.tsv.gz" -- immunarch
      -- [4/14] Parsing "/tmp/Rtmp0vODF3/A2-i133.tsv.gz" -- immunarch
      -- [5/14] Parsing "/tmp/Rtmp0vODF3/A4-i191.tsv.gz" -- immunarch
      -- [6/14] Parsing "/tmp/Rtmp0vODF3/A4-i192.tsv.gz" -- immunarch
      -- [7/14] Parsing "/tmp/Rtmp0vODF3/MS1.tsv.gz" -- immunarch
      -- [8/14] Parsing "/tmp/Rtmp0vODF3/MS2.tsv.gz" -- immunarch
      -- [9/14] Parsing "/tmp/Rtmp0vODF3/MS3.tsv.gz" -- immunarch
      -- [10/14] Parsing "/tmp/Rtmp0vODF3/MS4.tsv.gz" -- immunarch
      -- [11/14] Parsing "/tmp/Rtmp0vODF3/MS5.tsv.gz" -- immunarch
      -- [12/14] Parsing "/tmp/Rtmp0vODF3/MS6.tsv.gz" -- immunarch
      -- [13/14] Parsing "/tmp/Rtmp0vODF3/metadata.txt" -- metadata
      -- [14/14] Parsing "/tmp/Rtmp0vODF3/pdf1a7344770bd2" -- unsupported format, skipping
    Processing "/tmp/Rtmp0vODF3/duckplyr" ...
      -- [1/2] Parsing "/tmp/Rtmp0vODF3/duckplyr/duckplyr1a73734dddf7.duckdb" -- Warning in readLines(f, 1) : line 1 appears to contain an embedded nul
    Warning in readLines(f, 1) :
      incomplete final line found on '/tmp/Rtmp0vODF3/duckplyr/duckplyr1a73734dddf7.duckdb'
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
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: One stage sample size is 15.  Search bounds are 20 to 30.
      testthat 2025-02-01 05:42:38 TRACE test_check: Building grid - nTotal, nStage1: 264
      testthat 2025-02-01 05:42:38 TRACE test_check: Building grid - nTotal, nStage1, rTotal: 6710
      testthat 2025-02-01 05:42:38 TRACE test_check: Building grid - nTotal, nStage1, rTotal, rFutility: 26620
      testthat 2025-02-01 05:42:38 TRACE test_check: Building grid - nTotal, nStage1, rTotal, rFutility, rSuccess: 97571
      testthat 2025-02-01 05:42:38 TRACE test_check: Grid has 97571 rows.
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Entry
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
      testthat 2025-02-01 05:42:38 DEBUG test_check: Exit
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
       [1] 18862.6 - 23329.9  [1]             
       [2] 19066.5 - 23582.1  [2]             
       [3] 19277.9 - 23843.6  [3]             
       [4] 19589.9 - 24229.5  [4]             
       [5] 19855.2 - 24557.6  [5]             
       [6] 20072.9 - 24826.9  [6]             
       [7] 20321.9 - 25134.8  [7]             
       [8] 20445.3 - 25287.4  [8]             
       [9] 20530.8 - 25393.2  [9]             
      [10] 22075.8 - 25442.8  [10]            
       ... ...       ...      and 130 more ...
      ── Failure ('test-xgboost.R:137:3'): finalize works ────────────────────────────
      Expected `fit(tune::finalize_workflow(wf, param_grid), us_deaths)` to run without any errors.
      i Actually got a <simpleError> with text:
        [05:45:37] src/data/data.cc:461: Check failed: valid: Label contains NaN, infinity or a value too large.
        Stack trace:
          [bt] (0) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x72d4d) [0x7fc9219e5d4d]
          [bt] (1) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x14dc26) [0x7fc921ac0c26]
          [bt] (2) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(+0x14f443) [0x7fc921ac2443]
          [bt] (3) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(XGDMatrixSetFloatInfo+0x7e) [0x7fc921c34aee]
          [bt] (4) /usr/local/lib/R/site-library/xgboost/libs/xgboost.so(XGDMatrixSetInfo_R+0x609) [0x7fc9219e1879]
          [bt] (5) /opt/R/4.4.0/lib/R/lib/libR.so(+0x105a3e) [0x7fc939066a3e]
          [bt] (6) /opt/R/4.4.0/lib/R/lib/libR.so(+0x1491f0) [0x7fc9390aa1f0]
          [bt] (7) /opt/R/4.4.0/lib/R/lib/libR.so(+0x15ccfa) [0x7fc9390bdcfa]
          [bt] (8) /opt/R/4.4.0/lib/R/lib/libR.so(Rf_eval+0x17b) [0x7fc9390be06b]
        
        
      
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

