# adjustedCurves

<details>

* Version: 0.11.2
* GitHub: https://github.com/RobinDenz1/adjustedCurves
* Source code: https://github.com/cran/adjustedCurves
* Date/Publication: 2024-07-29 14:30:02 UTC
* Number of recursive dependencies: 175

Run `revdepcheck::cloud_details(, "adjustedCurves")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/adjustedCurves/new/adjustedCurves.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘adjustedCurves/DESCRIPTION’ ... OK
...
--- finished re-building ‘plot_customization.rmd’

SUMMARY: processing the following file failed:
  ‘introduction.Rmd’

Error: Vignette re-building failed.
Execution halted

* DONE
Status: 2 ERRORs, 1 WARNING, 3 NOTEs





```
### CRAN

```
* using log directory ‘/tmp/workdir/adjustedCurves/old/adjustedCurves.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘adjustedCurves/DESCRIPTION’ ... OK
...
--- finished re-building ‘plot_customization.rmd’

SUMMARY: processing the following file failed:
  ‘introduction.Rmd’

Error: Vignette re-building failed.
Execution halted

* DONE
Status: 2 ERRORs, 1 WARNING, 3 NOTEs





```
# AovBay

<details>

* Version: 0.1.0
* GitHub: NA
* Source code: https://github.com/cran/AovBay
* Date/Publication: 2021-07-22 06:30:02 UTC
* Number of recursive dependencies: 144

Run `revdepcheck::cloud_details(, "AovBay")` for more info

</details>

## In both

*   checking whether package ‘AovBay’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/AovBay/new/AovBay.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘AovBay’ ...
** package ‘AovBay’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
using C++17


g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG -I"../inst/include" -I"/opt/R/4.3.1/lib/R/site-library/StanHeaders/include/src" -DBOOST_DISABLE_ASSERTS -DEIGEN_NO_DEBUG -DBOOST_MATH_OVERFLOW_ERROR_POLICY=errno_on_error -DUSE_STANC3 -D_HAS_AUTO_PTR_ETC=0 -I'/opt/R/4.3.1/lib/R/site-library/BH/include' -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppEigen/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppParallel/include' -I'/opt/R/4.3.1/lib/R/site-library/rstan/include' -I'/opt/R/4.3.1/lib/R/site-library/StanHeaders/include' -I/usr/local/include    -I'/opt/R/4.3.1/lib/R/site-library/RcppParallel/include' -D_REENTRANT -DSTAN_THREADS   -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
In file included from /opt/R/4.3.1/lib/R/site-library/RcppEigen/include/Eigen/Core:205,
...
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is being loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘AovBay’
* removing ‘/tmp/workdir/AovBay/new/AovBay.Rcheck/AovBay’


```
### CRAN

```
* installing *source* package ‘AovBay’ ...
** package ‘AovBay’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
using C++17


g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG -I"../inst/include" -I"/opt/R/4.3.1/lib/R/site-library/StanHeaders/include/src" -DBOOST_DISABLE_ASSERTS -DEIGEN_NO_DEBUG -DBOOST_MATH_OVERFLOW_ERROR_POLICY=errno_on_error -DUSE_STANC3 -D_HAS_AUTO_PTR_ETC=0 -I'/opt/R/4.3.1/lib/R/site-library/BH/include' -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppEigen/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppParallel/include' -I'/opt/R/4.3.1/lib/R/site-library/rstan/include' -I'/opt/R/4.3.1/lib/R/site-library/StanHeaders/include' -I/usr/local/include    -I'/opt/R/4.3.1/lib/R/site-library/RcppParallel/include' -D_REENTRANT -DSTAN_THREADS   -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
In file included from /opt/R/4.3.1/lib/R/site-library/RcppEigen/include/Eigen/Core:205,
...
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is being loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘AovBay’
* removing ‘/tmp/workdir/AovBay/old/AovBay.Rcheck/AovBay’


```
# arealDB

<details>

* Version: 0.6.3
* GitHub: https://github.com/luckinet/arealDB
* Source code: https://github.com/cran/arealDB
* Date/Publication: 2023-07-03 10:00:02 UTC
* Number of recursive dependencies: 110

Run `revdepcheck::cloud_details(, "arealDB")` for more info

</details>

## In both

*   checking whether package ‘arealDB’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/arealDB/new/arealDB.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘arealDB’ ...
** package ‘arealDB’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in dyn.load(file, DLLpath = DLLpath, ...) : 
  unable to load shared object '/opt/R/4.3.1/lib/R/site-library/redland/libs/redland.so':
  librdf.so.0: cannot open shared object file: No such file or directory
Calls: <Anonymous> ... asNamespace -> loadNamespace -> library.dynam -> dyn.load
Execution halted
ERROR: lazy loading failed for package ‘arealDB’
* removing ‘/tmp/workdir/arealDB/new/arealDB.Rcheck/arealDB’


```
### CRAN

```
* installing *source* package ‘arealDB’ ...
** package ‘arealDB’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in dyn.load(file, DLLpath = DLLpath, ...) : 
  unable to load shared object '/opt/R/4.3.1/lib/R/site-library/redland/libs/redland.so':
  librdf.so.0: cannot open shared object file: No such file or directory
Calls: <Anonymous> ... asNamespace -> loadNamespace -> library.dynam -> dyn.load
Execution halted
ERROR: lazy loading failed for package ‘arealDB’
* removing ‘/tmp/workdir/arealDB/old/arealDB.Rcheck/arealDB’


```
# autoReg

<details>

* Version: 0.3.3
* GitHub: https://github.com/cardiomoon/autoReg
* Source code: https://github.com/cran/autoReg
* Date/Publication: 2023-11-14 05:53:27 UTC
* Number of recursive dependencies: 212

Run `revdepcheck::cloud_details(, "autoReg")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/autoReg/new/autoReg.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘autoReg/DESCRIPTION’ ... OK
...
* checking package vignettes in ‘inst/doc’ ... OK
* checking running R code from vignettes ... OK
  ‘Automatic_Regression_Modeling.Rmd’ using ‘UTF-8’... OK
  ‘Bootstrap_Prediction.Rmd’ using ‘UTF-8’... OK
  ‘Getting_started.Rmd’ using ‘UTF-8’... OK
  ‘Statiastical_test_in_gaze.Rmd’ using ‘UTF-8’... OK
  ‘Survival.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: OK





```
### CRAN

```
* using log directory ‘/tmp/workdir/autoReg/old/autoReg.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘autoReg/DESCRIPTION’ ... OK
...
* checking package vignettes in ‘inst/doc’ ... OK
* checking running R code from vignettes ... OK
  ‘Automatic_Regression_Modeling.Rmd’ using ‘UTF-8’... OK
  ‘Bootstrap_Prediction.Rmd’ using ‘UTF-8’... OK
  ‘Getting_started.Rmd’ using ‘UTF-8’... OK
  ‘Statiastical_test_in_gaze.Rmd’ using ‘UTF-8’... OK
  ‘Survival.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: OK





```
# AutoScore

<details>

* Version: 1.0.0
* GitHub: https://github.com/nliulab/AutoScore
* Source code: https://github.com/cran/AutoScore
* Date/Publication: 2022-10-15 22:15:26 UTC
* Number of recursive dependencies: 170

Run `revdepcheck::cloud_details(, "AutoScore")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/AutoScore/new/AutoScore.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘AutoScore/DESCRIPTION’ ... OK
...
* this is package ‘AutoScore’ version ‘1.0.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘survAUC’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/AutoScore/old/AutoScore.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘AutoScore/DESCRIPTION’ ... OK
...
* this is package ‘AutoScore’ version ‘1.0.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘survAUC’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# babelmixr2

<details>

* Version: 0.1.4
* GitHub: https://github.com/nlmixr2/babelmixr2
* Source code: https://github.com/cran/babelmixr2
* Date/Publication: 2024-09-23 08:50:02 UTC
* Number of recursive dependencies: 176

Run `revdepcheck::cloud_details(, "babelmixr2")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/babelmixr2/new/babelmixr2.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘babelmixr2/DESCRIPTION’ ... OK
...
* checking package dependencies ... ERROR
Packages required but not available:
  'nlmixr2', 'nlmixr2est', 'nonmem2rx', 'monolix2rx', 'rxode2'

Package suggested but not available for checking: ‘lixoftConnectors’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/babelmixr2/old/babelmixr2.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘babelmixr2/DESCRIPTION’ ... OK
...
* checking package dependencies ... ERROR
Packages required but not available:
  'nlmixr2', 'nlmixr2est', 'nonmem2rx', 'monolix2rx', 'rxode2'

Package suggested but not available for checking: ‘lixoftConnectors’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# bayesCT

<details>

* Version: 0.99.3
* GitHub: https://github.com/thevaachandereng/bayesCT
* Source code: https://github.com/cran/bayesCT
* Date/Publication: 2020-07-01 09:30:02 UTC
* Number of recursive dependencies: 122

Run `revdepcheck::cloud_details(, "bayesCT")` for more info

</details>

## In both

*   checking whether package ‘bayesCT’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/bayesCT/new/bayesCT.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘bayesCT’ ...
** package ‘bayesCT’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘bayesCT’
* removing ‘/tmp/workdir/bayesCT/new/bayesCT.Rcheck/bayesCT’


```
### CRAN

```
* installing *source* package ‘bayesCT’ ...
** package ‘bayesCT’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘bayesCT’
* removing ‘/tmp/workdir/bayesCT/old/bayesCT.Rcheck/bayesCT’


```
# bbknnR

<details>

* Version: 1.1.1
* GitHub: https://github.com/ycli1995/bbknnR
* Source code: https://github.com/cran/bbknnR
* Date/Publication: 2024-02-13 10:20:03 UTC
* Number of recursive dependencies: 163

Run `revdepcheck::cloud_details(, "bbknnR")` for more info

</details>

## In both

*   checking whether package ‘bbknnR’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/bbknnR/new/bbknnR.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘bbknnR’ ...
** package ‘bbknnR’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c data_manipulation.cpp -o data_manipulation.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o bbknnR.so RcppExports.o data_manipulation.o -L/opt/R/4.3.1/lib/R/lib -lR
installing to /tmp/workdir/bbknnR/new/bbknnR.Rcheck/00LOCK-bbknnR/00new/bbknnR/libs
** R
...
Warning: namespace ‘Seurat’ is not available and has been replaced
by .GlobalEnv when processing object ‘panc8_small’
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘bbknnR’
* removing ‘/tmp/workdir/bbknnR/new/bbknnR.Rcheck/bbknnR’


```
### CRAN

```
* installing *source* package ‘bbknnR’ ...
** package ‘bbknnR’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c data_manipulation.cpp -o data_manipulation.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o bbknnR.so RcppExports.o data_manipulation.o -L/opt/R/4.3.1/lib/R/lib -lR
installing to /tmp/workdir/bbknnR/old/bbknnR.Rcheck/00LOCK-bbknnR/00new/bbknnR/libs
** R
...
Warning: namespace ‘Seurat’ is not available and has been replaced
by .GlobalEnv when processing object ‘panc8_small’
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘bbknnR’
* removing ‘/tmp/workdir/bbknnR/old/bbknnR.Rcheck/bbknnR’


```
# bndovb

<details>

* Version: 1.1
* GitHub: NA
* Source code: https://github.com/cran/bndovb
* Date/Publication: 2021-07-30 17:40:02 UTC
* Number of recursive dependencies: 53

Run `revdepcheck::cloud_details(, "bndovb")` for more info

</details>

## In both

*   checking whether package ‘bndovb’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/bndovb/new/bndovb.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘bndovb’ ...
** package ‘bndovb’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘bndovb’
* removing ‘/tmp/workdir/bndovb/new/bndovb.Rcheck/bndovb’


```
### CRAN

```
* installing *source* package ‘bndovb’ ...
** package ‘bndovb’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘bndovb’
* removing ‘/tmp/workdir/bndovb/old/bndovb.Rcheck/bndovb’


```
# bspcov

<details>

* Version: 1.0.0
* GitHub: https://github.com/statjs/bspcov
* Source code: https://github.com/cran/bspcov
* Date/Publication: 2024-02-06 16:50:08 UTC
* Number of recursive dependencies: 111

Run `revdepcheck::cloud_details(, "bspcov")` for more info

</details>

## In both

*   checking whether package ‘bspcov’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/bspcov/new/bspcov.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘bspcov’ ...
** package ‘bspcov’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is being loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘bspcov’
* removing ‘/tmp/workdir/bspcov/new/bspcov.Rcheck/bspcov’


```
### CRAN

```
* installing *source* package ‘bspcov’ ...
** package ‘bspcov’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is being loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘bspcov’
* removing ‘/tmp/workdir/bspcov/old/bspcov.Rcheck/bspcov’


```
# CACIMAR

<details>

* Version: 1.0.0
* GitHub: https://github.com/jiang-junyao/CACIMAR
* Source code: https://github.com/cran/CACIMAR
* Date/Publication: 2022-05-18 08:20:02 UTC
* Number of recursive dependencies: 162

Run `revdepcheck::cloud_details(, "CACIMAR")` for more info

</details>

## In both

*   checking whether package ‘CACIMAR’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/CACIMAR/new/CACIMAR.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘CACIMAR’ ...
** package ‘CACIMAR’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘SeuratObject’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is being loaded, but >= 1.6.4 is required
Execution halted
ERROR: lazy loading failed for package ‘CACIMAR’
* removing ‘/tmp/workdir/CACIMAR/new/CACIMAR.Rcheck/CACIMAR’


```
### CRAN

```
* installing *source* package ‘CACIMAR’ ...
** package ‘CACIMAR’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘SeuratObject’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is being loaded, but >= 1.6.4 is required
Execution halted
ERROR: lazy loading failed for package ‘CACIMAR’
* removing ‘/tmp/workdir/CACIMAR/old/CACIMAR.Rcheck/CACIMAR’


```
# CAESAR.Suite

<details>

* Version: 0.1.0
* GitHub: https://github.com/XiaoZhangryy/CAESAR.Suite
* Source code: https://github.com/cran/CAESAR.Suite
* Date/Publication: 2024-09-16 14:20:06 UTC
* Number of recursive dependencies: 261

Run `revdepcheck::cloud_details(, "CAESAR.Suite")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/CAESAR.Suite/new/CAESAR.Suite.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘CAESAR.Suite/DESCRIPTION’ ... OK
...
* this is package ‘CAESAR.Suite’ version ‘0.1.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘ProFAST’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/CAESAR.Suite/old/CAESAR.Suite.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘CAESAR.Suite/DESCRIPTION’ ... OK
...
* this is package ‘CAESAR.Suite’ version ‘0.1.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘ProFAST’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# campsis

<details>

* Version: 1.5.4
* GitHub: https://github.com/Calvagone/campsis
* Source code: https://github.com/cran/campsis
* Date/Publication: 2024-08-30 12:20:02 UTC
* Number of recursive dependencies: 157

Run `revdepcheck::cloud_details(, "campsis")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/campsis/new/campsis.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘campsis/DESCRIPTION’ ... OK
...
* checking for unstated dependencies in ‘tests’ ... OK
* checking tests ... OK
  Running ‘testthat.R’
* checking for unstated dependencies in vignettes ... OK
* checking package vignettes in ‘inst/doc’ ... OK
* checking running R code from vignettes ... OK
  ‘campsis.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: 1 NOTE





```
### CRAN

```
* using log directory ‘/tmp/workdir/campsis/old/campsis.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘campsis/DESCRIPTION’ ... OK
...
* checking for unstated dependencies in ‘tests’ ... OK
* checking tests ... OK
  Running ‘testthat.R’
* checking for unstated dependencies in vignettes ... OK
* checking package vignettes in ‘inst/doc’ ... OK
* checking running R code from vignettes ... OK
  ‘campsis.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: 1 NOTE





```
# CARBayes

<details>

* Version: 6.1.1
* GitHub: https://github.com/duncanplee/CARBayes
* Source code: https://github.com/cran/CARBayes
* Date/Publication: 2024-03-08 13:20:02 UTC
* Number of recursive dependencies: 125

Run `revdepcheck::cloud_details(, "CARBayes")` for more info

</details>

## In both

*   checking whether package ‘CARBayes’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/CARBayes/new/CARBayes.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘CARBayes’ ...
** package ‘CARBayes’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c CARBayes.cpp -o CARBayes.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o CARBayes.so CARBayes.o RcppExports.o -L/opt/R/4.3.1/lib/R/lib -lR
installing to /tmp/workdir/CARBayes/new/CARBayes.Rcheck/00LOCK-CARBayes/00new/CARBayes/libs
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘CARBayes’
* removing ‘/tmp/workdir/CARBayes/new/CARBayes.Rcheck/CARBayes’


```
### CRAN

```
* installing *source* package ‘CARBayes’ ...
** package ‘CARBayes’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c CARBayes.cpp -o CARBayes.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o CARBayes.so CARBayes.o RcppExports.o -L/opt/R/4.3.1/lib/R/lib -lR
installing to /tmp/workdir/CARBayes/old/CARBayes.Rcheck/00LOCK-CARBayes/00new/CARBayes/libs
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘CARBayes’
* removing ‘/tmp/workdir/CARBayes/old/CARBayes.Rcheck/CARBayes’


```
# CARBayesST

<details>

* Version: 4.0
* GitHub: https://github.com/duncanplee/CARBayesST
* Source code: https://github.com/cran/CARBayesST
* Date/Publication: 2023-10-30 16:40:02 UTC
* Number of recursive dependencies: 106

Run `revdepcheck::cloud_details(, "CARBayesST")` for more info

</details>

## In both

*   checking whether package ‘CARBayesST’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/CARBayesST/new/CARBayesST.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘CARBayesST’ ...
** package ‘CARBayesST’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c CARBayesST.cpp -o CARBayesST.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o CARBayesST.so CARBayesST.o RcppExports.o -L/opt/R/4.3.1/lib/R/lib -lR
installing to /tmp/workdir/CARBayesST/new/CARBayesST.Rcheck/00LOCK-CARBayesST/00new/CARBayesST/libs
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘CARBayesST’
* removing ‘/tmp/workdir/CARBayesST/new/CARBayesST.Rcheck/CARBayesST’


```
### CRAN

```
* installing *source* package ‘CARBayesST’ ...
** package ‘CARBayesST’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c CARBayesST.cpp -o CARBayesST.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o CARBayesST.so CARBayesST.o RcppExports.o -L/opt/R/4.3.1/lib/R/lib -lR
installing to /tmp/workdir/CARBayesST/old/CARBayesST.Rcheck/00LOCK-CARBayesST/00new/CARBayesST/libs
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘CARBayesST’
* removing ‘/tmp/workdir/CARBayesST/old/CARBayesST.Rcheck/CARBayesST’


```
# censored

<details>

* Version: 0.3.2
* GitHub: https://github.com/tidymodels/censored
* Source code: https://github.com/cran/censored
* Date/Publication: 2024-06-11 18:10:02 UTC
* Number of recursive dependencies: 164

Run `revdepcheck::cloud_details(, "censored")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/censored/new/censored.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘censored/DESCRIPTION’ ... OK
...
* this is package ‘censored’ version ‘0.3.2’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required and available but unsuitable version: ‘survival’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/censored/old/censored.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘censored/DESCRIPTION’ ... OK
...
* this is package ‘censored’ version ‘0.3.2’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required and available but unsuitable version: ‘survival’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# CGPfunctions

<details>

* Version: 0.6.3
* GitHub: https://github.com/ibecav/CGPfunctions
* Source code: https://github.com/cran/CGPfunctions
* Date/Publication: 2020-11-12 14:50:09 UTC
* Number of recursive dependencies: 148

Run `revdepcheck::cloud_details(, "CGPfunctions")` for more info

</details>

## In both

*   checking whether package ‘CGPfunctions’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/CGPfunctions/new/CGPfunctions.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘CGPfunctions’ ...
** package ‘CGPfunctions’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘CGPfunctions’
* removing ‘/tmp/workdir/CGPfunctions/new/CGPfunctions.Rcheck/CGPfunctions’


```
### CRAN

```
* installing *source* package ‘CGPfunctions’ ...
** package ‘CGPfunctions’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘CGPfunctions’
* removing ‘/tmp/workdir/CGPfunctions/old/CGPfunctions.Rcheck/CGPfunctions’


```
# COMBO

<details>

* Version: 1.1.0
* GitHub: NA
* Source code: https://github.com/cran/COMBO
* Date/Publication: 2024-07-06 22:22:08 UTC
* Number of recursive dependencies: 123

Run `revdepcheck::cloud_details(, "COMBO")` for more info

</details>

## In both

*   checking whether package ‘COMBO’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/COMBO/new/COMBO.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘COMBO’ ...
** package ‘COMBO’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘COMBO’
* removing ‘/tmp/workdir/COMBO/new/COMBO.Rcheck/COMBO’


```
### CRAN

```
* installing *source* package ‘COMBO’ ...
** package ‘COMBO’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘COMBO’
* removing ‘/tmp/workdir/COMBO/old/COMBO.Rcheck/COMBO’


```
# COMMA

<details>

* Version: 1.0.0
* GitHub: NA
* Source code: https://github.com/cran/COMMA
* Date/Publication: 2024-07-21 10:10:05 UTC
* Number of recursive dependencies: 72

Run `revdepcheck::cloud_details(, "COMMA")` for more info

</details>

## In both

*   checking whether package ‘COMMA’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/COMMA/new/COMMA.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘COMMA’ ...
** package ‘COMMA’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘COMMA’
* removing ‘/tmp/workdir/COMMA/new/COMMA.Rcheck/COMMA’


```
### CRAN

```
* installing *source* package ‘COMMA’ ...
** package ‘COMMA’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘COMMA’
* removing ‘/tmp/workdir/COMMA/old/COMMA.Rcheck/COMMA’


```
# contsurvplot

<details>

* Version: 0.2.1
* GitHub: https://github.com/RobinDenz1/contsurvplot
* Source code: https://github.com/cran/contsurvplot
* Date/Publication: 2023-08-15 08:00:03 UTC
* Number of recursive dependencies: 157

Run `revdepcheck::cloud_details(, "contsurvplot")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/contsurvplot/new/contsurvplot.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘contsurvplot/DESCRIPTION’ ... OK
...
* this is package ‘contsurvplot’ version ‘0.2.1’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘riskRegression’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/contsurvplot/old/contsurvplot.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘contsurvplot/DESCRIPTION’ ... OK
...
* this is package ‘contsurvplot’ version ‘0.2.1’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘riskRegression’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# CRMetrics

<details>

* Version: 0.3.0
* GitHub: https://github.com/khodosevichlab/CRMetrics
* Source code: https://github.com/cran/CRMetrics
* Date/Publication: 2023-09-01 09:00:06 UTC
* Number of recursive dependencies: 240

Run `revdepcheck::cloud_details(, "CRMetrics")` for more info

</details>

## In both

*   checking whether package ‘CRMetrics’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/CRMetrics/new/CRMetrics.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘CRMetrics’ ...
** package ‘CRMetrics’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘CRMetrics’
* removing ‘/tmp/workdir/CRMetrics/new/CRMetrics.Rcheck/CRMetrics’


```
### CRAN

```
* installing *source* package ‘CRMetrics’ ...
** package ‘CRMetrics’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘CRMetrics’
* removing ‘/tmp/workdir/CRMetrics/old/CRMetrics.Rcheck/CRMetrics’


```
# CSCNet

<details>

* Version: 0.1.2
* GitHub: NA
* Source code: https://github.com/cran/CSCNet
* Date/Publication: 2022-11-08 18:50:02 UTC
* Number of recursive dependencies: 171

Run `revdepcheck::cloud_details(, "CSCNet")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/CSCNet/new/CSCNet.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘CSCNet/DESCRIPTION’ ... OK
...
* this is package ‘CSCNet’ version ‘0.1.2’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘riskRegression’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/CSCNet/old/CSCNet.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘CSCNet/DESCRIPTION’ ... OK
...
* this is package ‘CSCNet’ version ‘0.1.2’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘riskRegression’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# dartR.base

<details>

* Version: 0.98
* GitHub: NA
* Source code: https://github.com/cran/dartR.base
* Date/Publication: 2024-09-19 13:20:02 UTC
* Number of recursive dependencies: 286

Run `revdepcheck::cloud_details(, "dartR.base")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/dartR.base/new/dartR.base.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘dartR.base/DESCRIPTION’ ... OK
...
* checking if there is a namespace ... OK
* checking for executable files ... OK
* checking for hidden files and directories ... OK
* checking for portable file names ... OK
* checking for sufficient/correct file permissions ... OK
* checking whether package ‘dartR.base’ can be installed ... ERROR
Installation failed.
See ‘/tmp/workdir/dartR.base/new/dartR.base.Rcheck/00install.out’ for details.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/dartR.base/old/dartR.base.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘dartR.base/DESCRIPTION’ ... OK
...
* checking if there is a namespace ... OK
* checking for executable files ... OK
* checking for hidden files and directories ... OK
* checking for portable file names ... OK
* checking for sufficient/correct file permissions ... OK
* checking whether package ‘dartR.base’ can be installed ... ERROR
Installation failed.
See ‘/tmp/workdir/dartR.base/old/dartR.base.Rcheck/00install.out’ for details.
* DONE
Status: 1 ERROR





```
# dartR.popgen

<details>

* Version: 1.0.0
* GitHub: NA
* Source code: https://github.com/cran/dartR.popgen
* Date/Publication: 2024-06-27 23:20:04 UTC
* Number of recursive dependencies: 175

Run `revdepcheck::cloud_details(, "dartR.popgen")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/dartR.popgen/new/dartR.popgen.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘dartR.popgen/DESCRIPTION’ ... OK
...
* this is package ‘dartR.popgen’ version ‘1.0.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘dartR.base’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/dartR.popgen/old/dartR.popgen.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘dartR.popgen/DESCRIPTION’ ... OK
...
* this is package ‘dartR.popgen’ version ‘1.0.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘dartR.base’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# DepthProc

<details>

* Version: 2.1.5
* GitHub: https://github.com/zzawadz/DepthProc
* Source code: https://github.com/cran/DepthProc
* Date/Publication: 2022-02-03 20:30:02 UTC
* Number of recursive dependencies: 134

Run `revdepcheck::cloud_details(, "DepthProc")` for more info

</details>

## In both

*   checking whether package ‘DepthProc’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/DepthProc/new/DepthProc.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘DepthProc’ ...
** package ‘DepthProc’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
using C++11
g++ -std=gnu++11 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c Depth.cpp -o Depth.o
g++ -std=gnu++11 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c LocationEstimators.cpp -o LocationEstimators.o
g++ -std=gnu++11 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c LocationScaleDepth.cpp -o LocationScaleDepth.o
g++ -std=gnu++11 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c LocationScaleDepthCPP.cpp -o LocationScaleDepthCPP.o
...
installing to /tmp/workdir/DepthProc/new/DepthProc.Rcheck/00LOCK-DepthProc/00new/DepthProc/libs
** R
** data
** inst
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘np’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Execution halted
ERROR: lazy loading failed for package ‘DepthProc’
* removing ‘/tmp/workdir/DepthProc/new/DepthProc.Rcheck/DepthProc’


```
### CRAN

```
* installing *source* package ‘DepthProc’ ...
** package ‘DepthProc’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
using C++11
g++ -std=gnu++11 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c Depth.cpp -o Depth.o
g++ -std=gnu++11 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c LocationEstimators.cpp -o LocationEstimators.o
g++ -std=gnu++11 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c LocationScaleDepth.cpp -o LocationScaleDepth.o
g++ -std=gnu++11 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c LocationScaleDepthCPP.cpp -o LocationScaleDepthCPP.o
...
installing to /tmp/workdir/DepthProc/old/DepthProc.Rcheck/00LOCK-DepthProc/00new/DepthProc/libs
** R
** data
** inst
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘np’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Execution halted
ERROR: lazy loading failed for package ‘DepthProc’
* removing ‘/tmp/workdir/DepthProc/old/DepthProc.Rcheck/DepthProc’


```
# dibble

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/dibble
* Number of recursive dependencies: 52

Run `revdepcheck::cloud_details(, "dibble")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# DWLS

<details>

* Version: 0.1.0
* GitHub: https://github.com/sistia01/DWLS
* Source code: https://github.com/cran/DWLS
* Date/Publication: 2022-05-24 09:20:01 UTC
* Number of recursive dependencies: 184

Run `revdepcheck::cloud_details(, "DWLS")` for more info

</details>

## In both

*   checking whether package ‘DWLS’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/DWLS/new/DWLS.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘DWLS’ ...
** package ‘DWLS’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘DWLS’
* removing ‘/tmp/workdir/DWLS/new/DWLS.Rcheck/DWLS’


```
### CRAN

```
* installing *source* package ‘DWLS’ ...
** package ‘DWLS’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘DWLS’
* removing ‘/tmp/workdir/DWLS/old/DWLS.Rcheck/DWLS’


```
# easybgm

<details>

* Version: 0.1.2
* GitHub: https://github.com/KarolineHuth/easybgm
* Source code: https://github.com/cran/easybgm
* Date/Publication: 2024-03-13 13:40:02 UTC
* Number of recursive dependencies: 164

Run `revdepcheck::cloud_details(, "easybgm")` for more info

</details>

## In both

*   checking whether package ‘easybgm’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/easybgm/new/easybgm.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘easybgm’ ...
** package ‘easybgm’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘easybgm’
* removing ‘/tmp/workdir/easybgm/new/easybgm.Rcheck/easybgm’


```
### CRAN

```
* installing *source* package ‘easybgm’ ...
** package ‘easybgm’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘easybgm’
* removing ‘/tmp/workdir/easybgm/old/easybgm.Rcheck/easybgm’


```
# EcoEnsemble

<details>

* Version: 1.1.0
* GitHub: https://github.com/CefasRepRes/EcoEnsemble
* Source code: https://github.com/cran/EcoEnsemble
* Date/Publication: 2024-08-19 17:20:06 UTC
* Number of recursive dependencies: 91

Run `revdepcheck::cloud_details(, "EcoEnsemble")` for more info

</details>

## In both

*   checking whether package ‘EcoEnsemble’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/EcoEnsemble/new/EcoEnsemble.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘EcoEnsemble’ ...
** package ‘EcoEnsemble’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
using C++17


g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG -I"../inst/include" -I"/opt/R/4.3.1/lib/R/site-library/StanHeaders/include/src" -DBOOST_DISABLE_ASSERTS -DEIGEN_NO_DEBUG -DBOOST_MATH_OVERFLOW_ERROR_POLICY=errno_on_error -DUSE_STANC3 -D_HAS_AUTO_PTR_ETC=0 -I'/opt/R/4.3.1/lib/R/site-library/BH/include' -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppEigen/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppParallel/include' -I'/opt/R/4.3.1/lib/R/site-library/rstan/include' -I'/opt/R/4.3.1/lib/R/site-library/StanHeaders/include' -I/usr/local/include    -I'/opt/R/4.3.1/lib/R/site-library/RcppParallel/include' -D_REENTRANT -DSTAN_THREADS   -fpic  -g -O2  -c KF_back.cpp -o KF_back.o
In file included from /opt/R/4.3.1/lib/R/site-library/RcppEigen/include/Eigen/Core:205,
...
/opt/R/4.3.1/lib/R/site-library/StanHeaders/include/src/stan/mcmc/hmc/hamiltonians/dense_e_metric.hpp:22:56:   required from ‘double stan::mcmc::dense_e_metric<Model, BaseRNG>::T(stan::mcmc::dense_e_point&) [with Model = model_ensemble_model_hierarchical_namespace::model_ensemble_model_hierarchical; BaseRNG = boost::random::additive_combine_engine<boost::random::linear_congruential_engine<unsigned int, 40014, 0, 2147483563>, boost::random::linear_congruential_engine<unsigned int, 40692, 0, 2147483399> >]’
/opt/R/4.3.1/lib/R/site-library/StanHeaders/include/src/stan/mcmc/hmc/hamiltonians/dense_e_metric.hpp:21:10:   required from here
/opt/R/4.3.1/lib/R/site-library/RcppEigen/include/Eigen/src/Core/DenseCoeffsBase.h:654:74: warning: ignoring attributes on template argument ‘Eigen::internal::packet_traits<double>::type’ {aka ‘__m128d’} [-Wignored-attributes]
  654 |   return internal::first_aligned<int(unpacket_traits<DefaultPacketType>::alignment),Derived>(m);
      |                                                                          ^~~~~~~~~
g++: fatal error: Killed signal terminated program cc1plus
compilation terminated.
make: *** [/opt/R/4.3.1/lib/R/etc/Makeconf:198: stanExports_ensemble_model_hierarchical.o] Error 1
ERROR: compilation failed for package ‘EcoEnsemble’
* removing ‘/tmp/workdir/EcoEnsemble/new/EcoEnsemble.Rcheck/EcoEnsemble’


```
### CRAN

```
* installing *source* package ‘EcoEnsemble’ ...
** package ‘EcoEnsemble’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
using C++17


g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG -I"../inst/include" -I"/opt/R/4.3.1/lib/R/site-library/StanHeaders/include/src" -DBOOST_DISABLE_ASSERTS -DEIGEN_NO_DEBUG -DBOOST_MATH_OVERFLOW_ERROR_POLICY=errno_on_error -DUSE_STANC3 -D_HAS_AUTO_PTR_ETC=0 -I'/opt/R/4.3.1/lib/R/site-library/BH/include' -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppEigen/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppParallel/include' -I'/opt/R/4.3.1/lib/R/site-library/rstan/include' -I'/opt/R/4.3.1/lib/R/site-library/StanHeaders/include' -I/usr/local/include    -I'/opt/R/4.3.1/lib/R/site-library/RcppParallel/include' -D_REENTRANT -DSTAN_THREADS   -fpic  -g -O2  -c KF_back.cpp -o KF_back.o
In file included from /opt/R/4.3.1/lib/R/site-library/RcppEigen/include/Eigen/Core:205,
...
/opt/R/4.3.1/lib/R/site-library/StanHeaders/include/src/stan/mcmc/hmc/hamiltonians/dense_e_metric.hpp:22:56:   required from ‘double stan::mcmc::dense_e_metric<Model, BaseRNG>::T(stan::mcmc::dense_e_point&) [with Model = model_ensemble_model_hierarchical_namespace::model_ensemble_model_hierarchical; BaseRNG = boost::random::additive_combine_engine<boost::random::linear_congruential_engine<unsigned int, 40014, 0, 2147483563>, boost::random::linear_congruential_engine<unsigned int, 40692, 0, 2147483399> >]’
/opt/R/4.3.1/lib/R/site-library/StanHeaders/include/src/stan/mcmc/hmc/hamiltonians/dense_e_metric.hpp:21:10:   required from here
/opt/R/4.3.1/lib/R/site-library/RcppEigen/include/Eigen/src/Core/DenseCoeffsBase.h:654:74: warning: ignoring attributes on template argument ‘Eigen::internal::packet_traits<double>::type’ {aka ‘__m128d’} [-Wignored-attributes]
  654 |   return internal::first_aligned<int(unpacket_traits<DefaultPacketType>::alignment),Derived>(m);
      |                                                                          ^~~~~~~~~
g++: fatal error: Killed signal terminated program cc1plus
compilation terminated.
make: *** [/opt/R/4.3.1/lib/R/etc/Makeconf:198: stanExports_ensemble_model_hierarchical.o] Error 1
ERROR: compilation failed for package ‘EcoEnsemble’
* removing ‘/tmp/workdir/EcoEnsemble/old/EcoEnsemble.Rcheck/EcoEnsemble’


```
# epizootic

<details>

* Version: 1.0.0
* GitHub: https://github.com/viralemergence/epizootic
* Source code: https://github.com/cran/epizootic
* Date/Publication: 2024-10-02 13:10:05 UTC
* Number of recursive dependencies: 94

Run `revdepcheck::cloud_details(, "epizootic")` for more info

</details>

## In both

*   checking whether package ‘epizootic’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/epizootic/new/epizootic.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘epizootic’ ...
** package ‘epizootic’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c aspatial_siri.cpp -o aspatial_siri.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o epizootic.so RcppExports.o aspatial_siri.o -fopenmp -llapack -lblas -lgfortran -lm -lquadmath -L/opt/R/4.3.1/lib/R/lib -lR
installing to /tmp/workdir/epizootic/new/epizootic.Rcheck/00LOCK-epizootic/00new/epizootic/libs
** R
...
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘epizootic’
* removing ‘/tmp/workdir/epizootic/new/epizootic.Rcheck/epizootic’


```
### CRAN

```
* installing *source* package ‘epizootic’ ...
** package ‘epizootic’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c aspatial_siri.cpp -o aspatial_siri.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o epizootic.so RcppExports.o aspatial_siri.o -fopenmp -llapack -lblas -lgfortran -lm -lquadmath -L/opt/R/4.3.1/lib/R/lib -lR
installing to /tmp/workdir/epizootic/old/epizootic.Rcheck/00LOCK-epizootic/00new/epizootic/libs
** R
...
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘epizootic’
* removing ‘/tmp/workdir/epizootic/old/epizootic.Rcheck/epizootic’


```
# evolqg

<details>

* Version: 0.3-4
* GitHub: https://github.com/lem-usp/evolqg
* Source code: https://github.com/cran/evolqg
* Date/Publication: 2023-12-05 15:20:12 UTC
* Number of recursive dependencies: 111

Run `revdepcheck::cloud_details(, "evolqg")` for more info

</details>

## In both

*   checking whether package ‘evolqg’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/evolqg/new/evolqg.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘evolqg’ ...
** package ‘evolqg’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include    -fpic  -g -O2  -c fast_RS.cpp -o fast_RS.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o evolqg.so RcppExports.o fast_RS.o -llapack -lblas -lgfortran -lm -lquadmath -L/opt/R/4.3.1/lib/R/lib -lR
installing to /tmp/workdir/evolqg/new/evolqg.Rcheck/00LOCK-evolqg/00new/evolqg/libs
** R
** data
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘evolqg’
* removing ‘/tmp/workdir/evolqg/new/evolqg.Rcheck/evolqg’


```
### CRAN

```
* installing *source* package ‘evolqg’ ...
** package ‘evolqg’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include    -fpic  -g -O2  -c fast_RS.cpp -o fast_RS.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o evolqg.so RcppExports.o fast_RS.o -llapack -lblas -lgfortran -lm -lquadmath -L/opt/R/4.3.1/lib/R/lib -lR
installing to /tmp/workdir/evolqg/old/evolqg.Rcheck/00LOCK-evolqg/00new/evolqg/libs
** R
** data
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘evolqg’
* removing ‘/tmp/workdir/evolqg/old/evolqg.Rcheck/evolqg’


```
# fable.ata

<details>

* Version: 0.0.6
* GitHub: https://github.com/alsabtay/fable.ata
* Source code: https://github.com/cran/fable.ata
* Date/Publication: 2023-06-19 19:00:02 UTC
* Number of recursive dependencies: 85

Run `revdepcheck::cloud_details(, "fable.ata")` for more info

</details>

## In both

*   checking whether package ‘fable.ata’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/fable.ata/new/fable.ata.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘fable.ata’ ...
** package ‘fable.ata’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘ATAforecasting’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Execution halted
ERROR: lazy loading failed for package ‘fable.ata’
* removing ‘/tmp/workdir/fable.ata/new/fable.ata.Rcheck/fable.ata’


```
### CRAN

```
* installing *source* package ‘fable.ata’ ...
** package ‘fable.ata’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘ATAforecasting’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Execution halted
ERROR: lazy loading failed for package ‘fable.ata’
* removing ‘/tmp/workdir/fable.ata/old/fable.ata.Rcheck/fable.ata’


```
# FAIRmaterials

<details>

* Version: 0.4.2.1
* GitHub: NA
* Source code: https://github.com/cran/FAIRmaterials
* Date/Publication: 2024-06-27 15:40:02 UTC
* Number of recursive dependencies: 94

Run `revdepcheck::cloud_details(, "FAIRmaterials")` for more info

</details>

## In both

*   checking whether package ‘FAIRmaterials’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/FAIRmaterials/new/FAIRmaterials.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘FAIRmaterials’ ...
** package ‘FAIRmaterials’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in dyn.load(file, DLLpath = DLLpath, ...) : 
  unable to load shared object '/opt/R/4.3.1/lib/R/site-library/redland/libs/redland.so':
  librdf.so.0: cannot open shared object file: No such file or directory
Calls: <Anonymous> ... asNamespace -> loadNamespace -> library.dynam -> dyn.load
Execution halted
ERROR: lazy loading failed for package ‘FAIRmaterials’
* removing ‘/tmp/workdir/FAIRmaterials/new/FAIRmaterials.Rcheck/FAIRmaterials’


```
### CRAN

```
* installing *source* package ‘FAIRmaterials’ ...
** package ‘FAIRmaterials’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in dyn.load(file, DLLpath = DLLpath, ...) : 
  unable to load shared object '/opt/R/4.3.1/lib/R/site-library/redland/libs/redland.so':
  librdf.so.0: cannot open shared object file: No such file or directory
Calls: <Anonymous> ... asNamespace -> loadNamespace -> library.dynam -> dyn.load
Execution halted
ERROR: lazy loading failed for package ‘FAIRmaterials’
* removing ‘/tmp/workdir/FAIRmaterials/old/FAIRmaterials.Rcheck/FAIRmaterials’


```
# FastJM

<details>

* Version: 1.4.2
* GitHub: NA
* Source code: https://github.com/cran/FastJM
* Date/Publication: 2024-03-01 00:12:34 UTC
* Number of recursive dependencies: 147

Run `revdepcheck::cloud_details(, "FastJM")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/FastJM/new/FastJM.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘FastJM/DESCRIPTION’ ... OK
...
* checking for portable use of $(BLAS_LIBS) and $(LAPACK_LIBS) ... OK
* checking use of PKG_*FLAGS in Makefiles ... OK
* checking compiled code ... OK
* checking examples ... OK
* checking for unstated dependencies in ‘tests’ ... OK
* checking tests ... OK
  Running ‘spelling.R’
  Running ‘testthat.R’
* DONE
Status: 1 NOTE





```
### CRAN

```
* using log directory ‘/tmp/workdir/FastJM/old/FastJM.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘FastJM/DESCRIPTION’ ... OK
...
* checking for portable use of $(BLAS_LIBS) and $(LAPACK_LIBS) ... OK
* checking use of PKG_*FLAGS in Makefiles ... OK
* checking compiled code ... OK
* checking examples ... OK
* checking for unstated dependencies in ‘tests’ ... OK
* checking tests ... OK
  Running ‘spelling.R’
  Running ‘testthat.R’
* DONE
Status: 1 NOTE





```
# gap

<details>

* Version: 1.6
* GitHub: https://github.com/jinghuazhao/R
* Source code: https://github.com/cran/gap
* Date/Publication: 2024-08-27 04:40:06 UTC
* Number of recursive dependencies: 199

Run `revdepcheck::cloud_details(, "gap")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/gap/new/gap.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘gap/DESCRIPTION’ ... OK
...
--- failed re-building ‘jss.Rnw’

SUMMARY: processing the following file failed:
  ‘jss.Rnw’

Error: Vignette re-building failed.
Execution halted

* DONE
Status: 4 NOTEs





```
### CRAN

```
* using log directory ‘/tmp/workdir/gap/old/gap.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘gap/DESCRIPTION’ ... OK
...
--- failed re-building ‘jss.Rnw’

SUMMARY: processing the following file failed:
  ‘jss.Rnw’

Error: Vignette re-building failed.
Execution halted

* DONE
Status: 4 NOTEs





```
# geomorph

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/geomorph
* Number of recursive dependencies: 72

Run `revdepcheck::cloud_details(, "geomorph")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# ggPMX

<details>

* Version: 1.2.11
* GitHub: https://github.com/ggPMXdevelopment/ggPMX
* Source code: https://github.com/cran/ggPMX
* Date/Publication: 2023-11-30 16:10:06 UTC
* Number of recursive dependencies: 174

Run `revdepcheck::cloud_details(, "ggPMX")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/ggPMX/new/ggPMX.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘ggPMX/DESCRIPTION’ ... OK
...
* checking for unstated dependencies in ‘tests’ ... OK
* checking tests ... OK
  Running ‘testthat.R’
* checking for unstated dependencies in vignettes ... OK
* checking package vignettes in ‘inst/doc’ ... OK
* checking running R code from vignettes ... OK
  ‘ggPMX-guide.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: 2 NOTEs





```
### CRAN

```
* using log directory ‘/tmp/workdir/ggPMX/old/ggPMX.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘ggPMX/DESCRIPTION’ ... OK
...
* checking for unstated dependencies in ‘tests’ ... OK
* checking tests ... OK
  Running ‘testthat.R’
* checking for unstated dependencies in vignettes ... OK
* checking package vignettes in ‘inst/doc’ ... OK
* checking running R code from vignettes ... OK
  ‘ggPMX-guide.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: 2 NOTEs





```
# gmoTree

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/gmoTree
* Number of recursive dependencies: 61

Run `revdepcheck::cloud_details(, "gmoTree")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# hettx

<details>

* Version: 0.1.3
* GitHub: https://github.com/bfifield/hettx
* Source code: https://github.com/cran/hettx
* Date/Publication: 2023-08-19 22:22:34 UTC
* Number of recursive dependencies: 85

Run `revdepcheck::cloud_details(, "hettx")` for more info

</details>

## In both

*   checking whether package ‘hettx’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/hettx/new/hettx.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘hettx’ ...
** package ‘hettx’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘hettx’
* removing ‘/tmp/workdir/hettx/new/hettx.Rcheck/hettx’


```
### CRAN

```
* installing *source* package ‘hettx’ ...
** package ‘hettx’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘hettx’
* removing ‘/tmp/workdir/hettx/old/hettx.Rcheck/hettx’


```
# iNZightPlots

<details>

* Version: 2.15.3
* GitHub: https://github.com/iNZightVIT/iNZightPlots
* Source code: https://github.com/cran/iNZightPlots
* Date/Publication: 2023-10-14 05:00:02 UTC
* Number of recursive dependencies: 162

Run `revdepcheck::cloud_details(, "iNZightPlots")` for more info

</details>

## In both

*   checking whether package ‘iNZightPlots’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/iNZightPlots/new/iNZightPlots.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘iNZightPlots’ ...
** package ‘iNZightPlots’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘iNZightPlots’
* removing ‘/tmp/workdir/iNZightPlots/new/iNZightPlots.Rcheck/iNZightPlots’


```
### CRAN

```
* installing *source* package ‘iNZightPlots’ ...
** package ‘iNZightPlots’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘iNZightPlots’
* removing ‘/tmp/workdir/iNZightPlots/old/iNZightPlots.Rcheck/iNZightPlots’


```
# iNZightRegression

<details>

* Version: 1.3.4
* GitHub: https://github.com/iNZightVIT/iNZightRegression
* Source code: https://github.com/cran/iNZightRegression
* Date/Publication: 2024-04-05 02:32:59 UTC
* Number of recursive dependencies: 160

Run `revdepcheck::cloud_details(, "iNZightRegression")` for more info

</details>

## In both

*   checking whether package ‘iNZightRegression’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/iNZightRegression/new/iNZightRegression.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘iNZightRegression’ ...
** package ‘iNZightRegression’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘iNZightRegression’
* removing ‘/tmp/workdir/iNZightRegression/new/iNZightRegression.Rcheck/iNZightRegression’


```
### CRAN

```
* installing *source* package ‘iNZightRegression’ ...
** package ‘iNZightRegression’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘iNZightRegression’
* removing ‘/tmp/workdir/iNZightRegression/old/iNZightRegression.Rcheck/iNZightRegression’


```
# IRexamples

<details>

* Version: 0.0.4
* GitHub: https://github.com/vinhdizzo/IRexamples
* Source code: https://github.com/cran/IRexamples
* Date/Publication: 2023-10-06 06:40:02 UTC
* Number of recursive dependencies: 177

Run `revdepcheck::cloud_details(, "IRexamples")` for more info

</details>

## In both

*   checking whether package ‘IRexamples’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/IRexamples/new/IRexamples.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘IRexamples’ ...
** package ‘IRexamples’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Warning in check_dep_version() :
  ABI version mismatch: 
lme4 was built with Matrix ABI version 1
Current Matrix ABI version is 0
Please re-install lme4 from source or restore original ‘Matrix’ package
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘IRexamples’
* removing ‘/tmp/workdir/IRexamples/new/IRexamples.Rcheck/IRexamples’


```
### CRAN

```
* installing *source* package ‘IRexamples’ ...
** package ‘IRexamples’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Warning in check_dep_version() :
  ABI version mismatch: 
lme4 was built with Matrix ABI version 1
Current Matrix ABI version is 0
Please re-install lme4 from source or restore original ‘Matrix’ package
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘IRexamples’
* removing ‘/tmp/workdir/IRexamples/old/IRexamples.Rcheck/IRexamples’


```
# jmBIG

<details>

* Version: 0.1.2
* GitHub: NA
* Source code: https://github.com/cran/jmBIG
* Date/Publication: 2024-03-20 23:40:02 UTC
* Number of recursive dependencies: 184

Run `revdepcheck::cloud_details(, "jmBIG")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/jmBIG/new/jmBIG.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘jmBIG/DESCRIPTION’ ... OK
...
* checking if there is a namespace ... OK
* checking for executable files ... OK
* checking for hidden files and directories ... OK
* checking for portable file names ... OK
* checking for sufficient/correct file permissions ... OK
* checking whether package ‘jmBIG’ can be installed ... ERROR
Installation failed.
See ‘/tmp/workdir/jmBIG/new/jmBIG.Rcheck/00install.out’ for details.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/jmBIG/old/jmBIG.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘jmBIG/DESCRIPTION’ ... OK
...
* checking if there is a namespace ... OK
* checking for executable files ... OK
* checking for hidden files and directories ... OK
* checking for portable file names ... OK
* checking for sufficient/correct file permissions ... OK
* checking whether package ‘jmBIG’ can be installed ... ERROR
Installation failed.
See ‘/tmp/workdir/jmBIG/old/jmBIG.Rcheck/00install.out’ for details.
* DONE
Status: 1 ERROR





```
# JMH

<details>

* Version: 1.0.3
* GitHub: NA
* Source code: https://github.com/cran/JMH
* Date/Publication: 2024-02-20 06:40:02 UTC
* Number of recursive dependencies: 147

Run `revdepcheck::cloud_details(, "JMH")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/JMH/new/JMH.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘JMH/DESCRIPTION’ ... OK
...
* checking line endings in C/C++/Fortran sources/headers ... OK
* checking line endings in Makefiles ... OK
* checking compilation flags in Makevars ... OK
* checking for GNU extensions in Makefiles ... OK
* checking for portable use of $(BLAS_LIBS) and $(LAPACK_LIBS) ... OK
* checking use of PKG_*FLAGS in Makefiles ... OK
* checking compiled code ... OK
* checking examples ... OK
* DONE
Status: 1 NOTE





```
### CRAN

```
* using log directory ‘/tmp/workdir/JMH/old/JMH.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘JMH/DESCRIPTION’ ... OK
...
* checking line endings in C/C++/Fortran sources/headers ... OK
* checking line endings in Makefiles ... OK
* checking compilation flags in Makevars ... OK
* checking for GNU extensions in Makefiles ... OK
* checking for portable use of $(BLAS_LIBS) and $(LAPACK_LIBS) ... OK
* checking use of PKG_*FLAGS in Makefiles ... OK
* checking compiled code ... OK
* checking examples ... OK
* DONE
Status: 1 NOTE





```
# joineRML

<details>

* Version: 0.4.6
* GitHub: https://github.com/graemeleehickey/joineRML
* Source code: https://github.com/cran/joineRML
* Date/Publication: 2023-01-20 04:50:02 UTC
* Number of recursive dependencies: 91

Run `revdepcheck::cloud_details(, "joineRML")` for more info

</details>

## In both

*   checking whether package ‘joineRML’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/joineRML/new/joineRML.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘joineRML’ ...
** package ‘joineRML’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C compiler: ‘gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
using C++11
g++ -std=gnu++11 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++11 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c expW.cpp -o expW.o
g++ -std=gnu++11 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c gammaUpdate.cpp -o gammaUpdate.o
...
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘joineRML’
* removing ‘/tmp/workdir/joineRML/new/joineRML.Rcheck/joineRML’


```
### CRAN

```
* installing *source* package ‘joineRML’ ...
** package ‘joineRML’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C compiler: ‘gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
using C++11
g++ -std=gnu++11 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++11 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c expW.cpp -o expW.o
g++ -std=gnu++11 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c gammaUpdate.cpp -o gammaUpdate.o
...
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘joineRML’
* removing ‘/tmp/workdir/joineRML/old/joineRML.Rcheck/joineRML’


```
# Landmarking

<details>

* Version: 1.0.0
* GitHub: https://github.com/isobelbarrott/Landmarking
* Source code: https://github.com/cran/Landmarking
* Date/Publication: 2022-02-15 20:00:07 UTC
* Number of recursive dependencies: 123

Run `revdepcheck::cloud_details(, "Landmarking")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/Landmarking/new/Landmarking.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘Landmarking/DESCRIPTION’ ... OK
...
* this is package ‘Landmarking’ version ‘1.0.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘riskRegression’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/Landmarking/old/Landmarking.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘Landmarking/DESCRIPTION’ ... OK
...
* this is package ‘Landmarking’ version ‘1.0.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘riskRegression’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# lnmixsurv

<details>

* Version: 3.1.6
* GitHub: NA
* Source code: https://github.com/cran/lnmixsurv
* Date/Publication: 2024-09-03 15:20:08 UTC
* Number of recursive dependencies: 196

Run `revdepcheck::cloud_details(, "lnmixsurv")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/lnmixsurv/new/lnmixsurv.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘lnmixsurv/DESCRIPTION’ ... OK
...
* checking package vignettes in ‘inst/doc’ ... OK
* checking running R code from vignettes ... OK
  ‘compare.Rmd’ using ‘UTF-8’... OK
  ‘expectation_maximization.Rmd’ using ‘UTF-8’... OK
  ‘intercept_only.Rmd’ using ‘UTF-8’... OK
  ‘lnmixsurv.Rmd’ using ‘UTF-8’... OK
  ‘parallel_computation.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: 4 NOTEs





```
### CRAN

```
* using log directory ‘/tmp/workdir/lnmixsurv/old/lnmixsurv.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘lnmixsurv/DESCRIPTION’ ... OK
...
* checking package vignettes in ‘inst/doc’ ... OK
* checking running R code from vignettes ... OK
  ‘compare.Rmd’ using ‘UTF-8’... OK
  ‘expectation_maximization.Rmd’ using ‘UTF-8’... OK
  ‘intercept_only.Rmd’ using ‘UTF-8’... OK
  ‘lnmixsurv.Rmd’ using ‘UTF-8’... OK
  ‘parallel_computation.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: 4 NOTEs





```
# loon.shiny

<details>

* Version: 1.0.3
* GitHub: NA
* Source code: https://github.com/cran/loon.shiny
* Date/Publication: 2022-10-08 15:30:02 UTC
* Number of recursive dependencies: 136

Run `revdepcheck::cloud_details(, "loon.shiny")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/loon.shiny/new/loon.shiny.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘loon.shiny/DESCRIPTION’ ... OK
...
* this is package ‘loon.shiny’ version ‘1.0.3’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Packages required but not available: 'loon', 'loon.ggplot'

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/loon.shiny/old/loon.shiny.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘loon.shiny/DESCRIPTION’ ... OK
...
* this is package ‘loon.shiny’ version ‘1.0.3’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Packages required but not available: 'loon', 'loon.ggplot'

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# lsirm12pl

<details>

* Version: 1.3.3
* GitHub: NA
* Source code: https://github.com/cran/lsirm12pl
* Date/Publication: 2024-08-28 23:00:02 UTC
* Number of recursive dependencies: 124

Run `revdepcheck::cloud_details(, "lsirm12pl")` for more info

</details>

## In both

*   checking whether package ‘lsirm12pl’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/lsirm12pl/new/lsirm12pl.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘lsirm12pl’ ...
** package ‘lsirm12pl’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c lsirm1pl.cpp -o lsirm1pl.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c lsirm2pl.cpp -o lsirm2pl.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c lsm.cpp -o lsm.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c utility_cpp.cpp -o utility_cpp.o
...
** R
** data
*** moving datasets to lazyload DB
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘lsirm12pl’
* removing ‘/tmp/workdir/lsirm12pl/new/lsirm12pl.Rcheck/lsirm12pl’


```
### CRAN

```
* installing *source* package ‘lsirm12pl’ ...
** package ‘lsirm12pl’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c lsirm1pl.cpp -o lsirm1pl.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c lsirm2pl.cpp -o lsirm2pl.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c lsm.cpp -o lsm.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include   -fopenmp -fpic  -g -O2  -c utility_cpp.cpp -o utility_cpp.o
...
** R
** data
*** moving datasets to lazyload DB
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘lsirm12pl’
* removing ‘/tmp/workdir/lsirm12pl/old/lsirm12pl.Rcheck/lsirm12pl’


```
# MantaID

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/MantaID
* Number of recursive dependencies: 157

Run `revdepcheck::cloud_details(, "MantaID")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# metajam

<details>

* Version: 0.3.1
* GitHub: https://github.com/NCEAS/metajam
* Source code: https://github.com/cran/metajam
* Date/Publication: 2024-08-16 17:50:02 UTC
* Number of recursive dependencies: 91

Run `revdepcheck::cloud_details(, "metajam")` for more info

</details>

## In both

*   checking whether package ‘metajam’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/metajam/new/metajam.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘metajam’ ...
** package ‘metajam’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in dyn.load(file, DLLpath = DLLpath, ...) : 
  unable to load shared object '/opt/R/4.3.1/lib/R/site-library/redland/libs/redland.so':
  librdf.so.0: cannot open shared object file: No such file or directory
Calls: <Anonymous> ... namespaceImport -> loadNamespace -> library.dynam -> dyn.load
Execution halted
ERROR: lazy loading failed for package ‘metajam’
* removing ‘/tmp/workdir/metajam/new/metajam.Rcheck/metajam’


```
### CRAN

```
* installing *source* package ‘metajam’ ...
** package ‘metajam’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in dyn.load(file, DLLpath = DLLpath, ...) : 
  unable to load shared object '/opt/R/4.3.1/lib/R/site-library/redland/libs/redland.so':
  librdf.so.0: cannot open shared object file: No such file or directory
Calls: <Anonymous> ... namespaceImport -> loadNamespace -> library.dynam -> dyn.load
Execution halted
ERROR: lazy loading failed for package ‘metajam’
* removing ‘/tmp/workdir/metajam/old/metajam.Rcheck/metajam’


```
# mind

<details>

* Version: 1.1.0
* GitHub: NA
* Source code: https://github.com/cran/mind
* Date/Publication: 2022-10-27 11:32:36 UTC
* Number of recursive dependencies: 151

Run `revdepcheck::cloud_details(, "mind")` for more info

</details>

## In both

*   checking whether package ‘mind’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/mind/new/mind.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘mind’ ...
** package ‘mind’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
** byte-compile and prepare package for lazy loading
Warning in check_dep_version() :
  ABI version mismatch: 
lme4 was built with Matrix ABI version 1
Current Matrix ABI version is 0
Please re-install lme4 from source or restore original ‘Matrix’ package
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘mind’
* removing ‘/tmp/workdir/mind/new/mind.Rcheck/mind’


```
### CRAN

```
* installing *source* package ‘mind’ ...
** package ‘mind’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
** byte-compile and prepare package for lazy loading
Warning in check_dep_version() :
  ABI version mismatch: 
lme4 was built with Matrix ABI version 1
Current Matrix ABI version is 0
Please re-install lme4 from source or restore original ‘Matrix’ package
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘mind’
* removing ‘/tmp/workdir/mind/old/mind.Rcheck/mind’


```
# multinma

<details>

* Version: 0.7.2
* GitHub: https://github.com/dmphillippo/multinma
* Source code: https://github.com/cran/multinma
* Date/Publication: 2024-09-16 12:20:02 UTC
* Number of recursive dependencies: 152

Run `revdepcheck::cloud_details(, "multinma")` for more info

</details>

## In both

*   checking whether package ‘multinma’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/multinma/new/multinma.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘multinma’ ...
** package ‘multinma’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
using C++17


g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG -I"../inst/include" -I"/opt/R/4.3.1/lib/R/site-library/StanHeaders/include/src" -DBOOST_DISABLE_ASSERTS -DEIGEN_NO_DEBUG -DBOOST_MATH_OVERFLOW_ERROR_POLICY=errno_on_error -DUSE_STANC3 -D_HAS_AUTO_PTR_ETC=0 -I'/opt/R/4.3.1/lib/R/site-library/BH/include' -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppEigen/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppParallel/include' -I'/opt/R/4.3.1/lib/R/site-library/rstan/include' -I'/opt/R/4.3.1/lib/R/site-library/StanHeaders/include' -I/usr/local/include    -I'/opt/R/4.3.1/lib/R/site-library/RcppParallel/include' -D_REENTRANT -DSTAN_THREADS   -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
In file included from /opt/R/4.3.1/lib/R/site-library/RcppEigen/include/Eigen/Core:205,
...
/opt/R/4.3.1/lib/R/site-library/StanHeaders/include/src/stan/mcmc/hmc/hamiltonians/dense_e_metric.hpp:22:56:   required from ‘double stan::mcmc::dense_e_metric<Model, BaseRNG>::T(stan::mcmc::dense_e_point&) [with Model = model_survival_param_namespace::model_survival_param; BaseRNG = boost::random::additive_combine_engine<boost::random::linear_congruential_engine<unsigned int, 40014, 0, 2147483563>, boost::random::linear_congruential_engine<unsigned int, 40692, 0, 2147483399> >]’
/opt/R/4.3.1/lib/R/site-library/StanHeaders/include/src/stan/mcmc/hmc/hamiltonians/dense_e_metric.hpp:21:10:   required from here
/opt/R/4.3.1/lib/R/site-library/RcppEigen/include/Eigen/src/Core/DenseCoeffsBase.h:654:74: warning: ignoring attributes on template argument ‘Eigen::internal::packet_traits<double>::type’ {aka ‘__m128d’} [-Wignored-attributes]
  654 |   return internal::first_aligned<int(unpacket_traits<DefaultPacketType>::alignment),Derived>(m);
      |                                                                          ^~~~~~~~~
g++: fatal error: Killed signal terminated program cc1plus
compilation terminated.
make: *** [/opt/R/4.3.1/lib/R/etc/Makeconf:198: stanExports_survival_param.o] Error 1
ERROR: compilation failed for package ‘multinma’
* removing ‘/tmp/workdir/multinma/new/multinma.Rcheck/multinma’


```
### CRAN

```
* installing *source* package ‘multinma’ ...
** package ‘multinma’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
using C++17


g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG -I"../inst/include" -I"/opt/R/4.3.1/lib/R/site-library/StanHeaders/include/src" -DBOOST_DISABLE_ASSERTS -DEIGEN_NO_DEBUG -DBOOST_MATH_OVERFLOW_ERROR_POLICY=errno_on_error -DUSE_STANC3 -D_HAS_AUTO_PTR_ETC=0 -I'/opt/R/4.3.1/lib/R/site-library/BH/include' -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppEigen/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppParallel/include' -I'/opt/R/4.3.1/lib/R/site-library/rstan/include' -I'/opt/R/4.3.1/lib/R/site-library/StanHeaders/include' -I/usr/local/include    -I'/opt/R/4.3.1/lib/R/site-library/RcppParallel/include' -D_REENTRANT -DSTAN_THREADS   -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
In file included from /opt/R/4.3.1/lib/R/site-library/RcppEigen/include/Eigen/Core:205,
...
/opt/R/4.3.1/lib/R/site-library/StanHeaders/include/src/stan/mcmc/hmc/hamiltonians/dense_e_metric.hpp:22:56:   required from ‘double stan::mcmc::dense_e_metric<Model, BaseRNG>::T(stan::mcmc::dense_e_point&) [with Model = model_survival_param_namespace::model_survival_param; BaseRNG = boost::random::additive_combine_engine<boost::random::linear_congruential_engine<unsigned int, 40014, 0, 2147483563>, boost::random::linear_congruential_engine<unsigned int, 40692, 0, 2147483399> >]’
/opt/R/4.3.1/lib/R/site-library/StanHeaders/include/src/stan/mcmc/hmc/hamiltonians/dense_e_metric.hpp:21:10:   required from here
/opt/R/4.3.1/lib/R/site-library/RcppEigen/include/Eigen/src/Core/DenseCoeffsBase.h:654:74: warning: ignoring attributes on template argument ‘Eigen::internal::packet_traits<double>::type’ {aka ‘__m128d’} [-Wignored-attributes]
  654 |   return internal::first_aligned<int(unpacket_traits<DefaultPacketType>::alignment),Derived>(m);
      |                                                                          ^~~~~~~~~
g++: fatal error: Killed signal terminated program cc1plus
compilation terminated.
make: *** [/opt/R/4.3.1/lib/R/etc/Makeconf:198: stanExports_survival_param.o] Error 1
ERROR: compilation failed for package ‘multinma’
* removing ‘/tmp/workdir/multinma/old/multinma.Rcheck/multinma’


```
# multipleOutcomes

<details>

* Version: 0.4
* GitHub: NA
* Source code: https://github.com/cran/multipleOutcomes
* Date/Publication: 2024-05-30 15:00:03 UTC
* Number of recursive dependencies: 173

Run `revdepcheck::cloud_details(, "multipleOutcomes")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/multipleOutcomes/new/multipleOutcomes.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘multipleOutcomes/DESCRIPTION’ ... OK
...
* checking installed files from ‘inst/doc’ ... OK
* checking files in ‘vignettes’ ... OK
* checking examples ... OK
* checking for unstated dependencies in vignettes ... OK
* checking package vignettes in ‘inst/doc’ ... OK
* checking running R code from vignettes ... OK
  ‘test.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: OK





```
### CRAN

```
* using log directory ‘/tmp/workdir/multipleOutcomes/old/multipleOutcomes.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘multipleOutcomes/DESCRIPTION’ ... OK
...
* checking installed files from ‘inst/doc’ ... OK
* checking files in ‘vignettes’ ... OK
* checking examples ... OK
* checking for unstated dependencies in vignettes ... OK
* checking package vignettes in ‘inst/doc’ ... OK
* checking running R code from vignettes ... OK
  ‘test.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: OK





```
# MXM

<details>

* Version: 1.5.5
* GitHub: NA
* Source code: https://github.com/cran/MXM
* Date/Publication: 2022-08-25 08:52:40 UTC
* Number of recursive dependencies: 116

Run `revdepcheck::cloud_details(, "MXM")` for more info

</details>

## In both

*   checking whether package ‘MXM’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/MXM/new/MXM.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘MXM’ ...
** package ‘MXM’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘MXM’
* removing ‘/tmp/workdir/MXM/new/MXM.Rcheck/MXM’


```
### CRAN

```
* installing *source* package ‘MXM’ ...
** package ‘MXM’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘MXM’
* removing ‘/tmp/workdir/MXM/old/MXM.Rcheck/MXM’


```
# nesRdata

<details>

* Version: 0.3.1
* GitHub: https://github.com/jsta/nesRdata
* Source code: https://github.com/cran/nesRdata
* Date/Publication: 2020-04-30 17:20:02 UTC
* Number of recursive dependencies: 66

Run `revdepcheck::cloud_details(, "nesRdata")` for more info

</details>

## In both

*   checking whether package ‘nesRdata’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/nesRdata/new/nesRdata.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘nesRdata’ ...
** package ‘nesRdata’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in dyn.load(file, DLLpath = DLLpath, ...) : 
  unable to load shared object '/opt/R/4.3.1/lib/R/site-library/redland/libs/redland.so':
  librdf.so.0: cannot open shared object file: No such file or directory
Calls: <Anonymous> ... namespaceImport -> loadNamespace -> library.dynam -> dyn.load
Execution halted
ERROR: lazy loading failed for package ‘nesRdata’
* removing ‘/tmp/workdir/nesRdata/new/nesRdata.Rcheck/nesRdata’


```
### CRAN

```
* installing *source* package ‘nesRdata’ ...
** package ‘nesRdata’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in dyn.load(file, DLLpath = DLLpath, ...) : 
  unable to load shared object '/opt/R/4.3.1/lib/R/site-library/redland/libs/redland.so':
  librdf.so.0: cannot open shared object file: No such file or directory
Calls: <Anonymous> ... namespaceImport -> loadNamespace -> library.dynam -> dyn.load
Execution halted
ERROR: lazy loading failed for package ‘nesRdata’
* removing ‘/tmp/workdir/nesRdata/old/nesRdata.Rcheck/nesRdata’


```
# nlmixr2est

<details>

* Version: 3.0.0
* GitHub: https://github.com/nlmixr2/nlmixr2est
* Source code: https://github.com/cran/nlmixr2est
* Date/Publication: 2024-09-18 15:10:01 UTC
* Number of recursive dependencies: 193

Run `revdepcheck::cloud_details(, "nlmixr2est")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/nlmixr2est/new/nlmixr2est.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘nlmixr2est/DESCRIPTION’ ... OK
...
* this is package ‘nlmixr2est’ version ‘3.0.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘rxode2’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/nlmixr2est/old/nlmixr2est.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘nlmixr2est/DESCRIPTION’ ... OK
...
* this is package ‘nlmixr2est’ version ‘3.0.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘rxode2’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# nlmixr2extra

<details>

* Version: 3.0.0
* GitHub: https://github.com/nlmixr2/nlmixr2extra
* Source code: https://github.com/cran/nlmixr2extra
* Date/Publication: 2024-09-18 16:50:01 UTC
* Number of recursive dependencies: 172

Run `revdepcheck::cloud_details(, "nlmixr2extra")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/nlmixr2extra/new/nlmixr2extra.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘nlmixr2extra/DESCRIPTION’ ... OK
...
* this is package ‘nlmixr2extra’ version ‘3.0.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Packages required but not available: 'nlmixr2est', 'rxode2'

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/nlmixr2extra/old/nlmixr2extra.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘nlmixr2extra/DESCRIPTION’ ... OK
...
* this is package ‘nlmixr2extra’ version ‘3.0.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Packages required but not available: 'nlmixr2est', 'rxode2'

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# nlmixr2plot

<details>

* Version: 3.0.0
* GitHub: https://github.com/nlmixr2/nlmixr2plot
* Source code: https://github.com/cran/nlmixr2plot
* Date/Publication: 2024-09-18 17:50:02 UTC
* Number of recursive dependencies: 159

Run `revdepcheck::cloud_details(, "nlmixr2plot")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/nlmixr2plot/new/nlmixr2plot.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘nlmixr2plot/DESCRIPTION’ ... OK
...
* this is package ‘nlmixr2plot’ version ‘3.0.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Packages required but not available: 'nlmixr2est', 'nlmixr2extra', 'rxode2'

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/nlmixr2plot/old/nlmixr2plot.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘nlmixr2plot/DESCRIPTION’ ... OK
...
* this is package ‘nlmixr2plot’ version ‘3.0.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Packages required but not available: 'nlmixr2est', 'nlmixr2extra', 'rxode2'

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# nlmixr2rpt

<details>

* Version: 0.2.0
* GitHub: https://github.com/nlmixr2/nlmixr2rpt
* Source code: https://github.com/cran/nlmixr2rpt
* Date/Publication: 2023-06-06 13:10:05 UTC
* Number of recursive dependencies: 206

Run `revdepcheck::cloud_details(, "nlmixr2rpt")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/nlmixr2rpt/new/nlmixr2rpt.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘nlmixr2rpt/DESCRIPTION’ ... OK
...
* this is package ‘nlmixr2rpt’ version ‘0.2.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Packages required but not available: 'nlmixr2', 'nlmixr2extra', 'rxode2'

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/nlmixr2rpt/old/nlmixr2rpt.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘nlmixr2rpt/DESCRIPTION’ ... OK
...
* this is package ‘nlmixr2rpt’ version ‘0.2.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Packages required but not available: 'nlmixr2', 'nlmixr2extra', 'rxode2'

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# nonmem2rx

<details>

* Version: 0.1.5
* GitHub: https://github.com/nlmixr2/nonmem2rx
* Source code: https://github.com/cran/nonmem2rx
* Date/Publication: 2024-09-18 16:10:02 UTC
* Number of recursive dependencies: 197

Run `revdepcheck::cloud_details(, "nonmem2rx")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/nonmem2rx/new/nonmem2rx.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘nonmem2rx/DESCRIPTION’ ... OK
...
* this is package ‘nonmem2rx’ version ‘0.1.5’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Packages required but not available: 'dparser', 'rxode2'

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/nonmem2rx/old/nonmem2rx.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘nonmem2rx/DESCRIPTION’ ... OK
...
* this is package ‘nonmem2rx’ version ‘0.1.5’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Packages required but not available: 'dparser', 'rxode2'

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# obliqueRSF

<details>

* Version: 0.1.2
* GitHub: NA
* Source code: https://github.com/cran/obliqueRSF
* Date/Publication: 2022-08-28 20:50:02 UTC
* Number of recursive dependencies: 117

Run `revdepcheck::cloud_details(, "obliqueRSF")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/obliqueRSF/new/obliqueRSF.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘obliqueRSF/DESCRIPTION’ ... OK
...
* checking for missing documentation entries ... OK
* checking for code/documentation mismatches ... OK
* checking Rd \usage sections ... OK
* checking Rd contents ... OK
* checking for unstated dependencies in examples ... OK
* checking line endings in C/C++/Fortran sources/headers ... OK
* checking compiled code ... OK
* checking examples ... OK
* DONE
Status: OK





```
### CRAN

```
* using log directory ‘/tmp/workdir/obliqueRSF/old/obliqueRSF.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘obliqueRSF/DESCRIPTION’ ... OK
...
* checking for missing documentation entries ... OK
* checking for code/documentation mismatches ... OK
* checking Rd \usage sections ... OK
* checking Rd contents ... OK
* checking for unstated dependencies in examples ... OK
* checking line endings in C/C++/Fortran sources/headers ... OK
* checking compiled code ... OK
* checking examples ... OK
* DONE
Status: OK





```
# ontologics

<details>

* Version: 0.7.0
* GitHub: https://github.com/luckinet/ontologics
* Source code: https://github.com/cran/ontologics
* Date/Publication: 2023-05-10 09:20:05 UTC
* Number of recursive dependencies: 80

Run `revdepcheck::cloud_details(, "ontologics")` for more info

</details>

## In both

*   checking whether package ‘ontologics’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/ontologics/new/ontologics.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘ontologics’ ...
** package ‘ontologics’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in dyn.load(file, DLLpath = DLLpath, ...) : 
  unable to load shared object '/opt/R/4.3.1/lib/R/site-library/redland/libs/redland.so':
  librdf.so.0: cannot open shared object file: No such file or directory
Calls: <Anonymous> ... asNamespace -> loadNamespace -> library.dynam -> dyn.load
Execution halted
ERROR: lazy loading failed for package ‘ontologics’
* removing ‘/tmp/workdir/ontologics/new/ontologics.Rcheck/ontologics’


```
### CRAN

```
* installing *source* package ‘ontologics’ ...
** package ‘ontologics’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in dyn.load(file, DLLpath = DLLpath, ...) : 
  unable to load shared object '/opt/R/4.3.1/lib/R/site-library/redland/libs/redland.so':
  librdf.so.0: cannot open shared object file: No such file or directory
Calls: <Anonymous> ... asNamespace -> loadNamespace -> library.dynam -> dyn.load
Execution halted
ERROR: lazy loading failed for package ‘ontologics’
* removing ‘/tmp/workdir/ontologics/old/ontologics.Rcheck/ontologics’


```
# OVtool

<details>

* Version: 1.0.3
* GitHub: NA
* Source code: https://github.com/cran/OVtool
* Date/Publication: 2021-11-02 08:10:07 UTC
* Number of recursive dependencies: 157

Run `revdepcheck::cloud_details(, "OVtool")` for more info

</details>

## In both

*   checking whether package ‘OVtool’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/OVtool/new/OVtool.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘OVtool’ ...
** package ‘OVtool’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘twang’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Execution halted
ERROR: lazy loading failed for package ‘OVtool’
* removing ‘/tmp/workdir/OVtool/new/OVtool.Rcheck/OVtool’


```
### CRAN

```
* installing *source* package ‘OVtool’ ...
** package ‘OVtool’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘twang’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Execution halted
ERROR: lazy loading failed for package ‘OVtool’
* removing ‘/tmp/workdir/OVtool/old/OVtool.Rcheck/OVtool’


```
# paleopop

<details>

* Version: 2.1.6
* GitHub: https://github.com/GlobalEcologyLab/paleopop
* Source code: https://github.com/cran/paleopop
* Date/Publication: 2024-09-24 19:00:02 UTC
* Number of recursive dependencies: 103

Run `revdepcheck::cloud_details(, "paleopop")` for more info

</details>

## In both

*   checking whether package ‘paleopop’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/paleopop/new/paleopop.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘paleopop’ ...
** package ‘paleopop’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘paleopop’
* removing ‘/tmp/workdir/paleopop/new/paleopop.Rcheck/paleopop’


```
### CRAN

```
* installing *source* package ‘paleopop’ ...
** package ‘paleopop’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘paleopop’
* removing ‘/tmp/workdir/paleopop/old/paleopop.Rcheck/paleopop’


```
# pammtools

<details>

* Version: 0.5.93
* GitHub: https://github.com/adibender/pammtools
* Source code: https://github.com/cran/pammtools
* Date/Publication: 2024-02-25 10:10:02 UTC
* Number of recursive dependencies: 125

Run `revdepcheck::cloud_details(, "pammtools")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/pammtools/new/pammtools.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘pammtools/DESCRIPTION’ ... OK
...
* checking data for non-ASCII characters ... OK
* checking LazyData ... OK
* checking data for ASCII and uncompressed saves ... OK
* checking R/sysdata.rda ... OK
* checking examples ... OK
* checking for unstated dependencies in ‘tests’ ... OK
* checking tests ... OK
  Running ‘testthat.R’
* DONE
Status: OK





```
### CRAN

```
* using log directory ‘/tmp/workdir/pammtools/old/pammtools.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘pammtools/DESCRIPTION’ ... OK
...
* checking data for non-ASCII characters ... OK
* checking LazyData ... OK
* checking data for ASCII and uncompressed saves ... OK
* checking R/sysdata.rda ... OK
* checking examples ... OK
* checking for unstated dependencies in ‘tests’ ... OK
* checking tests ... OK
  Running ‘testthat.R’
* DONE
Status: OK





```
# pencal

<details>

* Version: 2.2.2
* GitHub: NA
* Source code: https://github.com/cran/pencal
* Date/Publication: 2024-06-12 11:10:02 UTC
* Number of recursive dependencies: 172

Run `revdepcheck::cloud_details(, "pencal")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/pencal/new/pencal.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘pencal/DESCRIPTION’ ... OK
...
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘riskRegression’

Package suggested but not available for checking: ‘ptmixed’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/pencal/old/pencal.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘pencal/DESCRIPTION’ ... OK
...
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘riskRegression’

Package suggested but not available for checking: ‘ptmixed’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# popstudy

<details>

* Version: 1.0.1
* GitHub: NA
* Source code: https://github.com/cran/popstudy
* Date/Publication: 2023-10-17 23:50:02 UTC
* Number of recursive dependencies: 240

Run `revdepcheck::cloud_details(, "popstudy")` for more info

</details>

## In both

*   checking whether package ‘popstudy’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/popstudy/new/popstudy.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘popstudy’ ...
** package ‘popstudy’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘popstudy’
* removing ‘/tmp/workdir/popstudy/new/popstudy.Rcheck/popstudy’


```
### CRAN

```
* installing *source* package ‘popstudy’ ...
** package ‘popstudy’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘popstudy’
* removing ‘/tmp/workdir/popstudy/old/popstudy.Rcheck/popstudy’


```
# PoweREST

<details>

* Version: 0.1.0
* GitHub: NA
* Source code: https://github.com/cran/PoweREST
* Date/Publication: 2024-09-09 09:30:02 UTC
* Number of recursive dependencies: 171

Run `revdepcheck::cloud_details(, "PoweREST")` for more info

</details>

## In both

*   checking whether package ‘PoweREST’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/PoweREST/new/PoweREST.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘PoweREST’ ...
** package ‘PoweREST’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘PoweREST’
* removing ‘/tmp/workdir/PoweREST/new/PoweREST.Rcheck/PoweREST’


```
### CRAN

```
* installing *source* package ‘PoweREST’ ...
** package ‘PoweREST’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘PoweREST’
* removing ‘/tmp/workdir/PoweREST/old/PoweREST.Rcheck/PoweREST’


```
# qPCRtools

<details>

* Version: 1.0.1
* GitHub: https://github.com/lixiang117423/qPCRtools
* Source code: https://github.com/cran/qPCRtools
* Date/Publication: 2023-11-02 13:10:05 UTC
* Number of recursive dependencies: 107

Run `revdepcheck::cloud_details(, "qPCRtools")` for more info

</details>

## In both

*   checking whether package ‘qPCRtools’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/qPCRtools/new/qPCRtools.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘qPCRtools’ ...
** package ‘qPCRtools’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘qPCRtools’
* removing ‘/tmp/workdir/qPCRtools/new/qPCRtools.Rcheck/qPCRtools’


```
### CRAN

```
* installing *source* package ‘qPCRtools’ ...
** package ‘qPCRtools’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘qPCRtools’
* removing ‘/tmp/workdir/qPCRtools/old/qPCRtools.Rcheck/qPCRtools’


```
# quid

<details>

* Version: 0.0.1
* GitHub: NA
* Source code: https://github.com/cran/quid
* Date/Publication: 2021-12-09 09:00:02 UTC
* Number of recursive dependencies: 95

Run `revdepcheck::cloud_details(, "quid")` for more info

</details>

## In both

*   checking whether package ‘quid’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/quid/new/quid.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘quid’ ...
** package ‘quid’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘quid’
* removing ‘/tmp/workdir/quid/new/quid.Rcheck/quid’


```
### CRAN

```
* installing *source* package ‘quid’ ...
** package ‘quid’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘quid’
* removing ‘/tmp/workdir/quid/old/quid.Rcheck/quid’


```
# RcmdrPlugin.RiskDemo

<details>

* Version: 3.2
* GitHub: NA
* Source code: https://github.com/cran/RcmdrPlugin.RiskDemo
* Date/Publication: 2024-02-06 09:20:02 UTC
* Number of recursive dependencies: 200

Run `revdepcheck::cloud_details(, "RcmdrPlugin.RiskDemo")` for more info

</details>

## In both

*   checking whether package ‘RcmdrPlugin.RiskDemo’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/RcmdrPlugin.RiskDemo/new/RcmdrPlugin.RiskDemo.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘RcmdrPlugin.RiskDemo’ ...
** package ‘RcmdrPlugin.RiskDemo’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
** inst
** byte-compile and prepare package for lazy loading
Warning in check_dep_version() :
  ABI version mismatch: 
lme4 was built with Matrix ABI version 1
Current Matrix ABI version is 0
Please re-install lme4 from source or restore original ‘Matrix’ package
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘RcmdrPlugin.RiskDemo’
* removing ‘/tmp/workdir/RcmdrPlugin.RiskDemo/new/RcmdrPlugin.RiskDemo.Rcheck/RcmdrPlugin.RiskDemo’


```
### CRAN

```
* installing *source* package ‘RcmdrPlugin.RiskDemo’ ...
** package ‘RcmdrPlugin.RiskDemo’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
** inst
** byte-compile and prepare package for lazy loading
Warning in check_dep_version() :
  ABI version mismatch: 
lme4 was built with Matrix ABI version 1
Current Matrix ABI version is 0
Please re-install lme4 from source or restore original ‘Matrix’ package
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘RcmdrPlugin.RiskDemo’
* removing ‘/tmp/workdir/RcmdrPlugin.RiskDemo/old/RcmdrPlugin.RiskDemo.Rcheck/RcmdrPlugin.RiskDemo’


```
# rdflib

<details>

* Version: 0.2.9
* GitHub: https://github.com/ropensci/rdflib
* Source code: https://github.com/cran/rdflib
* Date/Publication: 2024-08-17 06:00:05 UTC
* Number of recursive dependencies: 94

Run `revdepcheck::cloud_details(, "rdflib")` for more info

</details>

## In both

*   checking whether package ‘rdflib’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/rdflib/new/rdflib.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘rdflib’ ...
** package ‘rdflib’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in dyn.load(file, DLLpath = DLLpath, ...) : 
  unable to load shared object '/opt/R/4.3.1/lib/R/site-library/redland/libs/redland.so':
  librdf.so.0: cannot open shared object file: No such file or directory
Calls: <Anonymous> ... asNamespace -> loadNamespace -> library.dynam -> dyn.load
Execution halted
ERROR: lazy loading failed for package ‘rdflib’
* removing ‘/tmp/workdir/rdflib/new/rdflib.Rcheck/rdflib’


```
### CRAN

```
* installing *source* package ‘rdflib’ ...
** package ‘rdflib’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in dyn.load(file, DLLpath = DLLpath, ...) : 
  unable to load shared object '/opt/R/4.3.1/lib/R/site-library/redland/libs/redland.so':
  librdf.so.0: cannot open shared object file: No such file or directory
Calls: <Anonymous> ... asNamespace -> loadNamespace -> library.dynam -> dyn.load
Execution halted
ERROR: lazy loading failed for package ‘rdflib’
* removing ‘/tmp/workdir/rdflib/old/rdflib.Rcheck/rdflib’


```
# robber

<details>

* Version: 0.2.4
* GitHub: https://github.com/Chabert-Liddell/robber
* Source code: https://github.com/cran/robber
* Date/Publication: 2024-02-07 13:50:02 UTC
* Number of recursive dependencies: 144

Run `revdepcheck::cloud_details(, "robber")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/robber/new/robber.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘robber/DESCRIPTION’ ... OK
...
* checking tests ... OK
  Running ‘spelling.R’
  Running ‘testthat.R’
* checking for unstated dependencies in vignettes ... OK
* checking package vignettes in ‘inst/doc’ ... OK
* checking running R code from vignettes ... OK
  ‘topological-analysis.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: OK





```
### CRAN

```
* using log directory ‘/tmp/workdir/robber/old/robber.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘robber/DESCRIPTION’ ... OK
...
* checking tests ... OK
  Running ‘spelling.R’
  Running ‘testthat.R’
* checking for unstated dependencies in vignettes ... OK
* checking package vignettes in ‘inst/doc’ ... OK
* checking running R code from vignettes ... OK
  ‘topological-analysis.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: OK





```
# RQdeltaCT

<details>

* Version: 1.3.0
* GitHub: NA
* Source code: https://github.com/cran/RQdeltaCT
* Date/Publication: 2024-04-17 15:50:02 UTC
* Number of recursive dependencies: 163

Run `revdepcheck::cloud_details(, "RQdeltaCT")` for more info

</details>

## In both

*   checking whether package ‘RQdeltaCT’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/RQdeltaCT/new/RQdeltaCT.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘RQdeltaCT’ ...
** package ‘RQdeltaCT’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘RQdeltaCT’
* removing ‘/tmp/workdir/RQdeltaCT/new/RQdeltaCT.Rcheck/RQdeltaCT’


```
### CRAN

```
* installing *source* package ‘RQdeltaCT’ ...
** package ‘RQdeltaCT’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘RQdeltaCT’
* removing ‘/tmp/workdir/RQdeltaCT/old/RQdeltaCT.Rcheck/RQdeltaCT’


```
# RRPP

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/RRPP
* Number of recursive dependencies: 68

Run `revdepcheck::cloud_details(, "RRPP")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# rTwig

<details>

* Version: 1.1.0
* GitHub: https://github.com/aidanmorales/rTwig
* Source code: https://github.com/cran/rTwig
* Date/Publication: 2024-08-21 00:50:02 UTC
* Number of recursive dependencies: 148

Run `revdepcheck::cloud_details(, "rTwig")` for more info

</details>

## In both

*   checking whether package ‘rTwig’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/rTwig/new/rTwig.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘rTwig’ ...
** package ‘rTwig’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c box_counting.cpp -o box_counting.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c colors.cpp -o colors.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c convex_hull.cpp -o convex_hull.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c cylinder_mesh.cpp -o cylinder_mesh.o
...
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘rTwig’
* removing ‘/tmp/workdir/rTwig/new/rTwig.Rcheck/rTwig’


```
### CRAN

```
* installing *source* package ‘rTwig’ ...
** package ‘rTwig’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c box_counting.cpp -o box_counting.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c colors.cpp -o colors.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c convex_hull.cpp -o convex_hull.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c cylinder_mesh.cpp -o cylinder_mesh.o
...
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘rTwig’
* removing ‘/tmp/workdir/rTwig/old/rTwig.Rcheck/rTwig’


```
# ruminate

<details>

* Version: 0.2.4
* GitHub: https://github.com/john-harrold/ruminate
* Source code: https://github.com/cran/ruminate
* Date/Publication: 2024-05-28 02:20:03 UTC
* Number of recursive dependencies: 166

Run `revdepcheck::cloud_details(, "ruminate")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/ruminate/new/ruminate.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘ruminate/DESCRIPTION’ ... OK
...
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘rxode2’

Packages suggested but not available for checking: 'nonmem2rx', 'rxode2et'

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/ruminate/old/ruminate.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘ruminate/DESCRIPTION’ ... OK
...
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘rxode2’

Packages suggested but not available for checking: 'nonmem2rx', 'rxode2et'

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# scaper

<details>

* Version: 0.1.0
* GitHub: NA
* Source code: https://github.com/cran/scaper
* Date/Publication: 2023-10-19 07:20:02 UTC
* Number of recursive dependencies: 161

Run `revdepcheck::cloud_details(, "scaper")` for more info

</details>

## In both

*   checking whether package ‘scaper’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/scaper/new/scaper.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘scaper’ ...
** package ‘scaper’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘scaper’
* removing ‘/tmp/workdir/scaper/new/scaper.Rcheck/scaper’


```
### CRAN

```
* installing *source* package ‘scaper’ ...
** package ‘scaper’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘scaper’
* removing ‘/tmp/workdir/scaper/old/scaper.Rcheck/scaper’


```
# sccca

<details>

* Version: 0.1.1
* GitHub: NA
* Source code: https://github.com/cran/sccca
* Date/Publication: 2024-03-13 11:40:02 UTC
* Number of recursive dependencies: 150

Run `revdepcheck::cloud_details(, "sccca")` for more info

</details>

## In both

*   checking whether package ‘sccca’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/sccca/new/sccca.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘sccca’ ...
** package ‘sccca’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘sccca’
* removing ‘/tmp/workdir/sccca/new/sccca.Rcheck/sccca’


```
### CRAN

```
* installing *source* package ‘sccca’ ...
** package ‘sccca’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘sccca’
* removing ‘/tmp/workdir/sccca/old/sccca.Rcheck/sccca’


```
# scCustomize

<details>

* Version: 2.1.2
* GitHub: https://github.com/samuel-marsh/scCustomize
* Source code: https://github.com/cran/scCustomize
* Date/Publication: 2024-02-28 19:40:02 UTC
* Number of recursive dependencies: 268

Run `revdepcheck::cloud_details(, "scCustomize")` for more info

</details>

## In both

*   checking whether package ‘scCustomize’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/scCustomize/new/scCustomize.Rcheck/00install.out’ for details.
    ```

*   checking package dependencies ... NOTE
    ```
    Package suggested but not available for checking: ‘Nebulosa’
    ```

## Installation

### Devel

```
* installing *source* package ‘scCustomize’ ...
** package ‘scCustomize’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘SeuratObject’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is being loaded, but >= 1.6.4 is required
Execution halted
ERROR: lazy loading failed for package ‘scCustomize’
* removing ‘/tmp/workdir/scCustomize/new/scCustomize.Rcheck/scCustomize’


```
### CRAN

```
* installing *source* package ‘scCustomize’ ...
** package ‘scCustomize’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘SeuratObject’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is being loaded, but >= 1.6.4 is required
Execution halted
ERROR: lazy loading failed for package ‘scCustomize’
* removing ‘/tmp/workdir/scCustomize/old/scCustomize.Rcheck/scCustomize’


```
# SCdeconR

<details>

* Version: 1.0.0
* GitHub: https://github.com/Liuy12/SCdeconR
* Source code: https://github.com/cran/SCdeconR
* Date/Publication: 2024-03-22 19:20:02 UTC
* Number of recursive dependencies: 236

Run `revdepcheck::cloud_details(, "SCdeconR")` for more info

</details>

## In both

*   checking whether package ‘SCdeconR’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/SCdeconR/new/SCdeconR.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘SCdeconR’ ...
** package ‘SCdeconR’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘SeuratObject’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is being loaded, but >= 1.6.4 is required
Execution halted
ERROR: lazy loading failed for package ‘SCdeconR’
* removing ‘/tmp/workdir/SCdeconR/new/SCdeconR.Rcheck/SCdeconR’


```
### CRAN

```
* installing *source* package ‘SCdeconR’ ...
** package ‘SCdeconR’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘SeuratObject’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is being loaded, but >= 1.6.4 is required
Execution halted
ERROR: lazy loading failed for package ‘SCdeconR’
* removing ‘/tmp/workdir/SCdeconR/old/SCdeconR.Rcheck/SCdeconR’


```
# scGate

<details>

* Version: 1.6.2
* GitHub: https://github.com/carmonalab/scGate
* Source code: https://github.com/cran/scGate
* Date/Publication: 2024-04-23 08:50:02 UTC
* Number of recursive dependencies: 179

Run `revdepcheck::cloud_details(, "scGate")` for more info

</details>

## In both

*   checking whether package ‘scGate’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/scGate/new/scGate.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘scGate’ ...
** package ‘scGate’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
Warning: namespace ‘Seurat’ is not available and has been replaced
by .GlobalEnv when processing object ‘query.seurat’
Warning: namespace ‘Seurat’ is not available and has been replaced
by .GlobalEnv when processing object ‘query.seurat’
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘scGate’
* removing ‘/tmp/workdir/scGate/new/scGate.Rcheck/scGate’


```
### CRAN

```
* installing *source* package ‘scGate’ ...
** package ‘scGate’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
Warning: namespace ‘Seurat’ is not available and has been replaced
by .GlobalEnv when processing object ‘query.seurat’
Warning: namespace ‘Seurat’ is not available and has been replaced
by .GlobalEnv when processing object ‘query.seurat’
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘scGate’
* removing ‘/tmp/workdir/scGate/old/scGate.Rcheck/scGate’


```
# scGOclust

<details>

* Version: 0.2.1
* GitHub: https://github.com/Papatheodorou-Group/scGOclust
* Source code: https://github.com/cran/scGOclust
* Date/Publication: 2024-01-24 14:40:02 UTC
* Number of recursive dependencies: 217

Run `revdepcheck::cloud_details(, "scGOclust")` for more info

</details>

## In both

*   checking whether package ‘scGOclust’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/scGOclust/new/scGOclust.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘scGOclust’ ...
** package ‘scGOclust’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘scGOclust’
* removing ‘/tmp/workdir/scGOclust/new/scGOclust.Rcheck/scGOclust’


```
### CRAN

```
* installing *source* package ‘scGOclust’ ...
** package ‘scGOclust’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘scGOclust’
* removing ‘/tmp/workdir/scGOclust/old/scGOclust.Rcheck/scGOclust’


```
# SCIntRuler

<details>

* Version: 0.99.6
* GitHub: https://github.com/yuelyu21/SCIntRuler
* Source code: https://github.com/cran/SCIntRuler
* Date/Publication: 2024-07-12 15:20:08 UTC
* Number of recursive dependencies: 202

Run `revdepcheck::cloud_details(, "SCIntRuler")` for more info

</details>

## In both

*   checking whether package ‘SCIntRuler’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/SCIntRuler/new/SCIntRuler.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘SCIntRuler’ ...
** package ‘SCIntRuler’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c crossdist.cpp -o crossdist.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o SCIntRuler.so RcppExports.o crossdist.o -L/opt/R/4.3.1/lib/R/lib -lR
installing to /tmp/workdir/SCIntRuler/new/SCIntRuler.Rcheck/00LOCK-SCIntRuler/00new/SCIntRuler/libs
** R
...
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is being loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘SCIntRuler’
* removing ‘/tmp/workdir/SCIntRuler/new/SCIntRuler.Rcheck/SCIntRuler’


```
### CRAN

```
* installing *source* package ‘SCIntRuler’ ...
** package ‘SCIntRuler’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c crossdist.cpp -o crossdist.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o SCIntRuler.so RcppExports.o crossdist.o -L/opt/R/4.3.1/lib/R/lib -lR
installing to /tmp/workdir/SCIntRuler/old/SCIntRuler.Rcheck/00LOCK-SCIntRuler/00new/SCIntRuler/libs
** R
...
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is being loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘SCIntRuler’
* removing ‘/tmp/workdir/SCIntRuler/old/SCIntRuler.Rcheck/SCIntRuler’


```
# scperturbR

<details>

* Version: 0.1.0
* GitHub: https://github.com/sanderlab/scPerturb
* Source code: https://github.com/cran/scperturbR
* Date/Publication: 2023-03-01 20:10:02 UTC
* Number of recursive dependencies: 162

Run `revdepcheck::cloud_details(, "scperturbR")` for more info

</details>

## In both

*   checking whether package ‘scperturbR’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/scperturbR/new/scperturbR.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘scperturbR’ ...
** package ‘scperturbR’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘scperturbR’
* removing ‘/tmp/workdir/scperturbR/new/scperturbR.Rcheck/scperturbR’


```
### CRAN

```
* installing *source* package ‘scperturbR’ ...
** package ‘scperturbR’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘scperturbR’
* removing ‘/tmp/workdir/scperturbR/old/scperturbR.Rcheck/scperturbR’


```
# scpi

<details>

* Version: 2.2.5
* GitHub: NA
* Source code: https://github.com/cran/scpi
* Date/Publication: 2023-11-01 06:10:07 UTC
* Number of recursive dependencies: 98

Run `revdepcheck::cloud_details(, "scpi")` for more info

</details>

## In both

*   checking whether package ‘scpi’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/scpi/new/scpi.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘scpi’ ...
** package ‘scpi’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** byte-compile and prepare package for lazy loading
Warning in .recacheSubclasses(def@className, def, env) :
  undefined subclass "pcorMatrix" of class "ConstVal"; definition not updated
Warning in .recacheSubclasses(def@className, def, env) :
...
Warning in .recacheSubclasses(def@className, def, env) :
  undefined subclass "pcorMatrix" of class "ConstValORExpr"; definition not updated
Warning in .recacheSubclasses(def@className, def, env) :
  undefined subclass "pcorMatrix" of class "ConstValORNULL"; definition not updated
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘scpi’
* removing ‘/tmp/workdir/scpi/new/scpi.Rcheck/scpi’


```
### CRAN

```
* installing *source* package ‘scpi’ ...
** package ‘scpi’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** byte-compile and prepare package for lazy loading
Warning in .recacheSubclasses(def@className, def, env) :
  undefined subclass "pcorMatrix" of class "ConstVal"; definition not updated
Warning in .recacheSubclasses(def@className, def, env) :
...
Warning in .recacheSubclasses(def@className, def, env) :
  undefined subclass "pcorMatrix" of class "ConstValORExpr"; definition not updated
Warning in .recacheSubclasses(def@className, def, env) :
  undefined subclass "pcorMatrix" of class "ConstValORNULL"; definition not updated
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘scpi’
* removing ‘/tmp/workdir/scpi/old/scpi.Rcheck/scpi’


```
# scRNAstat

<details>

* Version: 0.1.1
* GitHub: NA
* Source code: https://github.com/cran/scRNAstat
* Date/Publication: 2021-09-22 08:10:02 UTC
* Number of recursive dependencies: 156

Run `revdepcheck::cloud_details(, "scRNAstat")` for more info

</details>

## In both

*   checking whether package ‘scRNAstat’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/scRNAstat/new/scRNAstat.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘scRNAstat’ ...
** package ‘scRNAstat’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
Warning: namespace ‘Seurat’ is not available and has been replaced
by .GlobalEnv when processing object ‘AJ064_small_last_sce’
Warning: namespace ‘SeuratObject’ is not available and has been replaced
by .GlobalEnv when processing object ‘AJ064_small_last_sce’
...
by .GlobalEnv when processing object ‘AJ064_small_last_sce’
Warning: namespace ‘SeuratObject’ is not available and has been replaced
by .GlobalEnv when processing object ‘AJ064_small_last_sce’
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘scRNAstat’
* removing ‘/tmp/workdir/scRNAstat/new/scRNAstat.Rcheck/scRNAstat’


```
### CRAN

```
* installing *source* package ‘scRNAstat’ ...
** package ‘scRNAstat’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
Warning: namespace ‘Seurat’ is not available and has been replaced
by .GlobalEnv when processing object ‘AJ064_small_last_sce’
Warning: namespace ‘SeuratObject’ is not available and has been replaced
by .GlobalEnv when processing object ‘AJ064_small_last_sce’
...
by .GlobalEnv when processing object ‘AJ064_small_last_sce’
Warning: namespace ‘DBI’ is not available and has been replaced
by .GlobalEnv when processing object ‘AJ064_small_last_sce’
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘scRNAstat’
* removing ‘/tmp/workdir/scRNAstat/old/scRNAstat.Rcheck/scRNAstat’


```
# sectorgap

<details>

* Version: 0.1.0
* GitHub: NA
* Source code: https://github.com/cran/sectorgap
* Date/Publication: 2024-01-22 17:40:02 UTC
* Number of recursive dependencies: 46

Run `revdepcheck::cloud_details(, "sectorgap")` for more info

</details>

## In both

*   checking whether package ‘sectorgap’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/sectorgap/new/sectorgap.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘sectorgap’ ...
** package ‘sectorgap’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘sectorgap’
* removing ‘/tmp/workdir/sectorgap/new/sectorgap.Rcheck/sectorgap’


```
### CRAN

```
* installing *source* package ‘sectorgap’ ...
** package ‘sectorgap’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘sectorgap’
* removing ‘/tmp/workdir/sectorgap/old/sectorgap.Rcheck/sectorgap’


```
# SEERaBomb

<details>

* Version: 2019.2
* GitHub: NA
* Source code: https://github.com/cran/SEERaBomb
* Date/Publication: 2019-12-12 18:50:03 UTC
* Number of recursive dependencies: 185

Run `revdepcheck::cloud_details(, "SEERaBomb")` for more info

</details>

## In both

*   checking whether package ‘SEERaBomb’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/SEERaBomb/new/SEERaBomb.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘SEERaBomb’ ...
** package ‘SEERaBomb’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C compiler: ‘gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
gcc -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c SEERaBomb_init.c -o SEERaBomb_init.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c fillPYM.cpp -o fillPYM.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o SEERaBomb.so RcppExports.o SEERaBomb_init.o fillPYM.o -L/opt/R/4.3.1/lib/R/lib -lR
...
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘demography’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Execution halted
ERROR: lazy loading failed for package ‘SEERaBomb’
* removing ‘/tmp/workdir/SEERaBomb/new/SEERaBomb.Rcheck/SEERaBomb’


```
### CRAN

```
* installing *source* package ‘SEERaBomb’ ...
** package ‘SEERaBomb’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C compiler: ‘gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
gcc -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c SEERaBomb_init.c -o SEERaBomb_init.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c fillPYM.cpp -o fillPYM.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o SEERaBomb.so RcppExports.o SEERaBomb_init.o fillPYM.o -L/opt/R/4.3.1/lib/R/lib -lR
...
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘demography’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Execution halted
ERROR: lazy loading failed for package ‘SEERaBomb’
* removing ‘/tmp/workdir/SEERaBomb/old/SEERaBomb.Rcheck/SEERaBomb’


```
# Signac

<details>

* Version: 1.14.0
* GitHub: https://github.com/stuart-lab/signac
* Source code: https://github.com/cran/Signac
* Date/Publication: 2024-08-21 07:40:02 UTC
* Number of recursive dependencies: 247

Run `revdepcheck::cloud_details(, "Signac")` for more info

</details>

## In both

*   checking whether package ‘Signac’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/Signac/new/Signac.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘Signac’ ...
** package ‘Signac’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c filter.cpp -o filter.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c group.cpp -o group.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c split.cpp -o split.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c validate.cpp -o validate.o
...
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘Signac’
* removing ‘/tmp/workdir/Signac/new/Signac.Rcheck/Signac’


```
### CRAN

```
* installing *source* package ‘Signac’ ...
** package ‘Signac’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c filter.cpp -o filter.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c group.cpp -o group.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c split.cpp -o split.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I/usr/local/include    -fpic  -g -O2  -c validate.cpp -o validate.o
...
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘Signac’
* removing ‘/tmp/workdir/Signac/old/Signac.Rcheck/Signac’


```
# SimplyAgree

<details>

* Version: 0.2.0
* GitHub: https://github.com/arcaldwell49/SimplyAgree
* Source code: https://github.com/cran/SimplyAgree
* Date/Publication: 2024-03-21 14:20:06 UTC
* Number of recursive dependencies: 115

Run `revdepcheck::cloud_details(, "SimplyAgree")` for more info

</details>

## In both

*   checking whether package ‘SimplyAgree’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/SimplyAgree/new/SimplyAgree.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘SimplyAgree’ ...
** package ‘SimplyAgree’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Warning in check_dep_version() :
  ABI version mismatch: 
lme4 was built with Matrix ABI version 1
Current Matrix ABI version is 0
Please re-install lme4 from source or restore original ‘Matrix’ package
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘SimplyAgree’
* removing ‘/tmp/workdir/SimplyAgree/new/SimplyAgree.Rcheck/SimplyAgree’


```
### CRAN

```
* installing *source* package ‘SimplyAgree’ ...
** package ‘SimplyAgree’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Warning in check_dep_version() :
  ABI version mismatch: 
lme4 was built with Matrix ABI version 1
Current Matrix ABI version is 0
Please re-install lme4 from source or restore original ‘Matrix’ package
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘SimplyAgree’
* removing ‘/tmp/workdir/SimplyAgree/old/SimplyAgree.Rcheck/SimplyAgree’


```
# SpaCCI

<details>

* Version: 1.0
* GitHub: NA
* Source code: https://github.com/cran/SpaCCI
* Date/Publication: 2024-09-30 10:30:14 UTC
* Number of recursive dependencies: 151

Run `revdepcheck::cloud_details(, "SpaCCI")` for more info

</details>

## In both

*   checking whether package ‘SpaCCI’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/SpaCCI/new/SpaCCI.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘SpaCCI’ ...
** package ‘SpaCCI’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include    -fpic  -g -O2  -c permutation_func.cpp -o permutation_func.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o SpaCCI.so RcppExports.o permutation_func.o -llapack -lblas -lgfortran -lm -lquadmath -L/opt/R/4.3.1/lib/R/lib -lR
installing to /tmp/workdir/SpaCCI/new/SpaCCI.Rcheck/00LOCK-SpaCCI/00new/SpaCCI/libs
** R
** data
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘SpaCCI’
* removing ‘/tmp/workdir/SpaCCI/new/SpaCCI.Rcheck/SpaCCI’


```
### CRAN

```
* installing *source* package ‘SpaCCI’ ...
** package ‘SpaCCI’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
using C++ compiler: ‘g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0’
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include    -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
g++ -std=gnu++17 -I"/opt/R/4.3.1/lib/R/include" -DNDEBUG  -I'/opt/R/4.3.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.3.1/lib/R/site-library/RcppArmadillo/include' -I/usr/local/include    -fpic  -g -O2  -c permutation_func.cpp -o permutation_func.o
g++ -std=gnu++17 -shared -L/opt/R/4.3.1/lib/R/lib -L/usr/local/lib -o SpaCCI.so RcppExports.o permutation_func.o -llapack -lblas -lgfortran -lm -lquadmath -L/opt/R/4.3.1/lib/R/lib -lR
installing to /tmp/workdir/SpaCCI/old/SpaCCI.Rcheck/00LOCK-SpaCCI/00new/SpaCCI/libs
** R
** data
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘SpaCCI’
* removing ‘/tmp/workdir/SpaCCI/old/SpaCCI.Rcheck/SpaCCI’


```
# SSHAARP

<details>

* Version: 1.1.0
* GitHub: NA
* Source code: https://github.com/cran/SSHAARP
* Date/Publication: 2021-09-17 08:30:02 UTC
* Number of recursive dependencies: 113

Run `revdepcheck::cloud_details(, "SSHAARP")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/SSHAARP/new/SSHAARP.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘SSHAARP/DESCRIPTION’ ... OK
...
* this is package ‘SSHAARP’ version ‘1.1.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘BIGDAWG’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/SSHAARP/old/SSHAARP.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘SSHAARP/DESCRIPTION’ ... OK
...
* this is package ‘SSHAARP’ version ‘1.1.0’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘BIGDAWG’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# statsr

<details>

* Version: 0.3.0
* GitHub: https://github.com/StatsWithR/statsr
* Source code: https://github.com/cran/statsr
* Date/Publication: 2021-01-22 20:40:03 UTC
* Number of recursive dependencies: 97

Run `revdepcheck::cloud_details(, "statsr")` for more info

</details>

## In both

*   checking whether package ‘statsr’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/statsr/new/statsr.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘statsr’ ...
** package ‘statsr’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘BayesFactor’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Execution halted
ERROR: lazy loading failed for package ‘statsr’
* removing ‘/tmp/workdir/statsr/new/statsr.Rcheck/statsr’


```
### CRAN

```
* installing *source* package ‘statsr’ ...
** package ‘statsr’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘BayesFactor’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Execution halted
ERROR: lazy loading failed for package ‘statsr’
* removing ‘/tmp/workdir/statsr/old/statsr.Rcheck/statsr’


```
# survHE

<details>

* Version: 2.0.2
* GitHub: https://github.com/giabaio/survHE
* Source code: https://github.com/cran/survHE
* Date/Publication: 2024-10-04 09:50:02 UTC
* Number of recursive dependencies: 130

Run `revdepcheck::cloud_details(, "survHE")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/survHE/new/survHE.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘survHE/DESCRIPTION’ ... OK
...
* checking package dependencies ... ERROR
Package required but not available: ‘rms’

Packages suggested but not available for checking:
  'survHEinla', 'survHEhmc'

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/survHE/old/survHE.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘survHE/DESCRIPTION’ ... OK
...
* checking package dependencies ... ERROR
Package required but not available: ‘rms’

Packages suggested but not available for checking:
  'survHEinla', 'survHEhmc'

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# TestAnaAPP

<details>

* Version: 1.1.1
* GitHub: https://github.com/jiangyouxiang/TestAnaAPP
* Source code: https://github.com/cran/TestAnaAPP
* Date/Publication: 2024-09-10 07:30:02 UTC
* Number of recursive dependencies: 250

Run `revdepcheck::cloud_details(, "TestAnaAPP")` for more info

</details>

## In both

*   checking whether package ‘TestAnaAPP’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/TestAnaAPP/new/TestAnaAPP.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘TestAnaAPP’ ...
** package ‘TestAnaAPP’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Warning in check_dep_version() :
  ABI version mismatch: 
lme4 was built with Matrix ABI version 1
Current Matrix ABI version is 0
Please re-install lme4 from source or restore original ‘Matrix’ package
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  there is no package called ‘rms’
Calls: <Anonymous> ... loadNamespace -> withRestarts -> withOneRestart -> doWithOneRestart
Execution halted
ERROR: lazy loading failed for package ‘TestAnaAPP’
* removing ‘/tmp/workdir/TestAnaAPP/new/TestAnaAPP.Rcheck/TestAnaAPP’


```
### CRAN

```
* installing *source* package ‘TestAnaAPP’ ...
** package ‘TestAnaAPP’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Warning in check_dep_version() :
  ABI version mismatch: 
lme4 was built with Matrix ABI version 1
Current Matrix ABI version is 0
Please re-install lme4 from source or restore original ‘Matrix’ package
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  there is no package called ‘rms’
Calls: <Anonymous> ... loadNamespace -> withRestarts -> withOneRestart -> doWithOneRestart
Execution halted
ERROR: lazy loading failed for package ‘TestAnaAPP’
* removing ‘/tmp/workdir/TestAnaAPP/old/TestAnaAPP.Rcheck/TestAnaAPP’


```
# tidyEdSurvey

<details>

* Version: 0.1.3
* GitHub: NA
* Source code: https://github.com/cran/tidyEdSurvey
* Date/Publication: 2024-05-14 20:20:03 UTC
* Number of recursive dependencies: 111

Run `revdepcheck::cloud_details(, "tidyEdSurvey")` for more info

</details>

## In both

*   checking whether package ‘tidyEdSurvey’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/tidyEdSurvey/new/tidyEdSurvey.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘tidyEdSurvey’ ...
** package ‘tidyEdSurvey’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘EdSurvey’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
In addition: Warning message:
In check_dep_version() : ABI version mismatch: 
lme4 was built with Matrix ABI version 1
Current Matrix ABI version is 0
Please re-install lme4 from source or restore original ‘Matrix’ package
Execution halted
ERROR: lazy loading failed for package ‘tidyEdSurvey’
* removing ‘/tmp/workdir/tidyEdSurvey/new/tidyEdSurvey.Rcheck/tidyEdSurvey’


```
### CRAN

```
* installing *source* package ‘tidyEdSurvey’ ...
** package ‘tidyEdSurvey’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘EdSurvey’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
In addition: Warning message:
In check_dep_version() : ABI version mismatch: 
lme4 was built with Matrix ABI version 1
Current Matrix ABI version is 0
Please re-install lme4 from source or restore original ‘Matrix’ package
Execution halted
ERROR: lazy loading failed for package ‘tidyEdSurvey’
* removing ‘/tmp/workdir/tidyEdSurvey/old/tidyEdSurvey.Rcheck/tidyEdSurvey’


```
# tidyseurat

<details>

* Version: 0.8.0
* GitHub: https://github.com/stemangiola/tidyseurat
* Source code: https://github.com/cran/tidyseurat
* Date/Publication: 2024-01-10 04:50:02 UTC
* Number of recursive dependencies: 196

Run `revdepcheck::cloud_details(, "tidyseurat")` for more info

</details>

## In both

*   checking whether package ‘tidyseurat’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/tidyseurat/new/tidyseurat.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘tidyseurat’ ...
** package ‘tidyseurat’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘SeuratObject’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Execution halted
ERROR: lazy loading failed for package ‘tidyseurat’
* removing ‘/tmp/workdir/tidyseurat/new/tidyseurat.Rcheck/tidyseurat’


```
### CRAN

```
* installing *source* package ‘tidyseurat’ ...
** package ‘tidyseurat’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error: package or namespace load failed for ‘SeuratObject’ in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]):
 namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.4 is required
Execution halted
ERROR: lazy loading failed for package ‘tidyseurat’
* removing ‘/tmp/workdir/tidyseurat/old/tidyseurat.Rcheck/tidyseurat’


```
# tidyvpc

<details>

* Version: 1.5.1
* GitHub: https://github.com/certara/tidyvpc
* Source code: https://github.com/cran/tidyvpc
* Date/Publication: 2024-01-18 13:10:02 UTC
* Number of recursive dependencies: 174

Run `revdepcheck::cloud_details(, "tidyvpc")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/tidyvpc/new/tidyvpc.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘tidyvpc/DESCRIPTION’ ... OK
...
* checking if there is a namespace ... OK
* checking for executable files ... OK
* checking for hidden files and directories ... OK
* checking for portable file names ... OK
* checking for sufficient/correct file permissions ... OK
* checking whether package ‘tidyvpc’ can be installed ... ERROR
Installation failed.
See ‘/tmp/workdir/tidyvpc/new/tidyvpc.Rcheck/00install.out’ for details.
* DONE
Status: 1 ERROR, 1 NOTE





```
### CRAN

```
* using log directory ‘/tmp/workdir/tidyvpc/old/tidyvpc.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘tidyvpc/DESCRIPTION’ ... OK
...
* checking if there is a namespace ... OK
* checking for executable files ... OK
* checking for hidden files and directories ... OK
* checking for portable file names ... OK
* checking for sufficient/correct file permissions ... OK
* checking whether package ‘tidyvpc’ can be installed ... ERROR
Installation failed.
See ‘/tmp/workdir/tidyvpc/old/tidyvpc.Rcheck/00install.out’ for details.
* DONE
Status: 1 ERROR, 1 NOTE





```
# TriDimRegression

<details>

* Version: 1.0.2
* GitHub: https://github.com/alexander-pastukhov/tridim-regression
* Source code: https://github.com/cran/TriDimRegression
* Date/Publication: 2023-09-13 14:10:03 UTC
* Number of recursive dependencies: 99

Run `revdepcheck::cloud_details(, "TriDimRegression")` for more info

</details>

## In both

*   checking whether package ‘TriDimRegression’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/TriDimRegression/new/TriDimRegression.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘TriDimRegression’ ...
** package ‘TriDimRegression’ successfully unpacked and MD5 sums checked
** using staged installation
Error in loadNamespace(x) : there is no package called ‘rstantools’
Calls: loadNamespace -> withRestarts -> withOneRestart -> doWithOneRestart
Execution halted
ERROR: configuration failed for package ‘TriDimRegression’
* removing ‘/tmp/workdir/TriDimRegression/new/TriDimRegression.Rcheck/TriDimRegression’


```
### CRAN

```
* installing *source* package ‘TriDimRegression’ ...
** package ‘TriDimRegression’ successfully unpacked and MD5 sums checked
** using staged installation
Error in loadNamespace(x) : there is no package called ‘rstantools’
Calls: loadNamespace -> withRestarts -> withOneRestart -> doWithOneRestart
Execution halted
ERROR: configuration failed for package ‘TriDimRegression’
* removing ‘/tmp/workdir/TriDimRegression/old/TriDimRegression.Rcheck/TriDimRegression’


```
# WRTDStidal

<details>

* Version: 1.1.4
* GitHub: https://github.com/fawda123/WRTDStidal
* Source code: https://github.com/cran/WRTDStidal
* Date/Publication: 2023-10-20 09:00:11 UTC
* Number of recursive dependencies: 139

Run `revdepcheck::cloud_details(, "WRTDStidal")` for more info

</details>

## In both

*   checking whether package ‘WRTDStidal’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/WRTDStidal/new/WRTDStidal.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘WRTDStidal’ ...
** package ‘WRTDStidal’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘WRTDStidal’
* removing ‘/tmp/workdir/WRTDStidal/new/WRTDStidal.Rcheck/WRTDStidal’


```
### CRAN

```
* installing *source* package ‘WRTDStidal’ ...
** package ‘WRTDStidal’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in loadNamespace(j <- i[[1L]], c(lib.loc, .libPaths()), versionCheck = vI[[j]]) : 
  namespace ‘Matrix’ 1.5-4.1 is already loaded, but >= 1.6.0 is required
Calls: <Anonymous> ... namespaceImportFrom -> asNamespace -> loadNamespace
Execution halted
ERROR: lazy loading failed for package ‘WRTDStidal’
* removing ‘/tmp/workdir/WRTDStidal/old/WRTDStidal.Rcheck/WRTDStidal’


```
# xpose.nlmixr2

<details>

* Version: 0.4.0
* GitHub: NA
* Source code: https://github.com/cran/xpose.nlmixr2
* Date/Publication: 2022-06-08 09:10:02 UTC
* Number of recursive dependencies: 153

Run `revdepcheck::cloud_details(, "xpose.nlmixr2")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/xpose.nlmixr2/new/xpose.nlmixr2.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘xpose.nlmixr2/DESCRIPTION’ ... OK
...
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘nlmixr2est’

Package suggested but not available for checking: ‘nlmixr2’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/xpose.nlmixr2/old/xpose.nlmixr2.Rcheck’
* using R version 4.3.1 (2023-06-16)
* using platform: x86_64-pc-linux-gnu (64-bit)
* R was compiled by
    gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    GNU Fortran (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
* running under: Ubuntu 22.04.4 LTS
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘xpose.nlmixr2/DESCRIPTION’ ... OK
...
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘nlmixr2est’

Package suggested but not available for checking: ‘nlmixr2’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
# xxdi

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/xxdi
* Number of recursive dependencies: 37

Run `revdepcheck::cloud_details(, "xxdi")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
