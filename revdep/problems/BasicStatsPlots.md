# BasicStatsPlots (0.1.0)

* Email: <mailto:carced2009@live.ca>
* GitHub mirror: <https://github.com/cran/BasicStatsPlots>

Run `revdepcheck::revdep_details(, "BasicStatsPlots")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
          ▆
       1. ├─base (local) `<fn>`(x)
       2. ├─BasicStatsPlots:::print.vanova_result(x)
       3. │ ├─base::print(x$descriptive_table)
       4. │ └─gt:::print.gt_tbl(x$descriptive_table)
       5. │   ├─htmltools::as.tags(x, ...)
       6. │   └─gt:::as.tags.gt_tbl(x, ...)
       7. │     ├─htmltools::HTML(render_as_html(data = x))
       8. │     └─gt:::render_as_html(data = x)
       9. │       └─gt:::build_data(data = data, context = "html")
      10. │         └─gt:::resolve_footnotes_styles(data = data, tbl_type = "styles")
      11. │           ├─dplyr::summarize(...)
      12. │           └─dplyr:::summarise.data.frame(...)
      13. │             └─dplyr::summarise(...)
      14. │               └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
      15. │                 ├─base::withCallingHandlers(...)
      16. │                 └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      17. │                   └─base::lapply(.x, .f, ...)
      18. │                     └─dplyr (local) FUN(X[[i]], ...)
      19. │                       └─mask$eval_all_summarise(quo)
      20. │                         └─dplyr (local) eval()
      21. └─gt:::as_style(styles)
      22.   └─cli::cli_abort(...)
      23.     └─rlang::abort(...)
     Execution halted
     ```

