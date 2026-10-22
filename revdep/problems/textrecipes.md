# textrecipes (1.1.0)

* GitHub: <https://github.com/tidymodels/textrecipes>
* Email: <mailto:emil.hvitfeldt@posit.co>
* GitHub mirror: <https://github.com/cran/textrecipes>

Run `revdepcheck::revdep_details(, "textrecipes")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       ── Error ('test-tokenfilter.R:257:3'): tunable is setup to works with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-tokenfilter.R:257:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       ── Error ('test-tokenize.R:237:3'): tunable is setup to works with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-tokenize.R:237:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       
       [ FAIL 3 | WARN 0 | SKIP 140 | PASS 422 ]
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

