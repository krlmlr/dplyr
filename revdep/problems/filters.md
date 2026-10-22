# filters (0.3.1)

* Email: <mailto:joe.zhu@roche.com>
* GitHub mirror: <https://github.com/cran/filters>

Run `revdepcheck::revdep_details(, "filters")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Component "STUDYID": Attributes: < current is not list-like >
       Component "USUBJID": Attributes: < Modes: list, NULL >
       Component "USUBJID": Attributes: < Lengths: 1, 0 >
       Component "USUBJID": Attributes: < names for target but not for current >
       Component "USUBJID": Attributes: < current is not list-like >
       Component "SUBJID": Attributes: < Modes: list, NULL >
       ...
       ── Failure ('test-utils.R:15:3'): `semi_join` preserves column labels ──────────
       Expected `get_labels(semi_join(adae, adsl, by = c("STUDYID", "USUBJID")))` to equal `get_labels(dplyr::semi_join(adae, adsl, by = c("STUDYID", "USUBJID")))`.
       Differences:
       Component "STUDYID": Modes: character, NULL
       Component "STUDYID": Lengths: 1, 0
       Component "STUDYID": target is character, current is NULL
       Component "USUBJID": Modes: character, NULL
       Component "USUBJID": Lengths: 1, 0
       Component "USUBJID": target is character, current is NULL
       Component "SUBJID": Modes: character, NULL
       Component "SUBJID": Lengths: 1, 0
       Component "SUBJID": target is character, current is NULL
       ...
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 79 ]
       Error:
       ! Test failures.
       Execution halted
     ```

