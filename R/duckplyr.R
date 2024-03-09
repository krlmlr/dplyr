dplyr_mode <- TRUE

on_load({
  options(duckdb.materialize_message = FALSE)
})

meta_rel_register <- function(...) {
}

meta_rel_register_df <- function(...) {
}

meta_rel_register_csv <- function(...) {
}

meta_macro_register <- function(...) {
}

tel_collect <- function(...) {
}
