# PPbigdata (1.0.0)

* Email: <mailto:yajieritaduan@gmail.com>
* GitHub mirror: <https://github.com/cran/PPbigdata>

Run `revdepcheck::revdep_details(, "PPbigdata")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     +                      make.pbs = FALSE)
     Splitting data nuggets according to max EV...
     split #1
     split #2
     complete!
     Renumbering the data nuggets...
     completed!
     > 
     >   #get nugget centers, weights, and scales
     >   nugg = my.DN2$`Data Nuggets`[,2:(ncol(X)+1)]
     >   weight = my.DN2$`Data Nuggets`$Weight
     >   scale = my.DN2$`Data Nuggets`$Scale
     > 
     >   #2-dim guided tour by Natural Hermite Index based on data nuggets
     >   guidedTourNugg(nugg,weight,scale,dim = 2,index = "NH",cex = 0.5,max.tries = 15)
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpiFIEoj/working_dir/Rtmp6HevIz/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

