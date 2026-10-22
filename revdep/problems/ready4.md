# ready4 (0.1.19)

* GitHub: <https://github.com/ready4-dev/ready4>
* Email: <mailto:matthew.hamilton1@monash.edu>
* GitHub mirror: <https://github.com/cran/ready4>

Run `revdepcheck::revdep_details(, "ready4")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'V_04.Rmd' failed with diagnostics:
     ℹ In index: 1.
     Caused by error in `ans[npos] <- rep(no, length.out = len)[npos]`:
     ! replacement has length zero
     --- failed re-building ‘V_04.Rmd’
     
     --- re-building ‘V_05.Rmd’ using rmarkdown
     --- finished re-building ‘V_05.Rmd’
     
     --- re-building ‘V_06.Rmd’ using rmarkdown
     --- finished re-building ‘V_06.Rmd’
     
     --- re-building ‘V_07.Rmd’ using rmarkdown
     --- finished re-building ‘V_07.Rmd’
     
     --- re-building ‘ready4.Rmd’ using rmarkdown
     --- finished re-building ‘ready4.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘V_04.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

