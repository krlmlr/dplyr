# CodelistGenerator

<details>

* Version: 2.2.3
* GitHub: NA
* Source code: https://github.com/cran/CodelistGenerator
* Date/Publication: 2024-03-08 22:20:02 UTC
* Number of recursive dependencies: 95

Run `revdepcheck::cloud_details(, "CodelistGenerator")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/tests.html
      > # * https://testthat.r-lib.org/reference/test_package.html#special-files
      > 
      > library(testthat)
      > library(CodelistGenerator)
      > 
      > test_check("CodelistGenerator")
      Starting 2 test processes
      [ FAIL 2 | WARN 0 | SKIP 8 | PASS 281 ]
      
      ══ Skipped tests (8) ═══════════════════════════════════════════════════════════
      • On CRAN (2): 'test-summariseCodeUse.R:2:1', 'test-summariseCodeUse.R:290:3'
      • Sys.getenv("CDM5_REDSHIFT_DBNAME") == "" is TRUE (4):
        'test-codesFrom.R:100:3', 'test-dbms.R:6:3', 'test-findUnmappedCodes.R:3:3',
        'test-summariseCodeUse.R:498:3'
      • Sys.getenv("CDM5_SQL_SERVER_SERVER") == "" is TRUE (1):
        'test-codesInUse.R:36:3'
      • Sys.getenv("darwinDbDatabaseServer") == "" is TRUE (1):
        'test-synthea_sql_server.R:2:3'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-codesFrom.R:26:3'): test inputs - mock ───────────────────────
      `codesFromConceptSet(...)` did not throw the expected error.
      ── Failure ('test-codesFrom.R:26:3'): test inputs - mock ───────────────────────
      `codesFromConceptSet(...)` did not throw the expected error.
      
      [ FAIL 2 | WARN 0 | SKIP 8 | PASS 281 ]
      Error: Test failures
      Execution halted
    ```

# iNZightTools

<details>

* Version: 2.0.1
* GitHub: https://github.com/iNZightVIT/iNZightTools
* Source code: https://github.com/cran/iNZightTools
* Date/Publication: 2023-10-12 11:50:08 UTC
* Number of recursive dependencies: 120

Run `revdepcheck::cloud_details(, "iNZightTools")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(iNZightTools)
      
      Attaching package: 'iNZightTools'
      
      The following object is masked from 'package:stats':
      
          filter
      
      > 
      > test_check("iNZightTools")
      Loading required package: grid
      Loading required package: Matrix
      Loading required package: survival
      
      Attaching package: 'survey'
      
      The following object is masked from 'package:graphics':
      
          dotchart
      
      Loading required package: surveyspec
      
      Attaching package: 'magrittr'
      
      The following objects are masked from 'package:testthat':
      
          equals, is_less_than, not
      
      [ FAIL 1 | WARN 0 | SKIP 4 | PASS 397 ]
      
      ══ Skipped tests (4) ═══════════════════════════════════════════════════════════
      • On CRAN (4): 'test_smart_read.R:29:5', 'test_smart_read.R:259:5',
        'test_survey_design.R:80:5', 'test_survey_design.R:120:5'
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test_join_data.R:16:5'): Auto detection works ─────────────────────
      `join_data(iris, iris)` did not throw the expected warning.
      
      [ FAIL 1 | WARN 0 | SKIP 4 | PASS 397 ]
      Error: Test failures
      Execution halted
    ```

# rWCVP

<details>

* Version: 1.2.4
* GitHub: https://github.com/matildabrown/rWCVP
* Source code: https://github.com/cran/rWCVP
* Date/Publication: 2023-02-16 15:20:02 UTC
* Number of recursive dependencies: 130

Run `revdepcheck::cloud_details(, "rWCVP")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(rWCVP)
      > 
      > test_check("rWCVP")
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      
      -- Exact matching 7 names --
      
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      ! No author information supplied - matching on taxon name only
      
      -- Exact matching  names --
      
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      
      -- Exact matching 7 names --
      
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `genus`, `species`, `infra_rank`, and `infra` columns
      ! No author information supplied - matching on taxon name only
      
      -- Exact matching  names --
      
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      
      -- Exact matching 7 names --
      
      i No area specified. Generating global summary.
      i Aggregating occurrence types across input area ("the world") - see `?wcvp_summary()` for details.
      i No area specified. Generating global summary.
      i Matches to input geography found at Continent (Level 1)
      i Aggregating occurrence types across input area ("ASIA-TROPICAL") - see `?wcvp_summary()` for details.
      [ FAIL 12 | WARN 0 | SKIP 0 | PASS 19 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-exact_match.R:2:3'): exact match with author returns expected output ──
      Error: Error evaluating duckdb query: Invalid Input Error: Invalid unicode (byte sequence mismatch) detected in value construction
      Backtrace:
           ▆
        1. ├─rWCVP::wcvp_match_exact(...) at test-exact_match.R:2:3
        2. │ └─... %>% select(-"n")
        3. ├─dplyr::select(., -"n")
        4. ├─dplyr::mutate(., multiple_matches = .data$n > 1)
        5. ├─dplyr::add_count(., .data[[id_col]])
        6. ├─dplyr::mutate(...)
        7. └─dplyr:::mutate.data.frame(...)
        8.   └─dplyr::mutate(...)
        9.     └─dplyr:::compute_by(...)
       10.       ├─dplyr::group_data(data)
       11.       ├─dplyr:::group_data.tbl_df(data)
       12.       ├─base::NextMethod()
       13.       └─dplyr:::group_data.data.frame(data)
       14.         └─base::nrow(.data)
       15.           ├─base::dim(x)
       16.           └─base::dim.data.frame(x)
       17.             └─base::.row_names_info(x, 2L)
      ── Error ('test-exact_match.R:11:3'): exact match without author returns expected output ──
      Error: Error evaluating duckdb query: Invalid Input Error: Invalid unicode (byte sequence mismatch) detected in value construction
      Backtrace:
           ▆
        1. ├─rWCVP::wcvp_match_exact(...) at test-exact_match.R:11:3
        2. │ └─... %>% select(-"n")
        3. ├─dplyr::select(., -"n")
        4. ├─dplyr::mutate(., multiple_matches = .data$n > 1)
        5. ├─dplyr::add_count(., .data[[id_col]])
        6. ├─dplyr::mutate(...)
        7. └─dplyr:::mutate.data.frame(...)
        8.   └─dplyr::mutate(...)
        9.     └─dplyr:::compute_by(...)
       10.       ├─dplyr::group_data(data)
       11.       ├─dplyr:::group_data.tbl_df(data)
       12.       ├─base::NextMethod()
       13.       └─dplyr:::group_data.data.frame(data)
       14.         └─base::nrow(.data)
       15.           ├─base::dim(x)
       16.           └─base::dim.data.frame(x)
       17.             └─base::.row_names_info(x, 2L)
      ── Error ('test-fuzzy_match.R:4:3'): edit match returns name within correct distance ──
      Error in `nchar(str2)`: invalid multibyte string, element 8
      Backtrace:
          ▆
       1. └─rWCVP:::edit_match_name_(name, lookup_data) at test-fuzzy_match.R:4:3
       2.   └─RecordLinkage::levenshteinSim(name, genus_lookup$taxon_name)
       3.     └─base::pmax(nchar(str1), nchar(str2))
      ── Error ('test-fuzzy_match.R:12:3'): edit match returns name within correct distance when genus mispelled ──
      Error in `nchar(str2)`: invalid multibyte string, element 8
      Backtrace:
          ▆
       1. └─rWCVP:::edit_match_name_(name, lookup_data) at test-fuzzy_match.R:12:3
       2.   └─RecordLinkage::levenshteinSim(name, genus_lookup$taxon_name)
       3.     └─base::pmax(nchar(str1), nchar(str2))
      ── Error ('test-fuzzy_match.R:18:3'): edit match returns expected output ───────
      <dplyr:::mutate_error/rlang_error/error/condition>
      Error in `mutate(.data, ..., .by = {
          {
              .by
          }
      }, .keep = .keep, .before = {
          {
              .before
          }
      }, .after = {
          {
              .after
          }
      })`: i In argument: `match_info = map(...)`.
      Caused by error in `map()`:
      i In index: 1.
      Caused by error in `nchar()`:
      ! invalid multibyte string, element 8
      ── Error ('test-fuzzy_match.R:27:3'): phonetic match returns expected output ───
      <dplyr:::mutate_error/rlang_error/error/condition>
      Error in `mutate(.data, ..., .by = {
          {
              .by
          }
      }, .keep = .keep, .before = {
          {
              .before
          }
      }, .after = {
          {
              .after
          }
      })`: i In argument: `match_similarity = levenshteinSim(.data$sanitised_, .data$taxon_name)`.
      Caused by error in `nchar()`:
      ! invalid multibyte string, element 7
      Backtrace:
           ▆
        1. ├─rWCVP::phonetic_match(match_data, lookup_data, name_col = "scientificName") at test-fuzzy_match.R:27:3
        2. │ └─... %>% ungroup()
        3. ├─dplyr::ungroup(.)
        4. ├─dplyr::mutate(...)
        5. ├─dplyr::rowwise(.)
        6. ├─dplyr::mutate(...)
        7. ├─dplyr:::mutate.data.frame(...)
        8. │ └─dplyr::mutate(...)
        9. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
       10. │     ├─base::withCallingHandlers(...)
       11. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
       12. │       └─mask$eval_all_mutate(quo)
       13. │         └─dplyr (local) eval()
       14. ├─RecordLinkage::levenshteinSim(.data$sanitised_, .data$taxon_name)
       15. │ └─base::pmax(nchar(str1), nchar(str2))
       16. └─base::.handleSimpleError(...)
       17.   └─dplyr (local) h(simpleError(msg, call))
       18.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
      ── Error ('test-fuzzy_match.R:36:3'): fuzzy match returns expected output ──────
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_fuzzy(match_data, lookup_data, name_col = "scientificName") at test-fuzzy_match.R:36:3
       2. │ └─... %>% filter(!is.na(.data$wcvp_id))
       3. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       4. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       5.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       6.     └─base::toupper(word)
      ── Error ('test-match_names.R:2:3'): match names with author returns expected output ──
      Error: Error evaluating duckdb query: Invalid Input Error: Invalid unicode (byte sequence mismatch) detected in value construction
      Backtrace:
           ▆
        1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:2:3
        2. │ └─... %>% filter(!is.na(.data$wcvp_id))
        3. ├─dplyr::filter(., !is.na(.data$wcvp_id))
        4. ├─rWCVP::wcvp_match_exact(...)
        5. │ └─... %>% select(-"n")
        6. ├─dplyr::select(., -"n")
        7. ├─dplyr::mutate(., multiple_matches = .data$n > 1)
        8. ├─dplyr::add_count(., .data[[id_col]])
        9. ├─dplyr::mutate(...)
       10. └─dplyr:::mutate.data.frame(...)
       11.   └─dplyr::mutate(...)
       12.     └─dplyr:::compute_by(...)
       13.       ├─dplyr::group_data(data)
       14.       ├─dplyr:::group_data.tbl_df(data)
       15.       ├─base::NextMethod()
       16.       └─dplyr:::group_data.data.frame(data)
       17.         └─base::nrow(.data)
       18.           ├─base::dim(x)
       19.           └─base::dim.data.frame(x)
       20.             └─base::.row_names_info(x, 2L)
      ── Error ('test-match_names.R:16:3'): match names without author returns expected output ──
      Error: Error evaluating duckdb query: Invalid Input Error: Invalid unicode (byte sequence mismatch) detected in value construction
      Backtrace:
           ▆
        1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:16:3
        2. │ └─... %>% filter(!is.na(.data$wcvp_id))
        3. ├─dplyr::filter(., !is.na(.data$wcvp_id))
        4. ├─rWCVP::wcvp_match_exact(...)
        5. │ └─... %>% select(-"n")
        6. ├─dplyr::select(., -"n")
        7. ├─dplyr::mutate(., multiple_matches = .data$n > 1)
        8. ├─dplyr::add_count(., .data[[id_col]])
        9. ├─dplyr::mutate(...)
       10. └─dplyr:::mutate.data.frame(...)
       11.   └─dplyr::mutate(...)
       12.     └─dplyr:::compute_by(...)
       13.       ├─dplyr::group_data(data)
       14.       ├─dplyr:::group_data.tbl_df(data)
       15.       ├─base::NextMethod()
       16.       └─dplyr:::group_data.data.frame(data)
       17.         └─base::nrow(.data)
       18.           ├─base::dim(x)
       19.           └─base::dim.data.frame(x)
       20.             └─base::.row_names_info(x, 2L)
      ── Error ('test-match_names.R:30:3'): match names without fuzzy returns expected output ──
      Error: Error evaluating duckdb query: Invalid Input Error: Invalid unicode (byte sequence mismatch) detected in value construction
      Backtrace:
           ▆
        1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:30:3
        2. │ └─... %>% filter(!is.na(.data$wcvp_id))
        3. ├─dplyr::filter(., !is.na(.data$wcvp_id))
        4. ├─rWCVP::wcvp_match_exact(...)
        5. │ └─... %>% select(-"n")
        6. ├─dplyr::select(., -"n")
        7. ├─dplyr::mutate(., multiple_matches = .data$n > 1)
        8. ├─dplyr::add_count(., .data[[id_col]])
        9. ├─dplyr::mutate(...)
       10. └─dplyr:::mutate.data.frame(...)
       11.   └─dplyr::mutate(...)
       12.     └─dplyr:::compute_by(...)
       13.       ├─dplyr::group_data(data)
       14.       ├─dplyr:::group_data.tbl_df(data)
       15.       ├─base::NextMethod()
       16.       └─dplyr:::group_data.data.frame(data)
       17.         └─base::nrow(.data)
       18.           ├─base::dim(x)
       19.           └─base::dim.data.frame(x)
       20.             └─base::.row_names_info(x, 2L)
      ── Error ('test-match_names.R:44:3'): match names without taxon name parts returns expected output ──
      Error: Error evaluating duckdb query: Invalid Input Error: Invalid unicode (byte sequence mismatch) detected in value construction
      Backtrace:
           ▆
        1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:44:3
        2. │ └─... %>% filter(!is.na(.data$wcvp_id))
        3. ├─dplyr::filter(., !is.na(.data$wcvp_id))
        4. ├─rWCVP::wcvp_match_exact(...)
        5. │ └─... %>% select(-"n")
        6. ├─dplyr::select(., -"n")
        7. ├─dplyr::mutate(., multiple_matches = .data$n > 1)
        8. ├─dplyr::add_count(., .data[[id_col]])
        9. ├─dplyr::mutate(...)
       10. └─dplyr:::mutate.data.frame(...)
       11.   └─dplyr::mutate(...)
       12.     └─dplyr:::compute_by(...)
       13.       ├─dplyr::group_data(data)
       14.       ├─dplyr:::group_data.tbl_df(data)
       15.       ├─base::NextMethod()
       16.       └─dplyr:::group_data.data.frame(data)
       17.         └─base::nrow(.data)
       18.           ├─base::dim(x)
       19.           └─base::dim.data.frame(x)
       20.             └─base::.row_names_info(x, 2L)
      ── Error ('test-match_names.R:58:3'): match names returns original columns ─────
      Error: Error evaluating duckdb query: Invalid Input Error: Invalid unicode (byte sequence mismatch) detected in value construction
      Backtrace:
           ▆
        1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:58:3
        2. │ └─... %>% filter(!is.na(.data$wcvp_id))
        3. ├─dplyr::filter(., !is.na(.data$wcvp_id))
        4. ├─rWCVP::wcvp_match_exact(...)
        5. │ └─... %>% select(-"n")
        6. ├─dplyr::select(., -"n")
        7. ├─dplyr::mutate(., multiple_matches = .data$n > 1)
        8. ├─dplyr::add_count(., .data[[id_col]])
        9. ├─dplyr::mutate(...)
       10. └─dplyr:::mutate.data.frame(...)
       11.   └─dplyr::mutate(...)
       12.     └─dplyr:::compute_by(...)
       13.       ├─dplyr::group_data(data)
       14.       ├─dplyr:::group_data.tbl_df(data)
       15.       ├─base::NextMethod()
       16.       └─dplyr:::group_data.data.frame(data)
       17.         └─base::nrow(.data)
       18.           ├─base::dim(x)
       19.           └─base::dim.data.frame(x)
       20.             └─base::.row_names_info(x, 2L)
      
      [ FAIL 12 | WARN 0 | SKIP 0 | PASS 19 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  9.0Mb
      sub-directories of 1Mb or more:
        data      6.2Mb
        extdata   2.4Mb
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 16 marked UTF-8 strings
    ```

