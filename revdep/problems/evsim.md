# evsim (1.7.1)

* GitHub: <https://github.com/resourcefully-dev/evsim>
* Email: <mailto:marccanyigueral@gmail.com>
* GitHub mirror: <https://github.com/cran/evsim>

Run `revdepcheck::revdep_details(, "evsim")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > weekends_parameters <- dplyr::tibble(
     +   profile = "Visit",
     +   ratio = 100,
     +   start_mean = 12,
     +   start_sd = 4,
     +   duration_mean = 3,
     +   duration_sd = 2,
     +   energy_mean = 4,
     +   energy_sd = 4
     + )
     > 
     > parameters_lst <- list(workdays_parameters, weekends_parameters)
     > 
     > # Get the whole model
     > ev_model <- get_custom_ev_model(
     +   names = c("Workdays", "Weekends"),
     +   months_lst = list(1:12, 1:12),
     +   wdays_lst = list(1:5, 6:7),
     +   parameters_lst = parameters_lst,
     +   connection_log = FALSE,
     +   energy_log = FALSE,
     +   data_tz = "Europe/Amsterdam"
     + )
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        1. └─evsim::simulate_sessions(...) at test-simulate_sessions.R:36:3
        2.   └─evsim:::prepare_model(evmodel[["models"]], sessions_day, user_profiles)
       ── Error ('test-simulate_sessions.R:67:3'): simulation works with energy models of specific charging rates ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. └─evsim::simulate_sessions(...) at test-simulate_sessions.R:67:3
        2.   └─evsim:::prepare_model(evmodel[["models"]], sessions_day, user_profiles)
       ── Error ('test-simulate_sessions.R:92:3'): simulation works with charging rates that don't have an energy model ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. └─evsim::simulate_sessions(...) at test-simulate_sessions.R:92:3
        2.   └─evsim:::prepare_model(evmodel[["models"]], sessions_day, user_profiles)
       ── Error ('test-simulate_sessions.R:115:3'): simulation works with some user profiles without sessions per day ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. └─evsim::simulate_sessions(...) at test-simulate_sessions.R:115:3
        2.   └─evsim:::prepare_model(evmodel[["models"]], sessions_day, user_profiles)
       
       [ FAIL 6 | WARN 0 | SKIP 0 | PASS 21 ]
       Error:
       ! Test failures.
       Execution halted
     ```

