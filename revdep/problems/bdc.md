# bdc (1.1.6)

* GitHub: <https://github.com/brunobrr/bdc>
* Email: <mailto:ribeiro.brr@gmail.com>
* GitHub mirror: <https://github.com/cran/bdc>

Run `revdepcheck::revdep_details(, "bdc")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Skipped tests (13) ══════════════════════════════════════════════════════════
       • On CRAN (13): 'test-bdc_clean_names.R:2:1',
         'test-bdc_coordinates_country_inconsistent.R:2:1',
         'test-bdc_coordinates_transposed.R:2:1',
         'test-bdc_correct_coordinates.R:2:1',
         'test-bdc_country_from_coordinates.R:2:1', 'test-bdc_create_dir.R:2:1',
         'test-bdc_create_figures.R:2:1', 'test-bdc_filter_name.R:2:1',
         'test-bdc_get_world_map.R:2:1', 'test-bdc_query_names_taxadb.R:2:1',
         'test-bdc_standardize_country.R:2:1',
         'test-bdc_standardize_datasets.R:180:1',
         'test-bdc_suggest_names_taxadb.R:2:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-bdc_summary_col.R:10:3'): bdc_summary_col can summarise the tested columns ──
       Expected `resultant$.summary` to equal `c(TRUE, FALSE, FALSE, FALSE, FALSE)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3', '4', '5')
       `names(expected)` is absent
       
       
       [ FAIL 1 | WARN 1 | SKIP 13 | PASS 59 ]
       Error:
       ! Test failures.
       Execution halted
     ```

