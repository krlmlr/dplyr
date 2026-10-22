# mpathsenser (1.2.4)

* GitHub: <https://github.com/koenniem/mpathsenser>
* Email: <mailto:koen.niemeijer@kuleuven.be>
* GitHub mirror: <https://github.com/cran/mpathsenser>

Run `revdepcheck::revdep_details(, "mpathsenser")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `attr(actual$data[[5]]$original_time, 'tzone')`:   "UTC"
       `attr(expected$data[[5]]$original_time, 'tzone')`: ""   
       
       `class(actual$data[[6]])`:   "data.frame"                   
       `class(expected$data[[6]])`: "tbl_df"     "tbl" "data.frame"
       
       `attr(actual$data[[6]]$time, 'tzone')`:   "UTC"
       `attr(expected$data[[6]]$time, 'tzone')`: ""   
       
       `attr(actual$data[[6]]$original_time, 'tzone')`:   "UTC"
       `attr(expected$data[[6]]$original_time, 'tzone')`: ""   
       
       ── Error ('test-linking.R:415:3'): link ────────────────────────────────────────
       Error in `link(x = dat1, y = dat2, by = "participant_id", time = time, y_time = time, offset_before = 1800L, add_before = TRUE, add_after = TRUE)`: Argument `y_time` must be a POSIXt.
       x You supplied an integer.
       Backtrace:
           ▆
        1. └─mpathsenser::link(y_time = time) at test-linking.R:415:3
        2.   └─mpathsenser:::check_arg(pull(y, y_time), "POSIXt", arg = "y_time")
        3.     └─rlang::abort(msg, arg = arg, call = call)
       
       [ FAIL 8 | WARN 252 | SKIP 2 | PASS 909 ]
       Error:
       ! Test failures.
       Execution halted
     ```

