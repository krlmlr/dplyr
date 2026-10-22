# PUMP (1.0.5)

* GitHub: <https://github.com/MDRCNY/PUMP>
* Email: <mailto:luke_miratrix@gse.harvard.edu>
* GitHub mirror: <https://github.com/cran/PUMP>

Run `revdepcheck::revdep_details(, "PUMP")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: plot.pumpgridresult
     > ### Title: Plot a pumpgridresult object (result function)
     > ### Aliases: plot.pumpgridresult
     > 
     > ### ** Examples
     > 
     > g <- pump_power_grid( d_m = "d3.2_m3ff2rc", MTP = c( "HO", "BF" ),
     +  MDES = 0.10, J = seq(5, 10, 1), M = 5, K = 7, nbar = 58,
     +  Tbar = 0.50, alpha = 0.15, numCovar.1 = 1,
     +  numCovar.2 = 1, R2.1 = 0.1, R2.2 = 0.7,
     +  ICC.2 = 0.25, ICC.3 = 0.25, rho = 0.4, tnum = 200)
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0MkyP/working_dir/RtmptzukGQ/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error in params(grid$res[[1]]) : 
       is.pumpresult(x) || is.pumpgridresult(x) is not TRUE
     Calls: pump_power_grid -> run_grid -> params -> stopifnot
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       ── Error ('test-update_functions.R:167:5'): updating grids possible ────────────
       Error in `params(grid$res[[1]])`: is.pumpresult(x) || is.pumpgridresult(x) is not TRUE
       Backtrace:
           ▆
        1. └─PUMP::update_grid(res2, omega.2 = c(0.2, 0.4, 0.6)) at test-update_functions.R:167:5
        2.   ├─base::do.call(pump_mdes_grid, params)
        3.   └─PUMP (local) `<fn>`(...)
        4.     └─PUMP:::run_grid(...)
        5.       └─PUMP::params(grid$res[[1]])
        6.         └─base::stopifnot(is.pumpresult(x) || is.pumpgridresult(x))
       ── Error ('test-update_functions.R:215:5'): update_grid works with multiple MTPs and uniform per-outcome params ──
       Error in `params(grid$res[[1]])`: is.pumpresult(x) || is.pumpgridresult(x) is not TRUE
       Backtrace:
           ▆
        1. └─PUMP::update_grid(pow, R2.1 = seq(0, 0.5, 0.25)) at test-update_functions.R:215:5
        2.   ├─base::do.call(pump_power_grid, params)
        3.   └─PUMP (local) `<fn>`(...)
        4.     └─PUMP:::run_grid(...)
        5.       └─PUMP::params(grid$res[[1]])
        6.         └─base::stopifnot(is.pumpresult(x) || is.pumpgridresult(x))
       
       [ FAIL 6 | WARN 0 | SKIP 41 | PASS 210 ]
       Error:
       ! Test failures.
       Execution halted
     ```

