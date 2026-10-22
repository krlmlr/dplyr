# EDCimport (0.7.0)

* GitHub: <https://github.com/DanChaltiel/EDCimport>
* Email: <mailto:dan.chaltiel@gmail.com>
* GitHub mirror: <https://github.com/cran/EDCimport>

Run `revdepcheck::revdep_details(, "EDCimport")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ── Failure ('test-helpers.R:118:3'): edc_xxx_join() works ──────────────────────
       Expected `get_label(x$subjid)` to equal `get_label(b$subjid)`.
       Differences:
       `actual` is NULL
       `expected` is a character vector ('Patient No')
       
       ── Failure ('test-lastnews_table.R:63:3'): lastnews_table() with ties ──────────
       Expected `lnt6$subjid` to have the same values as `1:3`.
       Actual: 1, 1, 2, 2, 2, 3, 3, 35, 35
       Expected: 1, 2, 3
       Needs: 35
       
       [ FAIL 2 | WARN 10 | SKIP 13 | PASS 112 ]
       Deleting unused snapshots: 'patient_gridplot/edc-patient-gridplot-args.svg',
       'patient_gridplot/edc-patient-gridplot-default.svg',
       'patient_gridplot/edc-patient-gridplot-gradient.svg',
       'population_plot/pop-plot.svg',
       'swimmerplot/swimmerplot-aes-color-id-subset-chr.svg',
       'swimmerplot/swimmerplot-group-id-subset-id-sort.svg',
       'swimmerplot/swimmerplot-origin-group.svg',
       'swimmerplot/swimmerplot-origin-include-exclude-id-sort.svg', and
       'swimmerplot/swimmerplot.svg'
       Error:
       ! Test failures.
       Execution halted
     ```

