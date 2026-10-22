# phenofit (0.3.11)

* GitHub: <https://github.com/eco-hydro/phenofit>
* Email: <mailto:kongdd.sysu@gmail.com>
* GitHub mirror: <https://github.com/cran/phenofit>

Run `revdepcheck::revdep_details(, "phenofit")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       warning: solve(): system is singular; attempting approx solution
       
       warning: solve(): system is singular; attempting approx solution
       
       warning: solve(): system is singular; attempting approx solution
       
       warning: solve(): system is singular; attempting approx solution
       
       warning: solve(): system is singular; attempting approx solution
       
       warning: solve(): system is singular; attempting approx solution
       
       warning: solve(): system is close to singular; rcond: 1.65502e-17; attempting approx solution
       Saving _problems/test-season-34.R
       [ FAIL 1 | WARN 2 | SKIP 0 | PASS 69 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-season.R:34:5'): `season` with smooth_wSG ────────────────────
       Expected `brks <- do.call(season, param)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 2 | SKIP 0 | PASS 69 ]
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

