# tidyjson (0.3.3.1)

* GitHub: <https://github.com/colearendt/tidyjson>
* Email: <mailto:cole@benetist.com>
* GitHub mirror: <https://github.com/cran/tidyjson>

Run `revdepcheck::revdep_details(, "tidyjson")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     $ milestone.creator.login               <chr> NA, NA, NA, "hadley", NA, "hadle…
     $ milestone.creator.id                  <dbl> NA, NA, NA, 4196, NA, 4196, 4196…
     $ milestone.creator.avatar_url          <chr> NA, NA, NA, "https://avatars.git…
     $ milestone.creator.gravatar_id         <chr> NA, NA, NA, "7ba164f40a50bc23dbb…
     $ milestone.creator.url                 <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.html_url            <chr> NA, NA, NA, "https://github.com/…
     $ milestone.creator.followers_url       <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.following_url       <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.gists_url           <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.starred_url         <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.subscriptions_url   <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.organizations_url   <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.repos_url           <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.events_url          <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.received_events_url <chr> NA, NA, NA, "https://api.github.…
     $ milestone.creator.type                <chr> NA, NA, NA, "User", NA, "User", …
     $ milestone.creator.site_admin          <lgl> NA, NA, NA, FALSE, NA, FALSE, FA…
     $ ..JSON                                <list> ["https://api.github.com/repos/…
     > 
     > # Are there any top level objects or arrays?
     > issues %>% gather_array %>% gather_object %>% json_types %>%
     +   count(name, type) %>%
     +   filter(type %in% c("array", "object"))
     # A tibble: 5 × 3
       name         type       n
     ```

*   checking tests ... ERROR
     ```
     ...
       Backtrace:
            ▆
         1. ├─json %>% gather_array %>% spread_all %>% ... at test-tbl_json.R:660:3
         2. ├─dplyr::arrange(., !!as.name(v))
         3. ├─tidyjson:::arrange.tbl_json(., !!as.name(v))
         4. ├─base::NextMethod(generic, .data)
         5. ├─dplyr:::arrange.data.frame(., !!as.name(v))
         6. │ └─dplyr::arrange(.data, ..., .by_group = .by_group, .locale = .locale)
         7. │   └─dplyr:::arrange_rows(.data, dots = dots, locale = .locale)
         8. │     ├─dplyr::mutate(data, `:=`("{name}", !!dot), .keep = "none")
         9. │     └─dplyr:::mutate.data.frame(data, `:=`("{name}", !!dot), .keep = "none")
        10. │       └─dplyr::mutate(...)
        11. │         └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
        12. │           ├─base::withCallingHandlers(...)
        13. │           └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
        14. │             └─mask$eval_all_mutate(quo)
        15. │               └─dplyr (local) eval()
        16. └─base::.handleSimpleError(...)
        17.   └─dplyr (local) h(simpleError(msg, call))
        18.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
       
       [ FAIL 15 | WARN 2 | SKIP 7 | PASS 335 ]
       Error:
       ! Test failures.
       Execution halted
     ```

