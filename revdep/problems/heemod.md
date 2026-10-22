# heemod (1.1.0)

* GitHub: <https://github.com/aphp/heemod>
* Email: <mailto:kevin.zarca@gmail.com>
* GitHub mirror: <https://github.com/cran/heemod>

Run `revdepcheck::revdep_details(, "heemod")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `expected`: "Scenario 2" "Scenario 4" "Scenario 5" "Scenario 7"
       
       ── Failure ('test_efficiency_frontier.R:128:5'): Identify Frontier Scenarios ───
       Expected `result8` to equal `c("Scenario 1", "Scenario 2")`.
       Differences:
       `actual`:   "Scenario 2"             
       `expected`: "Scenario 1" "Scenario 2"
       
       ── Failure ('test_efficiency_frontier.R:206:5'): Identify Frontier Scenarios ───
       Expected `result13` to equal `c("Scenario 2", "Scenario 3")`.
       Differences:
       `actual`:   "Scenario 3"             
       `expected`: "Scenario 2" "Scenario 3"
       
       ── Failure ('test_run_model.R:234:5'): run_model behaves as expected ───────────
       Expected `s_mod$frontier` to equal `c("I", "II")`.
       Differences:
       `actual`:   "II"     
       `expected`: "I"  "II"
       
       
       [ FAIL 10 | WARN 0 | SKIP 1 | PASS 504 ]
       Error:
       ! Test failures.
       Execution halted
     ```

