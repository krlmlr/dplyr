# multinma (0.9.1)

* GitHub: <https://github.com/dmphillippo/multinma>
* Email: <mailto:david.phillippo@bristol.ac.uk>
* GitHub mirror: <https://github.com/cran/multinma>

Run `revdepcheck::revdep_details(, "multinma")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     4 57.400000      0
     5 57.400000      0
     6 30.714460      0
     > head(ndmm_agd)
            study     studyf trt trtf eventtime status
     1 Morgan2012 Morgan2012 Pbo  Pbo  18.72575      1
     2 Morgan2012 Morgan2012 Pbo  Pbo  63.36000      0
     3 Morgan2012 Morgan2012 Pbo  Pbo  34.35726      1
     4 Morgan2012 Morgan2012 Pbo  Pbo  10.77826      1
     5 Morgan2012 Morgan2012 Pbo  Pbo  63.36000      0
     6 Morgan2012 Morgan2012 Pbo  Pbo  14.52966      1
     > 
     > ndmm_net <- combine_network(
     +   set_ipd(ndmm_ipd,
     +           study, trt,
     +           Surv = Surv(eventtime / 12, status)),
     +   set_agd_surv(ndmm_agd,
     +                study, trt,
     +                Surv = Surv(eventtime / 12, status),
     +                covariates = ndmm_agd_covs))
     > 
     > # The default knot locations
     > make_knots(ndmm_net, type = "quantile")
     Error: GetQueryResult: Error evaluating duckdb query: Invalid Error: duckdb_sexp_to_value: Unsupported RTypeId
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
        5.   └─tidyr:::unnest.data.frame(y_agd_arm, cols = ".Surv")
        6.     └─tidyr::unchop(...)
        7.       └─vctrs::vec_size(data)
       
       [ FAIL 2 | WARN 0 | SKIP 23 | PASS 1100 ]
       Deleting unused snapshots:
       'plot_nma_data/atrial-fibrillation-network-star.svg',
       'plot_nma_data/atrial-fibrillation-network.svg',
       'plot_nma_data/bcg-vaccine-network.svg', 'plot_nma_data/blocker-network.svg',
       'plot_nma_data/diabetes-network.svg', 'plot_nma_data/dietary-fat-network.svg',
       'plot_nma_data/duplicated-agd-arms-network.svg',
       'plot_nma_data/duplicated-agd-contrasts-network.svg',
       'plot_nma_data/duplicated-ipd-arms-network.svg',
       'plot_nma_data/hta-psoriasis-network.svg', 'plot_nma_data/ndmm-network.svg',
       'plot_nma_data/parkinsons-arm-network.svg',
       'plot_nma_data/parkinsons-contrast-network.svg',
       'plot_nma_data/parkinsons-mixed-network.svg',
       'plot_nma_data/plaque-psoriasis-network.svg',
       'plot_nma_data/smoking-network.svg', 'plot_nma_data/statins-network.svg',
       'plot_nma_data/thrombolytics-dias-network.svg',
       'plot_nma_data/thrombolytics-network.svg', and
       'plot_nma_data/transfusion-network.svg'
       Error:
       ! Test failures.
       Execution halted
     ```

## In both

*   checking compilation flags used ... NOTE
     ```
     Compilation used the following non-portable flag(s):
       ‘-Wdate-time’ ‘-Werror=format-security’ ‘-Wformat’
     ```

