# chevron (0.2.15)

* GitHub: <https://github.com/insightsengineering/chevron>
* Email: <mailto:joe.zhu@roche.com>
* GitHub mirror: <https://github.com/cran/chevron>

Run `revdepcheck::revdep_details(, "chevron")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-mng01.R:75:1', 'test-mng01.R:97:1', 'test-mng01.R:109:1',
         'test-mng01.R:127:1', 'test-mng01.R:148:1', 'test-pdt01.R:3:1',
         'test-pdt01.R:12:1', 'test-pdt01.R:25:1', 'test-pdt02.R:3:1',
         'test-pdt02.R:12:1', 'test-pdt02.R:25:1', 'test-rmpt01.R:3:1',
         'test-rmpt01.R:12:1', 'test-rmpt01.R:24:1', 'test-rmpt03.R:3:1',
         'test-rmpt03.R:15:1', 'test-rmpt03.R:29:1', 'test-rmpt04.R:3:1',
         'test-rmpt04.R:12:1', 'test-rmpt04.R:24:1', 'test-rmpt05.R:3:1',
         'test-rmpt05.R:12:1', 'test-rmpt05.R:24:1', 'test-rmpt06.R:3:1',
         'test-rmpt06.R:11:1', 'test-rmpt06.R:20:1', 'test-rspt01.R:1:1',
         'test-rspt01.R:8:1', 'test-rspt01.R:29:1', 'test-rspt01.R:48:1',
         'test-rspt01.R:69:1', 'test-rspt01.R:92:3', 'test-rspt01.R:121:1',
         'test-ttet01.R:1:1', 'test-ttet01.R:25:1', 'test-ttet01.R:47:1',
         'test-ttet01.R:70:1', 'test-unwrap.R:1:1', 'test-unwrap.R:40:1',
         'test-unwrap.R:69:1', 'test-unwrap.R:104:1', , 'test-vst01.R:3:1',
         'test-vst01.R:16:1', 'test-vst02.R:3:1', 'test-vst02.R:10:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-ael01_nollt.R:4:3'): ael01_nollt works with admh dataset ─────
       Expected `run(...)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 194 | PASS 450 ]
       Error:
       ! Test failures.
       Execution halted
     ```

