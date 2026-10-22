# ggdiagram (0.2.0)

* GitHub: <https://github.com/wjschne/ggdiagram>
* Email: <mailto:w.joel.schneider@gmail.com>
* GitHub mirror: <https://github.com/cran/ggdiagram>

Run `revdepcheck::revdep_details(, "ggdiagram")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
       9. │     │ │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
      10. │     │ │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
      11. │     │ └─base::withCallingHandlers(...)
      12. │     └─ggplot2 (local) f(l = layers[[i]], d = data[[i]])
      13. │       └─l$draw_geom(d, layout)
      14. │         └─ggplot2 (local) draw_geom(..., self = self)
      15. │           └─self$geom$draw_layer(...)
      16. │             └─ggplot2 (local) draw_layer(..., self = self)
      17. │               └─base::lapply(...)
      18. │                 └─ggplot2 (local) FUN(X[[i]], ...)
      19. │                   ├─rlang::inject(self$draw_panel(data, panel_params, coord, !!!params))
      20. │                   └─self$draw_panel(...)
      21. │                     └─ggtext (local) draw_panel(...)
      22. │                       └─gridtext::richtext_grob(...)
      23. │                         └─grid::convertHeight(margin[c(1, 3)], "pt", valueOnly = TRUE)
      24. │                           └─grid::convertUnit(...)
      25. │                             ├─grid:::upgradeUnit(x)
      26. │                             └─grid:::upgradeUnit.default(x)
      27. │                               └─base::stop("Not a unit object")
      28. └─base::.handleSimpleError(`<fn>`, "Not a unit object", base::quote(upgradeUnit.default(x)))
      29.   └─rlang (local) h(simpleError(msg, call))
      30.     └─handlers[[1L]](cnd)
      31.       └─cli::cli_abort(...)
      32.         └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       Actually got a <simpleError> with message:
         GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       ── Failure ('test-segment.R:218:3'): ob_segment geom and aesthetics ────────────
       Expected `as.geom(sl)` not to throw any errors.
       Actually got a <simpleError> with message:
         GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       ── Failure ('test-segment.R:221:3'): ob_segment geom and aesthetics ────────────
       Expected `get_tibble_defaults(s)` not to throw any errors.
       Actually got a <simpleError> with message:
         GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       ── Error ('test-segment.R:223:3'): ob_segment geom and aesthetics ──────────────
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. └─ggdiagram::get_tibble_defaults(s) at test-segment.R:223:3
        2.   ├─S7::S7_dispatch()
        3.   └─ggdiagram (local) `method(get_tibble_defaults, ggdiagram::ob_segment)`(x = `<ggdgr::_>`)
        4.     └─ggdiagram:::get_tibble_defaults_helper(...)
        5.       ├─d[[n]]
        6.       └─tibble:::`[[.tbl_df`(d, n)
       
       [ FAIL 21 | WARN 0 | SKIP 1 | PASS 2048 ]
       Error:
       ! Test failures.
       Execution halted
     ```

