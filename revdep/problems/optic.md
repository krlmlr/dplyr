# optic (1.0.1)

* GitHub: <https://github.com/randcorporation/optic>
* Email: <mailto:plima@rand.org>
* GitHub mirror: <https://github.com/cran/optic>

Run `revdepcheck::revdep_details(, "optic")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
                   time_var: year
                   effect_magnitude: 3.97146241830065
                   n_units: 5
                   effect_direction: neg
                   policy_speed: slow
                   n_implementation_periods: 10
                   prior_control: level
                   treat_var: state
       [ FAIL 1 | WARN 6 | SKIP 1 | PASS 4 ]
       
       ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
       • empty test (1):
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-confounding.R:126:3'): confounding simulations work ──────────
       Expected `any(is.na(linear_results_df))` to be FALSE.
       Differences:
       `actual`:   TRUE 
       `expected`: FALSE
       
       
       [ FAIL 1 | WARN 6 | SKIP 1 | PASS 4 ]
       Error:
       ! Test failures.
       Execution halted
     ```

