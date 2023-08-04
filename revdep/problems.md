# janitor

<details>

* Version: 2.2.0
* GitHub: https://github.com/sfirke/janitor
* Source code: https://github.com/cran/janitor
* Date/Publication: 2023-02-02 16:50:06 UTC
* Number of recursive dependencies: 82

Run `revdepcheck::cloud_details(, "janitor")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
      - actual[2, ]   1  18    0.72
      + expected[2, ] 2   7    0.28
      
        `actual$n`: 2 1
      `expected$n`: 1 2
      
        `actual$n_n`:  7 18
      `expected$n_n`: 18  7
      
        `actual$percent`: 0.3 0.7
      `expected$percent`: 0.7 0.3
      
      [ FAIL 6 | WARN 0 | SKIP 1 | PASS 797 ]
      Error: Test failures
      Execution halted
    ```

# recipes

<details>

* Version: 1.0.6
* GitHub: https://github.com/tidymodels/recipes
* Source code: https://github.com/cran/recipes
* Date/Publication: 2023-04-25 02:40:02 UTC
* Number of recursive dependencies: 138

Run `revdepcheck::cloud_details(, "recipes")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Last 13 lines of output:
       11. │         └─tidyselect:::eval_c(expr, data_mask, context_mask)
       12. │           └─tidyselect:::reduce_sels(node, data_mask, context_mask, init = init)
       13. │             └─tidyselect:::walk_data_tree(new, data_mask, context_mask)
       14. │               └─tidyselect:::as_indices_sel_impl(...)
       15. │                 └─tidyselect:::as_indices_impl(...)
       16. │                   └─tidyselect:::chr_as_locations(x, vars, call = call, arg = arg)
       17. │                     └─vctrs::vec_as_location(...)
       18. └─vctrs (local) `<fn>`()
       19.   └─vctrs:::stop_subscript_oob(...)
       20.     └─vctrs:::stop_subscript(...)
       21.       └─rlang::abort(...)
      
      [ FAIL 1 | WARN 2 | SKIP 429 | PASS 1985 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking Rd cross-references ... NOTE
    ```
    Packages unavailable to check Rd xrefs: ‘fastICA’, ‘dimRed’
    ```

