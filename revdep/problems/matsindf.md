# matsindf (0.4.11)

* GitHub: <https://github.com/MatthewHeun/matsindf>
* Email: <mailto:matthew.heun@me.com>
* GitHub mirror: <https://github.com/cran/matsindf>

Run `revdepcheck::revdep_details(, "matsindf")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > ### Title: Apply a function to a 'matsindf' data frame (and more)
     > ### Aliases: matsindf_apply
     > 
     > ### ** Examples
     > 
     > library(matsbyname)
     > example_fun <- function(a, b){
     +   return(list(c = sum_byname(a, b),
     +               d = difference_byname(a, b)))
     + }
     > # Single values for arguments
     > matsindf_apply(FUN = example_fun, a = 2, b = 2)
     $c
     [1] 4
     
     $d
     [1] 0
     
     > # Matrices for arguments
     > a <- 2 * matrix(c(1,2,3,4), nrow = 2, ncol = 2, byrow = TRUE,
     +               dimnames = list(c("r1", "r2"), c("c1", "c2")))
     > b <- 0.5 * a
     > matsindf_apply(FUN = example_fun, a = a, b = b)
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
            ▆
         1. ├─testthat::expect_warning(...) at test-collapse.R:437:3
         2. │ └─testthat:::expect_condition_matching_(...)
         3. │   └─testthat:::quasi_capture(...)
         4. │     ├─testthat (local) .capture(...)
         5. │     │ └─base::withCallingHandlers(...)
         6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
         7. ├─matsindf::collapse_to_matrices(...)
         8. │ └─... %>% data.frame(check.names = FALSE)
         9. └─base::data.frame(., check.names = FALSE)
        10.   ├─base::as.data.frame(x[[i]], optional = TRUE, stringsAsFactors = stringsAsFactors)
        11.   └─tibble:::as.data.frame.tbl_df(x[[i]], optional = TRUE, stringsAsFactors = stringsAsFactors)
        12.     ├─base::`[<-`(`*tmp*`, unname, value = `<named list>`)
        13.     └─tibble:::`[<-.tbl_df`(`*tmp*`, unname, value = `<named list>`)
        14.       └─tibble:::tbl_subassign(x, i, j, value, i_arg, j_arg, substitute(value))
        15.         └─tibble:::tbl_subassign_col(xo, j, value)
        16.           └─tibble:::fast_nrow(x)
        17.             └─base::.row_names_info(x, 2L)
       
       [ FAIL 10 | WARN 0 | SKIP 0 | PASS 371 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error:
     ! GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     ---
     Backtrace:
         ▆
      1. └─global calc_W(midf)
      2.   └─matsindf::matsindf_apply(.DF, FUN = W_func, U_mat = U, V_mat = V)
      3.     └─matsindf::build_matsindf_apply_data_frame(...)
      4.       └─base::nrow(.dat_df)
      5.         ├─base::dim(x)
      6.         └─base::dim.data.frame(x)
      7.           └─base::.row_names_info(x, 2L)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'midf_apply_primer.Rmd' failed with diagnostics:
     GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘midf_apply_primer.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘iris_pca.Rmd’ ‘matsindf.Rmd’ ‘midf_apply_primer.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

