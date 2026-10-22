# infer (1.1.0)

* GitHub: <https://github.com/tidymodels/infer>
* Email: <mailto:simon.couch@posit.co>
* GitHub mirror: <https://github.com/cran/infer>

Run `revdepcheck::revdep_details(, "infer")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Differences:
       `names(actual)` is a character vector ('df')
       `names(expected)` is absent
       
       ── Failure ('test-wrappers.R:452:3'): prop_test handles >2 explanatory levels gracefully ──
       Expected `res_1$statistic` to equal `res_old$statistic`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('X-squared')
       
       ── Failure ('test-wrappers.R:453:3'): prop_test handles >2 explanatory levels gracefully ──
       Expected `res_1$chisq_df` to equal `res_old$parameter`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('df')
       
       
       [ FAIL 10 | WARN 0 | SKIP 111 | PASS 490 ]
       Deleting unused snapshots: 'visualize/viz-fit-bare.svg',
       'visualize/viz-fit-conf-int.svg', 'visualize/viz-fit-no-h0.svg',
       'visualize/viz-fit-p-val-both.svg', 'visualize/viz-fit-p-val-left.svg', and
       'visualize/viz-fit-p-val-right.svg'
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking dependencies in R code ... NOTE
     ```
     Namespace in Imports field not imported from: ‘withr’
       All declared Imports should be used.
     ```

