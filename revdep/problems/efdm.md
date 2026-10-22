# efdm (0.2.3)

* GitHub: <https://github.com/mikkoku/efdm>
* Email: <mailto:mikko.kuronen@luke.fi>
* GitHub mirror: <https://github.com/cran/efdm>

Run `revdepcheck::revdep_details(, "efdm")` for more info

## Newly broken

*   checking tests ... NOTE
     ```
       Running ‘test_checks.R’
       Running ‘test_donothing.R’
       Comparing ‘test_donothing.Rout’ to ‘test_donothing.Rout.save’ ... OK
       Running ‘test_estim.R’
       Comparing ‘test_estim.Rout’ to ‘test_estim.Rout.save’ ...
     87,94d86
     < duckdb keeps downloaded extensions and secrets in a temporary directory:
     < ℹ /tmp/RtmpZJtU3h/working_dir/RtmpOGoIuV/duckdb
     < This is removed when the R session ends.
     < • Extensions are re-downloaded each session.
     < • Secrets are lost.
     < ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     < ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     < ℹ See ?duckdb_storage for details and alternatives.
       Running ‘test_factor.R’
       Running ‘test_factors.R’
       Running ‘test_prior_ff.R’
       Running ‘test_something.R’
       Running ‘test_split.R’
       Comparing ‘test_split.Rout’ to ‘test_split.Rout.save’ ... OK
       Running ‘test_transprobs.R’
     ```

