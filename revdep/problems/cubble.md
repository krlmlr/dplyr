# cubble (1.0.0)

* GitHub: <https://github.com/huizezhang-sherry/cubble>
* Email: <mailto:huizezhangsh@gmail.com>
* GitHub mirror: <https://github.com/cran/cubble>

Run `revdepcheck::revdep_details(, "cubble")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      4.     └─tsibble::interval(x)
      5.       └─tsibble:::not_tsibble(x)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'cb3tsibblesf.Rmd' failed with diagnostics:
     x is not a tsibble.
     --- failed re-building ‘cb3tsibblesf.Rmd’
     
     --- re-building ‘cb4glyph.Rmd’ using rmarkdown
     --- finished re-building ‘cb4glyph.Rmd’
     
     --- re-building ‘cb5match.Rmd’ using rmarkdown
     --- finished re-building ‘cb5match.Rmd’
     
     --- re-building ‘cb6interactive.Rmd’ using rmarkdown
     --- finished re-building ‘cb6interactive.Rmd’
     
     --- re-building ‘cb7misc.Rmd’ using rmarkdown
     --- finished re-building ‘cb7misc.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘cb3tsibblesf.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

## In both

*   checking DESCRIPTION meta-information ... NOTE
     ```
       Missing dependency on R >= 4.1.0 because package code uses the pipe
       |> or function shorthand \(...) syntax added in R 4.1.0.
       File(s) using such syntax:
         ‘accessors.Rd’ ‘as-cubble.R’ ‘as_cubble.Rd’ ‘check-key.R’
         ‘climate-data.Rd’ ‘covid.Rd’ ‘cubble-attrs.R’ ‘cubble-class.R’
         ‘cubble-print.R’ ‘dplyr.R’ ‘dplyr.Rd’ ‘face-spatial-temporal.R’
         ‘face.Rd’ ‘glyph.R’ ‘glyph.Rd’ ‘make_spatial_sf.Rd’
         ‘make_temporal_tsibble.Rd’ ‘matching.R’ ‘matching.Rd’ ‘netcdf.R’
         ‘sf.R’ ‘test-data.Rd’ ‘tsibble.R’ ‘tsibble.Rd’ ‘unfold.R’ ‘unfold.Rd’
     ```

