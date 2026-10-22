# timeplyr (1.1.2)

* GitHub: <https://github.com/NicChr/timeplyr>
* Email: <mailto:nick.christofides.r@gmail.com>
* GitHub mirror: <https://github.com/cran/timeplyr>

Run `revdepcheck::revdep_details(, "timeplyr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       [9589] -2.40  - 0.50     [9589]          
       [9590] -0.20  | -0.20    [9590]          
       [9591] -0.10  - 0.90     [9591]          
       [9592] -2.60  - -0.80    [9592]          
       [9593] 1.10   | 1.10     [9593]          
          ... ...      ...      and 174 more ...
       
              actual | expected                 
       [9772] 1.30   | 1.30     [9772]          
       [9773] NA     | NA       [9773]          
       [9774] NA     | NA       [9774]          
       [9775] -4.80  - -1.70    [9775]          
       [9776] NA     - -0.20    [9776]          
       [9777] NA     | NA       [9777]          
       [9778] 0.90   | 0.90     [9778]          
       [9779] 0.60   | 0.60     [9779]          
       [9780] -1.50  - -0.90    [9780]          
       [9781] -1.20  - -1.60    [9781]          
          ... ...      ...      and 219 more ...
       
       
       [ FAIL 1 | WARN 0 | SKIP 3 | PASS 613 ]
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

