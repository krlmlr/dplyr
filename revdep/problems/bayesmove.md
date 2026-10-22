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

