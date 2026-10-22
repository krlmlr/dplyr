# scimo (0.0.3)

* GitHub: <https://github.com/abichat/scimo>
* Email: <mailto:antoine.bichat@proton.me>
* GitHub mirror: <https://github.com/cran/scimo>

Run `revdepcheck::revdep_details(, "scimo")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Saving _problems/test-aggregate_hclust-82.R
       Saving _problems/test-aggregate_list-47.R
       [ FAIL 2 | WARN 0 | SKIP 1 | PASS 134 ]
       
       ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
       • {yatah} is not installed (1): 'test-taxonomy.R:5:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-aggregate_hclust.R:77:3'): step_aggregate_hclust works ───────
       Expected `baked[[cl]]` to equal `cheese_abundance %>% select(all_of(asv_in_cl)) %>% rowSums()`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('1', '2', '3', '4', '5', ...)
       
       ── Failure ('test-aggregate_list.R:42:3'): step_aggregate_list() works ─────────
       Expected `baked[[cl]]` to equal `cheese_abundance %>% select(all_of(rk_list[[cl]])) %>% rowSums()`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('1', '2', '3', '4', '5', ...)
       
       
       [ FAIL 2 | WARN 0 | SKIP 1 | PASS 134 ]
       Error:
       ! Test failures.
       Execution halted
     ```

