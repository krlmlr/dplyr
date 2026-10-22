# accelEE (0.3.2)

* GitHub: <https://github.com/paulhibbing/accelEE>
* Email: <mailto:paulhibbing@gmail.com>
* GitHub mirror: <https://github.com/cran/accelEE>

Run `revdepcheck::revdep_details(, "accelEE")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
      36. ├─tidyr::unpack(., dplyr::matches("Classification$"), names_sep = "_")
      37. │ └─tidyr:::check_data_frame(data, call = error_call)
      38. │   └─base::is.data.frame(x)
      39. ├─dplyr::summarise(...)
      40. ├─dplyr::group_by(...)
      41. ├─dplyr:::group_by.data.frame(...)
      42. │ └─dplyr::group_by(.data, ..., .add = .add, .drop = .drop)
      43. │   └─dplyr::group_by_prepare(.data, ..., .add = .add, error_call = current_env())
      44. │     └─dplyr:::add_computed_columns(.data, new_groups, error_call = error_call)
      45. │       └─dplyr:::mutate_cols(...)
      46. │         ├─base::withCallingHandlers(...)
      47. │         └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      48. │           └─mask$eval_all_mutate(quo)
      49. │             └─dplyr (local) eval()
      50. ├─lubridate::floor_date(time, unit)
      51. │ └─timechange::time_floor(x, unit = unit, week_start = as_week_start(week_start))
      52. │   ├─timechange:::from_posixct(...)
      53. │   ├─timechange:::C_time_floor(...)
      54. │   └─timechange:::to_posixct(time)
      55. │     └─timechange:::unsupported_date_time(time)
      56. │       └─base::stop(...)
      57. └─base::.handleSimpleError(...)
      58.   └─dplyr (local) h(simpleError(msg, call))
      59.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
     Execution halted
     ```

# actimetrics (0.9.0)

* GitHub: <https://github.com/jhuwit/actimetrics>
* Email: <mailto:muschellij2@gmail.com>
* GitHub mirror: <https://github.com/cran/actimetrics>

Run `revdepcheck::revdep_details(, "actimetrics")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘actimetrics-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: acti_calculate_verisense
     > ### Title: Calculate Step Counts via Verisense
     > ### Aliases: acti_calculate_verisense
     > 
     > ### ** Examples
     > 
     > data = actiread::acti_read_gt3x(actiread::acti_example_gt3x())
     ℹ Filling zeros in data
     ✔ Filled zeros in data
     ℹ Timezone not applied to data
     > steps = acti_calculate_verisense(data)
     Finding Peak Locations
     Error in peak_func(segments = segments, acc = acc, n_samples = n_samples,  : 
       isTRUE(all.equal(new_index[, ncol(new_index)], to)) is not TRUE
     Calls: acti_calculate_verisense ... <Anonymous> -> do.call -> <Anonymous> -> peak_func -> stopifnot
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         3. │ ├─dplyr::summarise(...)
         4. │ ├─dplyr::group_by(...)
         5. │ ├─dplyr::mutate(...)
         6. │ └─dplyr:::mutate.data.frame(...)
         7. │   └─dplyr::mutate(...)
         8. │     └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
         9. │       ├─base::withCallingHandlers(...)
        10. │       └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
        11. │         └─mask$eval_all_mutate(quo)
        12. │           └─dplyr (local) eval()
        13. ├─lubridate::floor_date(time, unit = paste0(epoch, " seconds"))
        14. │ └─timechange::time_floor(x, unit = unit, week_start = as_week_start(week_start))
        15. │   ├─timechange:::from_posixct(...)
        16. │   ├─timechange:::C_time_floor(...)
        17. │   └─timechange:::to_posixct(time)
        18. │     └─timechange:::unsupported_date_time(time)
        19. │       └─base::stop(...)
        20. └─base::.handleSimpleError(...)
        21.   └─dplyr (local) h(simpleError(msg, call))
        22.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       
       [ FAIL 2 | WARN 1 | SKIP 2 | PASS 219 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking dependencies in R code ... NOTE
     ```
     Downloading cpython-3.13.17-linux-x86_64-gnu (download) (33.7MiB)
      Downloaded cpython-3.13.17-linux-x86_64-gnu (download)
     Downloading numpy (15.9MiB)
      Downloaded numpy
     Installed 1 package in 25ms
     ```

# additive (1.0.1)

* GitHub: <https://github.com/hsbadr/additive>
* Email: <mailto:badr@jhu.edu>
* GitHub mirror: <https://github.com/cran/additive>

Run `revdepcheck::revdep_details(, "additive")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpYgiYEA/working_dir/RtmprpqVQO/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

## In both

*   checking S3 generic/method consistency ... NOTE
     ```
     Mismatches for apparent methods not registered:
     check_args:
       function(object, call)
     check_args.additive:
       function(object)
     See section ‘Registering S3 methods’ in the ‘Writing R Extensions’
     manual.
     ```

# admiral (1.5.0)

* GitHub: <https://github.com/pharmaverse/admiral>
* Email: <mailto:edoardo.mancini@roche.com>
* GitHub mirror: <https://github.com/cran/admiral>

Run `revdepcheck::revdep_details(, "admiral")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        1. └─testthat::expect_snapshot(...) at test-derive_vars_transposed.R:123:3
        2.   └─testthat:::expect_snapshot_(...)
       ── Failure ('test-derive_vars_transposed.R:136:3'): derive_vars_transposed Test 4: error if `relationship` is unexpected ──
       Expected ``%>%`(...)` to throw a error.
       Backtrace:
           ▆
        1. └─testthat::expect_snapshot(...) at test-derive_vars_transposed.R:136:3
        2.   └─testthat:::expect_snapshot_(...)
       ── Failure ('test-user_utils.R:206:3'): print.source Test 15: `source` objects containing `data.frame` ──
       Expected `... %>% ...` to be identical to `expected_print_output`.
       Differences:
       actual[5:10] vs expected[5:10]
         "definition:"
         "# A tibble: 2 x 3"
         "  TERMCHAR                   TERMNUM SRCVAR "
       - "* <chr>                        <int> <chr>  "
       + "  <chr>                        <int> <chr>  "
         "1 APPLICATION SITE ERYTHEMA 10003041 AEDECOD"
         "2 APPLICATION SITE PRURITUS 10003053 AEDECOD"
       
       
       [ FAIL 4 | WARN 0 | SKIP 138 | PASS 1116 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# agua (0.1.4)

* GitHub: <https://github.com/tidymodels/agua>
* Email: <mailto:qiushi.yann@gmail.com>
* GitHub mirror: <https://github.com/cran/agua>

Run `revdepcheck::revdep_details(, "agua")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmp8psTmh/working_dir/Rtmp8pp4jW/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# allMT (0.1.1)

* GitHub: <https://github.com/tmungle/allMT>
* Email: <mailto:tushar.mungle@gmail.com>
* GitHub mirror: <https://github.com/cran/allMT>

Run `revdepcheck::revdep_details(, "allMT")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     34: FUN(X[[i]], ...)
     35: lapply(exprs, to_duckdb_expr)
     36: to_duckdb_exprs(exprs)
     37: rel_filter.duckdb_relation(rel, exprs)
     38: rel_filter(rel, exprs)
     39: withCallingHandlers(expr, condition = function(cnd) {    {        .__handler_frame__. <- TRUE        .__setup_frame__. <- frame        if (inherits(cnd, "message")) {            except <- c("warning", "error")        }        else if (inherits(cnd, "warning")) {            except <- "error"        }        else {            except <- ""        }    }    while (!is_null(cnd)) {        if (inherits(cnd, "error")) {            out <- handlers[[1L]](cnd)            if (!inherits(out, "rlang_zap"))                 throw(out)        }        inherit <- .subset2(.subset2(cnd, "rlang"), "inherit")        if (is_false(inherit)) {            return()        }        cnd <- .subset2(cnd, "parent")    }})
     40: doTryCatch(return(expr), name, parentenv, handler)
     41: tryCatchOne(expr, names, parentenv, handlers[[1L]])
     42: tryCatchList(expr, classes, parentenv, handlers)
     43: tryCatch(withCallingHandlers(expr, condition = function(cnd) {    {        .__handler_frame__. <- TRUE        .__setup_frame__. <- frame        if (inherits(cnd, "message")) {            except <- c("warning", "error")        }        else if (inherits(cnd, "warning")) {            except <- "error"        }        else {            except <- ""        }    }    while (!is_null(cnd)) {        if (inherits(cnd, "error")) {            out <- handlers[[1L]](cnd)            if (!inherits(out, "rlang_zap"))                 throw(out)        }        inherit <- .subset2(.subset2(cnd, "rlang"), "inherit")        if (is_false(inherit)) {            return()        }        cnd <- .subset2(cnd, "parent")    }}), stackOverflowError = handlers[[1L]])
     44: rlang::try_fetch(rel, error = identity)
     45: rel_try(list(name = "filter", x = .data, args = try_list(dots = dots,     by = by, preserve = .preserve)), `Can't use relational without filter conditions.` = (length(dots) ==     0), `{.code filter(.by = ...)} not implemented, try {.code mutate(.by = ...)} followed by a simple {.code filter()}.` = (!quo_is_null(by)),     {        rel <- duckdb_rel_from_df(.data)        exprs <- rel_translate_dots(dots, .data)        rel <- oo_prep(rel)        rel <- rel_filter(rel, exprs)        out_rel <- oo_restore(rel)        out <- duckplyr_reconstruct(out_rel, .data)        return(out)    })
     46: filter.data.frame(., thrmb_dur$Thrmb_duration >= duration_plt)
     47: dplyr::filter(., thrmb_dur$Thrmb_duration >= duration_plt)
     48: thrmb_dur %>% dplyr::filter(thrmb_dur$Thrmb_duration >= duration_plt)
     49: doTryCatch(return(expr), name, parentenv, handler)
     50: tryCatchOne(expr, names, parentenv, handlers[[1L]])
     51: tryCatchList(expr, names[-nh], parentenv, handlers[-nh])
     52: doTryCatch(return(expr), name, parentenv, handler)
     53: tryCatchOne(tryCatchList(expr, names[-nh], parentenv, handlers[-nh]),     names[nh], parentenv, handlers[[nh]])
     54: tryCatchList(expr, classes, parentenv, handlers)
     55: tryCatch(expr = {    thrmb_df_final <- NULL    file_name <- NULL    result <- NULL    if (missing(input_files_path)) {        stop("Please provide a file or folder path for the 'input_files_path' argument")    }    if (utils::file_test("-d", input_files_path)) {        message("NOTE: Analyzing provided input file only")        pat_list <- lapply(list.files(input_files_path), function(x) {            utils::read.csv(paste0(input_files_path, x))        })        names(pat_list) <- list.files(input_files_path)    }    else if (utils::file_test("-f", input_files_path)) {        message("NOTE: Analyzing provided input file only")        pat_list <- list(utils::read.csv(input_files_path))        file_name <- basename(input_files_path)    }    else {        stop("Please provide a valid file or folder path for the 'input_files_path' argument")    }    for (z in seq(pat_list)) {        neut_df <- data.frame(matrix(ncol = 5, nrow = 1))        x <- c("ID", "Number of episodes", "Duration (weeks)",             "Number of long duration toxicity episodes", "Duration of long duration toxicity")        colnames(neut_df) <- x        pat_csv <- pat_list[[z]]        if (nrow(pat_csv) >= 1) {            MT_N <- NULL            MR <- pat_csv            l = 1            thrmb_dur <- data.frame(matrix(ncol = 1, nrow = 0))            colnames(thrmb_dur) <- c("Thrmb_duration")            flag = 0            while (l <= nrow(MR)) {                j = l                flag = 0                if (MR$PLT[l] <= plt_range[1]) {                  j = l                  while (j <= nrow(MR)) {                    if (MR$PLT[j] >= plt_range[2] | j == nrow(MR)) {                      d_thrmb <- MR$Weeks[j] - MR$Weeks[l]                      thrmb_dur = as.data.frame(rbind(thrmb_dur,                         d_thrmb))                      flag = 1                      jj = j                      break                    }                    j = j + 1                  }                }                if (j == nrow(MR)) {                  break                }                if (flag == "1") {                  l = j                }                if (flag == "0") {                  l = l + 1                }            }            colnames(thrmb_dur) <- c("Thrmb_duration")            neut_df$`Number of episodes` <- nrow(thrmb_dur)            neut_df$`Duration (weeks)` <- sum(thrmb_dur$Thrmb_duration)            if (!is.na(duration_plt)) {                neut_Long_dur <- thrmb_dur %>% dplyr::filter(thrmb_dur$Thrmb_duration >=                   duration_plt)                neut_df$`Number of long duration toxicity episodes` <- nrow(neut_Long_dur)                neut_df$`Duration of long duration toxicity` <- sum(neut_Long_dur$Thrmb_duration)            }            else {                neut_df$`Number of long duration toxicity episodes` <- NA                neut_df$`Duration of long duration toxicity` <- NA            }        }        if (length(pat_list) <= 1) {            neut_df$ID <- tools::file_path_sans_ext(file_name)            thrmb_df_final <- neut_df        }        if (length(pat_list) > 1) {            neut_df$ID <- tools::file_path_sans_ext(names(pat_list)[z])            thrmb_df_final <- rbind(thrmb_df_final, neut_df)        }    }    if (length(pat_list) > 1) {        temp_summary <- as.data.frame(sapply(thrmb_df_final[,             -1], rounding_off))        colnames(temp_summary)[1] <- "Result"        temp_summary$Result <- as.character(temp_summary$Result)        b <- rbind(`Number of patients analyzed` = nrow(thrmb_df_final),             temp_summary)        b <- b %>% tibble::rownames_to_column("Parameter")        result[[1]] <- thrmb_df_final        result[[2]] <- b %>% knitr::kable(format = "rst")        result[[3]] <- b %>% htmlTable::addHtmlTableStyle(align = "lc",             col.rgroup = c("white", "#e6e6e6"), css.cell = "width: 250px",             css.header = "background-color: #e6e6e6") %>% htmlTable::htmlTable(caption = "Table: Thrombocytopenia analysis",             rnames = FALSE)        return(result)    }    else {        b <- as.data.frame(t(thrmb_df_final))        colnames(b) <- "Result"        b <- b %>% tibble::rownames_to_column("Parameter")        result[[1]] <- thrmb_df_final        result[[2]] <- b %>% knitr::kable(format = "rst")        result[[3]] <- b %>% htmlTable::addHtmlTableStyle(align = "lc",             col.rgroup = c("white", "#e6e6e6"), css.cell = "width: 200px",             css.header = "background-color: #e6e6e6") %>% htmlTable::htmlTable(caption = "Table: Thrombocytopenia analysis",             rnames = FALSE)        return(result)    }    message("Anaemia analysis complete")}, error = function(e) {    message("Error")    print(e)}, warning = function(w) {    message("Warning")    print(w)}, finally = {    message("Quitting")    message("Bye Bye: Did you know that Earth is revolving around the sun :)?")})
     56: assess_thrombocytopenia(input_files_path = pat_data, plt_range = c(50,     75), duration_plt = 3)
     An irrecoverable exception occurred. R is aborting now ...
     Segmentation fault (core dumped)
     ```

# amapGeocode (1.0.0)

* GitHub: <https://github.com/womeimingzi11/amapGeocode>
* Email: <mailto:chenhan28@gmail.com>
* GitHub mirror: <https://github.com/cran/amapGeocode>

Run `revdepcheck::revdep_details(, "amapGeocode")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘spelling.R’
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(amapGeocode)
       > 
       > test_check("amapGeocode")
       Saving _problems/test_getLocation-28.R
       Saving _problems/test_getLocation-64.R
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 144 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test_getLocation.R:28:3'): getLocation returns detail list-columns when requested ──
       Expected `res$pois[[1]]` to inherit from "tbl_df".
       Actual class: "data.frame".
       ── Failure ('test_getLocation.R:64:3'): extractLocation parses detail payload ──
       Expected `parsed$pois[[1]]` to inherit from "tbl_df".
       Actual class: "data.frame".
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 144 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# aNCA (0.1.0)

* GitHub: <https://github.com/pharmaverse/aNCA>
* Email: <mailto:anca.pharmaverse@gmail.com>
* GitHub mirror: <https://github.com/cran/aNCA>

Run `revdepcheck::revdep_details(, "aNCA")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        [9] NA     - "Result or Finding in Original Units" [9]            
       [10] NA     - "Original Units"                      [10]           
        ... ...      ...                                   and 11 more ...
       
       ── Failure ('test-export_cdisc.R:89:5'): export_cdisc / exports a ADPP dataset with CDISC labels ──
       Expected `unname(formatters::var_labels(adpp))` to equal `translate_terms(names(adpp), "Variable", "Label", metadata_nca_variables)`.
       Differences:
            actual | expected                                             
        [1] NA     - "Domain Abbreviation"                 [1]            
        [2] NA     - "Unique Subject Identifier"           [2]            
        [3] NA     - "Subject Identifier for the Study"    [3]            
        [4] NA     - "Sequence Number"                     [4]            
        [5] NA     - "Group ID"                            [5]            
        [6] NA     - "Parameter Short Name"                [6]            
        [7] NA     - "Parameter Name"                      [7]            
        [8] NA     - "Parameter Category"                  [8]            
        [9] NA     - "Parameter Subcategory"               [9]            
       [10] NA     - "Result or Finding in Original Units" [10]           
        ... ...      ...                                   and 15 more ...
       
       
       [ FAIL 2 | WARN 0 | SKIP 19 | PASS 744 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# anomalize (0.3.0)

* GitHub: <https://github.com/business-science/anomalize>
* Email: <mailto:mdancho@business-science.io>
* GitHub mirror: <https://github.com/cran/anomalize>

Run `revdepcheck::revdep_details(, "anomalize")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > ### ** Examples
     > 
     > 
     > library(dplyr)
     
     Attaching package: ‘dplyr’
     
     The following objects are masked from ‘package:stats’:
     
         filter, lag
     
     The following objects are masked from ‘package:base’:
     
         intersect, setdiff, setequal, union
     
     > 
     > data(tidyverse_cran_downloads)
     > 
     > # Basic Usage
     > tidyverse_cran_downloads %>%
     +     time_apply(count, period = "1 week", .fun = mean, na.rm = TRUE)
     Error in UseMethod("reconstruct", old) : 
       no applicable method for 'reconstruct' applied to an object of class "data.frame"
     Calls: %>% ... tbl_vars_dispatch -> <Anonymous> -> unnest.tbl_df -> reconstruct
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       Error in `UseMethod("reconstruct", old)`: no applicable method for 'reconstruct' applied to an object of class "data.frame"
       Backtrace:
            ▆
         1. ├─tidyverse_cran_downloads %>% time_decompose(count, merge = T) at test-utils.R:4:5
         2. ├─anomalize::time_decompose(., count, merge = T)
         3. ├─anomalize:::time_decompose.grouped_tbl_time(., count, merge = T)
         4. │ └─data %>% ...
         5. ├─anomalize:::grouped_mapper(...)
         6. │ └─... %>% dplyr::group_by_at(.vars = group_names)
         7. ├─dplyr::group_by_at(., .vars = group_names)
         8. │ └─dplyr:::manip_at(...)
         9. │   └─dplyr:::tbl_at_syms(...)
        10. │     └─dplyr:::tbl_at_vars(...)
        11. │       └─dplyr::tbl_vars(tbl)
        12. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
        13. │         │ └─base::structure(...)
        14. │         └─dplyr:::tbl_vars_dispatch(x)
        15. ├─tidyr::unnest(., cols = nested.col)
        16. └─tibbletime:::unnest.tbl_df(., cols = nested.col)
        17.   └─tibbletime::reconstruct(out, nested_time)
       
       [ FAIL 15 | WARN 3 | SKIP 1 | PASS 33 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       9. ├─dplyr::group_by_at(., .vars = group_names)
      10. │ └─dplyr:::manip_at(...)
      11. │   └─dplyr:::tbl_at_syms(...)
      12. │     └─dplyr:::tbl_at_vars(...)
      13. │       └─dplyr::tbl_vars(tbl)
      14. │         ├─dplyr:::new_sel_vars(tbl_vars_dispatch(x), group_vars(x))
      15. │         │ └─base::structure(...)
      16. │         └─dplyr:::tbl_vars_dispatch(x)
      17. ├─tidyr::unnest(., cols = nested.col)
      18. └─tibbletime:::unnest.tbl_df(., cols = nested.col)
      19.   └─tibbletime::reconstruct(out, nested_time)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'anomalize_quick_start_guide.Rmd' failed with diagnostics:
     no applicable method for 'reconstruct' applied to an object of class "data.frame"
     --- failed re-building ‘anomalize_quick_start_guide.Rmd’
     
     --- re-building ‘forecasting_with_cleaned_anomalies.Rmd’ using rmarkdown
     --- finished re-building ‘forecasting_with_cleaned_anomalies.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘anomalize_quick_start_guide.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# APCI (1.0.8)

* Email: <mailto:jpx5053@psu.edu>
* GitHub mirror: <https://github.com/cran/APCI>

Run `revdepcheck::revdep_details(, "APCI")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       y ~ age * period
       <environment: 0x588fd13be918>
       Beginning Cgee S-function, @(#) geeformula.q 4.13 98/01/27
       running glm to get initial regression estimate
        (Intercept)         acc1         acc2         acc3         acc4         acc5 
        40.80422232 -19.14274724 -17.52574633 -14.92213267 -11.32256273  -6.74210019 
               acc6         acc7         acc8         acc9         pcc1         pcc2 
        -1.31231695   5.18605255  12.90197410  21.65894195  -7.28429751  -5.72400464 
               pcc3         pcc4         pcc5    acc1:pcc1    acc2:pcc1    acc3:pcc1 
        -3.04025872   0.52475528   5.00133917   0.14981932  -0.18984710  -0.04265919 
          acc4:pcc1    acc5:pcc1    acc6:pcc1    acc7:pcc1    acc8:pcc1    acc9:pcc1 
         0.04781297   0.01277723   0.02113837  -0.29109089   0.27077723   0.02378875 
          acc1:pcc2    acc2:pcc2    acc3:pcc2    acc4:pcc2    acc5:pcc2    acc6:pcc2 
         0.34158469  -0.20606290  -0.02278658  -0.23294772   0.07678238   0.41968258 
          acc7:pcc2    acc8:pcc2    acc9:pcc2    acc1:pcc3    acc2:pcc3    acc3:pcc3 
         0.16421919  -0.36782226   0.25156903   0.02021847  -0.02386242  -0.31687745 
          acc4:pcc3    acc5:pcc3    acc6:pcc3    acc7:pcc3    acc8:pcc3    acc9:pcc3 
         0.02745830   0.14868827  -0.34543302   0.20359140  -0.03111354   0.16808948 
          acc1:pcc4    acc2:pcc4    acc3:pcc4    acc4:pcc4    acc5:pcc4    acc6:pcc4 
        -0.40373828  -0.01016736   0.27001841   0.32768797   0.24335903  -0.13872907 
          acc7:pcc4    acc8:pcc4    acc9:pcc4    acc1:pcc5    acc2:pcc5    acc3:pcc5 
        -0.08586020  -0.35514692   0.05337311   0.03544346   0.32550817  -0.10063054 
          acc4:pcc5    acc5:pcc5    acc6:pcc5    acc7:pcc5    acc8:pcc5    acc9:pcc5 
        -0.15980560  -0.59797771  -0.35088499   0.32054636   0.69367623  -0.24651131 
       Killed
     ```

# arrow (25.0.1)

* GitHub: <https://github.com/apache/arrow>
* Email: <mailto:jkeane@gmail.com>
* GitHub mirror: <https://github.com/cran/arrow>

Run `revdepcheck::revdep_details(, "arrow")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Differences:
       actual vs expected
                        total
         actual[1, ]        1
         actual[2, ]        2
         actual[3, ]        3
       - actual[4, ]        0
       + expected[4, ]     NA
         actual[5, ]        5
         actual[6, ]        6
         actual[7, ]        7
       
         `actual$total[1:7]`: 1.0 2.0 3.0 0.0 5.0 6.0 7.0
       `expected$total[1:7]`: 1.0 2.0 3.0  NA 5.0 6.0 7.0
       
       Backtrace:
           ▆
        1. └─arrow:::compare_dplyr_binding(...) at test-dplyr-summarize.R:1324:3
        2.   └─arrow:::expect_equal(via_table, expected, ...) at ./helper-expectation.R:97:3
        3.     └─testthat::expect_equal(...) at ./helper-expectation.R:38:5
       
       [ FAIL 6 | WARN 2 | SKIP 85 | PASS 6516 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# autocogs (0.1.5)

* GitHub: <https://github.com/schloerke/autocogs>
* Email: <mailto:rhafen@gmail.com>
* GitHub mirror: <https://github.com/cran/autocogs>

Run `revdepcheck::revdep_details(, "autocogs")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > # Where should you do additional test configuration?
       > # Learn more about the roles of various files in:
       > # * https://r-pkgs.org/testing-design.html#sec-tests-files-overview
       > # * https://testthat.r-lib.org/articles/special-files.html
       > 
       > library(testthat)
       > library(autocogs)
       > 
       > test_check("autocogs")
       Saving _problems/test-layers-12.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 252 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-layers.R:10:5'): ggplot2 layers ──────────────────────────────
       Expected `{ ... }` to run silently.
       Actual noise: messages.
       Backtrace:
           ▆
        1. └─autocogs (local) check_plot_count(TRUE, 2) at test-layers.R:16:3
        2.   └─testthat::expect_silent(...) at test-layers.R:10:5
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 252 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# baguette (1.1.0)

* GitHub: <https://github.com/tidymodels/baguette>
* Email: <mailto:max@posit.co>
* GitHub mirror: <https://github.com/cran/baguette>

Run `revdepcheck::revdep_details(, "baguette")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmp0VNHzA/working_dir/RtmpRbddNt/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# baizer (0.8.0)

* GitHub: <https://github.com/william-swl/baizer>
* Email: <mailto:william_swl@163.com>
* GitHub mirror: <https://github.com/cran/baizer>

Run `revdepcheck::revdep_details(, "baizer")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > 
     > ### ** Examples
     > 
     > cross_count(mini_diamond, cut, clarity)
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpOAyeW2/working_dir/RtmpATB3m1/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─baizer::cross_count(mini_diamond, cut, clarity)
      2. │ └─res %>% c2r(quo_name(row))
      3. ├─baizer::c2r(., quo_name(row))
      4. │ └─df %>% tibble::column_to_rownames(col)
      5. └─tibble::column_to_rownames(., col)
      6.   └─tibble:::abort_already_has_rownames()
      7.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      8.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        2. │ └─res %>% c2r(quo_name(row))
        3. ├─baizer::c2r(., quo_name(row))
        4. │ └─df %>% tibble::column_to_rownames(col)
        5. └─tibble::column_to_rownames(., col)
        6.   └─tibble:::abort_already_has_rownames()
        7.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        8.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Error ('test-dataframe.R:215:3'): cross_count, method='colr' ────────────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., col)`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─baizer::cross_count(mini_diamond, cut, clarity, method = "colr")
        2. │ └─res %>% c2r(quo_name(row))
        3. ├─baizer::c2r(., quo_name(row))
        4. │ └─df %>% tibble::column_to_rownames(col)
        5. └─tibble::column_to_rownames(., col)
        6.   └─tibble:::abort_already_has_rownames()
        7.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        8.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 2 | WARN 0 | SKIP 66 | PASS 220 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# banter (0.9.8)

* GitHub: <https://github.com/SWFSC/banter>
* Email: <mailto:eric.ivan.archer@gmail.com>
* GitHub mirror: <https://github.com/cran/banter>

Run `revdepcheck::revdep_details(, "banter")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Saving _problems/test-accessors-8.R
       [ FAIL 1 | WARN 2 | SKIP 0 | PASS 2 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-accessors.R:4:1'): (code run outside of `test_that()`) ─────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(dplyr::mutate(dplyr::mutate(dplyr::filter(df, .data$species %in% names(sampsize)), species = factor(.data$species)), id = paste0(.data$event.id, ".", .data$call.id)), "id")`: `.data` must be a data frame without row names.
       Backtrace:
            ▆
         1. └─banter::addBanterDetector(...) at test-accessors.R:4:1
         2.   └─base::sapply(...)
         3.     └─base::lapply(X = X, FUN = FUN, ...)
         4.       └─banter (local) FUN(X[[i]], ...)
         5.         └─banter:::.runDetectorModel(...)
         6.           ├─base::droplevels(...)
         7.           ├─base::as.data.frame(...)
         8.           └─tibble::column_to_rownames(...)
         9.             └─tibble:::abort_already_has_rownames()
        10.               └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        11.                 └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 1 | WARN 2 | SKIP 0 | PASS 2 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking examples ... ERROR
     ```
     ...
     +   data = train.data$detectors$bp, 
     +   name = "bp",
     +   ntree = 50, sampsize = 1, num.cores = 1
     + )
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpO85wEA/working_dir/Rtmp3HBd1x/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. └─banter::addBanterDetector(...)
      2.   └─banter:::.runDetectorModel(...)
      3.     ├─base::droplevels(...)
      4.     ├─base::as.data.frame(...)
      5.     └─tibble::column_to_rownames(...)
      6.       └─tibble:::abort_already_has_rownames()
      7.         └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      8.           └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

# BasicStatsPlots (0.1.0)

* Email: <mailto:carced2009@live.ca>
* GitHub mirror: <https://github.com/cran/BasicStatsPlots>

Run `revdepcheck::revdep_details(, "BasicStatsPlots")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
          ▆
       1. ├─base (local) `<fn>`(x)
       2. ├─BasicStatsPlots:::print.vanova_result(x)
       3. │ ├─base::print(x$descriptive_table)
       4. │ └─gt:::print.gt_tbl(x$descriptive_table)
       5. │   ├─htmltools::as.tags(x, ...)
       6. │   └─gt:::as.tags.gt_tbl(x, ...)
       7. │     ├─htmltools::HTML(render_as_html(data = x))
       8. │     └─gt:::render_as_html(data = x)
       9. │       └─gt:::build_data(data = data, context = "html")
      10. │         └─gt:::resolve_footnotes_styles(data = data, tbl_type = "styles")
      11. │           ├─dplyr::summarize(...)
      12. │           └─dplyr:::summarise.data.frame(...)
      13. │             └─dplyr::summarise(...)
      14. │               └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
      15. │                 ├─base::withCallingHandlers(...)
      16. │                 └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      17. │                   └─base::lapply(.x, .f, ...)
      18. │                     └─dplyr (local) FUN(X[[i]], ...)
      19. │                       └─mask$eval_all_summarise(quo)
      20. │                         └─dplyr (local) eval()
      21. └─gt:::as_style(styles)
      22.   └─cli::cli_abort(...)
      23.     └─rlang::abort(...)
     Execution halted
     ```

# BayesERtools (0.2.7)

* Email: <mailto:yoshida.kenta.6@gmail.com>
* GitHub mirror: <https://github.com/cran/BayesERtools>

Run `revdepcheck::revdep_details(, "BayesERtools")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      12. │           └─dplyr::summarise(...)
      13. │             └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
      14. │               ├─base::withCallingHandlers(...)
      15. │               └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      16. │                 └─base::lapply(.x, .f, ...)
      17. │                   └─dplyr (local) FUN(X[[i]], ...)
      18. │                     └─mask$eval_all_summarise(quo)
      19. │                       └─dplyr (local) eval()
      20. └─gt:::as_style(styles)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'overview_of_the_package.Rmd' failed with diagnostics:
     ℹ In argument: `styles = list(as_style(styles))`.
     ℹ In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname =
       "feature_name"`, `locnum = 4`, `rownum = -1`, `colnum = 1`.
     Caused by error in `as_style()`:
     ! All provided styles should be generated by stylizing helper functions.
     • Style with index `1` is invalid.
     --- failed re-building ‘overview_of_the_package.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘overview_of_the_package.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# bayesian (1.0.1)

* GitHub: <https://github.com/hsbadr/bayesian>
* Email: <mailto:badr@jhu.edu>
* GitHub mirror: <https://github.com/cran/bayesian>

Run `revdepcheck::revdep_details(, "bayesian")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpIouz29/working_dir/RtmpWuf1P0/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

## In both

*   checking S3 generic/method consistency ... NOTE
     ```
     Mismatches for apparent methods not registered:
     check_args:
       function(object, call)
     check_args.bayesian:
       function(object)
     See section ‘Registering S3 methods’ in the ‘Writing R Extensions’
     manual.
     ```

# bayesmove (0.2.4)

* GitHub: <https://github.com/joshcullen/bayesmove>
* Email: <mailto:joshcullen10@gmail.com>
* GitHub mirror: <https://github.com/cran/bayesmove>

Run `revdepcheck::revdep_details(, "bayesmove")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-assign_behavior.R:35:3'): behavior proportions are properly merged with original dataset ──
       <vctrs_error_ptype2/vctrs_error_incompatible_type/vctrs_error_incompatible/vctrs_error/rlang_error/error/condition>
       Error in `dplyr::bind_rows(.)`: Can't combine `..1$date` <integer> and `..2$date` <datetime<UTC>>.
       Backtrace:
            ▆
         1. ├─bayesmove::assign_behavior(...) at test-assign_behavior.R:35:3
         2. │ └─... %>% dplyr::bind_rows()
         3. ├─dplyr::bind_rows(.)
         4. │ └─vctrs::vec_rbind(!!!dots, .names_to = .id, .error_call = current_env())
         5. └─vctrs (local) `<fn>`() at vctrs/R/bind.R:194:3
         6.   └─vctrs::vec_default_ptype2(...)
         7.     ├─base::withRestarts(...) at vctrs/R/type2.R:178:3
         8.     │ └─base (local) withOneRestart(expr, restarts[[1L]])
         9.     │   └─base (local) doWithOneRestart(return(expr), restart)
        10.     └─vctrs::stop_incompatible_type(...) at vctrs/R/type2.R:178:3
        11.       └─vctrs:::stop_incompatible(...) at vctrs/R/conditions.R:146:3
        12.         └─vctrs:::stop_vctrs(...) at vctrs/R/conditions.R:95:3
        13.           └─rlang::abort(message, class = c(class, "vctrs_error"), ..., call = call) at vctrs/R/conditions.R:65:3
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 86 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# bdc (1.1.6)

* GitHub: <https://github.com/brunobrr/bdc>
* Email: <mailto:ribeiro.brr@gmail.com>
* GitHub mirror: <https://github.com/cran/bdc>

Run `revdepcheck::revdep_details(, "bdc")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Skipped tests (13) ══════════════════════════════════════════════════════════
       • On CRAN (13): 'test-bdc_clean_names.R:2:1',
         'test-bdc_coordinates_country_inconsistent.R:2:1',
         'test-bdc_coordinates_transposed.R:2:1',
         'test-bdc_correct_coordinates.R:2:1',
         'test-bdc_country_from_coordinates.R:2:1', 'test-bdc_create_dir.R:2:1',
         'test-bdc_create_figures.R:2:1', 'test-bdc_filter_name.R:2:1',
         'test-bdc_get_world_map.R:2:1', 'test-bdc_query_names_taxadb.R:2:1',
         'test-bdc_standardize_country.R:2:1',
         'test-bdc_standardize_datasets.R:180:1',
         'test-bdc_suggest_names_taxadb.R:2:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-bdc_summary_col.R:10:3'): bdc_summary_col can summarise the tested columns ──
       Expected `resultant$.summary` to equal `c(TRUE, FALSE, FALSE, FALSE, FALSE)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3', '4', '5')
       `names(expected)` is absent
       
       
       [ FAIL 1 | WARN 1 | SKIP 13 | PASS 59 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# beaver (1.0.0)

* GitHub: <https://github.com/rich-payne/beaver>
* Email: <mailto:hollins.showalter@gmail.com>
* GitHub mirror: <https://github.com/cran/beaver>

Run `revdepcheck::revdep_details(, "beaver")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-plot.R:622:3', 'test-plot.R:736:3', 'test-posterior.R:219:3',
         'test-posterior.R:430:3', 'test-posterior.R:641:3', 'test-posterior.R:812:3',
         'test-posterior.R:1345:3', 'test-posterior.R:2305:3', 'test-pr_eoi.R:4:3',
         'test-pr_eoi.R:465:3', 'test-pr_eoi.R:532:3', 'test-pr_eoi.R:755:3',
         'test-pr_eoi.R:1262:3', 'test-pr_eoi.R:1341:3', 'test-pr_eoi.R:1693:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-data.R:45:3'): data_negbin_emax produces an S3 data.frame object with correct properties ──
       Expected `data %>% dplyr::select(colnames(x))` to be identical to `x %>% tibble::as_tibble()`.
       Differences:
       `attr(actual$(Intercept), 'assign')` is absent
       `attr(expected$(Intercept), 'assign')` is an integer vector (0, 1)
       
       `attr(actual$log_age, 'assign')` is absent
       `attr(expected$log_age, 'assign')` is an integer vector (0, 1)
       
       Backtrace:
           ▆
        1. └─beaver:::data_negbin_emax_checks(...) at test-data.R:45:3
        2.   └─testthat::expect_identical(...) at ./helper-data.R:71:5
       
       [ FAIL 1 | WARN 0 | SKIP 18 | PASS 1630 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# bidux (0.4.0)

* GitHub: <https://github.com/jrwinget/bidux>
* Email: <mailto:contact@jrwinget.com>
* GitHub mirror: <https://github.com/cran/bidux>

Run `revdepcheck::revdep_details(, "bidux")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ── Error ('test-otel-compatibility.R:50:3'): bid_ingest_telemetry works with otel sqlite ──
       Error in `seq_len(length(timestamps) - min_changes + 1)`: argument must be coercible to non-negative integer
       Backtrace:
           ▆
        1. └─bidux::bid_ingest_telemetry(db_path) at test-otel-compatibility.R:50:3
        2.   └─bidux:::find_confusion_patterns(...)
       ── Error ('test-otel-compatibility.R:313:3'): otel data with dbi connection works end-to-end ──
       Error in `seq_len(length(timestamps) - min_changes + 1)`: argument must be coercible to non-negative integer
       Backtrace:
           ▆
        1. └─bidux::bid_ingest_telemetry(con) at test-otel-compatibility.R:313:3
        2.   └─bidux:::find_confusion_patterns(...)
       ── Failure ('test-otel_sqlite_coverage.R:102:3'): read_otel_sqlite joins span_attributes correctly ──
       Expected `all(is.na(result$session_id))` to be FALSE.
       Differences:
       `actual`:   TRUE 
       `expected`: FALSE
       
       
       [ FAIL 3 | WARN 56 | SKIP 8 | PASS 2692 ]
       Error:
       ! Test failures.
       Warning message:
       call dbDisconnect() when finished working with a connection 
       Execution halted
     ```

# blockr.dplyr (0.1.0)

* GitHub: <https://github.com/BristolMyersSquibb/blockr.dplyr>
* Email: <mailto:christoph@cynkra.com>
* GitHub mirror: <https://github.com/cran/blockr.dplyr>

Run `revdepcheck::revdep_details(, "blockr.dplyr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > test-summarize_expr.R:     filter, lag
       > test-summarize_expr.R: 
       > test-summarize_expr.R: The following objects are masked from 'package:base':
       > test-summarize_expr.R: 
       > test-summarize_expr.R:     intersect, setdiff, setequal, union
       > test-summarize_expr.R: 
       > test-summarize_expr.R: Error in parse(text = text) : <text>:1:35: unexpected symbol
       > test-summarize_expr.R: 1: dplyr::summarize(data, bad = this is
       > test-summarize_expr.R:                            
       > test-summarize_expr.R:            ^
       > test-summarize_expr.R: Error in summarise(.data, ..., .by = { : 
       > test-summarize_expr.R:   i In argument: `bad = undefined_function(mpg)`.
       > test-summarize_expr.R: Caused by error in `undefined_function()`:
       > test-summarize_expr.R: ! could not find function "undefined_function"
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 1166 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-filter_expr.R:25:3'): apply_filter_expr function handles errors ──
       Expected `blockr.dplyr:::apply_filter_expr(...)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 1166 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# bml (0.9.0)

* GitHub: <https://github.com/benrosche/bml>
* Email: <mailto:benrosche@nyu.edu>
* GitHub mirror: <https://github.com/cran/bml>

Run `revdepcheck::revdep_details(, "bml")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Error in `tibble::column_to_rownames(., var = "name")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─bml:::formatJags(...) at test-formatJags.R:439:3
        2. │ └─... %>% tibble::column_to_rownames(var = "name")
        3. └─tibble::column_to_rownames(., var = "name")
        4.   └─tibble:::abort_already_has_rownames()
        5.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        6.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Error ('test-formatJags.R:474:3'): formatJags() handles fixed main-level variables ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., var = "name")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─bml:::formatJags(...) at test-formatJags.R:474:3
        2. │ └─... %>% tibble::column_to_rownames(var = "name")
        3. └─tibble::column_to_rownames(., var = "name")
        4.   └─tibble:::abort_already_has_rownames()
        5.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        6.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 11 | WARN 1 | SKIP 15 | PASS 404 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# bnns (1.0.0)

* GitHub: <https://github.com/swarnendu-stat/bnns>
* Email: <mailto:swarnendu.stat@gmail.com>
* GitHub mirror: <https://github.com/cran/bnns>

Run `revdepcheck::revdep_details(, "bnns")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpCWRaKl/working_dir/RtmpsAwznS/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# boinet (1.6.0)

* Email: <mailto:yamagubed@gmail.com>
* GitHub mirror: <https://github.com/cran/boinet>

Run `revdepcheck::revdep_details(, "boinet")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      18. │                     └─mask$eval_all_summarise(quo)
      19. │                       └─dplyr (local) eval()
      20. └─gt:::as_style(styles)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'gt_integration_vignette.rmd' failed with diagnostics:
     ℹ In argument: `styles = list(as_style(styles))`.
     ℹ In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname = "Dose
       Level"`, `locnum = 4`, `rownum = -1`, `colnum = 1`.
     Caused by error in `as_style()`:
     ! All provided styles should be generated by stylizing helper functions.
     • Style with index `1` is invalid.
     --- failed re-building ‘gt_integration_vignette.rmd’
     
     --- re-building ‘quarto_workflow_vignette.rmd’ using rmarkdown
     --- finished re-building ‘quarto_workflow_vignette.rmd’
     
     --- re-building ‘result_formatting_vignette.rmd’ using rmarkdown
     --- finished re-building ‘result_formatting_vignette.rmd’
     
     SUMMARY: processing the following file failed:
       ‘gt_integration_vignette.rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# BRCore (2.0.7)

* GitHub: <https://github.com/germs-lab/BRCore>
* Email: <mailto:bolaponte@pm.me>
* GitHub mirror: <https://github.com/cran/BRCore>

Run `revdepcheck::revdep_details(, "BRCore")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > ### ** Examples
     > 
     > library(phyloseq)
     > library(BRCore)
     > 
     > # Adding metrics to a "phyloseq" object
     > bcse_metrics <- add_rarefaction_metrics(data = bcse)
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpEbYbFJ/working_dir/RtmpSvNEmL/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error in `column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. └─BRCore::add_rarefaction_metrics(data = bcse)
      2.   └─tibble::column_to_rownames(...)
      3.     └─tibble:::abort_already_has_rownames()
      4.       └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      5.         └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       =>-----------------------------    3% | ETA: 29s
       ==>----------------------------    6% | ETA: 33s
       ===>---------------------------   11% | ETA: 40s
       =====>-------------------------   15% | ETA: 45s
       ======>------------------------   18% | ETA: 50s
       ======>------------------------   21% | ETA:  1m
       =======>-----------------------   24% | ETA:  1m
       ========>----------------------   27% | ETA:  1m
       =========>---------------------   29% | ETA:  1m
       =========>---------------------   31% | ETA:  1m
       ==========>--------------------   33% | ETA:  1m
       ==========>--------------------   35% | ETA:  1m
       ===========>-------------------   36% | ETA:  1m
       ===========>-------------------   38% | ETA:  1m
       ============>------------------   39% | ETA:  1m
       ============>------------------   41% | ETA:  1m
       =============>-----------------   42% | ETA:  1m
       =============>-----------------   44% | ETA:  1m
       =============>-----------------   45% | ETA:  1m
       ==============>----------------   46% | ETA:  1m
       ==============>----------------   47% | ETA:  1m
       ===============>---------------   49% | ETA:  1m
       ===============>---------------   50% | ETA:  1m
       ===============>---------------   51% | ETA:  1m
       Killed
     ```

# bridgr (1.0.0)

* GitHub: <https://github.com/marcburri/bridgr>
* Email: <mailto:marc.burri91@gmail.com>
* GitHub mirror: <https://github.com/cran/bridgr>

Run `revdepcheck::revdep_details(, "bridgr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-mf_model.R:669:5'): bridge preprocessing recovers known coefficients from a deterministic multi-frequency simulation ──
       Error in `month.numeric(times)`: Values are not in 1:12
       Backtrace:
            ▆
         1. └─bridgr:::validate_mf_inputs(...) at test-mf_model.R:669:5
         2.   └─bridgr:::infer_frequency_table(target_tbl)
         3.     ├─dplyr::bind_rows(...)
         4.     │ └─rlang::list2(...)
         5.     ├─dplyr::group_map(...)
         6.     └─dplyr:::group_map.data.frame(...)
         7.       └─dplyr::group_map(.data, .f, ..., .keep = .keep)
         8.         └─dplyr:::map2(chunks, group_keys, .f, ...)
         9.           └─base::mapply(.f, .x, .y, MoreArgs = list(...), SIMPLIFY = FALSE)
        10.             └─bridgr (local) `<rlng_lm_>`(dots[[1L]][[1L]], dots[[2L]][[1L]])
        11.               └─bridgr:::infer_series_frequency(.x$time, .y$id[[1]], call = call)
        12.                 └─bridgr:::detect_month_frequency(times)
        13.                   ├─lubridate::month(times)
        14.                   └─lubridate:::month.numeric(times)
       
       [ FAIL 1 | WARN 6 | SKIP 1 | PASS 504 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# brisk (0.1.1)

* GitHub: <https://github.com/rich-payne/brisk>
* Email: <mailto:paynestatistics@gmail.com>
* GitHub mirror: <https://github.com/cran/brisk>

Run `revdepcheck::revdep_details(, "brisk")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Expected `res` to equal `exp_scores`.
       Differences:
       `names(actual$total)` is a character vector ('1', '2', '3', '4')
       `names(expected$total)` is absent
       
       ── Failure ('test-mcda.R:36:3'): mcda ──────────────────────────────────────────
       Expected `res` to equal `exp_scores`.
       Differences:
       `names(actual$total)` is a character vector ('1', '2', '3', '4')
       `names(expected$total)` is absent
       
       ── Failure ('test-mcda.R:124:3'): stochastic mcda() ────────────────────────────
       Expected `res` to equal `exp_scores`.
       Differences:
       `names(actual$total)` is a character vector ('1', '2', '3', '4')
       `names(expected$total)` is absent
       
       
       [ FAIL 4 | WARN 0 | SKIP 6 | PASS 33 ]
       Deleting unused snapshots: 'plot/plot-ref.png', 'plot/plot-utility-ref.png',
       'plot/plot-utility-stacked-ref.png', 'plot/plot-utility-stacked.png',
       'plot/plot-utility.png', and 'plot/plot.png'
       Error:
       ! Test failures.
       Execution halted
     ```

# broom.helpers (1.23.0)

* GitHub: <https://github.com/larmarange/broom.helpers>
* Email: <mailto:joseph@larmarange.net>
* GitHub mirror: <https://github.com/cran/broom.helpers>

Run `revdepcheck::revdep_details(, "broom.helpers")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-tidy_plus_plus.R:996:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-add_variable_labels.R:156:3'): tidy_add_variable_labels() works with variables having non standard name ──
       Expected `res$var_label` to equal `c(...)`.
       Differences:
           actual                   | expected                          
       [1] "(Intercept)"            | "(Intercept)"                  [1]
       [2] "marker"                 - "Marker Level (ng/mL)"         [2]
       [3] "grade of kids"          - "Grade"                        [3]
       [4] "grade of kids"          - "Grade"                        [4]
       [5] "marker * grade of kids" - "Marker Level (ng/mL) * Grade" [5]
       [6] "marker * grade of kids" - "Marker Level (ng/mL) * Grade" [6]
       
       ── Failure ('test-identify_variables.R:15:3'): model_list_variables() tests ────
       Expected `res$var_class` to equal `c(...)`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('response', 'age', 'grade', 'trt', 'death', ...)
       
       
       [ FAIL 2 | WARN 0 | SKIP 99 | PASS 407 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# broom (1.0.13)

* GitHub: <https://github.com/tidymodels/broom>
* Email: <mailto:emil.hvitfeldt@posit.co>
* GitHub mirror: <https://github.com/cran/broom>

Run `revdepcheck::revdep_details(, "broom")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `names(expected$statistic)` is a character vector ('value')
       
       `names(actual$p.value)` is absent
       `names(expected$p.value)` is a character vector ('value')
       
       `names(actual$df)` is absent
       `names(expected$df)` is a character vector ('numdf')
       
       ── Failure ('test-stats-summary-lm.R:40:3'): glance.summary.lm ─────────────────
       Expected `dplyr::select(gl2, -c("logLik", "AIC", "BIC", "deviance"))` to equal `sgl2`.
       Differences:
       `names(actual$statistic)` is absent
       `names(expected$statistic)` is a character vector ('value')
       
       `names(actual$p.value)` is absent
       `names(expected$p.value)` is a character vector ('value')
       
       `names(actual$df)` is absent
       `names(expected$df)` is a character vector ('numdf')
       
       
       [ FAIL 2 | WARN 0 | SKIP 99 | PASS 1007 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# bsitar (0.4.0)

* GitHub: <https://github.com/Sandhu-SS/bsitar>
* Email: <mailto:satpal.sandhu@bristol.ac.uk>
* GitHub mirror: <https://github.com/cran/bsitar>

Run `revdepcheck::revdep_details(, "bsitar")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     <error/rlang_error>
     Error in `xml_children(x)[[search]]`:
     ! subscript out of bounds
     ---
     Backtrace:
         ▆
      1. ├─... %>% ...
      2. ├─kableExtra::footnote(...)
      3. ├─kableExtra::column_spec(., 4, width = "0.4in")
      4. ├─kableExtra::column_spec(., 3, width = "0.4in")
      5. ├─kableExtra::column_spec(., 2, width = "0.4in")
      6. └─kableExtra::column_spec(., 1, width = "0.4in")
      7.   └─kableExtra:::column_spec_html(...)
      8.     └─xml2::xml_child(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'Bayesian_SITAR_model_fit.Rmd' failed with diagnostics:
     subscript out of bounds
     --- failed re-building ‘Bayesian_SITAR_model_fit.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘Bayesian_SITAR_model_fit.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# btw (1.5.0)

* GitHub: <https://github.com/posit-dev/btw>
* Email: <mailto:garrick@adenbuie.com>
* GitHub mirror: <https://github.com/cran/btw>

Run `revdepcheck::revdep_details(, "btw")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     ! No NEWS entries found for package 'dplyr' v1.2.1.9999.
     Backtrace:
          ▆
       1. ├─base::withAutoprint(...)
       2. │ └─base::source(...)
       3. │   ├─base::withVisible(eval(ei, envir))
       4. │   └─base::eval(ei, envir)
       5. │     └─base::eval(ei, envir)
       6. └─btw::btw("@news dplyr", clipboard = FALSE)
       7.   ├─btw::btw_this(...)
       8.   └─btw:::btw_this.environment(...)
       9.     └─btw:::btw_tool_env_describe_environment_impl(...)
      10.       └─btw:::map(...)
      11.         └─base::lapply(.x, .f, ...)
      12.           └─btw (local) FUN(X[[i]], ...)
      13.             ├─btw::btw_this(item, caller_env = environment)
      14.             └─btw:::btw_this.character(item, caller_env = environment)
      15.               └─btw:::dispatch_at_command(cmd, caller_env)
      16.                 └─btw (local) btw_this_cmd(cmd$args)
      17.                   ├─base::I(...)
      18.                   │ └─base::unique.default(c("AsIs", oldClass(x)))
      19.                   └─btw:::btw_tool_docs_package_news_impl(package_name, search_term = search_term, version = version)
      20.                     └─cli::cli_abort("No NEWS entries found for package '{package_name}' v{version %||% package_version(package_name)}.")
      21.                       └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         3. |   \-rlang::eval_bare(expr, quo_get_env(quo))
         4. +-ellmer::contents_text(btw("@news dplyr"))
         5. | \-S7::S7_dispatch()
         6. \-btw::btw("@news dplyr")
         7.   +-btw::btw_this(...)
         8.   \-btw:::btw_this.environment(...)
         9.     \-btw:::btw_tool_env_describe_environment_impl(...)
        10.       \-btw:::map(...)
        11.         \-base::lapply(.x, .f, ...)
        12.           \-btw (local) FUN(X[[i]], ...)
        13.             +-btw::btw_this(item, caller_env = environment)
        14.             \-btw:::btw_this.character(item, caller_env = environment)
        15.               \-btw:::dispatch_at_command(cmd, caller_env)
        16.                 \-btw (local) btw_this_cmd(cmd$args)
        17.                   +-base::I(...)
        18.                   | \-base::unique.default(c("AsIs", oldClass(x)))
        19.                   \-btw:::btw_tool_docs_package_news_impl(package_name, search_term = search_term, version = version)
        20.                     \-cli::cli_abort("No NEWS entries found for package '{package_name}' v{version %||% package_version(package_name)}.")
        21.                       \-rlang::abort(...)
       
       [ FAIL 3 | WARN 2 | SKIP 152 | PASS 2122 ]
       Error:
       ! Test failures.
       Execution halted
       Ran 8/8 deferred expressions
     ```

# card (0.1.1)

* GitHub: <https://github.com/shah-in-boots/card>
* Email: <mailto:shah.in.boots@gmail.com>
* GitHub mirror: <https://github.com/cran/card>

Run `revdepcheck::revdep_details(, "card")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpLzWhWU/working_dir/RtmpXAzg4D/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

## In both

*   checking DESCRIPTION meta-information ... NOTE
     ```
       Missing dependency on R >= 4.2.0 because package code uses the pipe
       placeholder syntax added in R 4.2.0.
       File(s) using such syntax:
         ‘cosinor-constructor.R’
     ```

# carwatch (1.0.1)

* GitHub: <https://github.com/carwatch-tools/carwatch-r>
* Email: <mailto:robert.richer@fau.de>
* GitHub mirror: <https://github.com/cran/carwatch>

Run `revdepcheck::revdep_details(, "carwatch")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > test_check("carwatch")
       duckdb keeps downloaded extensions and secrets in a temporary directory:
       i /tmp/Rtmpn4Towz/working_dir/RtmpHVgZL4/duckdb
       This is removed when the R session ends.
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Loading required package: shiny
       Saving _problems/test-results-23.R
       [ FAIL 1 | WARN 70 | SKIP 0 | PASS 357 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-results.R:23:3'): canonical results round-trip through the three-header CSV ──
       Expected `as_study_days(restored)$date` to equal `as.POSIXct("2026-02-01", tz = "Europe/Berlin")`.
       Differences:
       `attr(actual, 'tzone')`:   "UTC"          
       `attr(expected, 'tzone')`: "Europe/Berlin"
       
       
       [ FAIL 1 | WARN 70 | SKIP 0 | PASS 357 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# catchmentACS (0.6.0)

* GitHub: <https://github.com/joonho112/catchmentACS>
* Email: <mailto:jlee296@ua.edu>
* GitHub mirror: <https://github.com/cran/catchmentACS>

Run `revdepcheck::revdep_details(, "catchmentACS")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-regression-isochrone-geometry-byte-identity.R:65:3',
         'test-regression-isochrone-geometry-byte-identity.R:97:3'
       • file.exists(.src) is not TRUE (2): 'test-issue002-osrm-demo-budget.R:93:3',
         'test-issue004-track2-print.R:56:3'
       • print.cacs_run_result.Rd not generated (1):
         'test-issue004-track2-print.R:70:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-integration-run.R:1071:3'): T24-10 output = 'list_column' produces the Sec. 12.3.2 8-col schema ──
       Expected `all(vapply(out$acs_estimates, inherits, logical(1L), "tbl_df"))` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       ── Failure ('test-integration-run.R:1072:3'): T24-10 output = 'list_column' produces the Sec. 12.3.2 8-col schema ──
       Expected `all(vapply(out$derived_rates, inherits, logical(1L), "tbl_df"))` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       
       [ FAIL 2 | WARN 0 | SKIP 52 | PASS 3523 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# cbsREPS (0.1.0)

* Email: <mailto:v.gajadhar@cbs.nl>
* GitHub mirror: <https://github.com/cran/cbsREPS>

Run `revdepcheck::revdep_details(, "cbsREPS")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
     Complete output:
       > # This file is part of the standard setup for testthat.
       > # It is recommended that you do not modify it.
       > #
       > # Where should you do additional test configuration?
       > # Learn more about the roles of various files in:
       > # * https://r-pkgs.org/testing-design.html#sec-tests-files-overview
       > # * https://testthat.r-lib.org/articles/special-files.html
       > 
       > library(testthat)
       > library(cbsREPS)
       > 
       > test_check("cbsREPS")
       Saving _problems/test-calculate_price_index-28.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 52 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-calculate_price_index.R:16:3'): Test calculate_price_index ───
       Expected `calculate_price_index(...)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 52 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# CDMConnector (2.8.0)

* GitHub: <https://github.com/darwin-eu/CDMConnector>
* Email: <mailto:g.inberg@erasmusmc.nl>
* GitHub mirror: <https://github.com/cran/CDMConnector>

Run `revdepcheck::revdep_details(, "CDMConnector")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        1. └─CDMConnector::cdmFromCon(con = pool, cdmSchema = "main", writeSchema = "main") at test-pool.R:14:3
        2.   └─rlang::abort("There were no cdm tables found in the cdm_schema!")
       ── Error ('test-writePrefixDropUseCase.R:11:3'): drop table works in opposition to insert table ──
       Error in `cdmFromCon(con = con, cdmSchema = "main", writeSchema = writeSchema, cdmName = "myDuckdbDatabase")`: There were no cdm tables found in the cdm_schema!
       Backtrace:
           ▆
        1. └─CDMConnector::cdmFromCon(con = con, cdmSchema = "main", writeSchema = writeSchema, cdmName = "myDuckdbDatabase") at test-writePrefixDropUseCase.R:11:3
        2.   └─rlang::abort("There were no cdm tables found in the cdm_schema!")
       ── Error ('test-writePrefixDropUseCase.R:52:3'): dropping all tables with write_prefix works as exepected ──
       Error in `cdmFromCon(con = con, cdmSchema = "main", writeSchema = writeSchema, cdmName = "myDuckdbDatabase")`: There were no cdm tables found in the cdm_schema!
       Backtrace:
           ▆
        1. └─CDMConnector::cdmFromCon(con = con, cdmSchema = "main", writeSchema = writeSchema, cdmName = "myDuckdbDatabase") at test-writePrefixDropUseCase.R:52:3
        2.   └─rlang::abort("There were no cdm tables found in the cdm_schema!")
       ── Error ('test-write_prefix.r:7:3'): write_prefix works with cdm_from_con ─────
       Error in `cdmFromCon(con, "main", "scratch", writePrefix = "tmp_")`: There were no cdm tables found in the cdm_schema!
       Backtrace:
           ▆
        1. └─CDMConnector::cdmFromCon(con, "main", "scratch", writePrefix = "tmp_") at test-write_prefix.r:7:3
        2.   └─rlang::abort("There were no cdm tables found in the cdm_schema!")
       
       [ FAIL 53 | WARN 1 | SKIP 45 | PASS 99 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       2. ├─DBI::dbConnect(duckdb::duckdb(), dbdir = eunomiaDir())
       3. │ └─duckdb (local) .local(drv, ...)
       4. │   └─duckdb:::path_normalize(dbdir)
       5. └─CDMConnector::eunomiaDir()
       6.   ├─DBI::dbCreateTable(...)
       7.   └─DBI::dbCreateTable(...)
       8.     ├─DBI::sqlCreateTable(...)
       9.     └─DBI::sqlCreateTable(...)
      10.       ├─DBI::dbQuoteIdentifier(con, names(fields))
      11.       └─duckdb::dbQuoteIdentifier(con, names(fields))
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'a06_using_cdm_attributes.Rmd' failed with diagnostics:
     argument is not a character vector
     --- failed re-building ‘a06_using_cdm_attributes.Rmd’
     
     --- re-building ‘a09_benchmarking.Rmd’ using rmarkdown
     --- finished re-building ‘a09_benchmarking.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘a01_getting-started.Rmd’ ‘a03_dbplyr.Rmd’
       ‘a06_using_cdm_attributes.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# censored (0.3.5)

* GitHub: <https://github.com/tidymodels/censored>
* Email: <mailto:hannah@posit.co>
* GitHub mirror: <https://github.com/cran/censored>

Run `revdepcheck::revdep_details(, "censored")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmptvWoPL/working_dir/Rtmpd5MTTj/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# chevron (0.2.15)

* GitHub: <https://github.com/insightsengineering/chevron>
* Email: <mailto:joe.zhu@roche.com>
* GitHub mirror: <https://github.com/cran/chevron>

Run `revdepcheck::revdep_details(, "chevron")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-mng01.R:75:1', 'test-mng01.R:97:1', 'test-mng01.R:109:1',
         'test-mng01.R:127:1', 'test-mng01.R:148:1', 'test-pdt01.R:3:1',
         'test-pdt01.R:12:1', 'test-pdt01.R:25:1', 'test-pdt02.R:3:1',
         'test-pdt02.R:12:1', 'test-pdt02.R:25:1', 'test-rmpt01.R:3:1',
         'test-rmpt01.R:12:1', 'test-rmpt01.R:24:1', 'test-rmpt03.R:3:1',
         'test-rmpt03.R:15:1', 'test-rmpt03.R:29:1', 'test-rmpt04.R:3:1',
         'test-rmpt04.R:12:1', 'test-rmpt04.R:24:1', 'test-rmpt05.R:3:1',
         'test-rmpt05.R:12:1', 'test-rmpt05.R:24:1', 'test-rmpt06.R:3:1',
         'test-rmpt06.R:11:1', 'test-rmpt06.R:20:1', 'test-rspt01.R:1:1',
         'test-rspt01.R:8:1', 'test-rspt01.R:29:1', 'test-rspt01.R:48:1',
         'test-rspt01.R:69:1', 'test-rspt01.R:92:3', 'test-rspt01.R:121:1',
         'test-ttet01.R:1:1', 'test-ttet01.R:25:1', 'test-ttet01.R:47:1',
         'test-ttet01.R:70:1', 'test-unwrap.R:1:1', 'test-unwrap.R:40:1',
         'test-unwrap.R:69:1', 'test-unwrap.R:104:1', , 'test-vst01.R:3:1',
         'test-vst01.R:16:1', 'test-vst02.R:3:1', 'test-vst02.R:10:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-ael01_nollt.R:4:3'): ael01_nollt works with admh dataset ─────
       Expected `run(...)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 194 | PASS 450 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# chms (7.2)

* GitHub: <https://github.com/statcan/chms>
* Email: <mailto:joel.barnes@statcan.gc.ca>
* GitHub mirror: <https://github.com/cran/chms>

Run `revdepcheck::revdep_details(, "chms")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     +   non_wear_algo = "barreira",
     +   start_date = meta$start_date,
     +   cpu_max = 1
     + )
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpS8rPuh/working_dir/RtmpVwkeoj/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     > 
     > # Run data processing pipeline (load, clean, classify and summarize data)
     > agd_data$run()
     
     ── 🍁chms::agd$run() method ──
     
     ℹ Crunching data for 2 participants across 1 CPU.
     
     Progress ■■■■■■■■■■■■■■■■                  50% | ETA: 43s
     Error in UseMethod("relocate") : 
       no applicable method for 'relocate' applied to an object of class "NULL"
     Calls: <Anonymous> -> <Anonymous>
     Execution halted
     ```

## In both

*   checking dependencies in R code ... NOTE
     ```
     Namespaces in Imports field not imported from:
       ‘R6’ ‘dbplyr’ ‘knitr’ ‘mirai’ ‘parallelly’ ‘readr’ ‘utils’
       All declared Imports should be used.
     ```

# chmsflow (0.1.0)

* GitHub: <https://github.com/Big-Life-Lab/chmsflow>
* Email: <mailto:raislam@ohri.ca>
* GitHub mirror: <https://github.com/cran/chmsflow>

Run `revdepcheck::revdep_details(, "chmsflow")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > library(chmsflow)
       > 
       > test_check("chmsflow")
       Saving _problems/test-blood-pressure-25.R
       Saving _problems/test-blood-pressure-51.R
       [ FAIL 2 | WARN 241 | SKIP 0 | PASS 565 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-blood-pressure.R:25:3'): adjust_sbp returns correct adjusted systolic blood pressure ──
       Expected `haven::is_tagged_na(result[3], "a")` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       ── Failure ('test-blood-pressure.R:51:3'): adjust_dbp returns correct adjusted diastolic blood pressure ──
       Expected `haven::is_tagged_na(result[3], "a")` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       
       [ FAIL 2 | WARN 241 | SKIP 0 | PASS 565 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# CimpleG (1.0.1)

* GitHub: <https://github.com/CostaLab/CimpleG>
* Email: <mailto:tiagomaie@hotmail.com>
* GitHub mirror: <https://github.com/cran/CimpleG>

Run `revdepcheck::revdep_details(, "CimpleG")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test2-CimpleG-elasticnet.R:5:3'): signatures and deconv w/ ElasticNet ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., "true_class")`: `.data` must be a data frame without row names.
       Backtrace:
            ▆
         1. ├─base::suppressWarnings(...) at test2-CimpleG-elasticnet.R:5:3
         2. │ └─base::withCallingHandlers(...)
         3. ├─CimpleG::CimpleG(...)
         4. ├─CimpleG:::CimpleG.matrix(...)
         5. │ └─CimpleG:::CimpleG_main(...)
         6. │   └─CimpleG::make_deconv_ref_matrix(...)
         7. │     └─... %>% t()
         8. ├─base::t(.)
         9. ├─base::as.matrix(.)
        10. └─tibble::column_to_rownames(., "true_class")
        11.   └─tibble:::abort_already_has_rownames()
        12.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        13.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 1 | WARN 0 | SKIP 5 | PASS 61 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# CodelistGenerator (4.1.0)

* GitHub: <https://github.com/darwin-eu/CodelistGenerator>
* Email: <mailto:edward.burn@ndorms.ox.ac.uk>
* GitHub mirror: <https://github.com/cran/CodelistGenerator>

Run `revdepcheck::revdep_details(, "CodelistGenerator")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     ---
     Backtrace:
          ▆
       1. ├─DBI::dbConnect(duckdb(), eunomiaDir("synpuf-1k", "5.3"))
       2. ├─duckdb::dbConnect(duckdb(), eunomiaDir("synpuf-1k", "5.3"))
       3. │ └─duckdb (local) .local(drv, ...)
       4. │   └─duckdb:::path_normalize(dbdir)
       5. └─CDMConnector::eunomiaDir("synpuf-1k", "5.3")
       6.   ├─DBI::dbCreateTable(...)
       7.   └─DBI::dbCreateTable(...)
       8.     ├─DBI::sqlCreateTable(...)
       9.     └─DBI::sqlCreateTable(...)
      10.       ├─DBI::dbQuoteIdentifier(con, names(fields))
      11.       └─duckdb::dbQuoteIdentifier(con, names(fields))
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'a10_CodelistGeneratorBenchmark.Rmd' failed with diagnostics:
     argument is not a character vector
     --- failed re-building ‘a10_CodelistGeneratorBenchmark.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘a10_CodelistGeneratorBenchmark.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# coefplot (1.2.9)

* Email: <mailto:packages@jaredlander.com>
* GitHub mirror: <https://github.com/cran/coefplot>

Run `revdepcheck::revdep_details(, "coefplot")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     + }
     Warning in check.deprecation(deprecated_train_params, match.call(), ...) :
       Passed invalid function arguments: booster, eval_metric. These should be passed as a list to argument 'params'. Conversion from argument to 'params' entry will be done automatically, but this behavior will become an error in a future version.
     Warning in check.custom.obj(params, objective) :
       Argument 'objective' is only for custom objectives. For built-in objectives, pass the objective under 'params'. This warning will become an error in a future version.
     Error in `mutate()`:
     ! This operation cannot be carried out by DuckDB, and the input is a
       stingy duckplyr frame.
     ℹ Use `compute(prudence = "lavish")` to materialize to temporary storage and
       continue with duckplyr.
     ℹ See `vignette("prudence")` for other options.
     Caused by error in `as.character()`:
     ! cannot coerce type 'builtin' to vector of type 'character'
     Backtrace:
         ▆
      1. ├─coefplot::extract.coef(xg1)
      2. ├─coefplot:::extract.coef.xgb.Booster(xg1)
      3. │ └─... %>% ...
      4. └─dplyr::mutate_at(., .vars = "Coefficient", .funs = as.character)
      5.   ├─dplyr::mutate(.tbl, !!!funs)
      6.   └─dplyr:::mutate.data.frame(.tbl, !!!funs)
      7.     └─dplyr:::check_prudence(.data, duckplyr_error)
      8.       └─cli::cli_abort(...)
      9.         └─rlang::abort(...)
     Execution halted
     ```

# cogmapr (0.9.5)

* Email: <mailto:FrdVnW@proton.me>
* GitHub mirror: <https://github.com/cran/cogmapr>

Run `revdepcheck::revdep_details(, "cogmapr")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
          ▆
       1. ├─cogmapr::GraphIndicatorsTable(df.graph.indic)
       2. │ └─... %>% dplyr::select(indicator, value)
       3. ├─dplyr::select(., indicator, value)
       4. ├─dplyr::rename(., value = V1)
       5. ├─dplyr:::rename.data.frame(., value = V1)
       6. │ └─tidyselect::eval_rename(expr(c(...)), .data)
       7. │   └─tidyselect:::rename_impl(...)
       8. │     └─tidyselect:::eval_select_impl(...)
       9. │       ├─tidyselect:::with_subscript_errors(...)
      10. │       │ └─base::withCallingHandlers(...)
      11. │       └─tidyselect:::vars_select_eval(...)
      12. │         └─tidyselect:::walk_data_tree(expr, data_mask, context_mask)
      13. │           └─tidyselect:::eval_c(expr, data_mask, context_mask)
      14. │             └─tidyselect:::reduce_sels(node, data_mask, context_mask, init = init)
      15. │               └─tidyselect:::walk_data_tree(new, data_mask, context_mask)
      16. │                 └─tidyselect:::as_indices_sel_impl(...)
      17. │                   └─tidyselect:::as_indices_impl(...)
      18. │                     └─tidyselect:::chr_as_locations(x, vars, call = call, arg = arg)
      19. │                       └─vctrs::vec_as_location(...)
      20. └─vctrs (local) `<fn>`() at vctrs/R/subscript-loc.R:84:3
      21.   └─vctrs:::stop_subscript_oob(...)
      22.     └─vctrs:::stop_subscript(...) at vctrs/R/subscript-loc.R:503:3
      23.       └─rlang::abort(...) at vctrs/R/subscript.R:150:3
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         7. ├─dplyr::rename(., value = V1)
         8. ├─dplyr:::rename.data.frame(., value = V1)
         9. │ └─tidyselect::eval_rename(expr(c(...)), .data)
        10. │   └─tidyselect:::rename_impl(...)
        11. │     └─tidyselect:::eval_select_impl(...)
        12. │       ├─tidyselect:::with_subscript_errors(...)
        13. │       │ └─base::withCallingHandlers(...)
        14. │       └─tidyselect:::vars_select_eval(...)
        15. │         └─tidyselect:::walk_data_tree(expr, data_mask, context_mask)
        16. │           └─tidyselect:::eval_c(expr, data_mask, context_mask)
        17. │             └─tidyselect:::reduce_sels(node, data_mask, context_mask, init = init)
        18. │               └─tidyselect:::walk_data_tree(new, data_mask, context_mask)
        19. │                 └─tidyselect:::as_indices_sel_impl(...)
        20. │                   └─tidyselect:::as_indices_impl(...)
        21. │                     └─tidyselect:::chr_as_locations(x, vars, call = call, arg = arg)
        22. │                       └─vctrs::vec_as_location(...)
        23. └─vctrs (local) `<fn>`() at vctrs/R/subscript-loc.R:84:3
        24.   └─vctrs:::stop_subscript_oob(...)
        25.     └─vctrs:::stop_subscript(...) at vctrs/R/subscript-loc.R:503:3
        26.       └─rlang::abort(...) at vctrs/R/subscript.R:150:3
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 13 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# CohortSurvival (1.2.1)

* GitHub: <https://github.com/darwin-eu/CohortSurvival>
* Email: <mailto:kim.lopez@spc.ox.ac.uk>
* GitHub mirror: <https://github.com/cran/CohortSurvival>

Run `revdepcheck::revdep_details(, "CohortSurvival")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-estimateSurvival.R:2629:3', 'test-estimateSurvival.R:2669:3',
         'test-estimateSurvival.R:2701:3', 'test-filterSurvivalChanges.R:2:3',
         'test-mockMGUS2cdm.R:2:3', 'test-outcomeHierarchy.R:2:3',
         'test-outcomeHierarchy.R:158:3', 'test-plotSurvival.R:2:3',
         'test-plotSurvival.R:22:3', 'test-plotSurvival.R:55:3',
         'test-plotSurvival.R:86:3', 'test-plotSurvival.R:129:3',
         'test-plotSurvival.R:137:3', 'test-plotSurvival.R:160:3',
         'test-plotSurvival.R:189:3', 'test-plotSurvival.R:199:3',
         'test-reexports-omopgenerics.R:3:3', 'test-riskTable.R:2:3',
         'test-riskTable.R:65:3', 'test-selectResults.R:2:3',
         'test-selectResults.R:31:3', 'test-tableSurvival.R:2:3',
         'test-tableSurvival.R:94:3', 'test-tableSurvival.R:124:3',
         'test-tableSurvival.R:152:3', 'test-tableSurvival.R:162:3',
         'test-tableSurvivalAttrition.R:2:3',
         'test-validateExtractSurvivalInputs.R:2:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-addCohortSurvival.R:437:3'): checkCensorOnDate validates direct censor date inputs ──
       Expected `CohortSurvival:::checkCensorOnDate(cohort, as.Date("2020-01-12"))` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 77 | PASS 32 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# CohortSymmetry (0.3.0)

* GitHub: <https://github.com/OHDSI/CohortSymmetry>
* Email: <mailto:danielle.newby@ndorms.ox.ac.uk>
* GitHub mirror: <https://github.com/cran/CohortSymmetry>

Run `revdepcheck::revdep_details(, "CohortSymmetry")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       2. ├─DBI::dbConnect(duckdb::duckdb(), dbdir = CDMConnector::eunomiaDir())
       3. │ └─duckdb (local) .local(drv, ...)
       4. │   └─duckdb:::path_normalize(dbdir)
       5. └─CDMConnector::eunomiaDir()
       6.   ├─DBI::dbCreateTable(...)
       7.   └─DBI::dbCreateTable(...)
       8.     ├─DBI::sqlCreateTable(...)
       9.     └─DBI::sqlCreateTable(...)
      10.       ├─DBI::dbQuoteIdentifier(con, names(fields))
      11.       └─duckdb::dbQuoteIdentifier(con, names(fields))
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'a06_Visualise_temporal_symmetry.Rmd' failed with diagnostics:
     argument is not a character vector
     --- failed re-building ‘a06_Visualise_temporal_symmetry.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘a02_Generate_a_sequence_cohort.Rmd’
       ‘a03_Summarise_sequence_ratios.Rmd’
       ‘a04_Visualise_sequence_ratios.Rmd’
       ‘a05_Summarise_temporal_symmetry.Rmd’
       ‘a06_Visualise_temporal_symmetry.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# comperes (0.2.7)

* GitHub: <https://github.com/echasnovski/comperes>
* Email: <mailto:evgeni.chasnovski@gmail.com>
* GitHub mirror: <https://github.com/cran/comperes>

Run `revdepcheck::revdep_details(, "comperes")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Component "score": Component 6: names for current but not for target
       Component "score": Component 7: names for current but not for target
       Component "score": Component 8: names for current but not for target
       Component "score": Component 9: names for current but not for target
       ...
       List-column 'score'
       ── Failure ('test-results-widecr.R:263:3'): as_widecr.default preserves column types ──
       Expected `as_widecr(input_types6, repair = TRUE)` to be identical to `output_ref_types6`.
       Differences:
       Component "score1": Component 1: names for current but not for target
       Component "score1": Component 2: names for current but not for target
       Component "score1": Component 3: names for current but not for target
       Component "score1": Component 4: names for current but not for target
       Component "score1": Component 5: names for current but not for target
       Component "score1": Component 6: names for current but not for target
       Component "score1": Component 7: names for current but not for target
       Component "score1": Component 8: names for current but not for target
       Component "score1": Component 9: names for current but not for target
       ...
       List-column 'score'
       
       [ FAIL 2 | WARN 0 | SKIP 6 | PASS 255 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# convergEU (0.7.3.2)

* Email: <mailto:eleonora.peruffo@eurofound.europa.eu>
* GitHub mirror: <https://github.com/cran/convergEU>

Run `revdepcheck::revdep_details(, "convergEU")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ── Failure ('test_average_clust.R:14:3'): Check the average value ──────────────
       Expected `res[aux]` to equal `aux`.
       Differences:
       names for target but not for current
       ── Failure ('test_average_clust.R:14:3'): Check the average value ──────────────
       Expected `res[aux]` to equal `aux`.
       Differences:
       names for target but not for current
       ── Failure ('test_average_clust.R:14:3'): Check the average value ──────────────
       Expected `res[aux]` to equal `aux`.
       Differences:
       names for target but not for current
       ── Failure ('test_average_clust.R:14:3'): Check the average value ──────────────
       Expected `res[aux]` to equal `aux`.
       Differences:
       names for target but not for current
       ── Failure ('test_average_clust.R:14:3'): Check the average value ──────────────
       Expected `res[aux]` to equal `aux`.
       Differences:
       names for target but not for current
       
       [ FAIL 10 | WARN 0 | SKIP 1 | PASS 1991 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# crosshap (1.4.0)

* GitHub: <https://github.com/jacobimarsh/crosshap>
* Email: <mailto:jake.marsh@live.com.au>
* GitHub mirror: <https://github.com/cran/crosshap>

Run `revdepcheck::revdep_details(, "crosshap")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ── Error ('test-umap.R:4:1'): (code run outside of `test_that()`) ──────────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., "ID")`: `.data` must be a data frame without row names.
       Backtrace:
            ▆
         1. ├─crosshap::prepare_hap_umap(...) at test-umap.R:4:1
         2. │ └─... %>% tibble::rownames_to_column("ID")
         3. ├─tibble::rownames_to_column(., "ID")
         4. ├─dplyr::mutate_all(...)
         5. │ └─dplyr:::check_grouped(.tbl, "mutate", "all", alt = TRUE)
         6. │   └─dplyr::is_grouped_df(tbl)
         7. └─tibble::column_to_rownames(., "ID")
         8.   └─tibble:::abort_already_has_rownames()
         9.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        10.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 4 | WARN 0 | SKIP 0 | PASS 1 ]
       Deleting unused snapshots: 'clustree/haptreedata.svg',
       'clustree/mgtreedata.svg', 'crosshapviz/haplotype-viz-alt4data.svg',
       'crosshapviz/haplotype-viz-isolatewt3-data.svg',
       'crosshapviz/haplotype-viz-nolabs3data.svg', and
       'crosshapviz/haplotype-viz4data.svg'
       Error:
       ! Test failures.
       Execution halted
     ```

# crosstable (0.9.0)

* GitHub: <https://github.com/DanChaltiel/crosstable>
* Email: <mailto:dan.chaltiel@gmail.com>
* GitHub mirror: <https://github.com/cran/crosstable>

Run `revdepcheck::revdep_details(, "crosstable")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-crosstable.R:137:1', 'test-flextable.R:10:1', 'test-flextable.R:18:1',
         'test-flextable.R:31:1', 'test-flextable.R:42:1', 'test-flextable.R:57:1',
         'test-flextable.R:67:1', 'test-flextable.R:80:1', 'test-flextable.R:87:1',
         'test-format.R:4:1', 'test-format.R:65:1', 'test-labels.R:7:1',
         'test-labels.R:40:1', 'test-labels.R:197:3', 'test-labels.R:212:1',
         'test-methods.R:14:1', 'test-by_factor.R:11:1', 'test-by_factor.R:26:1',
         'test-by_factor.R:44:1', 'test-by_factor.R:63:1', 'test-by_factor.R:83:1',
         'test-by_factor.R:119:1', 'test-by_factor.R:149:1', 'test-by_factor.R:201:1',
         'test-by_factor.R:251:1', 'test-by_factor.R:270:1', 'test-by_factor.R:289:1',
         'test-by_factor.R:334:1', 'test-options.R:10:3', 'test-options.R:70:1',
         'test-quick_surv.R:1:1', 'test-pivot.R:16:1', 'test-tests.R:85:3',
         'test-tests.R:104:1', 'test-selection.R:243:1', 'test-selection.R:259:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-methods.R:53:3'): transpose errors ───────────────────────────
       Expected `.` to throw a error with class <crosstable_transpose_labels>.
       Backtrace:
           ▆
        1. ├─... %>% expect_error(class = "crosstable_transpose_labels") at test-methods.R:53:3
        2. └─testthat::expect_error(., class = "crosstable_transpose_labels")
       
       [ FAIL 1 | WARN 0 | SKIP 44 | PASS 350 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# csquares (0.1.0)

* GitHub: <https://github.com/pepijn-devries/csquares>
* Email: <mailto:pepijn.devries@outlook.com>
* GitHub mirror: <https://github.com/cran/csquares>

Run `revdepcheck::revdep_details(, "csquares")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > ### ** Examples
     > 
     > as_csquares(cbind(x = 5.2399066, y = 52.7155812), resolution = 1)
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpha5oJd/working_dir/RtmpcPCjrs/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
              x        y      csquares
     x 5.239907 52.71558 N50 E  0 (1°)
     > orca_csq <- as_csquares(orca, csquares = "csquares")
     Error in `as_csquares()`:
     ! ✖ Could not translate coordinates
     ℹ Check the formating of your c-squares codes
     Backtrace:
         ▆
      1. ├─csquares::as_csquares(orca, csquares = "csquares")
      2. └─csquares:::as_csquares.data.frame(orca, csquares = "csquares")
      3.   ├─csquares::as_csquares(x[[csquares]], ...)
      4.   └─csquares:::as_csquares.character(x[[csquares]], ...)
      5.     └─rlang::abort(c(x = "Could not translate coordinates", i = "Check the formating of your c-squares codes"))
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         8. │ ├─dplyr::mutate(...)
         9. │ └─dplyr:::mutate.data.frame(...)
        10. │   └─dplyr::mutate(...)
        11. │     └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
        12. │       ├─base::withCallingHandlers(...)
        13. │       └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
        14. │         └─mask$eval_all_mutate(quo)
        15. │           └─dplyr (local) eval()
        16. ├─csquares:::.check_csquare_validity(.data$codes, allow_wildcards = TRUE)
        17. │ ├─dplyr::pull(...)
        18. │ ├─dplyr::summarise(...)
        19. │ ├─dplyr::group_by(...)
        20. │ ├─dplyr::mutate(...)
        21. │ ├─tidyr::unnest(...)
        22. │ └─tidyr:::unnest.data.frame(...)
        23. │   └─tidyr::unchop(...)
        24. │     └─vctrs::vec_size(data)
        25. └─base::.handleSimpleError(...) at vctrs/R/size.R:85:3
        26.   └─dplyr (local) h(simpleError(msg, call))
        27.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       
       [ FAIL 17 | WARN 0 | SKIP 6 | PASS 12 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     --- re-building ‘wildcards.Rmd’ using rmarkdown
     
     Quitting from wildcards.Rmd:24-30 [defs]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error in `as_csquares()`:
     ! ✖ Could not translate coordinates
     ℹ Check the formating of your c-squares codes
     ---
     Backtrace:
         ▆
      1. ├─csquares::as_csquares("1000:1|1000:2|1000:3|1000:4")
      2. └─csquares:::as_csquares.character("1000:1|1000:2|1000:3|1000:4")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'wildcards.Rmd' failed with diagnostics:
     ✖ Could not translate coordinates
     ℹ Check the formating of your c-squares codes
     --- failed re-building ‘wildcards.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘csquares-objects.Rmd’ ‘ices.Rmd’ ‘tidy.Rmd’ ‘wildcards.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

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

# cvCovEst (1.2.2)

* GitHub: <https://github.com/PhilBoileau/cvCovEst>
* Email: <mailto:philippe_boileau@berkeley.edu>
* GitHub mirror: <https://github.com/cran/cvCovEst>

Run `revdepcheck::revdep_details(, "cvCovEst")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘spelling.R’
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(cvCovEst)
       cvCovEst v1.2.2: Cross-Validated Covariance Matrix Estimation
       > 
       > test_check("cvCovEst")
       Saving _problems/test-checkArgs-1173.R
       [ FAIL 1 | WARN 1 | SKIP 0 | PASS 178 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-checkArgs.R:1149:3'): checkArgs works well in cvCovEst Function ──
       Expected `cvCovEst(...)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 1 | SKIP 0 | PASS 178 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# cvms (2.0.1)

* GitHub: <https://github.com/ludvigolsen/cvms>
* Email: <mailto:r-pkgs@ludvigolsen.dk>
* GitHub mirror: <https://github.com/cran/cvms>

Run `revdepcheck::revdep_details(, "cvms")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ── Failure ('test_validate_fn.R:4533:5'): testing nested tibbles in multinomial validate_fn() ──
       Expected `class(output_19148)` to equal `c("tbl_df", "tbl", "data.frame")`.
       Differences:
       Lengths differ: 1 is not 3
       ── Failure ('test_validate_fn.R:4667:3'): testing nested tibbles in multinomial validate_fn() ──
       Expected `class(output_19148)` to equal `c("tbl_df", "tbl", "data.frame")`.
       Differences:
       Lengths differ: 1 is not 3
       ── Failure ('test_validate_fn.R:4787:3'): testing nested tibbles in multinomial validate_fn() ──
       Expected `class(output_19148)` to equal `c("tbl_df", "tbl", "data.frame")`.
       Differences:
       Lengths differ: 1 is not 3
       ── Failure ('test_validate_fn.R:5102:3'): testing nested tibbles in gaussian validate_fn() ──
       Expected `class(output_19148)` to equal `c("tbl_df", "tbl", "data.frame")`.
       Differences:
       Lengths differ: 1 is not 3
       ── Failure ('test_validate_fn.R:5152:3'): testing nested tibbles in gaussian validate_fn() ──
       Expected `class(output_19148)` to equal `c("tbl_df", "tbl", "data.frame")`.
       Differences:
       Lengths differ: 1 is not 3
       
       [ FAIL 30 | WARN 0 | SKIP 71 | PASS 3269 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       8. │         └─cvms:::internal_evaluate_predictions(...)
       9. │           └─cvms (local) eval_pred_fn(...)
      10. │             └─cvms:::base_select(...)
      11. │               ├─base::subset(data, select = cols)
      12. │               └─base::subset.data.frame(data, select = cols)
      13. │                 └─base::nrow(x)
      14. │                   ├─base::dim(x)
      15. │                   └─base::dim.data.frame(x)
      16. │                     └─base::.row_names_info(x, 2L)
      17. ├─dplyr::mutate(., Family = model_specifics[["family"]])
      18. ├─tibble::as_tibble(.)
      19. └─dplyr::bind_rows(.)
      20.   └─rlang::list2(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'cross_validating_custom_functions.Rmd' failed with diagnostics:
     GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘cross_validating_custom_functions.Rmd’
     
     --- re-building ‘evaluate_by_id.Rmd’ using rmarkdown
     --- finished re-building ‘evaluate_by_id.Rmd’
     
     --- re-building ‘picking_the_number_of_folds_for_cross-validation.Rmd’ using rmarkdown
     # A tibble: 1 × 1
       larger
     ```

# cytominer (0.2.2)

* GitHub: <https://github.com/cytomining/cytominer>
* Email: <mailto:shsingh@broadinstitute.org>
* GitHub mirror: <https://github.com/cran/cytominer>

Run `revdepcheck::revdep_details(, "cytominer")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         7. │ │   ├─base::tryCatch(...)
         8. │ │   │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
         9. │ │   │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        10. │ │   │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        11. │ │   └─base::withCallingHandlers(...)
        12. │ └─dplyr:::duckdb_rel_from_df(x)
        13. │   └─duckdb$rel_from_df(con, df, experimental = experimental)
        14. │     └─duckdb:::rethrow_rapi_rel_from_df(...)
        15. │       ├─rlang::try_fetch(...)
        16. │       │ ├─base::tryCatch(...)
        17. │       │ │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        18. │       │ │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        19. │       │ │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        20. │       │ └─base::withCallingHandlers(...)
        21. │       └─duckdb:::rapi_rel_from_df(con, df, convert_opts)
        22. └─base::.handleSimpleError(...)
        23.   └─rlang (local) h(simpleError(msg, call))
        24.     └─handlers[[1L]](cnd)
        25.       └─duckdb:::rethrow_error_from_rapi(e, call)
        26.         └─rlang::abort(msg, call = call)
       
       [ FAIL 1 | WARN 19 | SKIP 0 | PASS 46 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# DAISIEprep (1.0.1)

* GitHub: <https://github.com/joshwlambert/DAISIEprep>
* Email: <mailto:joshua.lambert@lshtm.ac.uk>
* GitHub mirror: <https://github.com/cran/DAISIEprep>

Run `revdepcheck::revdep_details(, "DAISIEprep")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Saving _problems/test-plot_performance-19.R
       [ FAIL 1 | WARN 0 | SKIP 19 | PASS 2233 ]
       
       ══ Skipped tests (19) ══════════════════════════════════════════════════════════
       • Run only on CI (3): 'test-sensitivity.R:2:3', 'test-sensitivity.R:40:3',
         'test-sensitivity.R:78:3'
       • Temporary skip while fixing issue on R devel (5): 'test-plot_phylod.R:2:3',
         'test-plot_phylod.R:14:3', 'test-plot_phylod.R:26:3',
         'test-plot_phylod.R:38:3', 'test-plot_phylod.R:50:3'
       • empty test (11): 'test-create_daisie_data.R:169:1',
         'test-create_daisie_data.R:173:1', 'test-create_daisie_data.R:177:1',
         'test-create_daisie_data.R:181:1', 'test-create_daisie_data.R:185:1',
         'test-create_daisie_data.R:189:1', 'test-create_daisie_data.R:231:1',
         'test-create_daisie_data.R:235:1', 'test-create_daisie_data.R:239:1',
         'test-create_daisie_data.R:243:1', 'test-create_daisie_data.R:247:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-plot_performance.R:14:3'): plot_performance runs silent with one parameter setting ──
       Expected `plot_performance(performance_data = performance, group_by = prob_on_island)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 19 | PASS 2233 ]
       Error:
       ! Test failures.
       Execution halted
     ```

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

# datacutr (0.2.4)

* GitHub: <https://github.com/pharmaverse/datacutr>
* Email: <mailto:timothy.barnett@roche.com>
* GitHub mirror: <https://github.com/cran/datacutr>

Run `revdepcheck::revdep_details(, "datacutr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       /usr/bin/pandoc +RTS -K512m -RTS /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/datacut_2026-10-22_170948.html --lua-filter <lib>/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter <lib>/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template <lib>/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/rmarkdown-str2f219bab3dd.html 
       [1] "The ae dataset is empty, no cut will be performed"
       /usr/bin/pandoc +RTS -K512m -RTS /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/datacut_2026-10-22_170949.html --lua-filter <lib>/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter <lib>/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template <lib>/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/rmarkdown-str2f21876bb8d.html 
       [1] "The ae dataset is empty, no cut will be performed"
       /usr/bin/pandoc +RTS -K512m -RTS /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/datacut_2026-10-22_170950.html --lua-filter <lib>/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter <lib>/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template <lib>/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/rmarkdown-str2f241c819a2.html 
       [1] "The ae dataset is empty"
       /usr/bin/pandoc +RTS -K512m -RTS /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/datacut_2026-10-22_170951.html --lua-filter <lib>/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter <lib>/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template <lib>/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/rmarkdown-str2f21ad082b2.html 
       [1] "The dm dataset is empty"
       /usr/bin/pandoc +RTS -K512m -RTS /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/datacut_2026-10-22_170952.html --lua-filter <lib>/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter <lib>/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template <lib>/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/rmarkdown-str2f228b72ee0.html 
       /usr/bin/pandoc +RTS -K512m -RTS /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/datacut_2026-10-22_170954.html --lua-filter <lib>/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter <lib>/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template <lib>/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/rmarkdown-str2f23c146bbc.html 
       /usr/bin/pandoc +RTS -K512m -RTS /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/datacut_2026-10-22_170954.html --lua-filter <lib>/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter <lib>/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template <lib>/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/rmarkdown-str2f24e44d70f.html 
       [1] "At least 1 patient with missing datacut date, all records will be kept."
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 70 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-create_dcut.R:42:3'): One observation in DCUT ────────────────
       Expected `create_dcut(...)` to equal `expected_dcutna`.
       Differences:
       Component "DCUTDTC": Modes: numeric, logical
       Component "DCUTDTC": target is numeric, current is logical
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 70 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# dbparser (2.2.1)

* GitHub: <https://github.com/ropensci/dbparser>
* Email: <mailto:moh_fcis@yahoo.com>
* GitHub mirror: <https://github.com/cran/dbparser>

Run `revdepcheck::revdep_details(, "dbparser")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     <error/tibble_error_already_has_rownames>
     Error in `column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     ---
     Backtrace:
         ▆
      1. ├─... %>% column_to_rownames("type")
      2. └─tibble::column_to_rownames(., "type")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'dbparser.Rmd' failed with diagnostics:
     `.data` must be a data frame without row names.
     --- failed re-building ‘dbparser.Rmd’
     
     --- re-building ‘dbparser_2_2.Rmd’ using rmarkdown
     --- finished re-building ‘dbparser_2_2.Rmd’
     
     --- re-building ‘drugbank_nside.Rmd’ using rmarkdown
     --- finished re-building ‘drugbank_nside.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘dbparser.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# DedooseR (2.0.0.2)

* GitHub: <https://github.com/abiraahmi/DedooseR>
* Email: <mailto:abiraahmi.shankar@nyu.edu>
* GitHub mirror: <https://github.com/cran/DedooseR>

Run `revdepcheck::revdep_details(, "DedooseR")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       Attaching package: 'dplyr'
       
       The following objects are masked from 'package:stats':
       
           filter, lag
       
       The following objects are masked from 'package:base':
       
           intersect, setdiff, setequal, union
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 177 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-clean_data.R:76:3'): rename_vars and relabel_vars correctly rename variables and update labels ──
       Expected `label_value` to equal "source document".
       Differences:
       `actual`:   "source_doc"     
       `expected`: "source document"
       
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 177 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# deliberr (0.1.3)

* GitHub: <https://github.com/gumbelino/deliberr>
* Email: <mailto:gustavo.kreiaumbelino@zda.uzh.ch>
* GitHub mirror: <https://github.com/cran/deliberr>

Run `revdepcheck::revdep_details(, "deliberr")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: get_dri
     > ### Title: Get DRI from a Group of Participants
     > ### Aliases: get_dri
     > 
     > ### ** Examples
     > 
     > 
     > # get pre-deliberation (stage_id == 1) data from BEP case
     > data <- human_data[human_data$stage_id == 1 & human_data$case == "BEP", ]
     > 
     > # calculate IC
     > ic <- get_dri_ic(data)
     Error in `column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─deliberr::get_dri_ic(data)
      2. │ └─df_c %>% column_to_rownames("pnum") %>% t()
      3. ├─base::t(.)
      4. └─tibble::column_to_rownames(., "pnum")
      5.   └─tibble:::abort_already_has_rownames()
      6.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      7.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

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

# DeSciDe (1.0.3)

* GitHub: <https://github.com/camdouglas/DeSciDe>
* Email: <mailto:camerondouglas@ufl.edu>
* GitHub mirror: <https://github.com/cran/DeSciDe>

Run `revdepcheck::revdep_details(, "DeSciDe")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: plot_heatmap
     > ### Title: Plot Heatmap
     > ### Aliases: plot_heatmap
     > 
     > ### ** Examples
     > 
     > # Example data frame
     > data <- data.frame(Gene = c("Gene1", "Gene2"),
     +                    Term1 = c(10, 20),
     +                    Term2 = c(5, 15),
     +                    Total = c(15, 35),
     +                    PubMed_Rank = c(1, 2))
     > plot_heatmap(data, file_directory = tempdir(), export = FALSE)
     Error in `column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─DeSciDe::plot_heatmap(data, file_directory = tempdir(), export = FALSE)
      2. │ └─... %>% column_to_rownames("Gene")
      3. └─tibble::column_to_rownames(., "Gene")
      4.   └─tibble:::abort_already_has_rownames()
      5.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      6.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       ...
     --- re-building ‘DeSciDe-vignette.Rmd’ using rmarkdown
     
     Quitting from DeSciDe-vignette.Rmd:86-88 [unnamed-chunk-7]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/tibble_error_already_has_rownames>
     Error in `column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     ---
     Backtrace:
         ▆
      1. ├─DeSciDe::plot_heatmap(results$pubmed_results)
      2. │ └─... %>% column_to_rownames("Gene")
      3. └─tibble::column_to_rownames(., "Gene")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'DeSciDe-vignette.Rmd' failed with diagnostics:
     `.data` must be a data frame without row names.
     --- failed re-building ‘DeSciDe-vignette.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘DeSciDe-vignette.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# diffdf (1.1.2)

* GitHub: <https://github.com/gowerc/diffdf>
* Email: <mailto:craiggower@gmail.com>
* GitHub mirror: <https://github.com/cran/diffdf>

Run `revdepcheck::revdep_details(, "diffdf")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ══ Skipped tests (12) ══════════════════════════════════════════════════════════
       • On CRAN (12): 'test-class_compare.R:2:1', 'test-identify_column_order.R:3:1',
         'test-identify_column_order.R:102:1', 'test-identify_column_order.R:128:1',
         'test-miscellaneous.R:63:1', 'test-miscellaneous.R:107:1',
         'test-miscellaneous.R:202:1', 'test-miscellaneous.R:207:1',
         'test-miscellaneous.R:257:1', 'test-miscellaneous.R:329:1',
         'test-miscellaneous.R:371:1', 'test-print_output.R:3:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-miscellaneous.R:260:5'): #133 - Nested calls don't throw error with deparse ──
       Expected `{ ... }` not to throw any conditions.
       Actually got a <duckdb_storage_location> with message:
         duckdb keeps downloaded extensions and secrets in a temporary directory:
         i /tmp/RtmpduuqGH/working_dir/RtmpE65OPe/duckdb
         This is removed when the R session ends.
         * Extensions are re-downloaded each session.
         * Secrets are lost.
         i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
         i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
         i See ?duckdb_storage for details and alternatives.
       
       [ FAIL 1 | WARN 0 | SKIP 12 | PASS 595 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# discrim (1.1.0)

* GitHub: <https://github.com/tidymodels/discrim>
* Email: <mailto:emil.hvitfeldt@posit.co>
* GitHub mirror: <https://github.com/cran/discrim>

Run `revdepcheck::revdep_details(, "discrim")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpQEuAA2/working_dir/Rtmp0GWamb/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# dm (1.1.2)

* GitHub: <https://github.com/cynkra/dm>
* Email: <mailto:kirill@cynkra.com>
* GitHub mirror: <https://github.com/cran/dm>

Run `revdepcheck::revdep_details(, "dm")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-duckplyr.R:9:3'): Simple duckplyr test ─────────────────────────
       Error in `groups(tbl)`: This operation cannot be carried out by DuckDB, and the input is a stingy duckplyr frame.
       i Use `compute(prudence = "lavish")` to materialize to temporary storage and continue with duckplyr.
       i See `vignette("prudence")` for other options.
       Backtrace:
            ▆
         1. ├─dplyr::summarize(...)
         2. └─dm:::summarise.dm_zoomed(...)
         3.   ├─rlang::set_names(map_chr(groups(tbl), as_string))
         4.   ├─purrr::map_chr(groups(tbl), as_string)
         5.   │ └─purrr:::map_("character", .x, .f, ..., .progress = .progress)
         6.   │   └─purrr:::vctrs_vec_compat(.x, .purrr_user_env)
         7.   ├─dplyr::groups(tbl)
         8.   └─dplyr:::groups.data.frame(tbl)
         9.     └─dplyr:::check_prudence(x, duckplyr_error)
        10.       └─cli::cli_abort(...)
        11.         └─rlang::abort(...)
       
       [ FAIL 1 | WARN 11 | SKIP 391 | PASS 1664 ]
       Error:
       ! Test failures.
       Warning message:
       call dbDisconnect() when finished working with a connection 
       Execution halted
     ```

# DrugExposureDiagnostics (1.2.1)

* GitHub: <https://github.com/darwin-eu/DrugExposureDiagnostics>
* Email: <mailto:g.inberg@erasmusmc.nl>
* GitHub mirror: <https://github.com/cran/DrugExposureDiagnostics>

Run `revdepcheck::revdep_details(, "DrugExposureDiagnostics")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        37. │                   │ └─base::withCallingHandlers(...)
        38. │                   └─duckdb:::rapi_rel_to_table(rel, schema_name, table_name, temporary)
        39. ├─dplyr::collect(.)
        40. ├─dplyr::mutate(., ingredient = .data$group_level, ingredient_concept_id = .env$ingredientConceptId)
        41. ├─dplyr::select(...)
        42. ├─dplyr::mutate(., pattern_name = gsub(" NA_NA_NA", "", .data$pattern_name))
        43. ├─dplyr::filter(., !grepl("NA NA_NA_NA", .data$pattern_name))
        44. ├─dplyr::mutate(...)
        45. ├─dplyr::mutate(., pattern_name = gsub("[^a-zA-Z ]", "", .data$strata_level))
        46. ├─dplyr::mutate(...)
        47. ├─dplyr::left_join(...)
        48. ├─dplyr::left_join(...)
        49. ├─dplyr::mutate(., pattern_id = as.numeric(gsub("[^0-9]", "", .data$strata_level)))
        50. ├─omopgenerics::suppress(., minCellCount)
        51. ├─dplyr::filter(., .data$group_level != "NA")
        52. └─base::.handleSimpleError(...)
        53.   └─rlang (local) h(simpleError(msg, call))
        54.     └─handlers[[1L]](cnd)
        55.       └─duckdb:::rethrow_error_from_rapi(e, call)
        56.         └─rlang::abort(msg, call = call)
       
       [ FAIL 4 | WARN 71 | SKIP 5 | PASS 370 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# dtlog (0.2.0)

* GitHub: <https://github.com/AkiShiroshita/dtlog>
* Email: <mailto:akihirokun8@gmail.com>
* GitHub mirror: <https://github.com/cran/dtlog>

Run `revdepcheck::revdep_details(, "dtlog")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 1054 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-tidylog-parity.R:103:5'): dtlog and tidylog describe the same operation the same way ──
       Expected log for filter to be identical to `tl$msgs`.
       Differences:
       lines(actual[[1]]) vs lines(expected[[1]])
       - "filter: removed 18 rows (56%), 14 rows remaining"
       + "duckdb keeps downloaded extensions and secrets in a temporary directory:"
       + "i /tmp/Rtmpxnqi90/working_dir/RtmpCh1zeN/duckdb"
       + "This is removed when the R session ends."
       + "* Extensions are re-downloaded each session."
       + "* Secrets are lost."
       + "i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users)."
       + "i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message)."
       + "i See ?duckdb_storage for details and alternatives."
       
       `lines(actual[[2]])` is absent
       `lines(expected[[2]])` is a character vector ('filter: removed 18 rows (56%), 14 rows remaining')
       
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 1054 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# duckplyr (1.2.1)

* GitHub: <https://github.com/tidyverse/duckplyr>
* Email: <mailto:kirill@cynkra.com>
* GitHub mirror: <https://github.com/cran/duckplyr>

Run `revdepcheck::revdep_details(, "duckplyr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       `environment(actual$to_duckdb_exprs)` is <env:namespace:duckplyr>
       `environment(expected$to_duckdb_exprs)` is <env:namespace:dplyr>
       
       `environment(actual$to_duckdb_exprs_meta)` is <env:namespace:duckplyr>
       `environment(expected$to_duckdb_exprs_meta)` is <env:namespace:dplyr>
       
       `environment(actual$unique_table_name)` is <env:namespace:duckplyr>
       `environment(expected$unique_table_name)` is <env:namespace:dplyr>
       
       `environment(actual$vec_ptype_safe)` is <env:namespace:duckplyr>
       `environment(expected$vec_ptype_safe)` is <env:namespace:dplyr>
       
       
       [ FAIL 2 | WARN 0 | SKIP 653 | PASS 2584 ]
       Error:
       ! Test failures.
       
       🛠: 2565
       🔨: 1348
       🦆: 1217
       add_count, anti_join, anti_join.data.frame, arrange, arrange.data.frame, compute, count, count.data.frame, cross_join, distinct, distinct.data.frame, do, eval, filter, filter.data.frame, filter_out, full_join, group_by, group_indices, group_keys, group_map, group_modify, group_nest, group_size, group_split, group_trim, head, inner_join, inner_join.data.frame, intersect, left_join, left_join.data.frame, mutate, mutate.data.frame, n_groups, nest_by, nest_join, pull, reframe, relocate, rename, rename_with, right_join, rows_append, rows_delete, rows_insert, rows_patch, rows_update, rows_upsert, rowwise, select, select.data.frame, semi_join, semi_join.data.frame, setdiff, setequal, slice, slice_head, slice_head.data.frame, slice_sample, slice_tail, summarise, summarise.data.frame, symdiff, transmute, ungroup, union_all
       
       00:01:51.263661
       Execution halted
     ```

# dunlin (0.1.12)

* GitHub: <https://github.com/insightsengineering/dunlin>
* Email: <mailto:joe.zhu@roche.com>
* GitHub mirror: <https://github.com/cran/dunlin>

Run `revdepcheck::revdep_details(, "dunlin")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `expected` is a character vector ('weight')
       
       ── Failure ('test-join_adsub_adsl.R:149:3'): join_adsub_adsl.list works with factor AVALC column. ──
       Expected `attr(res$adsl$w_CAT, "label")` to be identical to "weight".
       Differences:
       `actual` is NULL
       `expected` is a character vector ('weight')
       
       ── Failure ('test-join_adsub_adsl.R:170:3'): join_adsub_adsl.list works with factor AVALC column and drop_lvl = TRUE. ──
       Expected `attr(res$adsl$w, "label")` to be identical to "weight".
       Differences:
       `actual` is NULL
       `expected` is a character vector ('weight')
       
       ── Failure ('test-join_adsub_adsl.R:171:3'): join_adsub_adsl.list works with factor AVALC column and drop_lvl = TRUE. ──
       Expected `attr(res$adsl$w_CAT, "label")` to be identical to "weight".
       Differences:
       `actual` is NULL
       `expected` is a character vector ('weight')
       
       
       [ FAIL 13 | WARN 0 | SKIP 5 | PASS 353 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# easysurv (2.0.3)

* GitHub: <https://github.com/Maple-Health-Group/easysurv>
* Email: <mailto:niall.davison@maplehealthgroup.com>
* GitHub mirror: <https://github.com/cran/easysurv>

Run `revdepcheck::revdep_details(, "easysurv")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmp8oJGY4/working_dir/Rtmpul2jD3/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# echarts4r (0.5.0)

* GitHub: <https://github.com/JohnCoene/echarts4r>
* Email: <mailto:david.munoztord@mailbox.org>
* GitHub mirror: <https://github.com/cran/echarts4r>

Run `revdepcheck::revdep_details(, "echarts4r")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         9. │ │ │   │ └─promises::with_promise_domain(...)
        10. │ │ │   │   └─domain$wrapSync(expr)
        11. │ │ │   │     └─base::force(expr)
        12. │ │ │   ├─shiny:::with_otel_span_context(...)
        13. │ │ │   │ └─base::force(expr)
        14. │ │ │   ├─shiny::captureStackTraces(...)
        15. │ │ │   │ └─promises::with_promise_domain(...)
        16. │ │ │   │   └─domain$wrapSync(expr)
        17. │ │ │   │     └─base::withCallingHandlers(expr, error = doCaptureStack)
        18. │ │ │   └─env$runWith(self, func)
        19. │ │ │     └─shiny (local) contextFunc()
        20. │ │ │       └─shiny::..stacktraceon..(expr)
        21. │ │ ├─shiny::withReactiveDomain(...)
        22. │ │ │ └─promises::with_promise_domain(...)
        23. │ │ │   └─domain$wrapSync(expr)
        24. │ │ │     └─base::force(expr)
        25. │ │ └─withr::with_options(...)
        26. │ │   └─base::force(code)
        27. │ └─rlang::eval_tidy(quosure, mask, rlang::caller_env())
        28. └─testthat::expect_identical(new_values, expected_values) at test-webgl.R:69:5
       
       [ FAIL 11 | WARN 0 | SKIP 19 | PASS 2016 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# EDCimport (0.7.0)

* GitHub: <https://github.com/DanChaltiel/EDCimport>
* Email: <mailto:dan.chaltiel@gmail.com>
* GitHub mirror: <https://github.com/cran/EDCimport>

Run `revdepcheck::revdep_details(, "EDCimport")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ── Failure ('test-helpers.R:118:3'): edc_xxx_join() works ──────────────────────
       Expected `get_label(x$subjid)` to equal `get_label(b$subjid)`.
       Differences:
       `actual` is NULL
       `expected` is a character vector ('Patient No')
       
       ── Failure ('test-lastnews_table.R:63:3'): lastnews_table() with ties ──────────
       Expected `lnt6$subjid` to have the same values as `1:3`.
       Actual: 1, 1, 2, 2, 2, 3, 3, 35, 35
       Expected: 1, 2, 3
       Needs: 35
       
       [ FAIL 2 | WARN 10 | SKIP 13 | PASS 112 ]
       Deleting unused snapshots: 'patient_gridplot/edc-patient-gridplot-args.svg',
       'patient_gridplot/edc-patient-gridplot-default.svg',
       'patient_gridplot/edc-patient-gridplot-gradient.svg',
       'population_plot/pop-plot.svg',
       'swimmerplot/swimmerplot-aes-color-id-subset-chr.svg',
       'swimmerplot/swimmerplot-group-id-subset-id-sort.svg',
       'swimmerplot/swimmerplot-origin-group.svg',
       'swimmerplot/swimmerplot-origin-include-exclude-id-sort.svg', and
       'swimmerplot/swimmerplot.svg'
       Error:
       ! Test failures.
       Execution halted
     ```

# eDNAfuns (0.1.0)

* Email: <mailto:ramongallego@gmail.com>
* GitHub mirror: <https://github.com/cran/eDNAfuns>

Run `revdepcheck::revdep_details(, "eDNAfuns")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘eDNAfuns-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: tidy2phyloseq
     > ### Title: Convert a tidy ASV table to a phyloseq object
     > ### Aliases: tidy2phyloseq phyloseq2tidy
     > 
     > ### ** Examples
     > 
     > data("ASV_table")
     > data("metadata")
     > data("OTU_taxonomy")
     > ps <- tidy2phyloseq(ASV_table = ASV_table,
     +                     OTU_taxonomy = OTU_taxonomy,
     +                     metadata = metadata,
     +                     Taxa = "Hash",
     +                     Reads = "nReads")
     Error in (function (cond)  : 
       error in evaluating the argument 'object' in selecting a method for function 'tax_table': `.data` must be a data frame without row names.
     Calls: tidy2phyloseq ... abort -> signal_abort -> signalCondition -> <Anonymous>
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         5. │   └─tibble:::abort_already_has_rownames()
         6. │     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
         7. │       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
         8. │         └─rlang:::signal_abort(cnd, .file)
         9. │           └─base::signalCondition(cnd)
        10. └─base (local) `<fn>`(`<tbbl____>`)
       ── Error ('test-phyloseq.R:35:3'): phyloseq2tidy reproduces tidy data ──────────
       Error in `(function (cond)  .Internal(C_tryCatchHelper(addr, 1L, cond)))(structure(list(message = "`.data` must be a data frame without row names.", trace = structure(list(call = list(tidy2phyloseq(ASV_table = ASV_table, OTU_taxonomy = OTU_taxonomy, metadata = metadata, Taxa = "Hash", Sample = "sample_name", Reads = "nReads", tree = tree), tax_table(as.matrix(column_to_rownames(semi_join(OTU_taxonomy, ASV_table, by = Taxa), Taxa))), as.matrix(column_to_rownames(semi_join(OTU_taxonomy, ASV_table, by = Taxa), Taxa)), column_to_rownames(semi_join(OTU_taxonomy,      ASV_table, by = Taxa), Taxa), abort_already_has_rownames(), tibble_abort(call = call, "`.data` must be a data frame without row names."), abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)), parent = c(0L, 1L, 1L, 1L, 4L, 5L, 6L), visible = c(TRUE, TRUE, TRUE, TRUE, FALSE, FALSE, FALSE), namespace = c("eDNAfuns", "phyloseq", "base", "tibble", "tibble", "tibble", "rlang"), scope = c("::", "::", "::", "::", ":::", ":::", "::"), error_frame = c(FALSE, FALSE, FALSE, TRUE, FALSE,  FALSE, FALSE)), row.names = c(NA, -7L), version = 2L, class = c("rlang_trace", "rlib_trace", "tbl", "data.frame")), parent = NULL, rlang = list(inherit = TRUE), call = column_to_rownames(semi_join(OTU_taxonomy, ASV_table, by = Taxa), Taxa), use_cli_format = TRUE), class = c("tibble_error_already_has_rownames", "tibble_error", "rlang_error", "error", "condition")))`: error in evaluating the argument 'object' in selecting a method for function 'tax_table': `.data` must be a data frame without row names.
       Backtrace:
            ▆
         1. ├─eDNAfuns::tidy2phyloseq(...) at test-phyloseq.R:35:3
         2. │ ├─phyloseq::tax_table(...)
         3. │ ├─base::as.matrix(...)
         4. │ └─tibble::column_to_rownames(...)
         5. │   └─tibble:::abort_already_has_rownames()
         6. │     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
         7. │       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
         8. │         └─rlang:::signal_abort(cnd, .file)
         9. │           └─base::signalCondition(cnd)
        10. └─base (local) `<fn>`(`<tbbl____>`)
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 72 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# efdm (0.2.3)

* GitHub: <https://github.com/mikkoku/efdm>
* Email: <mailto:mikko.kuronen@luke.fi>
* GitHub mirror: <https://github.com/cran/efdm>

Run `revdepcheck::revdep_details(, "efdm")` for more info

## Newly broken

*   checking tests ... NOTE
     ```
       Running ‘test_checks.R’
       Running ‘test_donothing.R’
       Comparing ‘test_donothing.Rout’ to ‘test_donothing.Rout.save’ ... OK
       Running ‘test_estim.R’
       Comparing ‘test_estim.Rout’ to ‘test_estim.Rout.save’ ...
     87,94d86
     < duckdb keeps downloaded extensions and secrets in a temporary directory:
     < ℹ /tmp/RtmpZJtU3h/working_dir/RtmpOGoIuV/duckdb
     < This is removed when the R session ends.
     < • Extensions are re-downloaded each session.
     < • Secrets are lost.
     < ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     < ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     < ℹ See ?duckdb_storage for details and alternatives.
       Running ‘test_factor.R’
       Running ‘test_factors.R’
       Running ‘test_prior_ff.R’
       Running ‘test_something.R’
       Running ‘test_split.R’
       Comparing ‘test_split.Rout’ to ‘test_split.Rout.save’ ... OK
       Running ‘test_transprobs.R’
     ```

# embed (1.2.2)

* GitHub: <https://github.com/tidymodels/embed>
* Email: <mailto:emil.hvitfeldt@posit.co>
* GitHub mirror: <https://github.com/cran/embed>

Run `revdepcheck::revdep_details(, "embed")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-discretize_cart.R:303:3'): tunable is setup to works with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-discretize_cart.R:303:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       ── Error ('test-woe.R:475:3'): tunable is setup to works with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-woe.R:475:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       
       [ FAIL 2 | WARN 0 | SKIP 104 | PASS 362 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# epe4md (0.1.4)

* Email: <mailto:gabriel.konzen@epe.gov.br>
* GitHub mirror: <https://github.com/cran/epe4md>

Run `revdepcheck::revdep_details(, "epe4md")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > test-epe4md_calcula.R: 
       > test-epe4md_calcula.R:  Progress: ──────────────────────────────────────────────────────────────── 100%
       > test-epe4md_calcula.R: 
        Progress: ──────────────────────────────────────────────────────────────── 100%
       > test-epe4md_calcula.R: 
        Progress: ──────────────────────────────────────────────────────────────── 100%
       > test-epe4md_calcula.R: 
        Progress: ──────────────────────────────────────────────────────────────── 100%
       > test-epe4md_calcula.R: 
        Progress: ──────────────────────────────────────────────────────────────── 100%
       Saving _problems/test-epe4md_calcula-97.R
       [ FAIL 1 | WARN 0 | SKIP 2 | PASS 7 ]
       
       ══ Skipped tests (2) ═══════════════════════════════════════════════════════════
       • On CRAN (2): 'test-epe4md_casos_payback.R:4:1', 'test-epe4md_calcula.R:4:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-epe4md_calcula.R:84:3'): epe4md_calcula filtro_renda certo ───
       Expected `epe4md_calcula(...)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 2 | PASS 7 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# ERDbuilder (2.0.0)

* GitHub: <https://github.com/gbasulto/ERDbuilder>
* Email: <mailto:basulto@iastate.edu>
* GitHub mirror: <https://github.com/cran/ERDbuilder>

Run `revdepcheck::revdep_details(, "ERDbuilder")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       8. │           └─dplyr::summarise(...)
       9. │             └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
      10. │               ├─base::withCallingHandlers(...)
      11. │               └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      12. │                 └─base::lapply(.x, .f, ...)
      13. │                   └─dplyr (local) FUN(X[[i]], ...)
      14. │                     └─mask$eval_all_summarise(quo)
      15. │                       └─dplyr (local) eval()
      16. └─gt:::as_style(styles)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'step_by_step.Rmd' failed with diagnostics:
     ℹ In argument: `styles = list(as_style(styles))`.
     ℹ In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname =
       "st_id"`, `locnum = 4`, `rownum = -1`, `colnum = 1`.
     Caused by error in `as_style()`:
     ! All provided styles should be generated by stylizing helper functions.
     • Style with index `1` is invalid.
     --- failed re-building ‘step_by_step.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘step_by_step.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# ern (2.1.2)

* Email: <mailto:david.champredon@canada.ca>
* GitHub mirror: <https://github.com/cran/ern>

Run `revdepcheck::revdep_details(, "ern")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       iterations Richardson-Lucy deconvolution:  9
       iterations Richardson-Lucy deconvolution:  9
       iterations Richardson-Lucy deconvolution:  9
       iterations Richardson-Lucy deconvolution:  9
       iterations Richardson-Lucy deconvolution:  9
       iterations Richardson-Lucy deconvolution:  9
       Saving _problems/test-get_use_dates-65.R
       
       ERROR: `si_distr` must be specified in `config.EpiEstim`. ABORTING!
       Wastewater data smoothed using loess method
       Wastewater data smoothed using rollmean method
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 166 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-get_use_dates.R:65:3'): get_use_dates() works when dates.only = FALSE ──
       Expected `res` to be TRUE.
       Differences:
       `actual` is a character vector ('Component "lwr": names for current but not for target', 'Component "upr": names for current but not for target')
       `expected` is a logical vector (TRUE)
       
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 166 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# erplots (0.2.0)

* GitHub: <https://github.com/djnavarro/erplots>
* Email: <mailto:djnavarro@protonmail.com>
* GitHub mirror: <https://github.com/cran/erplots>

Run `revdepcheck::revdep_details(, "erplots")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `expected` is a character vector ('Weight')
       
       ── Failure ('test-er-plot-layer.R:411:3'): .layer_group constructs the correct data structure ──
       Expected `attr(fct1s, "label")` to equal `attr(er_test_data$sex, "label")`.
       Differences:
       `actual` is NULL
       `expected` is a character vector ('Sex')
       
       ── Failure ('test-er-plot-layer.R:440:3'): er_plot_add_groups() forwards ties/quantile_type/labeller to cut_exposure_quantile()/cut_quantile() ──
       Expected `attr(fct_exposure, "ties")` to equal "downward".
       Differences:
       `actual` is NULL
       `expected` is a character vector ('downward')
       
       ── Failure ('test-er-plot-layer.R:442:3'): er_plot_add_groups() forwards ties/quantile_type/labeller to cut_exposure_quantile()/cut_quantile() ──
       Expected `attr(fct_covariate, "ties")` to equal "downward".
       Differences:
       `actual` is NULL
       `expected` is a character vector ('downward')
       
       
       [ FAIL 7 | WARN 6 | SKIP 41 | PASS 1568 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking for unstated dependencies in ‘tests’ ... WARNING
     ```
     '::' or ':::' import not declared from: ‘ertte’
     ```

# eSDM (0.4.4)

* GitHub: <https://github.com/swfsc/eSDM>
* Email: <mailto:sam.woodman@noaa.gov>
* GitHub mirror: <https://github.com/cran/eSDM>

Run `revdepcheck::revdep_details(, "eSDM")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     Error(s) in re-building vignettes:
       ...
     --- re-building ‘example-analysis.Rmd’ using rmarkdown
     
     Quitting from example-analysis.Rmd:328-351 [unnamed-chunk-19]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error:
     ! 'predictions' contains NA.
     ---
     Backtrace:
         ▆
      1. └─eSDM::evaluation_metrics(over1.sf, 1, valid.data, "pres_abs")
      2.   └─ROCR::prediction(xy.data.overlap[[1]], xy.data.overlap[[2]])
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'example-analysis.Rmd' failed with diagnostics:
     'predictions' contains NA.
     --- failed re-building ‘example-analysis.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘example-analysis.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# EventStudy (0.66.0)

* GitHub: <https://github.com/sipemu/eventstudy>
* Email: <mailto:sm@data-zoo.de>
* GitHub mirror: <https://github.com/cran/EventStudy>

Run `revdepcheck::revdep_details(, "EventStudy")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test_simulation.R:20:3', 'test_simulation.R:36:3', 'test_simulation.R:51:3',
         'test_simulation.R:62:3', 'test_simulation.R:81:3', 'test_simulation.R:98:3',
         'test_simulation.R:114:3', 'test_simulation.R:130:3',
         'test_simulation.R:152:3', 'test_simulation.R:166:3',
         'test_simulation.R:181:3', 'test_simulation.R:217:3'
       • R/report.R not found for non-ASCII check (2): 'test_es_report.R:290:3',
         'test_report_multiformat.R:457:3'
       • requireNamespace("rmarkdown", quietly = TRUE) is TRUE (1):
         'test_report.R:3:3'
       • requireNamespace("tidyquant", quietly = TRUE) || requireNamespace("quantmod",
         quietly = TRUE) is TRUE (1): 'test_data_download.R:51:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test_reeval_statistical_fixes.R:128:5'): A2: all-NA event excluded identically across CSectT/Patell/BMP/Sign/GSign/KP ──
       Expected `out$n` to equal 1.
       Differences:
         `actual`: 2.0
       `expected`: 1.0
       
       ckp_t
       
       [ FAIL 1 | WARN 14 | SKIP 73 | PASS 2696 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# evprof (1.2.0)

* GitHub: <https://github.com/resourcefully-dev/evprof>
* Email: <mailto:marccanyigueral@gmail.com>
* GitHub mirror: <https://github.com/cran/evprof>

Run `revdepcheck::revdep_details(, "evprof")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     Caused by error in `group_by()`:
     ! This operation cannot be carried out by DuckDB, and the input is a
       stingy duckplyr frame.
     ℹ Use `compute(prudence = "lavish")` to materialize to temporary storage and
       continue with duckplyr.
     ℹ See `vignette("prudence")` for other options.
     Backtrace:
          ▆
       1. ├─evprof::get_connection_models(...)
       2. │ └─purrr::pmap_dfr(...)
       3. │   └─purrr::pmap(.l, .f, ...)
       4. │     └─purrr:::pmap_("list", .l, .f, ..., .progress = .progress)
       5. │       ├─purrr:::with_indexed_errors(...)
       6. │       │ └─base::withCallingHandlers(...)
       7. │       ├─purrr:::call_with_cleanup(...)
       8. │       └─evprof (local) .f(...)
       9. │         └─... %>% rename(ratio = "profile_ratio")
      10. ├─dplyr::rename(., ratio = "profile_ratio")
      11. ├─dplyr::summarise(...)
      12. ├─dplyr::group_by(., .data$profile)
      13. └─dplyr:::group_by.data.frame(., .data$profile)
      14.   └─dplyr:::check_prudence(.data, duckplyr_error)
      15.     └─cli::cli_abort(...)
      16.       └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       
       ══ Skipped tests (4) ═══════════════════════════════════════════════════════════
       • On CRAN (4): 'test-clustering.R:16:3', 'test-clustering.R:26:3',
         'test-modelling.R:104:3', 'test-modelling.R:135:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-modelling.R:22:3'): Get the connection models ──────────────────
       <purrr_error_indexed/rlang_error/error/condition>
       Error in `pmap(.l, .f, ...)`: i In index: 1.
       Caused by error in `group_by()`:
       ! This operation cannot be carried out by DuckDB, and the input is a stingy duckplyr frame.
       i Use `compute(prudence = "lavish")` to materialize to temporary storage and continue with duckplyr.
       i See `vignette("prudence")` for other options.
       ── Error ('test-modelling.R:37:3'): Plot of connection GMM are generated without errors ──
       <purrr_error_indexed/rlang_error/error/condition>
       Error in `pmap(.l, .f, ...)`: i In index: 1.
       Caused by error in `group_by()`:
       ! This operation cannot be carried out by DuckDB, and the input is a stingy duckplyr frame.
       i Use `compute(prudence = "lavish")` to materialize to temporary storage and continue with duckplyr.
       i See `vignette("prudence")` for other options.
       
       [ FAIL 2 | WARN 0 | SKIP 4 | PASS 46 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# evsim (1.7.1)

* GitHub: <https://github.com/resourcefully-dev/evsim>
* Email: <mailto:marccanyigueral@gmail.com>
* GitHub mirror: <https://github.com/cran/evsim>

Run `revdepcheck::revdep_details(, "evsim")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > weekends_parameters <- dplyr::tibble(
     +   profile = "Visit",
     +   ratio = 100,
     +   start_mean = 12,
     +   start_sd = 4,
     +   duration_mean = 3,
     +   duration_sd = 2,
     +   energy_mean = 4,
     +   energy_sd = 4
     + )
     > 
     > parameters_lst <- list(workdays_parameters, weekends_parameters)
     > 
     > # Get the whole model
     > ev_model <- get_custom_ev_model(
     +   names = c("Workdays", "Weekends"),
     +   months_lst = list(1:12, 1:12),
     +   wdays_lst = list(1:5, 6:7),
     +   parameters_lst = parameters_lst,
     +   connection_log = FALSE,
     +   energy_log = FALSE,
     +   data_tz = "Europe/Amsterdam"
     + )
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        1. └─evsim::simulate_sessions(...) at test-simulate_sessions.R:36:3
        2.   └─evsim:::prepare_model(evmodel[["models"]], sessions_day, user_profiles)
       ── Error ('test-simulate_sessions.R:67:3'): simulation works with energy models of specific charging rates ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. └─evsim::simulate_sessions(...) at test-simulate_sessions.R:67:3
        2.   └─evsim:::prepare_model(evmodel[["models"]], sessions_day, user_profiles)
       ── Error ('test-simulate_sessions.R:92:3'): simulation works with charging rates that don't have an energy model ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. └─evsim::simulate_sessions(...) at test-simulate_sessions.R:92:3
        2.   └─evsim:::prepare_model(evmodel[["models"]], sessions_day, user_profiles)
       ── Error ('test-simulate_sessions.R:115:3'): simulation works with some user profiles without sessions per day ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. └─evsim::simulate_sessions(...) at test-simulate_sessions.R:115:3
        2.   └─evsim:::prepare_model(evmodel[["models"]], sessions_day, user_profiles)
       
       [ FAIL 6 | WARN 0 | SKIP 0 | PASS 21 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# ezplot (0.8.2)

* GitHub: <https://github.com/wkostelecki/ezplot>
* Email: <mailto:wojtek.kostelecki@gmail.com>
* GitHub mirror: <https://github.com/cran/ezplot>

Run `revdepcheck::revdep_details(, "ezplot")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(ezplot)
       > suppressPackageStartupMessages(library(tsibble))
       > 
       > test_check("ezplot")
       Saving _problems/test-classification_plot-9.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 93 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-classification_plot.R:9:3'): pr_plot ─────────────────────────
       Expected `nrow(g$data)` to equal 11.
       Differences:
       1/1 mismatches
       [1] 12 - 11 == 1
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 93 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# fabletools (0.8.0)

* GitHub: <https://github.com/tidyverts/fabletools>
* Email: <mailto:mail@mitchelloharawild.com>
* GitHub mirror: <https://github.com/cran/fabletools>

Run `revdepcheck::revdep_details(, "fabletools")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > test_check("fabletools")
       Loading required package: fabletools
       duckdb keeps downloaded extensions and secrets in a temporary directory:
       ℹ /tmp/RtmpWPa8GZ/working_dir/RtmpKGgTqa/duckdb
       This is removed when the R session ends.
       • Extensions are re-downloaded each session.
       • Secrets are lost.
       ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       ℹ See ?duckdb_storage for details and alternatives.
       Saving _problems/test-accuracy-92.R
       [ FAIL 1 | WARN 1 | SKIP 0 | PASS 238 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-accuracy.R:92:3'): Out-of-sample accuracy ────────────────────
       Expected `!any(map_lgl(acc, compose(any, is.na)))` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       
       [ FAIL 1 | WARN 1 | SKIP 0 | PASS 238 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# FastKRR (0.2.1)

* GitHub: <https://github.com/kybak90/FastKRR>
* Email: <mailto:kybak@sungshin.ac.kr>
* GitHub mirror: <https://github.com/cran/FastKRR>

Run `revdepcheck::revdep_details(, "FastKRR")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpvYF1zQ/working_dir/RtmpUKNBM8/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# fastTS (1.0.3)

* GitHub: <https://github.com/petersonR/fastTS>
* Email: <mailto:ryan-peterson@uiowa.edu>
* GitHub mirror: <https://github.com/cran/fastTS>

Run `revdepcheck::revdep_details(, "fastTS")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(fastTS)
       > 
       > test_check("fastTS")
       Saving _problems/test-fastTS-9.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 246 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-fastTS.R:9:3'): fastTS works as expected, endogenous ─────────
       Expected `fit <- fastTS(y, gamma = c(0, 0.5))` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 246 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# FeNEU (3.0.3)

* Email: <mailto:peter.biber@lwf.bayern.de>
* GitHub mirror: <https://github.com/cran/FeNEU>

Run `revdepcheck::revdep_details(, "FeNEU")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
       9. │             └─base::mapply(.f, .x, .y, MoreArgs = list(...), SIMPLIFY = FALSE)
      10. │               └─FeNEU (local) `<rlng_lm_>`(dots[[1L]][[1L]], dots[[2L]][[1L]])
      11. │                 └─FeNEU:::fe_ccircle_fromlist(...)
      12. │                   └─FeNEU:::.drop_non_tree_records(trees, x$plot_id)
      13. │                     └─ForestElementsR::fe_species_is_tree(df$ba_fe)
      14. │                       └─ForestElementsR::fe_species_non_tree_codes(coding)
      15. │                         └─ForestElementsR::fe_species_get_coding_table(coding)
      16. │                           ├─purrr::pluck(...)
      17. │                           │ └─purrr:::pluck_raw(.x, list2(...), .default = .default)
      18. │                           ├─dplyr::filter(...)
      19. │                           └─dplyr:::filter.data.frame(...)
      20. │                             └─dplyr::filter(...)
      21. │                               └─dplyr:::filter_impl(...)
      22. │                                 └─dplyr:::filter_rows(...)
      23. │                                   └─dplyr:::filter_eval(...)
      24. │                                     ├─base::withCallingHandlers(...)
      25. │                                     └─mask$eval_all_filter(dots_expanded, invert, env_filter)
      26. │                                       └─dplyr (local) eval()
      27. ├─dplyr:::dplyr_internal_error(...)
      28. │ └─rlang::abort(class = c(class, "dplyr:::internal_error"), dplyr_error_data = data)
      29. │   └─rlang:::signal_abort(cnd, .file)
      30. │     └─base::signalCondition(cnd)
      31. └─dplyr (local) `<fn>`(`<dpl:::__>`)
      32.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        24. │                             └─dplyr:::filter_impl(...)
        25. │                               └─dplyr:::filter_rows(...)
        26. │                                 └─dplyr:::filter_eval(...)
        27. │                                   ├─base::withCallingHandlers(...)
        28. │                                   └─mask$eval_all_filter(dots_expanded, invert, env_filter)
        29. │                                     └─dplyr (local) eval()
        30. ├─dplyr:::dplyr_internal_error(...)
        31. │ └─rlang::abort(class = c(class, "dplyr:::internal_error"), dplyr_error_data = data)
        32. │   └─rlang:::signal_abort(cnd, .file)
        33. │     └─base::signalCondition(cnd)
        34. └─dplyr (local) `<fn>`(`<dpl:::__>`)
        35.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       ── Error ('test-reclassify_pseudo_ingrowth_ccirc.R:23:3'): (code run outside of `test_that()`) ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `v_m3 = ForestElementsR::v_gri(.data$species_id, .data$dbh_cm, .data$height_m)`.
       Caused by error in `map()`:
       i In index: 3.
       i With name: C.
       Caused by error:
       ! GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       
       [ FAIL 34 | WARN 0 | SKIP 68 | PASS 519 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       5.         └─FeNEU:::calc_v_hub_m3_at_thrsh(...)
       6.           ├─ForestElementsR::v_gri(...)
       7.           └─ForestElementsR:::v_gri.fe_species_bavrn_state(...)
       8.             └─ForestElementsR:::v_gri_core(species_id, dbh_cm, height_m, v_gri_param_bv_st_shrt)
       9.               └─purrr::pmap_dbl(...)
      10.                 └─purrr:::pmap_("double", .l, .f, ..., .progress = .progress)
      11.                   └─purrr::map(.l, vctrs_vec_compat)
      12.                     └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      13.                       ├─purrr:::with_indexed_errors(...)
      14.                       │ └─base::withCallingHandlers(...)
      15.                       └─purrr:::call_with_cleanup(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'increment_estimation.Rmd' failed with diagnostics:
     ℹ In index: 3.
     ℹ With name: C.
     Caused by error:
     ! GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘increment_estimation.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘FeNEU.Rmd’ ‘data_formats.Rmd’ ‘increment_estimation.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# ferrn (0.3.0)

* GitHub: <https://github.com/huizezhang-sherry/ferrn>
* Email: <mailto:huizezhangsh@gmail.com>
* GitHub mirror: <https://github.com/cran/ferrn>

Run `revdepcheck::revdep_details(, "ferrn")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: add_start
     > ### Title: A ggproto for drawing start points
     > ### Aliases: add_start
     > 
     > ### ** Examples
     > 
     > library(ggplot2)
     > # construct the space and start df for plotting
     > space <- tibble::tibble(x0 = 0, y0 = 0, r = 5)
     > holes_1d_geo %>%
     +   compute_pca() %>%
     +   purrr::pluck("aug") %>%
     +   clean_method() %>%
     +   get_start()
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpisA4OZ/working_dir/RtmpO4WRPs/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       ℹ Use `compute(prudence = "lavish")` to materialize to temporary storage and
         continue with duckplyr.
       ℹ See `vignette("prudence")` for other options.
       Backtrace:
            ▆
         1. ├─ferrn::plot_projection(get_best(holes_2d_jellyfish), data = boa6) at test-plot-projection.R:10:3
         2. │ └─ferrn::compute_projection(...)
         3. │   ├─base::unique(sapply(dt$basis, function(xx) dim(xx)[2], simplify = TRUE))
         4. │   └─base::sapply(dt$basis, function(xx) dim(xx)[2], simplify = TRUE)
         5. │     └─base::lapply(X = X, FUN = FUN, ...)
         6. └─ferrn::get_best(holes_2d_jellyfish)
         7.   ├─dplyr::ungroup(...)
         8.   └─dplyr:::ungroup.data.frame(...)
         9.     └─dplyr:::check_prudence(x, duckplyr_error)
        10.       └─cli::cli_abort(...)
        11.         └─rlang::abort(...)
       
       [ FAIL 3 | WARN 0 | SKIP 3 | PASS 17 ]
       Deleting unused snapshots: 'huber-plot/geom-huber-all-parameters.svg',
       'huber-plot/huber-histogram.svg', 'huber-plot/huber-plot-basic.svg',
       'plot-projection/basic.svg', 'plot-projection/change-id.svg', and
       'plot-projection/test-label.svg'
       Error:
       ! Test failures.
       Execution halted
     ```

# ffscrapr (1.4.8)

* GitHub: <https://github.com/ffverse/ffscrapr>
* Email: <mailto:tan@tanho.ca>
* GitHub mirror: <https://github.com/cran/ffscrapr>

Run `revdepcheck::revdep_details(, "ffscrapr")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     downloaded 9.8 MB
     
     --- finished re-building ‘mfl_getendpoint.Rmd’
     
     --- re-building ‘sleeper_basics.Rmd’ using rmarkdown
     trying URL 'https://github.com/ffverse/ffscrapr-tests/archive/1.4.7.zip'
     Content type 'application/zip' length 10326711 bytes (9.8 MB)
     ==================================================
     downloaded 9.8 MB
     
     --- finished re-building ‘sleeper_basics.Rmd’
     
     --- re-building ‘sleeper_getendpoint.Rmd’ using rmarkdown
     trying URL 'https://github.com/ffverse/ffscrapr-tests/archive/1.4.7.zip'
     Content type 'application/zip' length 10326711 bytes (9.8 MB)
     ==================================================
     downloaded 9.8 MB
     
     --- finished re-building ‘sleeper_getendpoint.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘mfl_basics.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# filters (0.3.1)

* Email: <mailto:joe.zhu@roche.com>
* GitHub mirror: <https://github.com/cran/filters>

Run `revdepcheck::revdep_details(, "filters")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Component "STUDYID": Attributes: < current is not list-like >
       Component "USUBJID": Attributes: < Modes: list, NULL >
       Component "USUBJID": Attributes: < Lengths: 1, 0 >
       Component "USUBJID": Attributes: < names for target but not for current >
       Component "USUBJID": Attributes: < current is not list-like >
       Component "SUBJID": Attributes: < Modes: list, NULL >
       ...
       ── Failure ('test-utils.R:15:3'): `semi_join` preserves column labels ──────────
       Expected `get_labels(semi_join(adae, adsl, by = c("STUDYID", "USUBJID")))` to equal `get_labels(dplyr::semi_join(adae, adsl, by = c("STUDYID", "USUBJID")))`.
       Differences:
       Component "STUDYID": Modes: character, NULL
       Component "STUDYID": Lengths: 1, 0
       Component "STUDYID": target is character, current is NULL
       Component "USUBJID": Modes: character, NULL
       Component "USUBJID": Lengths: 1, 0
       Component "USUBJID": target is character, current is NULL
       Component "SUBJID": Modes: character, NULL
       Component "SUBJID": Lengths: 1, 0
       Component "SUBJID": target is character, current is NULL
       ...
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 79 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# finalsize (0.2.1)

* GitHub: <https://github.com/epiverse-trace/finalsize>
* Email: <mailto:pratik.gupte@lshtm.ac.uk>
* GitHub mirror: <https://github.com/cran/finalsize>

Run `revdepcheck::revdep_details(, "finalsize")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      2. ├─base::as.matrix(.)
      3. └─tibble::column_to_rownames(., var = "age_group")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'susceptibility_matrices.Rmd' failed with diagnostics:
     `.data` must be a data frame without row names.
     --- failed re-building ‘susceptibility_matrices.Rmd’
     
     --- re-building ‘theoretical_background.Rmd’ using rmarkdown
     --- finished re-building ‘theoretical_background.Rmd’
     
     --- re-building ‘uncertainty_params.Rmd’ using rmarkdown
     --- finished re-building ‘uncertainty_params.Rmd’
     
     --- re-building ‘varying_contacts.Rmd’ using rmarkdown
     --- finished re-building ‘varying_contacts.Rmd’
     
     --- re-building ‘varying_susceptibility.Rmd’ using rmarkdown
     --- finished re-building ‘varying_susceptibility.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘susceptibility_matrices.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# fishmechr (1.0.3)

* GitHub: <https://github.com/tytell/fishmechr>
* Email: <mailto:eric.tytell@tufts.edu>
* GitHub mirror: <https://github.com/cran/fishmechr>

Run `revdepcheck::revdep_details(, "fishmechr")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     --- re-building ‘prickleback_swimming.Rmd’ using rmarkdown
     --- finished re-building ‘prickleback_swimming.Rmd’
     
     --- re-building ‘process_sleap_data.Rmd’ using rmarkdown
     
     Quitting from process_sleap_data.Rmd:209-225 [unnamed-chunk-19]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error in `if (...) NULL`:
     ! missing value where TRUE/FALSE needed
     ---
     Backtrace:
         ▆
      1. └─fishmechr::get_primary_swimming_axis_df(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'process_sleap_data.Rmd' failed with diagnostics:
     missing value where TRUE/FALSE needed
     --- failed re-building ‘process_sleap_data.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘process_sleap_data.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# flametree (0.2.0)

* GitHub: <https://github.com/djnavarro/flametree>
* Email: <mailto:djnavarro@protonmail.com>
* GitHub mirror: <https://github.com/cran/flametree>

Run `revdepcheck::revdep_details(, "flametree")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘spelling.R’
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(flametree)
       > 
       > test_check("flametree")
       Saving _problems/test-grow-20.R
       Saving 7 x 7 in image
       [ FAIL 1 | WARN 0 | SKIP 1 | PASS 286 ]
       
       ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
       • On CRAN (1): 'test-plot.R:84:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-grow.R:20:3'): invalid seeds are forbidden ───────────────────
       Expected `flametree_grow(seed = 0)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 1 | PASS 286 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# flexFitR (1.2.4)

* GitHub: <https://github.com/AparicioJohan/flexFitR>
* Email: <mailto:aparicioarce@wisc.edu>
* GitHub mirror: <https://github.com/cran/flexFitR>

Run `revdepcheck::revdep_details(, "flexFitR")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      1. ├─stats::predict(mod, x = 4.5)
      2. └─flexFitR:::predict.modeler(mod, x = 4.5)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'how_to_start.Rmd' failed with diagnostics:
     x needs to be in the interval <1, 1>
     --- failed re-building ‘how_to_start.Rmd’
     
     --- re-building ‘maturity-model.Rmd’ using rmarkdown
     --- finished re-building ‘maturity-model.Rmd’
     
     --- re-building ‘modeling_soybean.Rmd’ using rmarkdown
     --- finished re-building ‘modeling_soybean.Rmd’
     
     --- re-building ‘plotting.Rmd’ using rmarkdown
     --- finished re-building ‘plotting.Rmd’
     
     --- re-building ‘predicted_values.Rmd’ using rmarkdown
     --- finished re-building ‘predicted_values.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘how_to_start.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

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

# ForestElementsR (3.0.0)

* Email: <mailto:p.biber@tum.de>
* GitHub mirror: <https://github.com/cran/ForestElementsR>

Run `revdepcheck::revdep_details(, "ForestElementsR")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
       4. │   ├─base::suppressWarnings(...)
       5. │   │ └─base::withCallingHandlers(...)
       6. │   ├─dplyr::mutate(...)
       7. │   └─dplyr:::mutate.data.frame(...)
       8. │     └─dplyr::mutate(...)
       9. │       └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      10. │         ├─base::withCallingHandlers(...)
      11. │         └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      12. │           └─mask$eval_all_mutate(quo)
      13. │             └─dplyr (local) eval()
      14. ├─ForestElementsR::v_gri(.data$species_id, .data$dbh_cm, .data$height_m)
      15. ├─ForestElementsR:::v_gri.default(...)
      16. │ └─ForestElementsR:::v_gri_core(species_id, dbh_cm, height_m, v_gri_param_orig)
      17. │   └─purrr::pmap_dbl(...)
      18. │     └─purrr:::pmap_("double", .l, .f, ..., .progress = .progress)
      19. │       └─purrr::map(.l, vctrs_vec_compat)
      20. │         └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      21. │           ├─purrr:::with_indexed_errors(...)
      22. │           │ └─base::withCallingHandlers(...)
      23. │           └─purrr:::call_with_cleanup(...)
      24. └─base::.handleSimpleError(...)
      25.   └─purrr (local) h(simpleError(msg, call))
      26.     └─cli::cli_abort(...)
      27.       └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         1. ├─testthat::expect_warning(...) at test_volume_v_gri.R:191:3
         2. │ └─testthat:::expect_condition_matching_(...)
         3. │   └─testthat:::quasi_capture(...)
         4. │     ├─testthat (local) .capture(...)
         5. │     │ └─base::withCallingHandlers(...)
         6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
         7. ├─ForestElementsR::v_gri(...)
         8. ├─ForestElementsR:::v_gri.default(...)
         9. │ └─ForestElementsR:::v_gri_core(species_id, dbh_cm, height_m, v_gri_param_orig)
        10. │   └─purrr::pmap_dbl(...)
        11. │     └─purrr:::pmap_("double", .l, .f, ..., .progress = .progress)
        12. │       └─purrr::map(.l, vctrs_vec_compat)
        13. │         └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
        14. │           ├─purrr:::with_indexed_errors(...)
        15. │           │ └─base::withCallingHandlers(...)
        16. │           └─purrr:::call_with_cleanup(...)
        17. └─base::.handleSimpleError(...)
        18.   └─purrr (local) h(simpleError(msg, call))
        19.     └─cli::cli_abort(...)
        20.       └─rlang::abort(...)
       
       [ FAIL 7 | WARN 0 | SKIP 0 | PASS 414 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      13.       └─purrr:::pmap_("double", .l, .f, ..., .progress = .progress)
      14.         └─purrr::map(.l, vctrs_vec_compat)
      15.           └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      16.             ├─purrr:::with_indexed_errors(...)
      17.             │ └─base::withCallingHandlers(...)
      18.             └─purrr:::call_with_cleanup(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'tree_species_codings.Rmd' failed with diagnostics:
     ℹ In argument: `v_cbm = v_gri(species_id, dbh_cm, height_m)`.
     Caused by error in `map()`:
     ℹ In index: 3.
     ℹ With name: C.
     Caused by error:
     ! GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘tree_species_codings.Rmd’
     
     --- re-building ‘yield_tables.Rmd’ using rmarkdown
     --- finished re-building ‘yield_tables.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘forestelementsr_package.Rmd’ ‘tree_species_codings.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# forestsearch (0.4.0)

* GitHub: <https://github.com/larry-leon/forestsearch>
* Email: <mailto:larry.leon.05@post.harvard.edu>
* GitHub mirror: <https://github.com/cran/forestsearch>

Run `revdepcheck::revdep_details(, "forestsearch")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      17. │                   └─dplyr (local) FUN(X[[i]], ...)
      18. │                     └─mask$eval_all_summarise(quo)
      19. │                       └─dplyr (local) eval()
      20. └─gt:::as_style(styles)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'forestsearch.Rmd' failed with diagnostics:
     ℹ In argument: `styles = list(as_style(styles))`.
     ℹ In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname =
       "Variable"`, `locnum = 4`, `rownum = -1`, `colnum = 1`.
     Caused by error in `as_style()`:
     ! All provided styles should be generated by stylizing helper functions.
     • Style with index `1` is invalid.
     --- failed re-building ‘forestsearch.Rmd’
     
     --- re-building ‘survival-post-selection.qmd’ using html
     Quarto binary is required to build Quarto vignettes but is not available.
     ℹ Please make sure it is installed and found by `find_quarto()`.
     --- finished re-building ‘survival-post-selection.qmd’
     
     SUMMARY: processing the following file failed:
       ‘forestsearch.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

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

# funkyheatmap (0.5.2)

* GitHub: <https://github.com/funkyheatmap/funkyheatmap>
* Email: <mailto:rcannood@gmail.com>
* GitHub mirror: <https://github.com/cran/funkyheatmap>

Run `revdepcheck::revdep_details(, "funkyheatmap")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > test-verify_column_groups.R: i No column groups was provided, deriving from column info.
       > test-verify_column_groups.R: i Column groups did not contain a column called 'palette'. Assuming no colour scales need to be used.
       > test-verify_column_groups.R: i Column groups did not contain a column called 'level1'. Using `column_info$group` as a makeshift column group name.
       > test-verify_column_info.R: i Column info did not contain column `name`, using `id` to generate it.
       > test-verify_column_info.R: i Column info did not contain group information, assuming columns are ungrouped.
       > test-verify_column_info.R: i Column info did not contain a column called 'palette', generating palettes based on the 'geom' column.
       > test-verify_column_info.R: i Column info did not contain a column called 'width', generating options based on the 'geom' column.
       > test-verify_column_info.R: i Column info did not contain a column called 'legend', generating options based on the 'geom' column.
       > test-verify_column_info.R: i No column info was provided, assuming all columns in `data` are to be plotted.
       > test-verify_column_info.R: i Column info did not contain column `name`, using `id` to generate it.
       > test-verify_column_info.R: i Column info did not contain information on which columns to plot, inferring from `data` types.
       > test-verify_column_info.R: i Column info did not contain group information, assuming columns are ungrouped.
       > test-verify_column_info.R: i Column info did not contain a column called 'palette', generating palettes based on the 'geom' column.
       > test-verify_column_info.R: i Column info did not contain a column called 'width', generating options based on the 'geom' column.
       > test-verify_column_info.R: i Column info did not contain a column called 'legend', generating options based on the 'geom' column.
       > test-verify_column_info.R: i Detected json in the options column, parsing.
       > test-verify_column_info.R: i Column info did not contain column `name`, using `id` to generate it.
       > test-verify_column_info.R: i Column info did not contain group information, assuming columns are ungrouped.
       > test-verify_column_info.R: i Column info did not contain a column called 'palette', generating palettes based on the 'geom' column.
       > test-verify_column_info.R: i Column info did not contain a column called 'legend', generating options based on the 'geom' column.
       > test-verify_row_groups.R: i No row groups was provided, deriving from row info.
       > test-verify_row_groups.R: i Row groups did not contain a row called 'level1'. Using `row_info$group` as a makeshift row group name.
       > test-verify_row_info.R: i No row info was provided, assuming all rows in `data` are to be plotted.
       > test-verify_row_info.R: i Row info did not contain group information, assuming rows are ungrouped.
       Killed
     ```

# galah (2.3.0)

* GitHub: <https://github.com/AtlasOfLivingAustralia/galah-R>
* Email: <mailto:martin.westgate@csiro.au>
* GitHub mirror: <https://github.com/cran/galah>

Run `revdepcheck::revdep_details(, "galah")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpQVrxmo/working_dir/RtmpwcqT7i/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# galaxias (0.1.2)

* GitHub: <https://github.com/AtlasOfLivingAustralia/galaxias>
* Email: <mailto:martin.westgate@csiro.au>
* GitHub mirror: <https://github.com/cran/galaxias>

Run `revdepcheck::revdep_details(, "galaxias")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > # Note we use `setwd()` and `proj_set()` in place of 
     > # `usethis::local_project()` because, unlike 
     > # in /tests, these sections are wrapped in `dontshow` which exits the 
     > # temporary directory *before* any actual code is run.
     > .old_wd <- getwd()
     > temp_dir <- tempdir()
     > usethis::proj_set(path = temp_dir, force = TRUE)
     ✔ Setting active project to "/tmp/RtmpJ6l6A7/working_dir/RtmpXLe9do".
     > setwd(temp_dir)
     > ## End(Don't show)
     > 
     > # First build some data to add to our archive
     > df <- tibble::tibble(
     +   occurrenceID = c("a1", "a2"),
     +   species = c("Eolophus roseicapilla", "Galaxias truttaceus"))
     >   
     > use_data_occurrences(df, quiet = TRUE)
     ✔ Creating 'data-publish/'.
     > 
     > # Now we can build a schema document to describe that dataset
     > use_schema(quiet = TRUE)
     Error in attributes(empty[[b]]) <- attributes_all : 
       all attributes must have names [2 does not]
     Calls: use_schema ... parse_tibble_to_list -> add_tibble_attributes_to_list
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        2. │ └─testthat::quasi_label(enquo(expected))
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. └─zip::zip_list("../dwc-archive.zip")
       ── Error ('test-use_schema.R:16:3'): use_schema() works with no arguments ──────
       Error in `attributes(empty[[b]]) <- attributes_all`: all attributes must have names [2 does not]
       Backtrace:
            ▆
         1. ├─testthat::expect_message(use_schema()) at test-use_schema.R:16:3
         2. │ └─testthat:::expect_condition_matching_(...)
         3. │   └─testthat:::quasi_capture(...)
         4. │     ├─testthat (local) .capture(...)
         5. │     │ └─base::withCallingHandlers(...)
         6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
         7. └─galaxias::use_schema()
         8.   └─delma::write_eml(schema, file = file_path)
         9.     ├─delma::as_eml_xml(x)
        10.     └─delma:::as_eml_xml.tbl_df(x)
        11.       ├─xml2::as_xml_document(parse_tibble_to_list(x))
        12.       └─delma:::parse_tibble_to_list(x)
        13.         └─delma:::add_tibble_attributes_to_list(empty = result, full = x)
       
       [ FAIL 8 | WARN 1 | SKIP 9 | PASS 58 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# GDPuc (1.6.1)

* GitHub: <https://github.com/pik-piam/GDPuc>
* Email: <mailto:jokoch@pik-potsdam.de>
* GitHub mirror: <https://github.com/cran/GDPuc>

Run `revdepcheck::revdep_details(, "GDPuc")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       + expected[8, ]  1.873685e+02
       - actual[9, ]             NaN
       + expected[9, ]  2.219864e+02
       - actual[10, ]            NaN
       + expected[10, ] 2.484892e+02
       and 15 more ...
       
            actual$value | expected$value                
        [1] NaN          - 70.2           [1]            
        [2] NaN          - 77.7           [2]            
        [3] NaN          - 88.1           [3]            
        [4] NaN          - 96.5           [4]            
        [5] NaN          - 116.8          [5]            
        [6] NaN          - 138.5          [6]            
        [7] NaN          - 163.8          [7]            
        [8] NaN          - 187.4          [8]            
        [9] NaN          - 222.0          [9]            
       [10] NaN          - 248.5          [10]           
        ... ...            ...            and 15 more ...
       
       
       [ FAIL 6 | WARN 0 | SKIP 0 | PASS 6617 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# ggdiagram (0.2.0)

* GitHub: <https://github.com/wjschne/ggdiagram>
* Email: <mailto:w.joel.schneider@gmail.com>
* GitHub mirror: <https://github.com/cran/ggdiagram>

Run `revdepcheck::revdep_details(, "ggdiagram")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
       9. │     │ │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
      10. │     │ │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
      11. │     │ └─base::withCallingHandlers(...)
      12. │     └─ggplot2 (local) f(l = layers[[i]], d = data[[i]])
      13. │       └─l$draw_geom(d, layout)
      14. │         └─ggplot2 (local) draw_geom(..., self = self)
      15. │           └─self$geom$draw_layer(...)
      16. │             └─ggplot2 (local) draw_layer(..., self = self)
      17. │               └─base::lapply(...)
      18. │                 └─ggplot2 (local) FUN(X[[i]], ...)
      19. │                   ├─rlang::inject(self$draw_panel(data, panel_params, coord, !!!params))
      20. │                   └─self$draw_panel(...)
      21. │                     └─ggtext (local) draw_panel(...)
      22. │                       └─gridtext::richtext_grob(...)
      23. │                         └─grid::convertHeight(margin[c(1, 3)], "pt", valueOnly = TRUE)
      24. │                           └─grid::convertUnit(...)
      25. │                             ├─grid:::upgradeUnit(x)
      26. │                             └─grid:::upgradeUnit.default(x)
      27. │                               └─base::stop("Not a unit object")
      28. └─base::.handleSimpleError(`<fn>`, "Not a unit object", base::quote(upgradeUnit.default(x)))
      29.   └─rlang (local) h(simpleError(msg, call))
      30.     └─handlers[[1L]](cnd)
      31.       └─cli::cli_abort(...)
      32.         └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       Actually got a <simpleError> with message:
         GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       ── Failure ('test-segment.R:218:3'): ob_segment geom and aesthetics ────────────
       Expected `as.geom(sl)` not to throw any errors.
       Actually got a <simpleError> with message:
         GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       ── Failure ('test-segment.R:221:3'): ob_segment geom and aesthetics ────────────
       Expected `get_tibble_defaults(s)` not to throw any errors.
       Actually got a <simpleError> with message:
         GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       ── Error ('test-segment.R:223:3'): ob_segment geom and aesthetics ──────────────
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. └─ggdiagram::get_tibble_defaults(s) at test-segment.R:223:3
        2.   ├─S7::S7_dispatch()
        3.   └─ggdiagram (local) `method(get_tibble_defaults, ggdiagram::ob_segment)`(x = `<ggdgr::_>`)
        4.     └─ggdiagram:::get_tibble_defaults_helper(...)
        5.       ├─d[[n]]
        6.       └─tibble:::`[[.tbl_df`(d, n)
       
       [ FAIL 21 | WARN 0 | SKIP 1 | PASS 2048 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# ggfacto (0.4.0)

* GitHub: <https://github.com/BriceNocenti/ggfacto>
* Email: <mailto:brice.nocenti@gmail.com>
* GitHub mirror: <https://github.com/cran/ggfacto>

Run `revdepcheck::revdep_details(, "ggfacto")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(dplyr::select(X.ind.sup, "name", tidyselect::all_of(active_vars)), "name")`: `.data` must be a data frame without row names.
       Backtrace:
            ▆
         1. ├─testthat::expect_s3_class(quietly(ggpca_3d(fx_pca())), "plotly") at test-plots.R:362:3
         2. │ └─testthat::quasi_label(enquo(object))
         3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
         4. ├─ggfacto:::quietly(ggpca_3d(fx_pca()))
         5. │ ├─utils::capture.output(out <- suppressMessages(force(expr))) at ./helper-fixtures.R:145:3
         6. │ │ └─base::withVisible(...elt(i))
         7. │ ├─base::suppressMessages(force(expr))
         8. │ │ └─base::withCallingHandlers(...)
         9. │ └─base::force(expr)
        10. └─ggfacto::ggpca_3d(fx_pca())
        11.   └─ggfacto:::PCA_ind.sup_coord(...)
        12.     ├─base::as.matrix(...)
        13.     └─tibble::column_to_rownames(...)
        14.       └─tibble:::abort_already_has_rownames()
        15.         └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        16.           └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 1 | WARN 0 | SKIP 9 | PASS 2487 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# ggmosaic2 (0.5.1)

* GitHub: <https://github.com/friendly/ggmosaic2>
* Email: <mailto:friendly@yorku.ca>
* GitHub mirror: <https://github.com/cran/ggmosaic2>

Run `revdepcheck::revdep_details(, "ggmosaic2")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'frequency-table-forms.Rmd' failed with diagnostics:
     ℹ In argument: `styles = list(as_style(styles))`.
     ℹ In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname =
       "Total"`, `locnum = 4`, `rownum = -1`, `colnum = 5`.
     Caused by error in `as_style()`:
     ! All provided styles should be generated by stylizing helper functions.
     • Style with index `1` is invalid.
     --- failed re-building ‘frequency-table-forms.Rmd’
     
     --- re-building ‘ggmosaic.Rmd’ using rmarkdown
     --- finished re-building ‘ggmosaic.Rmd’
     
     --- re-building ‘introducing-ggmosaic2.Rmd’ using rmarkdown
     --- finished re-building ‘introducing-ggmosaic2.Rmd’
     
     --- re-building ‘loglinear-models.Rmd’ using rmarkdown
     --- finished re-building ‘loglinear-models.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘frequency-table-forms.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# ggtime (1.1.0)

* GitHub: <https://github.com/mitchelloharawild/ggtime>
* Email: <mailto:mail@mitchelloharawild.com>
* GitHub mirror: <https://github.com/cran/ggtime>

Run `revdepcheck::revdep_details(, "ggtime")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Backtrace:
           ▆
        1. └─ggtime (local) expect_tsdisplay_season(lag_tsbl(hourly_times)) at test-gg-lag.R:141:3
        2.   └─testthat::expect_s3_class(p[[3]]$coordinates, "CoordLoop") at test-gg-lag.R:121:3
       ── Error ('test-gg-subseries.R:63:3'): gg_subseries() supports legacy indices ──
       Error in `as_mixtime_index(data[[idx]])`: Seasonal plots require a time index, not an index of class <integer>.
       Backtrace:
           ▆
        1. └─ggtime (local) expect_subseries_builds(subseries_tsbl(hourly_times), "day") at test-gg-subseries.R:63:3
        2.   └─ggtime::gg_subseries(data, y, period = period) at test-gg-subseries.R:16:3
        3.     └─ggtime:::as_mixtime_index(data[[idx]])
        4.       └─rlang::abort(...)
       ── Error ('test-gg-subseries.R:91:3'): gg_subseries() defaults to the smallest seasonal period ──
       Error in `season_period(period, ts_interval, auto = "smallest")`: Could not find a seasonal period to use for this time series.
       Backtrace:
           ▆
        1. └─ggtime (local) expect_subseries_builds(subseries_tsbl(hourly_times)) at test-gg-subseries.R:91:3
        2.   └─ggtime::gg_subseries(data, y, period = period) at test-gg-subseries.R:16:3
        3.     └─ggtime:::season_period(period, ts_interval, auto = "smallest")
        4.       └─rlang::abort("Could not find a seasonal period to use for this time series.")
       
       [ FAIL 4 | WARN 177 | SKIP 9 | PASS 936 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# Greg (2.0.3)

* GitHub: <https://github.com/gforge/Greg>
* Email: <mailto:max@gforge.se>
* GitHub mirror: <https://github.com/cran/Greg>

Run `revdepcheck::revdep_details(, "Greg")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Loading required package: htmlTable
       
       Attaching package: 'Gmisc'
       
       The following object is masked from 'package:base':
       
           append
       
       Loading required package: forestplot
       Loading required package: grid
       Loading required package: checkmate
       Loading required package: abind
       Saving _problems/test-forestplotCombineRegrObj-69.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 291 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-forestplotCombineRegrObj.R:66:3'): Test getModelData4Forestplot ──
       Expected `pluck(filter(data, column_term == "x2"), "estimate")` to equal `exp(coef(fit1)["x2"])`.
       Differences:
       names for current but not for target
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 291 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# grobblR (0.2.2)

* GitHub: <https://github.com/calvinmfloyd/grobblR>
* Email: <mailto:calvin.michael.floyd@gmail.com>
* GitHub mirror: <https://github.com/cran/grobblR>

Run `revdepcheck::revdep_details(, "grobblR")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: add_aesthetic
     > ### Title: Add an Aesthetic
     > ### Aliases: add_aesthetic
     > 
     > ### ** Examples
     > 
     > 
     > df = data.frame(var1 = c(5, 14, 6, 10), var2 = c(3, 30, 17, 7))
     > df %>%
     +   grob_matrix() %>% 
     +   add_aesthetic(aesthetic = 'text_color', value = 'red', group = 'cells') %>%
     +   view_grob()
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpr5dTs9/working_dir/Rtmp3q4KR5/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        11. └─grobblR (local) `<fn>`()
        12.   ├─default[["value"]]
        13.   └─tibble:::`[[.tbl_df`(default, "value")
       ── Error ('test_matrix_aesthetics.R:84:5'): No errors when inputting a character string for font_face in alter_at() ('bold', 'italic', etc). ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
            ▆
         1. ├─testthat::expect_true(grid::is.grob(gl$grob)) at test_matrix_aesthetics.R:84:5
         2. │ └─testthat::quasi_label(enquo(object), label)
         3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
         4. ├─grid::is.grob(gl$grob)
         5. ├─grobblR (local) `<fn>`()
         6. │ └─grid::gList(raw_grobs, grob_row_clone$grob)
         7. ├─grobblR (local) `<fn>`()
         8. │ └─grid::gList(raw_grobs, grob_col_clone$grob)
         9. ├─grobblR (local) `<fn>`()
        10. │ └─grobblR:::convert_to_grob(...)
        11. └─grobblR (local) `<fn>`()
        12.   ├─default[["value"]]
        13.   └─tibble:::`[[.tbl_df`(default, "value")
       
       [ FAIL 4 | WARN 1 | SKIP 0 | PASS 16 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
          ▆
       1. ├─... %>% view_grob()
       2. ├─grobblR::view_grob(.)
       3. │ └─gridExtra::grid.arrange(grob$grob)
       4. │   └─gridExtra::arrangeGrob(...)
       5. ├─grobblR (local) `<fn>`()
       6. │ └─grid::gList(raw_grobs, grob_row_clone$grob)
       7. ├─grobblR (local) `<fn>`()
       8. │ └─grid::gList(raw_grobs, grob_col_clone$grob)
       9. ├─grobblR (local) `<fn>`()
      10. │ └─grobblR:::convert_to_grob(...)
      11. └─grobblR (local) `<fn>`()
      12.   ├─default[["value"]]
      13.   └─tibble:::`[[.tbl_df`(default, "value")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'grobblR.Rmd' failed with diagnostics:
     GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘grobblR.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘grob_layout.Rmd’ ‘grob_matrix.Rmd’ ‘grobblR.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# GrowthCurveME (0.1.11)

* GitHub: <https://github.com/cancermodels-org/GrowthCurveME>
* Email: <mailto:anand_panigrahy@dfci.harvard.edu>
* GitHub mirror: <https://github.com/cran/GrowthCurveME>

Run `revdepcheck::revdep_details(, "GrowthCurveME")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     Backtrace:
          ▆
       1. ├─GrowthCurveME::summarize_growth_model_ls(...)
       2. │ └─... %>% dplyr::rename(Value = !!rlang::sym("V1"))
       3. ├─dplyr::rename(., Value = !!rlang::sym("V1"))
       4. ├─dplyr:::rename.data.frame(., Value = !!rlang::sym("V1"))
       5. │ └─tidyselect::eval_rename(expr(c(...)), .data)
       6. │   └─tidyselect:::rename_impl(...)
       7. │     └─tidyselect:::eval_select_impl(...)
       8. │       ├─tidyselect:::with_subscript_errors(...)
       9. │       │ └─base::withCallingHandlers(...)
      10. │       └─tidyselect:::vars_select_eval(...)
      11. │         └─tidyselect:::walk_data_tree(expr, data_mask, context_mask)
      12. │           └─tidyselect:::eval_c(expr, data_mask, context_mask)
      13. │             └─tidyselect:::reduce_sels(node, data_mask, context_mask, init = init)
      14. │               └─tidyselect:::walk_data_tree(new, data_mask, context_mask)
      15. │                 └─tidyselect:::as_indices_sel_impl(...)
      16. │                   └─tidyselect:::as_indices_impl(...)
      17. │                     └─tidyselect:::chr_as_locations(x, vars, call = call, arg = arg)
      18. │                       └─vctrs::vec_as_location(...)
      19. └─vctrs (local) `<fn>`() at vctrs/R/subscript-loc.R:84:3
      20.   └─vctrs:::stop_subscript_oob(...)
      21.     └─vctrs:::stop_subscript(...) at vctrs/R/subscript-loc.R:503:3
      22.       └─rlang::abort(...) at vctrs/R/subscript.R:150:3
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         3. ├─dplyr::rename(., Value = !!rlang::sym("V1"))
         4. ├─dplyr:::rename.data.frame(., Value = !!rlang::sym("V1"))
         5. │ └─tidyselect::eval_rename(expr(c(...)), .data)
         6. │   └─tidyselect:::rename_impl(...)
         7. │     └─tidyselect:::eval_select_impl(...)
         8. │       ├─tidyselect:::with_subscript_errors(...)
         9. │       │ └─base::withCallingHandlers(...)
        10. │       └─tidyselect:::vars_select_eval(...)
        11. │         └─tidyselect:::walk_data_tree(expr, data_mask, context_mask)
        12. │           └─tidyselect:::eval_c(expr, data_mask, context_mask)
        13. │             └─tidyselect:::reduce_sels(node, data_mask, context_mask, init = init)
        14. │               └─tidyselect:::walk_data_tree(new, data_mask, context_mask)
        15. │                 └─tidyselect:::as_indices_sel_impl(...)
        16. │                   └─tidyselect:::as_indices_impl(...)
        17. │                     └─tidyselect:::chr_as_locations(x, vars, call = call, arg = arg)
        18. │                       └─vctrs::vec_as_location(...)
        19. └─vctrs (local) `<fn>`() at vctrs/R/subscript-loc.R:84:3
        20.   └─vctrs:::stop_subscript_oob(...)
        21.     └─vctrs:::stop_subscript(...) at vctrs/R/subscript-loc.R:503:3
        22.       └─rlang::abort(...) at vctrs/R/subscript.R:150:3
       
       [ FAIL 21 | WARN 0 | SKIP 0 | PASS 20 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# gt (1.4.0)

* GitHub: <https://github.com/rstudio/gt>
* Email: <mailto:rich@posit.co>
* GitHub mirror: <https://github.com/cran/gt>

Run `revdepcheck::revdep_details(, "gt")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         | \midrule\addlinespace[2.5pt]
         | \shortstack[l]{\parbox{\linewidth}{\strut 123  \\(0.1234) this is super wide. like super wide. such a wide column\strut\textsuperscript{\textit{1,2}} }} & testA & testB & testC \\ 
         | \textsuperscript{\textit{3}}val & test1 & test2 & test3 \\ 
         | \bottomrule
         | \end{tabular*}
         | \begin{minipage}{\linewidth}
         | \vspace{.05em}
         | {\textsuperscript{\textit{1}}FOOTNOTE<br> this}\\
         | {\textsuperscript{\textit{2}}FOOTNOTE2<br> this}\\
         | {\textsuperscript{\textit{3}}FOOTNOTE3<br> this}\\
         | \end{minipage}
         | \end{table}
         | 
       ── Error ('test-row_group_order.R:71:3'): Styling at various locations is kept when using `row_group_order()` ──
       Error in `summarise(.data, ..., .by = {     {         .by     } }, .groups = .groups)`: i In argument: `styles = list(as_style(styles))`.
       i In group 1: `locname = "summary_cells"`, `grpname = "2018-02-10"`, `colname = NA`, `locnum = 5`, `rownum = 4.01`, `colnum = 0`.
       Caused by error in `as_style()`:
       ! All provided styles should be generated by stylizing helper functions.
       * Style with index `1` is invalid.
       
       [ FAIL 4 | WARN 0 | SKIP 5 | PASS 884 ]
       Deleting unused snapshots: 'extract_body.md'
       Error:
       ! Test failures.
       Execution halted
     ```

# gtExtras (0.6.2)

* GitHub: <https://github.com/jthomasmock/gtExtras>
* Email: <mailto:j.thomasmock@gmail.com>
* GitHub mirror: <https://github.com/cran/gtExtras>

Run `revdepcheck::revdep_details(, "gtExtras")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-gt_plt_bar.R:3:3', 'test-gt_plt_conf_int.R:3:3',
         'test-gt_plt_conf_int.R:60:3', 'test-gt_summary_table.R:25:3',
         'test-gt_text_img.R:3:3', 'test-gtsave_extra.R:4:3',
         'test-html-helpers.R:24:3', 'test-icon_fun.R:3:3', 'test-img_header.R:3:3',
         'test-two-column-layouts.R:4:3', 'test-two-column-layouts.R:27:3',
         'test_test-gt_pct_bar.R:5:3', 'test_test-gt_pct_bar.R:81:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-gt_add_divider.R:4:3'): divider has border and type ────────────
       Error in `summarise(.data, ..., .by = {     {         .by     } }, .groups = .groups)`: i In argument: `styles = list(as_style(styles))`.
       i In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname = "cyl"`, `locnum = 4`, `rownum = -1`, `colnum = 2`.
       Caused by error in `as_style()`:
       ! All provided styles should be generated by stylizing helper functions.
       * Style with index `1` is invalid.
       ── Error ('test-gt_add_divider.R:31:3'): divider has border and type on far right ──
       Error in `summarise(.data, ..., .by = {     {         .by     } }, .groups = .groups)`: i In argument: `styles = list(as_style(styles))`.
       i In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname = "carb"`, `locnum = 4`, `rownum = -1`, `colnum = 11`.
       Caused by error in `as_style()`:
       ! All provided styles should be generated by stylizing helper functions.
       * Style with index `1` is invalid.
       
       [ FAIL 2 | WARN 0 | SKIP 25 | PASS 95 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# gtregression (1.2.0)

* GitHub: <https://github.com/ThinkDenominator/gtregression>
* Email: <mailto:rubesh@thinkdenominator.com>
* GitHub mirror: <https://github.com/cran/gtregression>

Run `revdepcheck::revdep_details(, "gtregression")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     • Style with index `1` is invalid.
     Backtrace:
          ▆
       1. ├─base (local) `<fn>`(x)
       2. ├─gt:::print.gt_tbl(x)
       3. │ ├─htmltools::as.tags(x, ...)
       4. │ └─gt:::as.tags.gt_tbl(x, ...)
       5. │   ├─htmltools::HTML(render_as_html(data = x))
       6. │   └─gt:::render_as_html(data = x)
       7. │     └─gt:::build_data(data = data, context = "html")
       8. │       └─gt:::resolve_footnotes_styles(data = data, tbl_type = "styles")
       9. │         ├─dplyr::summarize(...)
      10. │         └─dplyr:::summarise.data.frame(...)
      11. │           └─dplyr::summarise(...)
      12. │             └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
      13. │               ├─base::withCallingHandlers(...)
      14. │               └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      15. │                 └─base::lapply(.x, .f, ...)
      16. │                   └─dplyr (local) FUN(X[[i]], ...)
      17. │                     └─mask$eval_all_summarise(quo)
      18. │                       └─dplyr (local) eval()
      19. └─gt:::as_style(styles)
      20.   └─cli::cli_abort(...)
      21.     └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         'test-gtregression_app.R:90:3', 'test-gtregression_app.R:111:3',
         'test-gtregression_app.R:134:3', 'test-gtregression_app.R:166:3',
         'test-gtregression_app.R:199:3', 'test-gtregression_app.R:216:3',
         'test-gtregression_app.R:232:3', 'test-gtregression_app.R:245:3',
         'test-gtregression_app.R:258:3', 'test-gtregression_app.R:272:3',
         'test-gtregression_app.R:283:3', 'test-gtregression_app.R:304:3',
         'test-gtregression_app.R:326:3', 'test-identify_confounder.R:3:1',
         'test-merge_tables.R:3:1', 'test-modify_table.R:3:1', 'test-plot_reg.R:3:1',
         'test-plot_reg_combine.R:3:1', 'test-risk_difference-ecosystem.R:3:1',
         'test-save_functions.R:3:1', 'test-stratified_uni_reg.R:3:1',
         'test-surv_reg.R:3:1', 'test-variable_labels.R:3:1'
       • package sources are not available (1): 'test-compat-null-default.R:17:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-risk_difference.R:861:3'): printing, accessors and save_table() work ──
       Error in `summarise(.data, ..., .by = {     {         .by     } }, .groups = .groups)`: i In argument: `styles = list(as_style(styles))`.
       i In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname = "Group"`, `locnum = 4`, `rownum = -1`, `colnum = 1`.
       Caused by error in `as_style()`:
       ! All provided styles should be generated by stylizing helper functions.
       * Style with index `1` is invalid.
       
       [ FAIL 1 | WARN 0 | SKIP 131 | PASS 1916 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     
     --- re-building ‘regression-tables.Rmd’ using rmarkdown
     --- finished re-building ‘regression-tables.Rmd’
     
     --- re-building ‘risk-difference.Rmd’ using rmarkdown
     --- finished re-building ‘risk-difference.Rmd’
     
     --- re-building ‘special-models.Rmd’ using rmarkdown
     --- finished re-building ‘special-models.Rmd’
     
     --- re-building ‘stratified-analysis.Rmd’ using rmarkdown
     --- finished re-building ‘stratified-analysis.Rmd’
     
     --- re-building ‘survival-analysis.Rmd’ using rmarkdown
     --- finished re-building ‘survival-analysis.Rmd’
     
     --- re-building ‘visualise-results.Rmd’ using rmarkdown
     --- finished re-building ‘visualise-results.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘confounding-interaction.Rmd’ ‘descriptive-tables.Rmd’
       ‘diagnostics-selection.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# gtstats (1.0.0)

* GitHub: <https://github.com/thinkdenominator/gtstats>
* Email: <mailto:rubesh@thinkdenominator.com>
* GitHub mirror: <https://github.com/cran/gtstats>

Run `revdepcheck::revdep_details(, "gtstats")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     • Style with index `1` is invalid.
     Backtrace:
          ▆
       1. ├─base (local) `<fn>`(x)
       2. ├─gt:::print.gt_tbl(x)
       3. │ ├─htmltools::as.tags(x, ...)
       4. │ └─gt:::as.tags.gt_tbl(x, ...)
       5. │   ├─htmltools::HTML(render_as_html(data = x))
       6. │   └─gt:::render_as_html(data = x)
       7. │     └─gt:::build_data(data = data, context = "html")
       8. │       └─gt:::resolve_footnotes_styles(data = data, tbl_type = "styles")
       9. │         ├─dplyr::summarize(...)
      10. │         └─dplyr:::summarise.data.frame(...)
      11. │           └─dplyr::summarise(...)
      12. │             └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
      13. │               ├─base::withCallingHandlers(...)
      14. │               └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      15. │                 └─base::lapply(.x, .f, ...)
      16. │                   └─dplyr (local) FUN(X[[i]], ...)
      17. │                     └─mask$eval_all_summarise(quo)
      18. │                       └─dplyr (local) eval()
      19. └─gt:::as_style(styles)
      20.   └─cli::cli_abort(...)
      21.     └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-compare_groups.R:642:3'): paired output identifies within-pair estimates and exclusions ──
       Error in `summarise(.data, ..., .by = {     {         .by     } }, .groups = .groups)`: i In argument: `styles = list(as_style(styles))`.
       i In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname = "Variable"`, `locnum = 4`, `rownum = -1`, `colnum = 1`.
       Caused by error in `as_style()`:
       ! All provided styles should be generated by stylizing helper functions.
       * Style with index `1` is invalid.
       ── Error ('test-compare_groups.R:680:3'): repeated-measures ANOVA table flags the sphericity review ──
       Error in `summarise(.data, ..., .by = {     {         .by     } }, .groups = .groups)`: i In argument: `styles = list(as_style(styles))`.
       i In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname = "Variable"`, `locnum = 4`, `rownum = -1`, `colnum = 1`.
       Caused by error in `as_style()`:
       ! All provided styles should be generated by stylizing helper functions.
       * Style with index `1` is invalid.
       ── Error ('test-save_outputs.R:36:3'): save_output() saves html from a gt_tbl object ──
       Error in `summarise(.data, ..., .by = {     {         .by     } }, .groups = .groups)`: i In argument: `styles = list(as_style(styles))`.
       i In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname = "Characteristic"`, `locnum = 4`, `rownum = -1`, `colnum = 1`.
       Caused by error in `as_style()`:
       ! All provided styles should be generated by stylizing helper functions.
       * Style with index `1` is invalid.
       
       [ FAIL 3 | WARN 0 | SKIP 2 | PASS 1805 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     --- failed re-building ‘descriptive-tables.Rmd’
     
     --- re-building ‘function-options.Rmd’ using rmarkdown
     --- finished re-building ‘function-options.Rmd’
     
     --- re-building ‘getting-started.Rmd’ using rmarkdown
     --- finished re-building ‘getting-started.Rmd’
     
     --- re-building ‘gtstats-manual.Rmd’ using rmarkdown
     --- finished re-building ‘gtstats-manual.Rmd’
     
     --- re-building ‘inferential-tests.Rmd’ using rmarkdown
     --- finished re-building ‘inferential-tests.Rmd’
     
     --- re-building ‘missing-data-denominators.Rmd’ using rmarkdown
     --- finished re-building ‘missing-data-denominators.Rmd’
     
     --- re-building ‘teaching-datasets.Rmd’ using rmarkdown
     --- finished re-building ‘teaching-datasets.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘descriptive-tables.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# handwriter (3.2.4)

* GitHub: <https://github.com/CSAFE-ISU/handwriter>
* Email: <mailto:srein@iastate.edu>
* GitHub mirror: <https://github.com/cran/handwriter>

Run `revdepcheck::revdep_details(, "handwriter")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `attr(expected, 'row.names')` is an integer vector (1, 2, 3, 4)
       
       ── Failure ('test-cluster_profiles.R:40:3'): Get cluster fill rates works with writer and doc indices ──
       Expected `actual` to equal `expected`.
       Differences:
       `attr(actual, 'row.names')` is a character vector ('1', '2', '3', '4')
       `attr(expected, 'row.names')` is an integer vector (1, 2, 3, 4)
       
       ── Failure ('test-cluster_profiles.R:84:3'): Get writer profiles works with rates without writer or doc indices ──
       Expected `actual` to equal `expected`.
       Differences:
       `attr(actual, 'row.names')` is a character vector ('1', '2', '3', '4')
       `attr(expected, 'row.names')` is an integer vector (1, 2, 3, 4)
       
       ── Failure ('test-cluster_profiles.R:99:3'): Get writer profiles works with rates with writer and doc indices ──
       Expected `actual` to equal `expected`.
       Differences:
       `attr(actual, 'row.names')` is a character vector ('1', '2', '3', '4')
       `attr(expected, 'row.names')` is an integer vector (1, 2, 3, 4)
       
       
       [ FAIL 4 | WARN 0 | SKIP 3 | PASS 102 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# handwriterRF (1.1.1)

* GitHub: <https://github.com/CSAFE-ISU/handwriterRF>
* Email: <mailto:reinders.stephanie@gmail.com>
* GitHub mirror: <https://github.com/cran/handwriterRF>

Run `revdepcheck::revdep_details(, "handwriterRF")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Loading graphs for w0030_s01_pWOZ_r02_proclist.rds
       Getting cluster assignments for w0030_s01_pWOZ_r02
       Saving cluster assignments for  w0030_s01_pWOZ_r02 
       
       duckdb keeps downloaded extensions and secrets in a temporary directory:
       i /tmp/RtmpBdh5w0/working_dir/Rtmpcwk1vP/duckdb
       This is removed when the R session ends.
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Calculating distance between samples...
       Calculating similarity score...
       Calculating distance between samples...
       Calculating similarity score...
       Calculating distance between samples...
       Calculating similarity score...
       Calculating distance between samples...
       Calculating similarity score...
       Calculating SLR...
       Calculating distance between samples...
       Calculating similarity score...
       Calculating SLR...
       Killed
     ```

# HaploVar (0.1.2)

* Email: <mailto:tessamacnish@gmail.com>
* GitHub mirror: <https://github.com/cran/HaploVar>

Run `revdepcheck::revdep_details(, "HaploVar")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     Quitting from introduction.Rmd:78-82 [define_haplotypes]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/tibble_error_already_has_rownames>
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     ---
     Backtrace:
         ▆
      1. ├─HaploVar::define_haplotypes(vcf, LD, epsilon = 0.8)
      2. │ └─... %>% ...
      3. ├─dplyr::mutate_all(...)
      4. │ └─dplyr:::check_grouped(.tbl, "mutate", "all", alt = TRUE)
      5. │   └─dplyr::is_grouped_df(tbl)
      6. └─tibble::column_to_rownames(., "ID")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'introduction.Rmd' failed with diagnostics:
     `.data` must be a data frame without row names.
     --- failed re-building ‘introduction.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘introduction.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# headliner (0.0.3)

* GitHub: <https://github.com/rjake/headliner>
* Email: <mailto:rjake@sas.upenn.edu>
* GitHub mirror: <https://github.com/cran/headliner>

Run `revdepcheck::revdep_details(, "headliner")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
       2. ├─headliner::add_headline_column(...)
       3. │ ├─dplyr::select(...)
       4. │ ├─dplyr::mutate(...)
       5. │ ├─dplyr::ungroup(...)
       6. │ ├─dplyr::mutate(...)
       7. │ └─dplyr:::mutate.data.frame(...)
       8. │   └─dplyr::mutate(...)
       9. │     └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      10. │       ├─base::withCallingHandlers(...)
      11. │       └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      12. │         └─mask$eval_all_mutate(quo)
      13. │           └─dplyr (local) eval()
      14. ├─glue::glue(.data$headline, ...)
      15. │ └─glue::glue_data(...)
      16. ├─glue (local) `<fn>`("trend")
      17. │ ├─.transformer(expr, env) %||% .null
      18. │ └─glue (local) .transformer(expr, env)
      19. │   ├─glue:::with_glue_error(...)
      20. │   │ └─base::withCallingHandlers(...)
      21. │   └─base::eval(expr, envir)
      22. │     └─base::eval(expr, envir)
      23. └─base::.handleSimpleError(...)
      24.   └─glue (local) h(simpleError(msg, call))
      25.     └─rlang::abort(message, parent = cnd, call = NULL)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       ex. list(people = plural_phrasing("person", "people"))
       Backtrace:
            ▆
         1. ├─headliner::add_headline_column(...) at test-add-headline-column.R:119:3
         2. │ ├─purrr::map_dfr(...)
         3. │ │ └─purrr::map(.x, .f, ...)
         4. │ │   └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
         5. │ │     └─purrr:::vctrs_vec_compat(.x, .purrr_user_env)
         6. │ └─purrr::pmap(select(df_vals, -.data$headline), compare_values)
         7. │   └─purrr:::pmap_("list", .l, .f, ..., .progress = .progress)
         8. │     ├─purrr:::with_indexed_errors(...)
         9. │     │ └─base::withCallingHandlers(...)
        10. │     ├─purrr:::call_with_cleanup(...)
        11. │     └─headliner (local) .f(...)
        12. │       └─headliner:::return_plural_phrases(plural_phrases, delta = calc$abs_delta)
        13. │         └─base::stop(...)
        14. └─base::.handleSimpleError(...)
        15.   └─purrr (local) h(simpleError(msg, call))
        16.     └─cli::cli_abort(...)
        17.       └─rlang::abort(...)
       
       [ FAIL 3 | WARN 4 | SKIP 0 | PASS 104 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# healthdb (0.5.1)

* GitHub: <https://github.com/KevinHzq/healthdb>
* Email: <mailto:kevin.hu@bccdc.ca>
* GitHub mirror: <https://github.com/cran/healthdb>

Run `revdepcheck::revdep_details(, "healthdb")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       i Identify records with condition(s):
       * where at least one of the diagx, diagx_1, diagx_2 column(s) in each record
       * contains a value exactly matched values in set: letters
       i Identify records with condition(s):
       * where at least one of the diagx, diagx_1, diagx_2 column(s) in each record
       * contains a value exactly matched values in set: 1:10
       [ FAIL 1 | WARN 125 | SKIP 7 | PASS 282 ]
       
       ══ Skipped tests (7) ═══════════════════════════════════════════════════════════
       • On CRAN (7): 'test-define_case.R:42:3', 'test-define_case_with_age.R:69:3',
         'test-if_dates.R:2:3', 'test-if_dates.R:26:3', 'test-if_dates.R:33:3',
         'test-restrict_dates_sql.R:26:3', 'test-restrict_dates_sql.R:101:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-fetch_var.R:115:3'): not one to one warning works ────────────
       Expected `.` to throw a warning.
       Backtrace:
           ▆
        1. ├─... %>% expect_warning() at test-fetch_var.R:115:3
        2. └─testthat::expect_warning(.)
       
       [ FAIL 1 | WARN 125 | SKIP 7 | PASS 282 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# heemod (1.1.0)

* GitHub: <https://github.com/aphp/heemod>
* Email: <mailto:kevin.zarca@gmail.com>
* GitHub mirror: <https://github.com/cran/heemod>

Run `revdepcheck::revdep_details(, "heemod")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `expected`: "Scenario 2" "Scenario 4" "Scenario 5" "Scenario 7"
       
       ── Failure ('test_efficiency_frontier.R:128:5'): Identify Frontier Scenarios ───
       Expected `result8` to equal `c("Scenario 1", "Scenario 2")`.
       Differences:
       `actual`:   "Scenario 2"             
       `expected`: "Scenario 1" "Scenario 2"
       
       ── Failure ('test_efficiency_frontier.R:206:5'): Identify Frontier Scenarios ───
       Expected `result13` to equal `c("Scenario 2", "Scenario 3")`.
       Differences:
       `actual`:   "Scenario 3"             
       `expected`: "Scenario 2" "Scenario 3"
       
       ── Failure ('test_run_model.R:234:5'): run_model behaves as expected ───────────
       Expected `s_mod$frontier` to equal `c("I", "II")`.
       Differences:
       `actual`:   "II"     
       `expected`: "I"  "II"
       
       
       [ FAIL 10 | WARN 0 | SKIP 1 | PASS 504 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# hmetad (0.2.0)

* GitHub: <https://github.com/metacoglab/hmetad>
* Email: <mailto:kevin.o'neill@ucl.ac.uk>
* GitHub mirror: <https://github.com/cran/hmetad>

Run `revdepcheck::revdep_details(, "hmetad")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `hmetad` has inferred that there are K=4 confidence levels in the data. If this is incorrect, please set this manually using the argument `K=<K>`
       
       `hmetad` has inferred that there are K=4 confidence levels in the data. If this is incorrect, please set this manually using the argument `K=<K>`
       
       `hmetad` has inferred that there are K=4 confidence levels in the data. If this is incorrect, please set this manually using the argument `K=<K>`
       
       `hmetad` has inferred that there are K=4 confidence levels in the data. If this is incorrect, please set this manually using the argument `K=<K>`
       
       [ FAIL 1 | WARN 0 | SKIP 1 | PASS 71 ]
       
       ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
       • On CRAN (1): 'test-draws.R:2:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-hmetad.R:44:3'): aggregate_metad works ───────────────────────
       Expected `aggregate_metad(tibble(), K = 2)` to equal `tibble(...)`.
       Differences:
       `dimnames(actual$N)[[1]]` is a character vector ('1')
       `dimnames(expected$N)[[1]]` is NULL
       
       
       [ FAIL 1 | WARN 0 | SKIP 1 | PASS 71 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# ideanet (1.1.1)

* Email: <mailto:tom.wolff@northwestern.edu>
* GitHub mirror: <https://github.com/cran/ideanet>

Run `revdepcheck::revdep_details(, "ideanet")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     
     Warning in triad_census_impl(graph = graph) :
       Triad census called on an undirected graph. All connections will be treated as mutual.
     Source: misc/motifs.c:1157
     Warning in eigen_centralization(g, directed = FALSE) :
       Eigenvector centralization calculated only for largest weak component.
     Processing aggregate network of all edge types
     Warning in basic_netwrite(data_type = data_type, adjacency_matrix = adjacency_matrix,  :
       NAs introduced by coercion
     Warning in bonacich_igraph(g, directed = as.logical(directed), message = message) :
       (Bonacich power centrality) Isolates detected in network. Isolates will be removed from network when calculating power centrality measure, and will be assigned NA values in final output.
     Warning in bonacich_igraph(g, directed = as.logical(directed), bpct = -0.75,  :
       (Bonacich power centrality) Isolates detected in network. Isolates will be removed from network when calculating power centrality measure, and will be assigned NA values in final output.
     Warning in eigen_igraph(g, directed = as.logical(directed), message = message) :
       (Eigenvector centrality) Isolates detected in network. Isolates will be removed from network when calculating eigenvector centrality measure, and will be assigned NA values in final output.
     
     Warning in triad_census_impl(graph = graph) :
       Triad census called on an undirected graph. All connections will be treated as mutual.
     Source: misc/motifs.c:1157
     Warning in stats::cor(tie_set) : the standard deviation is zero
     Error in igraph::distances(g, mode = "out", weights = 1/igraph::edge_attr(g,  : 
       Weights must not contain NaN values. Invalid value
     Source: paths/dijkstra.c:128
     Calls: netwrite ... closeness_centralization -> closeness_igraph -> <Anonymous>
     Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     <error/rlang_error>
     Error in `igraph::distances()`:
     ! Weights must not contain NaN values. Invalid value
     Source: paths/dijkstra.c:128
     ---
     Backtrace:
         ▆
      1. └─ideanet::netwrite(...)
      2.   └─ideanet:::multi_netwrite(...)
      3.     └─ideanet:::basic_netwrite(...)
      4.       └─ideanet:::closeness_centralization(...)
      5.         └─ideanet:::closeness_igraph(g, directed = FALSE, weight_type = weight_type)
      6.           └─igraph::distances(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'roles.Rmd' failed with diagnostics:
     Weights must not contain NaN values. Invalid value
     Source: paths/dijkstra.c:128
     --- failed re-building ‘roles.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘CHAMP.Rmd’ ‘netwrite.Rmd’ ‘roles.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# important (0.2.1)

* GitHub: <https://github.com/tidymodels/important>
* Email: <mailto:max@posit.co>
* GitHub mirror: <https://github.com/cran/important>

Run `revdepcheck::revdep_details(, "important")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-step_predictor_best.R:193:3'): tunable is setup to work with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-step_predictor_best.R:193:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       ── Error ('test-step_predictor_desirability.R:235:3'): tunable is setup to work with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-step_predictor_desirability.R:235:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       
       [ FAIL 2 | WARN 0 | SKIP 24 | PASS 241 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# iNEXT.beta3D (1.0.2)

* GitHub: <https://github.com/AnneChao/iNEXT.beta3D>
* Email: <mailto:chao@stat.nthu.edu.tw>
* GitHub mirror: <https://github.com/cran/iNEXT.beta3D>

Run `revdepcheck::revdep_details(, "iNEXT.beta3D")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     3   Marim Pooled assemblage 302   119 0.8550489 0.9691303 44 34 17  9  7
     4   Marim  Joint assemblage 302   164 0.6962636 0.8756356 92 41 15  9  1
     5  Rebio2              Edge 162    70 0.7543832 0.8953373 40 17  4  2  0
     6  Rebio2          Interior 168    74 0.7628279 0.8765096 40 13  8  4  4
     7  Rebio2 Pooled assemblage 330   118 0.8185128 0.9005247 60 18 15  5  3
     8  Rebio2  Joint assemblage 330   144 0.7581271 0.8859099 80 30 12  6  4
     > 
     > 
     > ## (Data Information) Taxonomic diversity for incidence data
     > data(Second_growth_forests)
     > info_TD_inci = DataInfobeta3D(data = Second_growth_forests, diversity = 'TD',
     +                               datatype = 'incidence_raw')
     Error in `column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─iNEXT.beta3D::DataInfobeta3D(...)
      2. │ └─base::lapply(...)
      3. │   └─iNEXT.beta3D (local) FUN(X[[i]], ...)
      4. │     └─tmp1 %>% column_to_rownames(var = "Species")
      5. └─tibble::column_to_rownames(., var = "Species")
      6.   └─tibble:::abort_already_has_rownames()
      7.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      8.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       > library(iNEXT.beta3D)
       > 
       > test_check("iNEXT.beta3D")
       Saving _problems/test-iNEXT.beta3D-33.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 10 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-iNEXT.beta3D.R:31:3'): iNEXTbeta3D ─────────────────────────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `column_to_rownames(.)`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─iNEXT.beta3D::iNEXTbeta3D(...) at test-iNEXT.beta3D.R:31:3
        2. │ └─pool.data %>% column_to_rownames() %>% rowSums
        3. ├─base::rowSums(.)
        4. │ └─base::is.data.frame(x)
        5. └─tibble::column_to_rownames(.)
        6.   └─tibble:::abort_already_has_rownames()
        7.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        8.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 10 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# infer (1.1.0)

* GitHub: <https://github.com/tidymodels/infer>
* Email: <mailto:simon.couch@posit.co>
* GitHub mirror: <https://github.com/cran/infer>

Run `revdepcheck::revdep_details(, "infer")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Differences:
       `names(actual)` is a character vector ('df')
       `names(expected)` is absent
       
       ── Failure ('test-wrappers.R:452:3'): prop_test handles >2 explanatory levels gracefully ──
       Expected `res_1$statistic` to equal `res_old$statistic`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('X-squared')
       
       ── Failure ('test-wrappers.R:453:3'): prop_test handles >2 explanatory levels gracefully ──
       Expected `res_1$chisq_df` to equal `res_old$parameter`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('df')
       
       
       [ FAIL 10 | WARN 0 | SKIP 111 | PASS 490 ]
       Deleting unused snapshots: 'visualize/viz-fit-bare.svg',
       'visualize/viz-fit-conf-int.svg', 'visualize/viz-fit-no-h0.svg',
       'visualize/viz-fit-p-val-both.svg', 'visualize/viz-fit-p-val-left.svg', and
       'visualize/viz-fit-p-val-right.svg'
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking dependencies in R code ... NOTE
     ```
     Namespace in Imports field not imported from: ‘withr’
       All declared Imports should be used.
     ```

# invivoPKfit (2.0.2)

* Email: <mailto:wambaugh.john@epa.gov>
* GitHub mirror: <https://github.com/cran/invivoPKfit>

Run `revdepcheck::revdep_details(, "invivoPKfit")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         \- + Summary Group: [Route--Media--Dose]
       
       
       settings_preprocess(suppress.messages = TRUE): settings_preprocess already present; new settings_preprocess will replace the existing one
       v Current Modeling Structure:
       Data Group: [Chemical--Species]
       \- + Error Group: [Reference]
         \- + Summary Group: [Route--Media--Dose]
       
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 101 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-pk_methods_coef_sd.R:3:3'): coef_sd.pk() proceeds without error ──
       Expected `coef_sd(test_pk)` not to throw any errors.
       Actually got a <dplyr:::mutate_error> with message:
         i In argument: `sd_tbl = list(...)`.
         i In row 1.
         Caused by error in `data.frame()`:
         ! arguments imply differing number of rows: 0, 5
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 101 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# iNZightTools (2.0.4)

* GitHub: <https://github.com/iNZightVIT/iNZightTools>
* Email: <mailto:tom.elliott@auckland.ac.nz>
* GitHub mirror: <https://github.com/cran/iNZightTools>

Run `revdepcheck::revdep_details(, "iNZightTools")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
           set_names
       
       The following objects are masked from 'package:testthat':
       
           equals, is_less_than, not
       
       [ FAIL 2 | WARN 0 | SKIP 4 | PASS 378 ]
       
       ══ Skipped tests (4) ═══════════════════════════════════════════════════════════
       • On CRAN (2): 'test_smart_read.R:29:5', 'test_smart_read.R:259:5'
       • URL not available. (1): 'test_smart_read.R:209:5'
       • {surveyspec} is not installed (1): 'test_survey_design.R:6:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test_aggregate_data.R:71:5'): Aggregating survey data is valid ────
       Expected `... <- NULL` to run silently.
       Actual noise: messages.
       ── Failure ('test_join_data.R:16:5'): Auto detection works ─────────────────────
       Expected `join_data(iris, iris)` to throw a warning.
       
       [ FAIL 2 | WARN 0 | SKIP 4 | PASS 378 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# IPEDSuploadables (3.0.1)

* GitHub: <https://github.com/AlisonLanski/IPEDSuploadables>
* Email: <mailto:alanski@nd.edu>
* GitHub mirror: <https://github.com/cran/IPEDSuploadables>

Run `revdepcheck::revdep_details(, "IPEDSuploadables")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(IPEDSuploadables)
       This version of IPEDSuploadables has been updated for 
       the 2025-2026 reporting cycle.
       If you are in a later cycle or want to capture any bug fixes,
       please update the package.
       > 
       > test_check("IPEDSuploadables")
       Saving _problems/test-prep-scripts-158.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 87 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-prep-scripts.R:158:3'): prep for COM handles CIPs appropriately ──
       Expected `toString(prep_com_data_frame(com_df2)$MAJORCIP)` to equal "00.0000, 11.1111, 04.0000".
       Differences:
       1/1 mismatches
       x[1]: "00.0000, 11.0000, 04.0000"
       y[1]: "00.0000, 11.1111, 04.0000"
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 87 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# jpcity (0.3.0)

* GitHub: <https://github.com/UchidaMizuki/jpcity>
* Email: <mailto:uchidamizuki@vivaldi.net>
* GitHub mirror: <https://github.com/cran/jpcity>

Run `revdepcheck::revdep_details(, "jpcity")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Backtrace:
           ▆
        1. ├─testthat::expect_equal(city_code(out[[1]]), c("01104", "01108")) at test-city_convert.R:4:3
        2. │ └─testthat::quasi_label(enquo(object), label)
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. └─jpcity::city_code(out[[1]])
        5.   └─jpcity:::assert_city(city)
        6.     └─cli::cli_abort("{.arg {name}} must inherit from {.cls city}.")
        7.       └─rlang::abort(...)
       ── Error ('test-city_convert.R:22:3'): city_convert-02 ─────────────────────────
       Error in `assert_city(city)`: `city` must inherit from <city>.
       Backtrace:
           ▆
        1. ├─testthat::expect_equal(city_code(out), "04403") at test-city_convert.R:22:3
        2. │ └─testthat::quasi_label(enquo(object), label)
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. └─jpcity::city_code(out)
        5.   └─jpcity:::assert_city(city)
        6.     └─cli::cli_abort("{.arg {name}} must inherit from {.cls city}.")
        7.       └─rlang::abort(...)
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 21 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# junco (0.1.7)

* GitHub: <https://github.com/johnsonandjohnson/junco>
* Email: <mailto:gabembecker@gmail.com>
* GitHub mirror: <https://github.com/cran/junco>

Run `revdepcheck::revdep_details(, "junco")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
               Treatment (B: Placebo vs. A: Drug X)       0.38 (0.16)     0.016      1.46     (1.07, 2.00)
               Treatment (C: Combination vs. A: Drug X)   0.67 (0.17)    <0.001      1.94     (1.40, 2.70)
       -       Sex (M vs. F)                              -0.17 (0.13)    0.204      0.84     (0.65, 1.10)
       +       SEX (M vs. F)                              -0.17 (0.13)    0.204      0.84     (0.65, 1.10)
       -       Age                                        0.01 (0.01)     0.189      1.01     (0.99, 1.04)
       +       AGE                                        0.01 (0.01)     0.189      1.01     (0.99, 1.04)
           MEDIUM                                                                                         
             Model Parameter                                                                              
               Treatment (B: Placebo vs. A: Drug X)       0.50 (0.16)     0.002      1.65     (1.20, 2.26)
               Treatment (C: Combination vs. A: Drug X)   0.65 (0.17)    <0.001      1.91     (1.37, 2.66)
       -       Sex (M vs. F)                              -0.15 (0.14)    0.280      0.86     (0.66, 1.13)
       +       SEX (M vs. F)                              -0.15 (0.14)    0.280      0.86     (0.66, 1.13)
       and 7 more ...
       
       
       ── Snapshots ───────────────────────────────────────────────────────────────────
       To review and process snapshots locally:
       * Locate check directory.
       * Copy 'tests/testthat/_snaps' to local package.
       * Run `testthat::snapshot_accept()` to accept all changes.
       * Run `testthat::snapshot_review()` to review all changes.
       [ FAIL 4 | WARN 0 | SKIP 45 | PASS 1635 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# kindling (0.3.2)

* GitHub: <https://github.com/joshuamarie/kindling>
* Email: <mailto:joshua.marie.k@gmail.com>
* GitHub mirror: <https://github.com/cran/kindling>

Run `revdepcheck::revdep_details(, "kindling")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpNGrUhm/working_dir/RtmpeN7F4J/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# ldmppr (1.1.3)

* GitHub: <https://github.com/lanedrew/ldmppr>
* Email: <mailto:lanetdrew@gmail.com>
* GitHub mirror: <https://github.com/cran/ldmppr>

Run `revdepcheck::revdep_details(, "ldmppr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Saving _problems/test-mark_model_io-90.R
       [ FAIL 1 | WARN 0 | SKIP 2 | PASS 10 ]
       
       ══ Skipped tests (2) ═══════════════════════════════════════════════════════════
       • On CRAN (2): 'test-model_check.R:2:3', 'test-simulate_mpp.R:2:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-mark_model_io.R:77:3'): save_mark_model/load_mark_model roundtrip preserves predictions (ranger) ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = purrr::map(call_info, eval_call_info)`.
       Caused by error in `purrr::map()`:
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       
       [ FAIL 1 | WARN 0 | SKIP 2 | PASS 10 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# libr (1.4.2)

* GitHub: <https://github.com/dbosak01/libr>
* Email: <mailto:dbosak01@gmail.com>
* GitHub mirror: <https://github.com/cran/libr>

Run `revdepcheck::revdep_details(, "libr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > library(testthat)
       > library(libr)
       Loading required package: common
       > 
       > test_check("libr")
       Saving _problems/test-datastep-367.R
       # library 'dat': 2 items
       - attributes: csv not loaded
       - path: ./data
       - items:
                Name Extension Rows Cols    Size        LastModified
       1 demo_studya       csv   10    9 11.7 Kb 2026-10-22 11:44:51
       2 demo_studyb       csv    2    9 10.7 Kb 2026-10-22 11:44:51
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 573 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-datastep.R:367:3'): ds15: datastep() attributes on data are maintained. ──
       Expected `attr(prep$USUBJID, "label")` to equal "Unique Subject Identifier".
       Differences:
       target is NULL, current is character
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 573 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# LightLogR (0.10.6)

* GitHub: <https://github.com/tscnlab/LightLogR>
* Email: <mailto:johannes.zauner@tum.de>
* GitHub mirror: <https://github.com/cran/LightLogR>

Run `revdepcheck::revdep_details(, "LightLogR")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     +   filter.expression.reference =  as_date(Datetime) == min(as_date(Datetime)),
     +   shift.start = TRUE,
     +   across.id = "Day") %>%
     +   gg_reference()
     Joining with `by = join_by(Id, Day)`
     Joining with `by = join_by(Id, Day)`
     Adding missing grouping variables: `Id`
     Joining with `by = join_by(Id)`
     Joining with `by = join_by(Id)`
     Joining with `by = join_by(Id, Day)`
     Joining with `by = join_by(Id, Day)`
     Joining with `by = join_by(Id, Day)`
     Joining with `by = join_by(Id, Day)`
     Adding missing grouping variables: `Day`
     > 
     > #in this example, the Environment Data will be used as a reference
     > sample.data.environment %>%
     + data2reference(
     +   filter.expression.reference =  Id == "Environment",
     +   across.id = TRUE) %>%
     +   gg_reference()
     Error in int@start : 
       no applicable method for `@` applied to an object of class "numeric"
     Calls: %>% ... interval2state -> <Anonymous> -> %>% -> <Anonymous>
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       Expected `res_no_gap_handle <- add_clusters(data_gappy_ac, Value, cluster.duration = "1 hour")` to throw a warning.
       ── Failure ('test-clusters.R:242:3'): add_clusters handle.gaps functionality ───
       Expected `... <- NULL` to throw a warning.
       ── Failure ('test-clusters.R:258:3'): add_clusters interaction with return.only.clusters=FALSE in extract_clusters ──
       Expected `result <- add_clusters(data_roc, Value, cluster.duration = "1 hour")` to throw a warning.
       ── Error ('test-data2reference.R:25:3'): data2reference works as expected ──────
       Error in `int@start`: no applicable method for `@` applied to an object of class "numeric"
       Backtrace:
            ▆
         1. ├─testthat::expect_equal(...) at test-data2reference.R:25:3
         2. │ └─testthat::quasi_label(enquo(object), label)
         3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
         4. ├─... %>% dplyr::pull(Reference)
         5. ├─dplyr::pull(., Reference)
         6. ├─LightLogR::data2reference(...)
         7. │ └─dataset %>% ...
         8. ├─LightLogR::interval2state(...)
         9. │ ├─lubridate::tz(...)
        10. │ └─State.interval.dataset[[Interval.colname.defused]] %>% ...
        11. └─lubridate::int_start(.)
       
       [ FAIL 7 | WARN 1 | SKIP 4 | PASS 1073 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# lionfish (1.0.27)

* Email: <mailto:matthias.medl@chello.at>
* GitHub mirror: <https://github.com/cran/lionfish>

Run `revdepcheck::revdep_details(, "lionfish")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘lionfish-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: get_guided_holes_better_history
     > ### Title: Get Guided Tour-Holes-Better History
     > ### Aliases: get_guided_holes_better_history
     > 
     > ### ** Examples
     > 
     > data("flea", package = "tourr")
     > flea <- flea[-7]
     > get_guided_holes_better_history(flea, 2)
     Converting input data to the required matrix format.
     Target: 0.723, try: 1
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmprYIYcF/working_dir/RtmpIaO2fJ/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     <error/rlang_error>
     Error:
     ! GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     ---
     Backtrace:
         ▆
      1. └─tourr::save_history(flea, tour_path = guided_tour(holes(), 1))
      2.   └─tourr (local) tour(step_size)
      3.     └─tourr (local) tour_path(proj[[length(proj)]], data, ...)
      4.       └─tourr (local) generator(current, data, tries, ...)
      5.         └─tourr (local) search_f(...)
      6.           ├─utils::tail(peak$index_val, 1)
      7.           └─utils:::tail.default(peak$index_val, 1)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'Plot-objects.Rmd' failed with diagnostics:
     GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘Plot-objects.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘Bioprocess-Optimization.Rmd’ ‘General-interactivity.Rmd’
       ‘Market-segmentation.Rmd’ ‘Plot-objects.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# lnmixsurv (3.1.7)

* Email: <mailto:viviana@dme.ufrj.br>
* GitHub mirror: <https://github.com/cran/lnmixsurv>

Run `revdepcheck::revdep_details(, "lnmixsurv")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmptw284A/working_dir/RtmptBL5IA/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# LongDat (1.1.4)

* GitHub: <https://github.com/CCY-dev/LongDat>
* Email: <mailto:jessica821112@gmail.com>
* GitHub mirror: <https://github.com/cran/LongDat>

Run `revdepcheck::revdep_details(, "LongDat")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     [1] "Finish unlisting tables from covariate model result."
     [1] "Start calculating effect size."
     [1] 1
     [1] 2
     [1] 3
     [1] "Finish calculating effect size."
     [1] "Start randomized negative control model test."
     [1] 1
     [1] 2
     [1] 3
     [1] 1
     [1] 2
     [1] 3
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─LongDat::longdat_disc(...)
      2. │ └─LongDat:::random_neg_ctrl_disc(...)
      3. │   └─... %>% tibble::column_to_rownames()
      4. └─tibble::column_to_rownames(.)
      5.   └─tibble:::abort_already_has_rownames()
      6.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      7.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     
     
     Quitting from LongDat_disc_tutorial.Rmd:107-115 [unnamed-chunk-7]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/tibble_error_already_has_rownames>
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     ---
     Backtrace:
         ▆
      1. ├─LongDat::longdat_disc(...)
      2. │ └─LongDat:::random_neg_ctrl_disc(...)
      3. │   └─... %>% tibble::column_to_rownames()
      4. └─tibble::column_to_rownames(.)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'LongDat_disc_tutorial.Rmd' failed with diagnostics:
     `.data` must be a data frame without row names.
     --- failed re-building ‘LongDat_disc_tutorial.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘LongDat_cont_tutorial.Rmd’ ‘LongDat_disc_tutorial.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# mantis (1.0.2)

* GitHub: <https://github.com/ropensci/mantis>
* Email: <mailto:phuongquan567@outlook.com>
* GitHub mirror: <https://github.com/cran/mantis>

Run `revdepcheck::revdep_details(, "mantis")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         9.             │ ├─base::withCallingHandlers(...)
        10.             │ └─vctrs::vec_recycle(value[[j]], nrow)
        11.             └─tibble:::fast_nrow(xo)
        12.               └─base::.row_names_info(x, 2L)
       ── Error ('test-report.R:546:3'): mantis_report() creates report in wd when no path supplied ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
            ▆
         1. └─mantis:::construct_rmd_tab(...)
         2.   └─mantis:::construct_tab_content(...)
         3.     └─mantis:::output_table_interactive(...)
         4.       └─mantis:::prepare_table(...)
         5.         ├─base::`$<-`(`*tmp*`, "alert_overall", value = `<lgl>`)
         6.         └─tibble:::`$<-.tbl_df`(`*tmp*`, "alert_overall", value = `<lgl>`)
         7.           └─tibble:::tbl_subassign(...)
         8.             ├─tibble:::vectbl_recycle_rhs_rows(...)
         9.             │ ├─base::withCallingHandlers(...)
        10.             │ └─vctrs::vec_recycle(value[[j]], nrow)
        11.             └─tibble:::fast_nrow(xo)
        12.               └─base::.row_names_info(x, 2L)
       
       [ FAIL 18 | WARN 0 | SKIP 3 | PASS 460 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# manydata (1.1.4)

* GitHub: <https://github.com/globalgov/manydata>
* Email: <mailto:james.hollway@graduateinstitute.ch>
* GitHub mirror: <https://github.com/cran/manydata>

Run `revdepcheck::revdep_details(, "manydata")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `names(expected)` is absent
       
       ── Failure ('test_resolve.R:47:3'): min works ──────────────────────────────────
       Expected `resolve_min(test, na.rm = FALSE)` to equal `c(NA, 3, NA)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3')
       `names(expected)` is absent
       
       ── Failure ('test_resolve.R:51:3'): max works ──────────────────────────────────
       Expected `resolve_max(test)` to equal `c(1, 6, 4.1)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3')
       `names(expected)` is absent
       
       ── Failure ('test_resolve.R:52:3'): max works ──────────────────────────────────
       Expected `resolve_max(test, na.rm = FALSE)` to equal `c(NA, 6, NA)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3')
       `names(expected)` is absent
       
       
       [ FAIL 13 | WARN 0 | SKIP 3 | PASS 113 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# manydist (0.5.1)

* GitHub: <https://github.com/alfonsoIodiceDE/manydist_package>
* Email: <mailto:iodicede@unina.it>
* GitHub mirror: <https://github.com/cran/manydist>

Run `revdepcheck::revdep_details(, "manydist")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpXwydOM/working_dir/RtmprTJe25/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# mappestRisk (0.1.2)

* GitHub: <https://github.com/EcologyR/mappestRisk>
* Email: <mailto:dario.ssm2@gmail.com>
* GitHub mirror: <https://github.com/cran/mappestRisk>

Run `revdepcheck::revdep_details(, "mappestRisk")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       [ FAIL 2 | WARN 1 | SKIP 3 | PASS 110 ]
       
       ══ Skipped tests (3) ═══════════════════════════════════════════════════════════
       • On CRAN (3): 'test-map_risk.R:69:3', 'test-map_risk.R:104:3',
         'test-map_risk.R:157:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-predict_curves.R:25:3'): predict_curves output has correct structure ──
       Expected `max(curves$temp)` to equal 45.9.
       Differences:
         `actual`: 47.5
       `expected`: 45.9
       
       ── Failure ('test-predict_curves.R:28:3'): predict_curves output has correct structure ──
       Expected `all(curves$dev_rate >= 0)` to be TRUE.
       Differences:
       `actual`:   <NA>
       `expected`: TRUE
       
       
       [ FAIL 2 | WARN 1 | SKIP 3 | PASS 110 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# mariposa (0.7.4)

* GitHub: <https://github.com/YannickDiehl/mariposa>
* Email: <mailto:yannick.diehl@gmail.com>
* GitHub mirror: <https://github.com/cran/mariposa>

Run `revdepcheck::revdep_details(, "mariposa")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-wilcoxon-test-spss-validation.R:286:3',
         'test-wilcoxon-test-spss-validation.R:292:3',
         'test-wilcoxon-test-spss-validation.R:302:5',
         'test-wilcoxon-test-spss-validation.R:354:3',
         'test-wilcoxon-test-spss-validation.R:361:3',
         'test-wilcoxon-test-spss-validation.R:368:3',
         'test-wilcoxon-test-spss-validation.R:383:3'
       • R/ sources not available (1): 'test-practice-PAR.R:775:3'
       • R/ sources not available (installed package) (2):
         'test-console-discipline.R:39:3', 'test-practice-X3.R:135:3'
       • VALIDATION_EXCEPTIONS.md is not part of this checkout (.claude/ is local).
         (1): 'test-validation-discipline.R:276:5'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-audit-regressions.R:945:3'): to_label() keeps the original codes for to_numeric() and to_labelled() ──
       Expected `as.vector(to_numeric(d2$x))` to equal `c(6, 42, 90, 91, 6)`.
       Differences:
         `actual`: 3.0  4.0  5.0  6.0 3.0
       `expected`: 6.0 42.0 90.0 91.0 6.0
       
       
       [ FAIL 1 | WARN 0 | SKIP 340 | PASS 6678 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# markovmix (0.1.3)

* GitHub: <https://github.com/zhuxr11/markovmix>
* Email: <mailto:zxr6@163.com>
* GitHub mirror: <https://github.com/cran/markovmix>

Run `revdepcheck::revdep_details(, "markovmix")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     D->C 0.3300031 0.273743455 0.3445027 0.05175070
     D->B 0.3206269 0.247143254 0.2616952 0.17053466
     D->A 0.1258605 0.405812159 0.2144274 0.25389985
     C->D 0.2586790 0.285838643 0.1684800 0.28700229
     C->C 0.3055365 0.125257225 0.3498336 0.21937264
     C->B 0.1535272 0.410280252 0.2298358 0.20635683
     C->A 0.2664894 0.318250696 0.2344705 0.18078936
     B->D 0.1890759 0.233990017 0.1749797 0.40195437
     B->C 0.2823159 0.295919556 0.1979818 0.22378273
     B->B 0.3323183 0.004687796 0.4334749 0.22951895
     B->A 0.1382159 0.323678663 0.1621925 0.37591291
     A->D 0.2400999 0.207556026 0.3182197 0.23412443
     A->C 0.2492100 0.215658801 0.2048697 0.33026151
     A->B 0.2925516 0.376612947 0.2669478 0.06388764
     A->A 0.3248371 0.224353935 0.2752404 0.17556854
     > 
     > # Reorder states by hand (using function name with additional arguments)
     > markov_mix_new2 <- restate(
     +   .object = markov_mix_ex,
     +   .fun = "levels<-",
     +   value = c("B", "D", "C", "A")
     + )
     > print(markov_mix_new2)
     Error: GetQueryResult: Error evaluating duckdb query: Binder Error: ENUM type requires at least one argument
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Fitting Markov chain with a single (non-mixture) component ...
       Fitting Markov chain with a single (non-mixture) component ...
       Fitting Markov chain with a single (non-mixture) component ...
       Fitting Markov chain with a single (non-mixture) component ...
       Fitting Markov chain with a single (non-mixture) component ...
       Fitting Markov chain with a single (non-mixture) component ...
       Fitting Markov chain with a single (non-mixture) component ...
       Fitting Markov chain with a single (non-mixture) component ...
       Fitting Markov chain with a single (non-mixture) component ...
       Saving _problems/test-markov_mix_utils-76.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 46 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-markov_mix_utils.R:73:3'): Reorganizing states in MarkovMix objects ──
       Expected `restate(...)` to throw a error.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 46 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# matrixset (0.4.1)

* GitHub: <https://github.com/pascalcroteau/matrixset>
* Email: <mailto:croteaupascl@gmail.com>
* GitHub mirror: <https://github.com/cran/matrixset>

Run `revdepcheck::revdep_details(, "matrixset")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `names(expected[[2]])` is a character vector ('mean', 'rg')
       
       `names(actual[[3]])` is absent
       `names(expected[[3]])` is a character vector ('mean', 'rg')
       
       `names(actual[[4]])` is absent
       `names(expected[[4]])` is a character vector ('mean', 'rg')
       
       `names(actual[[5]])` is absent
       `names(expected[[5]])` is a character vector ('mean', 'rg')
       
       `names(actual[[6]])` is absent
       `names(expected[[6]])` is a character vector ('mean', 'rg')
       
       `names(actual[[7]])` is absent
       `names(expected[[7]])` is a character vector ('mean', 'rg')
       
       `names(actual[[8]])` is absent
       `names(expected[[8]])` is a character vector ('mean', 'rg')
       
       
       [ FAIL 125 | WARN 0 | SKIP 0 | PASS 1260 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# matsbyname (0.6.15)

* GitHub: <https://github.com/MatthewHeun/matsbyname>
* Email: <mailto:matthew.heun@me.com>
* GitHub mirror: <https://github.com/cran/matsbyname>

Run `revdepcheck::revdep_details(, "matsbyname")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     +             dimnames = list(c("p1", "p2"), c("i1", "i2"))) %>% 
     +   setrowtype("Products") %>% setcoltype("Industries")
     > m
        i1 i2
     p1  1  5
     p2  4  5
     attr(,"rowtype")
     [1] "Products"
     attr(,"coltype")
     [1] "Industries"
     > vectorize_byname(m, notation = RCLabels::arrow_notation)
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─matsbyname::vectorize_byname(m, notation = RCLabels::arrow_notation)
      2. │ └─matsbyname::unaryapply_byname(...)
      3. │   ├─base::do.call(FUN, c(list(a), lFUNdots))
      4. │   └─matsbyname (local) `<fn>`(`<dbl[,2]>`, notation = `<chr>`)
      5. │     └─... %>% tibble::column_to_rownames("vec_rowname")
      6. └─tibble::column_to_rownames(., "vec_rowname")
      7.   └─tibble:::abort_already_has_rownames()
      8.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      9.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        4. │   └─matsbyname (local) `<fn>`(`<dgeMatrx[,2]>`, notation = `<chr>`)
        5. │     └─... %>% tibble::column_to_rownames("vec_rowname")
        6. └─tibble::column_to_rownames(., "vec_rowname")
        7.   └─tibble:::abort_already_has_rownames()
        8.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        9.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Error ('test-Unary.R:1062:3'): vectorize_byname() and matricize_byname() are inverses of each other ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., "vec_rowname")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─matsbyname::vectorize_byname(m1, notation = RCLabels::arrow_notation) at test-Unary.R:1062:3
        2. │ └─matsbyname::unaryapply_byname(...)
        3. │   ├─base::do.call(FUN, c(list(a), lFUNdots))
        4. │   └─matsbyname (local) `<fn>`(`<dbl[,2]>`, notation = `<chr>`)
        5. │     └─... %>% tibble::column_to_rownames("vec_rowname")
        6. └─tibble::column_to_rownames(., "vec_rowname")
        7.   └─tibble:::abort_already_has_rownames()
        8.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        9.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 4 | WARN 0 | SKIP 1 | PASS 2212 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     <error/rlang_error>
     Error:
     ! GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     ---
     Backtrace:
         ▆
      1. ├─base::withVisible(knit_print(x, ...))
      2. ├─knitr::knit_print(x, ...)
      3. └─rmarkdown:::knit_print.data.frame(x, ...)
      4.   ├─context$df_print(x)
      5.   └─base::print.data.frame(x)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'matsbyname.Rmd' failed with diagnostics:
     GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘matsbyname.Rmd’
     
     --- re-building ‘using-summarise-in-matsbyname.Rmd’ using rmarkdown
     --- finished re-building ‘using-summarise-in-matsbyname.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘matsbyname.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

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

# MDP2 (3.0.0)

* GitHub: <https://github.com/relund/mdp>
* Email: <mailto:lars@relund.dk>
* GitHub mirror: <https://github.com/cran/MDP2>

Run `revdepcheck::revdep_details(, "MDP2")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > ### Aliases: get_hypergraph
     > 
     > ### ** Examples
     > 
     > ## Set working dir
     > wd <- setwd(system.file("models", package = "MDP2"))
     > 
     > #### A finite-horizon replacement problem ####
     > mdp<-load_mdp("machine1_")
     Read binary files (0.000183675 sec.)
     Build the HMDP (3.698e-05 sec.)
     
     Checking MDP and found no errors (5.299e-06 sec.)
     
     > plot(mdp)
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpW1L9D3/working_dir/Rtmp9uZgU5/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       ── Error ('test_plot.R:129:3'): get_hypergraph returns nested weight and transition columns ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. ├─testthat::expect_equal(hgf$hyperarcs$action_weights[[1]], 5) at test_plot.R:129:3
        2. │ └─testthat::quasi_label(enquo(object), label)
        3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
        4. └─hgf$hyperarcs$action_weights
       ── Error ('test_plot.R:171:3'): plot_hypergraph supports state_label, action_label, and action_w_label options ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. ├─testthat::expect_invisible(plot_hypergraph(hgf, c(2, 2))) at test_plot.R:171:3
        2. │ └─base::withVisible(call)
        3. └─MDP2::plot_hypergraph(hgf, c(2, 2))
        4.   ├─base::vapply(...)
        5.   └─base::nrow(hgf$hyperarcs)
        6.     ├─base::dim(x)
        7.     └─base::dim.data.frame(x)
        8.       └─base::.row_names_info(x, 2L)
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 198 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
         ▆
      1. ├─base::plot(mdp, action_color = "label", state_label = "s_id|label")
      2. ├─MDP2:::plot.HMDP(mdp, action_color = "label", state_label = "s_id|label")
      3. │ ├─base::do.call(...)
      4. │ └─MDP2 (local) `<fn>`(...)
      5. │   └─tibble::tibble(label = unique(hgf$hyperarcs$label), col = grDevices::rainbow(length(unique(hgf$hyperarcs$label))))
      6. │     └─tibble:::tibble_quos(xs, .rows, .name_repair)
      7. │       └─rlang::eval_tidy(xs[[j]], mask)
      8. ├─base::unique(hgf$hyperarcs$label)
      9. └─base::unique.default(hgf$hyperarcs$label)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'infinite-mdp.Rmd' failed with diagnostics:
     GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘infinite-mdp.Rmd’
     
     --- re-building ‘mdp2.Rmd’ using rmarkdown
     --- finished re-building ‘mdp2.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘building.Rmd’ ‘finite-mdp.Rmd’ ‘infinite-hmdp.Rmd’
       ‘infinite-mdp.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# MeasurementDiagnostics (0.3.0)

* GitHub: <https://github.com/ohdsi/MeasurementDiagnostics>
* Email: <mailto:nuria.mercadebesora@ndorms.ox.ac.uk>
* GitHub mirror: <https://github.com/cran/MeasurementDiagnostics>

Run `revdepcheck::revdep_details(, "MeasurementDiagnostics")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        13. │         │ └─rlang::try_fetch(rel, error = identity)
        14. │         │   ├─base::tryCatch(...)
        15. │         │   │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        16. │         │   │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        17. │         │   │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        18. │         │   └─base::withCallingHandlers(...)
        19. │         └─duckdb$rel_to_table(rel, schema_name, name, temporary)
        20. │           └─duckdb:::rethrow_rapi_rel_to_table(...)
        21. │             ├─rlang::try_fetch(...)
        22. │             │ ├─base::tryCatch(...)
        23. │             │ │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        24. │             │ │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        25. │             │ │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        26. │             │ └─base::withCallingHandlers(...)
        27. │             └─duckdb:::rapi_rel_to_table(rel, schema_name, table_name, temporary)
        28. └─base::.handleSimpleError(...)
        29.   └─rlang (local) h(simpleError(msg, call))
        30.     └─handlers[[1L]](cnd)
        31.       └─duckdb:::rethrow_error_from_rapi(e, call)
        32.         └─rlang::abort(msg, call = call)
       
       [ FAIL 4 | WARN 0 | SKIP 10 | PASS 4 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     Error: processing vignette 'a01_summariseMeasurementUse.Rmd' failed with diagnostics:
     argument is not a character vector
     --- failed re-building ‘a01_summariseMeasurementUse.Rmd’
     
     --- re-building ‘a02_summariseCohortMeasurementUse.Rmd’ using rmarkdown
     trying URL 'https://cdmconnectordata.blob.core.windows.net/cdmconnector-example-data/GiBleed_5.3.zip'
     Content type 'application/zip' length 6754786 bytes (6.4 MB)
     ==================================================
     downloaded 6.4 MB
     
     --- finished re-building ‘a02_summariseCohortMeasurementUse.Rmd’
     
     --- re-building ‘a03_resultsVisualisation.Rmd’ using rmarkdown
     trying URL 'https://cdmconnectordata.blob.core.windows.net/cdmconnector-example-data/GiBleed_5.3.zip'
     Content type 'application/zip' length 6754786 bytes (6.4 MB)
     ==================================================
     downloaded 6.4 MB
     
     --- finished re-building ‘a03_resultsVisualisation.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘a01_summariseMeasurementUse.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# mectx (1.1.1)

* Email: <mailto:dhrubo.2@osu.edu>
* GitHub mirror: <https://github.com/cran/mectx>

Run `revdepcheck::revdep_details(, "mectx")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > synth_meta_20  <- synth_meta_20[synth_meta_20$sample %in% unique(synth_norm_20$sample), ]
       > 
       > synth_cs_20    <- suppressWarnings(
       +   tx_cluster_surv(synth_meta_20, synth_norm_20,
       +                   surv_time_col  = "diagsurvtime",
       +                   status_col     = "Status",
       +                   k_range        = 3:5,
       +                   umap_neighbors = 10,
       +                   seed           = 42)
       + )
       standardise_status: 'Status' already 0/1 numeric --- no change (0=alive, 1=dead)
       Error in `tibble::column_to_rownames()`:
       ! `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─base::suppressWarnings(...)
        2. │ └─base::withCallingHandlers(...)
        3. ├─mectx::tx_cluster_surv(...)
        4. │ └─... %>% as.matrix()
        5. ├─base::as.matrix(.)
        6. └─tibble::column_to_rownames(., "sample")
        7.   └─tibble:::abort_already_has_rownames()
        8.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        9.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       Execution halted
     ```

# melidosData (1.0.6)

* GitHub: <https://github.com/MeLiDosProject/melidosData>
* Email: <mailto:johannes.zauner@tum.de>
* GitHub mirror: <https://github.com/cran/melidosData>

Run `revdepcheck::revdep_details(, "melidosData")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Saving _problems/test-main-and-redcap-helpers-54.R
       Saving _problems/test-main-and-redcap-helpers-55.R
       [ FAIL 2 | WARN 2 | SKIP 0 | PASS 20 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-main-and-redcap-helpers.R:54:3'): REDCap_attention_check returns labelled logical column ──
       Expected `out$attention` to equal `structure(c(TRUE, FALSE, TRUE), label = "Passed")`.
       Differences:
       `attr(actual, 'label')` is absent
       `attr(expected, 'label')` is a character vector ('Passed')
       
       ── Failure ('test-main-and-redcap-helpers.R:55:3'): REDCap_attention_check returns labelled logical column ──
       Expected `attr(out$attention, "label")` to equal "Passed".
       Differences:
       `actual` is NULL
       `expected` is a character vector ('Passed')
       
       
       [ FAIL 2 | WARN 2 | SKIP 0 | PASS 20 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# metacore (0.3.0)

* GitHub: <https://github.com/atorus-research/metacore>
* Email: <mailto:liam.f.hobby@gsk.com>
* GitHub mirror: <https://github.com/cran/metacore>

Run `revdepcheck::revdep_details(, "metacore")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ── Failure ('test-metacore.R:142:3'): pulling out control terminology works ────
       Expected `get_control_term(test, QVAL, SUPPAE)` to equal `tibble(code = c("N", "Y"), decode = c("No", "Yes"))`.
       Differences:
       Attributes: < Component "class": Lengths (1, 3) differ (string compare on first 1) >
       Attributes: < Component "class": 1 string mismatch >
       ── Failure ('test-metacore.R:146:3'): pulling out control terminology works ────
       Expected `get_control_term(test, "QVAL", "SUPPAE")` to equal `tibble(code = c("N", "Y"), decode = c("No", "Yes"))`.
       Differences:
       Attributes: < Component "class": Lengths (1, 3) differ (string compare on first 1) >
       Attributes: < Component "class": 1 string mismatch >
       ── Failure ('test-metacore.R:160:3'): get_keys works ───────────────────────────
       Expected `get_keys(test, DM)` to equal `... %>% ...`.
       Differences:
       Component "variable": Attributes: < target is NULL, current is list >
       Component "key_seq": Attributes: < target is NULL, current is list >
       ── Failure ('test-reader.R:593:3'): Test permitted values within codelist ──────
       Expected `vals[[1]]` to equal `ref`.
       Differences:
       Attributes: < Component "class": Lengths (1, 3) differ (string compare on first 1) >
       Attributes: < Component "class": 1 string mismatch >
       
       [ FAIL 4 | WARN 0 | SKIP 0 | PASS 150 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# metalcor (1.0.2)

* GitHub: <https://github.com/OchoaLab/metalcor>
* Email: <mailto:alejandro.ochoa@duke.edu>
* GitHub mirror: <https://github.com/cran/metalcor>

Run `revdepcheck::revdep_details(, "metalcor")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
     Complete output:
       > # This file is part of the standard setup for testthat.
       > # It is recommended that you do not modify it.
       > #
       > # Where should you do additional test configuration?
       > # Learn more about the roles of various files in:
       > # * https://r-pkgs.org/testing-design.html#sec-tests-files-overview
       > # * https://testthat.r-lib.org/articles/special-files.html
       > 
       > library(testthat)
       > library(metalcor)
       > 
       > test_check("metalcor")
       Saving _problems/test-metalcor-229.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 176 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-metalcor.R:227:9'): metalcor works ───────────────────────────
       Expected `out <- metalcor(studies, median = median)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 176 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# metalite.ae (0.1.4)

* GitHub: <https://github.com/Merck/metalite.ae>
* Email: <mailto:yujie.zhao@merck.com>
* GitHub mirror: <https://github.com/cran/metalite.ae>

Run `revdepcheck::revdep_details(, "metalite.ae")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        [7] "Causality"                   - "AEREL"   [7] 
        [8] "Outcome of Adverse Event"    - "AEOUT"   [8] 
        [9] "subline"                     | "subline" [9] 
       [10] "TRTA"                        | "TRTA"    [10]
       
       ── Failure ('test-independent-testing-prepare_ae_listing.R:125:3'): Checking AE related records at WK12 ──
       Expected `get_label(prod_tbl)` to equal `get_label(listi)`.
       Differences:
            actual                        | expected      
        [1] "Unique Subject Identifier"   - "USUBJID" [1] 
        [2] "Analysis Start Relative Day" - "ASTDY"   [2] 
        [3] "Dictionary-Derived Term"     - "AEDECOD" [3] 
        [4] "AE Duration (N)"             - "ADURN"   [4] 
        [5] "Severity/Intensity"          - "AESEV"   [5] 
        [6] "Serious Event"               - "AESER"   [6] 
        [7] "Causality"                   - "AEREL"   [7] 
        [8] "Outcome of Adverse Event"    - "AEOUT"   [8] 
        [9] "subline"                     | "subline" [9] 
       [10] "TRTA"                        | "TRTA"    [10]
       
       
       [ FAIL 2 | WARN 0 | SKIP 13 | PASS 220 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# metamorphr (0.4.1)

* GitHub: <https://github.com/yasche/metamorphr>
* Email: <mailto:yannik.schermer@chem.rptu.de>
* GitHub mirror: <https://github.com/cran/metamorphr>

Run `revdepcheck::revdep_details(, "metamorphr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `class(expected[[3]])`: "tbl_df"     "tbl" "data.frame"
       
       ── Failure ('test-read_mgf.R:49:3'): MSn spectra are correct ───────────────────
       Expected `mgf_tibble$MSn[[1]]` to equal `msspec1`.
       Differences:
       `class(actual)`:   "data.frame"                   
       `class(expected)`: "tbl_df"     "tbl" "data.frame"
       
       ── Failure ('test-read_mgf.R:50:3'): MSn spectra are correct ───────────────────
       Expected `mgf_tibble$MSn[[2]]` to equal `msspec2`.
       Differences:
       `class(actual)`:   "data.frame"                   
       `class(expected)`: "tbl_df"     "tbl" "data.frame"
       
       ── Failure ('test-read_mgf.R:51:3'): MSn spectra are correct ───────────────────
       Expected `mgf_tibble$MSn[[3]]` to equal `msspec3`.
       Differences:
       `class(actual)`:   "data.frame"                   
       `class(expected)`: "tbl_df"     "tbl" "data.frame"
       
       
       [ FAIL 10 | WARN 0 | SKIP 0 | PASS 452 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# MetaNet (0.3.2)

* GitHub: <https://github.com/Asa12138/MetaNet>
* Email: <mailto:bfzede@gmail.com>
* GitHub mirror: <https://github.com/cran/MetaNet>

Run `revdepcheck::revdep_details(, "MetaNet")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘MetaNet-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: get_group_skeleton
     > ### Title: Get skeleton network according to a group
     > ### Aliases: get_group_skeleton c_net_skeleton skeleton_plot
     > 
     > ### ** Examples
     > 
     > get_group_skeleton(co_net) -> ske_net
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─MetaNet::get_group_skeleton(co_net)
      2. │ └─dplyr::distinct(nodeGroup, Group, v_group) %>% ...
      3. └─tibble::column_to_rownames(., "Group")
      4.   └─tibble:::abort_already_has_rownames()
      5.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      6.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

# metatools (0.3.0)

* GitHub: <https://github.com/pharmaverse/metatools>
* Email: <mailto:liam.f.hobby@gsk.com>
* GitHub mirror: <https://github.com/cran/metatools>

Run `revdepcheck::revdep_details(, "metatools")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `attr(expected$EFFICACY, 'label')` is a character vector ('Efficacy Population Flag')
       
       `attr(actual$ITT, 'label')` is absent
       `attr(expected$ITT, 'label')` is a character vector ('Intent to Treat Population Flag')
       
       `attr(actual$SAFETY, 'label')` is absent
       `attr(expected$SAFETY, 'label')` is a character vector ('Safety Population Flag')
       
       ── Failure ('test-supp.R:167:3'): combine_supp ─────────────────────────────────
       Expected `... %>% pull(ENTCRIT)` to equal `original`.
       Differences:
       `attr(actual, 'label')` is absent
       `attr(expected, 'label')` is a character vector ('PROTOCOL ENTRY CRITERIA NOT MET')
       
       ── Failure ('test-supp.R:251:3'): Floating point correction works ──────────────
       Expected `combo_ae` to equal `supp_check`.
       Differences:
       `attr(actual$AETRTEM, 'label')` is absent
       `attr(expected$AETRTEM, 'label')` is a character vector ('TREATMENT EMERGENT FLAG')
       
       
       [ FAIL 6 | WARN 0 | SKIP 0 | PASS 186 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# MiscMetabar (0.16.8)

* GitHub: <https://github.com/adrientaudiere/MiscMetabar>
* Email: <mailto:adrien.taudiere@zaclys.net>
* GitHub mirror: <https://github.com/cran/MiscMetabar>

Run `revdepcheck::revdep_details(, "MiscMetabar")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        2. └─MiscMetabar::merge_taxa_vec(data_fungi, group, tax_adjust = 2L)
        3.   ├─MiscMetabar::merge_taxa_vec(...)
        4.   └─MiscMetabar::merge_taxa_vec(...)
        5.     └─tibble::column_to_rownames(select(reduced_by_group, -.group), ".taxon")
        6.       └─tibble:::abort_already_has_rownames()
        7.         └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        8.           └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Error ('test_data_manipulation.R:44:3'): merge_taxa_vec with rank_propagation=FALSE works ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(select(reduced_by_group, -.group), ".taxon")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─MiscMetabar::merge_taxa_vec(data_fungi, group, rank_propagation = FALSE) at test_data_manipulation.R:44:3
        2. └─MiscMetabar::merge_taxa_vec(data_fungi, group, rank_propagation = FALSE)
        3.   ├─MiscMetabar::merge_taxa_vec(...)
        4.   └─MiscMetabar::merge_taxa_vec(...)
        5.     └─tibble::column_to_rownames(select(reduced_by_group, -.group), ".taxon")
        6.       └─tibble:::abort_already_has_rownames()
        7.         └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        8.           └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 4 | WARN 0 | SKIP 100 | PASS 339 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# MLMES (0.1.2)

* Email: <mailto:chengxb@uw.edu>
* GitHub mirror: <https://github.com/cran/MLMES>

Run `revdepcheck::revdep_details(, "MLMES")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(MLMES)
       > 
       > test_check("MLMES")
       Saving _problems/test-glmer-10.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 85 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-glmer.R:5:3'): 2-level logistic functions satisfy their output contracts ──
       Expected `variance_components <- glmerVarComp(two_level_binomial_fit, verbose = FALSE)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 85 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# MLwrap (0.4.0)

* GitHub: <https://github.com/AlbertSesePsy/MLwrap>
* Email: <mailto:albert.sese@uib.es>
* GitHub mirror: <https://github.com/cran/MLwrap>

Run `revdepcheck::revdep_details(, "MLwrap")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
       7. │         └─tune::check_parameters(...)
       8. │           ├─hardhat::extract_parameter_set_dials(wflow)
       9. │           └─workflows:::extract_parameter_set_dials.workflow(wflow)
      10. │             ├─hardhat::extract_parameter_set_dials(model)
      11. │             └─parsnip:::extract_parameter_set_dials.model_spec(model)
      12. │               ├─dplyr::mutate(...)
      13. │               └─dplyr:::mutate.data.frame(...)
      14. │                 └─dplyr::mutate(...)
      15. │                   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      16. │                     ├─base::withCallingHandlers(...)
      17. │                     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      18. │                       └─mask$eval_all_mutate(quo)
      19. │                         └─dplyr (local) eval()
      20. ├─purrr::map(call_info, eval_call_info)
      21. │ └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      22. │   ├─purrr:::with_indexed_errors(...)
      23. │   │ └─base::withCallingHandlers(...)
      24. │   ├─purrr:::call_with_cleanup(...)
      25. │   └─parsnip (local) .f(.x[[i]], ...)
      26. │     └─base::stop(paste0("Error when calling ", x$fun, "(): ", as.character(res)))
      27. └─base::.handleSimpleError(...)
      28.   └─purrr (local) h(simpleError(msg, call))
      29.     └─cli::cli_abort(...)
      30.       └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       duckdb keeps downloaded extensions and secrets in a temporary directory:
       i /tmp/RtmpDO8jIy/working_dir/RtmpxvfkX3/duckdb
       This is removed when the R session ends.
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Saving _problems/test-Tuners-90.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 167 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-Tuners.R:90:3'): Test extract_hyperparams works properly ───────
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = purrr::map(call_info, eval_call_info)`.
       Caused by error in `purrr::map()`:
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 167 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# mmrm (0.3.19)

* GitHub: <https://github.com/openpharma/mmrm>
* Email: <mailto:daniel.sabanes_bove@rconis.com>
* GitHub mirror: <https://github.com/cran/mmrm>

Run `revdepcheck::revdep_details(, "mmrm")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-kenwardroger.R:172:1', 'test-kenwardroger.R:182:1',
         'test-kenwardroger.R:192:1', 'test-kenwardroger.R:202:1',
         'test-kenwardroger.R:519:1', 'test-kenwardroger.R:527:1',
         'test-kenwardroger.R:541:1', 'test-kenwardroger.R:559:1',
         'test-kenwardroger.R:571:1', 'test-kenwardroger.R:658:3',
         'test-kenwardroger.R:775:3', 'test-kenwardroger.R:798:3',
         'test-kr-integrated.R:64:3', 'test-kr-integrated.R:102:3',
         'test-kr-integrated.R:117:3', 'test-mmrm-methods.R:78:1',
         'test-mmrm-methods.R:94:1', 'test-mmrm-methods.R:100:1',
         'test-mmrm-methods.R:106:1', 'test-mmrm-methods.R:112:1',
         'test-mmrm-methods.R:119:1', 'test-testing.R:78:1', 'test-testing.R:92:1',
         'test-tmb-methods.R:142:1', 'test-tmb-methods.R:179:1',
         'test-tmb-methods.R:351:1', 'test-tmb-methods.R:941:1',
         'test-tmb-methods.R:1109:1', 'test-tmb-methods.R:1116:1'
       • empty test (1):
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-interop-car.R:446:3'): Anova results are compatible with broom::tidy ──
       Expected `broom::tidy(df2)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 58 | PASS 2878 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# MolgenisArmadillo (3.0.0)

* GitHub: <https://github.com/molgenis/molgenis-r-armadillo>
* Email: <mailto:m.k.slofstra@umcg.nl>
* GitHub mirror: <https://github.com/cran/MolgenisArmadillo>

Run `revdepcheck::revdep_details(, "MolgenisArmadillo")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       v View 'target_folder/target_table' successfully created
       Renaming .csv column name `folder` to `source_folder`: please update your .csv file to silence this message.
       Renaming .csv column name `table` to `source_table`: please update your .csv file to silence this message.
       'target_folder' not specified in .csv file: defaulting to source folder name
       'target_table' not specified in .csv file: defaulting to source table name
       Saving _problems/test-subset-480.R
       [1] "project/folder1/obj1" "project/folder1/obj2" "project/folder2/obj3"
       [4] "project/folder2/obj4"
       [1] "project/folder1/obj1" "project/folder1/obj2" "project/folder2/obj3"
       [4] "project/folder2/obj4"
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 251 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-subset.R:480:3'): armadillo.subset_definition should return proper
                 subset definition ──
       Expected `obj` to be identical to `expected`.
       Differences:
       `class(actual$target_vars[[1]])`:   "data.frame"                   
       `class(expected$target_vars[[1]])`: "tbl_df"     "tbl" "data.frame"
       
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 251 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# mpathsenser (1.2.4)

* GitHub: <https://github.com/koenniem/mpathsenser>
* Email: <mailto:koen.niemeijer@kuleuven.be>
* GitHub mirror: <https://github.com/cran/mpathsenser>

Run `revdepcheck::revdep_details(, "mpathsenser")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `attr(actual$data[[5]]$original_time, 'tzone')`:   "UTC"
       `attr(expected$data[[5]]$original_time, 'tzone')`: ""   
       
       `class(actual$data[[6]])`:   "data.frame"                   
       `class(expected$data[[6]])`: "tbl_df"     "tbl" "data.frame"
       
       `attr(actual$data[[6]]$time, 'tzone')`:   "UTC"
       `attr(expected$data[[6]]$time, 'tzone')`: ""   
       
       `attr(actual$data[[6]]$original_time, 'tzone')`:   "UTC"
       `attr(expected$data[[6]]$original_time, 'tzone')`: ""   
       
       ── Error ('test-linking.R:415:3'): link ────────────────────────────────────────
       Error in `link(x = dat1, y = dat2, by = "participant_id", time = time, y_time = time, offset_before = 1800L, add_before = TRUE, add_after = TRUE)`: Argument `y_time` must be a POSIXt.
       x You supplied an integer.
       Backtrace:
           ▆
        1. └─mpathsenser::link(y_time = time) at test-linking.R:415:3
        2.   └─mpathsenser:::check_arg(pull(y, y_time), "POSIXt", arg = "y_time")
        3.     └─rlang::abort(msg, arg = arg, call = call)
       
       [ FAIL 8 | WARN 252 | SKIP 2 | PASS 909 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# MRG (0.3.30)

* Email: <mailto:jon.skoien@gmail.com>
* GitHub mirror: <https://github.com/cran/MRG>

Run `revdepcheck::revdep_details(, "MRG")` for more info

## Newly broken

*   checking tests ... NOTE
     ```
       Running ‘multiResGrid.R’
       Comparing ‘multiResGrid.Rout’ to ‘multiResGrid.Rout.save’ ...
     53,60d52
     < duckdb keeps downloaded extensions and secrets in a temporary directory:
     < ℹ /tmp/RtmpThv2Mr/working_dir/Rtmpgh7EWU/duckdb
     < This is removed when the R session ends.
     < • Extensions are re-downloaded each session.
     < • Secrets are lost.
     < ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     < ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     < ℹ See ?duckdb_storage for details and alternatives.
     ```

# msSPChelpR (0.9.1)

* GitHub: <https://github.com/marianschmidt/msSPChelpR>
* Email: <mailto:marian.eberl@tum.de>
* GitHub mirror: <https://github.com/cran/msSPChelpR>

Run `revdepcheck::revdep_details(, "msSPChelpR")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     Error(s) in re-building vignettes:
       ...
     --- re-building ‘introduction.Rmd’ using rmarkdown
     
     Quitting from introduction.Rmd:221-231 [unnamed-chunk-9]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error in `if (fu_end_status != fu_end_param) ...`:
     ! argument is of length zero
     ---
     Backtrace:
         ▆
      1. ├─usdata_wide %>% ...
      2. └─msSPChelpR::calc_futime(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'introduction.Rmd' failed with diagnostics:
     argument is of length zero
     --- failed re-building ‘introduction.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘introduction.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# mtdesign (0.1.4)

* GitHub: <https://github.com/openpharma/mtdesign>
* Email: <mailto:mtdesign@puzzledface.net>
* GitHub mirror: <https://github.com/cran/mtdesign>

Run `revdepcheck::revdep_details(, "mtdesign")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(mtdesign)
       > 
       > test_check("mtdesign")
       duckdb keeps downloaded extensions and secrets in a temporary directory:
       i /tmp/RtmppJxLQQ/working_dir/Rtmpv1NCvp/duckdb
       This is removed when the R session ends.
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       The grid contains 1325870 rows.  This may take some time...
       Killed
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# multifear (0.1.5)

* GitHub: <https://github.com/AngelosPsy/multifear>
* Email: <mailto:amkrypotos@gmail.com>
* GitHub mirror: <https://github.com/cran/multifear>

Run `revdepcheck::revdep_details(, "multifear")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘multifear-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: mixed_mf
     > ### Title: mixed_mf
     > ### Aliases: mixed_mf
     > 
     > ### ** Examples
     > 
     > # Load example data
     > data(example_data)
     > 
     > cs1 <- paste0("CSP", 1:2)
     > cs2 <- paste0("CSM", 1:2)
     > subj <- "id"
     > 
     > # mixed models without groups
     > mixed_mf(cs1 = cs1, cs2 = cs2, subj = subj, data = example_data)
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         3. │ └─testthat:::eval_with_output(object, print = print, width = width)
         4. │   ├─withr::with_output_sink(path, withVisible(code))
         5. │   │ └─base::force(code)
         6. │   └─base::withVisible(code)
         7. ├─multifear::universe_cs(...)
         8. │ └─purrr::map_df(combRes, rbind)
         9. │   └─purrr::map(.x, .f, ...)
        10. │     └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
        11. │       ├─purrr:::with_indexed_errors(...)
        12. │       │ └─base::withCallingHandlers(...)
        13. │       ├─purrr:::call_with_cleanup(...)
        14. │       └─base (local) .f(.x[[i]], ...)
        15. │         └─base::rbind(deparse.level, ...)
        16. │           └─base::vapply(...)
        17. │             └─base (local) FUN(X[[i]], ...)
        18. │               └─base::.row_names_info(x, 2L)
        19. └─base::.handleSimpleError(...)
        20.   └─purrr (local) h(simpleError(msg, call))
        21.     └─cli::cli_abort(...)
        22.       └─rlang::abort(...)
       
       [ FAIL 1 | WARN 2 | SKIP 0 | PASS 16 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# multilevelmod (1.0.0)

* GitHub: <https://github.com/tidymodels/multilevelmod>
* Email: <mailto:hannah@rstudio.com>
* GitHub mirror: <https://github.com/cran/multilevelmod>

Run `revdepcheck::revdep_details(, "multilevelmod")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmp2zclYl/working_dir/Rtmpni8XSm/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# multinma (0.9.1)

* GitHub: <https://github.com/dmphillippo/multinma>
* Email: <mailto:david.phillippo@bristol.ac.uk>
* GitHub mirror: <https://github.com/cran/multinma>

Run `revdepcheck::revdep_details(, "multinma")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     4 57.400000      0
     5 57.400000      0
     6 30.714460      0
     > head(ndmm_agd)
            study     studyf trt trtf eventtime status
     1 Morgan2012 Morgan2012 Pbo  Pbo  18.72575      1
     2 Morgan2012 Morgan2012 Pbo  Pbo  63.36000      0
     3 Morgan2012 Morgan2012 Pbo  Pbo  34.35726      1
     4 Morgan2012 Morgan2012 Pbo  Pbo  10.77826      1
     5 Morgan2012 Morgan2012 Pbo  Pbo  63.36000      0
     6 Morgan2012 Morgan2012 Pbo  Pbo  14.52966      1
     > 
     > ndmm_net <- combine_network(
     +   set_ipd(ndmm_ipd,
     +           study, trt,
     +           Surv = Surv(eventtime / 12, status)),
     +   set_agd_surv(ndmm_agd,
     +                study, trt,
     +                Surv = Surv(eventtime / 12, status),
     +                covariates = ndmm_agd_covs))
     > 
     > # The default knot locations
     > make_knots(ndmm_net, type = "quantile")
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        5.   └─tidyr:::unnest.data.frame(y_agd_arm, cols = ".Surv")
        6.     └─tidyr::unchop(...)
        7.       └─vctrs::vec_size(data)
       
       [ FAIL 2 | WARN 0 | SKIP 23 | PASS 1100 ]
       Deleting unused snapshots:
       'plot_nma_data/atrial-fibrillation-network-star.svg',
       'plot_nma_data/atrial-fibrillation-network.svg',
       'plot_nma_data/bcg-vaccine-network.svg', 'plot_nma_data/blocker-network.svg',
       'plot_nma_data/diabetes-network.svg', 'plot_nma_data/dietary-fat-network.svg',
       'plot_nma_data/duplicated-agd-arms-network.svg',
       'plot_nma_data/duplicated-agd-contrasts-network.svg',
       'plot_nma_data/duplicated-ipd-arms-network.svg',
       'plot_nma_data/hta-psoriasis-network.svg', 'plot_nma_data/ndmm-network.svg',
       'plot_nma_data/parkinsons-arm-network.svg',
       'plot_nma_data/parkinsons-contrast-network.svg',
       'plot_nma_data/parkinsons-mixed-network.svg',
       'plot_nma_data/plaque-psoriasis-network.svg',
       'plot_nma_data/smoking-network.svg', 'plot_nma_data/statins-network.svg',
       'plot_nma_data/thrombolytics-dias-network.svg',
       'plot_nma_data/thrombolytics-network.svg', and
       'plot_nma_data/transfusion-network.svg'
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# mverse (0.2.3)

* GitHub: <https://github.com/mverseanalysis/mverse>
* Email: <mailto:michael.moon@utoronto.ca>
* GitHub mirror: <https://github.com/cran/mverse>

Run `revdepcheck::revdep_details(, "mverse")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `dimnames(expected)[[1]]` is NULL
       
       ── Failure ('test-inspect.R:559:5'): summary.glm_mverse(output = 'aic') outputs AIC and BIC statistics. ──
       Expected `as.matrix(smverse2)` to equal `smanu`.
       Differences:
       `dimnames(actual)[[1]]` is a character vector ('1', '2', '3')
       `dimnames(expected)[[1]]` is NULL
       
       ── Failure ('test-inspect.R:596:5'): summary.glm.nb_mverse(output = 'aic') outputs AIC and BIC statistics. ──
       Expected `as.matrix(smverse)` to equal `smanu`.
       Differences:
       `dimnames(actual)[[1]]` is a character vector ('1', '2', '3')
       `dimnames(expected)[[1]]` is NULL
       
       ── Failure ('test-inspect.R:597:5'): summary.glm.nb_mverse(output = 'aic') outputs AIC and BIC statistics. ──
       Expected `as.matrix(smverse2)` to equal `smanu`.
       Differences:
       `dimnames(actual)[[1]]` is a character vector ('1', '2', '3')
       `dimnames(expected)[[1]]` is NULL
       
       
       [ FAIL 9 | WARN 0 | SKIP 0 | PASS 121 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# neotoma2 (1.1.0)

* GitHub: <https://github.com/NeotomaDB/neotoma2>
* Email: <mailto:dominguezvid@wisc.edu>
* GitHub mirror: <https://github.com/cran/neotoma2>

Run `revdepcheck::revdep_details(, "neotoma2")` for more info

## Newly broken

*   checking R code for possible problems ... NOTE
     ```
     filter.data.frame: no visible global function definition for ‘try_list’
     Undefined global functions or variables:
       try_list
     ```

# NeStage (0.8.1)

* GitHub: <https://github.com/RaymondLTremblay/NeStage>
* Email: <mailto:raymond.tremblay@gmail.com>
* GitHub mirror: <https://github.com/cran/NeStage>

Run `revdepcheck::revdep_details(, "NeStage")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      12. │           └─dplyr::summarise(...)
      13. │             └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
      14. │               ├─base::withCallingHandlers(...)
      15. │               └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      16. │                 └─base::lapply(.x, .f, ...)
      17. │                   └─dplyr (local) FUN(X[[i]], ...)
      18. │                     └─mask$eval_all_summarise(quo)
      19. │                       └─dplyr (local) eval()
      20. └─gt:::as_style(styles)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'Ne_Yonezawa2000.Rmd' failed with diagnostics:
     ℹ In argument: `styles = list(as_style(styles))`.
     ℹ In group 1: `locname = "row_groups"`, `grpname = "**Newborn contributions**
       r_i"`, `colname = NA`, `locnum = 5`, `rownum = 0.9`, `colnum = 1`.
     Caused by error in `as_style()`:
     ! All provided styles should be generated by stylizing helper functions.
     • Style with index `1` is invalid.
     --- failed re-building ‘Ne_Yonezawa2000.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘Ne_Yonezawa2000.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# nfl4th (1.0.7)

* GitHub: <https://github.com/nflverse/nfl4th>
* Email: <mailto:bbaldwin206@gmail.com>
* GitHub mirror: <https://github.com/cran/nfl4th>

Run `revdepcheck::revdep_details(, "nfl4th")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       old[2:7] vs new[2:15]
         Code
           knitr::kable(nfl4th::make_2pt_table_data(nfl4th::add_2pt_probs(another_play)),
           digits = 2)
         Message
       +   duckdb keeps downloaded extensions and secrets in a temporary directory:
       +   i /tmp/Rtmpm5DYWo/working_dir/Rtmp4PUSOF/duckdb
       +   This is removed when the R session ends.
       +   * Extensions are re-downloaded each session.
       +   * Secrets are lost.
       +   i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       +   i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       and 4 more ...
       
       
       ── Snapshots ───────────────────────────────────────────────────────────────────
       To review and process snapshots locally:
       * Locate check directory.
       * Copy 'tests/testthat/_snaps' to local package.
       * Run `testthat::snapshot_accept()` to accept all changes.
       * Run `testthat::snapshot_review()` to review all changes.
       [ FAIL 1 | WARN 0 | SKIP 3 | PASS 0 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# NOVA (0.1.5)

* GitHub: <https://github.com/atudoras/NOVA>
* Email: <mailto:alex.tudorasmiravet@ucsf.edu>
* GitHub mirror: <https://github.com/cran/NOVA>

Run `revdepcheck::revdep_details(, "NOVA")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Displaying: PBS_WT_avg 
       Displaying: KA_KO_all 
       Displaying: KA_KO_avg 
       Displaying: combined_all 
       Displaying: combined_avg 
       Displaying: combined_average 
       [ FAIL 1 | WARN 16 | SKIP 0 | PASS 38 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-heatmaps.R:114:3'): split_by = 'combination' creates a combination_result with pheatmap ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., "Well")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─NOVA::create_mea_heatmaps_enhanced(...) at test-heatmaps.R:114:3
        2. │ └─... %>% tibble::column_to_rownames("Well")
        3. └─tibble::column_to_rownames(., "Well")
        4.   └─tibble:::abort_already_has_rownames()
        5.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        6.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 1 | WARN 16 | SKIP 0 | PASS 38 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# nowcastr (0.2.1)

* GitHub: <https://github.com/whocov/nowcastr>
* Email: <mailto:mathias.leroy.rpkg@gmail.com>
* GitHub mirror: <https://github.com/cran/nowcastr>

Run `revdepcheck::revdep_details(, "nowcastr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-calc_delay.R:9:3'): calc_delay basic works ───────────────────
       Expected `attr(res$delay, "units") == "weeks"` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       ── Failure ('test-calc_delay.R:33:3'): calc_delay can generate other units ─────
       Expected `attr(res$delay, "units") == "days"` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       ── Failure ('test-calc_delay.R:39:3'): calc_delay can take strings ─────────────
       Expected `attr(res$delay, "units") == "days"` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       
       [ FAIL 3 | WARN 0 | SKIP 0 | PASS 172 ]
       Error:
       ! Test failures.
       Execution halted
     ```

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

# obrasgovr (0.1.0)

* GitHub: <https://github.com/StrategicProjects/obrasgovr>
* Email: <mailto:leite@castlab.org>
* GitHub mirror: <https://github.com/cran/obrasgovr>

Run `revdepcheck::revdep_details(, "obrasgovr")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       4.     │ └─rlang::try_fetch(...)
       5.     │   └─base::withCallingHandlers(...)
       6.     └─purrr::map(...)
       7.       └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
       8.         ├─purrr:::with_indexed_errors(...)
       9.         │ └─base::withCallingHandlers(...)
      10.         ├─purrr:::call_with_cleanup(...)
      11.         └─tidyr (local) .f(.x[[i]], ...)
      12.           └─tidyr:::elt_to_wide(...)
      13.             └─tidyr:::stop_use_names_sep(error_call = error_call)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'pagination-and-nested-data.Rmd' failed with diagnostics:
     ℹ In column: `executores`.
     ℹ In row: 1.
     Caused by error:
     ! Can't unnest elements with missing names.
     ℹ Supply `names_sep` to generate automatic names.
     --- failed re-building ‘pagination-and-nested-data.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘pagination-and-nested-data.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# oeli (0.7.9)

* GitHub: <https://github.com/loelschlaeger/oeli>
* Email: <mailto:oelschlaeger.lennart@gmail.com>
* GitHub mirror: <https://github.com/cran/oeli>

Run `revdepcheck::revdep_details(, "oeli")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `names(expected$.input[[2]])` is a character vector ('x', 'y')
       
       `names(actual$.input[[3]])` is absent
       `names(expected$.input[[3]])` is a character vector ('x', 'y')
       
       ── Failure ('test-simulator.R:72:3'): re-run works ─────────────────────────────
       Expected `dplyr::select(sim$results, -.seconds)` to be identical to `structure(...)`.
       Differences:
       `names(actual$.input[[1]])` is absent
       `names(expected$.input[[1]])` is a character vector ('x', 'y')
       
       `names(actual$.input[[2]])` is absent
       `names(expected$.input[[2]])` is a character vector ('x', 'y')
       
       `names(actual$.input[[3]])` is absent
       `names(expected$.input[[3]])` is a character vector ('x', 'y')
       
       `names(actual$.input[[4]])` is absent
       `names(expected$.input[[4]])` is a character vector ('x', 'y')
       
       
       [ FAIL 2 | WARN 0 | SKIP 4 | PASS 448 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# ofpetrial (0.1.3)

* GitHub: <https://github.com/DIFM-Brain/ofpetrial>
* Email: <mailto:tmieno2@unl.edu>
* GitHub mirror: <https://github.com/cran/ofpetrial>

Run `revdepcheck::revdep_details(, "ofpetrial")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > td <- assign_rates(exp_data, rate_info)
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmp4VPEIA/working_dir/Rtmp4xxHtU/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error in `dplyr::rowwise()`:
     ! This operation cannot be carried out by DuckDB, and the input is a
       stingy duckplyr frame.
     ℹ Use `compute(prudence = "lavish")` to materialize to temporary storage and
       continue with duckplyr.
     ℹ See `vignette("prudence")` for other options.
     Backtrace:
         ▆
      1. ├─ofpetrial::assign_rates(exp_data, rate_info)
      2. │ └─... %>% dplyr::rowwise()
      3. ├─dplyr::rowwise(.)
      4. └─dplyr:::rowwise.data.frame(.)
      5.   └─dplyr:::check_prudence(data, duckplyr_error)
      6.     └─cli::cli_abort(...)
      7.       └─rlang::abort(...)
     Execution halted
     ```

# OhdsiReportGenerator (2.3.1)

* GitHub: <https://github.com/OHDSI/OhdsiReportGenerator>
* Email: <mailto:jreps@its.jnj.com>
* GitHub mirror: <https://github.com/cran/OhdsiReportGenerator>

Run `revdepcheck::revdep_details(, "OhdsiReportGenerator")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     Backtrace:
          ▆
       1. ├─base (local) `<fn>`(x)
       2. ├─gt:::print.gt_tbl(x)
       3. │ ├─htmltools::as.tags(x, ...)
       4. │ └─gt:::as.tags.gt_tbl(x, ...)
       5. │   ├─htmltools::HTML(render_as_html(data = x))
       6. │   └─gt:::render_as_html(data = x)
       7. │     └─gt:::build_data(data = data, context = "html")
       8. │       └─gt:::resolve_footnotes_styles(data = data, tbl_type = "styles")
       9. │         ├─dplyr::summarize(...)
      10. │         └─dplyr:::summarise.data.frame(...)
      11. │           └─dplyr::summarise(...)
      12. │             └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
      13. │               ├─base::withCallingHandlers(...)
      14. │               └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      15. │                 └─base::lapply(.x, .f, ...)
      16. │                   └─dplyr (local) FUN(X[[i]], ...)
      17. │                     └─mask$eval_all_summarise(quo)
      18. │                       └─dplyr (local) eval()
      19. └─gt:::as_style(styles)
      20.   └─cli::cli_abort(...)
      21.     └─rlang::abort(...)
     Execution halted
     Closing database connection
     ```

# OlinkAnalyze (5.1.0)

* GitHub: <https://github.com/Olink-Proteomics/OlinkRPackage>
* Email: <mailto:biostattools@olink.com>
* GitHub mirror: <https://github.com/cran/OlinkAnalyze>

Run `revdepcheck::revdep_details(, "OlinkAnalyze")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         1. ├─testthat::expect_warning(...) at test-plot_umap.R:234:5
         2. │ └─testthat:::expect_condition_matching_(...)
         3. │   └─testthat:::quasi_capture(...)
         4. │     ├─testthat (local) .capture(...)
         5. │     │ └─base::withCallingHandlers(...)
         6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
         7. ├─testthat::expect_warning(...)
         8. │ └─testthat:::expect_condition_matching_(...)
         9. │   └─testthat:::quasi_capture(...)
        10. │     ├─testthat (local) .capture(...)
        11. │     │ └─base::withCallingHandlers(...)
        12. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        13. └─OlinkAnalyze::olink_umap_plot(...)
        14.   └─OlinkAnalyze:::olink_umap_plot.internal(...)
        15.     └─OlinkAnalyze:::npxProcessing_forDimRed(...)
        16.       ├─base::as.matrix(...)
        17.       └─tibble::column_to_rownames(dplyr::select(df_wide, -dplyr::all_of("colors")), var = "SampleID")
        18.         └─tibble:::abort_already_has_rownames()
        19.           └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        20.             └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 16 | WARN 0 | SKIP 296 | PASS 1870 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# OlinkAnalyzeVignettes (1.1.0)

* GitHub: <https://github.com/Olink-Proteomics/OlinkRPackage>
* Email: <mailto:biostattools@olink.com>
* GitHub mirror: <https://github.com/cran/OlinkAnalyzeVignettes>

Run `revdepcheck::revdep_details(, "OlinkAnalyzeVignettes")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     <error/tibble_error_already_has_rownames>
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     ---
     Backtrace:
         ▆
      1. └─OlinkAnalyze::olink_pca_plot(...)
      2.   └─OlinkAnalyze:::olink_pca_plot.internal(...)
      3.     └─OlinkAnalyze:::npxProcessing_forDimRed(...)
      4.       ├─base::as.matrix(...)
      5.       └─tibble::column_to_rownames(dplyr::select(df_wide, -dplyr::all_of("colors")), var = "SampleID")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'outlier_exclusion.Rmd' failed with diagnostics:
     `.data` must be a data frame without row names.
     --- failed re-building ‘outlier_exclusion.Rmd’
     
     --- re-building ‘plate_randomizer.Rmd’ using rmarkdown
     --- finished re-building ‘plate_randomizer.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘bridging_introduction.Rmd’ ‘outlier_exclusion.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# OmopConstructor (0.3.0)

* GitHub: <https://github.com/ohdsi/OmopConstructor>
* Email: <mailto:marti.catalasabate@ndorms.ox.ac.uk>
* GitHub mirror: <https://github.com/cran/OmopConstructor>

Run `revdepcheck::revdep_details(, "OmopConstructor")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      15. │               └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      16. │                 └─base::lapply(.x, .f, ...)
      17. │                   └─dplyr (local) FUN(X[[i]], ...)
      18. │                     └─mask$eval_all_summarise(quo)
      19. │                       └─dplyr (local) eval()
      20. └─gt:::as_style(styles)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'achilles.Rmd' failed with diagnostics:
     ℹ In argument: `styles = list(as_style(styles))`.
     ℹ In group 1: `locname = "columns_groups"`, `grpname = "Analysis"`, `colname =
       "ID"`, `locnum = 3`, `rownum = -2`, `colnum = 1`.
     Caused by error in `as_style()`:
     ! All provided styles should be generated by stylizing helper functions.
     • Style with index `1` is invalid.
     --- failed re-building ‘achilles.Rmd’
     
     --- re-building ‘buildObservationPeriod.Rmd’ using rmarkdown
     --- finished re-building ‘buildObservationPeriod.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘achilles.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# optic (1.0.1)

* GitHub: <https://github.com/randcorporation/optic>
* Email: <mailto:plima@rand.org>
* GitHub mirror: <https://github.com/cran/optic>

Run `revdepcheck::revdep_details(, "optic")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
                   time_var: year
                   effect_magnitude: 3.97146241830065
                   n_units: 5
                   effect_direction: neg
                   policy_speed: slow
                   n_implementation_periods: 10
                   prior_control: level
                   treat_var: state
       [ FAIL 1 | WARN 6 | SKIP 1 | PASS 4 ]
       
       ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
       • empty test (1):
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-confounding.R:126:3'): confounding simulations work ──────────
       Expected `any(is.na(linear_results_df))` to be FALSE.
       Differences:
       `actual`:   TRUE 
       `expected`: FALSE
       
       
       [ FAIL 1 | WARN 6 | SKIP 1 | PASS 4 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# ordered (0.1.0)

* Email: <mailto:cornelioid@gmail.com>
* GitHub mirror: <https://github.com/cran/ordered>

Run `revdepcheck::revdep_details(, "ordered")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmp86LUVh/working_dir/RtmpR8S82Z/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# ORFID (1.0.3)

* GitHub: <https://github.com/hugo-marques/ORFID>
* Email: <mailto:annika@instream.net>
* GitHub mirror: <https://github.com/cran/ORFID>

Run `revdepcheck::revdep_details(, "ORFID")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(ORFID)
       > 
       > test_check("ORFID")
       Saving _problems/test-import-ORFID-17.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 21 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-import-ORFID.R:16:3'): import_ORFID column classes of common columns are correct ──
       Expected `res` to equal `c(...)`.
       Differences:
       Lengths differ: 7 is not 8
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 21 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# pacta.multi.loanbook (0.1.1)

* GitHub: <https://github.com/RMI-PACTA/pacta.multi.loanbook>
* Email: <mailto:jacob.kastl@gmail.com>
* GitHub mirror: <https://github.com/cran/pacta.multi.loanbook>

Run `revdepcheck::revdep_details(, "pacta.multi.loanbook")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > 
       > library(testthat)
       > library(pacta.multi.loanbook)
       > 
       > test_check("pacta.multi.loanbook")
       Saving _problems/test-1-prepare_abcd-24.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 160 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-1-prepare_abcd.R:24:3'): with known input, runs without error ──
       Expected `prepare_abcd(config)` not to throw any conditions.
       Actually got a <duckdb_storage_location> with message:
         duckdb keeps downloaded extensions and secrets in a temporary directory:
         i /tmp/Rtmpwp3Y0E/working_dir/RtmpzrZKTJ/duckdb
         This is removed when the R session ends.
         * Extensions are re-downloaded each session.
         * Secrets are lost.
         i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
         i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
         i See ?duckdb_storage for details and alternatives.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 160 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# pandemonium (1.0.2)

* Email: <mailto:gabe.mccoy02@gmail.com>
* GitHub mirror: <https://github.com/cran/pandemonium>

Run `revdepcheck::revdep_details(, "pandemonium")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-plotting.R:32:3'): radial tour works with ppi basis ────────────
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
            ▆
         1. ├─testthat::expect_message(...) at test-plotting.R:32:3
         2. │ └─testthat:::expect_condition_matching_(...)
         3. │   └─testthat:::quasi_capture(...)
         4. │     ├─testthat (local) .capture(...)
         5. │     │ └─base::withCallingHandlers(...)
         6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
         7. └─pandemonium::makePlots(...)
         8.   └─pandemonium:::tourMaker(...)
         9.     └─tourr::save_history(...)
        10.       └─tourr (local) tour(step_size)
        11.         └─tourr (local) tour_path(proj[[length(proj)]], data, ...)
        12.           └─tourr (local) generator(current, data, tries, ...)
        13.             └─tourr (local) search_f(...)
        14.               ├─utils::tail(peak$index_val, 1)
        15.               └─utils:::tail.default(peak$index_val, 1)
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 9 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# parsnip (1.6.1)

* GitHub: <https://github.com/tidymodels/parsnip>
* Email: <mailto:max@posit.co>
* GitHub mirror: <https://github.com/cran/parsnip>

Run `revdepcheck::revdep_details(, "parsnip")` for more info

## Newly broken

*   checking for unstated dependencies in examples ... WARNING
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmptC6kiR/working_dir/RtmpSsOruL/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     ```

*   checking Rd line widths ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmptC6kiR/working_dir/RtmpqybmkQ/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     These lines will be truncated in the PDF manual.
     ```

# pcpr (1.0.0)

* GitHub: <https://github.com/Columbia-PRIME/pcpr>
* Email: <mailto:lawrencechillrud@gmail.com>
* GitHub mirror: <https://github.com/cran/pcpr>

Run `revdepcheck::revdep_details(, "pcpr")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      14. │           └─tidyselect:::eval_context(expr, context_mask, call = error_call)
      15. │             ├─tidyselect:::with_chained_errors(...)
      16. │             │ └─base::withCallingHandlers(...)
      17. │             └─rlang::eval_tidy(as_quosure(expr, env), context_mask)
      18. └─tidyselect::all_of(colnames(D))
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'pcp-applied.Rmd' failed with diagnostics:
     ℹ In argument: `tidyselect::all_of(colnames(D))`.
     Caused by error in `tidyselect::all_of()`:
     ! Can't subset elements that don't exist.
     ✖ Elements `1`, `2`, `3`, `4`, `5`, etc. don't exist.
     --- failed re-building ‘pcp-applied.Rmd’
     
     --- re-building ‘pcp-quickstart.Rmd’ using rmarkdown
     --- finished re-building ‘pcp-quickstart.Rmd’
     
     --- re-building ‘theory-crash-course.Rmd’ using rmarkdown
     --- finished re-building ‘theory-crash-course.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘pcp-applied.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# phenofit (0.3.11)

* GitHub: <https://github.com/eco-hydro/phenofit>
* Email: <mailto:kongdd.sysu@gmail.com>
* GitHub mirror: <https://github.com/cran/phenofit>

Run `revdepcheck::revdep_details(, "phenofit")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       warning: solve(): system is singular; attempting approx solution
       
       warning: solve(): system is singular; attempting approx solution
       
       warning: solve(): system is singular; attempting approx solution
       
       warning: solve(): system is singular; attempting approx solution
       
       warning: solve(): system is singular; attempting approx solution
       
       warning: solve(): system is singular; attempting approx solution
       
       warning: solve(): system is close to singular; rcond: 1.65502e-17; attempting approx solution
       Saving _problems/test-season-34.R
       [ FAIL 1 | WARN 2 | SKIP 0 | PASS 69 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-season.R:34:5'): `season` with smooth_wSG ────────────────────
       Expected `brks <- do.call(season, param)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 2 | SKIP 0 | PASS 69 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# PKNCA (0.12.1)

* GitHub: <https://github.com/humanpred/pknca>
* Email: <mailto:wdenney@humanpredictions.com>
* GitHub mirror: <https://github.com/cran/PKNCA>

Run `revdepcheck::revdep_details(, "PKNCA")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `class(expected$data_intervals[[4]])`: "tbl_df"     "tbl" "data.frame"
       
       `class(actual$data_intervals[[5]])`:   "data.frame"                   
       `class(expected$data_intervals[[5]])`: "tbl_df"     "tbl" "data.frame"
       
       `class(actual$data_intervals[[6]])`:   "data.frame"                   
       `class(expected$data_intervals[[6]])`: "tbl_df"     "tbl" "data.frame"
       
       `class(actual$data_intervals[[7]])`:   "data.frame"                   
       `class(expected$data_intervals[[7]])`: "tbl_df"     "tbl" "data.frame"
       
       `class(actual$data_intervals[[8]])`:   "data.frame"                   
       `class(expected$data_intervals[[8]])`: "tbl_df"     "tbl" "data.frame"
       
       `class(actual$data_intervals[[9]])`:   "data.frame"                   
       `class(expected$data_intervals[[9]])`: "tbl_df"     "tbl" "data.frame"
       
       `class(actual$data_intervals[[10]])`:   "data.frame"                   
       `class(expected$data_intervals[[10]])`: "tbl_df"     "tbl" "data.frame"
       
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 1977 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# plotly (4.12.1)

* GitHub: <https://github.com/plotly/plotly.R>
* Email: <mailto:cpsievert1@gmail.com>
* GitHub mirror: <https://github.com/cran/plotly>

Run `revdepcheck::revdep_details(, "plotly")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-ggplot-heatmap.R:12:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-ggplot-lines.R:139:3'): NA values do not cause a lot of warnings when ploting (#1299) ──
       Error: GetQueryResult: Error evaluating duckdb query: Binder Error: ENUM type requires at least one argument
       Backtrace:
            ▆
         1. ├─testthat::expect_warning(plotly_build(p), "Ignoring") at test-ggplot-lines.R:139:3
         2. │ └─testthat:::quasi_capture(...)
         3. │   ├─testthat (local) .capture(...)
         4. │   │ └─base::withCallingHandlers(...)
         5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
         6. ├─plotly::plotly_build(p)
         7. └─plotly:::plotly_build.plotly(p)
         8.   └─base::Map(...)
         9.     └─base::mapply(FUN = f, ..., SIMPLIFY = FALSE)
        10.       └─plotly (local) `<fn>`(dots[[1L]][[1L]], dots[[2L]][[1L]])
        11.         └─base::lengths(trace)
       
       [ FAIL 1 | WARN 23 | SKIP 63 | PASS 1458 ]
       Deleting unused snapshots: 'ggplot-contour/contour.svg' and
       'ggplot-heatmap/heatmap.svg'
       Error:
       ! Test failures.
       Execution halted
     ```

# plsmod (1.0.0)

* GitHub: <https://github.com/tidymodels/plsmod>
* Email: <mailto:max@rstudio.com>
* GitHub mirror: <https://github.com/cran/plsmod>

Run `revdepcheck::revdep_details(, "plsmod")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpXc7tiq/working_dir/RtmpL9tGLl/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# plutor (0.1.0)

* GitHub: <https://github.com/william-swl/plutor>
* Email: <mailto:william_swl@163.com>
* GitHub mirror: <https://github.com/cran/plutor>

Run `revdepcheck::revdep_details(, "plutor")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, position = position, show.legend = show.legend, inherit.aes = inherit.aes, params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, comparisons = comparisons, paired = paired, alternative = alternative, test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, cp_inline = cp_inline,      brackets_widen = brackets_widen, fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, lineend = lineend, ...))`: Problem while converting geom to grob.
       i Error occurred in the 2nd layer.
       Caused by error in `mutate()`:
       i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
       Caused by error:
       ! `yend` must be size 1, not 0.
       ── Error ('test-geom_compare.R:113:3'): geom_compare, cp_ref ───────────────────
       Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, position = position, show.legend = show.legend, inherit.aes = inherit.aes, params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, comparisons = comparisons, paired = paired, alternative = alternative, test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, cp_inline = cp_inline,      brackets_widen = brackets_widen, fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, lineend = lineend, ...))`: Problem while converting geom to grob.
       i Error occurred in the 2nd layer.
       Caused by error in `mutate()`:
       i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
       Caused by error:
       ! `yend` must be size 2 or 1, not 0.
       ── Error ('test-geom_compare.R:178:3'): geom_compare, manual comparisons table ──
       Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, position = position, show.legend = show.legend, inherit.aes = inherit.aes, params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, comparisons = comparisons, paired = paired, alternative = alternative, test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, cp_inline = cp_inline,      brackets_widen = brackets_widen, fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, lineend = lineend, ...))`: Problem while converting geom to grob.
       i Error occurred in the 2nd layer.
       Caused by error in `mutate()`:
       i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
       Caused by error:
       ! `yend` must be size 3 or 1, not 0.
       
       [ FAIL 8 | WARN 15 | SKIP 19 | PASS 0 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# poissonreg (1.0.2)

* GitHub: <https://github.com/tidymodels/poissonreg>
* Email: <mailto:hannah@posit.co>
* GitHub mirror: <https://github.com/cran/poissonreg>

Run `revdepcheck::revdep_details(, "poissonreg")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmp23698M/working_dir/RtmpMsm8jm/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# postcard (1.1.0)

* GitHub: <https://github.com/NovoNordisk-OpenSource/postcard>
* Email: <mailto:mathiasljeppesen@outlook.com>
* GitHub mirror: <https://github.com/cran/postcard>

Run `revdepcheck::revdep_details(, "postcard")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      1. ├─postcard::rctglm_with_prognosticscore(...)
      2. │ └─postcard::fit_best_learner(...)
      3. │   └─postcard:::get_best_learner(...)
      4. │     └─... %>% dplyr::pull("wflow_id")
      5. ├─dplyr::pull(., "wflow_id")
      6. ├─dplyr::filter(., dplyr::row_number() == 1)
      7. ├─dplyr::select(...)
      8. └─workflowsets::rank_results(., rank_metric = "rmse")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'model-fit.Rmd' failed with diagnostics:
     "rmse" was not in the metric set. Please choose from: .
     --- failed re-building ‘model-fit.Rmd’
     
     --- re-building ‘postcard.Rmd’ using rmarkdown
     --- finished re-building ‘postcard.Rmd’
     
     --- re-building ‘prospective-power.Rmd’ using rmarkdown
     --- finished re-building ‘prospective-power.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘model-fit.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# PPbigdata (1.0.0)

* Email: <mailto:yajieritaduan@gmail.com>
* GitHub mirror: <https://github.com/cran/PPbigdata>

Run `revdepcheck::revdep_details(, "PPbigdata")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     +                      make.pbs = FALSE)
     Splitting data nuggets according to max EV...
     split #1
     split #2
     complete!
     Renumbering the data nuggets...
     completed!
     > 
     >   #get nugget centers, weights, and scales
     >   nugg = my.DN2$`Data Nuggets`[,2:(ncol(X)+1)]
     >   weight = my.DN2$`Data Nuggets`$Weight
     >   scale = my.DN2$`Data Nuggets`$Scale
     > 
     >   #2-dim guided tour by Natural Hermite Index based on data nuggets
     >   guidedTourNugg(nugg,weight,scale,dim = 2,index = "NH",cex = 0.5,max.tries = 15)
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpiFIEoj/working_dir/Rtmp6HevIz/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

# predictrace (2.0.1)

* GitHub: <https://github.com/jacobkap/predictrace>
* Email: <mailto:jkkaplan6@gmail.com>
* GitHub mirror: <https://github.com/cran/predictrace>

Run `revdepcheck::revdep_details(, "predictrace")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘spelling.R’
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(predictrace)
       Thank you for using predictrace!
       To acknowledge our work, please cite the package:
       Kaplan, J (2023). predictrace: Predict the Race and Gender of a Given Name Using Census and Social Security Administration Data. Version 2.0.1. URL: https://github.com/jacobkap/predictrace, https://jacobkap.github.io/predictrace/.
       > 
       > test_check("predictrace")
       Saving _problems/test-error-silent-stop-3.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 173 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-error-silent-stop.R:3:3'): correct input works ───────────────
       Expected `predict_race("smith")` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 173 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# preventr (0.12.1)

* GitHub: <https://github.com/martingmayer/preventr>
* Email: <mailto:mmayer@ebsco.com>
* GitHub mirror: <https://github.com/cran/preventr>

Run `revdepcheck::revdep_details(, "preventr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       [ FAIL 1 | WARN 0 | SKIP 124 | PASS 882 ]
       Deleting unused snapshots:
       'plot_risk/check-for-id-1-at-row-1-years-from-data-frame-input.svg',
       'plot_risk/check-for-id-1-at-row-1-years-from-plot-column.svg',
       'plot_risk/check-for-id-1-at-row-2-years-from-data-frame-input.svg',
       'plot_risk/check-for-id-1-at-row-2-years-from-plot-column.svg',
       'plot_risk/check-for-id-10-at-row-1-years-from-data-frame-input.svg',
       'plot_risk/check-for-id-10-at-row-1-years-from-plot-column.svg',
       'plot_risk/check-for-id-101-at-row-1-years-from-data-frame-input.svg',
       'plot_risk/check-for-id-101-at-row-1-years-from-plot-column.svg',
       'plot_risk/check-for-id-101-at-row-2-years-from-data-frame-input.svg',
       'plot_risk/check-for-id-101-at-row-2-years-from-plot-column.svg',
       'plot_risk/check-for-id-102-at-row-1-years-from-data-frame-input.svg',
       'plot_risk/check-for-id-102-at-row-1-years-from-plot-column.svg',
       'plot_risk/check-for-id-103-at-row-1-years-from-data-frame-input.svg',
       'plot_risk/check-for-id-103-at-row-1-years-from-plot-column.svg',
       'plot_risk/check-for-id-103-at-row-2-years-from-data-frame-input.svg',
       'plot_risk/check-for-id-103-at-row-2-years-from-plot-column.svg',
       'plot_risk/check-for-id-104-at-row-1-years-from-data-frame-input.svg',
       'plot_risk/check-for-id-104-at-row-1-years-from-plot-column.svg', …,
       'plot_risk/check-for-id-9-at-row-3-years-from-data-frame-input.svg', and
       'plot_risk/check-for-id-9-at-row-3-years-from-plot-column.svg'
       Error:
       ! Test failures.
       Execution halted
     ```

# psvr (0.1.0)

* Email: <mailto:pbenavides@iteso.mx>
* GitHub mirror: <https://github.com/cran/psvr>

Run `revdepcheck::revdep_details(, "psvr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       ── Error ('test-sym-type-arg.R:98:7'): sym_type = tune() resolves through dials on psvr_rmspe_poly() ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = purrr::map(call_info, eval_call_info)`.
       Caused by error in `purrr::map()`:
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       ── Error ('test-sym-type-arg.R:98:7'): sym_type = tune() resolves through dials on psvr_rmspe_linear() ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = purrr::map(call_info, eval_call_info)`.
       Caused by error in `purrr::map()`:
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       
       [ FAIL 8 | WARN 2 | SKIP 70 | PASS 875 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      12. │           └─mask$eval_all_mutate(quo)
      13. │             └─dplyr (local) eval()
      14. └─purrr::map(call_info, eval_call_info)
      15.   └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      16.     ├─purrr:::with_indexed_errors(...)
      17.     │ └─base::withCallingHandlers(...)
      18.     ├─purrr:::call_with_cleanup(...)
      19.     └─parsnip (local) .f(.x[[i]], ...)
      20.       └─base::stop(paste0("Error when calling ", x$fun, "(): ", as.character(res)))
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'tidymodels-workflow.Rmd' failed with diagnostics:
     ℹ In argument: `object = purrr::map(call_info, eval_call_info)`.
     Caused by error in `purrr::map()`:
     ℹ In index: 1.
     Caused by error in `.f()`:
     ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
       Can't create call to non-callable object
     --- failed re-building ‘tidymodels-workflow.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘getting-started.Rmd’ ‘tidymodels-workflow.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpNUJURY/working_dir/RtmpzGZIfo/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# psycCleaning (0.1.1)

* Email: <mailto:jason.moyhj@gmail.com>
* GitHub mirror: <https://github.com/cran/psycCleaning>

Run `revdepcheck::revdep_details(, "psycCleaning")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Saving _problems/test-composite_score-16.R
       Saving _problems/test-composite_score-34.R
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 33 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-composite_score.R:9:3'): composite_score: standard usecase ───
       Expected `composite_df` to equal `data.frame(...)`.
       Differences:
       `attr(actual, 'row.names')` is a character vector ('1', '2', '3', '4')
       `attr(expected, 'row.names')` is an integer vector (1, 2, 3, 4)
       
       ── Failure ('test-composite_score.R:27:3'): composite_score: na.rm = TRUE ──────
       Expected `composite_df` to equal `data.frame(...)`.
       Differences:
       `attr(actual, 'row.names')` is a character vector ('1', '2', '3', '4')
       `attr(expected, 'row.names')` is an integer vector (1, 2, 3, 4)
       
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 33 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# psychmeta (2.7.0)

* GitHub: <https://github.com/psychmeta/psychmeta>
* Email: <mailto:jeff.dahlke.phd@gmail.com>
* GitHub mirror: <https://github.com/cran/psychmeta>

Run `revdepcheck::revdep_details(, "psychmeta")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘psychmeta-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: create_ad_tibble
     > ### Title: Create a tibble of artifact distributions by construct
     > ### Aliases: create_ad_tibble create_ad_list
     > 
     > ### ** Examples
     > 
     > ## Examples to create Taylor series artifact distributions:
     > # Overall artifact distributions (not pairwise, not moderated)
     > create_ad_tibble(ad_type = "tsa",
     +                  n = n, rxx = rxxi, ryy = ryyi,
     +                  construct_x = x_name, construct_y = y_name,
     +                  sample_id = sample_id, moderators = moderator,
     +                  data = data_r_meas_multi,
     +                  control = control_psychmeta(pairwise_ads = FALSE,
     +                                              moderated_ads = FALSE))
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

# PUMP (1.0.5)

* GitHub: <https://github.com/MDRCNY/PUMP>
* Email: <mailto:luke_miratrix@gse.harvard.edu>
* GitHub mirror: <https://github.com/cran/PUMP>

Run `revdepcheck::revdep_details(, "PUMP")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: plot.pumpgridresult
     > ### Title: Plot a pumpgridresult object (result function)
     > ### Aliases: plot.pumpgridresult
     > 
     > ### ** Examples
     > 
     > g <- pump_power_grid( d_m = "d3.2_m3ff2rc", MTP = c( "HO", "BF" ),
     +  MDES = 0.10, J = seq(5, 10, 1), M = 5, K = 7, nbar = 58,
     +  Tbar = 0.50, alpha = 0.15, numCovar.1 = 1,
     +  numCovar.2 = 1, R2.1 = 0.1, R2.2 = 0.7,
     +  ICC.2 = 0.25, ICC.3 = 0.25, rho = 0.4, tnum = 200)
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0MkyP/working_dir/RtmptzukGQ/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error in params(grid$res[[1]]) : 
       is.pumpresult(x) || is.pumpgridresult(x) is not TRUE
     Calls: pump_power_grid -> run_grid -> params -> stopifnot
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       ── Error ('test-update_functions.R:167:5'): updating grids possible ────────────
       Error in `params(grid$res[[1]])`: is.pumpresult(x) || is.pumpgridresult(x) is not TRUE
       Backtrace:
           ▆
        1. └─PUMP::update_grid(res2, omega.2 = c(0.2, 0.4, 0.6)) at test-update_functions.R:167:5
        2.   ├─base::do.call(pump_mdes_grid, params)
        3.   └─PUMP (local) `<fn>`(...)
        4.     └─PUMP:::run_grid(...)
        5.       └─PUMP::params(grid$res[[1]])
        6.         └─base::stopifnot(is.pumpresult(x) || is.pumpgridresult(x))
       ── Error ('test-update_functions.R:215:5'): update_grid works with multiple MTPs and uniform per-outcome params ──
       Error in `params(grid$res[[1]])`: is.pumpresult(x) || is.pumpgridresult(x) is not TRUE
       Backtrace:
           ▆
        1. └─PUMP::update_grid(pow, R2.1 = seq(0, 0.5, 0.25)) at test-update_functions.R:215:5
        2.   ├─base::do.call(pump_power_grid, params)
        3.   └─PUMP (local) `<fn>`(...)
        4.     └─PUMP:::run_grid(...)
        5.       └─PUMP::params(grid$res[[1]])
        6.         └─base::stopifnot(is.pumpresult(x) || is.pumpgridresult(x))
       
       [ FAIL 6 | WARN 0 | SKIP 41 | PASS 210 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# raretrans (1.0.5)

* GitHub: <https://github.com/atiretoo/raretrans>
* Email: <mailto:raymond.tremblay@upr.edu>
* GitHub mirror: <https://github.com/cran/raretrans>

Run `revdepcheck::revdep_details(, "raretrans")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      11.           │ ├─base::tryCatch(...)
      12.           │ │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
      13.           │ │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
      14.           │ │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
      15.           │ └─base::withCallingHandlers(...)
      16.           └─ggplot2 (local) f(l = layers[[i]], d = data[[i]])
      17.             └─l$layer_data(plot@data)
      18.               └─ggplot2::layer_data(..., self = self)
      19.                 └─ggplot2:::unrowname(data)
      20.                   ├─base::.set_row_names(.row_names_info(x, 2L))
      21.                   └─base::.row_names_info(x, 2L)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'transition_priors.Rmd' failed with diagnostics:
     Problem while computing layer data.
     ℹ Error occurred in the 2nd layer.
     Caused by error:
     ! GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘transition_priors.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘transition_priors.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# rdcmchecks (0.1.1)

* GitHub: <https://github.com/r-dcm/rdcmchecks>
* Email: <mailto:wjakethompson@gmail.com>
* GitHub mirror: <https://github.com/cran/rdcmchecks>

Run `revdepcheck::revdep_details(, "rdcmchecks")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         | This is removed when the R session ends.
         | * Extensions are re-downloaded each session.
         | * Secrets are lost.
         | i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
         | i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
         | i See ?duckdb_storage for details and alternatives.
       ── Failure ('test-check-data.R:21:3'): check data ──────────────────────────────
       Expected `err` to inherit from "rlang_error".
       Actual class: "duckdb_storage_location"/"rlang_message"/"message"/"condition".
       ── Failure ('test-check-data.R:22:3'): check data ──────────────────────────────
       Expected `err$message` to match regexp "only 0 or 1".
       Actual text:
       x | duckdb keeps downloaded extensions and secrets in a temporary directory:
         | i /tmp/RtmpH1RpWk/working_dir/RtmpU4gZED/duckdb
         | This is removed when the R session ends.
         | * Extensions are re-downloaded each session.
         | * Secrets are lost.
         | i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
         | i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
         | i See ?duckdb_storage for details and alternatives.
       
       [ FAIL 4 | WARN 0 | SKIP 2 | PASS 152 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# readmit (0.0.1)

* GitHub: <https://github.com/centralstatz/readmit>
* Email: <mailto:alex@centralstatz.com>
* GitHub mirror: <https://github.com/cran/readmit>

Run `revdepcheck::revdep_details(, "readmit")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘readmit-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: pdc_read
     > ### Title: Import datasets from the Provider Data Catalog (PDC)
     > ### Aliases: pdc_read pdc_datasets pdc_topics
     > 
     > ### ** Examples
     > 
     > # 1. See list of available data topics
     > pdc_topics()
     Error in pdc_topics() : Request did not return a successful status code.
     Execution halted
     ```

# ready4 (0.1.19)

* GitHub: <https://github.com/ready4-dev/ready4>
* Email: <mailto:matthew.hamilton1@monash.edu>
* GitHub mirror: <https://github.com/cran/ready4>

Run `revdepcheck::revdep_details(, "ready4")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'V_04.Rmd' failed with diagnostics:
     ℹ In index: 1.
     Caused by error in `ans[npos] <- rep(no, length.out = len)[npos]`:
     ! replacement has length zero
     --- failed re-building ‘V_04.Rmd’
     
     --- re-building ‘V_05.Rmd’ using rmarkdown
     --- finished re-building ‘V_05.Rmd’
     
     --- re-building ‘V_06.Rmd’ using rmarkdown
     --- finished re-building ‘V_06.Rmd’
     
     --- re-building ‘V_07.Rmd’ using rmarkdown
     --- finished re-building ‘V_07.Rmd’
     
     --- re-building ‘ready4.Rmd’ using rmarkdown
     --- finished re-building ‘ready4.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘V_04.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# recipes (1.4.0)

* GitHub: <https://github.com/tidymodels/recipes>
* Email: <mailto:max@posit.co>
* GitHub mirror: <https://github.com/cran/recipes>

Run `revdepcheck::revdep_details(, "recipes")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Expected `sparsevctrs::is_sparse_integer(bake(rec, NULL)$am)` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       ── Failure ('test-select.R:159:3'): doesn't destroy sparsity ───────────────────
       Expected `sparsevctrs::is_sparse_integer(bake(rec, NULL)$vs)` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       ── Error ('test-window.R:271:3'): tunable is setup to work with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-window.R:271:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       
       [ FAIL 18 | WARN 2 | SKIP 703 | PASS 2693 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# REDCapTidieR (1.2.5)

* GitHub: <https://github.com/CHOP-CGTInformatics/REDCapTidieR>
* Email: <mailto:hannar1@chop.edu>
* GitHub mirror: <https://github.com/cran/REDCapTidieR>

Run `revdepcheck::revdep_details(, "REDCapTidieR")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       i See ?duckdb_storage for details and alternatives.
       [ FAIL 1 | WARN 0 | SKIP 5 | PASS 335 ]
       
       ══ Skipped tests (5) ═══════════════════════════════════════════════════════════
       • On CRAN (5): 'test-lint-free.R:2:3', 'test-read_redcap.R:1:1',
         'test-supertibble.R:1:1', 'test-utils.R:226:3', 'test-write.R:337:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-write.R:156:5'): write_redcap_xlsx has expected supertibble and metadata outputs ──
       Expected `names(sheet_4)` to have the same values as `expected_meta_labels`.
       Actual: "REDCap Instrument Name", "REDCap Instrument Description", NA, NA, NA
       Expected: "REDCap Instrument Name", "REDCap Instrument Description", "Variable / Field Name", "Field Label", "Field Type"
       Needs: NA
       Absent: "Variable / Field Name", "Field Label", "Field Type"
       Backtrace:
           ▆
        1. ├─withr::with_tempdir(...) at test-write.R:137:3
        2. │ └─withr::with_dir(tmp, code)
        3. │   └─base::force(code)
        4. └─testthat::expect_setequal(names(sheet_4), expected_meta_labels) at test-write.R:156:5
       
       [ FAIL 1 | WARN 0 | SKIP 5 | PASS 335 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# REddyProc (1.3.4)

* GitHub: <https://github.com/EarthyScience/REddyProc>
* Email: <mailto:twutz@bgc-jena.mpg.de>
* GitHub mirror: <https://github.com/cran/REddyProc>

Run `revdepcheck::revdep_details(, "REddyProc")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Length mismatch: comparison on first 11 components
       Component 1: target is NULL, current is character
       Component 2: target is NULL, current is character
       Component 3: target is NULL, current is character
       Component 4: target is NULL, current is character
       Component 5: target is NULL, current is character
       ...
       ── Failure ('test_checkval.R:44:3'): fKeepColumnAttributes ─────────────────────
       Expected `sapply(df2[names(df1)], attributes)` to equal `sapply(df1, attributes)`.
       Differences:
       names for target but not for current
       Attributes: < names for current but not for target >
       Attributes: < Length mismatch: comparison on first 0 components >
       Length mismatch: comparison on first 12 components
       Component 1: target is NULL, current is character
       Component 2: target is NULL, current is character
       Component 3: target is NULL, current is character
       Component 4: target is NULL, current is character
       Component 5: target is NULL, current is character
       ...
       
       [ FAIL 4 | WARN 22 | SKIP 37 | PASS 340 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# repfun (0.1.2)

* GitHub: <https://github.com/GSK-Biostatistics/repfun>
* Email: <mailto:cr883296@gmail.com>
* GitHub mirror: <https://github.com/cran/repfun>

Run `revdepcheck::revdep_details(, "repfun")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Expected `basechars` to equal `qc_basechars`.
       Differences:
       `attr(actual$tt_svnm, 'label')` is absent
       `attr(expected$tt_svnm, 'label')` is a character vector ('Statistical Parameter Name')
       
       `attr(actual$tt_avnm, 'label')` is absent
       `attr(expected$tt_avnm, 'label')` is a character vector ('Analysis Variable Name')
       
       ── Failure ('test-ru_sumstats.R:107:3'): generating summary statistics works ───
       Expected `vtlsigns` to equal `qc_vtlsigns`.
       Differences:
       `attr(actual$tt_svnm, 'label')` is absent
       `attr(expected$tt_svnm, 'label')` is a character vector ('Statistical Parameter Name')
       
       ── Failure ('test-ru_sumstats.R:159:3'): generating summary statistics works ───
       Expected `vtlsigns_t` to equal `qc_vtlsigns_t`.
       Differences:
       `attr(actual$tt_svnm, 'label')` is absent
       `attr(expected$tt_svnm, 'label')` is a character vector ('Statistical Parameter Name')
       
       
       [ FAIL 9 | WARN 0 | SKIP 0 | PASS 31 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# reservoirnet (0.3.0)

* GitHub: <https://github.com/reservoirpy/reservoirR>
* Email: <mailto:thomas.ferte@u-bordeaux.fr>
* GitHub mirror: <https://github.com/cran/reservoirnet>

Run `revdepcheck::revdep_details(, "reservoirnet")` for more info

## Newly broken

*   checking for detritus in the temp directory ... NOTE
     ```
     Found the following files/directories:
       ‘tmp.jTaHQS6iBh’
     ```

# RevGadgets (1.2.1)

* GitHub: <https://github.com/revbayes/RevGadgets>
* Email: <mailto:ctribble09@gmail.com>
* GitHub mirror: <https://github.com/cran/RevGadgets>

Run `revdepcheck::revdep_details(, "RevGadgets")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         |                                              
         |====================================    |  90%
         |                                              
         |========================================| 100%
       
         |                                              
         |                                        |   0%
         |                                              
         |========================================| 100%
       Saving _problems/test_rerootPhylo-39.R
       [ FAIL 2 | WARN 8 | SKIP 0 | PASS 138 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test_densiTreeWithBranchData.R:16:3'): plot doesn't error out ─────
       Expected `densiTreeWithBranchData(trees = trees, data = data)` to run silently.
       Actual noise: messages.
       ── Failure ('test_rerootPhylo.R:39:3'): reroots tree ───────────────────────────
       Expected `node_pp` to equal `node_pp_root`.
       Differences:
       Component "posterior": names for target but not for current
       
       [ FAIL 2 | WARN 8 | SKIP 0 | PASS 138 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# RGDrivers (0.1.0)

* GitHub: <https://github.com/diogosbr/RGDrivers>
* Email: <mailto:diogosbr@gmail.com>
* GitHub mirror: <https://github.com/cran/RGDrivers>

Run `revdepcheck::revdep_details(, "RGDrivers")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     Error(s) in re-building vignettes:
       ...
     --- re-building ‘RGDrivers.Rmd’ using rmarkdown
     
     Quitting from RGDrivers.Rmd:41-44 [unnamed-chunk-3]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error in `igraph::graph_from_data_frame()`:
     ! Some vertex names in `d` are not listed in `vertices`
     ---
     Backtrace:
         ▆
      1. └─RGDrivers::create_network_graph(network, col_id = "id", col_downstream = "jus")
      2.   └─igraph::graph_from_data_frame(edges, directed = TRUE, vertices = vertices)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'RGDrivers.Rmd' failed with diagnostics:
     Some vertex names in `d` are not listed in `vertices`
     --- failed re-building ‘RGDrivers.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘RGDrivers.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# rmlnomogram (0.1.2)

* Email: <mailto:herdi@nycu.edu.tw>
* GitHub mirror: <https://github.com/cran/rmlnomogram>

Run `revdepcheck::revdep_details(, "rmlnomogram")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > 
       > test_check("rmlnomogram")
       
       Attaching package: 'dplyr'
       
       The following objects are masked from 'package:stats':
       
           filter, lag
       
       The following objects are masked from 'package:base':
       
           intersect, setdiff, setequal, union
       
       Saving _problems/test-create_nomogram-62.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 14 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-create_nomogram.R:60:3'): create_nomogram validates data types and structures ──
       Expected `create_nomogram(only_factors, sample_output)` to run silently.
       Actual noise: messages.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 14 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# rmoo (0.3.2)

* GitHub: <https://github.com/Evolutionary-Optimization-Laboratory/rmoo>
* Email: <mailto:benitezfj94@gmail.com>
* GitHub mirror: <https://github.com/cran/rmoo>

Run `revdepcheck::revdep_details(, "rmoo")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > library(testthat)
       > library(rmoo)
       Package 'rmoo' version 0.3.2
       > 
       > test_check("rmoo")
       Saving _problems/test-pcp-19.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 90 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-pcp.r:19:3'): Parallel Coordinate Plot for n-objective works ──
       Expected `plot(x = out, type = "pcp")` not to generate messages.
       Actually generated:
       * duckdb keeps downloaded extensions and secrets in a temporary directory:
       ℹ /tmp/Rtmp4CL1FG/working_dir/RtmpzFZxrv/duckdb
       This is removed when the R session ends.
       • Extensions are re-downloaded each session.
       • Secrets are lost.
       ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       ℹ See ?duckdb_storage for details and alternatives.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 90 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# romic (1.3.3)

* GitHub: <https://github.com/shackett/romic>
* Email: <mailto:seanrhackett@gmail.com>
* GitHub mirror: <https://github.com/cran/romic>

Run `revdepcheck::revdep_details(, "romic")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-data_classes.R:230:1', 'test-data_classes.R:356:1',
         'test-data_classes.R:369:1', 'test-data_classes.R:394:1',
         'test-design.R:1:1', 'test-design.R:15:1', 'test-dim_reduction.R:45:1',
         'test-filters.R:1:1', 'test-filters.R:1:1', 'test-filters.R:1:1',
         'test-filters.R:1:1', 'test-mutates.R:14:1', 'test-mutates.R:37:1',
         'test-mutates.R:78:1', 'test-mutates.R:141:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-hclust.R:92:3'): downsampling features (for creating a heatmap works) ──
       Expected `nrow(downsampled_df)` to equal 3600.
       Differences:
         `actual`:   36.0
       `expected`: 3600.0
       
       ── Failure ('test-hclust.R:93:3'): downsampling features (for creating a heatmap works) ──
       Expected `length(unique(downsampled_df$name))` to equal 100.
       Differences:
         `actual`:   1.0
       `expected`: 100.0
       
       
       [ FAIL 2 | WARN 0 | SKIP 17 | PASS 137 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# rsample (1.3.2)

* GitHub: <https://github.com/tidymodels/rsample>
* Email: <mailto:hannah@posit.co>
* GitHub mirror: <https://github.com/cran/rsample>

Run `revdepcheck::revdep_details(, "rsample")` for more info

## Newly broken

*   checking S3 generic/method consistency ... WARNING
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpRxL03y/working_dir/Rtmp6SOsRA/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     See section ‘Generic functions and methods’ in the ‘Writing R
     Extensions’ manual.
     ```

*   checking for code/documentation mismatches ... WARNING
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpRxL03y/working_dir/Rtmp4v3nen/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     ```

*   checking dependencies in R code ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpRxL03y/working_dir/RtmpCGOqip/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     ```

*   checking foreign function calls ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpRxL03y/working_dir/RtmpLUum9s/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     See chapter ‘System and foreign language interfaces’ in the ‘Writing R
     Extensions’ manual.
     ```

*   checking R code for possible problems ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpRxL03y/working_dir/RtmpqHNfhR/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpRxL03y/working_dir/RtmpvxiPPx/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     ```

*   checking Rd \usage sections ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpRxL03y/working_dir/Rtmp76IbHz/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     The \usage entries for S3 methods should use the \method markup and not
     their full name.
     See chapter ‘Writing R documentation files’ in the ‘Writing R
     Extensions’ manual.
     ```

# rsofun (5.1.0)

* GitHub: <https://github.com/geco-bern/rsofun>
* Email: <mailto:benjamin.stocker@gmail.com>
* GitHub mirror: <https://github.com/cran/rsofun>

Run `revdepcheck::revdep_details(, "rsofun")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `names(expected)` is absent
       
       ── Failure ('test-likelihoods.R:127:3'): test likelihood/RMSE calculations with pmodel ──
       Expected `ll_values3` to equal `c(...)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3', '4', '5')
       `names(expected)` is absent
       
       ── Failure ('test-likelihoods.R:139:3'): test likelihood/RMSE calculations with pmodel ──
       Expected `ll_values2` to equal `c(...)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3', '4', '5')
       `names(expected)` is absent
       
       ── Failure ('test-likelihoods.R:242:3'): test likelihood/RMSE calculations with BiomeE ──
       Expected `relError_values_BiomeE` to equal `c(0.42976158393698, 0.168135096963972, 0.152359273844623, 0.316205527799935)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3', '4')
       `names(expected)` is absent
       
       
       [ FAIL 5 | WARN 8 | SKIP 20 | PASS 3 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     ℹ In index: 1.
     Caused by error in `luc_forcing[, 1, 1]`:
     ! incorrect number of dimensions
     --- failed re-building ‘biomee_luluc.Rmd’
     
     --- re-building ‘biomee_use.Rmd’ using rmarkdown
     --- finished re-building ‘biomee_use.Rmd’
     
     --- re-building ‘data_format.Rmd’ using rmarkdown
     --- finished re-building ‘data_format.Rmd’
     
     --- re-building ‘new_cost_function.Rmd’ using rmarkdown
     --- finished re-building ‘new_cost_function.Rmd’
     
     --- re-building ‘pmodel_use.Rmd’ using rmarkdown
     --- finished re-building ‘pmodel_use.Rmd’
     
     --- re-building ‘sensitivity_analysis.Rmd’ using rmarkdown
     --- finished re-building ‘sensitivity_analysis.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘biomee_luluc.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# rules (1.0.3)

* GitHub: <https://github.com/tidymodels/rules>
* Email: <mailto:emil.hvitfeldt@posit.co>
* GitHub mirror: <https://github.com/cran/rules>

Run `revdepcheck::revdep_details(, "rules")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-c5.R:282:3', 'test-c5.R:372:3', 'test-c5.R:433:3', 'test-cubist.R:2:3',
         'test-cubist.R:106:3', 'test-cubist.R:163:3', 'test-cubist.R:209:3',
         'test-cubist.R:246:3', 'test-cubist.R:284:3', 'test-cubist.R:321:3',
         'test-cubist.R:380:3', 'test-cubist.R:426:3', 'test-cubist.R:467:3',
         'test-cubist.R:509:3', 'test-cubist.R:557:3', 'test-cubist.R:619:3',
         'test-cubist.R:656:3', 'test-cubist.R:762:3', 'test-rule-fit-binomial.R:2:3',
         'test-rule-fit-binomial.R:107:3', 'test-rule-fit-binomial.R:215:3',
         'test-rule-fit-multinomial.R:2:3', 'test-rule-fit-multinomial.R:114:3',
         'test-rule-fit-multinomial.R:226:3', 'test-rule-fit-regression.R:2:3',
         'test-rule-fit-regression.R:63:3', 'test-rule-fit-regression.R:128:3',
         'test-rule-fit-regression.R:175:3', 'test-rule-fit-regression.R:220:3',
         'test-rule-fit-regression.R:242:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-c5.R:345:3'): tunable ────────────────────────────────────────
       Expected `C5_rules_engine_args$call_info[C5_rules_engine_args$name == "fuzzyThreshold"][[1]]$fun` to equal "fuzzy_thresholding".
       Differences:
       `actual` is NULL
       `expected` is a character vector ('fuzzy_thresholding')
       
       
       [ FAIL 1 | WARN 0 | SKIP 37 | PASS 21 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpqtcPBj/working_dir/RtmpiA1Zg8/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# sapfluxnetr (0.1.5)

* GitHub: <https://github.com/sapfluxnet/sapfluxnetr>
* Email: <mailto:victorgrandagarcia@gmail.com>
* GitHub mirror: <https://github.com/cran/sapfluxnetr>

Run `revdepcheck::revdep_details(, "sapfluxnetr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-metrics.R:1087:3', 'test-sfn_data_classes.R:60:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-sfn_dplyr_methods.R:14:3'): sfn_filter returns correct results ──
       Error in `validObject(.Object)`: invalid class "sfn_data" object: 1: nrow(sapf_data) != length(timestamp) | nrow(env_data) != length(timestamp)
       invalid class "sfn_data" object: 2: length(timestamp) != length(solar_timestamp)
       invalid class "sfn_data" object: 3: nrow(sapf_flags) != length(timestamp) | nrow(env_flags) != length(timestamp)
       Backtrace:
            ▆
         1. └─sapfluxnetr::sfn_filter(...) at test-sfn_dplyr_methods.R:14:3
         2.   └─sapfluxnetr::sfn_data(...)
         3.     └─methods::new(`<chr>`, ...)
         4.       ├─methods::initialize(value, ...)
         5.       └─sapfluxnetr::initialize(value, ...)
         6.         └─sapfluxnetr (local) .local(.Object, ...)
         7.           ├─methods::callNextMethod(...)
         8.           │ └─base::eval(call, callEnv)
         9.           │   └─base::eval(call, callEnv)
        10.           └─methods (local) .nextMethod(...)
        11.             └─methods::validObject(.Object)
       
       [ FAIL 1 | WARN 0 | SKIP 19 | PASS 341 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# saros (1.6.2)

* GitHub: <https://github.com/NIFU-NO/saros>
* Email: <mailto:stephus.daus@gmail.com>
* GitHub mirror: <https://github.com/cran/saros>

Run `revdepcheck::revdep_details(, "saros")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `names(expected)`:                                         
       
       `attr(actual, 'dep_label_prefix')` is a character vector ('Gender')
       `attr(expected, 'dep_label_prefix')` is absent
       
         `attr(actual, 'row.names')`: 1
       `attr(expected, 'row.names')`:  
       
       `actual$Generation` is an S3 object of class <factor>, an integer vector
       `expected$Generation` is absent
       
       `actual$F (%)` is a character vector ('50')
       `expected$F (%)` is absent
       
       `actual$M (%)` is a character vector ('50')
       `expected$M (%)` is absent
       
       `actual$Total (N)` is an integer vector (2)
       `expected$Total (N)` is absent
       
       
       [ FAIL 1 | WARN 0 | SKIP 44 | PASS 1343 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# scimo (0.0.3)

* GitHub: <https://github.com/abichat/scimo>
* Email: <mailto:antoine.bichat@proton.me>
* GitHub mirror: <https://github.com/cran/scimo>

Run `revdepcheck::revdep_details(, "scimo")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Saving _problems/test-aggregate_hclust-82.R
       Saving _problems/test-aggregate_list-47.R
       [ FAIL 2 | WARN 0 | SKIP 1 | PASS 134 ]
       
       ══ Skipped tests (1) ═══════════════════════════════════════════════════════════
       • {yatah} is not installed (1): 'test-taxonomy.R:5:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-aggregate_hclust.R:77:3'): step_aggregate_hclust works ───────
       Expected `baked[[cl]]` to equal `cheese_abundance %>% select(all_of(asv_in_cl)) %>% rowSums()`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('1', '2', '3', '4', '5', ...)
       
       ── Failure ('test-aggregate_list.R:42:3'): step_aggregate_list() works ─────────
       Expected `baked[[cl]]` to equal `cheese_abundance %>% select(all_of(rk_list[[cl]])) %>% rowSums()`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('1', '2', '3', '4', '5', ...)
       
       
       [ FAIL 2 | WARN 0 | SKIP 1 | PASS 134 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# SCpubr (3.0.1)

* GitHub: <https://github.com/enblacar/SCpubr>
* Email: <mailto:scpubr@gmail.com>
* GitHub mirror: <https://github.com/cran/SCpubr>

Run `revdepcheck::revdep_details(, "SCpubr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        4. ├─base::as.matrix(.)
        5. ├─base::as.data.frame(.)
        6. └─tibble::column_to_rownames(., var = "cell")
        7.   └─tibble:::abort_already_has_rownames()
        8.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        9.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Error ('test-do_SCExpressionHeatmap.R:5:5'): do_SCExpressionHeatmap: CRAN essentials ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., var = "cell")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─SCpubr::do_SCExpressionHeatmap(sample = sample, features = rownames(sample)[1:5]) at test-do_SCExpressionHeatmap.R:5:5
        2. │ └─... %>% t()
        3. ├─base::t(.)
        4. ├─base::as.matrix(.)
        5. ├─base::as.data.frame(.)
        6. └─tibble::column_to_rownames(., var = "cell")
        7.   └─tibble:::abort_already_has_rownames()
        8.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        9.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 4 | WARN 2 | SKIP 415 | PASS 101 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# screenshot (0.9.3)

* GitHub: <https://github.com/matutosi/screenshot>
* Email: <mailto:matutosi@gmail.com>
* GitHub mirror: <https://github.com/cran/screenshot>

Run `revdepcheck::revdep_details(, "screenshot")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       NOT found screenshot exec file
       [ FAIL 1 | WARN 0 | SKIP 3 | PASS 115 ]
       
       ══ Skipped tests (3) ═══════════════════════════════════════════════════════════
       • On CRAN (1): 'test-screenshot.R:46:3'
       • bin_dir is used only on Windows (2): 'test-screenshot.R:8:3',
         'test-screenshot.R:13:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-compare_table.R:12:3'): compare_table() joins the counts of both matrices ──
       Expected `compare_table(ndl_mt, hay_mt)` not to throw any messages.
       Actually got a <duckdb_storage_location> with message:
         duckdb keeps downloaded extensions and secrets in a temporary directory:
         i /tmp/Rtmp0QSAUO/working_dir/RtmpKEHvE3/duckdb
         This is removed when the R session ends.
         * Extensions are re-downloaded each session.
         * Secrets are lost.
         i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
         i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
         i See ?duckdb_storage for details and alternatives.
       
       [ FAIL 1 | WARN 0 | SKIP 3 | PASS 115 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# sensortowerR (2.0.0)

* GitHub: <https://github.com/econosopher/sensortowerR>
* Email: <mailto:pblack@gameeconomistconsulting.com>
* GitHub mirror: <https://github.com/cran/sensortowerR>

Run `revdepcheck::revdep_details(, "sensortowerR")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > library(sensortowerR)
       > 
       > test_check("sensortowerR")
       duckdb keeps downloaded extensions and secrets in a temporary directory:
       i /tmp/Rtmpgvh7wh/working_dir/RtmpJfuBFn/duckdb
       This is removed when the R session ends.
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Saving _problems/test-pipelines-69.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 184 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-pipelines.R:69:3'): metadata conversion expands all regional SKUs, never name-matches ──
       <purrr_error_indexed/rlang_error/error/condition>
       Error in `purrr::map(seq_len(nrow(keys)), function(i) {     id <- keys$app_id[i]     platform <- keys$os[i]     target <- target_os %||% platform     path <- paste0(if (target != platform)          "unified"     else platform, "/apps")     .st_attempt(function() {         params <- list(app_ids = id)         if (startsWith(path, "unified"))              params$app_id_type <- if (platform == "ios")                  "itunes"             else platform         raw <- .st_get(path, params, auth_token)         x <- .st_entities(raw, if (startsWith(path, "unified"))              "unified"         else platform)         if (target != "unified" && target != platform && nrow(x)) {             col <- if (target == "ios")                  "itunes_apps"             else "android_apps"             if (!col %in% names(x))                  .st_abort("Unified metadata lacks store mappings.", "st_schema_error")             x <- purrr::list_rbind(purrr::map(x[[col]], function(v) .st_entities(v, target)))         }         if (!converted && nrow(x) && any(x$app_id != id))              .st_abort("Metadata response contains an unrequested ID.", "st_schema_error")         if (converted) {             x$input_app_id <- rep(id, nrow(x))             x$input_os <- rep(platform, nrow(x))         }         x     }, function() {         x <- tibble::tibble(app_id = if (converted)              NA_character_         else id, os = target, app_name = NA_character_)         if (converted) {             x$input_app_id <- id             x$input_os <- platform         }         x     }, errors, paste0(path, " [", id, "]")) })`: i In index: 1.
       Caused by error in `.st_abort()`:
       ! unified/apps [unified]: Expected named JSON records.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 184 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# sf (1.1-3)

* GitHub: <https://github.com/r-spatial/sf>
* Email: <mailto:edzer.pebesma@uni-muenster.de>
* GitHub mirror: <https://github.com/cran/sf>

Run `revdepcheck::revdep_details(, "sf")` for more info

## Newly broken

*   checking tests ... NOTE
     ```
     ...
     < This is removed when the R session ends.
     < • Extensions are re-downloaded each session.
     < • Secrets are lost.
     < ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     < ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     < ℹ See ?duckdb_storage for details and alternatives.
     < Joining with `by = join_by(b)`
     < Joining with `by = join_by(b)`
     < Joining with `by = join_by(b)`
     < Joining with `by = join_by(b)`
     < Joining with `by = join_by(b)`
     < Joining with `by = join_by(b)`
       Running ‘sfg.R’
       Comparing ‘sfg.Rout’ to ‘sfg.Rout.save’ ... OK
       Running ‘spatstat.R’
       Comparing ‘spatstat.Rout’ to ‘spatstat.Rout.save’ ... OK
       Running ‘stars.R’
       Comparing ‘stars.Rout’ to ‘stars.Rout.save’ ... OK
       Running ‘test-by-element.R’
       Comparing ‘test-by-element.Rout’ to ‘test-by-element.Rout.save’ ... OK
       Running ‘testthat.R’
       Running ‘units.R’
       Comparing ‘units.Rout’ to ‘units.Rout.save’ ... OK
       Running ‘wkb.R’
       Comparing ‘wkb.Rout’ to ‘wkb.Rout.save’ ... OK
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# smdi (0.3.2)

* Email: <mailto:janick.developer@gmail.com>
* GitHub mirror: <https://github.com/cran/smdi>

Run `revdepcheck::revdep_details(, "smdi")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
          1.07; stroke-linecap: butt; stroke-linejoin: miter; fill: #8B1A1A;' />       
       < <text x='343.61' y='297.06' text-anchor='middle' style='font-size: 11.04px; fo
       : nt-family: sans;' textLength='37.44px' lengthAdjust='spacingAndGlyphs'>50.00%<
       : /text>                                                                        
       > <text x='343.61' y='297.04' text-anchor='middle' style='font-size: 11.00px; fo
       : nt-family: sans;' textLength='37.31px' lengthAdjust='spacingAndGlyphs'>50.00%<
       : /text>                                                                        
         <rect x='27.90' y='54.77' width='340.57' height='476.98' style='stroke-width: 
         1.07; stroke: #333333;' />                                                    
         </g>                                                                          
       @@ 56,5 / 56,5 @@                                                               
         <polyline points='614.60,531.75 614.60,54.77 ' style='stroke-width: 1.07; stro
         ke: #EBEBEB; stroke-linecap: butt;' />                                        
         <rect x='389.43' y='114.39' width='281.46' height='357.74' style='stroke-width
         : 1.07; stroke-linecap: butt; stroke-linejoin: miter; fill: #8B1A1A;' />      
       < <text x='689.66' y='297.06' text-anchor='middle' style='font-size: 11.04px; fo
       : nt-family: sans;' textLength='37.44px' lengthAdjust='spacingAndGlyphs'>50.00%<
       : /text>                                                                        
       > <text x='689.66' y='297.04' text-anchor='middle' style='font-size: 11.00px; fo
       : nt-family: sans;' textLength='37.31px' lengthAdjust='spacingAndGlyphs'>50.00%<
       : /text>                                                                        
         <rect x='373.95' y='54.77' width='340.57' height='476.98' style='stroke-width:
          1.07; stroke: #333333;' />                                                   
         </g>                                                                          
       
     ```

# soilFlux (0.1.5)

* GitHub: <https://github.com/HugoMachadoRodrigues/soilFlux>
* Email: <mailto:rodrigues.machado.hugo@gmail.com>
* GitHub mirror: <https://github.com/cran/soilFlux>

Run `revdepcheck::revdep_details(, "soilFlux")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Saving _problems/test-scale-38.R
       Saving _problems/test-scale-39.R
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 75 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-scale.R:38:3'): invert_minmax recovers original data ─────────
       Expected `recovered[, "sand"]` to equal `as.numeric(df$sand)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3')
       `names(expected)` is absent
       
       ── Failure ('test-scale.R:39:3'): invert_minmax recovers original data ─────────
       Expected `recovered[, "clay"]` to equal `as.numeric(df$clay)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3')
       `names(expected)` is absent
       
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 75 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# sourcoise (1.1.0)

* GitHub: <https://github.com/xtimbeau/sourcoise>
* Email: <mailto:xavier.timbeau@sciencespo.fr>
* GitHub mirror: <https://github.com/cran/sourcoise>

Run `revdepcheck::revdep_details(, "sourcoise")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         2. │ └─testthat:::check_bool(ok)
         3. └─sourcoise::sourcoise("prix_insee.R", track = "data.csv", metadata = TRUE)
         4.   └─sourcoise:::sourcoise_(...)
         5.     └─sourcoise:::get_metadata(...)
         6.       ├─dplyr::relocate(...)
         7.       ├─dplyr::mutate(...)
         8.       ├─dplyr::mutate(...)
         9.       └─dplyr::bind_cols(...)
        10.         └─vctrs::vec_cbind(!!!dots, .name_repair = .name_repair, .error_call = current_env())
       ── Error ('test-sourcoise.R:109:1'): (code run outside of `test_that()`) ───────
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. └─sourcoise::sourcoise_status(short = FALSE) at test-sourcoise.R:109:1
        2.   └─sourcoise:::get_metadata(root = root, filter = "recent")
        3.     ├─dplyr::relocate(...)
        4.     ├─dplyr::mutate(...)
        5.     ├─dplyr::mutate(...)
        6.     └─dplyr::bind_cols(...)
        7.       └─vctrs::vec_cbind(!!!dots, .name_repair = .name_repair, .error_call = current_env())
       
       [ FAIL 5 | WARN 0 | SKIP 0 | PASS 37 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# sov (2.0.0)

* GitHub: <https://github.com/spatial-voting-lab/sov>
* Email: <mailto:emma.bibina@uga.edu>
* GitHub mirror: <https://github.com/cran/sov>

Run `revdepcheck::revdep_details(, "sov")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
           ▆
        1. ├─sov::vs_sov(...) at test_vs_sov.R:39:3
        2. │ └─sov:::isolate.ideals(type, estimates, W)
        3. │   └─df_wide %>% dplyr::select(-theta) %>% ...
        4. └─tibble::column_to_rownames(., "group")
        5.   └─tibble:::abort_already_has_rownames()
        6.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        7.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Error ('test_vs_sov.R:64:3'): vs_sov (MCMC, 1D) handles zero midpoint by defaulting normal to +e1 and finds pivot ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `column_to_rownames(., "group")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─sov::vs_sov(...) at test_vs_sov.R:64:3
        2. │ └─sov:::isolate.ideals(type, estimates, W)
        3. │   └─df_wide %>% dplyr::select(-theta) %>% ...
        4. └─tibble::column_to_rownames(., "group")
        5.   └─tibble:::abort_already_has_rownames()
        6.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        7.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 7 | WARN 0 | SKIP 3 | PASS 439 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# spatialsample (0.6.1)

* GitHub: <https://github.com/tidymodels/spatialsample>
* Email: <mailto:mike.mahoney.218@gmail.com>
* GitHub mirror: <https://github.com/cran/spatialsample>

Run `revdepcheck::revdep_details(, "spatialsample")` for more info

## Newly broken

*   checking S3 generic/method consistency ... WARNING
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0h30j/working_dir/RtmpIhQqSH/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     See section ‘Generic functions and methods’ in the ‘Writing R
     Extensions’ manual.
     ```

*   checking for code/documentation mismatches ... WARNING
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0h30j/working_dir/Rtmpvj90Pz/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     ```

*   checking dependencies in R code ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0h30j/working_dir/RtmpJCORa4/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     ```

*   checking foreign function calls ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0h30j/working_dir/Rtmpp4P2IQ/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     See chapter ‘System and foreign language interfaces’ in the ‘Writing R
     Extensions’ manual.
     ```

*   checking R code for possible problems ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0h30j/working_dir/RtmptxbYQC/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0h30j/working_dir/RtmpTMUlsD/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     ```

*   checking Rd \usage sections ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmpx0h30j/working_dir/Rtmpj0B2Sd/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     The \usage entries for S3 methods should use the \method markup and not
     their full name.
     See chapter ‘Writing R documentation files’ in the ‘Writing R
     Extensions’ manual.
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# spatPomp (1.1.0)

* GitHub: <https://github.com/spatPomp-org/spatPomp>
* Email: <mailto:ionides@umich.edu>
* GitHub mirror: <https://github.com/cran/spatPomp>

Run `revdepcheck::revdep_details(, "spatPomp")` for more info

## Newly broken

*   checking tests ... NOTE
     ```
     ...
     < ℹ /tmp/RtmpN6L59M/working_dir/RtmpdLpSHo/duckdb
     < This is removed when the R session ends.
     < • Extensions are re-downloaded each session.
     < • Secrets are lost.
     < ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     < ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     < ℹ See ?duckdb_storage for details and alternatives.
       Running ‘measles2.R’
       Comparing ‘measles2.Rout’ to ‘measles2.Rout.save’ ...
     19,26d18
     < duckdb keeps downloaded extensions and secrets in a temporary directory:
     < ℹ /tmp/RtmpN6L59M/working_dir/RtmpXabnjo/duckdb
     < This is removed when the R session ends.
     < • Extensions are re-downloaded each session.
     < • Secrets are lost.
     < ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     < ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     < ℹ See ?duckdb_storage for details and alternatives.
       Running ‘param_formats.R’
       Comparing ‘param_formats.Rout’ to ‘param_formats.Rout.save’ ... OK
       Running ‘pfilter.R’
       Running ‘plot.R’
       Running ‘simulate.R’
       Running ‘spatPomp.R’
       Running ‘undefined.R’
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# speedytax (1.0.4)

* Email: <mailto:quensenj@msu.edu>
* GitHub mirror: <https://github.com/cran/speedytax>

Run `revdepcheck::revdep_details(, "speedytax")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘speedytax-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: import_sintax_tax_table
     > ### Title: Import SINTAX Taxonomy Table
     > ### Aliases: import_sintax_tax_table
     > 
     > ### ** Examples
     > 
     > # With a vsearch sintax result
     > taxonomy_file <- system.file("extdata", "vsearch_sintax_table.tsv", package = "speedytax")
     > example_tax_table <- import_sintax_tax_table(in_file = taxonomy_file)
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Input Error: unexpected ): )
     Execution halted
     ```

## In both

*   checking DESCRIPTION meta-information ... NOTE
     ```
       Missing dependency on R >= 4.1.0 because package code uses the pipe
       |> or function shorthand \(...) syntax added in R 4.1.0.
       File(s) using such syntax:
         ‘import_qiime2_tax_table.R’ ‘import_sintax_tax_table.R’
     ```

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# spicy (0.13.0)

* GitHub: <https://github.com/amaltawfik/spicy>
* Email: <mailto:amal.tawfik@hesav.ch>
* GitHub mirror: <https://github.com/cran/spicy>

Run `revdepcheck::revdep_details(, "spicy")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         ! All provided styles should be generated by stylizing helper functions.
         * Style with index `1` is invalid.
       ── Error ('test-table_continuous_lm.R:5079:5'): every gt spanner id in the family comes from a key ──
       Error in `summarise(.data, ..., .by = {     {         .by     } }, .groups = .groups)`: i In argument: `styles = list(as_style(styles))`.
       i In group 2: `locname = "columns_groups"`, `grpname = "spn_Variable"`, `colname = "Variable"`, `locnum = 3`, `rownum = -2`, `colnum = 1`.
       Caused by error in `as_style()`:
       ! All provided styles should be generated by stylizing helper functions.
       * Style with index `1` is invalid.
       ── Error ('test-table_continuous_lm.R:5126:3'): the lm coverage percentage follows decimal_mark (decision 27) ──
       Error in `summarise(.data, ..., .by = {     {         .by     } }, .groups = .groups)`: i In argument: `styles = list(as_style(styles))`.
       i In group 2: `locname = "columns_groups"`, `grpname = "spn_Variable"`, `colname = "Variable"`, `locnum = 3`, `rownum = -2`, `colnum = 1`.
       Caused by error in `as_style()`:
       ! All provided styles should be generated by stylizing helper functions.
       * Style with index `1` is invalid.
       ── Error ('test-table_regression.R:1236:3'): spanner – gt output applies tab_spanner + cols_label ──
       Error in `summarise(.data, ..., .by = {     {         .by     } }, .groups = .groups)`: i In argument: `styles = list(as_style(styles))`.
       i In group 2: `locname = "columns_groups"`, `grpname = "model_span_1"`, `colname = "A: B"`, `locnum = 3`, `rownum = -3`, `colnum = 2`.
       Caused by error in `as_style()`:
       ! All provided styles should be generated by stylizing helper functions.
       * Style with index `1` is invalid.
       
       [ FAIL 18 | WARN 0 | SKIP 13 | PASS 5670 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# spinifex (0.3.10)

* GitHub: <https://github.com/nspyrison/spinifex>
* Email: <mailto:spyrison@gmail.com>
* GitHub mirror: <https://github.com/cran/spinifex>

Run `revdepcheck::revdep_details(, "spinifex")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘spinifex-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: basis_guided
     > ### Title: Solve for the last basis of a guided tour.
     > ### Aliases: basis_guided
     > 
     > ### ** Examples
     > 
     > dat <- scale_sd(wine[, 2:6])
     > basis_guided(data = dat, index_f = tourr::holes())
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        10.             └─utils:::tail.default(peak$index_val, 1)
       ── Error ('test-2_ggproto_visualize.r:15:3'): (code run outside of `test_that()`) ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
            ▆
         1. ├─spinifex::save_history(dat, guided_tour(holes()), max_bases = 3L) at test-2_ggproto_visualize.r:15:3
         2. │ ├─utils::capture.output(ret <- eval(.expr) %>% suppressMessages())
         3. │ │ └─base::withVisible(...elt(i))
         4. │ ├─eval(.expr) %>% suppressMessages()
         5. │ ├─base::eval(.expr)
         6. │ │ └─base::eval(.expr)
         7. │ └─tourr::save_history(...)
         8. │   └─tourr (local) tour(step_size)
         9. │     └─tourr (local) tour_path(proj[[length(proj)]], data, ...)
        10. │       └─tourr (local) generator(current, data, tries, ...)
        11. │         └─tourr (local) search_f(...)
        12. │           ├─utils::tail(peak$index_val, 1)
        13. │           └─utils:::tail.default(peak$index_val, 1)
        14. └─base::suppressMessages(.)
        15.   └─base::withCallingHandlers(...)
       
       [ FAIL 2 | WARN 1 | SKIP 0 | PASS 25 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
          ▆
       1. └─spinifex::basis_guided(dat_std, index_f = tourr::holes(), d = 2)
       2.   ├─utils::capture.output(...)
       3.   │ └─base::withVisible(...elt(i))
       4.   └─tourr::save_history(...)
       5.     └─tourr (local) tour(step_size)
       6.       └─tourr (local) tour_path(proj[[length(proj)]], data, ...)
       7.         └─tourr (local) generator(current, data, tries, ...)
       8.           └─tourr (local) search_f(...)
       9.             ├─utils::tail(peak$index_val, 1)
      10.             └─utils:::tail.default(peak$index_val, 1)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'getting_started_with_spinifex.Rmd' failed with diagnostics:
     GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     --- failed re-building ‘getting_started_with_spinifex.Rmd’
     
     --- re-building ‘ggproto_api.Rmd’ using rmarkdown
     --- finished re-building ‘ggproto_api.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘getting_started_with_spinifex.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# srvyr (1.3.1)

* GitHub: <https://github.com/gergness/srvyr>
* Email: <mailto:greg.freedman@gmail.com>
* GitHub mirror: <https://github.com/cran/srvyr>

Run `revdepcheck::revdep_details(, "srvyr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         3. ├─srvyr:::summarise.grouped_svy(., x = survey_mean())
         4. │ ├─dplyr::summarise(.data$variables, !!!.dots, .groups = .groups)
         5. │ └─dplyr:::summarise.grouped_df(.data$variables, !!!.dots, .groups = .groups)
         6. │   └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
         7. │     ├─base::withCallingHandlers(...)
         8. │     └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
         9. │       └─base::lapply(.x, .f, ...)
        10. │         └─dplyr (local) FUN(X[[i]], ...)
        11. │           └─mask$eval_all_summarise(quo)
        12. │             └─dplyr (local) eval()
        13. ├─srvyr::survey_mean()
        14. │ └─srvyr::survey_prop(...)
        15. │   └─srvyr:::peeled_cur_group_id(.full_svy, cur_group())
        16. │     └─srvyr:::equal_or_both_na(...)
        17. │       └─base::Ops.factor(x, y)
        18. │         └─base::stop("level sets of factors are different")
        19. └─base::.handleSimpleError(...)
        20.   └─dplyr (local) h(simpleError(msg, call))
        21.     └─dplyr (local) handler(cnd)
        22.       └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       
       [ FAIL 7 | WARN 1 | SKIP 0 | PASS 425 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# ssrn (0.1.0)

* GitHub: <https://github.com/uribo/ssrn>
* Email: <mailto:suika1127@gmail.com>
* GitHub mirror: <https://github.com/cran/ssrn>

Run `revdepcheck::revdep_details(, "ssrn")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
       "next_{col}")`.
     Caused by warning:
     ! Using `across()` without supplying `.cols` was deprecated in dplyr 1.1.0.
     ℹ Please supply `.cols` instead.
     Warning: There was 1 warning in `mutate()`.
     ℹ In argument: `dplyr::across(..., .fns = ~dplyr::lead(.x, n = 1L), .names =
       "next_{col}")`.
     Caused by warning:
     ! Using `across()` without supplying `.cols` was deprecated in dplyr 1.1.0.
     ℹ Please supply `.cols` instead.
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
          ▆
       1. ├─ssrn::make_adjacency_matrix(jreast_jt, st_code, next_st_code)
       2. │ └─... %>% tweak_matrix_names()
       3. ├─ssrn:::tweak_matrix_names(.)
       4. ├─base::as.matrix(.)
       5. ├─ssrn:::od_wider(...)
       6. │ └─... %>% tibble::column_to_rownames(var = names(d)[1])
       7. └─tibble::column_to_rownames(., var = names(d)[1])
       8.   └─tibble:::abort_already_has_rownames()
       9.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      10.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         7. └─tibble::column_to_rownames(., var = names(d)[1])
         8.   └─tibble:::abort_already_has_rownames()
         9.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        10.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Error ('test-matrix.R:30:3'): passenger works ───────────────────────────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., var = names(d)[1])`: `.data` must be a data frame without row names.
       Backtrace:
            ▆
         1. ├─jreast_jt_od %>% ... at test-matrix.R:30:3
         2. ├─ssrn::make_passenger_matrix(...)
         3. │ └─... %>% tweak_matrix_names()
         4. ├─ssrn:::tweak_matrix_names(.)
         5. ├─base::as.matrix(.)
         6. ├─ssrn:::od_wider(...)
         7. │ └─... %>% tibble::column_to_rownames(var = names(d)[1])
         8. └─tibble::column_to_rownames(., var = names(d)[1])
         9.   └─tibble:::abort_already_has_rownames()
        10.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        11.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 2 | WARN 4 | SKIP 0 | PASS 4 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# statsExpressions (2.2.1)

* GitHub: <https://github.com/IndrajeetPatil/statsExpressions>
* Email: <mailto:patilindrajeet.science@gmail.com>
* GitHub mirror: <https://github.com/cran/statsExpressions>

Run `revdepcheck::revdep_details(, "statsExpressions")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       + expected[349, ]    3.0
       + expected[350, ]    2.0
         actual[349, ]      5.5
       - actual[350, ]      4.5
       - actual[351, ]      0.5
       - actual[352, ]      0.5
       + expected[352, ]    5.5
       
        `actual$desire[2:11]`: 9.00 6.00 6.00 6.00 7.50 6.00 6.00 10.00 10.00 10.00
       `expected$desire[2:7]`: 9.00 6.00 6.00                     10.00 10.00 10.00
       
         `actual$desire[90:95]`: 4.00 1.50 0.00                     10.00 3.50 7.50
       `expected$desire[86:95]`: 4.00 1.50 0.00 5.50 4.50 0.50 0.50 10.00 3.50 7.50
       
         `actual$desire[262:271]`: 9.00 9.00 9.00 3.00 2.00 5.50 5.50 5.50 0.50 6.50
       `expected$desire[262:271]`: 9.00 9.00 9.00 6.00 7.50 6.00 6.00 5.50 0.50 6.50
       
         `actual$desire[346:352]`: 10.00 10.00 9.00           5.50 4.50 0.50 0.50
       `expected$desire[346:352]`: 10.00 10.00 9.00 3.00 2.00 5.50 5.50          
       
       
       [ FAIL 2 | WARN 0 | SKIP 117 | PASS 98 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# stoichUtilities (1.0.2)

* GitHub: <https://github.com/STOICH-project/STOICH-utilities>
* Email: <mailto:cpetersen4@unl.edu>
* GitHub mirror: <https://github.com/cran/stoichUtilities>

Run `revdepcheck::revdep_details(, "stoichUtilities")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      12. │           └─dplyr::summarise(...)
      13. │             └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
      14. │               ├─base::withCallingHandlers(...)
      15. │               └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      16. │                 └─base::lapply(.x, .f, ...)
      17. │                   └─dplyr (local) FUN(X[[i]], ...)
      18. │                     └─mask$eval_all_summarise(quo)
      19. │                       └─dplyr (local) eval()
      20. └─gt:::as_style(styles)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'stoichUtilities.Rmd' failed with diagnostics:
     ℹ In argument: `styles = list(as_style(styles))`.
     ℹ In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname =
       "tbl_InputFile"`, `locnum = 4`, `rownum = -1`, `colnum = 1`.
     Caused by error in `as_style()`:
     ! All provided styles should be generated by stylizing helper functions.
     • Style with index `1` is invalid.
     --- failed re-building ‘stoichUtilities.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘stoichUtilities.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# stratamatch (0.1.9)

* GitHub: <https://github.com/raikens1/stratamatch>
* Email: <mailto:rockyaikens@gmail.com>
* GitHub mirror: <https://github.com/cran/stratamatch>

Run `revdepcheck::revdep_details(, "stratamatch")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Differences:
       Lengths differ: 2 is not 4
       ── Failure ('test-auto_stratify.R:524:3'): auto_stratify with logical treatment works ──
       Expected `dim(x)` to equal `c(n_strat, 6)`.
       Differences:
       1/2 mismatches
       [1] 2 - 4 == -2
       Backtrace:
           ▆
        1. └─stratamatch (local) expect_issue_table_ok(...) at test-auto_stratify.R:524:3
        2.   └─testthat::expect_equal(dim(x), c(n_strat, 6)) at test-auto_stratify.R:13:3
       ── Failure ('test-auto_stratify.R:525:3'): auto_stratify with logical treatment works ──
       Expected `dim(x)` to equal `c(n_strat, 3)`.
       Differences:
       1/2 mismatches
       [1] 2 - 4 == -2
       Backtrace:
           ▆
        1. └─stratamatch (local) expect_strata_table_ok(...) at test-auto_stratify.R:525:3
        2.   └─testthat::expect_equal(dim(x), c(n_strat, 3)) at test-auto_stratify.R:36:3
       
       [ FAIL 3 | WARN 11 | SKIP 0 | PASS 281 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# summarytabl (0.2.1)

* GitHub: <https://github.com/anyamemensah/summarytabl>
* Email: <mailto:ama@anyamemensah.com>
* GitHub mirror: <https://github.com/cran/summarytabl>

Run `revdepcheck::revdep_details(, "summarytabl")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-utils_output.R:696:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-mean_group_tbl.R:507:3'): Expected output with two variable stems where group is a variable (listwise deletion) ──
       Expected `observed1` to equal `expected1`.
       Differences:
       actual vs expected
                        mean
         actual[1, ]   3.862
         actual[2, ]   3.888
         actual[3, ]   3.952
       - actual[4, ]   3.988
       + expected[4, ] 3.987
         actual[5, ]   3.601
         actual[6, ]   3.438
         actual[7, ]   3.686
       
         `actual$mean[1:7]`: 3.8620 3.8880 3.9520 3.9880 3.6010 3.4380 3.6860
       `expected$mean[1:7]`: 3.8620 3.8880 3.9520 3.9870 3.6010 3.4380 3.6860
       
       
       [ FAIL 1 | WARN 5 | SKIP 55 | PASS 209 ]
       Error:
       ! Test failures.
       Execution halted
     ```

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

# surveyexplorer (0.2.0)

* Email: <mailto:liamhllr2@gmail.com>
* GitHub mirror: <https://github.com/cran/surveyexplorer>

Run `revdepcheck::revdep_details(, "surveyexplorer")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     • Style with index `1` is invalid.
     Backtrace:
          ▆
       1. ├─base (local) `<fn>`(x)
       2. ├─gt:::print.gt_tbl(x)
       3. │ ├─htmltools::as.tags(x, ...)
       4. │ └─gt:::as.tags.gt_tbl(x, ...)
       5. │   ├─htmltools::HTML(render_as_html(data = x))
       6. │   └─gt:::render_as_html(data = x)
       7. │     └─gt:::build_data(data = data, context = "html")
       8. │       └─gt:::resolve_footnotes_styles(data = data, tbl_type = "styles")
       9. │         ├─dplyr::summarize(...)
      10. │         └─dplyr:::summarise.data.frame(...)
      11. │           └─dplyr::summarise(...)
      12. │             └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
      13. │               ├─base::withCallingHandlers(...)
      14. │               └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      15. │                 └─base::lapply(.x, .f, ...)
      16. │                   └─dplyr (local) FUN(X[[i]], ...)
      17. │                     └─mask$eval_all_summarise(quo)
      18. │                       └─dplyr (local) eval()
      19. └─gt:::as_style(styles)
      20.   └─cli::cli_abort(...)
      21.     └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       i /tmp/RtmpQs7Qy0/working_dir/RtmpNG1APH/duckdb
       This is removed when the R session ends.
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Estimes are only preciese to one significant digit, weights may have been rounded
       Estimes are only preciese to one significant digit, weights may have been rounded
       Saving _problems/test-singlechoice-89.R
       [ FAIL 1 | WARN 48 | SKIP 0 | PASS 68 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-singlechoice.R:89:3'): sc graph: subgroups to exclude ──────────
       Error in `single_summary(., !!question, if (!is.null(group_by)) {     group_by }, subgroups_to_exclude, if (!is.null(weights)) {     weights }, na.rm)`: Levels to exclude not found within group_by variable
       Backtrace:
           ▆
        1. ├─surveyexplorer::single_freq(...) at test-singlechoice.R:89:3
        2. │ └─dataset %>% ...
        3. └─surveyexplorer::single_summary(...)
       
       [ FAIL 1 | WARN 48 | SKIP 0 | PASS 68 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# tabby (0.0.1)

* GitHub: <https://github.com/tidymodels/tabby>
* Email: <mailto:max@posit.co>
* GitHub mirror: <https://github.com/cran/tabby>

Run `revdepcheck::revdep_details(, "tabby")` for more info

## Newly broken

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpLyeQjo/working_dir/Rtmp5lwl6Z/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# tablespan (0.3.2)

* GitHub: <https://github.com/jhorzek/tablespan>
* Email: <mailto:jannik.orzek@mailbox.org>
* GitHub mirror: <https://github.com/cran/tablespan>

Run `revdepcheck::revdep_details(, "tablespan")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     • Style with index `1` is invalid.
     Backtrace:
          ▆
       1. ├─base (local) `<fn>`(x)
       2. ├─gt:::print.gt_tbl(x)
       3. │ ├─htmltools::as.tags(x, ...)
       4. │ └─gt:::as.tags.gt_tbl(x, ...)
       5. │   ├─htmltools::HTML(render_as_html(data = x))
       6. │   └─gt:::render_as_html(data = x)
       7. │     └─gt:::build_data(data = data, context = "html")
       8. │       └─gt:::resolve_footnotes_styles(data = data, tbl_type = "styles")
       9. │         ├─dplyr::summarize(...)
      10. │         └─dplyr:::summarise.data.frame(...)
      11. │           └─dplyr::summarise(...)
      12. │             └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
      13. │               ├─base::withCallingHandlers(...)
      14. │               └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      15. │                 └─base::lapply(.x, .f, ...)
      16. │                   └─dplyr (local) FUN(X[[i]], ...)
      17. │                     └─mask$eval_all_summarise(quo)
      18. │                       └─dplyr (local) eval()
      19. └─gt:::as_style(styles)
      20.   └─cli::cli_abort(...)
      21.     └─rlang::abort(...)
     Execution halted
     ```

# tabxplor (2.0.1)

* GitHub: <https://github.com/BriceNocenti/tabxplor>
* Email: <mailto:brice.nocenti@protonmail.com>
* GitHub mirror: <https://github.com/cran/tabxplor>

Run `revdepcheck::revdep_details(, "tabxplor")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       [33] NA                   | NA                     [33]          
       [34] NA                   | NA                     [34]          
       [35] NA                   - "#F6D0B2"              [35]          
       [36] NA                   | NA                     [36]          
       [37] NA                   | NA                     [37]          
       [38] NA                   | NA                     [38]          
       [39] NA                   | NA                     [39]          
       [40] NA                   | NA                     [40]          
       [41] NA                   - "#F3E0C2"              [41]          
        ... ...                    ...                    and 3 more ...
       
       `actual$White$bg/dark[45:51]`:   NA NA NA NA        NA NA NA
       `expected$White$bg/dark[45:51]`: NA NA NA "#F3E0C2" NA NA NA
       
       ── Failure ('test-tab-chi2.R:101:3'): design_effect shrinks the residual by exactly 1 / sqrt(delta-bar) ──
       Expected `eff$z/raw$z` to equal `rep(1/sqrt(dbar), 3)`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3')
       `names(expected)` is absent
       
       
       [ FAIL 5 | WARN 1 | SKIP 31 | PASS 4442 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# tailor (0.1.0)

* GitHub: <https://github.com/tidymodels/tailor>
* Email: <mailto:max@posit.co>
* GitHub mirror: <https://github.com/cran/tailor>

Run `revdepcheck::revdep_details(, "tailor")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        14. │         └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
        15. │           └─mask$eval_all_mutate(quo)
        16. │             └─dplyr (local) eval()
        17. ├─purrr::map(call_info, eval_call_info)
        18. │ └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
        19. │   ├─purrr:::with_indexed_errors(...)
        20. │   │ └─base::withCallingHandlers(...)
        21. │   ├─purrr:::call_with_cleanup(...)
        22. │   └─tailor (local) .f(.x[[i]], ...)
        23. │     └─cli::cli_abort("Error when calling {.fn {x$fun}}: {as.character(res)}")
        24. │       └─rlang::abort(...)
        25. │         └─rlang:::signal_abort(cnd, .file)
        26. │           └─base::signalCondition(cnd)
        27. ├─purrr (local) `<fn>`(`<rlng_rrr>`)
        28. │ └─cli::cli_abort(...)
        29. │   └─rlang::abort(...)
        30. │     └─rlang:::signal_abort(cnd, .file)
        31. │       └─base::signalCondition(cnd)
        32. └─dplyr (local) `<fn>`(`<prrr_rr_>`)
        33.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       
       [ FAIL 3 | WARN 0 | SKIP 32 | PASS 247 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# tbl.now (1.2.0)

* GitHub: <https://github.com/RodrigoZepeda/tbl.now>
* Email: <mailto:rzepeda17@gmail.com>
* GitHub mirror: <https://github.com/cran/tbl.now>

Run `revdepcheck::revdep_details(, "tbl.now")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-utils.R:78:3', 'test-utils.R:95:3', 'test-utils.R:121:3',
         'test-utils.R:144:3', 'test-utils.R:159:3', 'test-utils.R:185:3',
         'test-utils.R:209:3', 'test-utils.R:235:3'
       • {epinowcast} is not installed (2): 'test-converter-equivalence.R:199:5',
         'test-converter-grids.R:273:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-tidyverse.R:35:3'): It doesn't loose class after two applications ──
       Expected `capture.output(...)` to be identical to `capture.output(print(dfnow))`.
       Differences:
       actual[2:8] vs expected[2:8]
         "# Data type: \"count-incidence\""
         "# Frequency: Event: `weeks` | Report: `weeks`"
         "   event        delay sex      region   censored    report_date cases .event_num"
       - "   <date>       <int> <fct>    <fct>    <lgl>       <date>      <int>      <dbl>"
       + " * <date>       <int> <fct>    <fct>    <lgl>       <date>      <int>      <dbl>"
         "   [event_date] [...] [strata] [strata] [is_censor~ [report_da~ [cas~      [...]"
         " 1 2010-01-01       1 M        North    TRUE        2010-01-08     28          0"
         " 2 2010-01-08       1 M        North    TRUE        2010-01-15     20          1"
       
       
       [ FAIL 1 | WARN 0 | SKIP 1655 | PASS 550 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking Rd cross-references ... NOTE
     ```
     Packages unavailable to check Rd xrefs: ‘diseasenowcasting’, ‘epinowcast’
     Unknown package ‘almanac’ in Rd xrefs
     ```

# tcpl (3.3.1)

* GitHub: <https://github.com/USEPA/CompTox-ToxCast-tcpl>
* Email: <mailto:feshuk.madison@epa.gov>
* GitHub mirror: <https://github.com/cran/tcpl>

Run `revdepcheck::revdep_details(, "tcpl")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Backtrace:
           ▆
        1. └─testthat::expect_length(tbls, 2) at test-tcplggplot2Utils.R:391:3
        2.   └─testthat::quasi_label(enquo(object))
        3.     └─rlang::eval_bare(expr, quo_get_env(quo))
       ── Failure ('test-tcplggplot2Utils.R:409:3'): get_verbose_tables returns two tables large compare sc ──
       Expected `tbls <- get_verbose_tables(dat = dat, type = "sc", compare = "normalized_data_type")` not to throw any errors.
       Actually got a <rlang_error> with message:
         i In argument: `styles = list(as_style(styles))`.
         i In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname = "INDEX"`, `locnum = 4`, `rownum = -1`, `colnum = 1`.
         Caused by error in `as_style()`:
         ! All provided styles should be generated by stylizing helper functions.
         * Style with index `1` is invalid.
       ── Error ('test-tcplggplot2Utils.R:410:3'): get_verbose_tables returns two tables large compare sc ──
       Error in `eval(code, test_env)`: object 'tbls' not found
       Backtrace:
           ▆
        1. └─testthat::expect_length(tbls, 2) at test-tcplggplot2Utils.R:410:3
        2.   └─testthat::quasi_label(enquo(object))
        3.     └─rlang::eval_bare(expr, quo_get_env(quo))
       
       [ FAIL 44 | WARN 443 | SKIP 5 | PASS 659 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# testdat (0.4.4)

* GitHub: <https://github.com/socialresearchcentre/testdat>
* Email: <mailto:danny@gorcha.org>
* GitHub mirror: <https://github.com/cran/testdat>

Run `revdepcheck::revdep_details(, "testdat")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
       Running ‘testthat.R’
     Running the tests in ‘tests/testthat.R’ failed.
     Complete output:
       > library(testthat)
       > library(testdat)
       > 
       > test_check("testdat")
       Saving _problems/test-chk_filter-17.R
       Saving _problems/test-chk_filter-22.R
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 184 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-chk_filter.R:14:3'): chk_filter ──────────────────────────────
       Expected `chk_filter_all(...)` to be identical to `c(!as.logical(test_df$b[1:5]), rep(NA, 5))`.
       Differences:
       names for target but not for current
       ── Failure ('test-chk_filter.R:19:3'): chk_filter ──────────────────────────────
       Expected `chk_filter_any(...)` to be identical to `c(rep(TRUE, 5), rep(NA, 5))`.
       Differences:
       names for target but not for current
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 184 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# textrecipes (1.1.0)

* GitHub: <https://github.com/tidymodels/textrecipes>
* Email: <mailto:emil.hvitfeldt@posit.co>
* GitHub mirror: <https://github.com/cran/textrecipes>

Run `revdepcheck::revdep_details(, "textrecipes")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       ── Error ('test-tokenfilter.R:257:3'): tunable is setup to works with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-tokenfilter.R:257:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       ── Error ('test-tokenize.R:237:3'): tunable is setup to works with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-tokenize.R:237:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       
       [ FAIL 3 | WARN 0 | SKIP 140 | PASS 422 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# tglkmeans (0.6.1)

* GitHub: <https://github.com/tanaylab/tglkmeans>
* Email: <mailto:aviezer.lifshitz@weizmann.ac.il>
* GitHub mirror: <https://github.com/cran/tglkmeans>

Run `revdepcheck::revdep_details(, "tglkmeans")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        2. └─tibble::column_to_rownames(., "id")
        3.   └─tibble:::abort_already_has_rownames()
        4.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        5.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       ── Failure ('test-clustering.R:118:5'): non tidy version works ─────────────────
       Expected `res_tidy$centers %>% select(starts_with("V")) %>% as.matrix()` to equal `res$centers`.
       Differences:
       `dimnames(actual)[[1]]` is a character vector ('1', '2', '3', '4', '5', ...)
       `dimnames(expected)[[1]]` is NULL
       
       ── Error ('test-clustering.R:146:5'): add_to_data works ────────────────────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., "id")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─... %>% tibble::column_to_rownames("id") at test-clustering.R:146:5
        2. └─tibble::column_to_rownames(., "id")
        3.   └─tibble:::abort_already_has_rownames()
        4.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        5.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 3 | WARN 0 | SKIP 6 | PASS 253 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# themis (1.1.0)

* GitHub: <https://github.com/tidymodels/themis>
* Email: <mailto:emil.hvitfeldt@posit.co>
* GitHub mirror: <https://github.com/cran/themis>

Run `revdepcheck::revdep_details(, "themis")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       ── Error ('test-rose.R:321:3'): tunable is setup to works with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-rose.R:321:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       ── Error ('test-upsample.R:301:3'): tunable is setup to works with extract_parameter_set_dials ──
       Error in `eval_call_info(res$call_info[[i]])`: Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. ├─hardhat::extract_parameter_set_dials(rec) at test-upsample.R:301:3
        2. └─recipes:::extract_parameter_set_dials.recipe(rec)
        3.   └─recipes:::eval_call_info(res$call_info[[i]])
        4.     └─cli::cli_abort(...)
        5.       └─rlang::abort(...)
       
       [ FAIL 4 | WARN 0 | SKIP 269 | PASS 1343 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# tidybins (0.1.2)

* GitHub: <https://github.com/Harrison4192/tidybins>
* Email: <mailto:Harrison4192@gmail.com>
* GitHub mirror: <https://github.com/cran/tidybins>

Run `revdepcheck::revdep_details(, "tidybins")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > ### ** Examples
     > 
     > 
     > iris %>%
     + bin_cols(Sepal.Width, n_bins = 5, pretty_labels = TRUE) %>%
     + bin_cols(Petal.Width, n_bins = 3, bin_type = c("width", "kmeans")) %>%
     + bin_cols(Sepal.Width, bin_type = "xgboost", target = Species, seed = 1) -> iris1
     Error in `step_discretize_xgb()`:
     Caused by error in `prep()`:
     ! Too few observations in the early stopping validation set.
     ℹ Consider increasing the `sample_val` parameter.
     Backtrace:
          ▆
       1. ├─... %>% ...
       2. └─tidybins::bin_cols(...)
       3.   ├─recipes::prep(rec2, training = .data)
       4.   └─recipes:::prep.recipe(rec2, training = .data)
       5.     ├─recipes:::recipes_error_context(...)
       6.     │ ├─base::withCallingHandlers(...)
       7.     │ └─base::force(expr)
       8.     ├─recipes::prep(x$steps[[i]], training = training, info = x$term_info)
       9.     └─embed:::prep.step_discretize_xgb(x$steps[[i]], training = training, info = x$term_info)
      10.       └─cli::cli_abort(...)
      11.         └─rlang::abort(...)
     Execution halted
     ```

## In both

*   checking dependencies in R code ... NOTE
     ```
     Namespaces in Imports field not imported from:
       ‘badger’ ‘ggplot2’ ‘lubridate’ ‘scales’ ‘xgboost’
       All declared Imports should be used.
     ```

# tidyclust (0.3.2)

* GitHub: <https://github.com/tidymodels/tidyclust>
* Email: <mailto:emil.hvitfeldt@posit.co>
* GitHub mirror: <https://github.com/cran/tidyclust>

Run `revdepcheck::revdep_details(, "tidyclust")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     ℹ Please use `tune::finalize_model()` instead.
     Error in `mutate()`:
     ℹ In argument: `object = map(call_info, eval_call_info)`.
     Caused by error in `FUN()`:
     ! Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg,
       !!!opts) : Can't create call to non-callable object
     Backtrace:
          ▆
       1. ├─tidyclust::finalize_model_tidyclust(kmeans_spec, best_params)
       2. │ ├─hardhat::extract_parameter_set_dials(x)
       3. │ └─tidyclust:::extract_parameter_set_dials.cluster_spec(x)
       4. │   ├─dplyr::mutate(...)
       5. │   └─dplyr:::mutate.data.frame(...)
       6. │     └─dplyr::mutate(...)
       7. │       └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
       8. │         ├─base::withCallingHandlers(...)
       9. │         └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      10. │           └─mask$eval_all_mutate(quo)
      11. │             └─dplyr (local) eval()
      12. └─tidyclust:::map(call_info, eval_call_info)
      13.   └─base::lapply(.x, .f, ...)
      14.     └─tidyclust (local) FUN(X[[i]], ...)
      15.       └─cli::cli_abort("Error when calling {.fn {x$fun}}: {as.character(res)}")
      16.         └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       Caused by error in `FUN()`:
       ! Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       Backtrace:
           ▆
        1. └─testthat::expect_snapshot(...) at test-tune_cluster.R:647:3
        2.   └─testthat:::expect_snapshot_(...)
        3.     ├─base::withRestarts(cnd_signal(state$error), muffle_expectation = function() NULL)
        4.     │ └─base (local) withOneRestart(expr, restarts[[1L]])
        5.     │   └─base (local) doWithOneRestart(return(expr), restart)
        6.     └─rlang::cnd_signal(state$error)
       ── Error ('test-tune_cluster.R:664:3'): tune_cluster works with validation set ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = map(call_info, eval_call_info)`.
       Caused by error in `FUN()`:
       ! Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       ── Error ('test-tune_cluster.R:689:3'): tune_cluster works with validation set and tuned model ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = map(call_info, eval_call_info)`.
       Caused by error in `FUN()`:
       ! Error when calling : Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : Can't create call to non-callable object
       
       [ FAIL 27 | WARN 0 | SKIP 119 | PASS 483 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# tidycomm (0.4.2)

* GitHub: <https://github.com/tidycomm/tidycomm>
* Email: <mailto:julian.unkel@gmail.com>
* GitHub mirror: <https://github.com/cran/tidycomm>

Run `revdepcheck::revdep_details(, "tidycomm")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-tab_percentiles.R:6:3'): tab_percentiles calculates correct percentiles ──
       Expected `result$p10` to equal `quantile(data$autonomy_emphasis, 0.1, na.rm = TRUE)`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('10%')
       
       ── Failure ('test-tab_percentiles.R:14:3'): tab_percentiles calculates custom percentile levels correctly ──
       Expected `result$p25` to equal `quantile(data$autonomy_emphasis, 0.25, na.rm = TRUE)`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('25%')
       
       ── Failure ('test-tab_percentiles.R:15:3'): tab_percentiles calculates custom percentile levels correctly ──
       Expected `result$p75` to equal `quantile(data$autonomy_emphasis, 0.75, na.rm = TRUE)`.
       Differences:
       `names(actual)` is absent
       `names(expected)` is a character vector ('75%')
       
       
       [ FAIL 3 | WARN 3 | SKIP 0 | PASS 388 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# tidydann (1.0.2)

* GitHub: <https://github.com/gmcmacran/tidydann>
* Email: <mailto:gmcmacran@gmail.com>
* GitHub mirror: <https://github.com/cran/tidydann>

Run `revdepcheck::revdep_details(, "tidydann")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test_C_ecosystem.R:113:3'): No errors? ────────────────────────────
       Expected `test_entire_ecosystem(1)` not to throw any errors.
       Actually got a <dplyr:::mutate_error> with message:
         i In argument: `object = purrr::map(call_info, eval_call_info)`.
         Caused by error in `purrr::map()`:
         i In index: 1.
         Caused by error in `.f()`:
         ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
           Can't create call to non-callable object
       ── Failure ('test_C_ecosystem.R:120:3'): No errors? ────────────────────────────
       Expected `test_entire_ecosystem(2)` not to throw any errors.
       Actually got a <dplyr:::mutate_error> with message:
         i In argument: `object = purrr::map(call_info, eval_call_info)`.
         Caused by error in `purrr::map()`:
         i In index: 1.
         Caused by error in `.f()`:
         ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
           Can't create call to non-callable object
       
       [ FAIL 2 | WARN 0 | SKIP 0 | PASS 56 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpJJHLwf/working_dir/RtmpEwjtor/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# tidyheatmaps (0.2.1)

* GitHub: <https://github.com/jbengler/tidyheatmaps>
* Email: <mailto:broder.engler@gmail.com>
* GitHub mirror: <https://github.com/cran/tidyheatmaps>

Run `revdepcheck::revdep_details(, "tidyheatmaps")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     +             scale = "row",
     +             colors = c("#145afc","#ffffff","#ee4445")
     + )
     > 
     > # Add row and column annotation
     > tidyheatmap(data_exprs,
     +             rows = external_gene_name,
     +             columns = sample,
     +             values = expression,
     +             scale = "row",
     +             annotation_col = c(sample_type, condition, group),
     +             annotation_row = c(is_immune_gene, direction)
     + )
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. ├─tidyheatmaps::tidyheatmap(...)
      2. │ └─tidyheatmaps:::wrangle_data(...)
      3. │   └─... %>% tibble::column_to_rownames(colnames(.)[1])
      4. └─tibble::column_to_rownames(., colnames(.)[1])
      5.   └─tibble:::abort_already_has_rownames()
      6.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      7.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       Saving _problems/test-tidyheatmap-37.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 7 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-tidyheatmap.R:30:3'): gtable output is produced ────────────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(., colnames(.)[1])`: `.data` must be a data frame without row names.
       Backtrace:
            ▆
         1. ├─testthat::expect_equal(...) at test-tidyheatmap.R:30:3
         2. │ └─testthat::quasi_label(enquo(object), label)
         3. │   └─rlang::eval_bare(expr, quo_get_env(quo))
         4. ├─... %>% .[1]
         5. ├─tidyheatmaps::tidyheatmap(...)
         6. │ └─tidyheatmaps:::wrangle_data(...)
         7. │   └─... %>% tibble::column_to_rownames(colnames(.)[1])
         8. └─tibble::column_to_rownames(., colnames(.)[1])
         9.   └─tibble:::abort_already_has_rownames()
        10.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        11.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 7 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     --- re-building ‘tidyheatmaps.Rmd’ using rmarkdown
     
     Quitting from tidyheatmaps.Rmd:125-134 [unnamed-chunk-11]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/tibble_error_already_has_rownames>
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     ---
     Backtrace:
         ▆
      1. ├─tidyheatmaps::tidyheatmap(...)
      2. │ └─tidyheatmaps:::wrangle_data(...)
      3. │   └─... %>% tibble::column_to_rownames(colnames(.)[1])
      4. └─tibble::column_to_rownames(., colnames(.)[1])
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'tidyheatmaps.Rmd' failed with diagnostics:
     `.data` must be a data frame without row names.
     --- failed re-building ‘tidyheatmaps.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘tidyheatmaps.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# tidyjson (0.3.3.1)

* GitHub: <https://github.com/colearendt/tidyjson>
* Email: <mailto:cole@benetist.com>
* GitHub mirror: <https://github.com/cran/tidyjson>

Run `revdepcheck::revdep_details(, "tidyjson")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     $ milestone.creator.login               <chr> NA, NA, NA, "hadley", NA, "hadle…
     $ milestone.creator.id                  <dbl> NA, NA, NA, 4196, NA, 4196, 4196…
     $ milestone.creator.avatar_url          <chr> NA, NA, NA, "https://avatars.git…
     $ milestone.creator.gravatar_id         <chr> NA, NA, NA, "7ba164f40a50bc23dbb…
     $ milestone.creator.url                 <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.html_url            <chr> NA, NA, NA, "https://github.com/…
     $ milestone.creator.followers_url       <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.following_url       <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.gists_url           <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.starred_url         <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.subscriptions_url   <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.organizations_url   <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.repos_url           <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.events_url          <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.received_events_url <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.type                <chr> NA, NA, NA, "User", NA, "User", …
     $ milestone.creator.site_admin          <lgl> NA, NA, NA, FALSE, NA, FALSE, FA…
     $ ..JSON                                <list> ["https://api.github.com/repos/…
     > 
     > # Are there any top level objects or arrays?
     > issues %>% gather_array %>% gather_object %>% json_types %>%
     +   count(name, type) %>%
     +   filter(type %in% c("array", "object"))
     # A tibble: 5 × 3
       name         type       n
     ```

*   checking tests ... ERROR
     ```
     ...
       Backtrace:
            ▆
         1. ├─json %>% gather_array %>% spread_all %>% ... at test-tbl_json.R:660:3
         2. ├─dplyr::arrange(., !!as.name(v))
         3. ├─tidyjson:::arrange.tbl_json(., !!as.name(v))
         4. ├─base::NextMethod(generic, .data)
         5. ├─dplyr:::arrange.data.frame(., !!as.name(v))
         6. │ └─dplyr::arrange(.data, ..., .by_group = .by_group, .locale = .locale)
         7. │   └─dplyr:::arrange_rows(.data, dots = dots, locale = .locale)
         8. │     ├─dplyr::mutate(data, `:=`("{name}", !!dot), .keep = "none")
         9. │     └─dplyr:::mutate.data.frame(data, `:=`("{name}", !!dot), .keep = "none")
        10. │       └─dplyr::mutate(...)
        11. │         └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
        12. │           ├─base::withCallingHandlers(...)
        13. │           └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
        14. │             └─mask$eval_all_mutate(quo)
        15. │               └─dplyr (local) eval()
        16. └─base::.handleSimpleError(...)
        17.   └─dplyr (local) h(simpleError(msg, call))
        18.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       
       [ FAIL 15 | WARN 2 | SKIP 7 | PASS 335 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# tidylearn (0.6.0)

* GitHub: <https://github.com/ces0491/tidylearn>
* Email: <mailto:cesaire@sheetsolved.com>
* GitHub mirror: <https://github.com/cran/tidylearn>

Run `revdepcheck::revdep_details(, "tidylearn")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       `names(expected)` is absent
       
       ── Failure ('test-unsupervised.R:1322:5'): the defaults of refused pam and clara options are accepted ──
       Expected `clara_fit$model$clustering` to equal `reference_clara$clustering`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3', '4', '5', ...)
       `names(expected)` is absent
       
       ── Failure ('test-unsupervised.R:1353:3'): tidy_clara refuses data with no numeric column ──
       Expected `suppressWarnings(tidy_clara(na_x, k = 3))$model$clustering` to equal `suppressWarnings(cluster::clara(na_x, k = 3, samples = 50, sampsize = 46))$clustering`.
       Differences:
       `names(actual)` is a character vector ('1', '2', '3', '4', '5', ...)
       `names(expected)` is absent
       
       ── Failure ('test-unsupervised.R:1574:3'): MDS validates ndim and reports the dimensions it returned ──
       Expected `unname(as.matrix(mds$config))` to equal `unname(suppressWarnings(stats::cmdscale(stats::dist(flat), k = 3)))`.
       Differences:
       `actual` is a character vector ('1', '2', '3', '4', '-3.354102', ...)
       `expected` is a double vector (-3.35410196624968, -1.1180339887499, 1.11803398874989, 3.35410196624968, 8.84079752814253e-08, ...)
       
       
       [ FAIL 6 | WARN 0 | SKIP 53 | PASS 4943 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'reporting.Rmd' failed with diagnostics:
     ℹ In argument: `styles = list(as_style(styles))`.
     ℹ In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname =
       "term"`, `locnum = 4`, `rownum = -1`, `colnum = 1`.
     Caused by error in `as_style()`:
     ! All provided styles should be generated by stylizing helper functions.
     • Style with index `1` is invalid.
     --- failed re-building ‘reporting.Rmd’
     
     --- re-building ‘supervised-learning.Rmd’ using rmarkdown
     --- finished re-building ‘supervised-learning.Rmd’
     
     --- re-building ‘tuning-and-pipelines.Rmd’ using rmarkdown
     --- finished re-building ‘tuning-and-pipelines.Rmd’
     
     --- re-building ‘unsupervised-learning.Rmd’ using rmarkdown
     --- finished re-building ‘unsupervised-learning.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘reporting.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# tidyr (1.3.2)

* GitHub: <https://github.com/tidyverse/tidyr>
* Email: <mailto:hadley@posit.co>
* GitHub mirror: <https://github.com/cran/tidyr>

Run `revdepcheck::revdep_details(, "tidyr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'test-unnest-wider.R:269:1', 'test-unnest-wider.R:282:1',
         'test-unnest-wider.R:290:1', 'test-unnest-wider.R:315:1',
         'test-unnest.R:23:1', 'test-unnest.R:97:1', 'test-unnest.R:115:1',
         'test-unnest.R:120:1', 'test-unnest.R:128:1', 'test-unnest.R:139:1',
         'test-unnest.R:259:1', 'test-unnest.R:264:1', 'test-unnest.R:269:1',
         'test-unnest.R:276:1', 'test-unnest.R:282:1', 'test-unnest.R:292:1'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-nest-legacy.R:297:3'): unnest_legacy() recognize ptype ───────
       Expected `res` to equal `tibble(x = integer(), y = double())`.
       Differences:
       `actual` is length 1
       `expected` is length 2
       
       `names(actual)`:   "x"    
       `names(expected)`: "x" "y"
       
       `actual$y` is absent
       `expected$y` is a double vector ()
       
       
       [ FAIL 1 | WARN 0 | SKIP 157 | PASS 1049 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# tidyrhrv (1.1.0)

* Email: <mailto:stevenlawrence.r@gmail.com>
* GitHub mirror: <https://github.com/cran/tidyrhrv>

Run `revdepcheck::revdep_details(, "tidyrhrv")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
     Complete output:
       > library(testthat)
       > library(tidyrhrv)
       > 
       > test_check("tidyrhrv") 
       duckdb keeps downloaded extensions and secrets in a temporary directory:
       i /tmp/Rtmpp9AP2Y/working_dir/Rtmp3e6QHx/duckdb
       This is removed when the R session ends.
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Saving _problems/test-read_tilt-37.R
       [ FAIL 1 | WARN 2 | SKIP 0 | PASS 26 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-read_tilt.R:37:3'): read_tilt works with toy CSV data ────────
       Expected `result$contents[[1]]` to be an S3 object.
       Actual OO type: none.
       
       [ FAIL 1 | WARN 2 | SKIP 0 | PASS 26 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# tidysdm (1.0.4)

* GitHub: <https://github.com/EvolEcolGroup/tidysdm>
* Email: <mailto:am315@cam.ac.uk>
* GitHub mirror: <https://github.com/cran/tidysdm>

Run `revdepcheck::revdep_details(, "tidysdm")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
      13. │ └─tune:::fit_best.tune_results(member, metric = metric)
      14. │   └─tune::finalize_workflow(wflow, parameters = parameters)
      15. │     └─tune::finalize_model(mod, parameters)
      16. │       ├─hardhat::extract_parameter_set_dials(x)
      17. │       └─parsnip:::extract_parameter_set_dials.model_spec(x)
      18. │         ├─dplyr::mutate(...)
      19. │         └─dplyr:::mutate.data.frame(...)
      20. │           └─dplyr::mutate(...)
      21. │             └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      22. │               ├─base::withCallingHandlers(...)
      23. │               └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      24. │                 └─mask$eval_all_mutate(quo)
      25. │                   └─dplyr (local) eval()
      26. ├─purrr::map(call_info, eval_call_info)
      27. │ └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      28. │   ├─purrr:::with_indexed_errors(...)
      29. │   │ └─base::withCallingHandlers(...)
      30. │   ├─purrr:::call_with_cleanup(...)
      31. │   └─parsnip (local) .f(.x[[i]], ...)
      32. │     └─base::stop(paste0("Error when calling ", x$fun, "(): ", as.character(res)))
      33. └─base::.handleSimpleError(...)
      34.   └─purrr (local) h(simpleError(msg, call))
      35.     └─cli::cli_abort(...)
      36.       └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       ── Error ('test_repeat_ensemble.R:16:3'): add_repeat to empty repeat ensemble ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = purrr::map(call_info, eval_call_info)`.
       Caused by error in `purrr::map()`:
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       ── Error ('test_simple_ensemble.R:61:3'): add_member to empty simple ensemble ──
       <dplyr:::mutate_error/rlang_error/error/condition>
       Error in `mutate(.data, ..., .by = {     {         .by     } }, .keep = .keep, .before = {     {         .before     } }, .after = {     {         .after     } })`: i In argument: `object = purrr::map(call_info, eval_call_info)`.
       Caused by error in `purrr::map()`:
       i In index: 1.
       Caused by error in `.f()`:
       ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
         Can't create call to non-callable object
       
       [ FAIL 7 | WARN 19 | SKIP 1 | PASS 292 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error in `collect_metrics()`:
     ! There were 2 workflows that had no results.
     ---
     Backtrace:
         ▆
      1. ├─ggplot2::autoplot(lacerta_models)
      2. └─workflowsets:::autoplot.workflow_set(lacerta_models)
      3.   └─workflowsets:::rank_plot(...)
      4.     └─workflowsets:::pick_metric(object, rank_metric, metric)
      5.       ├─tune::collect_metrics(x)
      6.       └─workflowsets:::collect_metrics.workflow_set(x)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'tidysdm.Rmd' failed with diagnostics:
     There were 2 workflows that had no results.
     --- failed re-building ‘tidysdm.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘a1_palaeodata_application.Rmd’ ‘a2_tidymodels_additions.Rmd’
       ‘tidysdm.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpagTUIl/working_dir/RtmpGeKDd3/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# tidyseurat (0.8.10)

* GitHub: <https://github.com/stemangiola/tidyseurat>
* Email: <mailto:mangiolastefano@gmail.com>
* GitHub mirror: <https://github.com/cran/tidyseurat>

Run `revdepcheck::revdep_details(, "tidyseurat")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
      17. ├─dplyr:::mutate.data.frame(...)
      18. │ └─dplyr::mutate(...)
      19. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      20. │     ├─base::withCallingHandlers(...)
      21. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      22. │       └─mask$eval_all_mutate(quo)
      23. │         └─dplyr (local) eval()
      24. ├─purrr::map(...)
      25. │ └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      26. │   ├─purrr:::with_indexed_errors(...)
      27. │   │ └─base::withCallingHandlers(...)
      28. │   ├─purrr:::call_with_cleanup(...)
      29. │   └─tidyseurat (local) .f(.x[[i]], ...)
      30. │     └─my_data__ %>% filter(.cell %in% pull(.x, .cell)) %>% ...
      31. ├─dplyr::select(., colnames(.x))
      32. ├─dplyr::filter(., .cell %in% pull(.x, .cell))
      33. ├─tidyseurat:::filter.Seurat(., .cell %in% pull(.x, .cell))
      34. │ └─... %>% as_meta_data(.data)
      35. ├─tidyseurat:::as_meta_data(., .data)
      36. │ └─... %>% column_to_rownames(c_(seurat_object)$name)
      37. └─tibble::column_to_rownames(., c_(seurat_object)$name)
      38.   └─tibble:::abort_already_has_rownames()
      39.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      40.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        44. │ └─cli::cli_abort(...)
        45. │   └─rlang::abort(...)
        46. │     └─rlang:::signal_abort(cnd, .file)
        47. │       └─base::signalCondition(cnd)
        48. └─dplyr (local) `<fn>`(`<prrr_rr_>`)
        49.   └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       ── Error ('test-tidyr.R:4:1'): (code run outside of `test_that()`) ─────────────
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `column_to_rownames(., c_(seurat_object)$name)`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. ├─dplyr::mutate(...) at test-tidyr.R:4:1
        2. ├─tidyseurat:::mutate.Seurat(...)
        3. │ └─.data %>% as_tibble %>% dplyr::mutate(...) %>% ...
        4. ├─tidyseurat:::as_meta_data(., .data)
        5. │ └─... %>% column_to_rownames(c_(seurat_object)$name)
        6. └─tibble::column_to_rownames(., c_(seurat_object)$name)
        7.   └─tibble:::abort_already_has_rownames()
        8.     └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        9.       └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 14 | WARN 6 | SKIP 0 | PASS 46 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# tidysynthesis (0.1.3)

* GitHub: <https://github.com/UrbanInstitute/tidysynthesis>
* Email: <mailto:awilliams@urban.org>
* GitHub mirror: <https://github.com/cran/tidysynthesis>

Run `revdepcheck::revdep_details(, "tidysynthesis")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         2. │ └─testthat:::quasi_capture(...)
         3. │   ├─testthat (local) .capture(...)
         4. │   │ └─base::withCallingHandlers(...)
         5. │   └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
         6. ├─tidysynthesis::synthesize(presynth)
         7. │ └─tidysynthesis:::.synthesize(...)
         8. │   └─purrr::pmap(.l = synth_args, .f = synthesizer_engine, p = p)
         9. │     └─purrr:::pmap_("list", .l, .f, ..., .progress = .progress)
        10. │       ├─purrr:::with_indexed_errors(...)
        11. │       │ └─base::withCallingHandlers(...)
        12. │       ├─purrr:::call_with_cleanup(...)
        13. │       └─tidysynthesis (local) .f(...)
        14. │         └─base::tryCatch(...)
        15. │           └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        16. │             └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        17. │               └─value[[3L]](cond)
        18. │                 └─base::stop(e)
        19. └─purrr (local) `<fn>`(`<dply:::_>`)
        20.   └─cli::cli_abort(...)
        21.     └─rlang::abort(...)
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 981 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# timeplyr (1.1.2)

* GitHub: <https://github.com/NicChr/timeplyr>
* Email: <mailto:nick.christofides.r@gmail.com>
* GitHub mirror: <https://github.com/cran/timeplyr>

Run `revdepcheck::revdep_details(, "timeplyr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       [9589] -2.40  - 0.50     [9589]          
       [9590] -0.20  | -0.20    [9590]          
       [9591] -0.10  - 0.90     [9591]          
       [9592] -2.60  - -0.80    [9592]          
       [9593] 1.10   | 1.10     [9593]          
          ... ...      ...      and 174 more ...
       
              actual | expected                 
       [9772] 1.30   | 1.30     [9772]          
       [9773] NA     | NA       [9773]          
       [9774] NA     | NA       [9774]          
       [9775] -4.80  - -1.70    [9775]          
       [9776] NA     - -0.20    [9776]          
       [9777] NA     | NA       [9777]          
       [9778] 0.90   | 0.90     [9778]          
       [9779] 0.60   | 0.60     [9779]          
       [9780] -1.50  - -0.90    [9780]          
       [9781] -1.20  - -1.60    [9781]          
          ... ...      ...      and 219 more ...
       
       
       [ FAIL 1 | WARN 0 | SKIP 3 | PASS 613 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# timetk (2.9.1)

* GitHub: <https://github.com/business-science/timetk>
* Email: <mailto:mdancho@business-science.io>
* GitHub mirror: <https://github.com/cran/timetk>

Run `revdepcheck::revdep_details(, "timetk")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       6. ├─dplyr::ungroup(.)
       7. ├─dplyr::mutate(., .color_mod = (!!color_var_expr))
       8. ├─dplyr:::mutate.data.frame(., .color_mod = (!!color_var_expr))
       9. │ └─dplyr::mutate(...)
      10. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      11. │     ├─base::withCallingHandlers(...)
      12. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      13. │       └─mask$eval_all_mutate(quo)
      14. │         └─dplyr (local) eval()
      15. ├─lubridate::month(date, label = TRUE)
      16. └─lubridate:::month.numeric(date, label = TRUE)
      17.   └─base::stop("Values are not in 1:12")
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'TK04_Plotting_Time_Series.Rmd' failed with diagnostics:
     ℹ In argument: `.color_mod = month(date, label = TRUE)`.
     Caused by error in `month.numeric()`:
     ! Values are not in 1:12
     --- failed re-building ‘TK04_Plotting_Time_Series.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘TK04_Plotting_Time_Series.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# tinyshinyserver (0.2.1)

* GitHub: <https://github.com/lab1702/tinyshinyserver>
* Email: <mailto:cran.sherry228@passinbox.com>
* GitHub mirror: <https://github.com/cran/tinyshinyserver>

Run `revdepcheck::revdep_details(, "tinyshinyserver")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-utils.R:265:3'): is_port_in_use detects open and closed ports without warnings ──
       Expected `is_port_in_use("127.0.0.1", backend$port)` to be FALSE.
       Differences:
       `actual`:   TRUE 
       `expected`: FALSE
       
       Backtrace:
            ▆
         1. ├─testthat::expect_no_warning(...) at test-utils.R:265:3
         2. │ └─testthat:::expect_no_(...)
         3. │   └─testthat:::quasi_capture(enquo(object), NULL, capture)
         4. │     ├─testthat (local) .capture(...)
         5. │     │ ├─base::withRestarts(...)
         6. │     │ │ └─base (local) withOneRestart(expr, restarts[[1L]])
         7. │     │ │   └─base (local) doWithOneRestart(return(expr), restart)
         8. │     │ └─base::withCallingHandlers(...)
         9. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
        10. └─testthat::expect_false(is_port_in_use("127.0.0.1", backend$port))
       
       [ FAIL 1 | WARN 0 | SKIP 1 | PASS 1381 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# TKCat (1.3.0)

* GitHub: <https://github.com/patzaw/TKCat>
* Email: <mailto:patrice.godard@gmail.com>
* GitHub mirror: <https://github.com/cran/TKCat>

Run `revdepcheck::revdep_details(, "TKCat")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     Quitting from TKCat.Rmd:938-944 [unnamed-chunk-55]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error:
     ! GetQueryResult: Error evaluating duckdb query: Conversion Error: Could not convert string 'Condition' to BOOL when casting from source column collection
     ---
     Backtrace:
         ▆
      1. ├─base::merge(file_hpo, file_clinvar, by = sel_coll, dmAutoLayout = igraph_available)
      2. └─TKCat:::merge.MDB(file_hpo, file_clinvar, by = sel_coll, dmAutoLayout = igraph_available)
      3.   └─base::nrow(ic)
      4.     ├─base::dim(x)
      5.     └─base::dim.data.frame(x)
      6.       └─base::.row_names_info(x, 2L)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'TKCat.Rmd' failed with diagnostics:
     GetQueryResult: Error evaluating duckdb query: Conversion Error: Could not convert string 'Condition' to BOOL when casting from source column collection
     --- failed re-building ‘TKCat.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘TKCat.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

*   checking whether startup messages can be suppressed ... NOTE
     ```
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmprjbeBe/working_dir/RtmpBLYaHN/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     
     It looks like this package (or a package it requires) has a startup
     message which cannot be suppressed: see ?packageStartupMessage.
     ```

# tmfast (0.1.1)

* GitHub: <https://github.com/dhicks/tmfast>
* Email: <mailto:hicks.daniel.j@gmail.com>
* GitHub mirror: <https://github.com/cran/tmfast>

Run `revdepcheck::revdep_details(, "tmfast")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘tmfast-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: journal_specific
     > ### Title: "Journal-specific" simulation scenario
     > ### Aliases: journal_specific
     > 
     > ### ** Examples
     > 
     > journal_specific(k = 2, Mj = 10, vocab = 50, verbose = FALSE)
     Error in `tibble::column_to_rownames()`:
     ! `.data` must be a data frame without row names.
     Backtrace:
         ▆
      1. └─tmfast::journal_specific(k = 2, Mj = 10, vocab = 50, verbose = FALSE)
      2.   ├─base::as.matrix(...)
      3.   └─tibble::column_to_rownames(...)
      4.     └─tibble:::abort_already_has_rownames()
      5.       └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
      6.         └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Saving _problems/test-generators-69.R
       [ FAIL 1 | WARN 1 | SKIP 0 | PASS 161 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-generators.R:69:5'): journal_specific: returns tibble with expected columns and valid values ──
       <tibble_error_already_has_rownames/tibble_error/rlang_error/error/condition>
       Error in `tibble::column_to_rownames(dplyr::select(tidyr::pivot_wider(tidyr::complete(dplyr::arrange(dplyr::mutate(beta, token = as.integer(.data$token)), .data$token), token = 1:vocab), names_from = "topic", values_from = "beta", values_fill = 0, names_sort = TRUE), !"NA"), "token")`: `.data` must be a data frame without row names.
       Backtrace:
           ▆
        1. └─tmfast::journal_specific(k = 2, Mj = 10, vocab = 50, verbose = FALSE) at test-generators.R:69:5
        2.   ├─base::as.matrix(...)
        3.   └─tibble::column_to_rownames(...)
        4.     └─tibble:::abort_already_has_rownames()
        5.       └─tibble:::tibble_abort(call = call, "`.data` must be a data frame without row names.")
        6.         └─rlang::abort(x, class, ..., call = call, parent = parent, use_cli_format = TRUE)
       
       [ FAIL 1 | WARN 1 | SKIP 0 | PASS 161 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# tourr (1.2.8)

* GitHub: <https://github.com/ggobi/tourr>
* Email: <mailto:dicook@monash.edu>
* GitHub mirror: <https://github.com/cran/tourr>

Run `revdepcheck::revdep_details(, "tourr")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > ### Aliases: display_andrews animate_andrews
     > ### Keywords: hplot
     > 
     > ### ** Examples
     > 
     > animate_andrews(flea[, 1:6])
     Converting input data to the required matrix format.
     > animate_andrews(flea[, 1:6], grand_tour(d = 3))
     Converting input data to the required matrix format.
     > animate_andrews(flea[, 1:6], grand_tour(d = 6))
     Converting input data to the required matrix format.
     > 
     > # It's easy to experiment with different tour paths:
     > animate_andrews(flea[, 1:6], guided_tour(cmass()))
     Converting input data to the required matrix format.
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpWUrzU2/working_dir/RtmpGVrTiM/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       Backtrace:
           ▆
        1. └─tourr::save_history(dat, guided_tour(cmass()), max = 5) at test-tour-paths.R:174:3
        2.   └─tourr (local) tour(step_size)
        3.     └─tourr (local) tour_path(proj[[length(proj)]], data, ...)
        4.       └─tourr (local) generator(current, data, tries, ...)
        5.         └─tourr (local) search_f(...)
        6.           ├─utils::tail(peak$index_val, 1)
        7.           └─utils:::tail.default(peak$index_val, 1)
       ── Error ('test-tour-paths.R:186:3'): guided_tour index values are non-decreasing along saved path ──
       Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
       Backtrace:
           ▆
        1. └─tourr::save_history(dat, guided_tour(holes()), max = 8) at test-tour-paths.R:186:3
        2.   └─tourr (local) tour(step_size)
        3.     └─tourr (local) tour_path(proj[[length(proj)]], data, ...)
        4.       └─tourr (local) generator(current, data, tries, ...)
        5.         └─tourr (local) search_f(...)
        6.           ├─utils::tail(peak$index_val, 1)
        7.           └─utils:::tail.default(peak$index_val, 1)
       
       [ FAIL 3 | WARN 0 | SKIP 0 | PASS 1208 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# transittraj (1.1.0)

* GitHub: <https://github.com/UTEL-UIUC/transittraj>
* Email: <mailto:obrienbenjaminj@gmail.com>
* GitHub mirror: <https://github.com/cran/transittraj>

Run `revdepcheck::revdep_details(, "transittraj")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > ### Name: get_gtfs_trajectory_fun
     > ### Title: Fit continuous trajectory interpolating curves from GTFS
     > ###   schedule data
     > ### Aliases: get_gtfs_trajectory_fun
     > 
     > ### ** Examples
     > 
     > # Set my parameters
     > my_crs <- 32611
     > my_start_date <- as.Date("2026-05-27")
     > my_end_date <- as.Date("2026-05-27")
     > 
     > # Get input data
     > lineE_gtfs <- new_transittraj_data("filter_by_route")
     > lineE_shape <- new_transittraj_data("get_shape_geometry")
     > 
     > # Run function: build trajectory
     > lineE_scheduled_traj <- get_gtfs_trajectory_fun(gtfs = lineE_gtfs,
     +                                                 project_crs = my_crs,
     +                                                 date_min = my_start_date,
     +                                                 date_max = my_end_date)
     Error in stats::approxfun(x = trip_df$event_timestamp, y = trip_df$distance,  : 
       need at least two non-NA values to interpolate
     Calls: get_gtfs_trajectory_fun -> get_trajectory_fun -> <Anonymous>
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        13. │     ├─base::withCallingHandlers(...)
        14. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
        15. │       └─mask$eval_all_mutate(quo)
        16. │         └─dplyr (local) eval()
        17. ├─base::difftime(departure_time, arrival_time, units = "secs")
        18. │ ├─base::as.POSIXct(time1)
        19. │ └─base::as.POSIXct.default(time1)
        20. │   └─base::stop(...)
        21. └─base::.handleSimpleError(...)
        22.   └─dplyr (local) h(simpleError(msg, call))
        23.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       ── Error ('test-trajectory_constructors.R:396:3'): get_gtfs_trajectory_fun: multiple shapes ──
       Error in `stats::approxfun(x = trip_df$event_timestamp, y = trip_df$distance, method = "linear", rule = 1)`: need at least two non-NA values to interpolate
       Backtrace:
           ▆
        1. ├─base::suppressMessages(...) at test-trajectory_constructors.R:396:3
        2. │ └─base::withCallingHandlers(...)
        3. └─transittraj::get_gtfs_trajectory_fun(...)
        4.   └─transittraj::get_trajectory_fun(...)
        5.     └─stats::approxfun(...)
       
       [ FAIL 3 | WARN 0 | SKIP 0 | PASS 510 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# TreatmentPatterns (3.1.2)

* GitHub: <https://github.com/darwin-eu/TreatmentPatterns>
* Email: <mailto:m.l.vankessel@erasmusmc.nl>
* GitHub mirror: <https://github.com/cran/TreatmentPatterns>

Run `revdepcheck::revdep_details(, "TreatmentPatterns")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         27.  └─rlang::abort(...)
         Ran 4/4 deferred expressions
         No deferred expressions to run
         
       Backtrace:
            ▆
         1. └─testthat::test_check("TreatmentPatterns")
         2.   └─testthat::test_dir(...)
         3.     └─testthat:::test_files(...)
         4.       └─testthat:::test_files_parallel(...)
         5.         ├─withr::with_dir(...)
         6.         │ └─base::force(code)
         7.         ├─testthat::with_reporter(...)
         8.         │ └─base::tryCatch(...)
         9.         │   └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        10.         │     └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        11.         │       └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        12.         └─testthat:::parallel_event_loop_chunky(queue, reporters, ".")
        13.           └─queue$poll(Inf)
        14.             └─base::lapply(...)
        15.               └─testthat (local) FUN(X[[i]], ...)
        16.                 └─private$handle_error(msg, i)
        17.                   └─cli::cli_abort(...)
        18.                     └─rlang::abort(...)
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
       4. │   └─duckdb:::path_normalize(dbdir)
       5. └─CDMConnector::eunomiaDir()
       6.   ├─DBI::dbCreateTable(...)
       7.   └─DBI::dbCreateTable(...)
       8.     ├─DBI::sqlCreateTable(...)
       9.     └─DBI::sqlCreateTable(...)
      10.       ├─DBI::dbQuoteIdentifier(con, names(fields))
      11.       └─duckdb::dbQuoteIdentifier(con, names(fields))
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'a030_Evaluating_Output.Rmd' failed with diagnostics:
     argument is not a character vector
     --- failed re-building ‘a030_Evaluating_Output.Rmd’
     
     --- re-building ‘a998_Strategus.Rmd’ using rmarkdown
     --- finished re-building ‘a998_Strategus.Rmd’
     
     --- re-building ‘a999_Publications-Presentations.Rmd’ using rmarkdown
     --- finished re-building ‘a999_Publications-Presentations.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘a010_Computing_Pathways.Rmd’ ‘a030_Evaluating_Output.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# tsg (0.1.4)

* GitHub: <https://github.com/yng-me/tsg>
* Email: <mailto:aeabdulsamad@gmail.com>
* GitHub mirror: <https://github.com/cran/tsg>

Run `revdepcheck::revdep_details(, "tsg")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ── Failure ('test-generate_output.R:569:3'): tsg_to_gt creates spanners from collapse_list() output ──
       Expected `grepl("No difficulty", html, fixed = TRUE)` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       ── Failure ('test-generate_output.R:900:3'): write_html applies add_facade override without error ──
       Expected `write_html(tbl, path = tmp)` not to throw any errors.
       Actually got a <rlang_error> with message:
         i In argument: `styles = list(as_style(styles))`.
         i In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname = "category"`, `locnum = 4`, `rownum = -1`, `colnum = 1`.
         Caused by error in `as_style()`:
         ! All provided styles should be generated by stylizing helper functions.
         * Style with index `1` is invalid.
       ── Failure ('test-generate_output.R:901:3'): write_html applies add_facade override without error ──
       Expected `file.exists(tmp) && file.size(tmp) > 100` to be TRUE.
       Differences:
       `actual`:   FALSE
       `expected`: TRUE 
       
       
       [ FAIL 41 | WARN 0 | SKIP 3 | PASS 689 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# tsibble (1.2.0)

* GitHub: <https://github.com/tidyverts/tsibble>
* Email: <mailto:mail@mitchelloharawild.com>
* GitHub mirror: <https://github.com/cran/tsibble>

Run `revdepcheck::revdep_details(, "tsibble")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Differences:
       `actual`:   "1D" 
       `expected`: "24h"
       
       ── Error ('test-tsibble.R:304:3'): Difftime with 1 day interval ────────────────
       Error in `rbind(deparse.level, ...)`: Not supported for tsibble.
       ℹ Please use `dplyr::bind_rows()` instead.
       Backtrace:
            ▆
         1. └─testthat::expect_identical(...) at test-tsibble.R:304:3
         2.   └─testthat:::expect_waldo_equal_(msg, act, exp, info, ...)
         3.     └─testthat:::waldo_compare(...)
         4.       └─waldo::compare(x, y, ..., x_arg = x_arg, y_arg = y_arg)
         5.         └─waldo:::compare_structure(x, y, paths = c(x_arg, y_arg), opts = opts)
         6.           └─waldo:::compare_data_frame(x, y, paths, opts = opts)
         7.             └─waldo:::df_rows(x, y, paths = paths, tolerance = opts$tolerance)
         8.               └─waldo:::printed_rows(x, y, paths = paths)
         9.                 └─base::rbind(x, y)
        10.                   └─tsibble (local) rbind(deparse.level, ...)
        11.                     └─rlang::abort(c("Not supported for tsibble.", i = "Please use `dplyr::bind_rows()` instead."))
       
       [ FAIL 6 | WARN 5 | SKIP 8 | PASS 817 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# tuber (2.0.0)

* GitHub: <https://github.com/gojiplus/tuber>
* Email: <mailto:gsood07@gmail.com>
* GitHub mirror: <https://github.com/cran/tuber>

Run `revdepcheck::revdep_details(, "tuber")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       ── Failure ('test-channels.R:224:7'): get_all_channel_video_stats handles video details correctly ──
       Expected `result$view_count[1]` to equal "1000".
       Differences:
       `actual` is a logical vector (NA)
       `expected` is a character vector ('1000')
       
       Backtrace:
           ▆
        1. ├─testthat::with_mocked_bindings(...) at test-channels.R:16:3
        2. └─testthat::expect_equal(result$view_count[1], "1000") at test-channels.R:224:7
       ── Failure ('test-channels.R:225:7'): get_all_channel_video_stats handles video details correctly ──
       Expected `result$view_count[2]` to equal "2000".
       Differences:
       `actual` is a logical vector (NA)
       `expected` is a character vector ('2000')
       
       Backtrace:
           ▆
        1. ├─testthat::with_mocked_bindings(...) at test-channels.R:16:3
        2. └─testthat::expect_equal(result$view_count[2], "2000") at test-channels.R:225:7
       
       [ FAIL 6 | WARN 0 | SKIP 30 | PASS 397 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# TwoRegression (1.1.1)

* GitHub: <https://github.com/paulhibbing/TwoRegression>
* Email: <mailto:paulhibbing@gmail.com>
* GitHub mirror: <https://github.com/cran/TwoRegression>

Run `revdepcheck::revdep_details(, "TwoRegression")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
      15. ├─tidyr::unpack(., dplyr::matches("Classification$"), names_sep = "_")
      16. │ └─tidyr:::check_data_frame(data, call = error_call)
      17. │   └─base::is.data.frame(x)
      18. ├─dplyr::summarise(...)
      19. ├─dplyr::group_by(...)
      20. ├─dplyr:::group_by.data.frame(...)
      21. │ └─dplyr::group_by(.data, ..., .add = .add, .drop = .drop)
      22. │   └─dplyr::group_by_prepare(.data, ..., .add = .add, error_call = current_env())
      23. │     └─dplyr:::add_computed_columns(.data, new_groups, error_call = error_call)
      24. │       └─dplyr:::mutate_cols(...)
      25. │         ├─base::withCallingHandlers(...)
      26. │         └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      27. │           └─mask$eval_all_mutate(quo)
      28. │             └─dplyr (local) eval()
      29. ├─lubridate::floor_date(time, unit)
      30. │ └─timechange::time_floor(x, unit = unit, week_start = as_week_start(week_start))
      31. │   ├─timechange:::from_posixct(...)
      32. │   ├─timechange:::C_time_floor(...)
      33. │   └─timechange:::to_posixct(time)
      34. │     └─timechange:::unsupported_date_time(time)
      35. │       └─base::stop(...)
      36. └─base::.handleSimpleError(...)
      37.   └─dplyr (local) h(simpleError(msg, call))
      38.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
     Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      24. │       └─dplyr:::mutate_cols(...)
      25. │         ├─base::withCallingHandlers(...)
      26. │         └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      27. │           └─mask$eval_all_mutate(quo)
      28. │             └─dplyr (local) eval()
      29. └─lubridate::floor_date(time, unit)
      30.   └─timechange::time_floor(x, unit = unit, week_start = as_week_start(week_start))
      31.     ├─timechange:::from_posixct(...)
      32.     ├─timechange:::C_time_floor(...)
      33.     └─timechange:::to_posixct(time)
      34.       └─timechange:::unsupported_date_time(time)
      35.         └─base::stop(...)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'TwoRegression.Rmd' failed with diagnostics:
     ℹ In argument: `time = lubridate::floor_date(time, unit)`.
     Caused by error in `unsupported_date_time()`:
     ! Unsupported date-time class 'integer'
     --- failed re-building ‘TwoRegression.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘TwoRegression.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

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

# ustfd (0.4.4)

* GitHub: <https://github.com/groditi/ustfd>
* Email: <mailto:guillermo@newriverinvestments.com>
* GitHub mirror: <https://github.com/cran/ustfd>

Run `revdepcheck::revdep_details(, "ustfd")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         2. │ └─testthat:::expect_condition_matching_(...)
         3. │   └─testthat:::quasi_capture(...)
         4. │     ├─testthat (local) .capture(...)
         5. │     │ └─base::withCallingHandlers(...)
         6. │     └─rlang::eval_bare(quo_get_expr(.quo), quo_get_env(.quo))
         7. ├─dplyr::union_all(ustfd_response_payload(json_response), ustfd_response_payload(zero_record_response)) at test-response_payload.R:52:6
         8. └─dplyr:::union_all.data.frame(...)
         9.   ├─dplyr:::rel_try(...)
        10.   │ └─rlang::try_fetch(rel, error = identity)
        11.   │   ├─base::tryCatch(...)
        12.   │   │ └─base (local) tryCatchList(expr, classes, parentenv, handlers)
        13.   │   │   └─base (local) tryCatchOne(expr, names, parentenv, handlers[[1L]])
        14.   │   │     └─base (local) doTryCatch(return(expr), name, parentenv, handler)
        15.   │   └─base::withCallingHandlers(...)
        16.   └─dplyr:::duckdb_rel_from_df(x)
        17.     └─dplyr:::get_default_duckdb_connection()
        18.       └─dplyr:::create_default_duckdb_connection()
        19.         └─duckdb::duckdb(dbdir = dbdir)
        20.           └─duckdb:::maybe_storage_location_message(resolved_home)
        21.             └─duckdb:::inform_up_to(...)
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 27 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# vcdExtra (0.9.8)

* GitHub: <https://github.com/friendly/vcdExtra>
* Email: <mailto:friendly@yorku.ca>
* GitHub mirror: <https://github.com/cran/vcdExtra>

Run `revdepcheck::revdep_details(, "vcdExtra")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     • Style with index `1` is invalid.
     Backtrace:
          ▆
       1. ├─base (local) `<fn>`(x)
       2. ├─gt:::print.gt_tbl(x)
       3. │ ├─htmltools::as.tags(x, ...)
       4. │ └─gt:::as.tags.gt_tbl(x, ...)
       5. │   ├─htmltools::HTML(render_as_html(data = x))
       6. │   └─gt:::render_as_html(data = x)
       7. │     └─gt:::build_data(data = data, context = "html")
       8. │       └─gt:::resolve_footnotes_styles(data = data, tbl_type = "styles")
       9. │         ├─dplyr::summarize(...)
      10. │         └─dplyr:::summarise.data.frame(...)
      11. │           └─dplyr::summarise(...)
      12. │             └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
      13. │               ├─base::withCallingHandlers(...)
      14. │               └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      15. │                 └─base::lapply(.x, .f, ...)
      16. │                   └─dplyr (local) FUN(X[[i]], ...)
      17. │                     └─mask$eval_all_summarise(quo)
      18. │                       └─dplyr (local) eval()
      19. └─gt:::as_style(styles)
      20.   └─cli::cli_abort(...)
      21.     └─rlang::abort(...)
     Execution halted
     ```

## In both

*   checking Rd cross-references ... NOTE
     ```
     Unknown package ‘Fahrmeir’ in Rd xrefs
     ```

# visOmopResults (1.5.1)

* GitHub: <https://github.com/darwin-eu/visOmopResults>
* Email: <mailto:nuria.mercadebesora@ndorms.ox.ac.uk>
* GitHub mirror: <https://github.com/cran/visOmopResults>

Run `revdepcheck::revdep_details(, "visOmopResults")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     • Style with index `1` is invalid.
     Backtrace:
          ▆
       1. ├─base (local) `<fn>`(x)
       2. ├─gt:::print.gt_tbl(x)
       3. │ ├─htmltools::as.tags(x, ...)
       4. │ └─gt:::as.tags.gt_tbl(x, ...)
       5. │   ├─htmltools::HTML(render_as_html(data = x))
       6. │   └─gt:::render_as_html(data = x)
       7. │     └─gt:::build_data(data = data, context = "html")
       8. │       └─gt:::resolve_footnotes_styles(data = data, tbl_type = "styles")
       9. │         ├─dplyr::summarize(...)
      10. │         └─dplyr:::summarise.data.frame(...)
      11. │           └─dplyr::summarise(...)
      12. │             └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
      13. │               ├─base::withCallingHandlers(...)
      14. │               └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      15. │                 └─base::lapply(.x, .f, ...)
      16. │                   └─dplyr (local) FUN(X[[i]], ...)
      17. │                     └─mask$eval_all_summarise(quo)
      18. │                       └─dplyr (local) eval()
      19. └─gt:::as_style(styles)
      20.   └─cli::cli_abort(...)
      21.     └─rlang::abort(...)
     Execution halted
     ```

# vital (2.1.0)

* GitHub: <https://github.com/robjhyndman/vital>
* Email: <mailto:Rob.Hyndman@monash.edu>
* GitHub mirror: <https://github.com/cran/vital>

Run `revdepcheck::revdep_details(, "vital")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       
           filter, lag
       
       The following objects are masked from 'package:base':
       
           intersect, setdiff, setequal, union
       
       > 
       > test_check("vital")
       Saving _problems/test-STMOMO-179.R
       [ FAIL 1 | WARN 0 | SKIP 2 | PASS 708 ]
       
       ══ Skipped tests (2) ═══════════════════════════════════════════════════════════
       • On CRAN (2): 'test-hmd.R:4:3', 'test-model-parallel.R:58:7'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-STMOMO.R:179:3'): tidy() returns GAPC coefficients in long form ──
       Expected `td$estimate[td$term == "gc"]` to equal `cohort_components(select(mod, apc))$gc`.
       Differences:
       names for target but not for current
       
       [ FAIL 1 | WARN 0 | SKIP 2 | PASS 708 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# volker (3.3.1)

* GitHub: <https://github.com/strohne/volker>
* Email: <mailto:jakob.juenger@uni-muenster.de>
* GitHub mirror: <https://github.com/cran/volker>

Run `revdepcheck::revdep_details(, "volker")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘volker-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: cluster_plot
     > ### Title: Get plot for clustering result
     > ### Aliases: cluster_plot
     > ### Keywords: internal
     > 
     > ### ** Examples
     > 
     > library(volker)
     > data <- volker::chatgpt
     > 
     > cluster_plot(data, starts_with("cg_adoption"), k = 2)
     Error in stats::kmeans(items, centers = i, iter.max = 10) : 
       more cluster centers than distinct data points.
     Calls: cluster_plot -> cluster_plot -> add_clusters -> <Anonymous>
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        1. ├─... %>% expect_snapshot(cran = TRUE) at test-tables.R:353:3
        2. └─testthat::expect_snapshot(., cran = TRUE)
       ── Failure ('test-tables.R:381:3'): Values are relabeled ───────────────────────
       Snapshot of code has changed:
       old[5:11] vs new[5:11]
         Output
           
           
       -   |Gender    | min|   q1| median|   q3| max| mean|   sd|   n|
       +   |Weiblich  | min|   q1| median|   q3| max| mean|   sd|   n|
           |:---------|---:|----:|------:|----:|---:|----:|----:|---:|
           |Weiblich  |  18| 25.8|   38.0| 44.2|  63| 37.5| 13.4|  40|
           |Maennlich |  19| 32.5|   38.5| 52.0|  68| 41.2| 14.0|  60|
       
       
       ── Snapshots ───────────────────────────────────────────────────────────────────
       To review and process snapshots locally:
       * Locate check directory.
       * Copy 'tests/testthat/_snaps' to local package.
       * Run `testthat::snapshot_accept()` to accept all changes.
       * Run `testthat::snapshot_review()` to review all changes.
       [ FAIL 41 | WARN 0 | SKIP 10 | PASS 141 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# walkboutr (0.6.0)

* GitHub: <https://github.com/rwalkbout/walkboutr>
* Email: <mailto:wilnerl@uw.edu>
* GitHub mirror: <https://github.com/cran/walkboutr>

Run `revdepcheck::revdep_details(, "walkboutr")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘walkboutr-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: make_full_walk_bout_df
     > ### Title: Create a data frame of walking bouts with GPS data
     > ### Aliases: make_full_walk_bout_df
     > 
     > ### ** Examples
     > 
     > make_full_walk_bout_df()
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpCoDxXy/working_dir/Rtmp7YMrkI/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error in validate_accelerometry_data(accelerometry_counts) : 
       Error: time is not provided in date-time format. class of time variable should be: `POSIXct` `POSIXt`
     Calls: make_full_walk_bout_df ... process_accelerometry_counts_into_bouts -> validate_accelerometry_data
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        2.   └─walkboutr::process_accelerometry_counts_into_bouts(accelerometry_counts)
        3.     └─walkboutr::validate_accelerometry_data(accelerometry_counts)
       ── Error ('test-process_bouts_and_gps_epochs_into_walkbouts.R:66:3'): generate_bout_category correctly categorizes bouts ──
       Error in `validate_accelerometry_data(accelerometry_counts)`: Error: time is not provided in date-time format. class of time variable should be: `POSIXct` `POSIXt`
       Backtrace:
           ▆
        1. └─walkboutr::make_full_walk_bout_df() at test-process_bouts_and_gps_epochs_into_walkbouts.R:66:3
        2.   └─walkboutr::process_accelerometry_counts_into_bouts(accelerometry_counts)
        3.     └─walkboutr::validate_accelerometry_data(accelerometry_counts)
       ── Error ('test-process_bouts_and_gps_epochs_into_walkbouts.R:85:3'): generate_bout_category results in a df with no NA bout labels ──
       Error in `validate_accelerometry_data(accelerometry_counts)`: Error: time is not provided in date-time format. class of time variable should be: `POSIXct` `POSIXt`
       Backtrace:
           ▆
        1. └─walkboutr::make_full_walk_bout_df() at test-process_bouts_and_gps_epochs_into_walkbouts.R:85:3
        2.   └─walkboutr::process_accelerometry_counts_into_bouts(accelerometry_counts)
        3.     └─walkboutr::validate_accelerometry_data(accelerometry_counts)
       ── Failure ('test-validate_accelerometry_data.R:3:3'): happy path ──────────────
       Expected `validate_accelerometry_data(acc)` not to throw any errors.
       Actually got a <simpleError> with message:
         Error: time is not provided in date-time format. class of time variable should be: `POSIXct` `POSIXt`
       
       [ FAIL 8 | WARN 1 | SKIP 4 | PASS 27 ]
       Error:
       ! Test failures.
       Execution halted
     ```

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
     --- re-building ‘process_bouts.Rmd’ using rmarkdown
     
     Quitting from process_bouts.Rmd:34-37 [run walkbout functions]
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     <error/rlang_error>
     Error in `validate_accelerometry_data()`:
     ! Error: time is not provided in date-time format. class of time variable should be: `POSIXct` `POSIXt`
     ---
     Backtrace:
         ▆
      1. └─walkboutr::identify_walk_bouts_in_gps_and_accelerometry_data(...)
      2.   └─walkboutr::process_accelerometry_counts_into_bouts(...)
      3.     └─walkboutr::validate_accelerometry_data(accelerometry_counts)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'process_bouts.Rmd' failed with diagnostics:
     Error: time is not provided in date-time format. class of time variable should be: `POSIXct` `POSIXt`
     --- failed re-building ‘process_bouts.Rmd’
     
     SUMMARY: processing the following files failed:
       ‘changing_default_parameters.Rmd’ ‘generate_data.Rmd’
       ‘process_bouts.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# walking (0.8.2)

* Email: <mailto:muschellij2@gmail.com>
* GitHub mirror: <https://github.com/cran/walking>

Run `revdepcheck::revdep_details(, "walking")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     +                                  method = "revised")
     +   out = estimate_steps_sdt(x, sample_rate = 10L)
     + }
     Rows: 98 Columns: 6
     ── Column specification ────────────────────────────────────────────────────────
     Delimiter: ","
     chr  (1): accuracy
     dbl  (4): timestamp, x, y, z
     dttm (1): UTC time
     
     ℹ Use `spec()` to retrieve the full column specification for this data.
     ℹ Specify the column types or set `show_col_types = FALSE` to quiet this message.
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/RtmpUY4Sst/working_dir/Rtmp2jMKGv/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Finding Peak Locations
     Error in peak_func(segments = segments, acc = acc, n_samples = n_samples,  : 
       isTRUE(all.equal(new_index[, ncol(new_index)], to)) is not TRUE
     Calls: estimate_steps_verisense -> do.call -> <Anonymous> -> peak_func -> stopifnot
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       Error in `peak_func(segments = segments, acc = acc, n_samples = n_samples, k = k, half_k = half_k, peak_info = peak_info)`: isTRUE(all.equal(new_index[, ncol(new_index)], to)) is not TRUE
       Backtrace:
           ▆
        1. └─walking::verisense_count_steps(...) at test-verisense_count_steps.R:5:3
        2.   └─walking (local) peak_func(...)
        3.     └─base::stopifnot(...)
       ── Error ('test-verisense_count_steps.R:18:3'): verisense_count_steps peak_finder gives same with CSV ──
       Error in `peak_func(segments = segments, acc = acc, n_samples = n_samples, k = k, half_k = half_k, peak_info = peak_info)`: isTRUE(all.equal(new_index[, ncol(new_index)], to)) is not TRUE
       Backtrace:
           ▆
        1. └─walking::verisense_count_steps(data, sample_rate = 10L, peak_finder = "fast") at test-verisense_count_steps.R:18:3
        2.   └─walking (local) peak_func(...)
        3.     └─base::stopifnot(...)
       ── Error ('test-verisense_count_steps.R:27:3'): verisense_count_steps gives same  works ──
       Error in `peak_func(segments = segments, acc = acc, n_samples = n_samples, k = k, half_k = half_k, peak_info = peak_info)`: isTRUE(all.equal(new_index[, ncol(new_index)], to)) is not TRUE
       Backtrace:
           ▆
        1. └─walking::verisense_count_steps(input_data, sample_rate = 15L) at test-verisense_count_steps.R:27:3
        2.   └─walking (local) peak_func(...)
        3.     └─base::stopifnot(...)
       
       [ FAIL 4 | WARN 0 | SKIP 0 | PASS 51 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# wbwdi (1.0.4)

* GitHub: <https://github.com/tidy-intelligence/r-wbwdi>
* Email: <mailto:christoph@tidy-intelligence.com>
* GitHub mirror: <https://github.com/cran/wbwdi>

Run `revdepcheck::revdep_details(, "wbwdi")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
         'tests-wdi_get.R:64:3', 'tests-wdi_get.R:82:3', 'tests-wdi_get.R:101:3',
         'tests-wdi_get.R:108:3', 'tests-wdi_get.R:118:3', 'tests-wdi_get.R:128:3',
         'tests-wdi_get.R:158:3', 'tests-wdi_get_entities.R:2:3',
         'tests-wdi_get_entities.R:21:3', 'tests-wdi_get_entities.R:95:3',
         'tests-wdi_get_income_levels.R:2:3', 'tests-wdi_get_income_levels.R:33:3',
         'tests-wdi_get_indicators.R:2:3', 'tests-wdi_get_indicators.R:21:3',
         'tests-wdi_get_indicators.R:70:3', 'tests-wdi_get_languages.R:2:3',
         'tests-wdi_get_lending_types.R:2:3', 'tests-wdi_get_lending_types.R:9:3',
         'tests-wdi_get_lending_types.R:65:3', 'tests-wdi_get_regions.R:2:3',
         'tests-wdi_get_regions.R:9:3', 'tests-wdi_get_regions.R:81:3',
         'tests-wdi_get_sources.R:2:3', 'tests-wdi_get_topics.R:2:3',
         'tests-wdi_get_topics.R:9:3', 'tests-wdi_get_topics.R:72:3'
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('tests-wdi_get_indicators.R:55:7'): wdi_get_indicators handles type conversions and missing values ──
       Error in `unnest_wider(unnest_longer(select(indicators_processed, "indicator_id", "topics"), "topics"), "topics")`: i In column: `topics`.
       i In row: 1.
       Caused by error:
       ! Can't unnest elements with missing names.
       i Supply `names_sep` to generate automatic names.
       
       [ FAIL 1 | WARN 0 | SKIP 40 | PASS 126 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# weightedsurv (0.1.0)

* GitHub: <https://github.com/larry-leon/weightedsurv>
* Email: <mailto:larry.leon.05@post.harvard.edu>
* GitHub mirror: <https://github.com/cran/weightedsurv>

Run `revdepcheck::revdep_details(, "weightedsurv")` for more info

## Newly broken

*   checking re-building of vignette outputs ... ERROR
     ```
     ...
      12. │           └─dplyr::summarise(...)
      13. │             └─dplyr:::summarise_cols(.data, dplyr_quosures(...), by, "summarise")
      14. │               ├─base::withCallingHandlers(...)
      15. │               └─dplyr:::map(quosures, summarise_eval_one, mask = mask)
      16. │                 └─base::lapply(.x, .f, ...)
      17. │                   └─dplyr (local) FUN(X[[i]], ...)
      18. │                     └─mask$eval_all_summarise(quo)
      19. │                       └─dplyr (local) eval()
      20. └─gt:::as_style(styles)
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     
     Error: processing vignette 'weightedsurv_examples.Rmd' failed with diagnostics:
     ℹ In argument: `styles = list(as_style(styles))`.
     ℹ In group 1: `locname = "columns_columns"`, `grpname = NA`, `colname =
       "Variable"`, `locnum = 4`, `rownum = -1`, `colnum = 1`.
     Caused by error in `as_style()`:
     ! All provided styles should be generated by stylizing helper functions.
     • Style with index `1` is invalid.
     --- failed re-building ‘weightedsurv_examples.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘weightedsurv_examples.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# whatifbandit (1.0.3)

* GitHub: <https://github.com/Noch05/whatifbandit>
* Email: <mailto:no9857a@american.edu>
* GitHub mirror: <https://github.com/cran/whatifbandit>

Run `revdepcheck::revdep_details(, "whatifbandit")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       [362] NA           | NA             [362]          
       [363] NA           | NA             [363]          
       [364] NA           | NA             [364]          
       [365] NA           | NA             [365]          
       [366] 20077.50     - 20077.00       [366]          
       [367] NA           | NA             [367]          
         ... ...            ...            and 33 more ...
       
             actual[[11]] | expected[[11]]               
       [488] NA           | NA             [488]         
       [489] NA           | NA             [489]         
       [490] NA           | NA             [490]         
       [491] 20187.50     - 20187.00       [491]         
       [492] 20187.50     - 20187.00       [492]         
       [493] NA           | NA             [493]         
       [494] NA           | NA             [494]         
       [495] NA           | NA             [495]         
       [496] 20187.50     - 20187.00       [496]         
       [497] NA           | NA             [497]         
         ... ...            ...            and 5 more ...
       
       [ FAIL 3 | WARN 462 | SKIP 1 | PASS 1882 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# workflowsets (1.1.1)

* GitHub: <https://github.com/tidymodels/workflowsets>
* Email: <mailto:hannah@posit.co>
* GitHub mirror: <https://github.com/cran/workflowsets>

Run `revdepcheck::revdep_details(, "workflowsets")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
       8. │       └─workflowsets:::maybe_param(.x$workflow[[1]])
       9. │         ├─hardhat::extract_parameter_set_dials(x)
      10. │         └─workflows:::extract_parameter_set_dials.workflow(x)
      11. │           ├─hardhat::extract_parameter_set_dials(model)
      12. │           └─parsnip:::extract_parameter_set_dials.model_spec(model)
      13. │             ├─dplyr::mutate(...)
      14. │             └─dplyr:::mutate.data.frame(...)
      15. │               └─dplyr::mutate(...)
      16. │                 └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
      17. │                   ├─base::withCallingHandlers(...)
      18. │                   └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      19. │                     └─mask$eval_all_mutate(quo)
      20. │                       └─dplyr (local) eval()
      21. ├─purrr::map(call_info, eval_call_info)
      22. │ └─purrr:::map_("list", .x, .f, ..., .progress = .progress)
      23. │   ├─purrr:::with_indexed_errors(...)
      24. │   │ └─base::withCallingHandlers(...)
      25. │   ├─purrr:::call_with_cleanup(...)
      26. │   └─parsnip (local) .f(.x[[i]], ...)
      27. │     └─base::stop(paste0("Error when calling ", x$fun, "(): ", as.character(res)))
      28. └─base::.handleSimpleError(...)
      29.   └─purrr (local) h(simpleError(msg, call))
      30.     └─cli::cli_abort(...)
      31.       └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-options.R:23:3'): option management ──────────────────────────
       Expected `set_4 <- option_add_parameters(two_class_set)` not to throw any errors.
       Actually got a <purrr_error_indexed> with message:
         i In index: 1.
         Caused by error in `mutate()`:
         i In argument: `object = purrr::map(call_info, eval_call_info)`.
         Caused by error in `purrr::map()`:
         i In index: 1.
         Caused by error in `.f()`:
         ! Error when calling (): Error in rlang::call2(x$fun, .ns = x$pkg, !!!opts) : 
           Can't create call to non-callable object
       ── Error ('test-options.R:26:3'): option management ────────────────────────────
       Error in `eval(code, test_env)`: object 'set_4' not found
       Backtrace:
           ▆
        1. ├─base::which(!grepl("glm", set_4$wflow_id)) at test-options.R:26:3
        2. └─base::grepl("glm", set_4$wflow_id)
        3.   └─base::is.factor(x)
       
       [ FAIL 2 | WARN 0 | SKIP 30 | PASS 348 ]
       Error:
       ! Test failures.
       Execution halted
     ```

# woylier (0.0.9)

* GitHub: <https://github.com/numbats/woylier>
* Email: <mailto:dicook@monash.edu>
* GitHub mirror: <https://github.com/cran/woylier>

Run `revdepcheck::revdep_details(, "woylier")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘woylier-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: guided_tour_givens
     > ### Title: Create a guided tour with Givens interpolation
     > ### Aliases: guided_tour_givens
     > 
     > ### ** Examples
     > 
     > data(sine_curve)
     > tourr::animate_xy(sine_curve, guided_tour_givens(tourr::splines2d()), sphere=FALSE)
     Converting input data to the required matrix format.
     duckdb keeps downloaded extensions and secrets in a temporary directory:
     ℹ /tmp/Rtmp0WAahB/working_dir/Rtmp8JfGr7/duckdb
     This is removed when the R session ends.
     • Extensions are re-downloaded each session.
     • Secrets are lost.
     ℹ Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
     ℹ Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
     ℹ See ?duckdb_storage for details and alternatives.
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

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

# yamlet (1.3.4)

* GitHub: <https://github.com/bergsmat/yamlet>
* Email: <mailto:bergsmat@gmail.com>
* GitHub mirror: <https://github.com/cran/yamlet>

Run `revdepcheck::revdep_details(, "yamlet")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Differences:
       1/1 mismatches
       x[1]: "foo"
       y[1]: "Race"
       ── Failure ('test-dvec.R:160:3'): bind_rows respects column type of first argument ──
       Expected `bind_rows(dm %>% redecorate(persistence = F), dm2) %>% decorations` to produce warnings.
       ── Failure ('test-dvec.R:165:3'): bind_rows respects column type of first argument ──
       Expected `{ ... }` to produce warnings.
       ── Failure ('test-dvec.R:175:3'): bind_rows respects column type of first argument ──
       Expected `dm %<>% bind_rows(dm2)` to produce warnings.
       ── Failure ('test-dvec.R:176:3'): bind_rows respects column type of first argument ──
       Expected `attr(dm$RACE, "label")` to be identical to "Race".
       Differences:
       1/1 mismatches
       x[1]: "foo"
       y[1]: "Race"
       ── Failure ('test-groups.R:37:3'): decorations_groups sorts groups decorations ──
       Expected `decorations_groups(test)` to be identical to `c("Subject", "Time")`.
       Differences:
       Lengths differ: 0 is not 2
       
       [ FAIL 7 | WARN 16 | SKIP 3 | PASS 535 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking re-building of vignette outputs ... WARNING
     ```
     ...
       ...
     --- re-building ‘aesthetics.Rmd’ using rmarkdown
     --- finished re-building ‘aesthetics.Rmd’
     
     --- re-building ‘scripted-html.Rmd’ using rmarkdown
     --- finished re-building ‘scripted-html.Rmd’
     
     --- re-building ‘scripted-pdf.Rmd’ using rmarkdown
     ! LaTeX Error: File `lmodern.sty' not found.
     
     ! Emergency stop.
     <read *> 
     
     Error: processing vignette 'scripted-pdf.Rmd' failed with diagnostics:
     LaTeX failed to compile scripted-pdf.tex. See https://yihui.org/tinytex/r/#debugging for debugging tips. See scripted-pdf.log for more info.
     --- failed re-building ‘scripted-pdf.Rmd’
     
     --- re-building ‘yamlet-introduction.Rmd’ using rmarkdown
     --- finished re-building ‘yamlet-introduction.Rmd’
     
     SUMMARY: processing the following file failed:
       ‘scripted-pdf.Rmd’
     
     Error: Vignette re-building failed.
     Execution halted
     ```

# yardstick (1.4.0)

* GitHub: <https://github.com/tidymodels/yardstick>
* Email: <mailto:emil.hvitfeldt@posit.co>
* GitHub mirror: <https://github.com/cran/yardstick>

Run `revdepcheck::revdep_details(, "yardstick")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     > cells_per_resample <- unnest(mutate(conf_mat(group_by(hpc_cv, Resample), 
     +     obs, pred), tidied = lapply(conf_mat, tidy)), tidied)
     > counts_per_resample <- summarize(group_by(mutate(left_join(summarize(group_by(hpc_cv, 
     +     Resample), total = n()), cells_per_resample, by = "Resample"), prop = value/total), 
     +     name), prop = mean(prop))
     Error in `group_by()`:
     ! This operation cannot be carried out by DuckDB, and the input is a
       stingy duckplyr frame.
     ℹ Use `compute(prudence = "lavish")` to materialize to temporary storage and
       continue with duckplyr.
     ℹ See `vignette("prudence")` for other options.
     Backtrace:
          ▆
       1. ├─base::withAutoprint(...)
       2. │ └─base::source(...)
       3. │   ├─base::withVisible(eval(ei, envir))
       4. │   └─base::eval(ei, envir)
       5. │     └─base::eval(ei, envir)
       6. ├─dplyr::summarize(...)
       7. ├─dplyr::group_by(...)
       8. └─dplyr:::group_by.data.frame(...)
       9.   └─dplyr:::check_prudence(.data, duckplyr_error)
      10.     └─cli::cli_abort(...)
      11.       └─rlang::abort(...)
     Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

# ycevo (0.3.0)

* GitHub: <https://github.com/bonsook/ycevo>
* Email: <mailto:yangyangzhuoran@gmail.com>
* GitHub mirror: <https://github.com/cran/ycevo>

Run `revdepcheck::revdep_details(, "ycevo")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > test_check("ycevo")
       duckdb keeps downloaded extensions and secrets in a temporary directory:
       i /tmp/Rtmpu7KILE/working_dir/RtmpMWftwe/duckdb
       This is removed when the R session ends.
       * Extensions are re-downloaded each session.
       * Secrets are lost.
       i Run duckdb(shared_home = TRUE) (or create ~/.duckdb) to keep them (suitable for most users).
       i Run duckdb(shared_home = FALSE) to accept the temporary directory (and silence this message).
       i See ?duckdb_storage for details and alternatives.
       Caught rlang_error. Canceling all iterations ...
       Saving _problems/test-estimation-3.R
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 4 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Error ('test-estimation.R:3:1'): (code run outside of `test_that()`) ────────
       Error in `mutate(., discount = mapply(function(hh, db) {     hh_interpol <- hh %*% t(interpol_weights)     X <- diag(1, length(tau)) + hh_interpol     mutate(db, discount = as.vector(solve(X) %*% dbar), .keep = "unused") }, hh = hh, db = db, SIMPLIFY = FALSE))`: This operation cannot be carried out by DuckDB, and the input is a stingy duckplyr frame.
       i Use `compute(prudence = "lavish")` to materialize to temporary storage and continue with duckplyr.
       i See `vignette("prudence")` for other options.
       Caused by error in `mutate()`:
       ! Can't translate function `mapply()`.
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 4 ]
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

