# multilevelmod (1.0.0)

* GitHub: <https://github.com/tidymodels/multilevelmod>
* Email: <mailto:hannah@rstudio.com>
* GitHub mirror: <https://github.com/cran/multilevelmod>

Run `revdepcheck::revdep_details(, "multilevelmod")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmp2zclYl/working_dir/Rtmpni8XSm/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

