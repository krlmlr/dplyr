# admiral (1.5.0)

* GitHub: <https://github.com/pharmaverse/admiral>
* Email: <mailto:edoardo.mancini@roche.com>
* GitHub mirror: <https://github.com/cran/admiral>

Run `revdepcheck::revdep_details(, "admiral")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        1. └─testthat::expect_snapshot(...) at test-derive_vars_transposed.R:123:3
        2.   └─testthat:::expect_snapshot_(...)
       ── Failure ('test-derive_vars_transposed.R:136:3'): derive_vars_transposed Test 4: error if `relationship` is unexpected ──
       Expected ``%>%`(...)` to throw a error.
       Backtrace:
           ▆
        1. └─testthat::expect_snapshot(...) at test-derive_vars_transposed.R:136:3
        2.   └─testthat:::expect_snapshot_(...)
       ── Failure ('test-user_utils.R:206:3'): print.source Test 15: `source` objects containing `data.frame` ──
       Expected `... %>% ...` to be identical to `expected_print_output`.
       Differences:
       actual[5:10] vs expected[5:10]
         "definition:"
         "# A tibble: 2 x 3"
         "  TERMCHAR                   TERMNUM SRCVAR "
       - "* <chr>                        <int> <chr>  "
       + "  <chr>                        <int> <chr>  "
         "1 APPLICATION SITE ERYTHEMA 10003041 AEDECOD"
         "2 APPLICATION SITE PRURITUS 10003053 AEDECOD"
       
       
       [ FAIL 4 | WARN 0 | SKIP 138 | PASS 1116 ]
       Error:
       ! Test failures.
       Execution halted
     ```

