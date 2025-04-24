# epocakir

<details>

* Version: 0.9.9
* GitHub: https://github.com/alwinw/epocakir
* Source code: https://github.com/cran/epocakir
* Date/Publication: 2023-01-06 15:30:06 UTC
* Number of recursive dependencies: 79

Run `revdepcheck::cloud_details(, "epocakir")` for more info

</details>

## Newly broken

*   checking whether package ‘epocakir’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/epocakir/new/epocakir.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘epocakir’ ...
** package ‘epocakir’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
Error in ncol(.data) : Use `df_n_col()` or `mat_n_col()` instead.
Error: unable to load R code in package ‘epocakir’
Execution halted
ERROR: lazy loading failed for package ‘epocakir’
* removing ‘/tmp/workdir/epocakir/new/epocakir.Rcheck/epocakir’


```
### CRAN

```
* installing *source* package ‘epocakir’ ...
** package ‘epocakir’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** data
*** moving datasets to lazyload DB
** inst
** byte-compile and prepare package for lazy loading
** help
*** installing help indices
** building package indices
** installing vignettes
** testing if installed package can be loaded from temporary location
** testing if installed package can be loaded from final location
** testing if installed package keeps a record of temporary installation path
* DONE (epocakir)


```
# rsample

<details>

* Version: 1.3.0
* GitHub: https://github.com/tidymodels/rsample
* Source code: https://github.com/cran/rsample
* Date/Publication: 2025-04-02 21:50:02 UTC
* Number of recursive dependencies: 116

Run `revdepcheck::cloud_details(, "rsample")` for more info

</details>

## Newly broken

*   checking whether package ‘rsample’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/rsample/new/rsample.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘rsample’ ...
** package ‘rsample’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
** help
*** installing help indices
*** copying figures
** building package indices
** installing vignettes
** testing if installed package can be loaded from temporary location
** testing if installed package can be loaded from final location
Error in `ncol()`:
! Use `df_n_col()` or `mat_n_col()` instead.
Backtrace:
     ▆
  1. ├─base::suppressWarnings(...)
  2. │ └─base::withCallingHandlers(...)
  3. ├─base::serialize(...)
  4. ├─base::as.list(base::getNamespace("rsample"), all.names = TRUE)
  5. ├─base::as.list.environment(base::getNamespace("rsample"), all.names = TRUE)
  6. ├─withr::with_seed(...)
  7. │ └─withr::with_preserve_seed(...)
  8. └─rsample::nested_cv(test_data(), outside = vfold_cv(v = 3), inside = bootstraps(times = 5))
  9.   ├─dplyr::mutate(outside, inner_resamples = inside)
 10.   └─dplyr:::mutate.data.frame(outside, inner_resamples = inside)
 11.     └─dplyr::mutate(...)
 12.       └─dplyr:::mutate_keep(...)
 13.         └─dplyr:::dplyr_col_select(out, names_out)
 14.           ├─vctrs::vec_as_location(loc, n = ncol(.data), names = names(.data))
 15.           └─dplyr:::ncol(.data)
 16.             └─rlang::abort("Use `df_n_col()` or `mat_n_col()` instead.")
Execution halted
ERROR: loading failed
* removing ‘/tmp/workdir/rsample/new/rsample.Rcheck/rsample’


```
### CRAN

```
* installing *source* package ‘rsample’ ...
** package ‘rsample’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
** help
*** installing help indices
*** copying figures
** building package indices
** installing vignettes
** testing if installed package can be loaded from temporary location
** testing if installed package can be loaded from final location
** testing if installed package keeps a record of temporary installation path
* DONE (rsample)


```
# TKCat

<details>

* Version: 1.1.12
* GitHub: https://github.com/patzaw/TKCat
* Source code: https://github.com/cran/TKCat
* Date/Publication: 2025-03-17 14:50:02 UTC
* Number of recursive dependencies: 124

Run `revdepcheck::cloud_details(, "TKCat")` for more info

</details>

## Newly broken

*   checking whether package ‘TKCat’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/TKCat/new/TKCat.Rcheck/00install.out’ for details.
    ```

## Newly fixed

*   checking installed package size ... NOTE
    ```
      installed size is  5.0Mb
      sub-directories of 1Mb or more:
        R     1.5Mb
        doc   2.7Mb
    ```

## Installation

### Devel

```
* installing *source* package ‘TKCat’ ...
** package ‘TKCat’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
Error in ncol(.data) : Use `df_n_col()` or `mat_n_col()` instead.
Error: unable to load R code in package ‘TKCat’
Execution halted
ERROR: lazy loading failed for package ‘TKCat’
* removing ‘/tmp/workdir/TKCat/new/TKCat.Rcheck/TKCat’


```
### CRAN

```
* installing *source* package ‘TKCat’ ...
** package ‘TKCat’ successfully unpacked and MD5 sums checked
** using staged installation
** R
** inst
** byte-compile and prepare package for lazy loading
** help
*** installing help indices
** building package indices
** installing vignettes
** testing if installed package can be loaded from temporary location
** testing if installed package can be loaded from final location
** testing if installed package keeps a record of temporary installation path
* DONE (TKCat)


```
