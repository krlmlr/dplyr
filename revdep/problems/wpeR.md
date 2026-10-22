# wpeR (0.2.0)

* GitHub: <https://github.com/GR3602/wpeR>
* Email: <mailto:grega0simcic@gmail.com>
* GitHub mirror: <https://github.com/cran/wpeR>

Run `revdepcheck::revdep_details(, "wpeR")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     Backtrace:
          ▆
       1. └─basemaps::basemap_gglayer(ext1000, map_service = "carto", map_type = "light")
       2.   └─basemaps::basemap(...)
       3.     └─basemaps:::.get_map(...)
       4.       └─base::lapply(...)
       5.         └─basemaps (local) FUN(X[[i]], ...)
       6.           └─base::mapply(...)
       7.             └─basemaps (local) `<fn>`(img = dots[[1L]][[1L]], x = dots[[2L]][[1L]], y = dots[[3L]][[1L]])
       8.               ├─terra::writeRaster(...)
       9.               └─terra::writeRaster(...)
      10.                 └─terra (local) .local(x, filename, ...)
      11.                   └─terra:::messages(x, "writeRaster")
      12.                     └─terra:::error(f, x@pntr$getError())
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'wpeR.Rmd' failed with diagnostics:
     [writeRaster] path does not exist
     --- failed re-building ‘wpeR.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘wpeR.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

