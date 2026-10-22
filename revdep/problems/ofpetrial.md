# ofpetrial (0.1.3)

* GitHub: <https://github.com/DIFM-Brain/ofpetrial>
* Email: <mailto:tmieno2@unl.edu>
* GitHub mirror: <https://github.com/cran/ofpetrial>

Run `revdepcheck::revdep_details(, "ofpetrial")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > td <- assign_rates(exp_data, rate_info)
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmp4VPEIA/working_dir/Rtmp4xxHtU/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error in `dplyr::rowwise()`:
     ! This operation cannot be carried out by DuckDB, and the input is a
       stingy duckplyr frame.
     ℹ Use `compute(prudence = "lavish")` to materialize to temporary storage and
       continue with duckplyr.
     ℹ See `vignette("prudence")` for other options.
     Backtrace:
         ▆
      1. ├─ofpetrial::assign_rates(exp_data, rate_info)
      2. │ └─... %>% dplyr::rowwise()
      3. ├─dplyr::rowwise(.)
      4. └─dplyr:::rowwise.data.frame(.)
      5.   └─dplyr:::check_prudence(data, duckplyr_error)
      6.     └─cli::cli_abort(...)
      7.       └─rlang::abort(...)
     Execution halted
     ```

