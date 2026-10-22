# yamlet (1.3.4)

* GitHub: <https://github.com/bergsmat/yamlet>
* Email: <mailto:bergsmat@gmail.com>
* GitHub mirror: <https://github.com/cran/yamlet>

Run `revdepcheck::revdep_details(, "yamlet")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Differences:
       1/1 mismatches
       x[1]: "foo"
       y[1]: "Race"
       ── Failure ('test-dvec.R:160:3'): bind_rows respects column type of first argument ──
       Expected `bind_rows(dm %>% redecorate(persistence = F), dm2) %>% decorations` to produce warnings.
       ── Failure ('test-dvec.R:165:3'): bind_rows respects column type of first argument ──
       Expected `{ ... }` to produce warnings.
       ── Failure ('test-dvec.R:175:3'): bind_rows respects column type of first argument ──
       Expected `dm %<>% bind_rows(dm2)` to produce warnings.
       ── Failure ('test-dvec.R:176:3'): bind_rows respects column type of first argument ──
       Expected `attr(dm$RACE, "label")` to be identical to "Race".
       Differences:
       1/1 mismatches
       x[1]: "foo"
       y[1]: "Race"
       ── Failure ('test-groups.R:37:3'): decorations_groups sorts groups decorations ──
       Expected `decorations_groups(test)` to be identical to `c("Subject", "Time")`.
       Differences:
       Lengths differ: 0 is not 2
       
       [ FAIL 7 | WARN 16 | SKIP 3 | PASS 535 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking re-building of vignette outputs ... WARNING
     ```
     ...
       ...
     --- re-building ‘aesthetics.Rmd’ using rmarkdown
     --- finished re-building ‘aesthetics.Rmd’
     
     --- re-building ‘scripted-html.Rmd’ using rmarkdown
     --- finished re-building ‘scripted-html.Rmd’
     
     --- re-building ‘scripted-pdf.Rmd’ using rmarkdown
     ! LaTeX Error: File `lmodern.sty' not found.
     
     ! Emergency stop.
     <read *> 
     
     Error: processing vignette 'scripted-pdf.Rmd' failed with diagnostics:
     LaTeX failed to compile scripted-pdf.tex. See https://yihui.org/tinytex/r/#debugging for debugging tips. See scripted-pdf.log for more info.
     --- failed re-building ‘scripted-pdf.Rmd’
     
     --- re-building ‘yamlet-introduction.Rmd’ using rmarkdown
     --- finished re-building ‘yamlet-introduction.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘scripted-pdf.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

