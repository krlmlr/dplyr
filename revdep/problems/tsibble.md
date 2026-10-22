# tsibble (1.2.0)

* GitHub: <https://github.com/tidyverts/tsibble>
* Email: <mailto:mail@mitchelloharawild.com>
* GitHub mirror: <https://github.com/cran/tsibble>

Run `revdepcheck::revdep_details(, "tsibble")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Differences:
       `actual`:   "1D" 
       `expected`: "24h"
       
       ── Error ('test-tsibble.R:304:3'): Difftime with 1 day interval ────────────────
       Error in `rbind(deparse.level, ...)`: Not supported for tsibble.
       ℹ Please use `dplyr::bind_rows()` instead.
       Backtrace:
            ▆
         1. └─testthat::expect_identical(...) at test-tsibble.R:304:3
         2.   └─testthat:::expect_waldo_equal_(msg, act, exp, info, ...)
         3.     └─testthat:::waldo_compare(...)
         4.       └─waldo::compare(x, y, ..., x_arg = x_arg, y_arg = y_arg)
         5.         └─waldo:::compare_structure(x, y, paths = c(x_arg, y_arg), opts = opts)
         6.           └─waldo:::compare_data_frame(x, y, paths, opts = opts)
         7.             └─waldo:::df_rows(x, y, paths = paths, tolerance = opts$tolerance)
         8.               └─waldo:::printed_rows(x, y, paths = paths)
         9.                 └─base::rbind(x, y)
        10.                   └─tsibble (local) rbind(deparse.level, ...)
        11.                     └─rlang::abort(c("Not supported for tsibble.", i = "Please use `dplyr::bind_rows()` instead."))
       
       [ FAIL 6 | WARN 5 | SKIP 8 | PASS 817 ]
       Error:
       ! Test failures.
       Execution halted
     ```

