# statsExpressions (2.2.1)

* GitHub: <https://github.com/IndrajeetPatil/statsExpressions>
* Email: <mailto:patilindrajeet.science@gmail.com>
* GitHub mirror: <https://github.com/cran/statsExpressions>

Run `revdepcheck::revdep_details(, "statsExpressions")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       + expected[349, ]    3.0
       + expected[350, ]    2.0
         actual[349, ]      5.5
       - actual[350, ]      4.5
       - actual[351, ]      0.5
       - actual[352, ]      0.5
       + expected[352, ]    5.5
       
        `actual$desire[2:11]`: 9.00 6.00 6.00 6.00 7.50 6.00 6.00 10.00 10.00 10.00
       `expected$desire[2:7]`: 9.00 6.00 6.00                     10.00 10.00 10.00
       
         `actual$desire[90:95]`: 4.00 1.50 0.00                     10.00 3.50 7.50
       `expected$desire[86:95]`: 4.00 1.50 0.00 5.50 4.50 0.50 0.50 10.00 3.50 7.50
       
         `actual$desire[262:271]`: 9.00 9.00 9.00 3.00 2.00 5.50 5.50 5.50 0.50 6.50
       `expected$desire[262:271]`: 9.00 9.00 9.00 6.00 7.50 6.00 6.00 5.50 0.50 6.50
       
         `actual$desire[346:352]`: 10.00 10.00 9.00           5.50 4.50 0.50 0.50
       `expected$desire[346:352]`: 10.00 10.00 9.00 3.00 2.00 5.50 5.50          
       
       
       [ FAIL 2 | WARN 0 | SKIP 117 | PASS 98 ]
       Error:
       ! Test failures.
       Execution halted
     ```

