# saros (1.6.2)

* GitHub: <https://github.com/NIFU-NO/saros>
* Email: <mailto:stephus.daus@gmail.com>
* GitHub mirror: <https://github.com/cran/saros>

Run `revdepcheck::revdep_details(, "saros")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `names(expected)`:                                         
       
       `attr(actual, 'dep_label_prefix')` is a character vector ('Gender')
       `attr(expected, 'dep_label_prefix')` is absent
       
         `attr(actual, 'row.names')`: 1
       `attr(expected, 'row.names')`:  
       
       `actual$Generation` is an S3 object of class <factor>, an integer vector
       `expected$Generation` is absent
       
       `actual$F (%)` is a character vector ('50')
       `expected$F (%)` is absent
       
       `actual$M (%)` is a character vector ('50')
       `expected$M (%)` is absent
       
       `actual$Total (N)` is an integer vector (2)
       `expected$Total (N)` is absent
       
       
       [ FAIL 1 | WARN 0 | SKIP 44 | PASS 1343 ]
       Error:
       ! Test failures.
       Execution halted
     ```

