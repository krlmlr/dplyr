# sourcoise (1.1.0)

* GitHub: <https://github.com/xtimbeau/sourcoise>
* Email: <mailto:xavier.timbeau@sciencespo.fr>
* GitHub mirror: <https://github.com/cran/sourcoise>

Run `revdepcheck::revdep_details(, "sourcoise")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         2. │ └─testthat:::check_bool(ok)
         3. └─sourcoise::sourcoise("prix_insee.R", track = "data.csv", metadata = TRUE)
         4.   └─sourcoise:::sourcoise_(...)
         5.     └─sourcoise:::get_metadata(...)
         6.       ├─dplyr::relocate(...)
         7.       ├─dplyr::mutate(...)
         8.       ├─dplyr::mutate(...)
         9.       └─dplyr::bind_cols(...)
        10.         └─vctrs::vec_cbind(!!!dots, .name_repair = .name_repair, .error_call = current_env())
       ── Error ('test-sourcoise.R:109:1'): (code run outside of `test_that()`) ───────
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. └─sourcoise::sourcoise_status(short = FALSE) at test-sourcoise.R:109:1
        2.   └─sourcoise:::get_metadata(root = root, filter = "recent")
        3.     ├─dplyr::relocate(...)
        4.     ├─dplyr::mutate(...)
        5.     ├─dplyr::mutate(...)
        6.     └─dplyr::bind_cols(...)
        7.       └─vctrs::vec_cbind(!!!dots, .name_repair = .name_repair, .error_call = current_env())
       
       [ FAIL 5 | WARN 0 | SKIP 0 | PASS 37 ]
       Error:
       ! Test failures.
       Execution halted
     ```

