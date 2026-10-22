# MiscMetabar (0.16.8)

* GitHub: <https://github.com/adrientaudiere/MiscMetabar>
* Email: <mailto:adrien.taudiere@zaclys.net>
* GitHub mirror: <https://github.com/cran/MiscMetabar>

Run `revdepcheck::revdep_details(, "MiscMetabar")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        2. └─MiscMetabar::merge_taxa_vec(data_fungi, group, tax_adjust = 2L)
        3.   ├─MiscMetabar::merge_taxa_vec(...)
        4.   └─MiscMetabar::merge_taxa_vec(...)
        5.     └─tibble::column_to_rownames(select(reduced_by_group, -.group), ".taxon")
        6.       └─tibble:::abort_already_has_rownames()
        7.         └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        8.           └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Error ('test_data_manipulation.R:44:3'): merge_taxa_vec with rank_propagation=FALSE works ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(select(reduced_by_group, -.group), ".taxon")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─MiscMetabar::merge_taxa_vec(data_fungi, group, rank_propagation = FALSE) at test_data_manipulation.R:44:3
        2. └─MiscMetabar::merge_taxa_vec(data_fungi, group, rank_propagation = FALSE)
        3.   ├─MiscMetabar::merge_taxa_vec(...)
        4.   └─MiscMetabar::merge_taxa_vec(...)
        5.     └─tibble::column_to_rownames(select(reduced_by_group, -.group), ".taxon")
        6.       └─tibble:::abort_already_has_rownames()
        7.         └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        8.           └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 4 | WARN 0 | SKIP 100 | PASS 339 ]
       Error:
       ! Test failures.
       Execution halted
     ```

