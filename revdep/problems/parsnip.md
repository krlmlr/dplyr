# parsnip (1.6.1)

* GitHub: <https://github.com/tidymodels/parsnip>
* Email: <mailto:max@posit.co>
* GitHub mirror: <https://github.com/cran/parsnip>

Run `revdepcheck::revdep_details(, "parsnip")` for more info

## Newly broken

*   checking for unstated dependencies in examples ... WARNING
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmptC6kiR/working_dir/RtmpSsOruL/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     ```

*   checking Rd line widths ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmptC6kiR/working_dir/RtmpqybmkQ/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     These lines will be truncated in the PDF manual.
     ```

