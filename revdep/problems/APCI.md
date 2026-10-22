# APCI (1.0.8)

* Email: <mailto:jpx5053@psu.edu>
* GitHub mirror: <https://github.com/cran/APCI>

Run `revdepcheck::revdep_details(, "APCI")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       y ~ age * period
       <environment: 0x588fd13be918>
       Beginning Cgee S-function, @(#) geeformula.q 4.13 98/01/27
       running glm to get initial regression estimate
        (Intercept)         acc1         acc2         acc3         acc4         acc5 
        40.80422232 -19.14274724 -17.52574633 -14.92213267 -11.32256273  -6.74210019 
               acc6         acc7         acc8         acc9         pcc1         pcc2 
        -1.31231695   5.18605255  12.90197410  21.65894195  -7.28429751  -5.72400464 
               pcc3         pcc4         pcc5    acc1:pcc1    acc2:pcc1    acc3:pcc1 
        -3.04025872   0.52475528   5.00133917   0.14981932  -0.18984710  -0.04265919 
          acc4:pcc1    acc5:pcc1    acc6:pcc1    acc7:pcc1    acc8:pcc1    acc9:pcc1 
         0.04781297   0.01277723   0.02113837  -0.29109089   0.27077723   0.02378875 
          acc1:pcc2    acc2:pcc2    acc3:pcc2    acc4:pcc2    acc5:pcc2    acc6:pcc2 
         0.34158469  -0.20606290  -0.02278658  -0.23294772   0.07678238   0.41968258 
          acc7:pcc2    acc8:pcc2    acc9:pcc2    acc1:pcc3    acc2:pcc3    acc3:pcc3 
         0.16421919  -0.36782226   0.25156903   0.02021847  -0.02386242  -0.31687745 
          acc4:pcc3    acc5:pcc3    acc6:pcc3    acc7:pcc3    acc8:pcc3    acc9:pcc3 
         0.02745830   0.14868827  -0.34543302   0.20359140  -0.03111354   0.16808948 
          acc1:pcc4    acc2:pcc4    acc3:pcc4    acc4:pcc4    acc5:pcc4    acc6:pcc4 
        -0.40373828  -0.01016736   0.27001841   0.32768797   0.24335903  -0.13872907 
          acc7:pcc4    acc8:pcc4    acc9:pcc4    acc1:pcc5    acc2:pcc5    acc3:pcc5 
        -0.08586020  -0.35514692   0.05337311   0.03544346   0.32550817  -0.10063054 
          acc4:pcc5    acc5:pcc5    acc6:pcc5    acc7:pcc5    acc8:pcc5    acc9:pcc5 
        -0.15980560  -0.59797771  -0.35088499   0.32054636   0.69367623  -0.24651131 
       Killed
     ```

