# sapfluxnetr (0.1.5)

* GitHub: <https://github.com/sapfluxnet/sapfluxnetr>
* Email: <mailto:victorgrandagarcia@gmail.com>
* GitHub mirror: <https://github.com/cran/sapfluxnetr>

Run `revdepcheck::revdep_details(, "sapfluxnetr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-metrics.R:1087:3', 'test-sfn_data_classes.R:60:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-sfn_dplyr_methods.R:14:3'): sfn_filter returns correct results ──
       Error in `validObject(.Object)`: invalid class "sfn_data" object: 1: nrow(sapf_data) != length(timestamp) | nrow(env_data) != length(timestamp)
       invalid class "sfn_data" object: 2: length(timestamp) != length(solar_timestamp)
       invalid class "sfn_data" object: 3: nrow(sapf_flags) != length(timestamp) | nrow(env_flags) != length(timestamp)
       Backtrace:
            ▆
         1. └─sapfluxnetr::sfn_filter(...) at test-sfn_dplyr_methods.R:14:3
         2.   └─sapfluxnetr::sfn_data(...)
         3.     └─methods::new(`<chr>`, ...)
         4.       ├─methods::initialize(value, ...)
         5.       └─sapfluxnetr::initialize(value, ...)
         6.         └─sapfluxnetr (local) .local(.Object, ...)
         7.           ├─methods::callNextMethod(...)
         8.           │ └─base::eval(call, callEnv)
         9.           │   └─base::eval(call, callEnv)
        10.           └─methods (local) .nextMethod(...)
        11.             └─methods::validObject(.Object)
       
       [ FAIL 1 | WARN 0 | SKIP 19 | PASS 341 ]
       Error:
       ! Test failures.
       Execution halted
     ```

