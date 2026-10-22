# DrugExposureDiagnostics (1.2.1)

* GitHub: <https://github.com/darwin-eu/DrugExposureDiagnostics>
* Email: <mailto:g.inberg@erasmusmc.nl>
* GitHub mirror: <https://github.com/cran/DrugExposureDiagnostics>

Run `revdepcheck::revdep_details(, "DrugExposureDiagnostics")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
        37. │                   │ └─base::withCallingHandlers(...)
        38. │                   └─duckdb:::rapi_rel_to_table(rel, schema_name, table_name, temporary)
        39. ├─dplyr::collect(.)
        40. ├─dplyr::mutate(., ingredient = .data$group_level, ingredient_concept_id = .env$ingredientConceptId)
        41. ├─dplyr::select(...)
        42. ├─dplyr::mutate(., pattern_name = gsub(" NA_NA_NA", "", .data$pattern_name))
        43. ├─dplyr::filter(., !grepl("NA NA_NA_NA", .data$pattern_name))
        44. ├─dplyr::mutate(...)
        45. ├─dplyr::mutate(., pattern_name = gsub("[^a-zA-Z ]", "", .data$strata_level))
        46. ├─dplyr::mutate(...)
        47. ├─dplyr::left_join(...)
        48. ├─dplyr::left_join(...)
        49. ├─dplyr::mutate(., pattern_id = as.numeric(gsub("[^0-9]", "", .data$strata_level)))
        50. ├─omopgenerics::suppress(., minCellCount)
        51. ├─dplyr::filter(., .data$group_level != "NA")
        52. └─base::.handleSimpleError(...)
        53.   └─rlang (local) h(simpleError(msg, call))
        54.     └─handlers[[1L]](cnd)
        55.       └─duckdb:::rethrow_error_from_rapi(e, call)
        56.         └─rlang::abort(msg, call = call)
       
       [ FAIL 4 | WARN 71 | SKIP 5 | PASS 370 ]
       Error:
       ! Test failures.
       Execution halted
     ```

