# crosshap (1.4.0)

* GitHub: <https://github.com/jacobimarsh/crosshap>
* Email: <mailto:jake.marsh@live.com.au>
* GitHub mirror: <https://github.com/cran/crosshap>

Run `revdepcheck::revdep_details(, "crosshap")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ── Error ('test-umap.R:4:1'): (code run outside of `test_that()`) ──────────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., "ID")`: `.data` must be a data frame without row names.
       Backtrace:
            ▆
         1. ├─crosshap::prepare_hap_umap(...) at test-umap.R:4:1
         2. │ └─... %>% tibble::rownames_to_column("ID")
         3. ├─tibble::rownames_to_column(., "ID")
         4. ├─dplyr::mutate_all(...)
         5. │ └─dplyr:::check_grouped(.tbl, "mutate", "all", alt = TRUE)
         6. │   └─dplyr::is_grouped_df(tbl)
         7. └─tibble::column_to_rownames(., "ID")
         8.   └─tibble:::abort_already_has_rownames()
         9.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        10.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 4 | WARN 0 | SKIP 0 | PASS 1 ]
       Deleting unused snapshots: 'clustree/haptreedata.svg',
       'clustree/mgtreedata.svg', 'crosshapviz/haplotype-viz-alt4data.svg',
       'crosshapviz/haplotype-viz-isolatewt3-data.svg',
       'crosshapviz/haplotype-viz-nolabs3data.svg', and
       'crosshapviz/haplotype-viz4data.svg'
       Error:
       ! Test failures.
       Execution halted
     ```

