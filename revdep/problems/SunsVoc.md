# SunsVoc (0.1.2)

* Email: <mailto:tjb152@case.edu>
* GitHub mirror: <https://github.com/cran/SunsVoc>

Run `revdepcheck::revdep_details(, "SunsVoc")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘SunsVoc-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: p_iv.week
     > ### Title: Obtain Psuedo IV Curve and other predicted IV features at
     > ###   reference conditions for a given week, used internally in IVxbyx
     > ###   function.
     > ### Aliases: p_iv.week
     > 
     > ### ** Examples
     > 
     > df <- read_df_raw(df_wbw,0.02,7)
     > df_slice <- dplyr::filter(df, df$n_period == 1)
     > # Check that this has enough data! needs more than 10 rows to be meaningful
     > nrow(df_slice)
     [1] 0
     > # needs median temperature
     > temp <- median_temp(df_wbw)
     > res <- p_iv.week(df_slice, temp = temp, N_c = 60)
     Error in lm.fit(x, y, offset = offset, singular.ok = singular.ok, ...) : 
       0 (non-NA) cases
     Calls: p_iv.week -> isc.1sun -> <Anonymous> -> lm.fit
     Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     
     Quitting from pipeline.Rmd:157-163 [unnamed-chunk-7]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error in `lm.fit()`:
     ! 0 (non-NA) cases
     ---
     Backtrace:
         ▆
      1. └─SunsVoc::power_loss_phys_bat(...)
      2.   └─SunsVoc::p_iv.week(init_df, temp = corr_T, N_c = N_c)
      3.     └─SunsVoc::isc.1sun(df$isc, df$poa)
      4.       └─stats::lm(isc ~ Irrad)
      5.         └─stats::lm.fit(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'pipeline.Rmd' failed with diagnostics:
     0 (non-NA) cases
     --- failed re-building ‘pipeline.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘pipeline.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

## In both

*   checking dependencies in R code ... NOTE
     ```
     Namespace in Imports field not imported from: ‘data.table’
       All declared Imports should be used.
     ```

