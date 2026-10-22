# bidux (0.4.0)

* GitHub: <https://github.com/jrwinget/bidux>
* Email: <mailto:contact@jrwinget.com>
* GitHub mirror: <https://github.com/cran/bidux>

Run `revdepcheck::revdep_details(, "bidux")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ── Error ('test-otel-compatibility.R:50:3'): bid_ingest_telemetry works with otel sqlite ──
       Error in `seq_len(length(timestamps) - min_changes + 1)`: argument must be coercible to non-negative integer
       Backtrace:
           ▆
        1. └─bidux::bid_ingest_telemetry(db_path) at test-otel-compatibility.R:50:3
        2.   └─bidux:::find_confusion_patterns(...)
       ── Error ('test-otel-compatibility.R:313:3'): otel data with dbi connection works end-to-end ──
       Error in `seq_len(length(timestamps) - min_changes + 1)`: argument must be coercible to non-negative integer
       Backtrace:
           ▆
        1. └─bidux::bid_ingest_telemetry(con) at test-otel-compatibility.R:313:3
        2.   └─bidux:::find_confusion_patterns(...)
       ── Failure ('test-otel_sqlite_coverage.R:102:3'): read_otel_sqlite joins span_attributes correctly ──
       Expected `all(is.na(result$session_id))` to be FALSE.
       Differences:
       `actual`:   TRUE 
       `expected`: FALSE
       
       
       [ FAIL 3 | WARN 56 | SKIP 8 | PASS 2692 ]
       Error:
       ! Test failures.
       Warning message:
       call dbDisconnect() when finished working with a connection 
       Execution halted
     ```

