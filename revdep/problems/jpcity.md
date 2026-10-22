# jpcity (0.3.0)

* GitHub: <https://github.com/UchidaMizuki/jpcity>
* Email: <mailto:uchidamizuki@vivaldi.net>
* GitHub mirror: <https://github.com/cran/jpcity>

Run `revdepcheck::revdep_details(, "jpcity")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Backtrace:
           ▆
        1. ├─testthat::expect_equal(city_code(out[[1]]), c("01104", "01108")) at test-city_convert.R:4:3
        2. │ └─testthat::quasi_label(enquo(object), label)
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. └─jpcity::city_code(out[[1]])
        5.   └─jpcity:::assert_city(city)
        6.     └─cli::cli_abort("{.arg {name}} must inherit from {.cls city}.")
        7.       └─rlang::abort(...)
       ── Error ('test-city_convert.R:22:3'): city_convert-02 ─────────────────────────
       Error in `assert_city(city)`: `city` must inherit from <city>.
       Backtrace:
           ▆
        1. ├─testthat::expect_equal(city_code(out), "04403") at test-city_convert.R:22:3
        2. │ └─testthat::quasi_label(enquo(object), label)
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. └─jpcity::city_code(out)
        5.   └─jpcity:::assert_city(city)
        6.     └─cli::cli_abort("{.arg {name}} must inherit from {.cls city}.")
        7.       └─rlang::abort(...)
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 21 ]
       Error:
       ! Test failures.
       Execution halted
     ```

