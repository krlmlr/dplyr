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

