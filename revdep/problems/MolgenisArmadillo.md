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

