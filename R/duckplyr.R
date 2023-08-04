dplyr_mode <- TRUE

on_load({
  options(duckdb.materialize_message = FALSE)
})
