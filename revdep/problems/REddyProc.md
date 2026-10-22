# REddyProc (1.3.4)

* GitHub: <https://github.com/EarthyScience/REddyProc>
* Email: <mailto:twutz@bgc-jena.mpg.de>
* GitHub mirror: <https://github.com/cran/REddyProc>

Run `revdepcheck::revdep_details(, "REddyProc")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Length mismatch: comparison on first 11 components
       Component 1: target is NULL, current is character
       Component 2: target is NULL, current is character
       Component 3: target is NULL, current is character
       Component 4: target is NULL, current is character
       Component 5: target is NULL, current is character
       ...
       ── Failure ('test_checkval.R:44:3'): fKeepColumnAttributes ─────────────────────
       Expected `sapply(df2[names(df1)], attributes)` to equal `sapply(df1, attributes)`.
       Differences:
       names for target but not for current
       Attributes: < names for current but not for target >
       Attributes: < Length mismatch: comparison on first 0 components >
       Length mismatch: comparison on first 12 components
       Component 1: target is NULL, current is character
       Component 2: target is NULL, current is character
       Component 3: target is NULL, current is character
       Component 4: target is NULL, current is character
       Component 5: target is NULL, current is character
       ...
       
       [ FAIL 4 | WARN 22 | SKIP 37 | PASS 340 ]
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

