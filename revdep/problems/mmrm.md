# mmrm (0.3.19)

* GitHub: <https://github.com/openpharma/mmrm>
* Email: <mailto:daniel.sabanes_bove@rconis.com>
* GitHub mirror: <https://github.com/cran/mmrm>

Run `revdepcheck::revdep_details(, "mmrm")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-kenwardroger.R:172:1', 'test-kenwardroger.R:182:1',
         'test-kenwardroger.R:192:1', 'test-kenwardroger.R:202:1',
         'test-kenwardroger.R:519:1', 'test-kenwardroger.R:527:1',
         'test-kenwardroger.R:541:1', 'test-kenwardroger.R:559:1',
         'test-kenwardroger.R:571:1', 'test-kenwardroger.R:658:3',
         'test-kenwardroger.R:775:3', 'test-kenwardroger.R:798:3',
         'test-kr-integrated.R:64:3', 'test-kr-integrated.R:102:3',
         'test-kr-integrated.R:117:3', 'test-mmrm-methods.R:78:1',
         'test-mmrm-methods.R:94:1', 'test-mmrm-methods.R:100:1',
         'test-mmrm-methods.R:106:1', 'test-mmrm-methods.R:112:1',
         'test-mmrm-methods.R:119:1', 'test-testing.R:78:1', 'test-testing.R:92:1',
         'test-tmb-methods.R:142:1', 'test-tmb-methods.R:179:1',
         'test-tmb-methods.R:351:1', 'test-tmb-methods.R:941:1',
         'test-tmb-methods.R:1109:1', 'test-tmb-methods.R:1116:1'
       • empty test (1):
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-interop-car.R:446:3'): Anova results are compatible with broom::tidy ──
       Expected `broom::tidy(df2)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 58 | PASS 2878 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

