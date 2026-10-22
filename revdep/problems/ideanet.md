# ideanet (1.1.1)

* Email: <mailto:tom.wolff@northwestern.edu>
* GitHub mirror: <https://github.com/cran/ideanet>

Run `revdepcheck::revdep_details(, "ideanet")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     
     Warning in triad_census_impl(graph = graph) :
       Triad census called on an undirected graph. All connections will be treated as mutual.
     Source: misc/motifs.c:1157
     Warning in eigen_centralization(g, directed = FALSE) :
       Eigenvector centralization calculated only for largest weak component.
     Processing aggregate network of all edge types
     Warning in basic_netwrite(data_type = data_type, adjacency_matrix = adjacency_matrix,  :
       NAs introduced by coercion
     Warning in bonacich_igraph(g, directed = as.logical(directed), message = message) :
       (Bonacich power centrality) Isolates detected in network. Isolates will be removed from network when calculating power centrality measure, and will be assigned NA values in final output.
     Warning in bonacich_igraph(g, directed = as.logical(directed), bpct = -0.75,  :
       (Bonacich power centrality) Isolates detected in network. Isolates will be removed from network when calculating power centrality measure, and will be assigned NA values in final output.
     Warning in eigen_igraph(g, directed = as.logical(directed), message = message) :
       (Eigenvector centrality) Isolates detected in network. Isolates will be removed from network when calculating eigenvector centrality measure, and will be assigned NA values in final output.
     
     Warning in triad_census_impl(graph = graph) :
       Triad census called on an undirected graph. All connections will be treated as mutual.
     Source: misc/motifs.c:1157
     Warning in stats::cor(tie_set) : the standard deviation is zero
     Error in igraph::distances(g, mode = "out", weights = 1/igraph::edge_attr(g,  : 
       Weights must not contain NaN values. Invalid value
     Source: paths/dijkstra.c:128
     Calls: netwrite ... closeness_centralization -> closeness_igraph -> <Anonymous>
     Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     <error/rlang_error>
     Error in `igraph::distances()`:
     ! Weights must not contain NaN values. Invalid value
     Source: paths/dijkstra.c:128
     ---
     Backtrace:
         ▆
      1. └─ideanet::netwrite(...)
      2.   └─ideanet:::multi_netwrite(...)
      3.     └─ideanet:::basic_netwrite(...)
      4.       └─ideanet:::closeness_centralization(...)
      5.         └─ideanet:::closeness_igraph(g, directed = FALSE, weight_type = weight_type)
      6.           └─igraph::distances(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'roles.Rmd' failed with diagnostics:
     Weights must not contain NaN values. Invalid value
     Source: paths/dijkstra.c:128
     --- failed re-building ‘roles.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘CHAMP.Rmd’ ‘netwrite.Rmd’ ‘roles.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

