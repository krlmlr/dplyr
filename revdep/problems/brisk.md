# brisk (0.1.1)

* GitHub: <https://github.com/rich-payne/brisk>
* Email: <mailto:paynestatistics@gmail.com>
* GitHub mirror: <https://github.com/cran/brisk>

Run `revdepcheck::revdep_details(, "brisk")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Expected `res` to equal `exp_scores`.
       Differences:
       `names(actual$total)` is a character vector ('1', '2', '3', '4')
       `names(expected$total)` is absent
       
       ── Failure ('test-mcda.R:36:3'): mcda ──────────────────────────────────────────
       Expected `res` to equal `exp_scores`.
       Differences:
       `names(actual$total)` is a character vector ('1', '2', '3', '4')
       `names(expected$total)` is absent
       
       ── Failure ('test-mcda.R:124:3'): stochastic mcda() ────────────────────────────
       Expected `res` to equal `exp_scores`.
       Differences:
       `names(actual$total)` is a character vector ('1', '2', '3', '4')
       `names(expected$total)` is absent
       
       
       [ FAIL 4 | WARN 0 | SKIP 6 | PASS 33 ]
       Deleting unused snapshots: 'plot/plot-ref.png', 'plot/plot-utility-ref.png',
       'plot/plot-utility-stacked-ref.png', 'plot/plot-utility-stacked.png',
       'plot/plot-utility.png', and 'plot/plot.png'
       Error:
       ! Test failures.
       Execution halted
     ```

