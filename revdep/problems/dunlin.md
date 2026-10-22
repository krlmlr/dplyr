# dunlin (0.1.12)

* GitHub: <https://github.com/insightsengineering/dunlin>
* Email: <mailto:joe.zhu@roche.com>
* GitHub mirror: <https://github.com/cran/dunlin>

Run `revdepcheck::revdep_details(, "dunlin")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `expected` is a character vector ('weight')
       
       ── Failure ('test-join_adsub_adsl.R:149:3'): join_adsub_adsl.list works with factor AVALC column. ──
       Expected `attr(res$adsl$w_CAT, "label")` to be identical to "weight".
       Differences:
       `actual` is NULL
       `expected` is a character vector ('weight')
       
       ── Failure ('test-join_adsub_adsl.R:170:3'): join_adsub_adsl.list works with factor AVALC column and drop_lvl = TRUE. ──
       Expected `attr(res$adsl$w, "label")` to be identical to "weight".
       Differences:
       `actual` is NULL
       `expected` is a character vector ('weight')
       
       ── Failure ('test-join_adsub_adsl.R:171:3'): join_adsub_adsl.list works with factor AVALC column and drop_lvl = TRUE. ──
       Expected `attr(res$adsl$w_CAT, "label")` to be identical to "weight".
       Differences:
       `actual` is NULL
       `expected` is a character vector ('weight')
       
       
       [ FAIL 13 | WARN 0 | SKIP 5 | PASS 353 ]
       Error:
       ! Test failures.
       Execution halted
     ```

