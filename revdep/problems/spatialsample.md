# spatialsample (0.6.1)

* GitHub: <https://github.com/tidymodels/spatialsample>
* Email: <mailto:mike.mahoney.218@gmail.com>
* GitHub mirror: <https://github.com/cran/spatialsample>

Run `revdepcheck::revdep_details(, "spatialsample")` for more info

## Newly broken

*   checking S3 generic/method consistency ... WARNING
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0h30j/working_dir/RtmpIhQqSH/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     See section ‘Generic functions and methods’ in the ‘Writing R
     Extensions’ manual.
     ```

*   checking for code/documentation mismatches ... WARNING
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0h30j/working_dir/Rtmpvj90Pz/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     ```

*   checking dependencies in R code ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0h30j/working_dir/RtmpJCORa4/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     ```

*   checking foreign function calls ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0h30j/working_dir/Rtmpp4P2IQ/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     See chapter ‘System and foreign language interfaces’ in the ‘Writing R
     Extensions’ manual.
     ```

*   checking R code for possible problems ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0h30j/working_dir/RtmptxbYQC/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0h30j/working_dir/RtmpTMUlsD/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     ```

*   checking Rd \usage sections ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0h30j/working_dir/Rtmpj0B2Sd/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     The \usage entries for S3 methods should use the \method markup and not
     their full name.
     See chapter ‘Writing R documentation files’ in the ‘Writing R
     Extensions’ manual.
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

