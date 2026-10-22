# transittraj (1.1.0)

* GitHub: <https://github.com/UTEL-UIUC/transittraj>
* Email: <mailto:obrienbenjaminj@gmail.com>
* GitHub mirror: <https://github.com/cran/transittraj>

Run `revdepcheck::revdep_details(, "transittraj")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > ### Name: get_gtfs_trajectory_fun
     > ### Title: Fit continuous trajectory interpolating curves from GTFS
     > ###   schedule data
     > ### Aliases: get_gtfs_trajectory_fun
     > 
     > ### ** Examples
     > 
     > # Set my parameters
     > my_crs <- 32611
     > my_start_date <- as.Date("2026-05-27")
     > my_end_date <- as.Date("2026-05-27")
     > 
     > # Get input data
     > lineE_gtfs <- new_transittraj_data("filter_by_route")
     > lineE_shape <- new_transittraj_data("get_shape_geometry")
     > 
     > # Run function: build trajectory
     > lineE_scheduled_traj <- get_gtfs_trajectory_fun(gtfs = lineE_gtfs,
     +                                                 project_crs = my_crs,
     +                                                 date_min = my_start_date,
     +                                                 date_max = my_end_date)
     Error in stats::approxfun(x = trip_df$event_timestamp, y = trip_df$distance,  : 
       need at least two non-NA values to interpolate
     Calls: get_gtfs_trajectory_fun -> get_trajectory_fun -> <Anonymous>
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        13. │     ├─base::withCallingHandlers(...)
        14. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
        15. │       └─mask$eval_all_mutate(quo)
        16. │         └─dplyr (local) eval()
        17. ├─base::difftime(departure_time, arrival_time, units = "secs")
        18. │ ├─base::as.POSIXct(time1)
        19. │ └─base::as.POSIXct.default(time1)
        20. │   └─base::stop(...)
        21. └─base::.handleSimpleError(...)
        22.   └─dplyr (local) h(simpleError(msg, call))
        23.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       ── Error ('test-trajectory_constructors.R:396:3'): get_gtfs_trajectory_fun: multiple shapes ──
       Error in `stats::approxfun(x = trip_df$event_timestamp, y = trip_df$distance, method = "linear", rule = 1)`: need at least two non-NA values to interpolate
       Backtrace:
           ▆
        1. ├─base::suppressMessages(...) at test-trajectory_constructors.R:396:3
        2. │ └─base::withCallingHandlers(...)
        3. └─transittraj::get_gtfs_trajectory_fun(...)
        4.   └─transittraj::get_trajectory_fun(...)
        5.     └─stats::approxfun(...)
       
       [ FAIL 3 | WARN 0 | SKIP 0 | PASS 510 ]
       Error:
       ! Test failures.
       Execution halted
     ```

