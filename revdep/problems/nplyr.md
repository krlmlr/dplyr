# nplyr (0.3.0)

* GitHub: <https://github.com/jibarozzo/nplyr>
* Email: <mailto:bolaponte@pm.me>
* GitHub mirror: <https://github.com/cran/nplyr>

Run `revdepcheck::revdep_details(, "nplyr")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘nplyr-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: nest-filter-joins
     > ### Title: Nested filtering joins
     > ### Aliases: nest-filter-joins nest_semi_join nest_anti_join
     > 
     > ### ** Examples
     > 
     > gm_nest <- gapminder::gapminder %>% tidyr::nest(country_data = -continent)
     > gm_codes <- gapminder::country_codes %>% dplyr::slice_sample(n = 10)
     > 
     > gm_nest %>% nest_semi_join(country_data, gm_codes, by = "country")
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpxwCZrN/working_dir/RtmpoKnHwO/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error: argument `.nest_data` msut be of class "grouped_df", "tbl_df", "tbl", "data.frame".
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       ── Error ('test-nest-unite.R:6:3'): nest_unite() returns tibble in expected format ──
       <assertError/simpleError/error/condition>
       Error: argument `.nest_data` msut be of class "grouped_df", "tbl_df", "tbl", "data.frame".
       Backtrace:
           ▆
        1. └─global test_format(...) at test-nest-unite.R:6:3
        2.   └─nplyr (local) f(...)
        3.     └─nplyr:::check_nest_data(...)
        4.       └─nplyr:::assert_nest_df(x)
        5.         └─assertthat::assert_that(...)
       ── Error ('test-nest-unite.R:20:3'): nest_unite() creates correct new column ───
       <assertError/simpleError/error/condition>
       Error: argument `.nest_data` msut be of class "grouped_df", "tbl_df", "tbl", "data.frame".
       Backtrace:
           ▆
        1. ├─gm_nest %>% ... at test-nest-unite.R:20:3
        2. └─nplyr::nest_unite(...)
        3.   └─nplyr:::check_nest_data(...)
        4.     └─nplyr:::assert_nest_df(x)
        5.       └─assertthat::assert_that(...)
       
       [ FAIL 95 | WARN 0 | SKIP 0 | PASS 6 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     <error/rlang_error>
     Error:
     ! argument `.data` must not be a rowwise dataframe.
     try calling `dplyr::ungroup()`
     ---
     Backtrace:
         ▆
      1. ├─... %>% tidyr::unnest(country_data)
      2. ├─tidyr::unnest(., country_data)
      3. ├─dplyr::slice_head(., n = 1)
      4. └─nplyr::nest_mutate(., country_data, pop_millions = pop/1e+06)
      5.   └─nplyr:::check_nest_data(...)
      6.     └─assertthat::assert_that(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'Use-case-for-nplyr.Rmd' failed with diagnostics:
     argument `.data` must not be a rowwise dataframe.
     try calling `dplyr::ungroup()`
     --- failed re-building ‘Use-case-for-nplyr.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘Use-case-for-nplyr.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

