# bsitar (0.4.0)

* GitHub: <https://github.com/Sandhu-SS/bsitar>
* Email: <mailto:satpal.sandhu@bristol.ac.uk>
* GitHub mirror: <https://github.com/cran/bsitar>

Run `revdepcheck::revdep_details(, "bsitar")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     <error/rlang_error>
     Error in `xml_children(x)[[search]]`:
     ! subscript out of bounds
     ---
     Backtrace:
         ▆
      1. ├─... %>% ...
      2. ├─kableExtra::footnote(...)
      3. ├─kableExtra::column_spec(., 4, width = "0.4in")
      4. ├─kableExtra::column_spec(., 3, width = "0.4in")
      5. ├─kableExtra::column_spec(., 2, width = "0.4in")
      6. └─kableExtra::column_spec(., 1, width = "0.4in")
      7.   └─kableExtra:::column_spec_html(...)
      8.     └─xml2::xml_child(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'Bayesian_SITAR_model_fit.Rmd' failed with diagnostics:
     subscript out of bounds
     --- failed re-building ‘Bayesian_SITAR_model_fit.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘Bayesian_SITAR_model_fit.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

