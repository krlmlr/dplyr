# embed (1.2.2)

* GitHub: <https://github.com/tidymodels/embed>
* Email: <mailto:emil.hvitfeldt@posit.co>
* GitHub mirror: <https://github.com/cran/embed>

Run `revdepcheck::revdep_details(, "embed")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-discretize_cart.R:303:3'): tunable is setup to works with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-discretize_cart.R:303:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       ── Error ('test-woe.R:475:3'): tunable is setup to works with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-woe.R:475:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       
       [ FAIL 2 | WARN 0 | SKIP 104 | PASS 362 ]
       Error:
       ! Test failures.
       Execution halted
     ```

