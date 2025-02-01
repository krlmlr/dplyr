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
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmp5Hi4k6/datacut_2025-02-01_075230.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmp5Hi4k6/rmarkdown-str154e214ddd92.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmp5Hi4k6/datacut_2025-02-01_075232.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmp5Hi4k6/rmarkdown-str154e23286edf.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmp5Hi4k6/datacut_2025-02-01_075233.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmp5Hi4k6/rmarkdown-str154e4834d72f.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmp5Hi4k6/datacut_2025-02-01_075234.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmp5Hi4k6/rmarkdown-str154e5403eeac.html 
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

# glmmTMB

<details>

* Version: 1.1.10
* GitHub: https://github.com/glmmTMB/glmmTMB
* Source code: https://github.com/cran/glmmTMB
* Date/Publication: 2024-09-26 22:50:02 UTC
* Number of recursive dependencies: 171

Run `revdepcheck::cloud_details(, "glmmTMB")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘AAAtest-all.R’
    Running the tests in ‘tests/AAAtest-all.R’ failed.
    Complete output:
      > if (require("testthat")) {
      +     pkg <- "glmmTMB"
      +     require(pkg, character.only=TRUE)
      +     print(sessionInfo())
      +     test_check(pkg, reporter="summary")
      +     print(warnings()) # TODO? catch most of these by expect_warning(..)
      + } else {
      +     warnings("Package 'testthat' not available, cannot run unit tests for package",
      + 	     sQuote(pkg))
      + }
      Loading required package: testthat
      Loading required package: glmmTMB
      R version 4.4.0 (2024-04-24)
      Platform: x86_64-pc-linux-gnu
      Running under: Ubuntu 24.04.1 LTS
      
      Matrix products: default
      BLAS:   /usr/lib/x86_64-linux-gnu/openblas-pthread/libblas.so.3 
      LAPACK: /usr/lib/x86_64-linux-gnu/openblas-pthread/libopenblasp-r0.3.26.so;  LAPACK version 3.12.0
      
      locale:
       [1] LC_CTYPE=C.UTF-8       LC_NUMERIC=C           LC_TIME=C.UTF-8       
       [4] LC_COLLATE=C           LC_MONETARY=C.UTF-8    LC_MESSAGES=C.UTF-8   
       [7] LC_PAPER=C.UTF-8       LC_NAME=C              LC_ADDRESS=C          
      [10] LC_TELEPHONE=C         LC_MEASUREMENT=C.UTF-8 LC_IDENTIFICATION=C   
      
      time zone: UTC
      tzcode source: system (glibc)
      
      attached base packages:
      [1] stats     graphics  grDevices utils     datasets  methods   base     
      
      other attached packages:
      [1] glmmTMB_1.1.10 testthat_3.2.3
      
      loaded via a namespace (and not attached):
       [1] nlme_3.1-164        cli_3.6.3           TH.data_1.1-3      
       [4] rlang_1.1.5         estimability_1.5.1  reformulas_0.4.0   
       [7] xtable_1.8-4        minqa_1.2.8         zoo_1.8-12         
      [10] TMB_1.9.16          lme4_1.1-36         brio_1.1.5         
      [13] grid_4.4.0          MASS_7.3-60.2       mvtnorm_1.3-3      
      [16] numDeriv_2016.8-1.1 multcomp_1.4-28     compiler_4.4.0     
      [19] codetools_0.2-20    sandwich_3.1-1      emmeans_1.10.7     
      [22] coda_0.19-4.1       Rcpp_1.0.14         mgcv_1.9-1         
      [25] lattice_0.22-6      nloptr_2.1.1        R6_2.5.1           
      [28] Rdpack_2.6.2        splines_4.4.0       rbibutils_2.3      
      [31] magrittr_2.0.3      Matrix_1.7-0        tools_4.4.0        
      [34] boot_1.3-30         survival_3.5-8     
      Anova: ...............
      VarCorr: ...............
      altopt: 
      alternative optimizers: S
      basics: .............SS.....S......S
      trickier examples: SS.SSSS........
      bootMer: 
      bootMer: SS
      checkRank: ................................................
      control: SS.
      diagnose: .S
      disp: ...
      downstream: S.....
      edgecases: 
      test edge cases: .
      env: 
      basic examples: ...
      families: .....................SSSSSSSSS..................................
      formulas: 
      formula parsing: ................
      mapequal: ........
      mapopt: 
      methods: ...............................S..........................................S..............S.......................
      misc: .
      offset: SSSSSSSSS
      predict: .....SSS
      Predict two-column response case: SS.................S..SSS....S..S...S.............S.......
      priors: ...........S
      propto: .....
      reml: ........
      rr: ......
       *** caught segfault ***
      address 0x55d0e5e9af90, cause 'memory not mapped'
      1Segmentation fault (core dumped)
    ```

## In both

*   checking re-building of vignette outputs ... WARNING
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘covstruct.rmd’ using rmarkdown
    --- finished re-building ‘covstruct.rmd’
    
    --- re-building ‘hacking.rmd’ using rmarkdown
    --- finished re-building ‘hacking.rmd’
    
    --- re-building ‘mcmc.rmd’ using rmarkdown
    --- finished re-building ‘mcmc.rmd’
    
    --- re-building ‘miscEx.rmd’ using rmarkdown
    --- finished re-building ‘miscEx.rmd’
    
    --- re-building ‘parallel.rmd’ using rmarkdown
    --- finished re-building ‘parallel.rmd’
    
    --- re-building ‘priors.rmd’ using rmarkdown
    ```

*   checking installed package size ... NOTE
    ```
      installed size is 97.8Mb
      sub-directories of 1Mb or more:
        doc             1.4Mb
        libs           91.3Mb
        test_data       2.3Mb
        vignette_data   2.1Mb
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
      path in readPNGBinary: /tmp/RtmpfMzGov/comparison/docs/w0030_s01_pWOZ_r01.png
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
      path in readPNGBinary: /tmp/RtmpfMzGov/comparison/docs/w0030_s01_pWOZ_r02.png
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
    
    Processing "/tmp/RtmpLKmTcA" ...
      -- [1/14] Parsing "/tmp/RtmpLKmTcA/A2-i129.tsv.gz" -- immunarch
      -- [2/14] Parsing "/tmp/RtmpLKmTcA/A2-i131.tsv.gz" -- immunarch
      -- [3/14] Parsing "/tmp/RtmpLKmTcA/A2-i132.tsv.gz" -- immunarch
      -- [4/14] Parsing "/tmp/RtmpLKmTcA/A2-i133.tsv.gz" -- immunarch
      -- [5/14] Parsing "/tmp/RtmpLKmTcA/A4-i191.tsv.gz" -- immunarch
      -- [6/14] Parsing "/tmp/RtmpLKmTcA/A4-i192.tsv.gz" -- immunarch
      -- [7/14] Parsing "/tmp/RtmpLKmTcA/MS1.tsv.gz" -- immunarch
      -- [8/14] Parsing "/tmp/RtmpLKmTcA/MS2.tsv.gz" -- immunarch
      -- [9/14] Parsing "/tmp/RtmpLKmTcA/MS3.tsv.gz" -- immunarch
      -- [10/14] Parsing "/tmp/RtmpLKmTcA/MS4.tsv.gz" -- immunarch
      -- [11/14] Parsing "/tmp/RtmpLKmTcA/MS5.tsv.gz" -- immunarch
      -- [12/14] Parsing "/tmp/RtmpLKmTcA/MS6.tsv.gz" -- immunarch
      -- [13/14] Parsing "/tmp/RtmpLKmTcA/metadata.txt" -- metadata
      -- [14/14] Parsing "/tmp/RtmpLKmTcA/pdf27a372bf4fe5" -- unsupported format, skipping
    Processing "/tmp/RtmpLKmTcA/duckplyr" ...
      -- [1/2] Parsing "/tmp/RtmpLKmTcA/duckplyr/duckplyr27a372485078.duckdb" -- Warning in readLines(f, 1) : line 1 appears to contain an embedded nul
    Warning in readLines(f, 1) :
      incomplete final line found on '/tmp/RtmpLKmTcA/duckplyr/duckplyr27a372485078.duckdb'
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
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: One stage sample size is 15.  Search bounds are 20 to 30.
      testthat 2025-02-01 07:56:59 TRACE test_check: Building grid - nTotal, nStage1: 264
      testthat 2025-02-01 07:56:59 TRACE test_check: Building grid - nTotal, nStage1, rTotal: 6710
      testthat 2025-02-01 07:56:59 TRACE test_check: Building grid - nTotal, nStage1, rTotal, rFutility: 26620
      testthat 2025-02-01 07:56:59 TRACE test_check: Building grid - nTotal, nStage1, rTotal, rFutility, rSuccess: 97571
      testthat 2025-02-01 07:56:59 TRACE test_check: Grid has 97571 rows.
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Entry
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
      testthat 2025-02-01 07:56:59 DEBUG test_check: Exit
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
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 42 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-xgboost.R:107:3'): boost_tree_offset() works with recipes ────
      predict(mod, xgtrain) (`actual`) not identical to predict(xgb_off, us_deaths)$.pred (`expected`).
      
           actual  | expected                 
       [1] 18862.6 - 25959.4  [1]             
       [2] 19066.5 - 26240.0  [2]             
       [3] 19277.9 - 26531.0  [3]             
       [4] 19589.9 - 28492.9  [4]             
       [5] 19855.2 - 28878.8  [5]             
       [6] 20072.9 - 29195.5  [6]             
       [7] 20321.9 - 28781.3  [7]             
       [8] 20445.3 - 28956.1  [8]             
       [9] 20530.8 - 29077.2  [9]             
      [10] 22075.8 - 29993.5  [10]            
       ... ...       ...      and 130 more ...
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 42 ]
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
      [ FAIL 6 | WARN 0 | SKIP 0 | PASS 1854 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-snip_fns.R:591:3'): the `snip_lowest()` function works ───────
      run_snip(snip_lowest(column = "a"), small_table) not equal to "1".
      1/1 mismatches
      x[1]: "4"
      y[1]: "1"
      ── Failure ('test-snip_fns.R:599:3'): the `snip_lowest()` function works ───────
      run_snip(snip_lowest(column = "c"), small_table) not equal to "2".
      1/1 mismatches
      x[1]: "3"
      y[1]: "2"
      ── Failure ('test-snip_fns.R:603:3'): the `snip_lowest()` function works ───────
      run_snip(snip_lowest(column = "d"), small_table) not equal to "108.34".
      1/1 mismatches
      x[1]: "283.94"
      y[1]: "108.34"
      ── Failure ('test-snip_fns.R:607:3'): the `snip_lowest()` function works ───────
      run_snip(snip_lowest(column = "e"), small_table) not equal to "0".
      1/1 mismatches
      x[1]: "FALSE"
      y[1]: "0"
      ── Failure ('test-snip_fns.R:627:3'): the `snip_highest()` function works ──────
      run_snip(snip_highest(column = "c"), small_table) not equal to "9".
      1/1 mismatches
      x[1]: "7"
      y[1]: "9"
      ── Failure ('test-snip_fns.R:635:3'): the `snip_highest()` function works ──────
      run_snip(snip_highest(column = "e"), small_table) not equal to "1".
      1/1 mismatches
      x[1]: "TRUE"
      y[1]: "1"
      
      [ FAIL 6 | WARN 0 | SKIP 0 | PASS 1854 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 1 marked UTF-8 string
    ```

# PubChemR

<details>

* Version: 2.1.3
* GitHub: https://github.com/selcukorkmaz/PubChemR
* Source code: https://github.com/cran/PubChemR
* Date/Publication: 2024-12-16 23:10:02 UTC
* Number of recursive dependencies: 67

Run `revdepcheck::cloud_details(, "PubChemR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘PubChemR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: get_all_sources
    > ### Title: Retrieve All Sources from PubChem
    > ### Aliases: get_all_sources
    > 
    > ### ** Examples
    > 
    > get_all_sources(
    +   domain = 'substance'
    + )
    Error in value[[3L]](cond) : 
      Failed to retrieve sources for the specified domain: c(Code = "PUGREST.ServerBusy", Message = "Too many requests or server too busy")
    Calls: get_all_sources ... tryCatch -> tryCatchList -> tryCatchOne -> <Anonymous>
    Execution halted
    ```

## In both

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
      > library(PubChemR)
      > 
      > # Functions used globally in package tests (testthat) ----
      > allSuccess <- function(object){
      +   all(unlist(lapply(object$result, "[[", "success")))
      + }
      > 
      > testRequest <- function(object, ...){
      +   test_that(paste0("pulling via '", request_args(object, "namespace"), "' is succesfull"), {
      +     expect_true(allSuccess(object))
      +   })
      + 
      +   test_that("prints output to the R Console", {
      +     expect_output(print(object))
      +   })
      + }
      > 
      > # Set 'skipTests' FALSE to run test codes. This is set TRUE to skip
      > # all tests on GitHub actions since some of PubChem requests were incomplete due to
      > # timeout and/or API related issues. BUILD & CHECK actions on GitHub returns error
      > # even if all tests were passed on local installations of R.
      > skipTests <- FALSE
      > 
      > if (!skipTests){
      +   test_check("PubChemR")
      + }
      The file has been saved to '/tmp/Rtmpar11C3/aspirin.json'
      The file has been saved to '/tmp/Rtmpar11C3/aspirin.json'
      The file has been saved to '/tmp/Rtmpar11C3/aspirin.json'
      The file has been saved to '/tmp/Rtmpar11C3/aspirin.json'
      The file has been saved to '/tmp/Rtmpar11C3/aspirin.sdf'
      
      Request failed [400]. Retrying in 3.7 seconds...
      Request failed [400]. Retrying in 3.2 seconds...
      SDF file saved successfully:
        File Name: 'aspirin_20250201_074901.sdf'
        Saved at: /tmp/Rtmpar11C3
      SDF file saved successfully:
        File Name: 'file.sdf'
        Saved at: /tmp/Rtmpar11C3
      'path' is not specified. Saving files into a temporary folder.
      SDF file saved successfully:
        File Name: 'file.sdf'
        Saved at: /tmp/Rtmpar11C3
      
       PubChem Substance Details (comment)
      
       Same as: <a href="http://pubchem.ncbi.nlm.nih.gov/summary/summary.cgi?sid=7847177">D00109</a>
       Is a reactant of enzyme EC: 3.1.1.55
      
      
       PubChem Substance Details (comment)
      
       Same as: <a href="http://pubchem.ncbi.nlm.nih.gov/summary/summary.cgi?sid=7847177">D00109</a>
       Is a reactant of enzyme EC: 3.1.1.55
      
      [ FAIL 4 | WARN 4 | SKIP 0 | PASS 200 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-get_aids.R:20:5'): pulling aids via 'name' is succesfull ─────
      allSuccess(object) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-get_aids.R:24:5'): AIDs succesfully returns 'data.frame' and 'list' ──
      {
          ...
      } is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      Backtrace:
          ▆
       1. └─PubChemR (local) toDataFrame(object) at test-get_aids.R:24:5
       2.   └─testthat::expect_true(...) at test-get_aids.R:5:3
      ── Failure ('test-get_properties.R:12:1'): pulling via 'cid' is succesfull ─────
      allSuccess(object) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-get_properties.R:24:3'): all requested properties returned successfully. ──
      all(propNamesRequested %in% propNamesReturned) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      
      [ FAIL 4 | WARN 4 | SKIP 0 | PASS 200 ]
      Error: Test failures
      Execution halted
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

# rWCVP

<details>

* Version: 1.2.4
* GitHub: https://github.com/matildabrown/rWCVP
* Source code: https://github.com/cran/rWCVP
* Date/Publication: 2023-02-16 15:20:02 UTC
* Number of recursive dependencies: 129

Run `revdepcheck::cloud_details(, "rWCVP")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(rWCVP)
      > 
      > test_check("rWCVP")
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      
      -- Exact matching 7 names --
      
      v Found 4 of 7 names
      
      -- Fuzzy matching 3 names --
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      ! No author information supplied - matching on taxon name only
      
      -- Exact matching  names --
      
      v Found 4 of  names
      
      -- Fuzzy matching 3 names --
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      
      -- Exact matching 7 names --
      
      v Found 4 of 7 names
      
      -- Matching complete! --
      
      v Matched 4 of 7 names
      i Exact (with author): 2
      i Exact (without author): 2
      i No match found: 3
      ! Names with multiple matches: 0
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `genus`, `species`, `infra_rank`, and `infra` columns
      ! No author information supplied - matching on taxon name only
      
      -- Exact matching  names --
      
      v Found 4 of  names
      
      -- Fuzzy matching 3 names --
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      
      -- Exact matching 7 names --
      
      v Found 4 of 7 names
      
      -- Fuzzy matching 3 names --
      
      i No area specified. Generating global summary.
      i Aggregating occurrence types across input area ("the world") - see `?wcvp_summary()` for details.
      i No area specified. Generating global summary.
      i Matches to input geography found at Continent (Level 1)
      i Aggregating occurrence types across input area ("ASIA-TROPICAL") - see `?wcvp_summary()` for details.
      [ FAIL 9 | WARN 1 | SKIP 0 | PASS 33 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-fuzzy_match.R:4:3'): edit match returns name within correct distance ──
      Error in `nchar(str2)`: invalid multibyte string, element 8
      Backtrace:
          ▆
       1. └─rWCVP:::edit_match_name_(name, lookup_data) at test-fuzzy_match.R:4:3
       2.   └─RecordLinkage::levenshteinSim(name, genus_lookup$taxon_name)
       3.     └─base::pmax(nchar(str1), nchar(str2))
      ── Error ('test-fuzzy_match.R:12:3'): edit match returns name within correct distance when genus mispelled ──
      Error in `nchar(str2)`: invalid multibyte string, element 8
      Backtrace:
          ▆
       1. └─rWCVP:::edit_match_name_(name, lookup_data) at test-fuzzy_match.R:12:3
       2.   └─RecordLinkage::levenshteinSim(name, genus_lookup$taxon_name)
       3.     └─base::pmax(nchar(str1), nchar(str2))
      ── Error ('test-fuzzy_match.R:18:3'): edit match returns expected output ───────
      <dplyr:::mutate_error/rlang_error/error/condition>
      Error in `mutate(.data, ..., .by = {
          {
              .by
          }
      }, .keep = .keep, .before = {
          {
              .before
          }
      }, .after = {
          {
              .after
          }
      })`: i In argument: `match_info = map(...)`.
      Caused by error in `map()`:
      i In index: 1.
      Caused by error in `nchar()`:
      ! invalid multibyte string, element 8
      ── Error ('test-fuzzy_match.R:27:3'): phonetic match returns expected output ───
      <dplyr:::mutate_error/rlang_error/error/condition>
      Error in `mutate(.data, ..., .by = {
          {
              .by
          }
      }, .keep = .keep, .before = {
          {
              .before
          }
      }, .after = {
          {
              .after
          }
      })`: i In argument: `match_similarity = levenshteinSim(.data$sanitised_, .data$taxon_name)`.
      Caused by error in `nchar()`:
      ! invalid multibyte string, element 7
      Backtrace:
           ▆
        1. ├─rWCVP::phonetic_match(match_data, lookup_data, name_col = "scientificName") at test-fuzzy_match.R:27:3
        2. │ └─... %>% ungroup()
        3. ├─dplyr::ungroup(.)
        4. ├─dplyr::mutate(...)
        5. ├─dplyr::rowwise(.)
        6. ├─dplyr::mutate(...)
        7. ├─dplyr:::mutate.data.frame(...)
        8. │ └─dplyr::mutate(...)
        9. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
       10. │     ├─base::withCallingHandlers(...)
       11. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
       12. │       └─mask$eval_all_mutate(quo)
       13. │         └─dplyr (local) eval()
       14. ├─RecordLinkage::levenshteinSim(.data$sanitised_, .data$taxon_name)
       15. │ └─base::pmax(nchar(str1), nchar(str2))
       16. └─base::.handleSimpleError(...)
       17.   └─dplyr (local) h(simpleError(msg, call))
       18.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
      ── Error ('test-fuzzy_match.R:36:3'): fuzzy match returns expected output ──────
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_fuzzy(match_data, lookup_data, name_col = "scientificName") at test-fuzzy_match.R:36:3
       2. │ └─... %>% filter(!is.na(.data$wcvp_id))
       3. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       4. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       5.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       6.     └─base::toupper(word)
      ── Error ('test-match_names.R:2:3'): match names with author returns expected output ──
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:2:3
       2. │ └─rWCVP::wcvp_match_fuzzy(...)
       3. │   └─... %>% filter(!is.na(.data$wcvp_id))
       4. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       5. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       6.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       7.     └─base::toupper(word)
      ── Error ('test-match_names.R:16:3'): match names without author returns expected output ──
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:16:3
       2. │ └─rWCVP::wcvp_match_fuzzy(...)
       3. │   └─... %>% filter(!is.na(.data$wcvp_id))
       4. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       5. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       6.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       7.     └─base::toupper(word)
      ── Error ('test-match_names.R:44:3'): match names without taxon name parts returns expected output ──
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:44:3
       2. │ └─rWCVP::wcvp_match_fuzzy(...)
       3. │   └─... %>% filter(!is.na(.data$wcvp_id))
       4. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       5. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       6.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       7.     └─base::toupper(word)
      ── Error ('test-match_names.R:58:3'): match names returns original columns ─────
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:58:3
       2. │ └─rWCVP::wcvp_match_fuzzy(...)
       3. │   └─... %>% filter(!is.na(.data$wcvp_id))
       4. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       5. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       6.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       7.     └─base::toupper(word)
      
      [ FAIL 9 | WARN 1 | SKIP 0 | PASS 33 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  9.2Mb
      sub-directories of 1Mb or more:
        data      6.5Mb
        extdata   2.4Mb
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 16 marked UTF-8 strings
    ```

# survivoR

<details>

* Version: 2.3.5
* GitHub: https://github.com/doehm/survivoR
* Source code: https://github.com/cran/survivoR
* Date/Publication: 2025-01-09 00:30:02 UTC
* Number of recursive dependencies: 96

Run `revdepcheck::cloud_details(, "survivoR")` for more info

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
      > library(survivoR)
      > 
      > test_check("survivoR")
      
      Attaching package: 'dplyr'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      The following objects are masked from 'package:stats':
      
          filter, lag
      
      The following objects are masked from 'package:base':
      
          intersect, setdiff, setequal, union
      
      [ FAIL 3 | WARN 0 | SKIP 2 | PASS 131 ]
      
      ══ Skipped tests (2) ═══════════════════════════════════════════════════════════
      • empty test (2): 'tests-functions.R:78:1', 'tests-functions.R:85:1'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('tests-functions.R:25:3'): add_winner works ────────────────────────
      pull(...) (`actual`) not equal to 69 (`expected`).
      
        `actual`: 11.0
      `expected`: 69.0
      ── Failure ('tests-functions.R:39:3'): add_jury works ──────────────────────────
      pull(...) (`actual`) not equal to 574 (`expected`).
      
        `actual`: 172.0
      `expected`: 574.0
      ── Failure ('tests-functions.R:53:3'): add_finalist works ──────────────────────
      pull(...) (`actual`) not equal to 176 (`expected`).
      
        `actual`:  37.0
      `expected`: 176.0
      
      [ FAIL 3 | WARN 0 | SKIP 2 | PASS 131 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 397 marked UTF-8 strings
    ```

# TraMineR

<details>

* Version: 2.2-11
* GitHub: NA
* Source code: https://github.com/cran/TraMineR
* Date/Publication: 2024-12-08 11:40:02 UTC
* Number of recursive dependencies: 30

Run `revdepcheck::cloud_details(, "TraMineR")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is  5.4Mb
      sub-directories of 1Mb or more:
        R      1.5Mb
        help   1.5Mb
        libs   1.1Mb
    ```

## In both

*   checking re-building of vignette outputs ... WARNING
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘TraMineR-state-sequence.Rnw’ using Sweave
    
    TraMineR stable version 2.2-11 (Built: 2025-02-01)
    Website: http://traminer.unige.ch
    Please type 'citation("TraMineR")' for citation information.
    
     [>] 6 distinct states appear in the data: 
         1 = FE
         2 = HE
         3 = employment
         4 = joblessness
         5 = school
         6 = training
     [>] state coding:
           [alphabet]  [label]     [long label] 
         1  employment  employment  employment
         2  FE          FE          FE
         3  HE          HE          HE
         4  joblessness joblessness joblessness
         5  school      school      school
         6  training    training    training
     [>] 712 sequences in the data set
     [>] min/max sequence length: 70/70
     [>] 712 sequences with 6 distinct states
     [>] Computing sm with seqcost using  TRATE
     [>] creating substitution-cost matrix using transition rates ...
     [>] computing transition probabilities for states employment/FE/HE/joblessness/school/training ...
     [>] 490 distinct  sequences 
     [>] min/max sequence lengths: 70/70
     [>] computing distances using the OM metric
     [>] elapsed time: 1.669 secs
     [>] state coding:
           [alphabet]  [label]  [long label] 
         1  employment  EM       Employment
         2  FE          FE       Further education
         3  HE          HE       Higher education
         4  joblessness JL       Joblessness
         5  school      SC       School
         6  training    TR       Training
     [>] 712 sequences in the data set
     [>] min/max sequence length: 70/70
     [>] state coding:
           [alphabet]  [label]  [long label] 
         1  employment  EM       Employment
         2  FE          FE       Further education
         3  HE          HE       Higher education
         4  joblessness JL       Joblessness
         5  school      SC       School
         6  training    TR       Training
     [>] sum of weights: 711.57 - min/max: 0.13/4.46
     [>] 712 sequences in the data set
     [>] min/max sequence length: 70/70
     [>] 712 sequences with 6 distinct states
     [>] creating a 'sm' with a substitution cost of 2
     [>] creating 6x6 substitution-cost matrix using 2 as constant value
     [>] 490 distinct  sequences 
     [>] min/max sequence lengths: 70/70
     [>] computing distances using the LCS metric
     [>] elapsed time: 1.541 secs
     [>] 712 sequences with 6 distinct states
     [>] creating a 'sm' with a substitution cost of 2
     [>] creating 6x6 substitution-cost matrix using 2 as constant value
     [>] the most frequent sequence appears 16 time(s)
     [>] using reference sequence (SC,24)-(HE,46)
     [>] 490 distinct  sequences 
     [>] min/max sequence lengths: 70/70
     [>] computing distances using the LCS metric
     [>] elapsed time: 0.306 secs
     [>] computing transition probabilities for states EM/FE/HE/JL/SC/TR ...
     [>] 4 distinct states appear in the data: 
         1 = A
         2 = B
         3 = C
         4 = D
     [>] state coding:
           [alphabet]  [label]  [long label] 
         1  A           A        A
         2  B           B        B
         3  C           C        C
         4  D           D        D
     [>] 9 sequences in the data set
     [>] min/max sequence length: 12/12
      Sequence             
    1 (EM,4)-(TR,2)-(EM,64)
     [>] computing state distribution for 4 sequences ...
     [>] creating substitution-cost matrix using transition rates ...
     [>] computing transition probabilities for states EM/FE/HE/JL/SC/TR ...
     [>] 712 sequences with 6 distinct states
     [>] checking 'sm' (size and triangle inequality)
     [>] the most frequent sequence appears 16 time(s)
     [>] using reference sequence (SC,24)-(HE,46)
     [>] 490 distinct  sequences 
     [>] min/max sequence lengths: 70/70
     [>] computing distances using the OM metric
     [>] elapsed time: 0.305 secs
     [>] 712 sequences with 6 distinct states
     [>] creating a 'sm' with a substitution cost of 2
     [>] creating 6x6 substitution-cost matrix using 2 as constant value
     [>] the most frequent sequence appears 16 time(s)
     [>] using reference sequence (SC,24)-(HE,46)
     [>] 490 distinct  sequences 
     [>] min/max sequence lengths: 70/70
     [>] computing distances using the LCS metric
     [>] elapsed time: 0.411 secs
     [>] 712 sequences with 6 distinct states
     [>] the most frequent sequence appears 16 time(s)
     [>] using reference sequence (SC,24)-(HE,46)
     [>] 490 distinct  sequences 
     [>] min/max sequence lengths: 70/70
     [>] computing distances using the LCP metric
     [>] elapsed time: 0.295 secs
     [>] 712 sequences with 6 distinct states
     [>] creating a 'sm' with the costs derived from the transition rates
     [>] creating time varying substitution-cost matrix using transition rates ...
     [>] computing time varying transition probabilities for states EM/FE/HE/JL/SC/TR ...
     [>] the most frequent sequence appears 16 time(s)
     [>] using reference sequence (SC,24)-(HE,46)
     [>] 490 distinct  sequences 
     [>] min/max sequence lengths: 70/70
     [>] computing distances using the DHD metric
     [>] elapsed time: 0.369 secs
     [>] 712 sequences with 6 distinct states
     [>] creating a 'sm' with a single substitution cost of 1
     [>] creating 6x6 substitution-cost matrix using 1 as constant value
     [>] the most frequent sequence appears 16 time(s)
     [>] using reference sequence (SC,24)-(HE,46)
     [>] 490 distinct  sequences 
     [>] min/max sequence lengths: 70/70
     [>] computing distances using the HAM metric
     [>] elapsed time: 0.294 secs
     [>] creating substitution-cost matrix using transition rates ...
     [>] computing transition probabilities for states EM/FE/HE/JL/SC/TR ...
     [>] 712 sequences with 6 distinct states
     [>] checking 'sm' (size and triangle inequality)
     [>] 490 distinct  sequences 
     [>] min/max sequence lengths: 70/70
     [>] computing distances using the OM metric
     [>] elapsed time: 1.539 secs
     [>] number of objects (sum of weights): 711.57
     [>] max. distance: 139.84
     [>] neighborhood radius: 13.98
     [>] 1 representative(s) selected
     [>] 490 distinct sequence(s)
     [>] number of objects (sum of weights): 429.56
     [>] max. distance: 139.84
     [>] neighborhood radius: 13.98
     [>] 5 representative(s) selected, coverage=29% (threshold=25%)
     [>] 339 distinct sequence(s)
     [>] number of objects (sum of weights): 282.01
     [>] max. distance: 139.84
     [>] neighborhood radius: 13.98
     [>] 1 representative(s) selected, coverage=29% (threshold=25%)
     [>] 178 distinct sequence(s)
     [>] number of objects (sum of weights): 429.56
     [>] max. distance: 139.84
     [>] neighborhood radius: 13.98
     [>] 5 representative(s) selected, coverage=29% (threshold=25%)
     [>] 339 distinct sequence(s)
     [>] number of objects (sum of weights): 282.01
     [>] max. distance: 139.84
     [>] neighborhood radius: 13.98
     [>] 1 representative(s) selected, coverage=29% (threshold=25%)
     [>] 178 distinct sequence(s)
     [>] number of objects (sum of weights): 226.47
     [>] max. distance: 139.84
     [>] neighborhood radius: 13.98
     [>] 2 representative(s) selected, coverage=41% (threshold=35%)
     [>] 165 distinct sequence(s)
     [>] number of objects (sum of weights): 189.06
     [>] max. distance: 139.84
     [>] neighborhood radius: 13.98
     [>] 1 representative(s) selected, coverage=46% (threshold=35%)
     [>] 88 distinct sequence(s)
     [>] number of objects (sum of weights): 196.82
     [>] max. distance: 139.84
     [>] neighborhood radius: 13.98
     [>] 4 representative(s) selected, coverage=39% (threshold=35%)
     [>] 148 distinct sequence(s)
     [>] number of objects (sum of weights): 99.22
     [>] max. distance: 139.84
     [>] neighborhood radius: 13.98
     [>] 5 representative(s) selected, coverage=38% (threshold=35%)
     [>] 89 distinct sequence(s)
     [>] number of objects (sum of weights): 226.47
     [>] max. distance: 139.84
     [>] neighborhood radius: 13.98
     [>] 2 representative(s) selected, coverage=41% (threshold=35%)
     [>] 165 distinct sequence(s)
     [>] number of objects (sum of weights): 189.06
     [>] max. distance: 139.84
     [>] neighborhood radius: 13.98
     [>] 1 representative(s) selected, coverage=46% (threshold=35%)
     [>] 88 distinct sequence(s)
     [>] number of objects (sum of weights): 196.82
     [>] max. distance: 139.84
     [>] neighborhood radius: 13.98
     [>] 4 representative(s) selected, coverage=39% (threshold=35%)
     [>] 148 distinct sequence(s)
     [>] number of objects (sum of weights): 99.22
     [>] max. distance: 139.84
     [>] neighborhood radius: 13.98
     [>] 5 representative(s) selected, coverage=38% (threshold=35%)
     [>] 89 distinct sequence(s)
    Error: processing vignette 'TraMineR-state-sequence.Rnw' failed with diagnostics:
    Running 'texi2dvi' on 'TraMineR-state-sequence.tex' failed.
    LaTeX errors:
    ! LaTeX Error: File `thumbpdf.sty' not found.
    
    Type X to quit or <RETURN> to proceed,
    or enter new name. (Default extension: sty)
    
    ! Emergency stop.
    <read *> 
             
    l.9 ^^M
           
    !  ==> Fatal error occurred, no output PDF file produced!
    --- failed re-building 'TraMineR-state-sequence.Rnw'
    
    SUMMARY: processing the following file failed:
      'TraMineR-state-sequence.Rnw'
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# understandBPMN

<details>

* Version: 1.1.1
* GitHub: NA
* Source code: https://github.com/cran/understandBPMN
* Date/Publication: 2019-09-27 11:30:03 UTC
* Number of recursive dependencies: 102

Run `revdepcheck::cloud_details(, "understandBPMN")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(understandBPMN)
      > 
      > test_check("understandBPMN")
      [ FAIL 3 | WARN 1 | SKIP 0 | PASS 301 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('testMetrics.R:257:3'): Cross connectivity ─────────────────────────
      round(...) not equal to 0.1975309.
      1/1 mismatches
      [1] 0.131 - 0.198 == -0.0667
      ── Failure ('testMetrics.R:258:3'): Cross connectivity ─────────────────────────
      round(...) not equal to 0.1454408.
      1/1 mismatches
      [1] 0.0815 - 0.145 == -0.0639
      ── Failure ('testMetrics.R:261:3'): Cross connectivity ─────────────────────────
      cross_connectivity(doc_simple, generate_new_path_log = TRUE) not equal to 0.5.
      1/1 mismatches
      [1] 0.25 - 0.5 == -0.25
      
      [ FAIL 3 | WARN 1 | SKIP 0 | PASS 301 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking package subdirectories ... NOTE
    ```
    Problems with news in ‘NEWS.md’:
    No news entries found.
    ```

*   checking LazyData ... NOTE
    ```
      'LazyData' is specified without a 'data' directory
    ```

