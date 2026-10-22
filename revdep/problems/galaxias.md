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

