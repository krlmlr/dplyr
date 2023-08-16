dplyr_mode <- TRUE

on_load({
  options(duckdb.materialize_message = FALSE)
  # tsibble
  options(DUCKPLYR_CHECK_ROUNDTRIP = TRUE)
})

meta_rel_register <- function(...) {
}

meta_rel_register_df <- function(...) {
}

meta_rel_register_csv <- function(...) {
}

meta_macro_register <- function(...) {
}
