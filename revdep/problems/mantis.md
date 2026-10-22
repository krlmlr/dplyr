# mantis (1.0.2)

* GitHub: <https://github.com/ropensci/mantis>
* Email: <mailto:phuongquan567@outlook.com>
* GitHub mirror: <https://github.com/cran/mantis>

Run `revdepcheck::revdep_details(, "mantis")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         9.             │ ├─base::withCallingHandlers(...)
        10.             │ └─vctrs::vec_recycle(value[[j]], nrow)
        11.             └─tibble:::fast_nrow(xo)
        12.               └─base::.row_names_info(x, 2L)
       ── Error ('test-report.R:546:3'): mantis_report() creates report in wd when no path supplied ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
            ▆
         1. └─mantis:::construct_rmd_tab(...)
         2.   └─mantis:::construct_tab_content(...)
         3.     └─mantis:::output_table_interactive(...)
         4.       └─mantis:::prepare_table(...)
         5.         ├─base::`$<-`(`*tmp*`, "alert_overall", value = `<lgl>`)
         6.         └─tibble:::`$<-.tbl_df`(`*tmp*`, "alert_overall", value = `<lgl>`)
         7.           └─tibble:::tbl_subassign(...)
         8.             ├─tibble:::vectbl_recycle_rhs_rows(...)
         9.             │ ├─base::withCallingHandlers(...)
        10.             │ └─vctrs::vec_recycle(value[[j]], nrow)
        11.             └─tibble:::fast_nrow(xo)
        12.               └─base::.row_names_info(x, 2L)
       
       [ FAIL 18 | WARN 0 | SKIP 3 | PASS 460 ]
       Error:
       ! Test failures.
       Execution halted
     ```

