# manydata (1.1.4)

* GitHub: <https://github.com/globalgov/manydata>
* Email: <mailto:james.hollway@graduateinstitute.ch>
* GitHub mirror: <https://github.com/cran/manydata>

Run `revdepcheck::revdep_details(, "manydata")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `names(expected)` is absent
       
       ── Failure ('test_resolve.R:47:3'): min works ──────────────────────────────────
       Expected `resolve_min(test, na.rm = FALSE)` to equal `c(NA, 3, NA)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3')
       `names(expected)` is absent
       
       ── Failure ('test_resolve.R:51:3'): max works ──────────────────────────────────
       Expected `resolve_max(test)` to equal `c(1, 6, 4.1)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3')
       `names(expected)` is absent
       
       ── Failure ('test_resolve.R:52:3'): max works ──────────────────────────────────
       Expected `resolve_max(test, na.rm = FALSE)` to equal `c(NA, 6, NA)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3')
       `names(expected)` is absent
       
       
       [ FAIL 13 | WARN 0 | SKIP 3 | PASS 113 ]
       Error:
       ! Test failures.
       Execution halted
     ```

