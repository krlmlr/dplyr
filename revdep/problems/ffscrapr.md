# ffscrapr (1.4.8)

* GitHub: <https://github.com/ffverse/ffscrapr>
* Email: <mailto:tan@tanho.ca>
* GitHub mirror: <https://github.com/cran/ffscrapr>

Run `revdepcheck::revdep_details(, "ffscrapr")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     downloaded 9.8 MB
     
     --- finished re-building ‘mfl_getendpoint.Rmd’
     
     --- re-building ‘sleeper_basics.Rmd’ using rmarkdown
     trying URL 'https://github.com/ffverse/ffscrapr-tests/archive/1.4.7.zip'
     Content type 'application/zip' length 10326711 bytes (9.8 MB)
     ==================================================
     downloaded 9.8 MB
     
     --- finished re-building ‘sleeper_basics.Rmd’
     
     --- re-building ‘sleeper_getendpoint.Rmd’ using rmarkdown
     trying URL 'https://github.com/ffverse/ffscrapr-tests/archive/1.4.7.zip'
     Content type 'application/zip' length 10326711 bytes (9.8 MB)
     ==================================================
     downloaded 9.8 MB
     
     --- finished re-building ‘sleeper_getendpoint.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘mfl_basics.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

