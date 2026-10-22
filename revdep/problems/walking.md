# walking (0.8.2)

* Email: <mailto:muschellij2@gmail.com>
* GitHub mirror: <https://github.com/cran/walking>

Run `revdepcheck::revdep_details(, "walking")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     +                                  method = "revised")
     +   out = estimate_steps_sdt(x, sample_rate = 10L)
     + }
     Rows: 98 Columns: 6
     ── Column specification ────────────────────────────────────────────────────────
     Delimiter: ","
     chr  (1): accuracy
     dbl  (4): timestamp, x, y, z
     dttm (1): UTC time
     
     ℹ Use `spec()` to retrieve the full column specification for this data.
     ℹ Specify the column types or set `show_col_types = FALSE` to quiet this message.
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpUY4Sst/working_dir/Rtmp2jMKGv/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Finding Peak Locations
     Error in peak_func(segments = segments, acc = acc, n_samples = n_samples,  : 
       isTRUE(all.equal(new_index[, ncol(new_index)], to)) is not TRUE
     Calls: estimate_steps_verisense -> do.call -> <Anonymous> -> peak_func -> stopifnot
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       Error in `peak_func(segments = segments, acc = acc, n_samples = n_samples, k = k, half_k = half_k, peak_info = peak_info)`: isTRUE(all.equal(new_index[, ncol(new_index)], to)) is not TRUE
       Backtrace:
           ▆
        1. └─walking::verisense_count_steps(...) at test-verisense_count_steps.R:5:3
        2.   └─walking (local) peak_func(...)
        3.     └─base::stopifnot(...)
       ── Error ('test-verisense_count_steps.R:18:3'): verisense_count_steps peak_finder gives same with CSV ──
       Error in `peak_func(segments = segments, acc = acc, n_samples = n_samples, k = k, half_k = half_k, peak_info = peak_info)`: isTRUE(all.equal(new_index[, ncol(new_index)], to)) is not TRUE
       Backtrace:
           ▆
        1. └─walking::verisense_count_steps(data, sample_rate = 10L, peak_finder = "fast") at test-verisense_count_steps.R:18:3
        2.   └─walking (local) peak_func(...)
        3.     └─base::stopifnot(...)
       ── Error ('test-verisense_count_steps.R:27:3'): verisense_count_steps gives same  works ──
       Error in `peak_func(segments = segments, acc = acc, n_samples = n_samples, k = k, half_k = half_k, peak_info = peak_info)`: isTRUE(all.equal(new_index[, ncol(new_index)], to)) is not TRUE
       Backtrace:
           ▆
        1. └─walking::verisense_count_steps(input_data, sample_rate = 15L) at test-verisense_count_steps.R:27:3
        2.   └─walking (local) peak_func(...)
        3.     └─base::stopifnot(...)
       
       [ FAIL 4 | WARN 0 | SKIP 0 | PASS 51 ]
       Error:
       ! Test failures.
       Execution halted
     ```

