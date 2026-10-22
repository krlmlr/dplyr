# FLORAL (0.7.0)

* GitHub: <https://github.com/vdblab/FLORAL>
* Email: <mailto:feit1@mskcc.org>
* GitHub mirror: <https://github.com/cran/FLORAL>

Run `revdepcheck::revdep_details(, "FLORAL")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       6. │ └─phyloseq::sample_data(physeq)
       7. ├─phyloseq::phyloseq(...)
       8. ├─phyloseq::tax_table(...)
       9. ├─... %>% as.matrix()
      10. ├─base::as.matrix(.)
      11. ├─tibble::column_to_rownames(., "ASV")
      12. │ └─tibble:::abort_already_has_rownames()
      13. │   └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      14. │     └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
      15. │       └─rlang:::signal_abort(cnd, .file)
      16. │         └─base::signalCondition(cnd)
      17. ├─base (local) `<fn>`(`<tbbl____>`)
      18. └─base::.handleSimpleError(...)
      19.   └─base (local) h(simpleError(msg, call))
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'Using-FLORAL-with-phyloseq.Rmd' failed with diagnostics:
     error in evaluating the argument 'object' in selecting a method for function 'sample_data': error in evaluating the argument 'object' in selecting a method for function 'tax_table': `.data` must be a data frame without row names.
     --- failed re-building ‘Using-FLORAL-with-phyloseq.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘Using-FLORAL-with-phyloseq.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

