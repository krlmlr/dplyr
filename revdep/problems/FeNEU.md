# FeNEU (3.0.3)

* Email: <mailto:peter.biber@lwf.bayern.de>
* GitHub mirror: <https://github.com/cran/FeNEU>

Run `revdepcheck::revdep_details(, "FeNEU")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
       9. │             └─base::mapply(.f, .x, .y, MoreArgs = list(...), SIMPLIFY = FALSE)
      10. │               └─FeNEU (local) `<rlng_lm_>`(dots[[1L]][[1L]], dots[[2L]][[1L]])
      11. │                 └─FeNEU:::fe_ccircle_fromlist(...)
      12. │                   └─FeNEU:::.drop_non_tree_records(trees, x$plot_id)
      13. │                     └─ForestElementsR::fe_species_is_tree(df$ba_fe)
      14. │                       └─ForestElementsR::fe_species_non_tree_codes(coding)
      15. │                         └─ForestElementsR::fe_species_get_coding_table(coding)
      16. │                           ├─purrr::pluck(...)
      17. │                           │ └─purrr:::pluck_raw(.x, list2(...), .default = .default)
      18. │                           ├─dplyr::filter(...)
      19. │                           └─dplyr:::filter.data.frame(...)
      20. │                             └─dplyr::filter(...)
      21. │                               └─dplyr:::filter_impl(...)
      22. │                                 └─dplyr:::filter_rows(...)
      23. │                                   └─dplyr:::filter_eval(...)
      24. │                                     ├─base::withCallingHandlers(...)
      25. │                                     └─mask$eval_all_filter(dots_expanded, invert, env_filter)
      26. │                                       └─dplyr (local) eval()
      27. ├─dplyr:::dplyr_internal_error(...)
      28. │ └─rlang::abort(class = c(class, "dplyr:::internal_error"), dplyr_error_data = data)
      29. │   └─rlang:::signal_abort(cnd, .file)
      30. │     └─base::signalCondition(cnd)
      31. └─dplyr (local) `<fn>`(`<dpl:::__>`)
      32.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        24. │                             └─dplyr:::filter_impl(...)
        25. │                               └─dplyr:::filter_rows(...)
        26. │                                 └─dplyr:::filter_eval(...)
        27. │                                   ├─base::withCallingHandlers(...)
        28. │                                   └─mask$eval_all_filter(dots_expanded, invert, env_filter)
        29. │                                     └─dplyr (local) eval()
        30. ├─dplyr:::dplyr_internal_error(...)
        31. │ └─rlang::abort(class = c(class, "dplyr:::internal_error"), dplyr_error_data = data)
        32. │   └─rlang:::signal_abort(cnd, .file)
        33. │     └─base::signalCondition(cnd)
        34. └─dplyr (local) `<fn>`(`<dpl:::__>`)
        35.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       ── Error ('test-reclassify_pseudo_ingrowth_ccirc.R:23:3'): (code run outside of `test_that()`) ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `v_m3 = ForestElementsR::v_gri(.data$species_id, .data$dbh_cm, .data$height_m)`.
       Caused by error in `map()`:
       i In index: 3.
       i With name: C.
       Caused by error:
       ! GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       
       [ FAIL 34 | WARN 0 | SKIP 68 | PASS 519 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       5.         └─FeNEU:::calc_v_hub_m3_at_thrsh(...)
       6.           ├─ForestElementsR::v_gri(...)
       7.           └─ForestElementsR:::v_gri.fe_species_bavrn_state(...)
       8.             └─ForestElementsR:::v_gri_core(species_id, dbh_cm, height_m, v_gri_param_bv_st_shrt)
       9.               └─purrr::pmap_dbl(...)
      10.                 └─purrr:::pmap_("double", .l, .f, ..., .progress = .progress)
      11.                   └─purrr::map(.l, vctrs_vec_compat)
      12.                     └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      13.                       ├─purrr:::with_indexed_errors(...)
      14.                       │ └─base::withCallingHandlers(...)
      15.                       └─purrr:::call_with_cleanup(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'increment_estimation.Rmd' failed with diagnostics:
     ℹ In index: 3.
     ℹ With name: C.
     Caused by error:
     ! GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘increment_estimation.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘FeNEU.Rmd’ ‘data_formats.Rmd’ ‘increment_estimation.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

