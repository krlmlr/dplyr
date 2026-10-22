# ferrn (0.3.0)

* GitHub: <https://github.com/huizezhang-sherry/ferrn>
* Email: <mailto:huizezhangsh@gmail.com>
* GitHub mirror: <https://github.com/cran/ferrn>

Run `revdepcheck::revdep_details(, "ferrn")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: add_start
     > ### Title: A ggproto for drawing start points
     > ### Aliases: add_start
     > 
     > ### ** Examples
     > 
     > library(ggplot2)
     > # construct the space and start df for plotting
     > space <- tibble::tibble(x0 = 0, y0 = 0, r = 5)
     > holes_1d_geo %>%
     +   compute_pca() %>%
     +   purrr::pluck("aug") %>%
     +   clean_method() %>%
     +   get_start()
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpisA4OZ/working_dir/RtmpO4WRPs/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       ℹ Use `compute(prudence = "lavish")` to materialize to temporary storage and
         continue with duckplyr.
       ℹ See `vignette("prudence")` for other options.
       Backtrace:
            ▆
         1. ├─ferrn::plot_projection(get_best(holes_2d_jellyfish), data = boa6) at test-plot-projection.R:10:3
         2. │ └─ferrn::compute_projection(...)
         3. │   ├─base::unique(sapply(dt$basis, function(xx) dim(xx)[2], simplify = TRUE))
         4. │   └─base::sapply(dt$basis, function(xx) dim(xx)[2], simplify = TRUE)
         5. │     └─base::lapply(X = X, FUN = FUN, ...)
         6. └─ferrn::get_best(holes_2d_jellyfish)
         7.   ├─dplyr::ungroup(...)
         8.   └─dplyr:::ungroup.data.frame(...)
         9.     └─dplyr:::check_prudence(x, duckplyr_error)
        10.       └─cli::cli_abort(...)
        11.         └─rlang::abort(...)
       
       [ FAIL 3 | WARN 0 | SKIP 3 | PASS 17 ]
       Deleting unused snapshots: 'huber-plot/geom-huber-all-parameters.svg',
       'huber-plot/huber-histogram.svg', 'huber-plot/huber-plot-basic.svg',
       'plot-projection/basic.svg', 'plot-projection/change-id.svg', and
       'plot-projection/test-label.svg'
       Error:
       ! Test failures.
       Execution halted
     ```

