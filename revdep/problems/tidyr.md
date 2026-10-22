# tidyr (1.3.2)

* GitHub: <https://github.com/tidyverse/tidyr>
* Email: <mailto:hadley@posit.co>
* GitHub mirror: <https://github.com/cran/tidyr>

Run `revdepcheck::revdep_details(, "tidyr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-unnest-wider.R:269:1', 'test-unnest-wider.R:282:1',
         'test-unnest-wider.R:290:1', 'test-unnest-wider.R:315:1',
         'test-unnest.R:23:1', 'test-unnest.R:97:1', 'test-unnest.R:115:1',
         'test-unnest.R:120:1', 'test-unnest.R:128:1', 'test-unnest.R:139:1',
         'test-unnest.R:259:1', 'test-unnest.R:264:1', 'test-unnest.R:269:1',
         'test-unnest.R:276:1', 'test-unnest.R:282:1', 'test-unnest.R:292:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-nest-legacy.R:297:3'): unnest_legacy() recognize ptype ───────
       Expected `res` to equal `tibble(x = integer(), y = double())`.
       Differences:
       `actual` is length 1
       `expected` is length 2
       
       `names(actual)`:   "x"    
       `names(expected)`: "x" "y"
       
       `actual$y` is absent
       `expected$y` is a double vector ()
       
       
       [ FAIL 1 | WARN 0 | SKIP 157 | PASS 1049 ]
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

