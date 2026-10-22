# ftExtra (0.6.5)

* GitHub: <https://github.com/atusy/ftExtra>
* Email: <mailto:atusy.rpkg@gmail.com>
* GitHub mirror: <https://github.com/cran/ftExtra>

Run `revdepcheck::revdep_details(, "ftExtra")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Differences:
         `actual`: 1.4
       `expected`: 3.9
       
       ── Error ('test-as-paragraph-md.R:53:3'): explicit image dimensions do not require reading the image ──
       <Magick::ErrorBlob/C++Error/error/condition>
       Error: R: unable to open image `not-present.png': No such file or directory @ error/blob.c/OpenBlob/2964
       Backtrace:
            ▆
         1. └─ftExtra::as_paragraph_md("![](not-present.png){width=2 height=3}") at test-as-paragraph-md.R:53:3
         2.   └─ftExtra:::organize(md_df, auto_color_link, .solve_footnote)
         3.     └─base::lapply(...)
         4.       └─ftExtra (local) FUN(X[[i]], ...)
         5.         └─ftExtra:::construct_chunk(as.list(.solve_footnote(cell)), auto_color_link)
         6.           └─flextable::as_image(src = x$Image[[i]])
         7.             └─base::lapply(...)
         8.               └─flextable (local) FUN(X[[i]], ...)
         9.                 └─magick::image_read(x)
        10.                   ├─base::withCallingHandlers(...)
        11.                   └─magick:::magick_image_readpath(path, density, depth, strip, defines)
       
       [ FAIL 5 | WARN 0 | SKIP 4 | PASS 90 ]
       Error:
       ! Test failures.
       Execution halted
     ```

