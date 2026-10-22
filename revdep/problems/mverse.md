# mverse (0.2.3)

* GitHub: <https://github.com/mverseanalysis/mverse>
* Email: <mailto:michael.moon@utoronto.ca>
* GitHub mirror: <https://github.com/cran/mverse>

Run `revdepcheck::revdep_details(, "mverse")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `dimnames(expected)[[1]]` is NULL
       
       ── Failure ('test-inspect.R:559:5'): summary.glm_mverse(output = 'aic') outputs AIC and BIC statistics. ──
       Expected `as.matrix(smverse2)` to equal `smanu`.
       Differences:
       `dimnames(actual)[[1]]` is a character vector ('1', '2', '3')
       `dimnames(expected)[[1]]` is NULL
       
       ── Failure ('test-inspect.R:596:5'): summary.glm.nb_mverse(output = 'aic') outputs AIC and BIC statistics. ──
       Expected `as.matrix(smverse)` to equal `smanu`.
       Differences:
       `dimnames(actual)[[1]]` is a character vector ('1', '2', '3')
       `dimnames(expected)[[1]]` is NULL
       
       ── Failure ('test-inspect.R:597:5'): summary.glm.nb_mverse(output = 'aic') outputs AIC and BIC statistics. ──
       Expected `as.matrix(smverse2)` to equal `smanu`.
       Differences:
       `dimnames(actual)[[1]]` is a character vector ('1', '2', '3')
       `dimnames(expected)[[1]]` is NULL
       
       
       [ FAIL 9 | WARN 0 | SKIP 0 | PASS 121 ]
       Error:
       ! Test failures.
       Execution halted
     ```

