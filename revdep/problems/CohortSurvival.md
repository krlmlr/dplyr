# CohortSurvival (1.2.1)

* GitHub: <https://github.com/darwin-eu/CohortSurvival>
* Email: <mailto:kim.lopez@spc.ox.ac.uk>
* GitHub mirror: <https://github.com/cran/CohortSurvival>

Run `revdepcheck::revdep_details(, "CohortSurvival")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-estimateSurvival.R:2629:3', 'test-estimateSurvival.R:2669:3',
         'test-estimateSurvival.R:2701:3', 'test-filterSurvivalChanges.R:2:3',
         'test-mockMGUS2cdm.R:2:3', 'test-outcomeHierarchy.R:2:3',
         'test-outcomeHierarchy.R:158:3', 'test-plotSurvival.R:2:3',
         'test-plotSurvival.R:22:3', 'test-plotSurvival.R:55:3',
         'test-plotSurvival.R:86:3', 'test-plotSurvival.R:129:3',
         'test-plotSurvival.R:137:3', 'test-plotSurvival.R:160:3',
         'test-plotSurvival.R:189:3', 'test-plotSurvival.R:199:3',
         'test-reexports-omopgenerics.R:3:3', 'test-riskTable.R:2:3',
         'test-riskTable.R:65:3', 'test-selectResults.R:2:3',
         'test-selectResults.R:31:3', 'test-tableSurvival.R:2:3',
         'test-tableSurvival.R:94:3', 'test-tableSurvival.R:124:3',
         'test-tableSurvival.R:152:3', 'test-tableSurvival.R:162:3',
         'test-tableSurvivalAttrition.R:2:3',
         'test-validateExtractSurvivalInputs.R:2:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-addCohortSurvival.R:437:3'): checkCensorOnDate validates direct censor date inputs ──
       Expected `CohortSurvival:::checkCensorOnDate(cohort, as.Date("2020-01-12"))` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 77 | PASS 32 ]
       Error:
       ! Test failures.
       Execution halted
     ```

