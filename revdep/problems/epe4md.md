# epe4md (0.1.4)

* Email: <mailto:gabriel.konzen@epe.gov.br>
* GitHub mirror: <https://github.com/cran/epe4md>

Run `revdepcheck::revdep_details(, "epe4md")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > test-epe4md_calcula.R: 
       > test-epe4md_calcula.R:  Progress: ──────────────────────────────────────────────────────────────── 100%
       > test-epe4md_calcula.R: 
        Progress: ──────────────────────────────────────────────────────────────── 100%
       > test-epe4md_calcula.R: 
        Progress: ──────────────────────────────────────────────────────────────── 100%
       > test-epe4md_calcula.R: 
        Progress: ──────────────────────────────────────────────────────────────── 100%
       > test-epe4md_calcula.R: 
        Progress: ──────────────────────────────────────────────────────────────── 100%
       Saving _problems/test-epe4md_calcula-97.R
       [ FAIL 1 | WARN 0 | SKIP 2 | PASS 7 ]
       
       ══ Skipped tests (2) ═══════════════════════════════════════════════════════════
       • On CRAN (2): 'test-epe4md_casos_payback.R:4:1', 'test-epe4md_calcula.R:4:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-epe4md_calcula.R:84:3'): epe4md_calcula filtro_renda certo ───
       Expected `epe4md_calcula(...)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 2 | PASS 7 ]
       Error:
       ! Test failures.
       Execution halted
     ```

