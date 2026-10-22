# ern (2.1.2)

* Email: <mailto:david.champredon@canada.ca>
* GitHub mirror: <https://github.com/cran/ern>

Run `revdepcheck::revdep_details(, "ern")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       iterations Richardson-Lucy deconvolution:  9
       iterations Richardson-Lucy deconvolution:  9
       iterations Richardson-Lucy deconvolution:  9
       iterations Richardson-Lucy deconvolution:  9
       iterations Richardson-Lucy deconvolution:  9
       iterations Richardson-Lucy deconvolution:  9
       Saving _problems/test-get_use_dates-65.R
       
       ERROR: `si_distr` must be specified in `config.EpiEstim`. ABORTING!
       Wastewater data smoothed using loess method
       Wastewater data smoothed using rollmean method
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 166 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-get_use_dates.R:65:3'): get_use_dates() works when dates.only = FALSE ──
       Expected `res` to be TRUE.
       Differences:
       `actual` is a character vector ('Component "lwr": names for current but not for target', 'Component "upr": names for current but not for target')
       `expected` is a logical vector (TRUE)
       
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 166 ]
       Error:
       ! Test failures.
       Execution halted
     ```

