# GDPuc (1.6.1)

* GitHub: <https://github.com/pik-piam/GDPuc>
* Email: <mailto:jokoch@pik-potsdam.de>
* GitHub mirror: <https://github.com/cran/GDPuc>

Run `revdepcheck::revdep_details(, "GDPuc")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       + expected[8, ]  1.873685e+02
       - actual[9, ]             NaN
       + expected[9, ]  2.219864e+02
       - actual[10, ]            NaN
       + expected[10, ] 2.484892e+02
       and 15 more ...
       
            actual$value | expected$value                
        [1] NaN          - 70.2           [1]            
        [2] NaN          - 77.7           [2]            
        [3] NaN          - 88.1           [3]            
        [4] NaN          - 96.5           [4]            
        [5] NaN          - 116.8          [5]            
        [6] NaN          - 138.5          [6]            
        [7] NaN          - 163.8          [7]            
        [8] NaN          - 187.4          [8]            
        [9] NaN          - 222.0          [9]            
       [10] NaN          - 248.5          [10]           
        ... ...            ...            and 15 more ...
       
       
       [ FAIL 6 | WARN 0 | SKIP 0 | PASS 6617 ]
       Error:
       ! Test failures.
       Execution halted
     ```

