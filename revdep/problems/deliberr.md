# deliberr (0.1.3)

* GitHub: <https://github.com/gumbelino/deliberr>
* Email: <mailto:gustavo.kreiaumbelino@zda.uzh.ch>
* GitHub mirror: <https://github.com/cran/deliberr>

Run `revdepcheck::revdep_details(, "deliberr")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: get_dri
     > ### Title: Get DRI from a Group of Participants
     > ### Aliases: get_dri
     > 
     > ### ** Examples
     > 
     > 
     > # get pre-deliberation (stage_id == 1) data from BEP case
     > data <- human_data[human_data$stage_id == 1 & human_data$case == "BEP", ]
     > 
     > # calculate IC
     > ic <- get_dri_ic(data)
     Error in `column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─deliberr::get_dri_ic(data)
      2. │ └─df_c %>% column_to_rownames("pnum") %>% t()
      3. ├─base::t(.)
      4. └─tibble::column_to_rownames(., "pnum")
      5.   └─tibble:::abort_already_has_rownames()
      6.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      7.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

