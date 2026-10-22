# MDP2 (3.0.0)

* GitHub: <https://github.com/relund/mdp>
* Email: <mailto:lars@relund.dk>
* GitHub mirror: <https://github.com/cran/MDP2>

Run `revdepcheck::revdep_details(, "MDP2")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > ### Aliases: get_hypergraph
     > 
     > ### ** Examples
     > 
     > ## Set working dir
     > wd <- setwd(system.file("models", package = "MDP2"))
     > 
     > #### A finite-horizon replacement problem ####
     > mdp<-load_mdp("machine1_")
     Read binary files (0.000183675 sec.)
     Build the HMDP (3.698e-05 sec.)
     
     Checking MDP and found no errors (5.299e-06 sec.)
     
     > plot(mdp)
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpW1L9D3/working_dir/Rtmp9uZgU5/duckdb
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
       ── Error ('test_plot.R:129:3'): get_hypergraph returns nested weight and transition columns ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. ├─testthat::expect_equal(hgf$hyperarcs$action_weights[[1]], 5) at test_plot.R:129:3
        2. │ └─testthat::quasi_label(enquo(object), label)
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. └─hgf$hyperarcs$action_weights
       ── Error ('test_plot.R:171:3'): plot_hypergraph supports state_label, action_label, and action_w_label options ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. ├─testthat::expect_invisible(plot_hypergraph(hgf, c(2, 2))) at test_plot.R:171:3
        2. │ └─base::withVisible(call)
        3. └─MDP2::plot_hypergraph(hgf, c(2, 2))
        4.   ├─base::vapply(...)
        5.   └─base::nrow(hgf$hyperarcs)
        6.     ├─base::dim(x)
        7.     └─base::dim.data.frame(x)
        8.       └─base::.row_names_info(x, 2L)
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 198 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
         ▆
      1. ├─base::plot(mdp, action_color = "label", state_label = "s_id|label")
      2. ├─MDP2:::plot.HMDP(mdp, action_color = "label", state_label = "s_id|label")
      3. │ ├─base::do.call(...)
      4. │ └─MDP2 (local) `<fn>`(...)
      5. │   └─tibble::tibble(label = unique(hgf$hyperarcs$label), col = grDevices::rainbow(length(unique(hgf$hyperarcs$label))))
      6. │     └─tibble:::tibble_quos(xs, .rows, .name_repair)
      7. │       └─rlang::eval_tidy(xs[[j]], mask)
      8. ├─base::unique(hgf$hyperarcs$label)
      9. └─base::unique.default(hgf$hyperarcs$label)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'infinite-mdp.Rmd' failed with diagnostics:
     GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘infinite-mdp.Rmd’
     
     --- re-building ‘mdp2.Rmd’ using rmarkdown
     --- finished re-building ‘mdp2.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘building.Rmd’ ‘finite-mdp.Rmd’ ‘infinite-hmdp.Rmd’
       ‘infinite-mdp.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

