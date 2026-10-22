# tabxplor (2.0.1)

* GitHub: <https://github.com/BriceNocenti/tabxplor>
* Email: <mailto:brice.nocenti@protonmail.com>
* GitHub mirror: <https://github.com/cran/tabxplor>

Run `revdepcheck::revdep_details(, "tabxplor")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       [33] NA                   | NA                     [33]          
       [34] NA                   | NA                     [34]          
       [35] NA                   - "#F6D0B2"              [35]          
       [36] NA                   | NA                     [36]          
       [37] NA                   | NA                     [37]          
       [38] NA                   | NA                     [38]          
       [39] NA                   | NA                     [39]          
       [40] NA                   | NA                     [40]          
       [41] NA                   - "#F3E0C2"              [41]          
        ... ...                    ...                    and 3 more ...
       
       `actual$White$bg/dark[45:51]`:   NA NA NA NA        NA NA NA
       `expected$White$bg/dark[45:51]`: NA NA NA "#F3E0C2" NA NA NA
       
       ── Failure ('test-tab-chi2.R:101:3'): design_effect shrinks the residual by exactly 1 / sqrt(delta-bar) ──
       Expected `eff$z/raw$z` to equal `rep(1/sqrt(dbar), 3)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3')
       `names(expected)` is absent
       
       
       [ FAIL 5 | WARN 1 | SKIP 31 | PASS 4442 ]
       Error:
       ! Test failures.
       Execution halted
     ```

