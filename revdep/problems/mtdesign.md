# mtdesign (0.1.4)

* GitHub: <https://github.com/openpharma/mtdesign>
* Email: <mailto:mtdesign@puzzledface.net>
* GitHub mirror: <https://github.com/cran/mtdesign>

Run `revdepcheck::revdep_details(, "mtdesign")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(mtdesign)
       > 
       > test_check("mtdesign")
       duckdb keeps downloaded extensions and secrets in a temporary directory:
       i /tmp/RtmppJxLQQ/working_dir/Rtmpv1NCvp/duckdb
       This is removed when the R session ends.
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       The grid contains 1325870 rows.  This may take some time...
       Killed
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

