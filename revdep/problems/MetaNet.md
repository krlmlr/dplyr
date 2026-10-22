# MetaNet (0.3.2)

* GitHub: <https://github.com/Asa12138/MetaNet>
* Email: <mailto:bfzede@gmail.com>
* GitHub mirror: <https://github.com/cran/MetaNet>

Run `revdepcheck::revdep_details(, "MetaNet")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘MetaNet-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: get_group_skeleton
     > ### Title: Get skeleton network according to a group
     > ### Aliases: get_group_skeleton c_net_skeleton skeleton_plot
     > 
     > ### ** Examples
     > 
     > get_group_skeleton(co_net) -> ske_net
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─MetaNet::get_group_skeleton(co_net)
      2. │ └─dplyr::distinct(nodeGroup, Group, v_group) %>% ...
      3. └─tibble::column_to_rownames(., "Group")
      4.   └─tibble:::abort_already_has_rownames()
      5.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      6.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

