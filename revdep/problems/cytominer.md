# cytominer (0.2.2)

* GitHub: <https://github.com/cytomining/cytominer>
* Email: <mailto:shsingh@broadinstitute.org>
* GitHub mirror: <https://github.com/cran/cytominer>

Run `revdepcheck::revdep_details(, "cytominer")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         7. │ │   ├─base::tryCatch(...)
         8. │ │   │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
         9. │ │   │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        10. │ │   │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        11. │ │   └─base::withCallingHandlers(...)
        12. │ └─dplyr:::duckdb_rel_from_df(x)
        13. │   └─duckdb$rel_from_df(con, df, experimental = experimental)
        14. │     └─duckdb:::rethrow_rapi_rel_from_df(...)
        15. │       ├─rlang::try_fetch(...)
        16. │       │ ├─base::tryCatch(...)
        17. │       │ │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        18. │       │ │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        19. │       │ │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        20. │       │ └─base::withCallingHandlers(...)
        21. │       └─duckdb:::rapi_rel_from_df(con, df, convert_opts)
        22. └─base::.handleSimpleError(...)
        23.   └─rlang (local) h(simpleError(msg, call))
        24.     └─handlers[[1L]](cnd)
        25.       └─duckdb:::rethrow_error_from_rapi(e, call)
        26.         └─rlang::abort(msg, call = call)
       
       [ FAIL 1 | WARN 19 | SKIP 0 | PASS 46 ]
       Error:
       ! Test failures.
       Execution halted
     ```

