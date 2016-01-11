context("Forwarders")

test_that("Interface for lazy forwarders is correct", {
  lazyforward::expect_lazyforward("distinct")
  lazyforward::expect_lazyforward("do")
  lazyforward::expect_lazyforward("group_by")
  lazyforward::expect_lazyforward("filter")
  lazyforward::expect_lazyforward("slice")
  lazyforward::expect_lazyforward("summarise")
  lazyforward::expect_lazyforward("summarize")
  lazyforward::expect_lazyforward("mutate")
  lazyforward::expect_lazyforward("transmute")
  lazyforward::expect_lazyforward("arrange")
  lazyforward::expect_lazyforward("select")
  lazyforward::expect_lazyforward("rename")
  lazyforward::expect_lazyforward("group_indices")

  # Nonstandard forward
  lazyforward::expect_lazyforward("count", .dots = "vars")
  lazyforward::expect_lazyforward("summarise_each", .dots = "vars")
  lazyforward::expect_lazyforward("summarize_each", .dots = "vars")
  lazyforward::expect_lazyforward("mutate_each", .dots = "vars")
  lazyforward::expect_lazyforward("funs", .dots = "dots")
  lazyforward::expect_lazyforward("select_vars", .dots = "args")
  lazyforward::expect_lazyforward("rename_vars", .dots = "args")

  # Not an error:

  # No ...
  #lazyforward::expect_lazyforward("tally")

  # No SE-NSE pair:
  #lazyforward::expect_lazyforward("order")
  #lazyforward::expect_lazyforward("all_equal")
  #lazyforward::expect_lazyforward("sort")
})
