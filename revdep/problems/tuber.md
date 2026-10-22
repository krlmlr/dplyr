# tuber (2.0.0)

* GitHub: <https://github.com/gojiplus/tuber>
* Email: <mailto:gsood07@gmail.com>
* GitHub mirror: <https://github.com/cran/tuber>

Run `revdepcheck::revdep_details(, "tuber")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ── Failure ('test-channels.R:224:7'): get_all_channel_video_stats handles video details correctly ──
       Expected `result$view_count[1]` to equal "1000".
       Differences:
       `actual` is a logical vector (NA)
       `expected` is a character vector ('1000')
       
       Backtrace:
           ▆
        1. ├─testthat::with_mocked_bindings(...) at test-channels.R:16:3
        2. └─testthat::expect_equal(result$view_count[1], "1000") at test-channels.R:224:7
       ── Failure ('test-channels.R:225:7'): get_all_channel_video_stats handles video details correctly ──
       Expected `result$view_count[2]` to equal "2000".
       Differences:
       `actual` is a logical vector (NA)
       `expected` is a character vector ('2000')
       
       Backtrace:
           ▆
        1. ├─testthat::with_mocked_bindings(...) at test-channels.R:16:3
        2. └─testthat::expect_equal(result$view_count[2], "2000") at test-channels.R:225:7
       
       [ FAIL 6 | WARN 0 | SKIP 30 | PASS 397 ]
       Error:
       ! Test failures.
       Execution halted
     ```

