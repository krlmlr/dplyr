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

