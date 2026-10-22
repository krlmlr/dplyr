# mectx (1.1.1)

* Email: <mailto:dhrubo.2@osu.edu>
* GitHub mirror: <https://github.com/cran/mectx>

Run `revdepcheck::revdep_details(, "mectx")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > synth_meta_20  <- synth_meta_20[synth_meta_20$sample %in% unique(synth_norm_20$sample), ]
       > 
       > synth_cs_20    <- suppressWarnings(
       +   tx_cluster_surv(synth_meta_20, synth_norm_20,
       +                   surv_time_col  = "diagsurvtime",
       +                   status_col     = "Status",
       +                   k_range        = 3:5,
       +                   umap_neighbors = 10,
       +                   seed           = 42)
       + )
       standardise_status: 'Status' already 0/1 numeric --- no change (0=alive, 1=dead)
       Error in `tibble::column_to_rownames()`:
       ! `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─base::suppressWarnings(...)
        2. │ └─base::withCallingHandlers(...)
        3. ├─mectx::tx_cluster_surv(...)
        4. │ └─... %>% as.matrix()
        5. ├─base::as.matrix(.)
        6. └─tibble::column_to_rownames(., "sample")
        7.   └─tibble:::abort_already_has_rownames()
        8.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        9.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       Execution halted
     ```

