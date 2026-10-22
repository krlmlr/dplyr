# tbl.now (1.2.0)

* GitHub: <https://github.com/RodrigoZepeda/tbl.now>
* Email: <mailto:rzepeda17@gmail.com>
* GitHub mirror: <https://github.com/cran/tbl.now>

Run `revdepcheck::revdep_details(, "tbl.now")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-utils.R:78:3', 'test-utils.R:95:3', 'test-utils.R:121:3',
         'test-utils.R:144:3', 'test-utils.R:159:3', 'test-utils.R:185:3',
         'test-utils.R:209:3', 'test-utils.R:235:3'
       • {epinowcast} is not installed (2): 'test-converter-equivalence.R:199:5',
         'test-converter-grids.R:273:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-tidyverse.R:35:3'): It doesn't loose class after two applications ──
       Expected `capture.output(...)` to be identical to `capture.output(print(dfnow))`.
       Differences:
       actual[2:8] vs expected[2:8]
         "# Data type: \"count-incidence\""
         "# Frequency: Event: `weeks` | Report: `weeks`"
         "   event        delay sex      region   censored    report_date cases .event_num"
       - "   <date>       <int> <fct>    <fct>    <lgl>       <date>      <int>      <dbl>"
       + " * <date>       <int> <fct>    <fct>    <lgl>       <date>      <int>      <dbl>"
         "   [event_date] [...] [strata] [strata] [is_censor~ [report_da~ [cas~      [...]"
         " 1 2010-01-01       1 M        North    TRUE        2010-01-08     28          0"
         " 2 2010-01-08       1 M        North    TRUE        2010-01-15     20          1"
       
       
       [ FAIL 1 | WARN 0 | SKIP 1655 | PASS 550 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking Rd cross-references ... NOTE
     ```
     Packages unavailable to check Rd xrefs: ‘diseasenowcasting’, ‘epinowcast’
     Unknown package ‘almanac’ in Rd xrefs
     ```

