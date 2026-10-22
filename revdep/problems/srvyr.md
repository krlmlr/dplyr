# srvyr (1.3.1)

* GitHub: <https://github.com/gergness/srvyr>
* Email: <mailto:greg.freedman@gmail.com>
* GitHub mirror: <https://github.com/cran/srvyr>

Run `revdepcheck::revdep_details(, "srvyr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         3. ├─srvyr:::summarise.grouped_svy(., x = survey_mean())
         4. │ ├─dplyr::summarise(.data$variables, !!!.dots, .groups = .groups)
         5. │ └─dplyr:::summarise.grouped_df(.data$variables, !!!.dots, .groups = .groups)
         6. │   └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
         7. │     ├─base::withCallingHandlers(...)
         8. │     └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
         9. │       └─base::lapply(.x, .f, ...)
        10. │         └─dplyr (local) FUN(X[[i]], ...)
        11. │           └─mask$eval_all_summarise(quo)
        12. │             └─dplyr (local) eval()
        13. ├─srvyr::survey_mean()
        14. │ └─srvyr::survey_prop(...)
        15. │   └─srvyr:::peeled_cur_group_id(.full_svy, cur_group())
        16. │     └─srvyr:::equal_or_both_na(...)
        17. │       └─base::Ops.factor(x, y)
        18. │         └─base::stop("level sets of factors are different")
        19. └─base::.handleSimpleError(...)
        20.   └─dplyr (local) h(simpleError(msg, call))
        21.     └─dplyr (local) handler(cnd)
        22.       └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       
       [ FAIL 7 | WARN 1 | SKIP 0 | PASS 425 ]
       Error:
       ! Test failures.
       Execution halted
     ```

