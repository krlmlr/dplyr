# nowcastr (0.2.1)

* GitHub: <https://github.com/whocov/nowcastr>
* Email: <mailto:mathias.leroy.rpkg@gmail.com>
* GitHub mirror: <https://github.com/cran/nowcastr>

Run `revdepcheck::revdep_details(, "nowcastr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-calc_delay.R:9:3'): calc_delay basic works ───────────────────
       Expected `attr(res$delay, "units") == "weeks"` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       ── Failure ('test-calc_delay.R:33:3'): calc_delay can generate other units ─────
       Expected `attr(res$delay, "units") == "days"` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       ── Failure ('test-calc_delay.R:39:3'): calc_delay can take strings ─────────────
       Expected `attr(res$delay, "units") == "days"` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       
       [ FAIL 3 | WARN 0 | SKIP 0 | PASS 172 ]
       Error:
       ! Test failures.
       Execution halted
     ```

