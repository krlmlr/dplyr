# handwriter (3.2.4)

* GitHub: <https://github.com/CSAFE-ISU/handwriter>
* Email: <mailto:srein@iastate.edu>
* GitHub mirror: <https://github.com/cran/handwriter>

Run `revdepcheck::revdep_details(, "handwriter")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `attr(expected, 'row.names')` is an integer vector (1, 2, 3, 4)
       
       ── Failure ('test-cluster_profiles.R:40:3'): Get cluster fill rates works with writer and doc indices ──
       Expected `actual` to equal `expected`.
       Differences:
       `attr(actual, 'row.names')` is a character vector ('1', '2', '3', '4')
       `attr(expected, 'row.names')` is an integer vector (1, 2, 3, 4)
       
       ── Failure ('test-cluster_profiles.R:84:3'): Get writer profiles works with rates without writer or doc indices ──
       Expected `actual` to equal `expected`.
       Differences:
       `attr(actual, 'row.names')` is a character vector ('1', '2', '3', '4')
       `attr(expected, 'row.names')` is an integer vector (1, 2, 3, 4)
       
       ── Failure ('test-cluster_profiles.R:99:3'): Get writer profiles works with rates with writer and doc indices ──
       Expected `actual` to equal `expected`.
       Differences:
       `attr(actual, 'row.names')` is a character vector ('1', '2', '3', '4')
       `attr(expected, 'row.names')` is an integer vector (1, 2, 3, 4)
       
       
       [ FAIL 4 | WARN 0 | SKIP 3 | PASS 102 ]
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

