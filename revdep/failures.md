# additive

<details>

* Version: 1.0.1
* GitHub: https://github.com/hsbadr/additive
* Source code: https://github.com/cran/additive
* Date/Publication: 2024-04-28 21:00:07 UTC
* Number of recursive dependencies: 151

Run `revdepcheck::cloud_details(, "additive")` for more info

</details>

## Newly broken

*   checking whether package ‘additive’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/additive/new/additive.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘additive’ ...
** package ‘additive’ successfully unpacked and MD5 sums checked
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
Error: package or namespace load failed for ‘additive’:
 .onLoad failed in loadNamespace() for 'additive', details:
  call: dplyr::group_by(., mode, engine)
  error: This operation cannot be carried out by DuckDB, and the input is a
stingy duckplyr frame.
ℹ Use `compute(prudence = "lavish")` to materialize to temporary storage and
  continue with duckplyr.
ℹ See `vignette("prudence")` for other options.
Error: loading failed
Execution halted
ERROR: loading failed
* removing ‘/tmp/workdir/additive/new/additive.Rcheck/additive’


```
### CRAN

```
* installing *source* package ‘additive’ ...
** package ‘additive’ successfully unpacked and MD5 sums checked
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
* DONE (additive)


```
