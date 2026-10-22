# themis (1.1.0)

* GitHub: <https://github.com/tidymodels/themis>
* Email: <mailto:emil.hvitfeldt@posit.co>
* GitHub mirror: <https://github.com/cran/themis>

Run `revdepcheck::revdep_details(, "themis")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       ── Error ('test-rose.R:321:3'): tunable is setup to works with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-rose.R:321:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       ── Error ('test-upsample.R:301:3'): tunable is setup to works with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-upsample.R:301:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       
       [ FAIL 4 | WARN 0 | SKIP 269 | PASS 1343 ]
       Error:
       ! Test failures.
       Execution halted
     ```

