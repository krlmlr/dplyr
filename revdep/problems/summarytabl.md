# summarytabl (0.2.1)

* GitHub: <https://github.com/anyamemensah/summarytabl>
* Email: <mailto:ama@anyamemensah.com>
* GitHub mirror: <https://github.com/cran/summarytabl>

Run `revdepcheck::revdep_details(, "summarytabl")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-utils_output.R:696:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-mean_group_tbl.R:507:3'): Expected output with two variable stems where group is a variable (listwise deletion) ──
       Expected `observed1` to equal `expected1`.
       Differences:
       actual vs expected
                        mean
         actual[1, ]   3.862
         actual[2, ]   3.888
         actual[3, ]   3.952
       - actual[4, ]   3.988
       + expected[4, ] 3.987
         actual[5, ]   3.601
         actual[6, ]   3.438
         actual[7, ]   3.686
       
         `actual$mean[1:7]`: 3.8620 3.8880 3.9520 3.9880 3.6010 3.4380 3.6860
       `expected$mean[1:7]`: 3.8620 3.8880 3.9520 3.9870 3.6010 3.4380 3.6860
       
       
       [ FAIL 1 | WARN 5 | SKIP 55 | PASS 209 ]
       Error:
       ! Test failures.
       Execution halted
     ```

