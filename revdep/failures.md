# admiralophtha

<details>

* Version: 0.2.0
* GitHub: https://github.com/pharmaverse/admiralophtha
* Source code: https://github.com/cran/admiralophtha
* Date/Publication: 2023-06-12 09:10:13 UTC
* Number of recursive dependencies: 119

Run `revdepcheck::cloud_details(, "admiralophtha")` for more info

</details>

## In both

*   checking whether package ‘admiralophtha’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/admiralophtha/new/admiralophtha.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘admiralophtha’ ...
** package ‘admiralophtha’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error: object ‘quo_c’ is not exported by 'namespace:admiraldev'
Execution halted
ERROR: lazy loading failed for package ‘admiralophtha’
* removing ‘/tmp/workdir/admiralophtha/new/admiralophtha.Rcheck/admiralophtha’


```
### CRAN

```
* installing *source* package ‘admiralophtha’ ...
** package ‘admiralophtha’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error: object ‘quo_c’ is not exported by 'namespace:admiraldev'
Execution halted
ERROR: lazy loading failed for package ‘admiralophtha’
* removing ‘/tmp/workdir/admiralophtha/old/admiralophtha.Rcheck/admiralophtha’


```
# bayesdfa

<details>

* Version: 1.2.0
* GitHub: https://github.com/fate-ewi/bayesdfa
* Source code: https://github.com/cran/bayesdfa
* Date/Publication: 2021-09-28 13:20:02 UTC
* Number of recursive dependencies: 86

Run `revdepcheck::cloud_details(, "bayesdfa")` for more info

</details>

## In both

*   checking whether package ‘bayesdfa’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/bayesdfa/new/bayesdfa.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘bayesdfa’ ...
** package ‘bayesdfa’ successfully unpacked and MD5 sums checked
** using staged installation
** libs


g++ -std=gnu++17 -I"/opt/R/4.2.1/lib/R/include" -DNDEBUG -I"../inst/include" -I"/opt/R/4.2.1/lib/R/site-library/StanHeaders/include/src" -DBOOST_DISABLE_ASSERTS -DEIGEN_NO_DEBUG -DBOOST_MATH_OVERFLOW_ERROR_POLICY=errno_on_error -DUSE_STANC3 -D_HAS_AUTO_PTR_ETC=0 -I'/opt/R/4.2.1/lib/R/site-library/BH/include' -I'/opt/R/4.2.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.2.1/lib/R/site-library/RcppEigen/include' -I'/opt/R/4.2.1/lib/R/site-library/RcppParallel/include' -I'/opt/R/4.2.1/lib/R/site-library/rstan/include' -I'/opt/R/4.2.1/lib/R/site-library/StanHeaders/include' -I/usr/local/include   -I'/opt/R/4.2.1/lib/R/site-library/RcppParallel/include' -D_REENTRANT -DSTAN_THREADS   -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
In file included from /opt/R/4.2.1/lib/R/site-library/RcppEigen/include/Eigen/Core:397,
                 from /opt/R/4.2.1/lib/R/site-library/RcppEigen/include/Eigen/Dense:1,
                 from /opt/R/4.2.1/lib/R/site-library/RcppEigen/include/RcppEigenForward.h:30,
...
/opt/R/4.2.1/lib/R/site-library/RcppEigen/include/Eigen/src/Core/ProductEvaluators.h:35:90:   required from ‘Eigen::internal::evaluator<Eigen::Product<Lhs, Rhs, Option> >::evaluator(const XprType&) [with Lhs = Eigen::Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double, double>, const Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>, const Eigen::Matrix<double, 1, -1> >, const Eigen::Transpose<Eigen::Matrix<double, -1, 1> > >, Eigen::Matrix<double, -1, -1>, 0>; Rhs = Eigen::Matrix<double, -1, 1>; int Options = 0; Eigen::internal::evaluator<Eigen::Product<Lhs, Rhs, Option> >::XprType = Eigen::Product<Eigen::Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double, double>, const Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>, const Eigen::Matrix<double, 1, -1> >, const Eigen::Transpose<Eigen::Matrix<double, -1, 1> > >, Eigen::Matrix<double, -1, -1>, 0>, Eigen::Matrix<double, -1, 1>, 0>]’
/opt/R/4.2.1/lib/R/site-library/RcppEigen/include/Eigen/src/Core/Product.h:132:22:   required from ‘Eigen::internal::dense_product_base<Lhs, Rhs, Option, 6>::operator const Scalar() const [with Lhs = Eigen::Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double, double>, const Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>, const Eigen::Matrix<double, 1, -1> >, const Eigen::Transpose<Eigen::Matrix<double, -1, 1> > >, Eigen::Matrix<double, -1, -1>, 0>; Rhs = Eigen::Matrix<double, -1, 1>; int Option = 0; Eigen::internal::dense_product_base<Lhs, Rhs, Option, 6>::Scalar = double]’
/opt/R/4.2.1/lib/R/site-library/StanHeaders/include/src/stan/mcmc/hmc/hamiltonians/dense_e_metric.hpp:22:56:   required from ‘double stan::mcmc::dense_e_metric<Model, BaseRNG>::T(stan::mcmc::dense_e_point&) [with Model = model_dfa_namespace::model_dfa; BaseRNG = boost::random::additive_combine_engine<boost::random::linear_congruential_engine<unsigned int, 40014, 0, 2147483563>, boost::random::linear_congruential_engine<unsigned int, 40692, 0, 2147483399> >]’
/opt/R/4.2.1/lib/R/site-library/StanHeaders/include/src/stan/mcmc/hmc/hamiltonians/dense_e_metric.hpp:21:10:   required from here
/opt/R/4.2.1/lib/R/site-library/RcppEigen/include/Eigen/src/Core/DenseCoeffsBase.h:55:30: warning: ignoring attributes on template argument ‘Eigen::internal::packet_traits<double>::type’ {aka ‘__vector(2) double’} [-Wignored-attributes]
g++: fatal error: Killed signal terminated program cc1plus
compilation terminated.
make: *** [/opt/R/4.2.1/lib/R/etc/Makeconf:175: stanExports_dfa.o] Error 1
ERROR: compilation failed for package ‘bayesdfa’
* removing ‘/tmp/workdir/bayesdfa/new/bayesdfa.Rcheck/bayesdfa’


```
### CRAN

```
* installing *source* package ‘bayesdfa’ ...
** package ‘bayesdfa’ successfully unpacked and MD5 sums checked
** using staged installation
** libs


g++ -std=gnu++17 -I"/opt/R/4.2.1/lib/R/include" -DNDEBUG -I"../inst/include" -I"/opt/R/4.2.1/lib/R/site-library/StanHeaders/include/src" -DBOOST_DISABLE_ASSERTS -DEIGEN_NO_DEBUG -DBOOST_MATH_OVERFLOW_ERROR_POLICY=errno_on_error -DUSE_STANC3 -D_HAS_AUTO_PTR_ETC=0 -I'/opt/R/4.2.1/lib/R/site-library/BH/include' -I'/opt/R/4.2.1/lib/R/site-library/Rcpp/include' -I'/opt/R/4.2.1/lib/R/site-library/RcppEigen/include' -I'/opt/R/4.2.1/lib/R/site-library/RcppParallel/include' -I'/opt/R/4.2.1/lib/R/site-library/rstan/include' -I'/opt/R/4.2.1/lib/R/site-library/StanHeaders/include' -I/usr/local/include   -I'/opt/R/4.2.1/lib/R/site-library/RcppParallel/include' -D_REENTRANT -DSTAN_THREADS   -fpic  -g -O2  -c RcppExports.cpp -o RcppExports.o
In file included from /opt/R/4.2.1/lib/R/site-library/RcppEigen/include/Eigen/Core:397,
                 from /opt/R/4.2.1/lib/R/site-library/RcppEigen/include/Eigen/Dense:1,
                 from /opt/R/4.2.1/lib/R/site-library/RcppEigen/include/RcppEigenForward.h:30,
...
/opt/R/4.2.1/lib/R/site-library/RcppEigen/include/Eigen/src/Core/ProductEvaluators.h:35:90:   required from ‘Eigen::internal::evaluator<Eigen::Product<Lhs, Rhs, Option> >::evaluator(const XprType&) [with Lhs = Eigen::Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double, double>, const Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>, const Eigen::Matrix<double, 1, -1> >, const Eigen::Transpose<Eigen::Matrix<double, -1, 1> > >, Eigen::Matrix<double, -1, -1>, 0>; Rhs = Eigen::Matrix<double, -1, 1>; int Options = 0; Eigen::internal::evaluator<Eigen::Product<Lhs, Rhs, Option> >::XprType = Eigen::Product<Eigen::Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double, double>, const Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>, const Eigen::Matrix<double, 1, -1> >, const Eigen::Transpose<Eigen::Matrix<double, -1, 1> > >, Eigen::Matrix<double, -1, -1>, 0>, Eigen::Matrix<double, -1, 1>, 0>]’
/opt/R/4.2.1/lib/R/site-library/RcppEigen/include/Eigen/src/Core/Product.h:132:22:   required from ‘Eigen::internal::dense_product_base<Lhs, Rhs, Option, 6>::operator const Scalar() const [with Lhs = Eigen::Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double, double>, const Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>, const Eigen::Matrix<double, 1, -1> >, const Eigen::Transpose<Eigen::Matrix<double, -1, 1> > >, Eigen::Matrix<double, -1, -1>, 0>; Rhs = Eigen::Matrix<double, -1, 1>; int Option = 0; Eigen::internal::dense_product_base<Lhs, Rhs, Option, 6>::Scalar = double]’
/opt/R/4.2.1/lib/R/site-library/StanHeaders/include/src/stan/mcmc/hmc/hamiltonians/dense_e_metric.hpp:22:56:   required from ‘double stan::mcmc::dense_e_metric<Model, BaseRNG>::T(stan::mcmc::dense_e_point&) [with Model = model_dfa_namespace::model_dfa; BaseRNG = boost::random::additive_combine_engine<boost::random::linear_congruential_engine<unsigned int, 40014, 0, 2147483563>, boost::random::linear_congruential_engine<unsigned int, 40692, 0, 2147483399> >]’
/opt/R/4.2.1/lib/R/site-library/StanHeaders/include/src/stan/mcmc/hmc/hamiltonians/dense_e_metric.hpp:21:10:   required from here
/opt/R/4.2.1/lib/R/site-library/RcppEigen/include/Eigen/src/Core/DenseCoeffsBase.h:55:30: warning: ignoring attributes on template argument ‘Eigen::internal::packet_traits<double>::type’ {aka ‘__vector(2) double’} [-Wignored-attributes]
g++: fatal error: Killed signal terminated program cc1plus
compilation terminated.
make: *** [/opt/R/4.2.1/lib/R/etc/Makeconf:175: stanExports_dfa.o] Error 1
ERROR: compilation failed for package ‘bayesdfa’
* removing ‘/tmp/workdir/bayesdfa/old/bayesdfa.Rcheck/bayesdfa’


```
# beadplexr

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/beadplexr
* Number of recursive dependencies: 115

Run `revdepcheck::cloud_details(, "beadplexr")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# bistablehistory

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/bistablehistory
* Number of recursive dependencies: 93

Run `revdepcheck::cloud_details(, "bistablehistory")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# checkthat

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/checkthat
* Number of recursive dependencies: 58

Run `revdepcheck::cloud_details(, "checkthat")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# Covid19Wastewater

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/Covid19Wastewater
* Number of recursive dependencies: 107

Run `revdepcheck::cloud_details(, "Covid19Wastewater")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# Elja

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/Elja
* Number of recursive dependencies: 115

Run `revdepcheck::cloud_details(, "Elja")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# loon.ggplot

<details>

* Version: 1.3.3
* GitHub: https://github.com/great-northern-diver/loon.ggplot
* Source code: https://github.com/cran/loon.ggplot
* Date/Publication: 2022-11-12 22:30:02 UTC
* Number of recursive dependencies: 105

Run `revdepcheck::cloud_details(, "loon.ggplot")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/loon.ggplot/new/loon.ggplot.Rcheck’
* using R version 4.2.1 (2022-06-23)
* using platform: x86_64-pc-linux-gnu (64-bit)
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘loon.ggplot/DESCRIPTION’ ... OK
* checking extension type ... Package
* this is package ‘loon.ggplot’ version ‘1.3.3’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘loon’

Package suggested but not available for checking: ‘zenplots’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





```
### CRAN

```
* using log directory ‘/tmp/workdir/loon.ggplot/old/loon.ggplot.Rcheck’
* using R version 4.2.1 (2022-06-23)
* using platform: x86_64-pc-linux-gnu (64-bit)
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘loon.ggplot/DESCRIPTION’ ... OK
* checking extension type ... Package
* this is package ‘loon.ggplot’ version ‘1.3.3’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... ERROR
Package required but not available: ‘loon’

Package suggested but not available for checking: ‘zenplots’

See section ‘The DESCRIPTION file’ in the ‘Writing R Extensions’
manual.
* DONE
Status: 1 ERROR





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
* using R version 4.2.1 (2022-06-23)
* using platform: x86_64-pc-linux-gnu (64-bit)
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘loon.shiny/DESCRIPTION’ ... OK
* checking extension type ... Package
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
* using R version 4.2.1 (2022-06-23)
* using platform: x86_64-pc-linux-gnu (64-bit)
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘loon.shiny/DESCRIPTION’ ... OK
* checking extension type ... Package
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
# peptoolkit

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/peptoolkit
* Number of recursive dependencies: 77

Run `revdepcheck::cloud_details(, "peptoolkit")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# peramo

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/peramo
* Number of recursive dependencies: 53

Run `revdepcheck::cloud_details(, "peramo")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# profoc

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/profoc
* Number of recursive dependencies: 74

Run `revdepcheck::cloud_details(, "profoc")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# prqlr

<details>

* Version: 0.5.2
* GitHub: https://github.com/eitsupi/prqlr
* Source code: https://github.com/cran/prqlr
* Date/Publication: 2023-09-11 11:50:07 UTC
* Number of recursive dependencies: 71

Run `revdepcheck::cloud_details(, "prqlr")` for more info

</details>

## In both

*   checking whether package ‘prqlr’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/prqlr/new/prqlr.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘prqlr’ ...
** package ‘prqlr’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
rm -Rf prqlr.so ./rust/target/release/libprqlr.a entrypoint.o
gcc -I"/opt/R/4.2.1/lib/R/include" -DNDEBUG   -I/usr/local/include   -fpic  -g -O2  -c entrypoint.c -o entrypoint.o
if [ -f ./rust/vendor.tar.xz ]; then \
	mkdir -p ./rust/vendor && \
	/usr/bin/tar --extract --xz --file ./rust/vendor.tar.xz -C ./rust/vendor && \
	mkdir -p /tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/.cargo && \
...
if [ "" != "true" ]; then \
	export CARGO_HOME=/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/.cargo; \
	export CARGO_BUILD_JOBS=2; \
fi && \
	export PATH="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/root/.cargo/bin" && \
	cargo build --lib --release --manifest-path=./rust/Cargo.toml --target-dir ./rust/target
error: package `rustix v0.38.10` cannot be built because it requires rustc 1.63 or newer, while the currently active rustc version is 1.61.0
make: *** [Makevars:18: rust/target/release/libprqlr.a] Error 101
ERROR: compilation failed for package ‘prqlr’
* removing ‘/tmp/workdir/prqlr/new/prqlr.Rcheck/prqlr’


```
### CRAN

```
* installing *source* package ‘prqlr’ ...
** package ‘prqlr’ successfully unpacked and MD5 sums checked
** using staged installation
** libs
rm -Rf prqlr.so ./rust/target/release/libprqlr.a entrypoint.o
gcc -I"/opt/R/4.2.1/lib/R/include" -DNDEBUG   -I/usr/local/include   -fpic  -g -O2  -c entrypoint.c -o entrypoint.o
if [ -f ./rust/vendor.tar.xz ]; then \
	mkdir -p ./rust/vendor && \
	/usr/bin/tar --extract --xz --file ./rust/vendor.tar.xz -C ./rust/vendor && \
	mkdir -p /tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/.cargo && \
...
if [ "" != "true" ]; then \
	export CARGO_HOME=/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/.cargo; \
	export CARGO_BUILD_JOBS=2; \
fi && \
	export PATH="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/root/.cargo/bin" && \
	cargo build --lib --release --manifest-path=./rust/Cargo.toml --target-dir ./rust/target
error: package `rustix v0.38.10` cannot be built because it requires rustc 1.63 or newer, while the currently active rustc version is 1.61.0
make: *** [Makevars:18: rust/target/release/libprqlr.a] Error 101
ERROR: compilation failed for package ‘prqlr’
* removing ‘/tmp/workdir/prqlr/old/prqlr.Rcheck/prqlr’


```
# RiskScorescvd

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/RiskScorescvd
* Number of recursive dependencies: 54

Run `revdepcheck::cloud_details(, "RiskScorescvd")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# smoothy

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/smoothy
* Number of recursive dependencies: 60

Run `revdepcheck::cloud_details(, "smoothy")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# staRdom

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/staRdom
* Number of recursive dependencies: 156

Run `revdepcheck::cloud_details(, "staRdom")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# tidyfit

<details>

* Version: 0.6.4
* GitHub: https://github.com/jpfitzinger/tidyfit
* Source code: https://github.com/cran/tidyfit
* Date/Publication: 2023-05-20 15:40:02 UTC
* Number of recursive dependencies: 165

Run `revdepcheck::cloud_details(, "tidyfit")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/tidyfit/new/tidyfit.Rcheck’
* using R version 4.2.1 (2022-06-23)
* using platform: x86_64-pc-linux-gnu (64-bit)
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘tidyfit/DESCRIPTION’ ... OK
* checking extension type ... Package
* this is package ‘tidyfit’ version ‘0.6.4’
* package encoding: UTF-8
* checking package namespace information ... OK
...
  ‘Flowchart.Rmd’ using ‘UTF-8’... OK
  ‘Predicting_Boston_House_Prices.Rmd’ using ‘UTF-8’... OK
  ‘Bootstrapping_Confidence_Intervals.Rmd’ using ‘UTF-8’... OK
  ‘Feature_Selection.Rmd’ using ‘UTF-8’... OK
  ‘Multinomial_Classification.Rmd’ using ‘UTF-8’... OK
  ‘Rolling_Window_Time_Series_Regression.Rmd’ using ‘UTF-8’... OK
  ‘Time-varying_parameters_vs_rolling_windows.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: 2 ERRORs, 1 NOTE





```
### CRAN

```
* using log directory ‘/tmp/workdir/tidyfit/old/tidyfit.Rcheck’
* using R version 4.2.1 (2022-06-23)
* using platform: x86_64-pc-linux-gnu (64-bit)
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘tidyfit/DESCRIPTION’ ... OK
* checking extension type ... Package
* this is package ‘tidyfit’ version ‘0.6.4’
* package encoding: UTF-8
* checking package namespace information ... OK
...
  ‘Flowchart.Rmd’ using ‘UTF-8’... OK
  ‘Predicting_Boston_House_Prices.Rmd’ using ‘UTF-8’... OK
  ‘Bootstrapping_Confidence_Intervals.Rmd’ using ‘UTF-8’... OK
  ‘Feature_Selection.Rmd’ using ‘UTF-8’... OK
  ‘Multinomial_Classification.Rmd’ using ‘UTF-8’... OK
  ‘Rolling_Window_Time_Series_Regression.Rmd’ using ‘UTF-8’... OK
  ‘Time-varying_parameters_vs_rolling_windows.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: 2 ERRORs, 1 NOTE





```
# TriDimRegression

<details>

* Version: NA
* GitHub: NA
* Source code: https://github.com/cran/TriDimRegression
* Number of recursive dependencies: 101

Run `revdepcheck::cloud_details(, "TriDimRegression")` for more info

</details>

## Error before installation

### Devel

```






```
### CRAN

```






```
# vivid

<details>

* Version: 0.2.8
* GitHub: NA
* Source code: https://github.com/cran/vivid
* Date/Publication: 2023-07-10 22:20:02 UTC
* Number of recursive dependencies: 211

Run `revdepcheck::cloud_details(, "vivid")` for more info

</details>

## Error before installation

### Devel

```
* using log directory ‘/tmp/workdir/vivid/new/vivid.Rcheck’
* using R version 4.2.1 (2022-06-23)
* using platform: x86_64-pc-linux-gnu (64-bit)
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘vivid/DESCRIPTION’ ... OK
* this is package ‘vivid’ version ‘0.2.8’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... NOTE
...
* checking installed files from ‘inst/doc’ ... OK
* checking files in ‘vignettes’ ... OK
* checking examples ... OK
* checking for unstated dependencies in vignettes ... OK
* checking package vignettes in ‘inst/doc’ ... OK
* checking running R code from vignettes ... NONE
  ‘vividVignette.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: 1 NOTE





```
### CRAN

```
* using log directory ‘/tmp/workdir/vivid/old/vivid.Rcheck’
* using R version 4.2.1 (2022-06-23)
* using platform: x86_64-pc-linux-gnu (64-bit)
* using session charset: UTF-8
* using option ‘--no-manual’
* checking for file ‘vivid/DESCRIPTION’ ... OK
* this is package ‘vivid’ version ‘0.2.8’
* package encoding: UTF-8
* checking package namespace information ... OK
* checking package dependencies ... NOTE
...
* checking installed files from ‘inst/doc’ ... OK
* checking files in ‘vignettes’ ... OK
* checking examples ... OK
* checking for unstated dependencies in vignettes ... OK
* checking package vignettes in ‘inst/doc’ ... OK
* checking running R code from vignettes ... NONE
  ‘vividVignette.Rmd’ using ‘UTF-8’... OK
* checking re-building of vignette outputs ... OK
* DONE
Status: 1 NOTE





```
