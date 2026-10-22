# metamorphr (0.4.1)

* GitHub: <https://github.com/yasche/metamorphr>
* Email: <mailto:yannik.schermer@chem.rptu.de>
* GitHub mirror: <https://github.com/cran/metamorphr>

Run `revdepcheck::revdep_details(, "metamorphr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `class(expected[[3]])`: "tbl_df"     "tbl" "data.frame"
       
       ── Failure ('test-read_mgf.R:49:3'): MSn spectra are correct ───────────────────
       Expected `mgf_tibble$MSn[[1]]` to equal `msspec1`.
       Differences:
       `class(actual)`:   "data.frame"                   
       `class(expected)`: "tbl_df"     "tbl" "data.frame"
       
       ── Failure ('test-read_mgf.R:50:3'): MSn spectra are correct ───────────────────
       Expected `mgf_tibble$MSn[[2]]` to equal `msspec2`.
       Differences:
       `class(actual)`:   "data.frame"                   
       `class(expected)`: "tbl_df"     "tbl" "data.frame"
       
       ── Failure ('test-read_mgf.R:51:3'): MSn spectra are correct ───────────────────
       Expected `mgf_tibble$MSn[[3]]` to equal `msspec3`.
       Differences:
       `class(actual)`:   "data.frame"                   
       `class(expected)`: "tbl_df"     "tbl" "data.frame"
       
       
       [ FAIL 10 | WARN 0 | SKIP 0 | PASS 452 ]
       Error:
       ! Test failures.
       Execution halted
     ```

