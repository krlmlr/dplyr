# surveyexplorer (0.2.0)

* Email: <mailto:liamhllr2@gmail.com>
* GitHub mirror: <https://github.com/cran/surveyexplorer>

Run `revdepcheck::revdep_details(, "surveyexplorer")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     • Style with index `1` is invalid.
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
     ```

*   checking tests ... ERROR
     ```
     ...
       i /tmp/RtmpQs7Qy0/working_dir/RtmpNG1APH/duckdb
       This is removed when the R session ends.
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Estimes are only preciese to one significant digit, weights may have been rounded
       Estimes are only preciese to one significant digit, weights may have been rounded
       Saving _problems/test-singlechoice-89.R
       [ FAIL 1 | WARN 48 | SKIP 0 | PASS 68 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-singlechoice.R:89:3'): sc graph: subgroups to exclude ──────────
       Error in `single_summary(., !!question, if (!is.null(group_by)) {     group_by }, subgroups_to_exclude, if (!is.null(weights)) {     weights }, na.rm)`: Levels to exclude not found within group_by variable
       Backtrace:
           ▆
        1. ├─surveyexplorer::single_freq(...) at test-singlechoice.R:89:3
        2. │ └─dataset %>% ...
        3. └─surveyexplorer::single_summary(...)
       
       [ FAIL 1 | WARN 48 | SKIP 0 | PASS 68 ]
       Error:
       ! Test failures.
       Execution halted
     ```

