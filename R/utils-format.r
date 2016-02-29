#' @importFrom tibble dim_desc
#' @export
tibble::dim_desc

#' @importFrom tibble trunc_mat
#' @export
tibble::trunc_mat

wrap <- function(..., indent = 0) {
  x <- paste0(..., collapse = "")
  wrapped <- strwrap(x, indent = indent, exdent = indent + 2,
    width = getOption("width"))

  paste0(wrapped, collapse = "\n")
}

rule <- function(char = "-") {
  paste0(rep(char, getOption("width") - 2), collapse = "")
}

#' @export
print.BoolResult <- function(x, ...) {
  cat(x)
  if (!x) cat(": ", attr(x, "comment"), sep = "")
  cat("\n")
}

# function for the thousand separator,
# returns "," unless it's used for the decimal point, in which case returns "."
big_mark <- function(x, ...) {
  mark <- if (identical(getOption("OutDec"), ",")) "." else ","
  formatC(x, big.mark = mark, ...)
}
