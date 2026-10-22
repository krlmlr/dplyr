# readmit (0.0.1)

* GitHub: <https://github.com/centralstatz/readmit>
* Email: <mailto:alex@centralstatz.com>
* GitHub mirror: <https://github.com/cran/readmit>

Run `revdepcheck::revdep_details(, "readmit")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     Running examples in ‘readmit-Ex.R’ failed
     The error most likely occurred in:
     
     > base::assign(".ptime", proc.time(), pos = "CheckExEnv")
     > ### Name: pdc_read
     > ### Title: Import datasets from the Provider Data Catalog (PDC)
     > ### Aliases: pdc_read pdc_datasets pdc_topics
     > 
     > ### ** Examples
     > 
     > # 1. See list of available data topics
     > pdc_topics()
     Error in pdc_topics() : Request did not return a successful status code.
     Execution halted
     ```

