# stratamatch (0.1.9)

* GitHub: <https://github.com/raikens1/stratamatch>
* Email: <mailto:rockyaikens@gmail.com>
* GitHub mirror: <https://github.com/cran/stratamatch>

Run `revdepcheck::revdep_details(, "stratamatch")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Differences:
       Lengths differ: 2 is not 4
       ── Failure ('test-auto_stratify.R:524:3'): auto_stratify with logical treatment works ──
       Expected `dim(x)` to equal `c(n_strat, 6)`.
       Differences:
       1/2 mismatches
       [1] 2 - 4 == -2
       Backtrace:
           ▆
        1. └─stratamatch (local) expect_issue_table_ok(...) at test-auto_stratify.R:524:3
        2.   └─testthat::expect_equal(dim(x), c(n_strat, 6)) at test-auto_stratify.R:13:3
       ── Failure ('test-auto_stratify.R:525:3'): auto_stratify with logical treatment works ──
       Expected `dim(x)` to equal `c(n_strat, 3)`.
       Differences:
       1/2 mismatches
       [1] 2 - 4 == -2
       Backtrace:
           ▆
        1. └─stratamatch (local) expect_strata_table_ok(...) at test-auto_stratify.R:525:3
        2.   └─testthat::expect_equal(dim(x), c(n_strat, 3)) at test-auto_stratify.R:36:3
       
       [ FAIL 3 | WARN 11 | SKIP 0 | PASS 281 ]
       Error:
       ! Test failures.
       Execution halted
     ```

