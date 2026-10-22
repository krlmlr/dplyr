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

