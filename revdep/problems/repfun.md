# repfun (0.1.2)

* GitHub: <https://github.com/GSK-Biostatistics/repfun>
* Email: <mailto:cr883296@gmail.com>
* GitHub mirror: <https://github.com/cran/repfun>

Run `revdepcheck::revdep_details(, "repfun")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Expected `basechars` to equal `qc_basechars`.
       Differences:
       `attr(actual$tt_svnm, 'label')` is absent
       `attr(expected$tt_svnm, 'label')` is a character vector ('Statistical Parameter Name')
       
       `attr(actual$tt_avnm, 'label')` is absent
       `attr(expected$tt_avnm, 'label')` is a character vector ('Analysis Variable Name')
       
       ── Failure ('test-ru_sumstats.R:107:3'): generating summary statistics works ───
       Expected `vtlsigns` to equal `qc_vtlsigns`.
       Differences:
       `attr(actual$tt_svnm, 'label')` is absent
       `attr(expected$tt_svnm, 'label')` is a character vector ('Statistical Parameter Name')
       
       ── Failure ('test-ru_sumstats.R:159:3'): generating summary statistics works ───
       Expected `vtlsigns_t` to equal `qc_vtlsigns_t`.
       Differences:
       `attr(actual$tt_svnm, 'label')` is absent
       `attr(expected$tt_svnm, 'label')` is a character vector ('Statistical Parameter Name')
       
       
       [ FAIL 9 | WARN 0 | SKIP 0 | PASS 31 ]
       Error:
       ! Test failures.
       Execution halted
     ```

