# blockr.dplyr (0.1.0)

* GitHub: <https://github.com/BristolMyersSquibb/blockr.dplyr>
* Email: <mailto:christoph@cynkra.com>
* GitHub mirror: <https://github.com/cran/blockr.dplyr>

Run `revdepcheck::revdep_details(, "blockr.dplyr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > test-summarize_expr.R:     filter, lag
       > test-summarize_expr.R: 
       > test-summarize_expr.R: The following objects are masked from 'package:base':
       > test-summarize_expr.R: 
       > test-summarize_expr.R:     intersect, setdiff, setequal, union
       > test-summarize_expr.R: 
       > test-summarize_expr.R: Error in parse(text = text) : <text>:1:35: unexpected symbol
       > test-summarize_expr.R: 1: dplyr::summarize(data, bad = this is
       > test-summarize_expr.R:                            
       > test-summarize_expr.R:            ^
       > test-summarize_expr.R: Error in summarise(.data, ..., .by = { : 
       > test-summarize_expr.R:   i In argument: `bad = undefined_function(mpg)`.
       > test-summarize_expr.R: Caused by error in `undefined_function()`:
       > test-summarize_expr.R: ! could not find function "undefined_function"
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 1166 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-filter_expr.R:25:3'): apply_filter_expr function handles errors ──
       Expected `blockr.dplyr:::apply_filter_expr(...)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 1166 ]
       Error:
       ! Test failures.
       Execution halted
     ```

