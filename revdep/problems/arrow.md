# arrow (25.0.1)

* GitHub: <https://github.com/apache/arrow>
* Email: <mailto:jkeane@gmail.com>
* GitHub mirror: <https://github.com/cran/arrow>

Run `revdepcheck::revdep_details(, "arrow")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Differences:
       actual vs expected
                        total
         actual[1, ]        1
         actual[2, ]        2
         actual[3, ]        3
       - actual[4, ]        0
       + expected[4, ]     NA
         actual[5, ]        5
         actual[6, ]        6
         actual[7, ]        7
       
         `actual$total[1:7]`: 1.0 2.0 3.0 0.0 5.0 6.0 7.0
       `expected$total[1:7]`: 1.0 2.0 3.0  NA 5.0 6.0 7.0
       
       Backtrace:
           ▆
        1. └─arrow:::compare_dplyr_binding(...) at test-dplyr-summarize.R:1324:3
        2.   └─arrow:::expect_equal(via_table, expected, ...) at ./helper-expectation.R:97:3
        3.     └─testthat::expect_equal(...) at ./helper-expectation.R:38:5
       
       [ FAIL 6 | WARN 2 | SKIP 85 | PASS 6516 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

