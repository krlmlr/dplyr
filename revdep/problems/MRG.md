# MRG (0.3.30)

* Email: <mailto:jon.skoien@gmail.com>
* GitHub mirror: <https://github.com/cran/MRG>

Run `revdepcheck::revdep_details(, "MRG")` for more info

## Newly broken

*   checking tests ... NOTE
     ```
       Running ‘multiResGrid.R’
       Comparing ‘multiResGrid.Rout’ to ‘multiResGrid.Rout.save’ ...
     53,60d52
     < duckdb keeps downloaded extensions and secrets in a temporary directory:
     < ℹ /tmp/RtmpThv2Mr/working_dir/Rtmpgh7EWU/duckdb
     < This is removed when the R session ends.
     < • Extensions are re-downloaded each session.
     < • Secrets are lost.
     < ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     < ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     < ℹ See ?duckdb_storage for details and alternatives.
     ```

