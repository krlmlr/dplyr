# metacore (0.3.0)

* GitHub: <https://github.com/atorus-research/metacore>
* Email: <mailto:liam.f.hobby@gsk.com>
* GitHub mirror: <https://github.com/cran/metacore>

Run `revdepcheck::revdep_details(, "metacore")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ── Failure ('test-metacore.R:142:3'): pulling out control terminology works ────
       Expected `get_control_term(test, QVAL, SUPPAE)` to equal `tibble(code = c("N", "Y"), decode = c("No", "Yes"))`.
       Differences:
       Attributes: < Component "class": Lengths (1, 3) differ (string compare on first 1) >
       Attributes: < Component "class": 1 string mismatch >
       ── Failure ('test-metacore.R:146:3'): pulling out control terminology works ────
       Expected `get_control_term(test, "QVAL", "SUPPAE")` to equal `tibble(code = c("N", "Y"), decode = c("No", "Yes"))`.
       Differences:
       Attributes: < Component "class": Lengths (1, 3) differ (string compare on first 1) >
       Attributes: < Component "class": 1 string mismatch >
       ── Failure ('test-metacore.R:160:3'): get_keys works ───────────────────────────
       Expected `get_keys(test, DM)` to equal `... %>% ...`.
       Differences:
       Component "variable": Attributes: < target is NULL, current is list >
       Component "key_seq": Attributes: < target is NULL, current is list >
       ── Failure ('test-reader.R:593:3'): Test permitted values within codelist ──────
       Expected `vals[[1]]` to equal `ref`.
       Differences:
       Attributes: < Component "class": Lengths (1, 3) differ (string compare on first 1) >
       Attributes: < Component "class": 1 string mismatch >
       
       [ FAIL 4 | WARN 0 | SKIP 0 | PASS 150 ]
       Error:
       ! Test failures.
       Execution halted
     ```

