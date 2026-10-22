# spatPomp (1.1.0)

* GitHub: <https://github.com/spatPomp-org/spatPomp>
* Email: <mailto:ionides@umich.edu>
* GitHub mirror: <https://github.com/cran/spatPomp>

Run `revdepcheck::revdep_details(, "spatPomp")` for more info

## Newly broken

*   checking tests ... NOTE
     ```
     ...
     < ℹ /tmp/RtmpN6L59M/working_dir/RtmpdLpSHo/duckdb
     < This is removed when the R session ends.
     < • Extensions are re-downloaded each session.
     < • Secrets are lost.
     < ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     < ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     < ℹ See ?duckdb_storage for details and alternatives.
       Running ‘measles2.R’
       Comparing ‘measles2.Rout’ to ‘measles2.Rout.save’ ...
     19,26d18
     < duckdb keeps downloaded extensions and secrets in a temporary directory:
     < ℹ /tmp/RtmpN6L59M/working_dir/RtmpXabnjo/duckdb
     < This is removed when the R session ends.
     < • Extensions are re-downloaded each session.
     < • Secrets are lost.
     < ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     < ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     < ℹ See ?duckdb_storage for details and alternatives.
       Running ‘param_formats.R’
       Comparing ‘param_formats.Rout’ to ‘param_formats.Rout.save’ ... OK
       Running ‘pfilter.R’
       Running ‘plot.R’
       Running ‘simulate.R’
       Running ‘spatPomp.R’
       Running ‘undefined.R’
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

