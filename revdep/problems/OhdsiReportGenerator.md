# OhdsiReportGenerator (2.3.1)

* GitHub: <https://github.com/OHDSI/OhdsiReportGenerator>
* Email: <mailto:jreps@its.jnj.com>
* GitHub mirror: <https://github.com/cran/OhdsiReportGenerator>

Run `revdepcheck::revdep_details(, "OhdsiReportGenerator")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     Backtrace:
          ▆
       1. ├─base (local) `<fn>`(x)
       2. ├─gt:::print.gt_tbl(x)
       3. │ ├─htmltools::as.tags(x, ...)
       4. │ └─gt:::as.tags.gt_tbl(x, ...)
       5. │   ├─htmltools::HTML(render_as_html(data = x))
       6. │   └─gt:::render_as_html(data = x)
       7. │     └─gt:::build_data(data = data, context = "html")
       8. │       └─gt:::resolve_footnotes_styles(data = data, tbl_type = "styles")
       9. │         ├─dplyr::summarize(...)
      10. │         └─dplyr:::summarise.data.frame(...)
      11. │           └─dplyr::summarise(...)
      12. │             └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
      13. │               ├─base::withCallingHandlers(...)
      14. │               └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      15. │                 └─base::lapply(.x, .f, ...)
      16. │                   └─dplyr (local) FUN(X[[i]], ...)
      17. │                     └─mask$eval_all_summarise(quo)
      18. │                       └─dplyr (local) eval()
      19. └─gt:::as_style(styles)
      20.   └─cli::cli_abort(...)
      21.     └─rlang::abort(...)
     Execution halted
     Closing database connection
     ```

