# unpivotr (0.6.4)

* GitHub: <https://github.com/nacnudus/unpivotr>
* Email: <mailto:nacnudus@gmail.com>
* GitHub mirror: <https://github.com/cran/unpivotr>

Run `revdepcheck::revdep_details(, "unpivotr")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       9.   └─unpivotr:::behead_if.data.frame(...)
      10.     ├─unpivotr::enhead(data_cells, headers, direction, drop = FALSE)
      11.     └─unpivotr:::enhead.data.frame(...)
      12.       ├─base::do.call(direction, list(data_cells, header_cells, drop))
      13.       └─unpivotr:::`up-left`(`<tibble[,24]>`, `<tibble[,3]>`, FALSE)
      14.         └─unpivotr:::corner_join(...)
      15.           └─unpivotr::partition(...)
      16.             ├─tidyr::unnest(out, cells)
      17.             └─tidyr:::unnest.data.frame(out, cells)
      18.               └─tidyr::unchop(...)
      19.                 └─vctrs::vec_size(data)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'introduction.Rmd' failed with diagnostics:
     VECTOR_ELT() can only be applied to a 'list', not a 'NULL'
     --- failed re-building ‘introduction.Rmd’
     
     --- re-building ‘small-multiples.Rmd’ using rmarkdown
     --- finished re-building ‘small-multiples.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘introduction.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

