# depower (2026.1.30)

* Email: <mailto:code@brettklamer.com>
* GitHub mirror: <https://github.com/cran/depower>

Run `revdepcheck::revdep_details(, "depower")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
          n1    n2 mean1 mean2 ratio dispersion1 dispersion2 distribution nsims test 
       <dbl> <dbl> <dbl> <dbl> <dbl>       <dbl>       <dbl> <chr>        <dbl> <chr>
     1    10    10    10    14   1.4           2           2 Independent…   200 wald…
     2    10    10    10    16   1.6           2           2 Independent…   200 wald…
     # ℹ 4 more variables: alpha <dbl>, power <dbl>, power_ci_lower <dbl>,
     #   power_ci_upper <dbl>
     > 
     > # 99% confidence interval
     > add_power_ci(x, ci_level = 0.99)
     # A tibble: 2 × 14
          n1    n2 mean1 mean2 ratio dispersion1 dispersion2 distribution nsims test 
       <dbl> <dbl> <dbl> <dbl> <dbl>       <dbl>       <dbl> <chr>        <dbl> <chr>
     1    10    10    10    14   1.4           2           2 Independent…   200 wald…
     2    10    10    10    16   1.6           2           2 Independent…   200 wald…
     # ℹ 4 more variables: alpha <dbl>, power <dbl>, power_ci_lower <dbl>,
     #   power_ci_upper <dbl>
     > 
     > # Plot with shaded region for confidence interval of the power estimate.
     > add_power_ci(x) |>
     +   plot()
     Error in vapply(X = condition_at, FUN = function(x) { : 
       values must be length 1,
      but FUN(X[[1]]) result is length 0
     Calls: plot ... plot.depower -> NextMethod -> plot.nb -> data_builder -> vapply
     Execution halted
     ```

