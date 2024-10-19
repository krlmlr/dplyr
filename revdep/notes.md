Edit `run*.R` to include exceptions.

# Failures

## Can't compile

- bayesdfa: OOM
- blavaan: Killed
- ctsem: Killed
- EcoEnsemble: Killed
- multinma: Killed
- rstanarm: Killed

## Known `librdf.so` issue

- arealDB
- atom4R
- dataone
- FAIRmaterials
- metajam
- nesRdata
- ontologics
- rdflib

## bnlearn

- randomForestSRC

## rstantools

- rmsb
- TriDimRegression

## asbio

- stats4teaching

## gWidgets2tcltk

- ImputeRobust

## loon

- diveR
- loon.tourr
- loon.shiny

## Miscellaneous

- ROracle: OCI libraries

# Problems

## Fixed by extension

- causalBatch: ?
- CausalQueries: ?
- CCWeights: Unclear
- crosshap: Could not convert string 'A' to DOUBLE
- dbGaPCheckup: Could not convert string 'NA' to DOUBLE
- DescrTab2
- fqar: Could not convert string 'hi' to DOUBLE
- mpwR: Unclear
- multiverse: Unclear
- PupilPre: Could not convert string 'factor' to DOUBLE
- sampler: ?
- tidytransit: Could not convert string 'GS' to DOUBLE
- vcfR: Could not convert string 'A' to DOUBLE
- vivaldi: Could not convert string 'A' to DOUBLE
- VWPre: Could not convert string 'factor' to DOUBLE
- zipcodeR: Could not convert string 'NA' to DOUBLE

## Done

- comperes: Length mismatch: comparison on first 3 components
    - `%in%`, needed `filter()`
- dtrackr: Unclear
    - `summarize(.count = n(), .count = n())`
- ezplot: Unclear
    - `transmute(., !!!lapply(first_expr, function(x) rlang::parse_quo(x, env = env)))`
- heemod: Unclear
    - `is.na()` vs. `is.nan()`
- omopgenerics: Unclear
    - `id` integer vs. double
- NeuroDecodeR: Unclear
    - Maximum tree depth of 200 exceeded in logical planner
- streamDepletr: Unclear
    - Object '.' not found
- text2sdg: Unclear
    - Object 'document' not found
- sapfluxnetr: Unclear
    - Fixed by roundtrip check of timestamps
- vDiveR: Unclear
    - Fixed by more careful detection of row names
- CodelistGenerator
    - Fixed by more careful detection of row names
- unheadr
    - Not letting `grepl()` through
- ern: Unclear
    - `lag()` without importing it, need more data
    - Problem went away after stricter `as_duckplyr_df()`
- auk: Could not convert string 'X' to INT32
    - `as.integer()`
    - https://github.com/hannes/duckdb-rfuns/issues/82
- activAnalyzer: Could not convert string '0-29' to BOOL
    - Typed `NA`
- CodelistGenerator
    - `union_all()` on incompatible types now throws error

## Needs extension support

- arrow: `min(na.rm = FALSE)` and `max(na.rm = FALSE)`
    - Needs translation

## Asked downstream

- starschemar: Unclear
    - Weird class error
    - Only with patched duckdb not with `duckplyr::methods_overwrite()`

## Needs special packages

- myClim: Unimplemented type for cast (TIMESTAMP -> DOUBLE)
    - Perhaps fixed by extension?
- TKcat: Could not convert string 'Condition' to BOOL
    - Likely fixed by duckdb update

## Killed

- APCI: Killed
- msigdbr: Killed
- mtdesign: Killed
    - Slow also for dplyr
- partition: Killed
- rfars: Killed

## Non-fails

- linelist
    - Test warnings that lead to an error
    - State inspector inspecting options, but harmless

## Challenges

- `left_join(data.frame(ID = 1), data.frame(ID = "1", TIME = 0))` did not throw an error.

- admiral
    - Many-to-many warnings with joins

- healthdb
    - Many-to-many warnings with joins
    - https://github.com/r-lib/testthat/issues/1994

- iNZightTools
    - `join_data(iris, iris)` did not throw the expected warning
    - Many-to-many warnings with joins

- rWCVP
    - Touching columns that don't need to be touched

- PatientProfiles
    - Flaky
