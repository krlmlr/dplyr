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
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
        3. ├─dplyr::rename(., concept_id = "concept_id_2")
        4. ├─dplyr::select(., "concept_id_2", "name")
        5. ├─dplyr::inner_join(...)
        6. └─dplyr:::inner_join.data.frame(...)
        7.   └─dplyr::inner_join(...)
        8.     ├─dplyr::auto_copy(x, y, copy = copy)
        9.     └─dplyr:::auto_copy.data.frame(x, y, copy = copy)
       10.       └─dplyr:::as_duckplyr_df(y)
       11.         └─rlang::abort("Must pass a plain data frame or a tibble to `as_duckplyr_df()`.")
      
      [ FAIL 2 | WARN 0 | SKIP 3 | PASS 128 ]
      Error: Test failures
      In addition: There were 50 or more warnings (use warnings() to see the first 50)
      Execution halted
      There were 28 warnings (use warnings() to see them)
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
      In addition: There were 50 or more warnings (use warnings() to see the first 50)
      Execution halted
      Warning message:
      Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this. 
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
      In addition: There were 50 or more warnings (use warnings() to see the first 50)
      Execution halted
      There were 50 or more warnings (use warnings() to see the first 50)
    ```

# FFTrees

<details>

* Version: 2.0.0
* GitHub: https://github.com/ndphillips/FFTrees
* Source code: https://github.com/cran/FFTrees
* Date/Publication: 2023-06-05 23:30:02 UTC
* Number of recursive dependencies: 114

Run `revdepcheck::cloud_details(, "FFTrees")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      47: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      48: source_file(path, env(env), wrap = wrap)
      49: FUN(X[[i]], ...)
      50: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      51: doTryCatch(return(expr), name, parentenv, handler)
      52: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      53: tryCatchList(expr, classes, parentenv, handlers)
      54: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      55: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      56: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      57: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      58: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      59: test_check("FFTrees")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘FFTrees_accuracy_statistics.Rmd’ using rmarkdown
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    ...
    46: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    47: vweave_rmarkdown(...)
    48: engine$weave(file, quiet = quiet, encoding = enc)
    49: doTryCatch(return(expr), name, parentenv, handler)
    50: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    51: tryCatchList(expr, classes, parentenv, handlers)
    52: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    53: tools:::buildVignettes(dir = "/tmp/workdir/FFTrees/new/FFTrees.Rcheck/vign_test/FFTrees")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.2Mb
      sub-directories of 1Mb or more:
        doc   3.4Mb
    ```

# finnts

<details>

* Version: 0.3.0
* GitHub: https://github.com/microsoft/finnts
* Source code: https://github.com/cran/finnts
* Date/Publication: 2023-08-09 22:30:10 UTC
* Number of recursive dependencies: 239

Run `revdepcheck::cloud_details(, "finnts")` for more info

</details>

## Newly broken

*   checking whether package ‘finnts’ can be installed ... WARNING
    ```
    Found the following significant warnings:
      Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
      Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    See ‘/tmp/workdir/finnts/new/finnts.Rcheck/00install.out’ for details.
    ```

*   checking S3 generic/method consistency ... WARNING
    ```
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    ...
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    See section ‘Generic functions and methods’ in the ‘Writing R
    Extensions’ manual.
    ```

*   checking replacement functions ... WARNING
    ```
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    ...
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    The argument of a replacement function which corresponds to the right
    hand side must be named ‘value’.
    ```

*   checking for missing documentation entries ... WARNING
    ```
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    ...
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    All user-level objects in a package should have documentation entries.
    See chapter ‘Writing R documentation files’ in the ‘Writing R
    Extensions’ manual.
    ```

*   checking for code/documentation mismatches ... WARNING
    ```
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    ...
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    ```

*   checking whether the namespace can be loaded with stated dependencies ... NOTE
    ```
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    ...
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    
    A namespace must be able to be loaded with just the base namespace
    loaded: otherwise if the namespace gets loaded by a saved object, the
    session will be unable to start.
    
    Probably some imports need to be declared in the NAMESPACE file.
    ```

*   checking dependencies in R code ... NOTE
    ```
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    ...
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    ```

*   checking foreign function calls ... NOTE
    ```
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    ...
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    See chapter ‘System and foreign language interfaces’ in the ‘Writing R
    Extensions’ manual.
    ```

*   checking R code for possible problems ... NOTE
    ```
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    ...
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    ```

*   checking Rd \usage sections ... NOTE
    ```
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    ...
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    The \usage entries for S3 methods should use the \method markup and not
    their full name.
    See chapter ‘Writing R documentation files’ in the ‘Writing R
    Extensions’ manual.
    ```

# frailtyEM

<details>

* Version: 1.0.1
* GitHub: https://github.com/tbalan/frailtyEM
* Source code: https://github.com/cran/frailtyEM
* Date/Publication: 2019-09-22 13:00:10 UTC
* Number of recursive dependencies: 79

Run `revdepcheck::cloud_details(, "frailtyEM")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘frailtyEM-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: summary.emfrail
    > ### Title: Summary for 'emfrail' objects
    > ### Aliases: summary.emfrail
    > 
    > ### ** Examples
    > 
    > data("bladder")
    ...
    11: tryCatch(withCallingHandlers(expr, condition = function(cnd) {    {        .__handler_frame__. <- TRUE        .__setup_frame__. <- frame        if (inherits(cnd, "message")) {            except <- c("warning", "error")        }        else if (inherits(cnd, "warning")) {            except <- "error"        }        else {            except <- ""        }    }    while (!is_null(cnd)) {        if (inherits(cnd, "error")) {            out <- handlers[[1L]](cnd)            if (!inherits(out, "rlang_zap"))                 throw(out)        }        inherit <- .subset2(.subset2(cnd, "rlang"), "inherit")        if (is_false(inherit)) {            return()        }        cnd <- .subset2(cnd, "parent")    }}), stackOverflowError = handlers[[1L]])
    12: rlang::try_fetch(rel, error = identity)
    13: rel_try(`.locale argument not supported` = !is.null(.locale),     `dplyr.legacy_locale not supported` = isTRUE(getOption("dplyr.legacy_locale")),     {        rel <- duckdb_rel_from_df(.data)        if (length(dots) == 0) {            return(.data)        }        exprs <- rel_translate_dots(dots, .data)        out_rel <- rel_order(rel, exprs)        out <- rel_to_df(out_rel)        out <- dplyr_reconstruct(out, .data)        return(out)    })
    14: arrange.data.frame(., z)
    15: arrange(., z)
    16: mutate(., x = 1:n())
    17: ggplot(., aes(x = x, y = z))
    18: sum_mod$frail %>% arrange(z) %>% mutate(x = 1:n()) %>% ggplot(aes(x = x,     y = z))
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

## In both

*   checking LazyData ... NOTE
    ```
      'LazyData' is specified without a 'data' directory
    ```

*   checking re-building of vignette outputs ... NOTE
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘frailtyEM_manual.Rnw’ using Sweave
    Loading required package: survival
    Loading required package: gridExtra
    Warning: The `<scale>` argument of `guides()` cannot be `FALSE`. Use
    "none" instead as of ggplot2 3.3.4.
    Warning: Removed 2 rows containing missing values (`geom_path()`).
    Warning in data("kidney") : data set ‘kidney’ not found
    Warning in emfrail(Surv(time, status) ~ age + sex + cluster(id), data = kidney,  :
      Hessian virtually 0; frailty variance might be at the edge of the parameter space.
    ...
    l.55 \RequirePackage
                        [T1]{fontenc}^^M
    !  ==> Fatal error occurred, no output PDF file produced!
    --- failed re-building ‘frailtyEM_manual.Rnw’
    
    SUMMARY: processing the following file failed:
      ‘frailtyEM_manual.Rnw’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# funcharts

<details>

* Version: 1.3.1
* GitHub: https://github.com/unina-sfere/funcharts
* Source code: https://github.com/cran/funcharts
* Date/Publication: 2023-02-20 16:40:05 UTC
* Number of recursive dependencies: 114

Run `revdepcheck::cloud_details(, "funcharts")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘funcharts-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: regr_cc_fof_real_time
    > ### Title: Real-time functional regression control chart
    > ### Aliases: regr_cc_fof_real_time
    > 
    > ### ** Examples
    > 
    > library(funcharts)
    ...
    13: rel_try(`Can't use relational with zero-column result set.` = (length(exprs) ==     0), {    rel <- duckdb_rel_from_df(.data)    out <- exprs_project(rel, exprs, .data)    return(out)})
    14: select.data.frame(., -contains("contribution_"))
    15: select(., -contains("contribution_"))
    16: out %>% select(-contains("contribution_"))
    17: regr_cc_fof(object = mod_list[[ii]], mfdobj_y_new = mfdobj_y_new_list[[ii]],     mfdobj_x_new = mfdobj_x_new_list[[ii]], mfdobj_y_tuning = mfdobj_y_tuning_list[[ii]],     mfdobj_x_tuning = mfdobj_x_tuning_list[[ii]], alpha = alpha,     include_covariates = include_covariates, absolute_error = absolute_error)
    18: FUN(X[[i]], ...)
    19: lapply(seq_along(mod_list), single_k)
    20: regr_cc_fof_real_time(mod_list = mod_list, mfdobj_y_new_list = mfdobj_y2_list,     mfdobj_x_new_list = mfdobj_x2_list)
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      43: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      44: source_file(path, env(env), wrap = wrap)
      45: FUN(X[[i]], ...)
      46: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      47: doTryCatch(return(expr), name, parentenv, handler)
      48: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      49: tryCatchList(expr, classes, parentenv, handlers)
      50: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      51: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      52: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      53: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      54: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      55: test_check("funcharts")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

# ggfortify

<details>

* Version: 0.4.16
* GitHub: https://github.com/sinhrks/ggfortify
* Source code: https://github.com/cran/ggfortify
* Date/Publication: 2023-03-20 01:50:02 UTC
* Number of recursive dependencies: 125

Run `revdepcheck::cloud_details(, "ggfortify")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘test-all.R’
    Running the tests in ‘tests/test-all.R’ failed.
    Last 13 lines of output:
      41: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      42: source_file(path, env(env), wrap = wrap)
      43: FUN(X[[i]], ...)
      44: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      45: doTryCatch(return(expr), name, parentenv, handler)
      46: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      47: tryCatchList(expr, classes, parentenv, handlers)
      48: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      49: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      50: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      51: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      52: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      53: test_check("ggfortify")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

# ggmice

<details>

* Version: 0.1.0
* GitHub: https://github.com/amices/ggmice
* Source code: https://github.com/cran/ggmice
* Date/Publication: 2023-08-07 14:20:02 UTC
* Number of recursive dependencies: 120

Run `revdepcheck::cloud_details(, "ggmice")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘ggmice.Rmd’ using rmarkdown
    
     *** caught segfault ***
    address 0x2ec, cause 'memory not mapped'
    
    Traceback:
     1: duckdb:::df_is_materialized(df)
     2: doTryCatch(return(expr), name, parentenv, handler)
     3: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    ...
    38: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    39: vweave_rmarkdown(...)
    40: engine$weave(file, quiet = quiet, encoding = enc)
    41: doTryCatch(return(expr), name, parentenv, handler)
    42: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    43: tryCatchList(expr, classes, parentenv, handlers)
    44: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    45: tools:::buildVignettes(dir = "/tmp/workdir/ggmice/new/ggmice.Rcheck/vign_test/ggmice")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

# ggseqplot

<details>

* Version: 0.8.2
* GitHub: https://github.com/maraab23/ggseqplot
* Source code: https://github.com/cran/ggseqplot
* Date/Publication: 2023-03-15 12:10:15 UTC
* Number of recursive dependencies: 130

Run `revdepcheck::cloud_details(, "ggseqplot")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      45: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      46: source_file(path, env(env), wrap = wrap)
      47: FUN(X[[i]], ...)
      48: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      49: doTryCatch(return(expr), name, parentenv, handler)
      50: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      51: tryCatchList(expr, classes, parentenv, handlers)
      52: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      53: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      54: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      55: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      56: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      57: test_check("ggseqplot")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘ggseqplot.Rmd’ using rmarkdown
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    ...
    38: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    39: vweave_rmarkdown(...)
    40: engine$weave(file, quiet = quiet, encoding = enc)
    41: doTryCatch(return(expr), name, parentenv, handler)
    42: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    43: tryCatchList(expr, classes, parentenv, handlers)
    44: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    45: tools:::buildVignettes(dir = "/tmp/workdir/ggseqplot/new/ggseqplot.Rcheck/vign_test/ggseqplot")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

# gtsummary

<details>

* Version: 1.7.2
* GitHub: https://github.com/ddsjoberg/gtsummary
* Source code: https://github.com/cran/gtsummary
* Date/Publication: 2023-07-15 21:10:14 UTC
* Number of recursive dependencies: 207

Run `revdepcheck::cloud_details(, "gtsummary")` for more info

</details>

## Newly broken

*   checking whether package ‘gtsummary’ can be installed ... WARNING
    ```
    Found the following significant warnings:
      Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
      Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    See ‘/tmp/workdir/gtsummary/new/gtsummary.Rcheck/00install.out’ for details.
    ```

# IMP

<details>

* Version: 1.1
* GitHub: https://github.com/anup50695/IMPPackage
* Source code: https://github.com/cran/IMP
* Date/Publication: 2016-01-29 22:46:46
* Number of recursive dependencies: 60

Run `revdepcheck::cloud_details(, "IMP")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘IMP-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: staticConfMatrix
    > ### Title: Confusion Matrix for Binary Classification Models
    > ### Aliases: staticConfMatrix
    > 
    > ### ** Examples
    > 
    > model_1 <- glm(Species ~ Sepal.Length,data=iris,family=binomial)
    ...
    13: rel_try({    rel <- duckdb_rel_from_df(.data)    if (length(by_names) > 0) {        rel <- oo_prep(rel)    }    dots <- dplyr_quosures(...)    dots <- fix_auto_name(dots)    names_used <- character()    names_new <- character()    names_out <- rel_names(rel)    for (i in seq_along(dots)) {        dot <- dots[[i]]        new <- names(dots)[[i]]        names_new <- c(names_new, new)        new_pos <- match(new, names_out, nomatch = length(names_out) +             1L)        exprs <- imap(set_names(names_out), relexpr_reference,             rel = NULL)        new_expr <- rel_translate(dot, names_data = names_out,             alias = new, partition = by_names, need_window = TRUE)        exprs[[new_pos]] <- new_expr        rel <- rel_project(rel, unname(exprs))        names_out[[new_pos]] <- new        new_names_used <- intersect(attr(new_expr, "used"), names(.data))        names_used <- c(names_used, setdiff(new_names_used, names_used))    }    if (length(by_names) > 0) {        rel <- oo_restore(rel)    }    out <- rel_to_df(rel)    out <- dplyr_reconstruct(out, .data)    names_original <- names(.data)    out <- mutate_relocate(out = out, before = {        {            .before        }    }, after = {        {            .after        }    }, names_original = names_original)    used <- set_names(names(out) %in% names_used, names(out))    names_groups <- by_names    out <- duckplyr_mutate_keep(out = out, keep = keep, used = used,         names_new = names_new, names_groups = names_groups)    return(out)})
    14: mutate.data.frame(., pred_prob = as.factor(ifelse(x[, 2] >= t,     "Pred-1", "Pred-0")))
    15: mutate(., pred_prob = as.factor(ifelse(x[, 2] >= t, "Pred-1",     "Pred-0")))
    16: x %>% mutate(pred_prob = as.factor(ifelse(x[, 2] >= t, "Pred-1",     "Pred-0")))
    17: conf_mat(x, t)
    18: FUN(X[[i]], ...)
    19: lapply(list_models, function(x) conf_mat(x, t))
    20: staticConfMatrix(list(df1, df2), t = 0.2)
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

## In both

*   checking LazyData ... NOTE
    ```
      'LazyData' is specified without a 'data' directory
    ```

# ipfr

<details>

* Version: 1.0.2
* GitHub: https://github.com/dkyleward/ipfr
* Source code: https://github.com/cran/ipfr
* Date/Publication: 2020-04-01 20:20:02 UTC
* Number of recursive dependencies: 89

Run `revdepcheck::cloud_details(, "ipfr")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘ipfr-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: ipu_matrix
    > ### Title: Balance a matrix given row and column targets
    > ### Aliases: ipu_matrix
    > 
    > ### ** Examples
    > 
    > mtx <- matrix(data = runif(9), nrow = 3, ncol = 3)
    ...
    12: tryCatch(withCallingHandlers(expr, condition = function(cnd) {    {        .__handler_frame__. <- TRUE        .__setup_frame__. <- frame        if (inherits(cnd, "message")) {            except <- c("warning", "error")        }        else if (inherits(cnd, "warning")) {            except <- "error"        }        else {            except <- ""        }    }    while (!is_null(cnd)) {        if (inherits(cnd, "error")) {            out <- handlers[[1L]](cnd)            if (!inherits(out, "rlang_zap"))                 throw(out)        }        inherit <- .subset2(.subset2(cnd, "rlang"), "inherit")        if (is_false(inherit)) {            return()        }        cnd <- .subset2(cnd, "parent")    }}), stackOverflowError = handlers[[1L]])
    13: rlang::try_fetch(rel, error = identity)
    14: rel_try(`No implicit cross joins for left_join()` = is_cross_by(by),     `No relational implementation for left_join(copy = TRUE)` = copy,     {        out <- rel_join_impl(x, y, by, "left", na_matches, suffix,             keep, error_call)        return(out)    })
    15: left_join.data.frame(., geo_equiv, by = primary_id)
    16: dplyr::left_join(., geo_equiv, by = primary_id)
    17: seed %>% dplyr::left_join(geo_equiv, by = primary_id)
    18: ipu(seed, targets, ...)
    19: ipu_matrix(mtx, row_targets, column_targets)
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      42: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      43: source_file(path, env(env), wrap = wrap)
      44: FUN(X[[i]], ...)
      45: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      46: doTryCatch(return(expr), name, parentenv, handler)
      47: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      48: tryCatchList(expr, classes, parentenv, handlers)
      49: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      50: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      51: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      52: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      53: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      54: test_check("ipfr")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘common_ipf_problems.Rmd’ using rmarkdown
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    ...
    41: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    42: vweave_rmarkdown(...)
    43: engine$weave(file, quiet = quiet, encoding = enc)
    44: doTryCatch(return(expr), name, parentenv, handler)
    45: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    46: tryCatchList(expr, classes, parentenv, handlers)
    47: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    48: tools:::buildVignettes(dir = "/tmp/workdir/ipfr/new/ipfr.Rcheck/vign_test/ipfr")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

## In both

*   checking LazyData ... NOTE
    ```
      'LazyData' is specified without a 'data' directory
    ```

# itsdm

<details>

* Version: 0.2.1
* GitHub: https://github.com/LLeiSong/itsdm
* Source code: https://github.com/cran/itsdm
* Date/Publication: 2023-06-11 00:00:02 UTC
* Number of recursive dependencies: 85

Run `revdepcheck::cloud_details(, "itsdm")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘itsdm-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: independent_response
    > ### Title: Calculate independent responses of each variables.
    > ### Aliases: independent_response
    > 
    > ### ** Examples
    > 
    > # Using a pseudo presence-only occurrence dataset of
    ...
    15: mutate(., variable = names(responses_cont)[n])
    16: responses_cont[[n]] %>% mutate(variable = names(responses_cont)[n])
    17: FUN(X[[i]], ...)
    18: lapply(1:length(responses_cont), function(n) {    responses_cont[[n]] %>% mutate(variable = names(responses_cont)[n])})
    19: do.call(rbind, lapply(1:length(responses_cont), function(n) {    responses_cont[[n]] %>% mutate(variable = names(responses_cont)[n])}))
    20: .plot_responses(x, smooth_span)
    21: plot.IndependentResponse(independent_responses)
    22: plot(independent_responses)
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

# lares

<details>

* Version: 5.2.2
* GitHub: https://github.com/laresbernardo/lares
* Source code: https://github.com/cran/lares
* Date/Publication: 2023-05-18 10:40:02 UTC
* Number of recursive dependencies: 117

Run `revdepcheck::cloud_details(, "lares")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘lares-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: ohse
    > ### Title: One Hot Smart Encoding (Dummy Variables)
    > ### Aliases: ohse
    > 
    > ### ** Examples
    > 
    > data(dft)
    ...
    14: mutate.data.frame(.tbl, !!!funs)
    15: mutate(.tbl, !!!funs)
    16: mutate_all(., as.character)
    17: replace(., is.na(.), "NAs")
    18: vector_values %>% mutate_all(as.character) %>% replace(., is.na(.),     "NAs")
    19: ohse(dft, limit = 3)
    20: head(., 3)
    21: ohse(dft, limit = 3) %>% head(3)
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

# LifeInsuranceContracts

<details>

* Version: 0.0.4
* GitHub: NA
* Source code: https://github.com/cran/LifeInsuranceContracts
* Date/Publication: 2022-09-11 12:02:54 UTC
* Number of recursive dependencies: 95

Run `revdepcheck::cloud_details(, "LifeInsuranceContracts")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘using-the-lifeinsurancecontracts-package.Rmd’ using rmarkdown
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    ...
    52: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    53: vweave_rmarkdown(...)
    54: engine$weave(file, quiet = quiet, encoding = enc)
    55: doTryCatch(return(expr), name, parentenv, handler)
    56: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    57: tryCatchList(expr, classes, parentenv, handlers)
    58: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    59: tools:::buildVignettes(dir = "/tmp/workdir/LifeInsuranceContracts/new/LifeInsuranceContracts.Rcheck/vign_test/LifeInsuranceContracts")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
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
      In addition: There were 50 or more warnings (use warnings() to see the first 50)
      Execution halted
      There were 33 warnings (use warnings() to see them)
    ```

## In both

*   checking package dependencies ... NOTE
    ```
    Package which this enhances but not available for checking: ‘Rgraphviz’
    ```

# markets

<details>

* Version: 1.1.4
* GitHub: https://github.com/pi-kappa-devel/markets
* Source code: https://github.com/cran/markets
* Date/Publication: 2023-01-06 00:50:02 UTC
* Number of recursive dependencies: 73

Run `revdepcheck::cloud_details(, "markets")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      48: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      49: source_file(path, env(env), wrap = wrap)
      50: FUN(X[[i]], ...)
      51: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      52: doTryCatch(return(expr), name, parentenv, handler)
      53: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      54: tryCatchList(expr, classes, parentenv, handlers)
      55: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      56: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      57: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      58: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      59: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      60: test_check("markets")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘basic_usage.Rmd’ using rmarkdown
    
     *** caught segfault ***
    address 0xfa0, cause 'memory not mapped'
    
    Traceback:
     1: duckdb:::df_is_materialized(df)
     2: doTryCatch(return(expr), name, parentenv, handler)
     3: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    ...
    49: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    50: vweave_rmarkdown(...)
    51: engine$weave(file, quiet = quiet, encoding = enc)
    52: doTryCatch(return(expr), name, parentenv, handler)
    53: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    54: tryCatchList(expr, classes, parentenv, handlers)
    55: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    56: tools:::buildVignettes(dir = "/tmp/workdir/markets/new/markets.Rcheck/vign_test/markets")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.4Mb
      sub-directories of 1Mb or more:
        libs   4.0Mb
    ```

# mtdesign

<details>

* Version: 0.1.0
* GitHub: https://github.com/openpharma/mtdesign
* Source code: https://github.com/cran/mtdesign
* Date/Publication: 2022-10-27 15:32:39 UTC
* Number of recursive dependencies: 67

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
      Killed
    ```

# reappraised

<details>

* Version: 0.1.0
* GitHub: NA
* Source code: https://github.com/cran/reappraised
* Date/Publication: 2023-03-20 11:10:02 UTC
* Number of recursive dependencies: 143

Run `revdepcheck::cloud_details(, "reappraised")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘reappraised.Rmd’ using rmarkdown
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    ...
    41: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    42: vweave_rmarkdown(...)
    43: engine$weave(file, quiet = quiet, encoding = enc)
    44: doTryCatch(return(expr), name, parentenv, handler)
    45: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    46: tryCatchList(expr, classes, parentenv, handlers)
    47: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    48: tools:::buildVignettes(dir = "/tmp/workdir/reappraised/new/reappraised.Rcheck/vign_test/reappraised")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

# rprev

<details>

* Version: 1.0.5
* GitHub: https://github.com/stulacy/rprev-dev
* Source code: https://github.com/cran/rprev
* Date/Publication: 2021-05-04 16:40:03 UTC
* Number of recursive dependencies: 124

Run `revdepcheck::cloud_details(, "rprev")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘diagnostics.Rmd’ using rmarkdown
    
     *** caught segfault ***
    address 0x64, cause 'memory not mapped'
    
    Traceback:
     1: duckdb:::df_is_materialized(df)
     2: doTryCatch(return(expr), name, parentenv, handler)
     3: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    ...
    44: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    45: vweave_rmarkdown(...)
    46: engine$weave(file, quiet = quiet, encoding = enc)
    47: doTryCatch(return(expr), name, parentenv, handler)
    48: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    49: tryCatchList(expr, classes, parentenv, handlers)
    50: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    51: tools:::buildVignettes(dir = "/tmp/workdir/rprev/new/rprev.Rcheck/vign_test/rprev")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

# sf

<details>

* Version: 1.0-14
* GitHub: https://github.com/r-spatial/sf
* Source code: https://github.com/cran/sf
* Date/Publication: 2023-07-11 08:40:02 UTC
* Number of recursive dependencies: 156

Run `revdepcheck::cloud_details(, "sf")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘sf1.Rmd’ using rmarkdown
    --- finished re-building ‘sf1.Rmd’
    
    --- re-building ‘sf2.Rmd’ using rmarkdown
    --- finished re-building ‘sf2.Rmd’
    
    --- re-building ‘sf3.Rmd’ using rmarkdown
    --- finished re-building ‘sf3.Rmd’
    
    ...
    42: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    43: vweave_rmarkdown(...)
    44: engine$weave(file, quiet = quiet, encoding = enc)
    45: doTryCatch(return(expr), name, parentenv, handler)
    46: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    47: tryCatchList(expr, classes, parentenv, handlers)
    48: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    49: tools:::buildVignettes(dir = "/tmp/workdir/sf/new/sf.Rcheck/vign_test/sf")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 25.9Mb
      sub-directories of 1Mb or more:
        doc      1.7Mb
        libs    19.1Mb
        sqlite   1.5Mb
    ```

# sfnetworks

<details>

* Version: 0.6.3
* GitHub: https://github.com/luukvdmeer/sfnetworks
* Source code: https://github.com/cran/sfnetworks
* Date/Publication: 2023-03-22 16:40:02 UTC
* Number of recursive dependencies: 106

Run `revdepcheck::cloud_details(, "sfnetworks")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      42: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      43: source_file(path, env(env), wrap = wrap)
      44: FUN(X[[i]], ...)
      45: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      46: doTryCatch(return(expr), name, parentenv, handler)
      47: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      48: tryCatchList(expr, classes, parentenv, handlers)
      49: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      50: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      51: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      52: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      53: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      54: test_check("sfnetworks")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘sfn01_structure.Rmd’ using rmarkdown
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    --- finished re-building ‘sfn01_structure.Rmd’
    
    ...
    41: rmarkdown::render(file, encoding = encoding, quiet = quiet, envir = globalenv(),     output_dir = getwd(), ...)
    42: vweave_rmarkdown(...)
    43: engine$weave(file, quiet = quiet, encoding = enc)
    44: doTryCatch(return(expr), name, parentenv, handler)
    45: tryCatchOne(expr, names, parentenv, handlers[[1L]])
    46: tryCatchList(expr, classes, parentenv, handlers)
    47: tryCatch({    engine$weave(file, quiet = quiet, encoding = enc)    setwd(startdir)    output <- find_vignette_product(name, by = "weave", engine = engine)    if (!have.makefile && vignette_is_tex(output)) {        texi2pdf(file = output, clean = FALSE, quiet = quiet)        output <- find_vignette_product(name, by = "texi2pdf",             engine = engine)    }    outputs <- c(outputs, output)}, error = function(e) {    thisOK <<- FALSE    fails <<- c(fails, file)    message(gettextf("Error: processing vignette '%s' failed with diagnostics:\n%s",         file, conditionMessage(e)))})
    48: tools:::buildVignettes(dir = "/tmp/workdir/sfnetworks/new/sfnetworks.Rcheck/vign_test/sfnetworks")
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

# stabiliser

<details>

* Version: 1.0.6
* GitHub: NA
* Source code: https://github.com/cran/stabiliser
* Date/Publication: 2023-05-17 11:00:05 UTC
* Number of recursive dependencies: 149

Run `revdepcheck::cloud_details(, "stabiliser")` for more info

</details>

## Newly broken

*   checking S3 generic/method consistency ... WARNING
    ```
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    ...
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    See section ‘Generic functions and methods’ in the ‘Writing R
    Extensions’ manual.
    ```

*   checking Rd \usage sections ... NOTE
    ```
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    ...
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    The \usage entries for S3 methods should use the \method markup and not
    their full name.
    See chapter ‘Writing R documentation files’ in the ‘Writing R
    Extensions’ manual.
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespace in Imports field not imported from: ‘knitr’
      All declared Imports should be used.
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
    --- re-building ‘intro-to-streamDepletr.Rmd’ using rmarkdown
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    ...
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    ```

# SWMPr

<details>

* Version: 2.5.0
* GitHub: https://github.com/fawda123/SWMPr
* Source code: https://github.com/cran/SWMPr
* Date/Publication: 2023-07-16 20:00:02 UTC
* Number of recursive dependencies: 116

Run `revdepcheck::cloud_details(, "SWMPr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      19: eval(exprs, env)
      20: eval(exprs, env)
      21: withCallingHandlers(invisible(eval(exprs, env)), error = function(err) {    abort(paste0("In path: ", encodeString(path, quote = "\"")),         parent = err)})
      22: source_file(path, env = env, chdir = chdir, wrap = wrap)
      23: FUN(X[[i]], ...)
      24: lapply(files, function(path) {    source_file(path, env = env, chdir = chdir, wrap = wrap)})
      25: source_dir(path, "^helper.*\\.[rR]$", env = env, wrap = FALSE)
      26: source_test_helpers(".", env)
      27: test_files_setup_state(test_dir, test_package, load_helpers,     env)
      28: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      29: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      30: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      31: test_check("SWMPr")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  6.4Mb
      sub-directories of 1Mb or more:
        data   4.6Mb
        help   1.4Mb
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
    --- re-building ‘text2sdg.Rmd’ using rmarkdown
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    Warning: Connection is garbage-collected, use dbDisconnect() to avoid this.
    ...
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    Warning: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this.
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 37 marked UTF-8 strings
    ```

# ThermalSampleR

<details>

* Version: 0.1.1
* GitHub: NA
* Source code: https://github.com/cran/ThermalSampleR
* Date/Publication: 2023-06-13 08:20:18 UTC
* Number of recursive dependencies: 86

Run `revdepcheck::cloud_details(, "ThermalSampleR")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘test_boot_one.R’
      Running ‘test_boot_two.R’
      Running ‘test_equiv_tost.R’
    Running the tests in ‘tests/test_equiv_tost.R’ failed.
    Last 13 lines of output:
      
       *** caught segfault ***
      address 0x7fdb7ec309d0, cause 'memory not mapped'
      An irrecoverable exception occurred. R is aborting now ...
      Error in seq.default(round(max(plot_var_dat$nsamp), 0)) : 
    ...
        'from' must be a finite number
      Calls: equiv_tost ... continuous_scale -> check_breaks_labels -> seq -> seq.default
      In addition: There were 30 warnings (use warnings() to see them)
      Execution halted
      Warning messages:
      1: Connection is garbage-collected, use dbDisconnect() to avoid this. 
      2: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this. 
      3: Connection is garbage-collected, use dbDisconnect() to avoid this. 
      4: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this. 
      5: Database is garbage-collected, use dbDisconnect(con, shutdown=TRUE) or duckdb::duckdb_shutdown(drv) to avoid this. 
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespaces in Imports field not imported from:
      ‘MASS’ ‘base’ ‘graphics’ ‘janitor’ ‘rlang’ ‘testthat’ ‘utils’
      All declared Imports should be used.
    ```

# tidyjson

<details>

* Version: 0.3.2
* GitHub: https://github.com/colearendt/tidyjson
* Source code: https://github.com/cran/tidyjson
* Date/Publication: 2023-01-07 00:20:02 UTC
* Number of recursive dependencies: 97

Run `revdepcheck::cloud_details(, "tidyjson")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘tidyjson-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: spread_values
    > ### Title: Spreads specific scalar values of a JSON object into new columns
    > ### Aliases: spread_values
    > 
    > ### ** Examples
    > 
    > 
    ...
    13: rel_try({    rel <- duckdb_rel_from_df(.data)    if (length(by_names) > 0) {        rel <- oo_prep(rel)    }    dots <- dplyr_quosures(...)    dots <- fix_auto_name(dots)    names_used <- character()    names_new <- character()    names_out <- rel_names(rel)    for (i in seq_along(dots)) {        dot <- dots[[i]]        new <- names(dots)[[i]]        names_new <- c(names_new, new)        new_pos <- match(new, names_out, nomatch = length(names_out) +             1L)        exprs <- imap(set_names(names_out), relexpr_reference,             rel = NULL)        new_expr <- rel_translate(dot, names_data = names_out,             alias = new, partition = by_names, need_window = TRUE)        exprs[[new_pos]] <- new_expr        rel <- rel_project(rel, unname(exprs))        names_out[[new_pos]] <- new        new_names_used <- intersect(attr(new_expr, "used"), names(.data))        names_used <- c(names_used, setdiff(new_names_used, names_used))    }    if (length(by_names) > 0) {        rel <- oo_restore(rel)    }    out <- rel_to_df(rel)    out <- dplyr_reconstruct(out, .data)    names_original <- names(.data)    out <- mutate_relocate(out = out, before = {        {            .before        }    }, after = {        {            .after        }    }, names_original = names_original)    used <- set_names(names(out) %in% names_used, names(out))    names_groups <- by_names    out <- duckplyr_mutate_keep(out = out, keep = keep, used = used,         names_new = names_new, names_groups = names_groups)    return(out)})
    14: mutate.data.frame(., ..id = seq_len(n()))
    15: NextMethod(generic, .data)
    16: mutate.tbl_json(., ..id = seq_len(n()))
    17: dplyr::mutate(., ..id = seq_len(n()))
    18: .x %>% dplyr::mutate(..id = seq_len(n()))
    19: spread_all(.)
    20: c(json, json2) %>% spread_all
    An irrecoverable exception occurred. R is aborting now ...
    Segmentation fault (core dumped)
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      51: test_code(test = NULL, code = exprs, env = env, default_reporter = StopReporter$new())
      52: source_file(path, env(env), wrap = wrap)
      53: FUN(X[[i]], ...)
      54: lapply(test_paths, test_one_file, env = env, wrap = wrap)
      55: doTryCatch(return(expr), name, parentenv, handler)
      56: tryCatchOne(expr, names, parentenv, handlers[[1L]])
      57: tryCatchList(expr, classes, parentenv, handlers)
      58: tryCatch(code, testthat_abort_reporter = function(cnd) {    cat(conditionMessage(cnd), "\n")    NULL})
      59: with_reporter(reporters$multi, lapply(test_paths, test_one_file,     env = env, wrap = wrap))
      60: test_files_serial(test_dir = test_dir, test_package = test_package,     test_paths = test_paths, load_helpers = load_helpers, reporter = reporter,     env = env, stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package)
      61: test_files(test_dir = path, test_paths = test_paths, test_package = package,     reporter = reporter, load_helpers = load_helpers, env = env,     stop_on_failure = stop_on_failure, stop_on_warning = stop_on_warning,     wrap = wrap, load_package = load_package, parallel = parallel)
      62: test_dir("testthat", package = package, reporter = reporter,     ..., load_package = "installed")
      63: test_check("tidyjson")
      An irrecoverable exception occurred. R is aborting now ...
      Segmentation fault (core dumped)
    ```

