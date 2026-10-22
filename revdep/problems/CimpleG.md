# CimpleG (1.0.1)

* GitHub: <https://github.com/CostaLab/CimpleG>
* Email: <mailto:tiagomaie@hotmail.com>
* GitHub mirror: <https://github.com/cran/CimpleG>

Run `revdepcheck::revdep_details(, "CimpleG")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test2-CimpleG-elasticnet.R:5:3'): signatures and deconv w/ ElasticNet ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., "true_class")`: `.data` must be a data frame without row names.
       Backtrace:
            ▆
         1. ├─base::suppressWarnings(...) at test2-CimpleG-elasticnet.R:5:3
         2. │ └─base::withCallingHandlers(...)
         3. ├─CimpleG::CimpleG(...)
         4. ├─CimpleG:::CimpleG.matrix(...)
         5. │ └─CimpleG:::CimpleG_main(...)
         6. │   └─CimpleG::make_deconv_ref_matrix(...)
         7. │     └─... %>% t()
         8. ├─base::t(.)
         9. ├─base::as.matrix(.)
        10. └─tibble::column_to_rownames(., "true_class")
        11.   └─tibble:::abort_already_has_rownames()
        12.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        13.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 1 | WARN 0 | SKIP 5 | PASS 61 ]
       Error:
       ! Test failures.
       Execution halted
     ```

