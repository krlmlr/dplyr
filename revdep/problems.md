# DiagrammeR

<details>

* Version: 1.0.10
* GitHub: https://github.com/rich-iannone/DiagrammeR
* Source code: https://github.com/cran/DiagrammeR
* Date/Publication: 2023-05-18 14:30:07 UTC
* Number of recursive dependencies: 99

Run `revdepcheck::cloud_details(, "DiagrammeR")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(DiagrammeR)
      > 
      > suppressWarnings(RNGversion("3.5.0"))
      > test_check("DiagrammeR")
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 1 marked UTF-8 string
    ```

# msigdbr

<details>

* Version: 7.5.1
* GitHub: https://github.com/igordot/msigdbr
* Source code: https://github.com/cran/msigdbr
* Date/Publication: 2022-03-30 07:00:16 UTC
* Number of recursive dependencies: 54

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
      installed size is  6.0Mb
      sub-directories of 1Mb or more:
        R   5.9Mb
    ```

# unpivotr

<details>

* Version: 0.6.3
* GitHub: https://github.com/nacnudus/unpivotr
* Source code: https://github.com/cran/unpivotr
* Date/Publication: 2023-01-22 21:20:02 UTC
* Number of recursive dependencies: 89

Run `revdepcheck::cloud_details(, "unpivotr")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘unpivotr-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: enhead
    > ### Title: Join data cells to headers
    > ### Aliases: enhead
    > 
    > ### ** Examples
    > 
    > library(dplyr)
    ...
     23. │                 └─tidyselect:::walk_data_tree(new, data_mask, context_mask)
     24. │                   └─tidyselect:::as_indices_sel_impl(...)
     25. │                     └─tidyselect:::as_indices_impl(...)
     26. │                       └─tidyselect:::chr_as_locations(x, vars, call = call, arg = arg)
     27. │                         └─vctrs::vec_as_location(...)
     28. └─vctrs (local) `<fn>`()
     29.   └─vctrs:::stop_subscript_oob(...)
     30.     └─vctrs:::stop_subscript(...)
     31.       └─rlang::abort(...)
    Execution halted
    ```

# vcfR

<details>

* Version: 1.14.0
* GitHub: https://github.com/knausb/vcfR
* Source code: https://github.com/cran/vcfR
* Date/Publication: 2023-02-10 15:00:05 UTC
* Number of recursive dependencies: 100

Run `revdepcheck::cloud_details(, "vcfR")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘vcfR-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: Convert to tidy data frames
    > ### Title: Convert vcfR objects to tidy data frames
    > ### Aliases: 'Convert to tidy data frames' vcfR2tidy extract_info_tidy
    > ###   extract_gt_tidy vcf_field_names
    > 
    > ### ** Examples
    > 
    ...
    > 
    > 
    > # extract all the INFO and FORMAT fields into a list of tidy
    > # data frames: fix, gt, and meta. Here we don't coerce columns
    > # to integer or numeric types...
    > Z <- vcfR2tidy(vcf)
    Error: Conversion Error: Could not convert string 'A' to DOUBLE
    terminate called after throwing an instance of 'cpp11::unwind_exception'
      what():  std::exception
    Aborted (core dumped)
    ```

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      > #library("vcfR")
      > #
      > #
      > test_check("vcfR")
      Loading required package: vcfR
      
         *****       ***   vcfR   ***       *****
         This is vcfR 1.14.0 
           browseVignettes('vcfR') # Documentation
           citation('vcfR') # Citation
         *****       *****      *****       *****
      
      terminate called after throwing an instance of 'cpp11::unwind_exception'
        what():  std::exception
      Aborted (core dumped)
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 14.7Mb
      sub-directories of 1Mb or more:
        libs  12.8Mb
    ```

# yardstick

<details>

* Version: 1.2.0
* GitHub: https://github.com/tidymodels/yardstick
* Source code: https://github.com/cran/yardstick
* Date/Publication: 2023-04-21 08:40:02 UTC
* Number of recursive dependencies: 126

Run `revdepcheck::cloud_details(, "yardstick")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      
      actual vs expected
                         .lift
      - actual[1, ]         NA
      + expected[1, ]      NaN
        actual[2, ]   1.500000
        actual[3, ]   1.500000
        actual[4, ]   1.125000
      
        `actual$.lift[1:4]`:  NA 1 2 1
      `expected$.lift[1:4]`: NaN 1 2 1
      
      [ FAIL 1 | WARN 0 | SKIP 153 | PASS 852 ]
      Error: Test failures
      Execution halted
    ```

