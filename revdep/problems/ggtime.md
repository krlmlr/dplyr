# ggtime (1.1.0)

* GitHub: <https://github.com/mitchelloharawild/ggtime>
* Email: <mailto:mail@mitchelloharawild.com>
* GitHub mirror: <https://github.com/cran/ggtime>

Run `revdepcheck::revdep_details(, "ggtime")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Backtrace:
           ▆
        1. └─ggtime (local) expect_tsdisplay_season(lag_tsbl(hourly_times)) at test-gg-lag.R:141:3
        2.   └─testthat::expect_s3_class(p[[3]]$coordinates, "CoordLoop") at test-gg-lag.R:121:3
       ── Error ('test-gg-subseries.R:63:3'): gg_subseries() supports legacy indices ──
       Error in `as_mixtime_index(data[[idx]])`: Seasonal plots require a time index, not an index of class <integer>.
       Backtrace:
           ▆
        1. └─ggtime (local) expect_subseries_builds(subseries_tsbl(hourly_times), "day") at test-gg-subseries.R:63:3
        2.   └─ggtime::gg_subseries(data, y, period = period) at test-gg-subseries.R:16:3
        3.     └─ggtime:::as_mixtime_index(data[[idx]])
        4.       └─rlang::abort(...)
       ── Error ('test-gg-subseries.R:91:3'): gg_subseries() defaults to the smallest seasonal period ──
       Error in `season_period(period, ts_interval, auto = "smallest")`: Could not find a seasonal period to use for this time series.
       Backtrace:
           ▆
        1. └─ggtime (local) expect_subseries_builds(subseries_tsbl(hourly_times)) at test-gg-subseries.R:91:3
        2.   └─ggtime::gg_subseries(data, y, period = period) at test-gg-subseries.R:16:3
        3.     └─ggtime:::season_period(period, ts_interval, auto = "smallest")
        4.       └─rlang::abort("Could not find a seasonal period to use for this time series.")
       
       [ FAIL 4 | WARN 177 | SKIP 9 | PASS 936 ]
       Error:
       ! Test failures.
       Execution halted
     ```

