# GrowthCurveME (0.1.11)

* GitHub: <https://github.com/cancermodels-org/GrowthCurveME>
* Email: <mailto:anand_panigrahy@dfci.harvard.edu>
* GitHub mirror: <https://github.com/cran/GrowthCurveME>

Run `revdepcheck::revdep_details(, "GrowthCurveME")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     Backtrace:
          ▆
       1. ├─GrowthCurveME::summarize_growth_model_ls(...)
       2. │ └─... %>% dplyr::rename(Value = !!rlang::sym("V1"))
       3. ├─dplyr::rename(., Value = !!rlang::sym("V1"))
       4. ├─dplyr:::rename.data.frame(., Value = !!rlang::sym("V1"))
       5. │ └─tidyselect::eval_rename(expr(c(...)), .data)
       6. │   └─tidyselect:::rename_impl(...)
       7. │     └─tidyselect:::eval_select_impl(...)
       8. │       ├─tidyselect:::with_subscript_errors(...)
       9. │       │ └─base::withCallingHandlers(...)
      10. │       └─tidyselect:::vars_select_eval(...)
      11. │         └─tidyselect:::walk_data_tree(expr, data_mask, context_mask)
      12. │           └─tidyselect:::eval_c(expr, data_mask, context_mask)
      13. │             └─tidyselect:::reduce_sels(node, data_mask, context_mask, init = init)
      14. │               └─tidyselect:::walk_data_tree(new, data_mask, context_mask)
      15. │                 └─tidyselect:::as_indices_sel_impl(...)
      16. │                   └─tidyselect:::as_indices_impl(...)
      17. │                     └─tidyselect:::chr_as_locations(x, vars, call = call, arg = arg)
      18. │                       └─vctrs::vec_as_location(...)
      19. └─vctrs (local) `<fn>`() at vctrs/R/subscript-loc.R:84:3
      20.   └─vctrs:::stop_subscript_oob(...)
      21.     └─vctrs:::stop_subscript(...) at vctrs/R/subscript-loc.R:503:3
      22.       └─rlang::abort(...) at vctrs/R/subscript.R:150:3
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         3. ├─dplyr::rename(., Value = !!rlang::sym("V1"))
         4. ├─dplyr:::rename.data.frame(., Value = !!rlang::sym("V1"))
         5. │ └─tidyselect::eval_rename(expr(c(...)), .data)
         6. │   └─tidyselect:::rename_impl(...)
         7. │     └─tidyselect:::eval_select_impl(...)
         8. │       ├─tidyselect:::with_subscript_errors(...)
         9. │       │ └─base::withCallingHandlers(...)
        10. │       └─tidyselect:::vars_select_eval(...)
        11. │         └─tidyselect:::walk_data_tree(expr, data_mask, context_mask)
        12. │           └─tidyselect:::eval_c(expr, data_mask, context_mask)
        13. │             └─tidyselect:::reduce_sels(node, data_mask, context_mask, init = init)
        14. │               └─tidyselect:::walk_data_tree(new, data_mask, context_mask)
        15. │                 └─tidyselect:::as_indices_sel_impl(...)
        16. │                   └─tidyselect:::as_indices_impl(...)
        17. │                     └─tidyselect:::chr_as_locations(x, vars, call = call, arg = arg)
        18. │                       └─vctrs::vec_as_location(...)
        19. └─vctrs (local) `<fn>`() at vctrs/R/subscript-loc.R:84:3
        20.   └─vctrs:::stop_subscript_oob(...)
        21.     └─vctrs:::stop_subscript(...) at vctrs/R/subscript-loc.R:503:3
        22.       └─rlang::abort(...) at vctrs/R/subscript.R:150:3
       
       [ FAIL 21 | WARN 0 | SKIP 0 | PASS 20 ]
       Error:
       ! Test failures.
       Execution halted
     ```

