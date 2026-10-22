# volker (3.3.1)

* GitHub: <https://github.com/strohne/volker>
* Email: <mailto:jakob.juenger@uni-muenster.de>
* GitHub mirror: <https://github.com/cran/volker>

Run `revdepcheck::revdep_details(, "volker")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘volker-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: cluster_plot
     > ### Title: Get plot for clustering result
     > ### Aliases: cluster_plot
     > ### Keywords: internal
     > 
     > ### ** Examples
     > 
     > library(volker)
     > data <- volker::chatgpt
     > 
     > cluster_plot(data, starts_with("cg_adoption"), k = 2)
     Error in stats::kmeans(items, centers = i, iter.max = 10) : 
       more cluster centers than distinct data points.
     Calls: cluster_plot -> cluster_plot -> add_clusters -> <Anonymous>
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        1. ├─... %>% expect_snapshot(cran = TRUE) at test-tables.R:353:3
        2. └─testthat::expect_snapshot(., cran = TRUE)
       ── Failure ('test-tables.R:381:3'): Values are relabeled ───────────────────────
       Snapshot of code has changed:
       old[5:11] vs new[5:11]
         Output
           
           
       -   |Gender    | min|   q1| median|   q3| max| mean|   sd|   n|
       +   |Weiblich  | min|   q1| median|   q3| max| mean|   sd|   n|
           |:---------|---:|----:|------:|----:|---:|----:|----:|---:|
           |Weiblich  |  18| 25.8|   38.0| 44.2|  63| 37.5| 13.4|  40|
           |Maennlich |  19| 32.5|   38.5| 52.0|  68| 41.2| 14.0|  60|
       
       
       ── Snapshots ───────────────────────────────────────────────────────────────────
       To review and process snapshots locally:
       * Locate check directory.
       * Copy 'tests/testthat/_snaps' to local package.
       * Run `testthat::snapshot_accept()` to accept all changes.
       * Run `testthat::snapshot_review()` to review all changes.
       [ FAIL 41 | WARN 0 | SKIP 10 | PASS 141 ]
       Error:
       ! Test failures.
       Execution halted
     ```

