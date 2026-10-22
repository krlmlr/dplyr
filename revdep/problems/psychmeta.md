# psychmeta (2.7.0)

* GitHub: <https://github.com/psychmeta/psychmeta>
* Email: <mailto:jeff.dahlke.phd@gmail.com>
* GitHub mirror: <https://github.com/cran/psychmeta>

Run `revdepcheck::revdep_details(, "psychmeta")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘psychmeta-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: create_ad_tibble
     > ### Title: Create a tibble of artifact distributions by construct
     > ### Aliases: create_ad_tibble create_ad_list
     > 
     > ### ** Examples
     > 
     > ## Examples to create Taylor series artifact distributions:
     > # Overall artifact distributions (not pairwise, not moderated)
     > create_ad_tibble(ad_type = "tsa",
     +                  n = n, rxx = rxxi, ryy = ryyi,
     +                  construct_x = x_name, construct_y = y_name,
     +                  sample_id = sample_id, moderators = moderator,
     +                  data = data_r_meas_multi,
     +                  control = control_psychmeta(pairwise_ads = FALSE,
     +                                              moderated_ads = FALSE))
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

