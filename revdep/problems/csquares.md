# csquares (0.1.0)

* GitHub: <https://github.com/pepijn-devries/csquares>
* Email: <mailto:pepijn.devries@outlook.com>
* GitHub mirror: <https://github.com/cran/csquares>

Run `revdepcheck::revdep_details(, "csquares")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > ### ** Examples
     > 
     > as_csquares(cbind(x = 5.2399066, y = 52.7155812), resolution = 1)
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpha5oJd/working_dir/RtmpcPCjrs/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
              x        y      csquares
     x 5.239907 52.71558 N50 E  0 (1°)
     > orca_csq <- as_csquares(orca, csquares = "csquares")
     Error in `as_csquares()`:
     ! ✖ Could not translate coordinates
     ℹ Check the formating of your c-squares codes
     Backtrace:
         ▆
      1. ├─csquares::as_csquares(orca, csquares = "csquares")
      2. └─csquares:::as_csquares.data.frame(orca, csquares = "csquares")
      3.   ├─csquares::as_csquares(x[[csquares]], ...)
      4.   └─csquares:::as_csquares.character(x[[csquares]], ...)
      5.     └─rlang::abort(c(x = "Could not translate coordinates", i = "Check the formating of your c-squares codes"))
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         8. │ ├─dplyr::mutate(...)
         9. │ └─dplyr:::mutate.data.frame(...)
        10. │   └─dplyr::mutate(...)
        11. │     └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
        12. │       ├─base::withCallingHandlers(...)
        13. │       └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
        14. │         └─mask$eval_all_mutate(quo)
        15. │           └─dplyr (local) eval()
        16. ├─csquares:::.check_csquare_validity(.data$codes, allow_wildcards = TRUE)
        17. │ ├─dplyr::pull(...)
        18. │ ├─dplyr::summarise(...)
        19. │ ├─dplyr::group_by(...)
        20. │ ├─dplyr::mutate(...)
        21. │ ├─tidyr::unnest(...)
        22. │ └─tidyr:::unnest.data.frame(...)
        23. │   └─tidyr::unchop(...)
        24. │     └─vctrs::vec_size(data)
        25. └─base::.handleSimpleError(...) at vctrs/R/size.R:85:3
        26.   └─dplyr (local) h(simpleError(msg, call))
        27.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       
       [ FAIL 17 | WARN 0 | SKIP 6 | PASS 12 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     --- re-building ‘wildcards.Rmd’ using rmarkdown
     
     Quitting from wildcards.Rmd:24-30 [defs]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error in `as_csquares()`:
     ! ✖ Could not translate coordinates
     ℹ Check the formating of your c-squares codes
     ---
     Backtrace:
         ▆
      1. ├─csquares::as_csquares("1000:1|1000:2|1000:3|1000:4")
      2. └─csquares:::as_csquares.character("1000:1|1000:2|1000:3|1000:4")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'wildcards.Rmd' failed with diagnostics:
     ✖ Could not translate coordinates
     ℹ Check the formating of your c-squares codes
     --- failed re-building ‘wildcards.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘csquares-objects.Rmd’ ‘ices.Rmd’ ‘tidy.Rmd’ ‘wildcards.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

