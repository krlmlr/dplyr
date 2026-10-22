# comperes (0.2.7)

* GitHub: <https://github.com/echasnovski/comperes>
* Email: <mailto:evgeni.chasnovski@gmail.com>
* GitHub mirror: <https://github.com/cran/comperes>

Run `revdepcheck::revdep_details(, "comperes")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Component "score": Component 6: names for current but not for target
       Component "score": Component 7: names for current but not for target
       Component "score": Component 8: names for current but not for target
       Component "score": Component 9: names for current but not for target
       ...
       List-column 'score'
       ── Failure ('test-results-widecr.R:263:3'): as_widecr.default preserves column types ──
       Expected `as_widecr(input_types6, repair = TRUE)` to be identical to `output_ref_types6`.
       Differences:
       Component "score1": Component 1: names for current but not for target
       Component "score1": Component 2: names for current but not for target
       Component "score1": Component 3: names for current but not for target
       Component "score1": Component 4: names for current but not for target
       Component "score1": Component 5: names for current but not for target
       Component "score1": Component 6: names for current but not for target
       Component "score1": Component 7: names for current but not for target
       Component "score1": Component 8: names for current but not for target
       Component "score1": Component 9: names for current but not for target
       ...
       List-column 'score'
       
       [ FAIL 2 | WARN 0 | SKIP 6 | PASS 255 ]
       Error:
       ! Test failures.
       Execution halted
     ```

