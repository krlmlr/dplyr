# dm (1.1.2)

* GitHub: <https://github.com/cynkra/dm>
* Email: <mailto:kirill@cynkra.com>
* GitHub mirror: <https://github.com/cran/dm>

Run `revdepcheck::revdep_details(, "dm")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-duckplyr.R:9:3'): Simple duckplyr test ─────────────────────────
       Error in `groups(tbl)`: This operation cannot be carried out by DuckDB, and the input is a stingy duckplyr frame.
       i Use `compute(prudence = "lavish")` to materialize to temporary storage and continue with duckplyr.
       i See `vignette("prudence")` for other options.
       Backtrace:
            ▆
         1. ├─dplyr::summarize(...)
         2. └─dm:::summarise.dm_zoomed(...)
         3.   ├─rlang::set_names(map_chr(groups(tbl), as_string))
         4.   ├─purrr::map_chr(groups(tbl), as_string)
         5.   │ └─purrr:::map_("character", .x, .f, ..., .progress = .progress)
         6.   │   └─purrr:::vctrs_vec_compat(.x, .purrr_user_env)
         7.   ├─dplyr::groups(tbl)
         8.   └─dplyr:::groups.data.frame(tbl)
         9.     └─dplyr:::check_prudence(x, duckplyr_error)
        10.       └─cli::cli_abort(...)
        11.         └─rlang::abort(...)
       
       [ FAIL 1 | WARN 11 | SKIP 391 | PASS 1664 ]
       Error:
       ! Test failures.
       Warning message:
       call dbDisconnect() when finished working with a connection 
       Execution halted
     ```

