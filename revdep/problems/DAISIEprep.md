# DAISIEprep (1.0.1)

* GitHub: <https://github.com/joshwlambert/DAISIEprep>
* Email: <mailto:joshua.lambert@lshtm.ac.uk>
* GitHub mirror: <https://github.com/cran/DAISIEprep>

Run `revdepcheck::revdep_details(, "DAISIEprep")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Saving _problems/test-plot_performance-19.R
       [ FAIL 1 | WARN 0 | SKIP 19 | PASS 2233 ]
       
       ══ Skipped tests (19) ══════════════════════════════════════════════════════════
       • Run only on CI (3): 'test-sensitivity.R:2:3', 'test-sensitivity.R:40:3',
         'test-sensitivity.R:78:3'
       • Temporary skip while fixing issue on R devel (5): 'test-plot_phylod.R:2:3',
         'test-plot_phylod.R:14:3', 'test-plot_phylod.R:26:3',
         'test-plot_phylod.R:38:3', 'test-plot_phylod.R:50:3'
       • empty test (11): 'test-create_daisie_data.R:169:1',
         'test-create_daisie_data.R:173:1', 'test-create_daisie_data.R:177:1',
         'test-create_daisie_data.R:181:1', 'test-create_daisie_data.R:185:1',
         'test-create_daisie_data.R:189:1', 'test-create_daisie_data.R:231:1',
         'test-create_daisie_data.R:235:1', 'test-create_daisie_data.R:239:1',
         'test-create_daisie_data.R:243:1', 'test-create_daisie_data.R:247:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-plot_performance.R:14:3'): plot_performance runs silent with one parameter setting ──
       Expected `plot_performance(performance_data = performance, group_by = prob_on_island)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 19 | PASS 2233 ]
       Error:
       ! Test failures.
       Execution halted
     ```

