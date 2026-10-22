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

