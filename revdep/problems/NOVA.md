# NOVA (0.1.5)

* GitHub: <https://github.com/atudoras/NOVA>
* Email: <mailto:alex.tudorasmiravet@ucsf.edu>
* GitHub mirror: <https://github.com/cran/NOVA>

Run `revdepcheck::revdep_details(, "NOVA")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Displaying: PBS_WT_avg 
       Displaying: KA_KO_all 
       Displaying: KA_KO_avg 
       Displaying: combined_all 
       Displaying: combined_avg 
       Displaying: combined_average 
       [ FAIL 1 | WARN 16 | SKIP 0 | PASS 38 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-heatmaps.R:114:3'): split_by = 'combination' creates a combination_result with pheatmap ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., "Well")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─NOVA::create_mea_heatmaps_enhanced(...) at test-heatmaps.R:114:3
        2. │ └─... %>% tibble::column_to_rownames("Well")
        3. └─tibble::column_to_rownames(., "Well")
        4.   └─tibble:::abort_already_has_rownames()
        5.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        6.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 1 | WARN 16 | SKIP 0 | PASS 38 ]
       Error:
       ! Test failures.
       Execution halted
     ```

