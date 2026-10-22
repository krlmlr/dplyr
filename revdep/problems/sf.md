# sf (1.1-3)

* GitHub: <https://github.com/r-spatial/sf>
* Email: <mailto:edzer.pebesma@uni-muenster.de>
* GitHub mirror: <https://github.com/cran/sf>

Run `revdepcheck::revdep_details(, "sf")` for more info

## Newly broken

*   checking tests ... NOTE
     ```
     ...
     < This is removed when the R session ends.
     < • Extensions are re-downloaded each session.
     < • Secrets are lost.
     < ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     < ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     < ℹ See ?duckdb_storage for details and alternatives.
     < Joining with `by = join_by(b)`
     < Joining with `by = join_by(b)`
     < Joining with `by = join_by(b)`
     < Joining with `by = join_by(b)`
     < Joining with `by = join_by(b)`
     < Joining with `by = join_by(b)`
       Running ‘sfg.R’
       Comparing ‘sfg.Rout’ to ‘sfg.Rout.save’ ... OK
       Running ‘spatstat.R’
       Comparing ‘spatstat.Rout’ to ‘spatstat.Rout.save’ ... OK
       Running ‘stars.R’
       Comparing ‘stars.Rout’ to ‘stars.Rout.save’ ... OK
       Running ‘test-by-element.R’
       Comparing ‘test-by-element.Rout’ to ‘test-by-element.Rout.save’ ... OK
       Running ‘testthat.R’
       Running ‘units.R’
       Comparing ‘units.Rout’ to ‘units.Rout.save’ ... OK
       Running ‘wkb.R’
       Comparing ‘wkb.Rout’ to ‘wkb.Rout.save’ ... OK
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

