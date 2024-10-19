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

strong <- unlist(tools::package_dependencies(me, which = "most", reverse = TRUE), use.names = FALSE)
# second <- unlist(tools::package_dependencies(strong, reverse = TRUE, recursive = TRUE), use.names = FALSE)
second <- unlist(tools::package_dependencies(strong, reverse = TRUE), use.names = FALSE)
packages <- setdiff(unique(c(strong, second)), bad)

revdepcheck::cloud_check(tarball = last, revdep_packages = packages, r_version = "4.4.0")
unlink(last)
revdepcheck::cloud_status()
revdepcheck::cloud_report()
