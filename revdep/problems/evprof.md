# evprof (1.2.0)

* GitHub: <https://github.com/resourcefully-dev/evprof>
* Email: <mailto:marccanyigueral@gmail.com>
* GitHub mirror: <https://github.com/cran/evprof>

Run `revdepcheck::revdep_details(, "evprof")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     Caused by error in `group_by()`:
     ! This operation cannot be carried out by DuckDB, and the input is a
       stingy duckplyr frame.
     ℹ Use `compute(prudence = "lavish")` to materialize to temporary storage and
       continue with duckplyr.
     ℹ See `vignette("prudence")` for other options.
     Backtrace:
          ▆
       1. ├─evprof::get_connection_models(...)
       2. │ └─purrr::pmap_dfr(...)
       3. │   └─purrr::pmap(.l, .f, ...)
       4. │     └─purrr:::pmap_("list", .l, .f, ..., .progress = .progress)
       5. │       ├─purrr:::with_indexed_errors(...)
       6. │       │ └─base::withCallingHandlers(...)
       7. │       ├─purrr:::call_with_cleanup(...)
       8. │       └─evprof (local) .f(...)
       9. │         └─... %>% rename(ratio = "profile_ratio")
      10. ├─dplyr::rename(., ratio = "profile_ratio")
      11. ├─dplyr::summarise(...)
      12. ├─dplyr::group_by(., .data$profile)
      13. └─dplyr:::group_by.data.frame(., .data$profile)
      14.   └─dplyr:::check_prudence(.data, duckplyr_error)
      15.     └─cli::cli_abort(...)
      16.       └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       
       ══ Skipped tests (4) ═══════════════════════════════════════════════════════════
       • On CRAN (4): 'test-clustering.R:16:3', 'test-clustering.R:26:3',
         'test-modelling.R:104:3', 'test-modelling.R:135:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-modelling.R:22:3'): Get the connection models ──────────────────
       <purrr_error_indexed/rlang_error/error/condition>
       Error in `pmap(.l, .f, ...)`: i In index: 1.
       Caused by error in `group_by()`:
       ! This operation cannot be carried out by DuckDB, and the input is a stingy duckplyr frame.
       i Use `compute(prudence = "lavish")` to materialize to temporary storage and continue with duckplyr.
       i See `vignette("prudence")` for other options.
       ── Error ('test-modelling.R:37:3'): Plot of connection GMM are generated without errors ──
       <purrr_error_indexed/rlang_error/error/condition>
       Error in `pmap(.l, .f, ...)`: i In index: 1.
       Caused by error in `group_by()`:
       ! This operation cannot be carried out by DuckDB, and the input is a stingy duckplyr frame.
       i Use `compute(prudence = "lavish")` to materialize to temporary storage and continue with duckplyr.
       i See `vignette("prudence")` for other options.
       
       [ FAIL 2 | WARN 0 | SKIP 4 | PASS 46 ]
       Error:
       ! Test failures.
       Execution halted
     ```

