# APCI

<details>

* Version: 1.0.6
* GitHub: NA
* Source code: https://github.com/cran/APCI
* Date/Publication: 2022-11-11 08:00:02 UTC
* Number of recursive dependencies: 86

Run `revdepcheck::cloud_details(, "APCI")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘1_tests.R’
    Running the tests in ‘tests/1_tests.R’ failed.
    Last 13 lines of output:
          acc2:pcc2     acc3:pcc2     acc4:pcc2     acc5:pcc2     acc6:pcc2 
      -2.230638e-01 -2.866165e-02 -2.709330e-01  3.672768e-02  4.514428e-01 
          acc7:pcc2     acc8:pcc2     acc9:pcc2     acc1:pcc3     acc2:pcc3 
       9.314896e-02 -3.026307e-01  1.955077e-01  2.006266e-02  3.860762e-02 
          acc3:pcc3     acc4:pcc3     acc5:pcc3     acc6:pcc3     acc7:pcc3 
      -4.245597e-01  4.277360e-02  1.772910e-01 -3.068869e-01  2.480294e-01 
          acc8:pcc3     acc9:pcc3     acc1:pcc4     acc2:pcc4     acc3:pcc4 
      -1.388784e-01  1.462934e-01 -3.977027e-01 -2.937361e-03  3.309025e-01 
          acc4:pcc4     acc5:pcc4     acc6:pcc4     acc7:pcc4     acc8:pcc4 
       2.240888e-01  1.819380e-01 -2.214242e-01 -3.464689e-02 -2.096800e-01 
          acc9:pcc4     acc1:pcc5     acc2:pcc5     acc3:pcc5     acc4:pcc5 
       1.501560e-01  2.210945e-02  2.440501e-01 -3.433860e-02 -1.498732e-01 
          acc5:pcc5     acc6:pcc5     acc7:pcc5     acc8:pcc5     acc9:pcc5 
      -5.887129e-01 -3.100993e-01  2.884895e-01  6.637979e-01 -2.959911e-01 
      Killed
    ```

# CodelistGenerator

<details>

* Version: 1.7.0
* GitHub: NA
* Source code: https://github.com/cran/CodelistGenerator
* Date/Publication: 2023-08-16 08:42:32 UTC
* Number of recursive dependencies: 116

Run `revdepcheck::cloud_details(, "CodelistGenerator")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘CodelistGenerator-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: getICD10StandardCodes
    > ### Title: Get corresponding standard codes for ICD-10 chapters and
    > ###   sub-chapters
    > ### Aliases: getICD10StandardCodes
    > 
    > ### ** Examples
    > 
    ...
      5. ├─dplyr::inner_join(...)
      6. └─dplyr:::inner_join.data.frame(...)
      7.   └─dplyr::inner_join(...)
      8.     ├─dplyr::auto_copy(x, y, copy = copy)
      9.     └─dplyr:::auto_copy.data.frame(x, y, copy = copy)
     10.       └─dplyr:::as_duckplyr_df(y)
     11.         └─rlang::abort("Must pass a plain data frame or a tibble to `as_duckplyr_df()`.")
    Execution halted
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
        7.   └─dplyr::inner_join(...)
        8.     ├─dplyr::auto_copy(x, y, copy = copy)
        9.     └─dplyr:::auto_copy.data.frame(x, y, copy = copy)
       10.       └─dplyr:::as_duckplyr_df(y)
       11.         └─rlang::abort("Must pass a plain data frame or a tibble to `as_duckplyr_df()`.")
      
      [ FAIL 2 | WARN 0 | SKIP 3 | PASS 128 ]
      Error: Test failures
      In addition: Warning messages:
      1: Connection is garbage-collected, use dbDisconnect() to avoid this. 
      2: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this. 
      3: Connection is garbage-collected, use dbDisconnect() to avoid this. 
      Execution halted
      Warning message:
      Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this. 
    ```

# crosshap

<details>

* Version: 1.2.2
* GitHub: NA
* Source code: https://github.com/cran/crosshap
* Date/Publication: 2023-05-02 07:50:08 UTC
* Number of recursive dependencies: 117

Run `revdepcheck::cloud_details(, "crosshap")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      Backtrace:
          ▆
       1. ├─crosshap::prepare_hap_umap(...) at test-umap.R:4:0
       2. │ └─... %>% ...
       3. ├─dplyr::left_join(., HapObject_eps$Indfile, .data$hap, by = "Ind")
       4. ├─dplyr:::left_join.data.frame(...)
       5. │ └─dplyr:::rel_try(...)
       6. ├─hap
       7. └─rlang:::`$.rlang_fake_data_pronoun`(.data, hap)
       8.   └─rlang:::stop_fake_data_subset(call)
       9.     └─rlang::abort(...)
      
      [ FAIL 1 | WARN 0 | SKIP 6 | PASS 4 ]
      Error: Test failures
      Execution halted
    ```

# egor

<details>

* Version: 1.23.3
* GitHub: https://github.com/tilltnet/egor
* Source code: https://github.com/cran/egor
* Date/Publication: 2023-03-16 04:40:02 UTC
* Number of recursive dependencies: 89

Run `revdepcheck::cloud_details(, "egor")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
        4. │   │ └─base::withCallingHandlers(...)
        5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        6. ├─dplyr::left_join(x, res, copy = TRUE)
        7. └─egor:::left_join.egor(x, res, copy = TRUE)
        8.   ├─dplyr::left_join(...)
        9.   └─dplyr:::left_join.data.frame(...)
       10.     └─dplyr::left_join(...)
       11.       ├─dplyr::auto_copy(x, y, copy = copy)
       12.       └─dplyr:::auto_copy.data.frame(x, y, copy = copy)
       13.         └─dplyr:::as_duckplyr_df(y)
       14.           └─rlang::abort("Must pass a plain data frame or a tibble to `as_duckplyr_df()`.")
      
      [ FAIL 1 | WARN 8 | SKIP 15 | PASS 205 ]
      Error: Test failures
      Execution halted
    ```

# iNZightTools

<details>

* Version: 1.13.0
* GitHub: https://github.com/iNZightVIT/iNZightTools
* Source code: https://github.com/cran/iNZightTools
* Date/Publication: 2023-01-26 22:10:02 UTC
* Number of recursive dependencies: 116

Run `revdepcheck::cloud_details(, "iNZightTools")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
       10.     └─base::sapply(allcode, tidy_code, width = width, indent = indent)
       11.       └─base::lapply(X = X, FUN = FUN, ...)
       12.         └─iNZightTools (local) FUN(X[[i]], ...)
      ── Error ('test_tidy_code.R:66:5'): tidying from file works OK ─────────────────
      Error in `FUN(X[[i]], ...)`: Please install suggested package: 'styler'
      Backtrace:
          ▆
       1. └─iNZightTools::tidy_all_code("messy_gapminder.txt") at test_tidy_code.R:66:4
       2.   └─base::sapply(allcode, tidy_code, width = width, indent = indent)
       3.     └─base::lapply(X = X, FUN = FUN, ...)
       4.       └─iNZightTools (local) FUN(X[[i]], ...)
      
      [ FAIL 5 | WARN 7 | SKIP 4 | PASS 383 ]
      Error: Test failures
      Execution halted
    ```

# madshapR

<details>

* Version: 1.0.0
* GitHub: https://github.com/maelstrom-research/madshapR
* Source code: https://github.com/cran/madshapR
* Date/Publication: 2023-06-20 17:50:02 UTC
* Number of recursive dependencies: 91

Run `revdepcheck::cloud_details(, "madshapR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘madshapR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: dataset_evaluate
    > ### Title: Generate a quality assessment report of a dataset
    > ### Aliases: dataset_evaluate
    > 
    > ### ** Examples
    > 
    > {
    ...
     21. ├─dplyr::group_by(., .data$row_duplicate)
     22. ├─tidyr::unite(., -1, col = "row_duplicate", sep = "")
     23. └─tidyr:::unite.data.frame(., -1, col = "row_duplicate", sep = "")
     24.   └─tidyr:::df_append(after = after)
     25.     └─tidyr:::check_number_whole(after, min = 0L, max = n, .internal = TRUE)
     26.       └─tidyr:::.rlang_types_check_number(...)
     27.         └─tidyr (local) .stop(x, what, ...)
     28.           └─tidyr:::stop_input_type(...)
     29.             └─rlang::abort(message, ..., call = call, arg = arg)
    Execution halted
    ```

## In both

*   checking Rd cross-references ... NOTE
    ```
    Package unavailable to check Rd xrefs: ‘haven’
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 22 marked UTF-8 strings
    ```

# manynet

<details>

* Version: 0.2.1
* GitHub: https://github.com/snlab-ch/manynet
* Source code: https://github.com/cran/manynet
* Date/Publication: 2023-08-11 13:40:06 UTC
* Number of recursive dependencies: 115

Run `revdepcheck::cloud_details(, "manynet")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘manynet-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: from
    > ### Title: Tools for joining lists of networks, graphs, and matrices
    > ### Aliases: from from_subgraphs from_egos from_waves from_slices
    > 
    > ### ** Examples
    > 
    > ison_adolescents %>%
    ...
      4.     ├─dplyr::full_join(out, object2, by = by, copy = TRUE)
      5.     └─tidygraph:::full_join.tbl_graph(out, object2, by = by, copy = TRUE)
      6.       ├─dplyr::full_join(...)
      7.       └─dplyr:::full_join.data.frame(...)
      8.         └─dplyr::full_join(...)
      9.           ├─dplyr::auto_copy(x, y, copy = copy)
     10.           └─dplyr:::auto_copy.data.frame(x, y, copy = copy)
     11.             └─dplyr:::as_duckplyr_df(y)
     12.               └─rlang::abort("Must pass a plain data frame or a tibble to `as_duckplyr_df()`.")
    Execution halted
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
        4. └─manynet::from_subgraphs(to_subgraphs(unicorn, "unicorn"))
        5.   └─manynet::join_nodes(out, ann[[i]])
        6.     ├─dplyr::full_join(out, object2, by = by, copy = TRUE)
        7.     └─tidygraph:::full_join.tbl_graph(out, object2, by = by, copy = TRUE)
        8.       ├─dplyr::full_join(...)
        9.       └─dplyr:::full_join.data.frame(...)
       10.         └─dplyr::full_join(...)
       11.           ├─dplyr::auto_copy(x, y, copy = copy)
       12.           └─dplyr:::auto_copy.data.frame(x, y, copy = copy)
       13.             └─dplyr:::as_duckplyr_df(y)
       14.               └─rlang::abort("Must pass a plain data frame or a tibble to `as_duckplyr_df()`.")
      
      [ FAIL 1 | WARN 0 | SKIP 7 | PASS 301 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking package dependencies ... NOTE
    ```
    Package which this enhances but not available for checking: ‘Rgraphviz’
    ```

# streamDepletr

<details>

* Version: 0.2.0
* GitHub: https://github.com/FoundrySpatial/streamDepletr
* Source code: https://github.com/cran/streamDepletr
* Date/Publication: 2023-07-19 21:30:02 UTC
* Number of recursive dependencies: 71

Run `revdepcheck::cloud_details(, "streamDepletr")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘intro-to-streamDepletr.Rmd’ using rmarkdown
    
    Quitting from lines 334-341 [unnamed-chunk-16] (intro-to-streamDepletr.Rmd)
    Error: processing vignette 'intro-to-streamDepletr.Rmd' failed with diagnostics:
    object '.' not found
    --- failed re-building ‘intro-to-streamDepletr.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘intro-to-streamDepletr.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# text2sdg

<details>

* Version: 1.1.1
* GitHub: https://github.com/dwulff/text2sdg
* Source code: https://github.com/cran/text2sdg
* Date/Publication: 2023-03-17 20:50:02 UTC
* Number of recursive dependencies: 94

Run `revdepcheck::cloud_details(, "text2sdg")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘text2sdg.Rmd’ using rmarkdown
    
    Quitting from lines 208-210 [unnamed-chunk-14] (text2sdg.Rmd)
    Error: processing vignette 'text2sdg.Rmd' failed with diagnostics:
    object 'document' not found
    --- failed re-building ‘text2sdg.Rmd’
    
    SUMMARY: processing the following file failed:
      ‘text2sdg.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 37 marked UTF-8 strings
    ```

