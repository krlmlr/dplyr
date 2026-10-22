# speedytax (1.0.4)

* Email: <mailto:quensenj@msu.edu>
* GitHub mirror: <https://github.com/cran/speedytax>

Run `revdepcheck::revdep_details(, "speedytax")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘speedytax-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: import_sintax_tax_table
     > ### Title: Import SINTAX Taxonomy Table
     > ### Aliases: import_sintax_tax_table
     > 
     > ### ** Examples
     > 
     > # With a vsearch sintax result
     > taxonomy_file <- system.file("extdata", "vsearch_sintax_table.tsv", package = "speedytax")
     > example_tax_table <- import_sintax_tax_table(in_file = taxonomy_file)
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Input Error: unexpected ): )
     Execution halted
     ```

## In both

*   checking DESCRIPTION meta-information ... NOTE
     ```
       Missing dependency on R >= 4.1.0 because package code uses the pipe
       |> or function shorthand \(...) syntax added in R 4.1.0.
       File(s) using such syntax:
         ‘import_qiime2_tax_table.R’ ‘import_sintax_tax_table.R’
     ```

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

