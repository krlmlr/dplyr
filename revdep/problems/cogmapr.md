# cogmapr (0.9.5)

* Email: <mailto:FrdVnW@proton.me>
* GitHub mirror: <https://github.com/cran/cogmapr>

Run `revdepcheck::revdep_details(, "cogmapr")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
          ▆
       1. ├─cogmapr::GraphIndicatorsTable(df.graph.indic)
       2. │ └─... %>% dplyr::select(indicator, value)
       3. ├─dplyr::select(., indicator, value)
       4. ├─dplyr::rename(., value = V1)
       5. ├─dplyr:::rename.data.frame(., value = V1)
       6. │ └─tidyselect::eval_rename(expr(c(...)), .data)
       7. │   └─tidyselect:::rename_impl(...)
       8. │     └─tidyselect:::eval_select_impl(...)
       9. │       ├─tidyselect:::with_subscript_errors(...)
      10. │       │ └─base::withCallingHandlers(...)
      11. │       └─tidyselect:::vars_select_eval(...)
      12. │         └─tidyselect:::walk_data_tree(expr, data_mask, context_mask)
      13. │           └─tidyselect:::eval_c(expr, data_mask, context_mask)
      14. │             └─tidyselect:::reduce_sels(node, data_mask, context_mask, init = init)
      15. │               └─tidyselect:::walk_data_tree(new, data_mask, context_mask)
      16. │                 └─tidyselect:::as_indices_sel_impl(...)
      17. │                   └─tidyselect:::as_indices_impl(...)
      18. │                     └─tidyselect:::chr_as_locations(x, vars, call = call, arg = arg)
      19. │                       └─vctrs::vec_as_location(...)
      20. └─vctrs (local) `<fn>`() at vctrs/R/subscript-loc.R:84:3
      21.   └─vctrs:::stop_subscript_oob(...)
      22.     └─vctrs:::stop_subscript(...) at vctrs/R/subscript-loc.R:503:3
      23.       └─rlang::abort(...) at vctrs/R/subscript.R:150:3
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         7. ├─dplyr::rename(., value = V1)
         8. ├─dplyr:::rename.data.frame(., value = V1)
         9. │ └─tidyselect::eval_rename(expr(c(...)), .data)
        10. │   └─tidyselect:::rename_impl(...)
        11. │     └─tidyselect:::eval_select_impl(...)
        12. │       ├─tidyselect:::with_subscript_errors(...)
        13. │       │ └─base::withCallingHandlers(...)
        14. │       └─tidyselect:::vars_select_eval(...)
        15. │         └─tidyselect:::walk_data_tree(expr, data_mask, context_mask)
        16. │           └─tidyselect:::eval_c(expr, data_mask, context_mask)
        17. │             └─tidyselect:::reduce_sels(node, data_mask, context_mask, init = init)
        18. │               └─tidyselect:::walk_data_tree(new, data_mask, context_mask)
        19. │                 └─tidyselect:::as_indices_sel_impl(...)
        20. │                   └─tidyselect:::as_indices_impl(...)
        21. │                     └─tidyselect:::chr_as_locations(x, vars, call = call, arg = arg)
        22. │                       └─vctrs::vec_as_location(...)
        23. └─vctrs (local) `<fn>`() at vctrs/R/subscript-loc.R:84:3
        24.   └─vctrs:::stop_subscript_oob(...)
        25.     └─vctrs:::stop_subscript(...) at vctrs/R/subscript-loc.R:503:3
        26.       └─rlang::abort(...) at vctrs/R/subscript.R:150:3
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 13 ]
       Error:
       ! Test failures.
       Execution halted
     ```

