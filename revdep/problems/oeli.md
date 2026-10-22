# oeli (0.7.9)

* GitHub: <https://github.com/loelschlaeger/oeli>
* Email: <mailto:oelschlaeger.lennart@gmail.com>
* GitHub mirror: <https://github.com/cran/oeli>

Run `revdepcheck::revdep_details(, "oeli")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `names(expected$.input[[2]])` is a character vector ('x', 'y')
       
       `names(actual$.input[[3]])` is absent
       `names(expected$.input[[3]])` is a character vector ('x', 'y')
       
       ── Failure ('test-simulator.R:72:3'): re-run works ─────────────────────────────
       Expected `dplyr::select(sim$results, -.seconds)` to be identical to `structure(...)`.
       Differences:
       `names(actual$.input[[1]])` is absent
       `names(expected$.input[[1]])` is a character vector ('x', 'y')
       
       `names(actual$.input[[2]])` is absent
       `names(expected$.input[[2]])` is a character vector ('x', 'y')
       
       `names(actual$.input[[3]])` is absent
       `names(expected$.input[[3]])` is a character vector ('x', 'y')
       
       `names(actual$.input[[4]])` is absent
       `names(expected$.input[[4]])` is a character vector ('x', 'y')
       
       
       [ FAIL 2 | WARN 0 | SKIP 4 | PASS 448 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

