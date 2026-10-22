# daqapo (0.3.2)

* GitHub: <https://github.com/bupaverse/daqapo>
* Email: <mailto:niels.martin@uhasselt.be>
* GitHub mirror: <https://github.com/cran/daqapo>

Run `revdepcheck::revdep_details(, "daqapo")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      23. │         └─dplyr (local) eval()
      24. └─purrr::map2_lgl(INTERVAL.x, INTERVAL.y, lubridate::int_overlaps)
      25.   └─purrr:::map2_("logical", .x, .y, .f, ..., .progress = .progress)
      26.     ├─purrr:::with_indexed_errors(...)
      27.     │ └─base::withCallingHandlers(...)
      28.     ├─purrr:::call_with_cleanup(...)
      29.     └─lubridate (local) .f(.x[[i]], .y[[i]], ...)
      30.       └─base::stopifnot(c(is.interval(int1), is.interval(int2)))
      31.         └─base::stop(simpleError(msg, call = if (p <- sys.parent(1L)) sys.call(p)))
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'Introduction-to-DaQAPO.Rmd' failed with diagnostics:
     ℹ In argument: `overlaps = map2_lgl(INTERVAL.x, INTERVAL.y,
       lubridate::int_overlaps)`.
     Caused by error in `map2_lgl()`:
     ℹ In index: 1.
     Caused by error in `.f()`:
     ! c(is.interval(int1), is.interval(int2)) are not all TRUE
     --- failed re-building ‘Introduction-to-DaQAPO.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘Introduction-to-DaQAPO.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

