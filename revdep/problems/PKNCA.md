# PKNCA (0.12.1)

* GitHub: <https://github.com/humanpred/pknca>
* Email: <mailto:wdenney@humanpredictions.com>
* GitHub mirror: <https://github.com/cran/PKNCA>

Run `revdepcheck::revdep_details(, "PKNCA")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `class(expected$data_intervals[[4]])`: "tbl_df"     "tbl" "data.frame"
       
       `class(actual$data_intervals[[5]])`:   "data.frame"                   
       `class(expected$data_intervals[[5]])`: "tbl_df"     "tbl" "data.frame"
       
       `class(actual$data_intervals[[6]])`:   "data.frame"                   
       `class(expected$data_intervals[[6]])`: "tbl_df"     "tbl" "data.frame"
       
       `class(actual$data_intervals[[7]])`:   "data.frame"                   
       `class(expected$data_intervals[[7]])`: "tbl_df"     "tbl" "data.frame"
       
       `class(actual$data_intervals[[8]])`:   "data.frame"                   
       `class(expected$data_intervals[[8]])`: "tbl_df"     "tbl" "data.frame"
       
       `class(actual$data_intervals[[9]])`:   "data.frame"                   
       `class(expected$data_intervals[[9]])`: "tbl_df"     "tbl" "data.frame"
       
       `class(actual$data_intervals[[10]])`:   "data.frame"                   
       `class(expected$data_intervals[[10]])`: "tbl_df"     "tbl" "data.frame"
       
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 1977 ]
       Error:
       ! Test failures.
       Execution halted
     ```

