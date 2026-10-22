# recipes (1.4.0)

* GitHub: <https://github.com/tidymodels/recipes>
* Email: <mailto:max@posit.co>
* GitHub mirror: <https://github.com/cran/recipes>

Run `revdepcheck::revdep_details(, "recipes")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Expected `sparsevctrs::is_sparse_integer(bake(rec, NULL)$am)` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       ── Failure ('test-select.R:159:3'): doesn't destroy sparsity ───────────────────
       Expected `sparsevctrs::is_sparse_integer(bake(rec, NULL)$vs)` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       ── Error ('test-window.R:271:3'): tunable is setup to work with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-window.R:271:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       
       [ FAIL 18 | WARN 2 | SKIP 703 | PASS 2693 ]
       Error:
       ! Test failures.
       Execution halted
     ```

