# multifear (0.1.5)

* GitHub: <https://github.com/AngelosPsy/multifear>
* Email: <mailto:amkrypotos@gmail.com>
* GitHub mirror: <https://github.com/cran/multifear>

Run `revdepcheck::revdep_details(, "multifear")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘multifear-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: mixed_mf
     > ### Title: mixed_mf
     > ### Aliases: mixed_mf
     > 
     > ### ** Examples
     > 
     > # Load example data
     > data(example_data)
     > 
     > cs1 <- paste0("CSP", 1:2)
     > cs2 <- paste0("CSM", 1:2)
     > subj <- "id"
     > 
     > # mixed models without groups
     > mixed_mf(cs1 = cs1, cs2 = cs2, subj = subj, data = example_data)
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         3. │ └─testthat:::eval_with_output(object, print = print, width = width)
         4. │   ├─withr::with_output_sink(path, withVisible(code))
         5. │   │ └─base::force(code)
         6. │   └─base::withVisible(code)
         7. ├─multifear::universe_cs(...)
         8. │ └─purrr::map_df(combRes, rbind)
         9. │   └─purrr::map(.x, .f, ...)
        10. │     └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
        11. │       ├─purrr:::with_indexed_errors(...)
        12. │       │ └─base::withCallingHandlers(...)
        13. │       ├─purrr:::call_with_cleanup(...)
        14. │       └─base (local) .f(.x[[i]], ...)
        15. │         └─base::rbind(deparse.level, ...)
        16. │           └─base::vapply(...)
        17. │             └─base (local) FUN(X[[i]], ...)
        18. │               └─base::.row_names_info(x, 2L)
        19. └─base::.handleSimpleError(...)
        20.   └─purrr (local) h(simpleError(msg, call))
        21.     └─cli::cli_abort(...)
        22.       └─rlang::abort(...)
       
       [ FAIL 1 | WARN 2 | SKIP 0 | PASS 16 ]
       Error:
       ! Test failures.
       Execution halted
     ```

