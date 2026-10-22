# funkyheatmap (0.5.2)

* GitHub: <https://github.com/funkyheatmap/funkyheatmap>
* Email: <mailto:rcannood@gmail.com>
* GitHub mirror: <https://github.com/cran/funkyheatmap>

Run `revdepcheck::revdep_details(, "funkyheatmap")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       > test-verify_column_groups.R: i No column groups was provided, deriving from column info.
       > test-verify_column_groups.R: i Column groups did not contain a column called 'palette'. Assuming no colour scales need to be used.
       > test-verify_column_groups.R: i Column groups did not contain a column called 'level1'. Using `column_info$group` as a makeshift column group name.
       > test-verify_column_info.R: i Column info did not contain column `name`, using `id` to generate it.
       > test-verify_column_info.R: i Column info did not contain group information, assuming columns are ungrouped.
       > test-verify_column_info.R: i Column info did not contain a column called 'palette', generating palettes based on the 'geom' column.
       > test-verify_column_info.R: i Column info did not contain a column called 'width', generating options based on the 'geom' column.
       > test-verify_column_info.R: i Column info did not contain a column called 'legend', generating options based on the 'geom' column.
       > test-verify_column_info.R: i No column info was provided, assuming all columns in `data` are to be plotted.
       > test-verify_column_info.R: i Column info did not contain column `name`, using `id` to generate it.
       > test-verify_column_info.R: i Column info did not contain information on which columns to plot, inferring from `data` types.
       > test-verify_column_info.R: i Column info did not contain group information, assuming columns are ungrouped.
       > test-verify_column_info.R: i Column info did not contain a column called 'palette', generating palettes based on the 'geom' column.
       > test-verify_column_info.R: i Column info did not contain a column called 'width', generating options based on the 'geom' column.
       > test-verify_column_info.R: i Column info did not contain a column called 'legend', generating options based on the 'geom' column.
       > test-verify_column_info.R: i Detected json in the options column, parsing.
       > test-verify_column_info.R: i Column info did not contain column `name`, using `id` to generate it.
       > test-verify_column_info.R: i Column info did not contain group information, assuming columns are ungrouped.
       > test-verify_column_info.R: i Column info did not contain a column called 'palette', generating palettes based on the 'geom' column.
       > test-verify_column_info.R: i Column info did not contain a column called 'legend', generating options based on the 'geom' column.
       > test-verify_row_groups.R: i No row groups was provided, deriving from row info.
       > test-verify_row_groups.R: i Row groups did not contain a row called 'level1'. Using `row_info$group` as a makeshift row group name.
       > test-verify_row_info.R: i No row info was provided, assuming all rows in `data` are to be plotted.
       > test-verify_row_info.R: i Row info did not contain group information, assuming rows are ungrouped.
       Killed
     ```

