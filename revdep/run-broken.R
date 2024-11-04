me <- unname(desc::desc_get("Package"))

last <- dir(pattern = paste0("^", me, "_.*[.]tar[.]gz$"))
stopifnot(length(last) == 1)
last

# See notes.md
bad <- c(
  "bayesdfa", "blavaan", "ctsem", "EcoEnsemble", "multinma",
  "rstanarm", "arealDB", "atom4R", "dataone", "FAIRmaterials",
  "metajam", "nesRdata", "ontologics", "rdflib", "randomForestSRC",
  "rmsb", "TriDimRegression", "stats4teaching", "ImputeRobust",
  "diveR", "loon.tourr", "loon.shiny", "ROracle"
)

problems <- gsub("^# ", "", grep("^# ", readLines("revdep/problems.md"), value = TRUE))
# broken <- revdepcheck::cloud_broken(install_failures = TRUE, timeout_failures = TRUE)
# failed <- revdepcheck::cloud_failed()
failures <- gsub("^# ", "", grep("^# ", readLines("revdep/failures.md"), value = TRUE))

broken <- setdiff(c(problems, failures), bad)

# Don't rerun failures (comment to disable)
broken <- setdiff(broken, failures)
# Can't install librdf.so
broken <- setdiff(broken, tools::package_dependencies("redland", reverse = TRUE, recursive = TRUE)[[1]])

# Recurring
broken <- setdiff(broken, c("duckplyr"))
# OOM
# broken <- setdiff(broken, c("msigdbr", "mtdesign", "partition", "rfars"))
# Needs extension support
broken <- setdiff(broken, c("arrow"))
# https://github.com/tidyverse/duckplyr/issues/162
broken <- setdiff(broken, c("rWCVP"))

print(broken)

revdepcheck::cloud_check(tarball = last, revdep_packages = broken, r_version = "4.4.0")
unlink(last)
revdepcheck::cloud_status()
revdepcheck::cloud_report()
