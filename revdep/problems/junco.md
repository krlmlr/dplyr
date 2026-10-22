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

