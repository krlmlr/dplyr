# ForestElementsR (3.0.0)

* Email: <mailto:p.biber@tum.de>
* GitHub mirror: <https://github.com/cran/ForestElementsR>

Run `revdepcheck::revdep_details(, "ForestElementsR")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
       4. │   ├─base::suppressWarnings(...)
       5. │   │ └─base::withCallingHandlers(...)
       6. │   ├─dplyr::mutate(...)
       7. │   └─dplyr:::mutate.data.frame(...)
       8. │     └─dplyr::mutate(...)
       9. │       └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      10. │         ├─base::withCallingHandlers(...)
      11. │         └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      12. │           └─mask$eval_all_mutate(quo)
      13. │             └─dplyr (local) eval()
      14. ├─ForestElementsR::v_gri(.data$species_id, .data$dbh_cm, .data$height_m)
      15. ├─ForestElementsR:::v_gri.default(...)
      16. │ └─ForestElementsR:::v_gri_core(species_id, dbh_cm, height_m, v_gri_param_orig)
      17. │   └─purrr::pmap_dbl(...)
      18. │     └─purrr:::pmap_("double", .l, .f, ..., .progress = .progress)
      19. │       └─purrr::map(.l, vctrs_vec_compat)
      20. │         └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      21. │           ├─purrr:::with_indexed_errors(...)
      22. │           │ └─base::withCallingHandlers(...)
      23. │           └─purrr:::call_with_cleanup(...)
      24. └─base::.handleSimpleError(...)
      25.   └─purrr (local) h(simpleError(msg, call))
      26.     └─cli::cli_abort(...)
      27.       └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         1. ├─testthat::expect_warning(...) at test_volume_v_gri.R:191:3
         2. │ └─testthat:::expect_condition_matching_(...)
         3. │   └─testthat:::quasi_capture(...)
         4. │     ├─testthat (local) .capture(...)
         5. │     │ └─base::withCallingHandlers(...)
         6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
         7. ├─ForestElementsR::v_gri(...)
         8. ├─ForestElementsR:::v_gri.default(...)
         9. │ └─ForestElementsR:::v_gri_core(species_id, dbh_cm, height_m, v_gri_param_orig)
        10. │   └─purrr::pmap_dbl(...)
        11. │     └─purrr:::pmap_("double", .l, .f, ..., .progress = .progress)
        12. │       └─purrr::map(.l, vctrs_vec_compat)
        13. │         └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
        14. │           ├─purrr:::with_indexed_errors(...)
        15. │           │ └─base::withCallingHandlers(...)
        16. │           └─purrr:::call_with_cleanup(...)
        17. └─base::.handleSimpleError(...)
        18.   └─purrr (local) h(simpleError(msg, call))
        19.     └─cli::cli_abort(...)
        20.       └─rlang::abort(...)
       
       [ FAIL 7 | WARN 0 | SKIP 0 | PASS 414 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      13.       └─purrr:::pmap_("double", .l, .f, ..., .progress = .progress)
      14.         └─purrr::map(.l, vctrs_vec_compat)
      15.           └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      16.             ├─purrr:::with_indexed_errors(...)
      17.             │ └─base::withCallingHandlers(...)
      18.             └─purrr:::call_with_cleanup(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'tree_species_codings.Rmd' failed with diagnostics:
     ℹ In argument: `v_cbm = v_gri(species_id, dbh_cm, height_m)`.
     Caused by error in `map()`:
     ℹ In index: 3.
     ℹ With name: C.
     Caused by error:
     ! GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘tree_species_codings.Rmd’
     
     --- re-building ‘yield_tables.Rmd’ using rmarkdown
     --- finished re-building ‘yield_tables.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘forestelementsr_package.Rmd’ ‘tree_species_codings.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

