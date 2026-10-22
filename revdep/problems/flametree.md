# flametree (0.2.0)

* GitHub: <https://github.com/djnavarro/flametree>
* Email: <mailto:djnavarro@protonmail.com>
* GitHub mirror: <https://github.com/cran/flametree>

Run `revdepcheck::revdep_details(, "flametree")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘spelling.R’
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(flametree)
       > 
       > test_check("flametree")
       Saving _problems/test-grow-20.R
       Saving 7 x 7 in image
       [ FAIL 1 | WARN 0 | SKIP 1 | PASS 286 ]
       
       ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
       • On CRAN (1): 'test-plot.R:84:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-grow.R:20:3'): invalid seeds are forbidden ───────────────────
       Expected `flametree_grow(seed = 0)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 1 | PASS 286 ]
       Error:
       ! Test failures.
       Execution halted
     ```

