# cvms (2.0.1)

* GitHub: <https://github.com/ludvigolsen/cvms>
* Email: <mailto:r-pkgs@ludvigolsen.dk>
* GitHub mirror: <https://github.com/cran/cvms>

Run `revdepcheck::revdep_details(, "cvms")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ── Failure ('test_validate_fn.R:4533:5'): testing nested tibbles in multinomial validate_fn() ──
       Expected `class(output_19148)` to equal `c("tbl_df", "tbl", "data.frame")`.
       Differences:
       Lengths differ: 1 is not 3
       ── Failure ('test_validate_fn.R:4667:3'): testing nested tibbles in multinomial validate_fn() ──
       Expected `class(output_19148)` to equal `c("tbl_df", "tbl", "data.frame")`.
       Differences:
       Lengths differ: 1 is not 3
       ── Failure ('test_validate_fn.R:4787:3'): testing nested tibbles in multinomial validate_fn() ──
       Expected `class(output_19148)` to equal `c("tbl_df", "tbl", "data.frame")`.
       Differences:
       Lengths differ: 1 is not 3
       ── Failure ('test_validate_fn.R:5102:3'): testing nested tibbles in gaussian validate_fn() ──
       Expected `class(output_19148)` to equal `c("tbl_df", "tbl", "data.frame")`.
       Differences:
       Lengths differ: 1 is not 3
       ── Failure ('test_validate_fn.R:5152:3'): testing nested tibbles in gaussian validate_fn() ──
       Expected `class(output_19148)` to equal `c("tbl_df", "tbl", "data.frame")`.
       Differences:
       Lengths differ: 1 is not 3
       
       [ FAIL 30 | WARN 0 | SKIP 71 | PASS 3269 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       8. │         └─cvms:::internal_evaluate_predictions(...)
       9. │           └─cvms (local) eval_pred_fn(...)
      10. │             └─cvms:::base_select(...)
      11. │               ├─base::subset(data, select = cols)
      12. │               └─base::subset.data.frame(data, select = cols)
      13. │                 └─base::nrow(x)
      14. │                   ├─base::dim(x)
      15. │                   └─base::dim.data.frame(x)
      16. │                     └─base::.row_names_info(x, 2L)
      17. ├─dplyr::mutate(., Family = model_specifics[["family"]])
      18. ├─tibble::as_tibble(.)
      19. └─dplyr::bind_rows(.)
      20.   └─rlang::list2(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'cross_validating_custom_functions.Rmd' failed with diagnostics:
     GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘cross_validating_custom_functions.Rmd’
     
     --- re-building ‘evaluate_by_id.Rmd’ using rmarkdown
     --- finished re-building ‘evaluate_by_id.Rmd’
     
     --- re-building ‘picking_the_number_of_folds_for_cross-validation.Rmd’ using rmarkdown
     # A tibble: 1 × 1
       larger
     ```

