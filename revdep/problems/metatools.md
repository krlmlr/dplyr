# metatools (0.3.0)

* GitHub: <https://github.com/pharmaverse/metatools>
* Email: <mailto:liam.f.hobby@gsk.com>
* GitHub mirror: <https://github.com/cran/metatools>

Run `revdepcheck::revdep_details(, "metatools")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `attr(expected$EFFICACY, 'label')` is a character vector ('Efficacy Population Flag')
       
       `attr(actual$ITT, 'label')` is absent
       `attr(expected$ITT, 'label')` is a character vector ('Intent to Treat Population Flag')
       
       `attr(actual$SAFETY, 'label')` is absent
       `attr(expected$SAFETY, 'label')` is a character vector ('Safety Population Flag')
       
       ── Failure ('test-supp.R:167:3'): combine_supp ─────────────────────────────────
       Expected `... %>% pull(ENTCRIT)` to equal `original`.
       Differences:
       `attr(actual, 'label')` is absent
       `attr(expected, 'label')` is a character vector ('PROTOCOL ENTRY CRITERIA NOT MET')
       
       ── Failure ('test-supp.R:251:3'): Floating point correction works ──────────────
       Expected `combo_ae` to equal `supp_check`.
       Differences:
       `attr(actual$AETRTEM, 'label')` is absent
       `attr(expected$AETRTEM, 'label')` is a character vector ('TREATMENT EMERGENT FLAG')
       
       
       [ FAIL 6 | WARN 0 | SKIP 0 | PASS 186 ]
       Error:
       ! Test failures.
       Execution halted
     ```

