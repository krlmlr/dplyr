# RGDrivers (0.1.0)

* GitHub: <https://github.com/diogosbr/RGDrivers>
* Email: <mailto:diogosbr@gmail.com>
* GitHub mirror: <https://github.com/cran/RGDrivers>

Run `revdepcheck::revdep_details(, "RGDrivers")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     Error(s) in re-building vignettes:
       ...
     --- re-building ‘RGDrivers.Rmd’ using rmarkdown
     
     Quitting from RGDrivers.Rmd:41-44 [unnamed-chunk-3]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error in `igraph::graph_from_data_frame()`:
     ! Some vertex names in `d` are not listed in `vertices`
     ---
     Backtrace:
         ▆
      1. └─RGDrivers::create_network_graph(network, col_id = "id", col_downstream = "jus")
      2.   └─igraph::graph_from_data_frame(edges, directed = TRUE, vertices = vertices)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'RGDrivers.Rmd' failed with diagnostics:
     Some vertex names in `d` are not listed in `vertices`
     --- failed re-building ‘RGDrivers.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘RGDrivers.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

