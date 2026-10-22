# rules (1.0.3)

* GitHub: <https://github.com/tidymodels/rules>
* Email: <mailto:emil.hvitfeldt@posit.co>
* GitHub mirror: <https://github.com/cran/rules>

Run `revdepcheck::revdep_details(, "rules")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-c5.R:282:3', 'test-c5.R:372:3', 'test-c5.R:433:3', 'test-cubist.R:2:3',
         'test-cubist.R:106:3', 'test-cubist.R:163:3', 'test-cubist.R:209:3',
         'test-cubist.R:246:3', 'test-cubist.R:284:3', 'test-cubist.R:321:3',
         'test-cubist.R:380:3', 'test-cubist.R:426:3', 'test-cubist.R:467:3',
         'test-cubist.R:509:3', 'test-cubist.R:557:3', 'test-cubist.R:619:3',
         'test-cubist.R:656:3', 'test-cubist.R:762:3', 'test-rule-fit-binomial.R:2:3',
         'test-rule-fit-binomial.R:107:3', 'test-rule-fit-binomial.R:215:3',
         'test-rule-fit-multinomial.R:2:3', 'test-rule-fit-multinomial.R:114:3',
         'test-rule-fit-multinomial.R:226:3', 'test-rule-fit-regression.R:2:3',
         'test-rule-fit-regression.R:63:3', 'test-rule-fit-regression.R:128:3',
         'test-rule-fit-regression.R:175:3', 'test-rule-fit-regression.R:220:3',
         'test-rule-fit-regression.R:242:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-c5.R:345:3'): tunable ────────────────────────────────────────
       Expected `C5_rules_engine_args$call_info[C5_rules_engine_args$name == "fuzzyThreshold"][[1]]$fun` to equal "fuzzy_thresholding".
       Differences:
       `actual` is NULL
       `expected` is a character vector ('fuzzy_thresholding')
       
       
       [ FAIL 1 | WARN 0 | SKIP 37 | PASS 21 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpqtcPBj/working_dir/RtmpiA1Zg8/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

