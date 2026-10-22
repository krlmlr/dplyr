# REDCapTidieR (1.2.5)

* GitHub: <https://github.com/CHOP-CGTInformatics/REDCapTidieR>
* Email: <mailto:hannar1@chop.edu>
* GitHub mirror: <https://github.com/cran/REDCapTidieR>

Run `revdepcheck::revdep_details(, "REDCapTidieR")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       i See ?duckdb_storage for details and alternatives.
       [ FAIL 1 | WARN 0 | SKIP 5 | PASS 335 ]
       
       ══ Skipped tests (5) ═══════════════════════════════════════════════════════════
       • On CRAN (5): 'test-lint-free.R:2:3', 'test-read_redcap.R:1:1',
         'test-supertibble.R:1:1', 'test-utils.R:226:3', 'test-write.R:337:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-write.R:156:5'): write_redcap_xlsx has expected supertibble and metadata outputs ──
       Expected `names(sheet_4)` to have the same values as `expected_meta_labels`.
       Actual: "REDCap Instrument Name", "REDCap Instrument Description", NA, NA, NA
       Expected: "REDCap Instrument Name", "REDCap Instrument Description", "Variable / Field Name", "Field Label", "Field Type"
       Needs: NA
       Absent: "Variable / Field Name", "Field Label", "Field Type"
       Backtrace:
           ▆
        1. ├─withr::with_tempdir(...) at test-write.R:137:3
        2. │ └─withr::with_dir(tmp, code)
        3. │   └─base::force(code)
        4. └─testthat::expect_setequal(names(sheet_4), expected_meta_labels) at test-write.R:156:5
       
       [ FAIL 1 | WARN 0 | SKIP 5 | PASS 335 ]
       Error:
       ! Test failures.
       Execution halted
     ```

