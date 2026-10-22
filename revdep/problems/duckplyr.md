# duckplyr (1.2.1)

* GitHub: <https://github.com/tidyverse/duckplyr>
* Email: <mailto:kirill@cynkra.com>
* GitHub mirror: <https://github.com/cran/duckplyr>

Run `revdepcheck::revdep_details(, "duckplyr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       `environment(actual$to_duckdb_exprs)` is <env:namespace:duckplyr>
       `environment(expected$to_duckdb_exprs)` is <env:namespace:dplyr>
       
       `environment(actual$to_duckdb_exprs_meta)` is <env:namespace:duckplyr>
       `environment(expected$to_duckdb_exprs_meta)` is <env:namespace:dplyr>
       
       `environment(actual$unique_table_name)` is <env:namespace:duckplyr>
       `environment(expected$unique_table_name)` is <env:namespace:dplyr>
       
       `environment(actual$vec_ptype_safe)` is <env:namespace:duckplyr>
       `environment(expected$vec_ptype_safe)` is <env:namespace:dplyr>
       
       
       [ FAIL 2 | WARN 0 | SKIP 653 | PASS 2584 ]
       Error:
       ! Test failures.
       
       🛠: 2565
       🔨: 1348
       🦆: 1217
       add_count, anti_join, anti_join.data.frame, arrange, arrange.data.frame, compute, count, count.data.frame, cross_join, distinct, distinct.data.frame, do, eval, filter, filter.data.frame, filter_out, full_join, group_by, group_indices, group_keys, group_map, group_modify, group_nest, group_size, group_split, group_trim, head, inner_join, inner_join.data.frame, intersect, left_join, left_join.data.frame, mutate, mutate.data.frame, n_groups, nest_by, nest_join, pull, reframe, relocate, rename, rename_with, right_join, rows_append, rows_delete, rows_insert, rows_patch, rows_update, rows_upsert, rowwise, select, select.data.frame, semi_join, semi_join.data.frame, setdiff, setequal, slice, slice_head, slice_head.data.frame, slice_sample, slice_tail, summarise, summarise.data.frame, symdiff, transmute, ungroup, union_all
       
       00:01:51.263661
       Execution halted
     ```

