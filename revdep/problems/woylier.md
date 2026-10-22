# woylier (0.0.9)

* GitHub: <https://github.com/numbats/woylier>
* Email: <mailto:dicook@monash.edu>
* GitHub mirror: <https://github.com/cran/woylier>

Run `revdepcheck::revdep_details(, "woylier")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘woylier-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: guided_tour_givens
     > ### Title: Create a guided tour with Givens interpolation
     > ### Aliases: guided_tour_givens
     > 
     > ### ** Examples
     > 
     > data(sine_curve)
     > tourr::animate_xy(sine_curve, guided_tour_givens(tourr::splines2d()), sphere=FALSE)
     Converting input data to the required matrix format.
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmp0WAahB/working_dir/Rtmp8JfGr7/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

