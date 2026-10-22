# matrixset (0.4.1)

* GitHub: <https://github.com/pascalcroteau/matrixset>
* Email: <mailto:croteaupascl@gmail.com>
* GitHub mirror: <https://github.com/cran/matrixset>

Run `revdepcheck::revdep_details(, "matrixset")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `names(expected[[2]])` is a character vector ('mean', 'rg')
       
       `names(actual[[3]])` is absent
       `names(expected[[3]])` is a character vector ('mean', 'rg')
       
       `names(actual[[4]])` is absent
       `names(expected[[4]])` is a character vector ('mean', 'rg')
       
       `names(actual[[5]])` is absent
       `names(expected[[5]])` is a character vector ('mean', 'rg')
       
       `names(actual[[6]])` is absent
       `names(expected[[6]])` is a character vector ('mean', 'rg')
       
       `names(actual[[7]])` is absent
       `names(expected[[7]])` is a character vector ('mean', 'rg')
       
       `names(actual[[8]])` is absent
       `names(expected[[8]])` is a character vector ('mean', 'rg')
       
       
       [ FAIL 125 | WARN 0 | SKIP 0 | PASS 1260 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

