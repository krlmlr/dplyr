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
      [ FAIL 3 | WARN 0 | SKIP 114 | PASS 672 ]
      
      ══ Skipped tests (114) ═════════════════════════════════════════════════════════
      • On CRAN (114): 'test-admiral_options.R:9:3', 'test-call_derivation.R:112:3',
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
        'test-derive_merged.R:513:3', 'test-derive_merged.R:659:3',
        'test-derive_param_bmi.R:114:3', 'test-derive_param_bsa.R:305:3',
        'test-derive_param_computed.R:477:3', 'test-derive_param_computed.R:514:3',
        'test-derive_param_computed.R:531:3', 'test-derive_param_computed.R:552:3',
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
        'test-derive_vars_transposed.R:66:3', 'test-dt_level.R:42:3',
        'test-dt_level.R:49:3', 'test-duplicates.R:43:3',
        'test-get_summary_records.R:25:3', 'test-period_dataset.R:128:3',
        'test-period_dataset.R:151:3', 'test-period_dataset.R:174:3',
        'test-period_dataset.R:321:3', 'test-period_dataset.R:348:3',
        'test-roxygen2.R:20:3', 'test-transform_range.R:28:3',
        'test-transform_range.R:40:3', 'test-user_helpers.R:16:3',
        'test-user_helpers.R:41:3', 'test-user_utils.R:250:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-derive_merged.R:646:3'): derive_var_merged_summary Test 26: error incorrect 'one-to-one' ──
      `derive_vars_merged(...)` did not throw the expected error.
      ── Failure ('test-derive_vars_transposed.R:111:3'): derive_vars_transposed Test 4: error if `relationship` is unexpected ──
      ``%>%`(...)` did not throw the expected error.
      ── Failure ('test-derive_vars_transposed.R:124:3'): derive_vars_transposed Test 4: error if `relationship` is unexpected ──
      ``%>%`(...)` did not throw the expected error.
      
      [ FAIL 3 | WARN 0 | SKIP 114 | PASS 672 ]
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

# BaHZING

<details>

* Version: 1.0.0
* GitHub: NA
* Source code: https://github.com/cran/BaHZING
* Date/Publication: 2025-02-17 11:20:07 UTC
* Number of recursive dependencies: 95

Run `revdepcheck::cloud_details(, "BaHZING")` for more info

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
      > library(BaHZING)
      Loading required package: rjags
      Loading required package: coda
      Linked to JAGS 4.3.2
      Loaded modules: basemod,bugs
      > 
      > test_check("BaHZING")
      Starting 2 test processes
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 13 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-Format_BaHZING.R:30:3'): If species level not present, create species column ──
      Error: Error evaluating duckdb query: Out of Memory Error: could not allocate block of size 256.0 KiB (4.7 GiB/4.7 GiB used)
      Backtrace:
          ▆
       1. └─BaHZING::Format_BaHZING(PS) at test-Format_BaHZING.R:30:3
       2.   └─base::`rownames<-`(`*tmp*`, value = table$id)
       3.     ├─base::`row.names<-`(`*tmp*`, value = value)
       4.     └─base::`row.names<-.data.frame`(`*tmp*`, value = value)
       5.       └─base::`.rowNamesDF<-`(x, value = value)
       6.         └─base::.row_names_info(x, 2L)
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 13 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  7.7Mb
      sub-directories of 1Mb or more:
        data   7.5Mb
    ```

# cytominer

<details>

* Version: 0.2.2
* GitHub: https://github.com/cytomining/cytominer
* Source code: https://github.com/cran/cytominer
* Date/Publication: 2020-05-09 05:00:03 UTC
* Number of recursive dependencies: 126

Run `revdepcheck::cloud_details(, "cytominer")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > Sys.setenv("R_TESTS" = "")
      > 
      > library(testthat)
      > library(cytominer)
      
      Attaching package: 'cytominer'
      
      The following object is masked from 'package:stats':
      
          aggregate
      
      The following object is masked from 'package:base':
      
          transform
      
      > 
      > test_check("cytominer")
      ERROR [2025-04-27 16:13:26] undefined operation 'dummy'
      ERROR [2025-04-27 16:13:39] undefined operation 'dummy'
      ERROR [2025-04-27 16:13:40] undefined operation 'dummy'
      ERROR [2025-04-27 16:13:40] undefined operation 'dummy'
      ERROR [2025-04-27 16:13:44] undefined operation 'dummy'
      [ FAIL 1 | WARN 19 | SKIP 0 | PASS 46 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-cytominer.R:316:3'): cytominer can process dataset with a CellProfiler schema ──
      Error in `dplyr::compute(.)`: Can't convert columns of class <integer64> to relational. Affected
      column: `g_plate`.
      Backtrace:
           ▆
        1. ├─cytominer::normalize(...) at test-cytominer.R:316:3
        2. │ └─sample %<>% dplyr::compute()
        3. ├─dplyr::compute(.)
        4. └─dplyr:::compute.data.frame(.)
        5.   ├─dplyr:::rel_try(...)
        6.   │ └─rlang::try_fetch(rel, error = identity)
        7.   │   ├─base::tryCatch(...)
        8.   │   │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        9.   │   │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       10.   │   │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
       11.   │   └─base::withCallingHandlers(...)
       12.   └─dplyr:::duckdb_rel_from_df(x)
       13.     └─dplyr:::check_df_for_rel(df, call)
       14.       └─cli::cli_abort(...)
       15.         └─rlang::abort(...)
      
      [ FAIL 1 | WARN 19 | SKIP 0 | PASS 46 ]
      Error: Test failures
      In addition: Warning message:
      call dbDisconnect() when finished working with a connection 
      Execution halted
    ```

## In both

*   checking LazyData ... NOTE
    ```
      'LazyData' is specified without a 'data' directory
    ```

# datacutr

<details>

* Version: 0.2.3
* GitHub: https://github.com/pharmaverse/datacutr
* Source code: https://github.com/cran/datacutr
* Date/Publication: 2025-02-03 09:20:02 UTC
* Number of recursive dependencies: 119

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
      /usr/local/bin/pandoc +RTS -K512m -RTS /tmp/Rtmpqk7Pst/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmpqk7Pst/datacut_2025-04-27_161248.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmpqk7Pst/rmarkdown-str133516da7e3f.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS /tmp/Rtmpqk7Pst/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmpqk7Pst/datacut_2025-04-27_161250.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmpqk7Pst/rmarkdown-str13353172a5c6.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS /tmp/Rtmpqk7Pst/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmpqk7Pst/datacut_2025-04-27_161251.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmpqk7Pst/rmarkdown-str13354e8d77a4.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS /tmp/Rtmpqk7Pst/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/Rtmpqk7Pst/datacut_2025-04-27_161252.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/Rtmpqk7Pst/rmarkdown-str1335778edb22.html 
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

# DrugExposureDiagnostics

<details>

* Version: 1.1.2
* GitHub: https://github.com/darwin-eu/DrugExposureDiagnostics
* Source code: https://github.com/cran/DrugExposureDiagnostics
* Date/Publication: 2025-03-13 15:20:07 UTC
* Number of recursive dependencies: 129

Run `revdepcheck::cloud_details(, "DrugExposureDiagnostics")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(DrugExposureDiagnostics)
      > 
      > test_check("DrugExposureDiagnostics")
      
      Attaching package: 'plotly'
      
      The following object is masked from 'package:ggplot2':
      
          last_plot
      
      The following object is masked from 'package:stats':
      
          filter
      
      The following object is masked from 'package:graphics':
      
          layout
      
      
      Attaching package: 'dplyr'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      The following objects are masked from 'package:stats':
      
          filter, lag
      
      The following objects are masked from 'package:base':
      
          intersect, setdiff, setequal, union
      
      population after earliestStartDate smaller than sample, sampling ignored
      i The following estimates will be computed:
      * daily_dose: count_missing, percentage_missing, mean, sd, q05, q25, median, q75, q95, min, max
      ! Table is collected to memory as not all requested estimates are supported on the database side
      > Start summary of data, at 2025-04-27 16:17:26.557694
      ===============>--------------- 2/4 group-strata combinations @ 2025-04-27 16...
      ==============================> 4/4 group-strata combinations @ 2025-04-27 16...
      v Summary finished, at 2025-04-27 16:17:29.662689
      population after earliestStartDate smaller than sample, sampling ignored
      population after earliestStartDate smaller than sample, sampling ignored
      i The following estimates will be computed:
      * daily_dose: count_missing, percentage_missing, mean, sd, q05, q25, median, q75, q95, min, max
      ! Table is collected to memory as not all requested estimates are supported on the database side
      > Start summary of data, at 2025-04-27 16:18:05.998774
      i The following estimates will be computed:
      * daily_dose: count_missing, percentage_missing, mean, sd, q05, q25, median, q75, q95, min, max
      ! Table is collected to memory as not all requested estimates are supported on the database side
      > Start summary of data, at 2025-04-27 16:18:15.036716
      ===============>--------------- 2/4 group-strata combinations @ 2025-04-27 16...
      ==============================> 4/4 group-strata combinations @ 2025-04-27 16...
      v Summary finished, at 2025-04-27 16:18:18.195188
      i The following estimates will be computed:
      * daily_dose: count_missing, percentage_missing, mean, sd, q05, q25, median, q75, q95, min, max
      ! Table is collected to memory as not all requested estimates are supported on the database side
      > Start summary of data, at 2025-04-27 16:18:25.573732
      ===============>--------------- 2/4 group-strata combinations @ 2025-04-27 16...
      ==============================> 4/4 group-strata combinations @ 2025-04-27 16...
      v Summary finished, at 2025-04-27 16:18:28.602043
      Progress: getting descendant concepts of ingredient (1125315) used in database
      Progress: getting descendant concepts of ingredient
      Progress: adding drug strength info
      Progress: limiting to concepts in the db
      Progress: adding concept names
      Overall time taken: 0 minutes and 1 seconds
      Time taken: 0 minutes and 1 seconds
      Progress: getting drug records for ingredient
      Time taken: 0 minutes and 0 seconds
      Progress: get concepts used
      Time taken: 0 minutes and 0 seconds
      Progress: sampling drug records
      population after earliestStartDate smaller than sample, sampling ignored
      Time taken: 0 minutes and 0 seconds
      Progress: check drugsMissing
      Time taken: 0 minutes and 1 seconds
      Progress: check ExposureDuration
      Time taken: 0 minutes and 0 seconds
      Progress: check drugQuantity
      Time taken: 0 minutes and 0 seconds
      Finished
      i The following estimates will be computed:
      * daily_dose: count_missing, percentage_missing, mean, sd, q05, q25, median, q75, q95, min, max
      ! Table is collected to memory as not all requested estimates are supported on the database side
      > Start summary of data, at 2025-04-27 16:19:09.530241
      population after earliestStartDate smaller than sample, sampling ignored
      population after earliestStartDate smaller than sample, sampling ignored
      population after earliestStartDate smaller than sample, sampling ignored
      population after earliestStartDate smaller than sample, sampling ignored
      population after earliestStartDate smaller than sample, sampling ignored
      i The following estimates will be computed:
      * daily_dose: count_missing, percentage_missing, mean, sd, q05, q25, median, q75, q95, min, max
      ! Table is collected to memory as not all requested estimates are supported on the database side
      > Start summary of data, at 2025-04-27 16:19:58.567987
      population after earliestStartDate smaller than sample, sampling ignored
      population after earliestStartDate smaller than sample, sampling ignored
      population after earliestStartDate smaller than sample, sampling ignored
      population after earliestStartDate smaller than sample, sampling ignored
      population after earliestStartDate smaller than sample, sampling ignored
      population after earliestStartDate smaller than sample, sampling ignored
      population after earliestStartDate smaller than sample, sampling ignored
      population after earliestStartDate smaller than sample, sampling ignored
      population after earliestStartDate smaller than sample, sampling ignored
      population after earliestStartDate smaller than sample, sampling ignored
      i The following estimates will be computed:
      * daily_dose: count_missing, percentage_missing, mean, sd, q05, q25, median, q75, q95, min, max
      ! Table is collected to memory as not all requested estimates are supported on the database side
      > Start summary of data, at 2025-04-27 16:21:01.876991
      Time taken: 0 minutes and 0 seconds
      testMessage
      [ FAIL 4 | WARN 99 | SKIP 5 | PASS 341 ]
      
      ══ Skipped tests (5) ═══════════════════════════════════════════════════════════
      • Skipping (1): 'test-shiny.R:2:3'
      • Sys.getenv("TESTDB_USER99") == "" is TRUE (1): 'test-SyntheaSqlServer.R:5:3'
      • does not work with latest omopgenerics (3): 'test-runBenchmark.R:2:3',
        'test-runBenchmark.R:36:3', 'test-runBenchmark.R:47:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-SummariseChecks.R:210:3'): summariseChecks partial inputs with combination of not empty and empty ingredient: summary of missing and quantity and dose ──
      Error in `dplyr::compute(dplyr::mutate(dplyr::distinct(dplyr::select(table, 
          dplyr::all_of(strataGroupk))), strata_id = dplyr::row_number()))`: {"exception_type":"Catalog","exception_message":"Failed to create table 'duckplyr_UL9OoB2eBn': Table with name \"duckplyr_UL9OoB2eBn\" already exists!","type":"Table","name":"duckplyr_UL9OoB2eBn","error_subtype":"ENTRY_ALREADY_EXISTS"}
      Backtrace:
           ▆
        1. ├─DrugExposureDiagnostics::executeChecks(...) at test-SummariseChecks.R:210:3
        2. │ ├─base::tryCatch(...)
        3. │ │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        4. │ │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        5. │ │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        6. │ └─DrugExposureDiagnostics:::executeChecksSingleIngredient(...)
        7. │   ├─... %>% dplyr::collect()
        8. │   └─DrugExposureDiagnostics:::checkDrugDose(...)
        9. │     ├─... %>% ...
       10. │     └─DrugUtilisation::summariseDoseCoverage(...)
       11. │       ├─dplyr::mutate(...)
       12. │       ├─dplyr::filter(...)
       13. │       └─PatientProfiles::summariseResult(...)
       14. │         ├─PatientProfiles:::orderVariables(...)
       15. │         │ ├─dplyr::select(...)
       16. │         │ ├─dplyr::arrange(...)
       17. │         │ ├─dplyr::left_join(...)
       18. │         │ └─dplyr::left_join(res, orderVars, by = c("variable_name"))
       19. │         └─PatientProfiles:::summariseInternal(...)
       20. │           ├─dplyr::compute(...)
       21. │           └─dplyr:::compute.data.frame(...)
       22. │             ├─dplyr:::rel_try(...)
       23. │             │ └─rlang::try_fetch(rel, error = identity)
       24. │             │   ├─base::tryCatch(...)
       25. │             │   │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       26. │             │   │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       27. │             │   │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
       28. │             │   └─base::withCallingHandlers(...)
       29. │             └─duckdb$rel_to_table(rel, schema_name, name, temporary)
       30. │               └─duckdb:::rethrow_rapi_rel_to_table(...)
       31. │                 ├─rlang::try_fetch(...)
       32. │                 │ ├─base::tryCatch(...)
       33. │                 │ │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       34. │                 │ │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       35. │                 │ │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
       36. │                 │ └─base::withCallingHandlers(...)
       37. │                 └─duckdb:::rapi_rel_to_table(rel, schema_name, table_name, temporary)
       38. ├─dplyr::collect(.)
       39. ├─dplyr::mutate(., ingredient = .data$group_level, ingredient_concept_id = .env$ingredientConceptId)
       40. ├─dplyr::select(...)
       41. ├─dplyr::mutate(., pattern_name = gsub(" NA_NA_NA", "", .data$pattern_name))
       42. ├─dplyr::filter(., !grepl("NA NA_NA_NA", .data$pattern_name))
       43. ├─dplyr::mutate(...)
       44. ├─dplyr::mutate(., pattern_name = gsub("[^a-zA-Z ]", "", .data$strata_level))
       45. ├─dplyr::mutate(...)
       46. ├─dplyr::left_join(...)
       47. ├─dplyr::left_join(...)
       48. ├─dplyr::mutate(., pattern_id = as.numeric(gsub("[^0-9]", "", .data$strata_level)))
       49. ├─omopgenerics::suppress(., minCellCount)
       50. ├─dplyr::filter(., .data$group_level != "NA")
       51. └─base::.handleSimpleError(...)
       52.   └─rlang (local) h(simpleError(msg, call))
       53.     └─handlers[[1L]](cnd)
       54.       └─duckdb:::rethrow_error_from_rapi(e, call)
       55.         └─rlang::abort(msg, call = call)
      ── Error ('test-executeChecks.R:63:3'): execute all checks, given ingredient ───
      Error in `dplyr::compute(dplyr::mutate(dplyr::distinct(dplyr::select(table, 
          dplyr::all_of(strataGroupk))), strata_id = dplyr::row_number()))`: {"exception_type":"Catalog","exception_message":"Failed to create table 'duckplyr_UL9OoB2eBn': Table with name \"duckplyr_UL9OoB2eBn\" already exists!","type":"Table","name":"duckplyr_UL9OoB2eBn","error_subtype":"ENTRY_ALREADY_EXISTS"}
      Backtrace:
           ▆
        1. ├─DrugExposureDiagnostics (local) executeChecksMock(...) at test-executeChecks.R:63:3
        2. │ └─DrugExposureDiagnostics::executeChecks(...) at test-executeChecks.R:14:3
        3. │   ├─base::tryCatch(...)
        4. │   │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        5. │   │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        6. │   │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        7. │   └─DrugExposureDiagnostics:::executeChecksSingleIngredient(...)
        8. │     ├─... %>% dplyr::collect()
        9. │     └─DrugExposureDiagnostics:::checkDrugDose(...)
       10. │       ├─... %>% ...
       11. │       └─DrugUtilisation::summariseDoseCoverage(...)
       12. │         ├─dplyr::mutate(...)
       13. │         ├─dplyr::filter(...)
       14. │         └─PatientProfiles::summariseResult(...)
       15. │           ├─PatientProfiles:::orderVariables(...)
       16. │           │ ├─dplyr::select(...)
       17. │           │ ├─dplyr::arrange(...)
       18. │           │ ├─dplyr::left_join(...)
       19. │           │ └─dplyr::left_join(res, orderVars, by = c("variable_name"))
       20. │           └─PatientProfiles:::summariseInternal(...)
       21. │             ├─dplyr::compute(...)
       22. │             └─dplyr:::compute.data.frame(...)
       23. │               ├─dplyr:::rel_try(...)
       24. │               │ └─rlang::try_fetch(rel, error = identity)
       25. │               │   ├─base::tryCatch(...)
       26. │               │   │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       27. │               │   │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       28. │               │   │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
       29. │               │   └─base::withCallingHandlers(...)
       30. │               └─duckdb$rel_to_table(rel, schema_name, name, temporary)
       31. │                 └─duckdb:::rethrow_rapi_rel_to_table(...)
       32. │                   ├─rlang::try_fetch(...)
       33. │                   │ ├─base::tryCatch(...)
       34. │                   │ │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       35. │                   │ │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       36. │                   │ │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
       37. │                   │ └─base::withCallingHandlers(...)
       38. │                   └─duckdb:::rapi_rel_to_table(rel, schema_name, table_name, temporary)
       39. ├─dplyr::collect(.)
       40. ├─dplyr::mutate(., ingredient = .data$group_level, ingredient_concept_id = .env$ingredientConceptId)
       41. ├─dplyr::select(...)
       42. ├─dplyr::mutate(., pattern_name = gsub(" NA_NA_NA", "", .data$pattern_name))
       43. ├─dplyr::filter(., !grepl("NA NA_NA_NA", .data$pattern_name))
       44. ├─dplyr::mutate(...)
       45. ├─dplyr::mutate(., pattern_name = gsub("[^a-zA-Z ]", "", .data$strata_level))
       46. ├─dplyr::mutate(...)
       47. ├─dplyr::left_join(...)
       48. ├─dplyr::left_join(...)
       49. ├─dplyr::mutate(., pattern_id = as.numeric(gsub("[^0-9]", "", .data$strata_level)))
       50. ├─omopgenerics::suppress(., minCellCount)
       51. ├─dplyr::filter(., .data$group_level != "NA")
       52. └─base::.handleSimpleError(...)
       53.   └─rlang (local) h(simpleError(msg, call))
       54.     └─handlers[[1L]](cnd)
       55.       └─duckdb:::rethrow_error_from_rapi(e, call)
       56.         └─rlang::abort(msg, call = call)
      ── Error ('test-executeChecks.R:246:3'): summary ───────────────────────────────
      Error in `dplyr::compute(dplyr::mutate(dplyr::distinct(dplyr::select(table, 
          dplyr::all_of(strataGroupk))), strata_id = dplyr::row_number()))`: {"exception_type":"Catalog","exception_message":"Failed to create table 'duckplyr_UL9OoB2eBn': Table with name \"duckplyr_UL9OoB2eBn\" already exists!","type":"Table","name":"duckplyr_UL9OoB2eBn","error_subtype":"ENTRY_ALREADY_EXISTS"}
      Backtrace:
           ▆
        1. ├─DrugExposureDiagnostics (local) executeChecksMock(...) at test-executeChecks.R:246:3
        2. │ └─DrugExposureDiagnostics::executeChecks(...) at test-executeChecks.R:14:3
        3. │   ├─base::tryCatch(...)
        4. │   │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        5. │   │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        6. │   │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        7. │   └─DrugExposureDiagnostics:::executeChecksSingleIngredient(...)
        8. │     ├─... %>% dplyr::collect()
        9. │     └─DrugExposureDiagnostics:::checkDrugDose(...)
       10. │       ├─... %>% ...
       11. │       └─DrugUtilisation::summariseDoseCoverage(...)
       12. │         ├─dplyr::mutate(...)
       13. │         ├─dplyr::filter(...)
       14. │         └─PatientProfiles::summariseResult(...)
       15. │           ├─PatientProfiles:::orderVariables(...)
       16. │           │ ├─dplyr::select(...)
       17. │           │ ├─dplyr::arrange(...)
       18. │           │ ├─dplyr::left_join(...)
       19. │           │ └─dplyr::left_join(res, orderVars, by = c("variable_name"))
       20. │           └─PatientProfiles:::summariseInternal(...)
       21. │             ├─dplyr::compute(...)
       22. │             └─dplyr:::compute.data.frame(...)
       23. │               ├─dplyr:::rel_try(...)
       24. │               │ └─rlang::try_fetch(rel, error = identity)
       25. │               │   ├─base::tryCatch(...)
       26. │               │   │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       27. │               │   │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       28. │               │   │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
       29. │               │   └─base::withCallingHandlers(...)
       30. │               └─duckdb$rel_to_table(rel, schema_name, name, temporary)
       31. │                 └─duckdb:::rethrow_rapi_rel_to_table(...)
       32. │                   ├─rlang::try_fetch(...)
       33. │                   │ ├─base::tryCatch(...)
       34. │                   │ │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       35. │                   │ │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       36. │                   │ │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
       37. │                   │ └─base::withCallingHandlers(...)
       38. │                   └─duckdb:::rapi_rel_to_table(rel, schema_name, table_name, temporary)
       39. ├─dplyr::collect(.)
       40. ├─dplyr::mutate(., ingredient = .data$group_level, ingredient_concept_id = .env$ingredientConceptId)
       41. ├─dplyr::select(...)
       42. ├─dplyr::mutate(., pattern_name = gsub(" NA_NA_NA", "", .data$pattern_name))
       43. ├─dplyr::filter(., !grepl("NA NA_NA_NA", .data$pattern_name))
       44. ├─dplyr::mutate(...)
       45. ├─dplyr::mutate(., pattern_name = gsub("[^a-zA-Z ]", "", .data$strata_level))
       46. ├─dplyr::mutate(...)
       47. ├─dplyr::left_join(...)
       48. ├─dplyr::left_join(...)
       49. ├─dplyr::mutate(., pattern_id = as.numeric(gsub("[^0-9]", "", .data$strata_level)))
       50. ├─omopgenerics::suppress(., minCellCount)
       51. ├─dplyr::filter(., .data$group_level != "NA")
       52. └─base::.handleSimpleError(...)
       53.   └─rlang (local) h(simpleError(msg, call))
       54.     └─handlers[[1L]](cnd)
       55.       └─duckdb:::rethrow_error_from_rapi(e, call)
       56.         └─rlang::abort(msg, call = call)
      ── Error ('test-executeChecks.R:398:3'): sampleSize is null, no sampling must take place, all data from ingredient_drug_records must be used ──
      Error in `dplyr::compute(dplyr::mutate(dplyr::distinct(dplyr::select(table, 
          dplyr::all_of(strataGroupk))), strata_id = dplyr::row_number()))`: {"exception_type":"Catalog","exception_message":"Failed to create table 'duckplyr_UL9OoB2eBn': Table with name \"duckplyr_UL9OoB2eBn\" already exists!","type":"Table","name":"duckplyr_UL9OoB2eBn","error_subtype":"ENTRY_ALREADY_EXISTS"}
      Backtrace:
           ▆
        1. ├─DrugExposureDiagnostics (local) executeChecksMock(...) at test-executeChecks.R:398:3
        2. │ └─DrugExposureDiagnostics::executeChecks(...) at test-executeChecks.R:14:3
        3. │   ├─base::tryCatch(...)
        4. │   │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        5. │   │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        6. │   │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        7. │   └─DrugExposureDiagnostics:::executeChecksSingleIngredient(...)
        8. │     ├─... %>% dplyr::collect()
        9. │     └─DrugExposureDiagnostics:::checkDrugDose(...)
       10. │       ├─... %>% ...
       11. │       └─DrugUtilisation::summariseDoseCoverage(...)
       12. │         ├─dplyr::mutate(...)
       13. │         ├─dplyr::filter(...)
       14. │         └─PatientProfiles::summariseResult(...)
       15. │           ├─PatientProfiles:::orderVariables(...)
       16. │           │ ├─dplyr::select(...)
       17. │           │ ├─dplyr::arrange(...)
       18. │           │ ├─dplyr::left_join(...)
       19. │           │ └─dplyr::left_join(res, orderVars, by = c("variable_name"))
       20. │           └─PatientProfiles:::summariseInternal(...)
       21. │             ├─dplyr::compute(...)
       22. │             └─dplyr:::compute.data.frame(...)
       23. │               ├─dplyr:::rel_try(...)
       24. │               │ └─rlang::try_fetch(rel, error = identity)
       25. │               │   ├─base::tryCatch(...)
       26. │               │   │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       27. │               │   │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       28. │               │   │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
       29. │               │   └─base::withCallingHandlers(...)
       30. │               └─duckdb$rel_to_table(rel, schema_name, name, temporary)
       31. │                 └─duckdb:::rethrow_rapi_rel_to_table(...)
       32. │                   ├─rlang::try_fetch(...)
       33. │                   │ ├─base::tryCatch(...)
       34. │                   │ │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
       35. │                   │ │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
       36. │                   │ │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
       37. │                   │ └─base::withCallingHandlers(...)
       38. │                   └─duckdb:::rapi_rel_to_table(rel, schema_name, table_name, temporary)
       39. ├─dplyr::collect(.)
       40. ├─dplyr::mutate(., ingredient = .data$group_level, ingredient_concept_id = .env$ingredientConceptId)
       41. ├─dplyr::select(...)
       42. ├─dplyr::mutate(., pattern_name = gsub(" NA_NA_NA", "", .data$pattern_name))
       43. ├─dplyr::filter(., !grepl("NA NA_NA_NA", .data$pattern_name))
       44. ├─dplyr::mutate(...)
       45. ├─dplyr::mutate(., pattern_name = gsub("[^a-zA-Z ]", "", .data$strata_level))
       46. ├─dplyr::mutate(...)
       47. ├─dplyr::left_join(...)
       48. ├─dplyr::left_join(...)
       49. ├─dplyr::mutate(., pattern_id = as.numeric(gsub("[^0-9]", "", .data$strata_level)))
       50. ├─omopgenerics::suppress(., minCellCount)
       51. ├─dplyr::filter(., .data$group_level != "NA")
       52. └─base::.handleSimpleError(...)
       53.   └─rlang (local) h(simpleError(msg, call))
       54.     └─handlers[[1L]](cnd)
       55.       └─duckdb:::rethrow_error_from_rapi(e, call)
       56.         └─rlang::abort(msg, call = call)
      
      [ FAIL 4 | WARN 99 | SKIP 5 | PASS 341 ]
      Error: Test failures
      Execution halted
    ```

# eSDM

<details>

* Version: 0.4.4
* GitHub: https://github.com/swfsc/eSDM
* Source code: https://github.com/cran/eSDM
* Date/Publication: 2024-10-07 22:20:02 UTC
* Number of recursive dependencies: 130

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
* Number of recursive dependencies: 106

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
* Number of recursive dependencies: 141

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
    --- re-building ‘introduction.Rmd’ using rmarkdown
    
    Quitting from introduction.Rmd:32-55 [unnamed-chunk-2]
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    <error/rlang_error>
    Error in `if (any(AC50 < 0)) ...`:
    ! missing value where TRUE/FALSE needed
    ---
    Backtrace:
         ▆
      1. ├─GeoTox::sensitivity_analysis(...)
      2. └─GeoTox::calculate_response(...)
      3.   └─GeoTox::calc_concentration_response(...)
      4.     └─base::lapply(...)
      5.       └─GeoTox (local) FUN(X[[i]], ...)
      6.         ├─dplyr::bind_rows(...)
      7.         │ └─rlang::list2(...)
      8.         └─base::lapply(...)
      9.           └─GeoTox (local) FUN(X[[i]], ...)
     10.             ├─dplyr::mutate(...)
     11.             └─GeoTox:::.calc_concentration_response(...)
     12.               └─stats::optimize(...)
     13.                 └─stats (local) `<fn>`(-11.8033988749895)
     14.                   └─GeoTox (local) f(arg, ...)
     15.                     └─GeoTox::hill_conc(exp(ln_resp), max, AC50, 1)
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
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

# healthdb

<details>

* Version: 0.4.1
* GitHub: https://github.com/KevinHzq/healthdb
* Source code: https://github.com/cran/healthdb
* Date/Publication: 2025-04-05 02:10:02 UTC
* Number of recursive dependencies: 67

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
      1    3       1 2020-12-19   any     d       q     999 2020-12-12
      2    1       1 2020-12-28   any     t       v    <NA> 2020-12-21
      3    5       5 2019-08-29   any     d       b     999 2019-08-22
      4    2      10 2018-10-27   any     x       d    <NA> 2018-10-20
      5   13      12 2016-09-06 noise   999    <NA>     999 2016-08-30
      6   24      13 2017-07-07 noise   999     999    <NA> 2017-06-30
      7   20      16 2017-09-22 noise   999    <NA>    <NA> 2017-09-15
      8    7      17 2018-03-24   any     p       h    <NA> 2018-03-17
      9   16      18 2015-06-04 noise   999    <NA>     999 2015-05-28
      10  12      19 2015-09-08   all     z       w       f 2015-09-01
      11  11      21 2018-01-24   all     c       u       d 2018-01-17
      12  14      21 2018-08-17 noise   999    <NA>    <NA> 2018-08-10
      13   6      21 2020-08-16   any     b    <NA>     999 2020-08-09
      14  21      22 2016-08-31 noise   999    <NA>    <NA> 2016-08-24
      15   9      25 2020-11-30   all     b       h       i 2020-11-23
      16  18      30 2018-02-22 noise   999     999     999 2018-02-15
      17   8      34 2017-02-12   any     x       b     999 2017-02-05
      18  10      34 2018-10-12   all     b       g       r 2018-10-05
      19  19      36 2019-04-30 noise   999     999    <NA> 2019-04-23
      20  23      38 2016-05-19 noise   999     999     999 2016-05-12
      21  15      45 2016-06-27 noise   999    <NA>     999 2016-06-20
      22  25      47 2015-04-19 noise   999     999     999 2015-04-12
      23   4      47 2017-08-30   any     f       v    <NA> 2017-08-23
      24  17      48 2017-02-04 noise   999    <NA>     999 2017-01-28
      25  22      50 2015-02-22 noise   999    <NA>     999 2015-02-15
      
      The following records have missing dates:
        uid clnt_id      dates ans diagx diagx_1 diagx_2 end_date
      1   1      39 2017-09-09 any     u       d     999       NA
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
      [ FAIL 1 | WARN 2 | SKIP 6 | PASS 225 ]
      
      ══ Skipped tests (6) ═══════════════════════════════════════════════════════════
      • On CRAN (6): 'test-define_case.R:42:3', 'test-if_dates.R:2:3',
        'test-if_dates.R:26:3', 'test-if_dates.R:33:3',
        'test-restrict_dates_sql.R:26:3', 'test-restrict_dates_sql.R:101:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-fetch_var.R:115:3'): not one to one warning works ────────────
      `.` did not throw the expected warning.
      Backtrace:
          ▆
       1. ├─... %>% expect_warning() at test-fetch_var.R:115:3
       2. └─testthat::expect_warning(.)
      
      [ FAIL 1 | WARN 2 | SKIP 6 | PASS 225 ]
      Error: Test failures
      Execution halted
    ```

# heemod

<details>

* Version: 1.0.2
* GitHub: https://github.com/aphp/heemod
* Source code: https://github.com/cran/heemod
* Date/Publication: 2024-09-11 16:00:02 UTC
* Number of recursive dependencies: 138

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
* Number of recursive dependencies: 200

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
    
    Processing "/tmp/Rtmp1g9KWD" ...
      -- [1/14] Parsing "/tmp/Rtmp1g9KWD/A2-i129.tsv.gz" -- immunarch
      -- [2/14] Parsing "/tmp/Rtmp1g9KWD/A2-i131.tsv.gz" -- immunarch
      -- [3/14] Parsing "/tmp/Rtmp1g9KWD/A2-i132.tsv.gz" -- immunarch
      -- [4/14] Parsing "/tmp/Rtmp1g9KWD/A2-i133.tsv.gz" -- immunarch
      -- [5/14] Parsing "/tmp/Rtmp1g9KWD/A4-i191.tsv.gz" -- immunarch
      -- [6/14] Parsing "/tmp/Rtmp1g9KWD/A4-i192.tsv.gz" -- immunarch
      -- [7/14] Parsing "/tmp/Rtmp1g9KWD/MS1.tsv.gz" -- immunarch
      -- [8/14] Parsing "/tmp/Rtmp1g9KWD/MS2.tsv.gz" -- immunarch
      -- [9/14] Parsing "/tmp/Rtmp1g9KWD/MS3.tsv.gz" -- immunarch
      -- [10/14] Parsing "/tmp/Rtmp1g9KWD/MS4.tsv.gz" -- immunarch
      -- [11/14] Parsing "/tmp/Rtmp1g9KWD/MS5.tsv.gz" -- immunarch
      -- [12/14] Parsing "/tmp/Rtmp1g9KWD/MS6.tsv.gz" -- immunarch
      -- [13/14] Parsing "/tmp/Rtmp1g9KWD/metadata.txt" -- metadata
      -- [14/14] Parsing "/tmp/Rtmp1g9KWD/pdf1e347703a57" -- unsupported format, skipping
    Processing "/tmp/Rtmp1g9KWD/duckplyr" ...
      -- [1/2] Parsing "/tmp/Rtmp1g9KWD/duckplyr/duckplyr1e34264b2f96.duckdb" -- Warning in readLines(f, 1) : line 1 appears to contain an embedded nul
    Warning in readLines(f, 1) :
      incomplete final line found on '/tmp/Rtmp1g9KWD/duckplyr/duckplyr1e34264b2f96.duckdb'
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

# iNZightTools

<details>

* Version: 2.0.1
* GitHub: https://github.com/iNZightVIT/iNZightTools
* Source code: https://github.com/cran/iNZightTools
* Date/Publication: 2023-10-12 11:50:08 UTC
* Number of recursive dependencies: 119

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

# optic

<details>

* Version: 1.0.1
* GitHub: https://github.com/randcorporation/optic
* Source code: https://github.com/cran/optic
* Date/Publication: 2023-08-08 13:40:02 UTC
* Number of recursive dependencies: 152

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
* Number of recursive dependencies: 129

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

# recipes

<details>

* Version: 1.3.0
* GitHub: https://github.com/tidymodels/recipes
* Source code: https://github.com/cran/recipes
* Date/Publication: 2025-04-17 06:50:06 UTC
* Number of recursive dependencies: 137

Run `revdepcheck::cloud_details(, "recipes")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(recipes)
      Loading required package: dplyr
      
      Attaching package: 'dplyr'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      The following objects are masked from 'package:stats':
      
          filter, lag
      
      The following objects are masked from 'package:base':
      
          intersect, setdiff, setequal, union
      
      
      Attaching package: 'recipes'
      
      The following object is masked from 'package:stats':
      
          step
      
      > 
      > test_check("recipes")
      1 package (fastICA) is needed for this step but is not installed.
      To install run: `install.packages("fastICA")`
      1 package (dimRed) is needed for this step but is not installed.
      To install run: `install.packages("dimRed")`
      1 package (dimRed) is needed for this step but is not installed.
      To install run: `install.packages("dimRed")`
      1 package (dimRed) is needed for this step but is not installed.
      To install run: `install.packages("dimRed")`
      1 package (dimRed) is needed for this step but is not installed.
      To install run: `install.packages("dimRed")`
      1 package (dimRed) is needed for this step but is not installed.
      To install run: `install.packages("dimRed")`
      1 package (mixOmics) is needed for this step but is not installed.
      To install run: `install.packages("mixOmics")`
      1 package (mixOmics) is needed for this step but is not installed.
      To install run: `install.packages("mixOmics")`
      1 package (mixOmics) is needed for this step but is not installed.
      To install run: `install.packages("mixOmics")`
      1 package (mixOmics) is needed for this step but is not installed.
      To install run: `install.packages("mixOmics")`
      1 package (mixOmics) is needed for this step but is not installed.
      To install run: `install.packages("mixOmics")`
      1 package (mixOmics) is needed for this step but is not installed.
      To install run: `install.packages("mixOmics")`
      [ FAIL 9 | WARN 2 | SKIP 719 | PASS 2466 ]
      
      ══ Skipped tests (719) ═════════════════════════════════════════════════════════
      • On CRAN (667): 'test-BoxCox.R:146:3', 'test-BoxCox.R:152:3',
        'test-BoxCox.R:179:3', 'test-BoxCox.R:186:3', 'test-BoxCox.R:223:3',
        'test-YeoJohnson.R:156:3', 'test-YeoJohnson.R:172:3',
        'test-YeoJohnson.R:179:3', 'test-YeoJohnson.R:216:3',
        'test-YeoJohnson.R:221:3', 'test-arrange.R:89:3', 'test-arrange.R:126:3',
        'test-basics.R:328:3', 'test-basics.R:338:3', 'test-basics.R:370:3',
        'test-basics.R:435:3', 'test-basics.R:475:3', 'test-basics.R:501:3',
        'test-basics.R:519:3', 'test-basics.R:583:3', 'test-basics.R:607:3',
        'test-basics.R:615:3', 'test-basics.R:644:3', 'test-basics.R:653:3',
        'test-basics.R:698:3', 'test-basics.R:713:3', 'test-basics.R:734:3',
        'test-basics.R:765:3', 'test-basics.R:774:3', 'test-basics.R:783:3',
        'test-basics.R:792:3', 'test-basics.R:799:3', 'test-basics.R:806:3',
        'test-basics.R:813:3', 'test-basics.R:820:3', 'test-basics.R:831:3',
        'test-basics.R:838:3', 'test-bin2factor.R:34:3', 'test-bin2factor.R:50:3',
        'test-bin2factor.R:79:3', 'test-bin2factor.R:86:3',
        'test-bin2factor.R:123:3', 'test-bs.R:114:3', 'test-bs.R:148:3',
        'test-bs.R:166:3', 'test-bs.R:173:3', 'test-bs.R:238:3', 'test-bs.R:251:3',
        'test-case-weight-functions.R:140:3', 'test-case-weight-functions.R:154:3',
        'test-case-weight-functions.R:164:3', 'test-center.R:100:3',
        'test-center.R:121:3', 'test-center.R:144:3', 'test-center.R:151:3',
        'test-center.R:188:3', 'test-class.R:19:3', 'test-class.R:35:3',
        'test-class.R:46:3', 'test-class.R:100:3', 'test-class.R:119:3',
        'test-class.R:126:3', 'test-class.R:163:3', 'test-class.R:168:3',
        'test-classdist.R:95:3', 'test-classdist.R:126:3', 'test-classdist.R:189:3',
        'test-classdist.R:231:3', 'test-classdist.R:238:3', 'test-classdist.R:325:3',
        'test-classdist.R:338:3', 'test-classdist.R:343:3',
        'test-classdist_shrunken.R:78:3', 'test-classdist_shrunken.R:182:3',
        'test-classdist_shrunken.R:224:3', 'test-classdist_shrunken.R:231:3',
        'test-classdist_shrunken.R:320:3', 'test-colcheck.R:45:3',
        'test-colcheck.R:123:3', 'test-colcheck.R:182:3', 'test-colcheck.R:219:3',
        'test-corr.R:41:3', 'test-corr.R:56:3', 'test-corr.R:106:3',
        'test-corr.R:142:3', 'test-corr.R:161:3', 'test-corr.R:199:3',
        'test-corr.R:215:3', 'test-count.R:50:3', 'test-count.R:64:3',
        'test-count.R:71:3', 'test-count.R:136:3', 'test-count.R:159:3',
        'test-count.R:169:3', 'test-count.R:249:3', 'test-count.R:262:3',
        'test-count.R:270:3', 'test-cut.R:4:3', 'test-cut.R:39:3',
        'test-cut.R:189:3', 'test-cut.R:226:3', 'test-cut.R:255:3',
        'test-cut.R:262:3', 'test-cut.R:299:3', 'test-date.R:123:3',
        'test-date.R:213:3', 'test-date.R:247:3', 'test-date.R:257:3',
        'test-date.R:327:3', 'test-date.R:340:3', 'test-date.R:345:3',
        'test-deprec-impute_bag.R:2:3', 'test-deprec-impute_knn.R:2:3',
        'test-deprec-impute_lower.R:2:3', 'test-deprec-impute_median.R:2:3',
        'test-deprec-impute_mena.R:2:3', 'test-deprec-impute_mode.R:2:3',
        'test-deprec-impute_roll.R:2:3', 'test-depth.R:94:3', 'test-depth.R:114:3',
        'test-depth.R:129:3', 'test-depth.R:179:3', 'test-depth.R:187:3',
        'test-depth.R:261:3', 'test-depth.R:275:3', 'test-discretize.R:54:3',
        'test-discretize.R:58:3', 'test-discretize.R:134:3',
        'test-discretize.R:150:3', 'test-discretize.R:184:3',
        'test-discretize.R:215:3', 'test-discretize.R:232:3',
        'test-discretize.R:239:3', 'test-discretize.R:276:3',
        'test-discretize.R:296:3', 'test-dummy.R:78:3', 'test-dummy.R:85:3',
        'test-dummy.R:247:3', 'test-dummy.R:296:3', 'test-dummy.R:348:3',
        'test-dummy.R:376:3', 'test-dummy.R:433:3', 'test-dummy.R:463:3',
        'test-dummy.R:528:3', 'test-dummy.R:551:3', 'test-dummy.R:568:3',
        'test-dummy.R:575:3', 'test-dummy.R:588:3', 'test-dummy.R:676:3',
        'test-dummy.R:686:3', 'test-dummy.R:751:3', 'test-dummy.R:764:3',
        'test-dummy.R:772:3', 'test-dummy_extract.R:93:3',
        'test-dummy_extract.R:250:3', 'test-dummy_extract.R:292:3',
        'test-dummy_extract.R:377:3', 'test-dummy_extract.R:387:3',
        'test-dummy_extract.R:460:3', 'test-dummy_extract.R:473:3',
        'test-dummy_extract.R:478:3', 'test-dummy_multi_choice.R:77:3',
        'test-dummy_multi_choice.R:87:3', 'test-dummy_multi_choice.R:238:3',
        'test-dummy_multi_choice.R:245:3', 'test-dummy_multi_choice.R:310:3',
        'test-dummy_multi_choice.R:323:3', 'test-dummy_multi_choice.R:342:3',
        'test-extension_check.R:2:3', 'test-extract-dials.R:67:3',
        'test-extract-dials.R:80:3', 'test-extract_fit_time.R:28:3',
        'test-extract_parameter.R:13:3', 'test-factor2string.R:25:3',
        'test-factor2string.R:42:3', 'test-factor2string.R:49:3',
        'test-factor2string.R:86:3', 'test-filter.R:127:3', 'test-filter.R:164:3',
        'test-filter_missing.R:77:3', 'test-filter_missing.R:124:3',
        'test-filter_missing.R:161:3', 'test-filter_missing.R:180:3',
        'test-format.R:69:3', 'test-formula.R:20:3', 'test-formula.R:108:3',
        'test-geodist.R:85:3', 'test-geodist.R:208:3', 'test-geodist.R:220:3',
        'test-geodist.R:300:3', 'test-geodist.R:310:3', 'test-geodist.R:403:3',
        'test-geodist.R:423:3', 'test-harmonic.R:21:3', 'test-harmonic.R:226:3',
        'test-harmonic.R:240:3', 'test-harmonic.R:256:3', 'test-harmonic.R:277:3',
        'test-harmonic.R:343:3', 'test-harmonic.R:384:3', 'test-harmonic.R:391:3',
        'test-harmonic.R:473:3', 'test-harmonic.R:486:3', 'test-holiday.R:182:3',
        'test-holiday.R:189:3', 'test-holiday.R:251:3', 'test-holiday.R:258:3',
        'test-holiday.R:331:3', 'test-holiday.R:344:3', 'test-hyperbolic.R:56:3',
        'test-hyperbolic.R:70:3', 'test-hyperbolic.R:80:3',
        'test-hyperbolic.R:122:3', 'test-impute_bag.R:130:3',
        'test-impute_bag.R:144:3', 'test-impute_bag.R:154:3',
        'test-impute_bag.R:163:3', 'test-impute_bag.R:172:3',
        'test-impute_bag.R:226:3', 'test-impute_bag.R:236:3',
        'test-impute_bag.R:276:3', 'test-impute_bag.R:295:3',
        'test-impute_knn.R:179:3', 'test-impute_knn.R:201:3',
        'test-impute_knn.R:215:3', 'test-impute_knn.R:222:3',
        'test-impute_knn.R:263:3', 'test-impute_knn.R:272:3',
        'test-impute_knn.R:321:3', 'test-impute_knn.R:331:3',
        'test-impute_knn.R:380:3', 'test-impute_knn.R:399:3',
        'test-impute_linear.R:64:3', 'test-impute_linear.R:120:3',
        'test-impute_linear.R:149:3', 'test-impute_linear.R:160:3',
        'test-impute_linear.R:169:3', 'test-impute_linear.R:178:3',
        'test-impute_linear.R:225:3', 'test-impute_linear.R:235:3',
        'test-impute_linear.R:272:3', 'test-impute_lower.R:54:3',
        'test-impute_lower.R:72:3', 'test-impute_lower.R:82:3',
        'test-impute_lower.R:119:3', 'test-impute_mean.R:87:3',
        'test-impute_mean.R:168:3', 'test-impute_mean.R:232:3',
        'test-impute_mean.R:239:3', 'test-impute_mean.R:276:3',
        'test-impute_mean.R:295:3', 'test-impute_median.R:70:3',
        'test-impute_median.R:104:3', 'test-impute_median.R:151:3',
        'test-impute_median.R:158:3', 'test-impute_median.R:195:3',
        'test-impute_mode.R:67:3', 'test-impute_mode.R:93:3',
        'test-impute_mode.R:118:3', 'test-impute_mode.R:154:3',
        'test-impute_mode.R:161:3', 'test-impute_mode.R:198:3',
        'test-impute_roll.R:71:3', 'test-impute_roll.R:121:3',
        'test-impute_roll.R:131:3', 'test-impute_roll.R:169:3',
        'test-impute_roll.R:189:3', 'test-indicate_na.R:114:3',
        'test-indicate_na.R:176:3', 'test-indicate_na.R:183:3',
        'test-indicate_na.R:248:3', 'test-indicate_na.R:261:3',
        'test-integer.R:93:3', 'test-integer.R:103:3', 'test-integer.R:140:3',
        'test-integer.R:145:3', 'test-interact.R:185:3', 'test-interact.R:329:3',
        'test-interact.R:340:3', 'test-interact.R:381:3', 'test-interact.R:391:3',
        'test-interact.R:456:3', 'test-interact.R:469:3', 'test-interact.R:474:3',
        'test-intercept.R:34:3', 'test-intercept.R:62:3', 'test-intercept.R:98:3',
        'test-inverse.R:48:3', 'test-inverse.R:55:3', 'test-inverse.R:92:3',
        'test-inverse.R:97:3', 'test-invlogit.R:39:3', 'test-invlogit.R:49:3',
        'test-invlogit.R:85:3', 'test-isomap.R:51:3', 'test-isomap.R:76:3',
        'test-isomap.R:100:3', 'test-isomap.R:120:3', 'test-isomap.R:155:3',
        'test-isomap.R:173:3', 'test-isomap.R:194:3', 'test-isomap.R:228:3',
        'test-isomap.R:275:3', 'test-isomap.R:298:3', 'test-isomap.R:328:3',
        'test-isomap.R:349:3', 'test-kpca.R:53:3', 'test-kpca.R:76:3',
        'test-kpca.R:103:3', 'test-kpca.R:114:3', 'test-kpca.R:134:3',
        'test-kpca.R:141:3', 'test-kpca.R:208:3', 'test-kpca.R:223:3',
        'test-kpca.R:230:3', 'test-kpca_poly.R:60:3', 'test-kpca_poly.R:71:3',
        'test-kpca_poly.R:118:3', 'test-kpca_poly.R:138:3', 'test-kpca_poly.R:147:3',
        'test-kpca_poly.R:218:3', 'test-kpca_poly.R:233:3', 'test-kpca_poly.R:257:3',
        'test-kpca_rbf.R:60:3', 'test-kpca_rbf.R:71:3', 'test-kpca_rbf.R:115:3',
        'test-kpca_rbf.R:135:3', 'test-kpca_rbf.R:142:3', 'test-kpca_rbf.R:209:3',
        'test-kpca_rbf.R:224:3', 'test-kpca_rbf.R:246:3', 'test-lag.R:40:3',
        'test-lag.R:112:3', 'test-lag.R:119:3', 'test-lag.R:184:3',
        'test-lag.R:197:3', 'test-lincomb.R:99:3', 'test-lincomb.R:136:3',
        'test-lincomb.R:141:3', 'test-log.R:57:3', 'test-log.R:70:3',
        'test-log.R:77:3', 'test-log.R:114:3', 'test-log.R:119:3',
        'test-logit.R:44:3', 'test-logit.R:57:3', 'test-logit.R:64:3',
        'test-logit.R:101:3', 'test-logit.R:106:3', 'test-matrix.R:58:3',
        'test-misc.R:13:3', 'test-misc.R:31:3', 'test-misc.R:35:3',
        'test-misc.R:122:3', 'test-misc.R:131:3', 'test-misc.R:138:3',
        'test-misc.R:149:3', 'test-misc.R:162:3', 'test-misc.R:208:3',
        'test-misc.R:297:3', 'test-misc.R:328:3', 'test-missing.R:28:3',
        'test-missing.R:35:3', 'test-missing.R:45:3', 'test-missing.R:58:3',
        'test-missing.R:65:3', 'test-missing.R:102:3', 'test-mutate.R:64:3',
        'test-mutate.R:125:3', 'test-mutate.R:166:3', 'test-mutate.R:190:3',
        'test-mutate_at.R:73:3', 'test-mutate_at.R:95:3', 'test-mutate_at.R:132:3',
        'test-naomit.R:61:3', 'test-naomit.R:68:3', 'test-naomit.R:105:3',
        'test-newvalues.R:13:3', 'test-newvalues.R:20:3', 'test-newvalues.R:31:3',
        'test-newvalues.R:43:3', 'test-newvalues.R:55:3', 'test-newvalues.R:80:3',
        'test-newvalues.R:104:3', 'test-newvalues.R:114:3', 'test-newvalues.R:150:3',
        'test-newvalues.R:156:3', 'test-newvalues.R:162:3', 'test-newvalues.R:168:3',
        'test-newvalues.R:174:3', 'test-newvalues.R:187:3', 'test-newvalues.R:194:3',
        'test-newvalues.R:231:3', 'test-newvalues.R:236:3',
        'test-nomial_types.R:135:3', 'test-nomial_types.R:152:3',
        'test-nomial_types.R:168:3', 'test-normalize.R:71:3',
        'test-normalize.R:110:3', 'test-normalize.R:132:3', 'test-normalize.R:158:3',
        'test-normalize.R:182:3', 'test-normalize.R:189:3', 'test-normalize.R:231:3',
        'test-novel.R:77:3', 'test-novel.R:115:3', 'test-novel.R:122:3',
        'test-novel.R:159:3', 'test-ns.R:117:3', 'test-ns.R:151:3',
        'test-ns.R:169:3', 'test-ns.R:176:3', 'test-ns.R:241:3', 'test-ns.R:254:3',
        'test-num2factor.R:38:3', 'test-num2factor.R:67:3', 'test-num2factor.R:74:3',
        'test-num2factor.R:111:3', 'test-nzv.R:65:3', 'test-nzv.R:72:3',
        'test-nzv.R:122:3', 'test-nzv.R:197:3', 'test-nzv.R:234:3',
        'test-nzv.R:254:3', 'test-ordinalscore.R:62:3', 'test-ordinalscore.R:78:3',
        'test-ordinalscore.R:85:3', 'test-ordinalscore.R:122:3',
        'test-ordinalscore.R:127:3', 'test-other.R:253:3', 'test-other.R:283:3',
        'test-other.R:290:3', 'test-other.R:366:3', 'test-other.R:408:3',
        'test-other.R:415:3', 'test-other.R:456:3', 'test-pca.R:100:3',
        'test-pca.R:168:3', 'test-pca.R:199:3', 'test-pca.R:209:3',
        'test-pca.R:256:3', 'test-pca.R:301:3', 'test-pca.R:338:3',
        'test-pca.R:348:3', 'test-pca.R:418:3', 'test-pca.R:434:3',
        'test-pca.R:454:3', 'test-percentile.R:156:3', 'test-percentile.R:201:3',
        'test-percentile.R:242:3', 'test-percentile.R:260:3',
        'test-percentile.R:270:3', 'test-percentile.R:312:3', 'test-pkg_check.R:2:3',
        'test-pls.R:305:3', 'test-pls.R:433:3', 'test-pls_old.R:29:3',
        'test-poly.R:78:3', 'test-poly.R:100:3', 'test-poly.R:123:3',
        'test-poly.R:147:3', 'test-poly.R:154:3', 'test-poly.R:219:3',
        'test-poly.R:235:3', 'test-poly.R:254:3', 'test-poly_bernstein.R:91:3',
        'test-poly_bernstein.R:123:3', 'test-poly_bernstein.R:141:3',
        'test-poly_bernstein.R:148:3', 'test-poly_bernstein.R:220:3',
        'test-poly_bernstein.R:241:3', 'test-profile.R:70:3', 'test-profile.R:141:3',
        'test-profile.R:149:3', 'test-profile.R:195:3', 'test-profile.R:230:3',
        'test-ptype.R:193:3', 'test-range.R:241:3', 'test-range.R:247:3',
        'test-range.R:268:3', 'test-range.R:278:3', 'test-range.R:320:3',
        'test-range.R:325:3', 'test-range_check.R:7:3', 'test-range_check.R:16:3',
        'test-range_check.R:44:3', 'test-range_check.R:67:3',
        'test-range_check.R:74:3', 'test-range_check.R:111:3', 'test-ratio.R:119:3',
        'test-ratio.R:137:3', 'test-ratio.R:144:3', 'test-ratio.R:190:3',
        'test-ratio.R:197:3', 'test-ratio.R:262:3', 'test-ratio.R:275:3',
        'test-ratio.R:280:3', 'test-regex.R:40:3', 'test-regex.R:54:3',
        'test-regex.R:64:3', 'test-regex.R:72:3', 'test-regex.R:137:3',
        'test-regex.R:158:3', 'test-regex.R:165:3', 'test-regex.R:240:3',
        'test-regex.R:253:3', 'test-regex.R:258:3', 'test-relevel.R:25:3',
        'test-relevel.R:66:3', 'test-relevel.R:73:3', 'test-relevel.R:110:3',
        'test-relu.R:64:3', 'test-relu.R:102:3', 'test-relu.R:109:3',
        'test-relu.R:151:3', 'test-rename.R:75:3', 'test-rename.R:112:3',
        'test-rename_at.R:36:3', 'test-rename_at.R:40:3', 'test-rename_at.R:82:3',
        'test-rename_at.R:119:3', 'test-retraining.R:29:3', 'test-rm.R:75:3',
        'test-rm.R:191:3', 'test-rm.R:228:3', 'test-roles.R:41:3',
        'test-roles.R:183:3', 'test-roles.R:207:3', 'test-roles.R:229:3',
        'test-roles.R:236:3', 'test-roles.R:242:3', 'test-roles.R:253:3',
        'test-roles.R:340:3', 'test-roles.R:372:3', 'test-roles.R:526:3',
        'test-roles.R:576:3', 'test-roles.R:600:3', 'test-sample.R:72:3',
        'test-sample.R:122:3', 'test-sample.R:137:3', 'test-sample.R:176:3',
        'test-sample.R:206:3', 'test-scale.R:78:3', 'test-scale.R:102:3',
        'test-scale.R:134:3', 'test-scale.R:141:3', 'test-scale.R:158:3',
        'test-scale.R:207:3', 'test-scale.R:214:3', 'test-scale.R:251:3',
        'test-select.R:138:3', 'test-select.R:163:3', 'test-select.R:180:3',
        'test-select.R:189:3', 'test-select.R:223:3', 'test-selections.R:242:3',
        'test-selections.R:511:3', 'test-shuffle.R:67:3', 'test-shuffle.R:94:3',
        'test-shuffle.R:101:3', 'test-shuffle.R:138:3', 'test-skipping.R:18:3',
        'test-slice.R:86:3', 'test-slice.R:119:3', 'test-slice.R:156:3',
        'test-sparsevctrs.R:171:3', 'test-sparsity.R:58:3',
        'test-spatialsign.R:27:3', 'test-spatialsign.R:81:3',
        'test-spatialsign.R:111:3', 'test-spatialsign.R:121:3',
        'test-spatialsign.R:163:3', 'test-spline_b.R:100:3', 'test-spline_b.R:122:3',
        'test-spline_b.R:167:3', 'test-spline_b.R:178:3', 'test-spline_b.R:196:3',
        'test-spline_b.R:203:3', 'test-spline_b.R:275:3', 'test-spline_b.R:297:3',
        'test-spline_convex.R:105:3', 'test-spline_convex.R:132:3',
        'test-spline_convex.R:177:3', 'test-spline_convex.R:188:3',
        'test-spline_convex.R:206:3', 'test-spline_convex.R:213:3',
        'test-spline_convex.R:285:3', 'test-spline_convex.R:307:3',
        'test-spline_monotone.R:110:3', 'test-spline_monotone.R:142:3',
        'test-spline_monotone.R:187:3', 'test-spline_monotone.R:205:3',
        'test-spline_monotone.R:212:3', 'test-spline_monotone.R:284:3',
        'test-spline_monotone.R:306:3', 'test-spline_natural.R:92:3',
        'test-spline_natural.R:137:3', 'test-spline_natural.R:148:3',
        'test-spline_natural.R:166:3', 'test-spline_natural.R:173:3',
        'test-spline_natural.R:245:3', 'test-spline_natural.R:266:3',
        'test-spline_nonnegative.R:110:3', 'test-spline_nonnegative.R:142:3',
        'test-spline_nonnegative.R:187:3', 'test-spline_nonnegative.R:198:3',
        'test-spline_nonnegative.R:216:3', 'test-spline_nonnegative.R:223:3',
        'test-spline_nonnegative.R:295:3', 'test-spline_nonnegative.R:317:3',
        'test-sqrt.R:44:3', 'test-sqrt.R:51:3', 'test-sqrt.R:88:3',
        'test-string2factor.R:39:3', 'test-string2factor.R:78:3',
        'test-string2factor.R:85:3', 'test-string2factor.R:122:3',
        'test-stringsAsFactors.R:26:3', 'test-stringsAsFactors.R:44:3',
        'test-stringsAsFactors.R:64:3', 'test-stringsAsFactors.R:84:3',
        'test-tidy.R:35:3', 'test-tidy.R:71:3', 'test-tidy.R:84:3',
        'test-time.R:112:3', 'test-time.R:126:3', 'test-time.R:153:3',
        'test-time.R:160:3', 'test-time.R:239:3', 'test-time.R:259:3',
        'test-tune_args.R:2:3', 'test-tune_args.R:11:3', 'test-unknown.R:33:3',
        'test-unknown.R:58:3', 'test-unknown.R:101:3', 'test-unknown.R:108:3',
        'test-unknown.R:145:3', 'test-unorder.R:27:3', 'test-unorder.R:42:3',
        'test-unorder.R:52:3', 'test-unorder.R:89:3',
        'test-update-role-requirements.R:9:3',
        'test-update-role-requirements.R:37:3',
        'test-update-role-requirements.R:46:3',
        'test-update-role-requirements.R:55:3',
        'test-update-role-requirements.R:77:3',
        'test-update-role-requirements.R:120:3',
        'test-update-role-requirements.R:143:3',
        'test-update-role-requirements.R:174:3',
        'test-update-role-requirements.R:188:3',
        'test-update-role-requirements.R:201:3',
        'test-update-role-requirements.R:250:3',
        'test-update-role-requirements.R:273:3',
        'test-update-role-requirements.R:293:3',
        'test-update-role-requirements.R:308:3', 'test-update.R:32:3',
        'test-update.R:48:3', 'test-update.R:61:3', 'test-window.R:18:3',
        'test-window.R:138:3', 'test-window.R:147:3', 'test-window.R:166:3',
        'test-window.R:173:3', 'test-window.R:245:3', 'test-window.R:258:3',
        'test-zv.R:116:3', 'test-zv.R:156:3'
      • {RcppML} is not installed (14): 'test-nnmf_sparse.R:2:3',
        'test-nnmf_sparse.R:18:3', 'test-nnmf_sparse.R:34:3',
        'test-nnmf_sparse.R:51:3', 'test-nnmf_sparse.R:64:3',
        'test-nnmf_sparse.R:77:3', 'test-nnmf_sparse.R:90:3',
        'test-nnmf_sparse.R:103:3', 'test-nnmf_sparse.R:118:3',
        'test-nnmf_sparse.R:138:3', 'test-nnmf_sparse.R:166:3',
        'test-nnmf_sparse.R:183:3', 'test-nnmf_sparse.R:193:3',
        'test-nnmf_sparse.R:216:3'
      • {dimRed} is not installed (15): 'test-ica.R:56:3', 'test-ica.R:109:3',
        'test-ica.R:126:3', 'test-ica.R:142:3', 'test-ica.R:170:3',
        'test-ica.R:189:3', 'test-ica.R:204:3', 'test-ica.R:230:3',
        'test-ica.R:245:3', 'test-ica.R:262:3', 'test-ica.R:284:3',
        'test-ica.R:314:3', 'test-ica.R:333:3', 'test-ica.R:350:3',
        'test-ica.R:377:3'
      • {fastICA} is not installed (1): 'test-ica.R:366:3'
      • {mixOmics} is not installed (22): 'test-pls.R:31:3', 'test-pls.R:49:3',
        'test-pls.R:67:3', 'test-pls.R:90:3', 'test-pls.R:115:3', 'test-pls.R:133:3',
        'test-pls.R:141:3', 'test-pls.R:164:3', 'test-pls.R:179:3',
        'test-pls.R:199:3', 'test-pls.R:289:3', 'test-pls.R:343:3',
        'test-pls.R:359:3', 'test-pls.R:369:3', 'test-pls.R:379:3',
        'test-pls.R:390:3', 'test-pls.R:418:3', 'test-pls.R:472:3',
        'test-pls.R:499:3', 'test-pls.R:515:3', 'test-pls.R:540:3',
        'test-pls.R:563:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-arrange.R:72:3'): doesn't destroy sparsity ───────────────────
      sparsevctrs::is_sparse_integer(bake(rec, NULL)$vs) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-arrange.R:73:3'): doesn't destroy sparsity ───────────────────
      sparsevctrs::is_sparse_integer(bake(rec, NULL)$am) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-filter.R:110:3'): doesn't destroy sparsity ───────────────────
      sparsevctrs::is_sparse_integer(bake(rec, NULL)$vs) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-filter.R:111:3'): doesn't destroy sparsity ───────────────────
      sparsevctrs::is_sparse_integer(bake(rec, NULL)$am) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-rename.R:58:3'): doesn't destroy sparsity ────────────────────
      sparsevctrs::is_sparse_integer(bake(rec, NULL)$new_vs) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-rename.R:59:3'): doesn't destroy sparsity ────────────────────
      sparsevctrs::is_sparse_integer(bake(rec, NULL)$am) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-rename_at.R:65:3'): doesn't destroy sparsity ─────────────────
      sparsevctrs::is_sparse_integer(bake(rec, NULL)$VS) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-rename_at.R:66:3'): doesn't destroy sparsity ─────────────────
      sparsevctrs::is_sparse_integer(bake(rec, NULL)$am) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      ── Failure ('test-select.R:159:3'): doesn't destroy sparsity ───────────────────
      sparsevctrs::is_sparse_integer(bake(rec, NULL)$vs) is not TRUE
      
      `actual`:   FALSE
      `expected`: TRUE 
      
      [ FAIL 9 | WARN 2 | SKIP 719 | PASS 2466 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking Rd cross-references ... NOTE
    ```
    Package unavailable to check Rd xrefs: ‘fastICA’
    ```

# sapfluxnetr

<details>

* Version: 0.1.4
* GitHub: https://github.com/sapfluxnet/sapfluxnetr
* Source code: https://github.com/cran/sapfluxnetr
* Date/Publication: 2023-01-25 15:30:02 UTC
* Number of recursive dependencies: 79

Run `revdepcheck::cloud_details(, "sapfluxnetr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(sapfluxnetr)
      > 
      > test_check("sapfluxnetr")
      Starting 2 test processes
      [ FAIL 1 | WARN 0 | SKIP 19 | PASS 329 ]
      
      ══ Skipped tests (19) ══════════════════════════════════════════════════════════
      • On CRAN (19): 'test-metrics.R:345:3', 'test-metrics.R:412:3',
        'test-metrics.R:459:3', 'test-metrics.R:506:3', 'test-metrics.R:605:3',
        'test-metrics.R:672:3', 'test-metrics.R:691:3', 'test-metrics.R:710:3',
        'test-metrics.R:729:3', 'test-metrics.R:748:3', 'test-metrics.R:767:3',
        'test-metrics.R:786:3', 'test-metrics.R:854:3', 'test-metrics.R:879:3',
        'test-metrics.R:968:3', 'test-metrics.R:1001:3', 'test-metrics.R:1035:3',
        'test-metrics.R:1069:3', 'test-sfn_data_classes.R:60:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-sfn_dplyr_methods.R:14:3'): sfn_filter returns correct results ──
      Error in `validObject(.Object)`: invalid class "sfn_data" object: 1: nrow(sapf_data) != length(timestamp) | nrow(env_data) != length(timestamp)
      invalid class "sfn_data" object: 2: length(timestamp) != length(solar_timestamp)
      invalid class "sfn_data" object: 3: nrow(sapf_flags) != length(timestamp) | nrow(env_flags) != length(timestamp)
      Backtrace:
           ▆
        1. └─sapfluxnetr::sfn_filter(...) at test-sfn_dplyr_methods.R:14:3
        2.   └─sapfluxnetr::sfn_data(...)
        3.     └─methods::new(`<chr>`, ...)
        4.       ├─methods::initialize(value, ...)
        5.       └─sapfluxnetr::initialize(value, ...)
        6.         └─sapfluxnetr (local) .local(.Object, ...)
        7.           ├─methods::callNextMethod(...)
        8.           │ └─base::eval(call, callEnv)
        9.           │   └─base::eval(call, callEnv)
       10.           └─methods (local) .nextMethod(...)
       11.             └─methods::validObject(.Object)
      
      [ FAIL 1 | WARN 0 | SKIP 19 | PASS 329 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 4 marked UTF-8 strings
    ```

