# LightLogR (0.10.6)

* GitHub: <https://github.com/tscnlab/LightLogR>
* Email: <mailto:johannes.zauner@tum.de>
* GitHub mirror: <https://github.com/cran/LightLogR>

Run `revdepcheck::revdep_details(, "LightLogR")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     +   filter.expression.reference =  as_date(Datetime) == min(as_date(Datetime)),
     +   shift.start = TRUE,
     +   across.id = "Day") %>%
     +   gg_reference()
     Joining with `by = join_by(Id, Day)`
     Joining with `by = join_by(Id, Day)`
     Adding missing grouping variables: `Id`
     Joining with `by = join_by(Id)`
     Joining with `by = join_by(Id)`
     Joining with `by = join_by(Id, Day)`
     Joining with `by = join_by(Id, Day)`
     Joining with `by = join_by(Id, Day)`
     Joining with `by = join_by(Id, Day)`
     Adding missing grouping variables: `Day`
     > 
     > #in this example, the Environment Data will be used as a reference
     > sample.data.environment %>%
     + data2reference(
     +   filter.expression.reference =  Id == "Environment",
     +   across.id = TRUE) %>%
     +   gg_reference()
     Error in int@start : 
       no applicable method for `@` applied to an object of class "numeric"
     Calls: %>% ... interval2state -> <Anonymous> -> %>% -> <Anonymous>
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       Expected `res_no_gap_handle <- add_clusters(data_gappy_ac, Value, cluster.duration = "1 hour")` to throw a warning.
       ── Failure ('test-clusters.R:242:3'): add_clusters handle.gaps functionality ───
       Expected `... <- NULL` to throw a warning.
       ── Failure ('test-clusters.R:258:3'): add_clusters interaction with return.only.clusters=FALSE in extract_clusters ──
       Expected `result <- add_clusters(data_roc, Value, cluster.duration = "1 hour")` to throw a warning.
       ── Error ('test-data2reference.R:25:3'): data2reference works as expected ──────
       Error in `int@start`: no applicable method for `@` applied to an object of class "numeric"
       Backtrace:
            ▆
         1. ├─testthat::expect_equal(...) at test-data2reference.R:25:3
         2. │ └─testthat::quasi_label(enquo(object), label)
         3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
         4. ├─... %>% dplyr::pull(Reference)
         5. ├─dplyr::pull(., Reference)
         6. ├─LightLogR::data2reference(...)
         7. │ └─dataset %>% ...
         8. ├─LightLogR::interval2state(...)
         9. │ ├─lubridate::tz(...)
        10. │ └─State.interval.dataset[[Interval.colname.defused]] %>% ...
        11. └─lubridate::int_start(.)
       
       [ FAIL 7 | WARN 1 | SKIP 4 | PASS 1073 ]
       Error:
       ! Test failures.
       Execution halted
     ```

