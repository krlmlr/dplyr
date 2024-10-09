last <- dir(pattern = "^dplyr_.*[.]tar[.]gz$")
stopifnot(length(last) == 1)
last

broken <- revdepcheck::cloud_broken()

# Recurring
broken <- setdiff(broken, c("duckplyr"))
# OOM
broken <- setdiff(broken, c("msigdbr", "mtdesign", "partition", "rfars"))
# Needs extension support
broken <- setdiff(broken, c("arrow"))
# https://github.com/tidyverse/duckplyr/issues/162
broken <- setdiff(broken, c("rWCVP"))

revdepcheck::cloud_check(tarball = last, revdep_packages = broken, r_version = "4.4.0")
