# tidysynthesis (0.1.3)

* GitHub: <https://github.com/UrbanInstitute/tidysynthesis>
* Email: <mailto:awilliams@urban.org>
* GitHub mirror: <https://github.com/cran/tidysynthesis>

Run `revdepcheck::revdep_details(, "tidysynthesis")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         2. │ └─testthat:::quasi_capture(...)
         3. │   ├─testthat (local) .capture(...)
         4. │   │ └─base::withCallingHandlers(...)
         5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
         6. ├─tidysynthesis::synthesize(presynth)
         7. │ └─tidysynthesis:::.synthesize(...)
         8. │   └─purrr::pmap(.l = synth_args, .f = synthesizer_engine, p = p)
         9. │     └─purrr:::pmap_("list", .l, .f, ..., .progress = .progress)
        10. │       ├─purrr:::with_indexed_errors(...)
        11. │       │ └─base::withCallingHandlers(...)
        12. │       ├─purrr:::call_with_cleanup(...)
        13. │       └─tidysynthesis (local) .f(...)
        14. │         └─base::tryCatch(...)
        15. │           └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        16. │             └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        17. │               └─value[[3L]](cond)
        18. │                 └─base::stop(e)
        19. └─purrr (local) `<fn>`(`<dply:::_>`)
        20.   └─cli::cli_abort(...)
        21.     └─rlang::abort(...)
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 981 ]
       Error:
       ! Test failures.
       Execution halted
     ```

