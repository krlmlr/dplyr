# hmetad (0.2.0)

* GitHub: <https://github.com/metacoglab/hmetad>
* Email: <mailto:kevin.o'neill@ucl.ac.uk>
* GitHub mirror: <https://github.com/cran/hmetad>

Run `revdepcheck::revdep_details(, "hmetad")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `hmetad` has inferred that there are K=4 confidence levels in the data. If this is incorrect, please set this manually using the argument `K=<K>`
       
       `hmetad` has inferred that there are K=4 confidence levels in the data. If this is incorrect, please set this manually using the argument `K=<K>`
       
       `hmetad` has inferred that there are K=4 confidence levels in the data. If this is incorrect, please set this manually using the argument `K=<K>`
       
       `hmetad` has inferred that there are K=4 confidence levels in the data. If this is incorrect, please set this manually using the argument `K=<K>`
       
       [ FAIL 1 | WARN 0 | SKIP 1 | PASS 71 ]
       
       ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
       • On CRAN (1): 'test-draws.R:2:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-hmetad.R:44:3'): aggregate_metad works ───────────────────────
       Expected `aggregate_metad(tibble(), K = 2)` to equal `tibble(...)`.
       Differences:
       `dimnames(actual$N)[[1]]` is a character vector ('1')
       `dimnames(expected$N)[[1]]` is NULL
       
       
       [ FAIL 1 | WARN 0 | SKIP 1 | PASS 71 ]
       Error:
       ! Test failures.
       Execution halted
     ```

