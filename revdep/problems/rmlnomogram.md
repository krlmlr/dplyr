# rmlnomogram (0.1.2)

* Email: <mailto:herdi@nycu.edu.tw>
* GitHub mirror: <https://github.com/cran/rmlnomogram>

Run `revdepcheck::revdep_details(, "rmlnomogram")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > 
       > test_check("rmlnomogram")
       
       Attaching package: 'dplyr'
       
       The following objects are masked from 'package:stats':
       
           filter, lag
       
       The following objects are masked from 'package:base':
       
           intersect, setdiff, setequal, union
       
       Saving _problems/test-create_nomogram-62.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 14 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-create_nomogram.R:60:3'): create_nomogram validates data types and structures ──
       Expected `create_nomogram(only_factors, sample_output)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 14 ]
       Error:
       ! Test failures.
       Execution halted
     ```

