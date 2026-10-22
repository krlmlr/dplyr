# ustfd (0.4.4)

* GitHub: <https://github.com/groditi/ustfd>
* Email: <mailto:guillermo@newriverinvestments.com>
* GitHub mirror: <https://github.com/cran/ustfd>

Run `revdepcheck::revdep_details(, "ustfd")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         2. │ └─testthat:::expect_condition_matching_(...)
         3. │   └─testthat:::quasi_capture(...)
         4. │     ├─testthat (local) .capture(...)
         5. │     │ └─base::withCallingHandlers(...)
         6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
         7. ├─dplyr::union_all(ustfd_response_payload(json_response), ustfd_response_payload(zero_record_response)) at test-response_payload.R:52:6
         8. └─dplyr:::union_all.data.frame(...)
         9.   ├─dplyr:::rel_try(...)
        10.   │ └─rlang::try_fetch(rel, error = identity)
        11.   │   ├─base::tryCatch(...)
        12.   │   │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        13.   │   │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        14.   │   │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        15.   │   └─base::withCallingHandlers(...)
        16.   └─dplyr:::duckdb_rel_from_df(x)
        17.     └─dplyr:::get_default_duckdb_connection()
        18.       └─dplyr:::create_default_duckdb_connection()
        19.         └─duckdb::duckdb(dbdir = dbdir)
        20.           └─duckdb:::maybe_storage_location_message(resolved_home)
        21.             └─duckdb:::inform_up_to(...)
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 27 ]
       Error:
       ! Test failures.
       Execution halted
     ```

