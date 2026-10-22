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

