# wbwdi (1.0.4)

* GitHub: <https://github.com/tidy-intelligence/r-wbwdi>
* Email: <mailto:christoph@tidy-intelligence.com>
* GitHub mirror: <https://github.com/cran/wbwdi>

Run `revdepcheck::revdep_details(, "wbwdi")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'tests-wdi_get.R:64:3', 'tests-wdi_get.R:82:3', 'tests-wdi_get.R:101:3',
         'tests-wdi_get.R:108:3', 'tests-wdi_get.R:118:3', 'tests-wdi_get.R:128:3',
         'tests-wdi_get.R:158:3', 'tests-wdi_get_entities.R:2:3',
         'tests-wdi_get_entities.R:21:3', 'tests-wdi_get_entities.R:95:3',
         'tests-wdi_get_income_levels.R:2:3', 'tests-wdi_get_income_levels.R:33:3',
         'tests-wdi_get_indicators.R:2:3', 'tests-wdi_get_indicators.R:21:3',
         'tests-wdi_get_indicators.R:70:3', 'tests-wdi_get_languages.R:2:3',
         'tests-wdi_get_lending_types.R:2:3', 'tests-wdi_get_lending_types.R:9:3',
         'tests-wdi_get_lending_types.R:65:3', 'tests-wdi_get_regions.R:2:3',
         'tests-wdi_get_regions.R:9:3', 'tests-wdi_get_regions.R:81:3',
         'tests-wdi_get_sources.R:2:3', 'tests-wdi_get_topics.R:2:3',
         'tests-wdi_get_topics.R:9:3', 'tests-wdi_get_topics.R:72:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('tests-wdi_get_indicators.R:55:7'): wdi_get_indicators handles type conversions and missing values ──
       Error in `unnest_wider(unnest_longer(select(indicators_processed, "indicator_id", "topics"), "topics"), "topics")`: i In column: `topics`.
       i In row: 1.
       Caused by error:
       ! Can't unnest elements with missing names.
       i Supply `names_sep` to generate automatic names.
       
       [ FAIL 1 | WARN 0 | SKIP 40 | PASS 126 ]
       Error:
       ! Test failures.
       Execution halted
     ```

