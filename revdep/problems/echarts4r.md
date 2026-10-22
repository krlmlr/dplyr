# echarts4r (0.5.0)

* GitHub: <https://github.com/JohnCoene/echarts4r>
* Email: <mailto:david.munoztord@mailbox.org>
* GitHub mirror: <https://github.com/cran/echarts4r>

Run `revdepcheck::revdep_details(, "echarts4r")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         9. │ │ │   │ └─promises::with_promise_domain(...)
        10. │ │ │   │   └─domain$wrapSync(expr)
        11. │ │ │   │     └─base::force(expr)
        12. │ │ │   ├─shiny:::with_otel_span_context(...)
        13. │ │ │   │ └─base::force(expr)
        14. │ │ │   ├─shiny::captureStackTraces(...)
        15. │ │ │   │ └─promises::with_promise_domain(...)
        16. │ │ │   │   └─domain$wrapSync(expr)
        17. │ │ │   │     └─base::withCallingHandlers(expr, error = doCaptureStack)
        18. │ │ │   └─env$runWith(self, func)
        19. │ │ │     └─shiny (local) contextFunc()
        20. │ │ │       └─shiny::..stacktraceon..(expr)
        21. │ │ ├─shiny::withReactiveDomain(...)
        22. │ │ │ └─promises::with_promise_domain(...)
        23. │ │ │   └─domain$wrapSync(expr)
        24. │ │ │     └─base::force(expr)
        25. │ │ └─withr::with_options(...)
        26. │ │   └─base::force(code)
        27. │ └─rlang::eval_tidy(quosure, mask, rlang::caller_env())
        28. └─testthat::expect_identical(new_values, expected_values) at test-webgl.R:69:5
       
       [ FAIL 11 | WARN 0 | SKIP 19 | PASS 2016 ]
       Error:
       ! Test failures.
       Execution halted
     ```

