# admiral

<details>

* Version: 1.2.0
* GitHub: https://github.com/pharmaverse/admiral
* Source code: https://github.com/cran/admiral
* Date/Publication: 2025-01-15 19:50:02 UTC
* Number of recursive dependencies: 77

Run `revdepcheck::cloud_details(, "admiral")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/tests.html
      > # * https://testthat.r-lib.org/reference/test_package.html#special-files
      > 
      > library(testthat) # nolint: undesirable_function_linter
      > library(admiral) # nolint: undesirable_function_linter
      > 
      > test_check("admiral", stop_on_warning = TRUE)
      [ FAIL 0 | WARN 20 | SKIP 116 | PASS 672 ]
      
      ══ Skipped tests (116) ═════════════════════════════════════════════════════════
      • On CRAN (116): 'test-admiral_options.R:9:3', 'test-call_derivation.R:112:3',
        'test-call_derivation.R:131:3', 'test-call_derivation.R:152:3',
        'test-call_derivation.R:173:3', 'test-call_derivation.R:194:3',
        'test-call_derivation.R:212:3', 'test-call_user_fun.R:2:3',
        'test-compute_age_years.R:40:3', 'test-compute_scale.R:111:3',
        'test-compute_scale.R:124:3', 'test-consolidate_metadata.R:75:3',
        'test-create_query_data.R:263:3', 'test-create_query_data.R:324:3',
        'test-create_query_data.R:336:3', 'test-create_query_data.R:347:3',
        'test-create_query_data.R:360:3', 'test-create_query_data.R:373:3',
        'test-create_query_data.R:384:3', 'test-create_query_data.R:396:3',
        'test-create_query_data.R:407:3', 'test-create_query_data.R:418:3',
        'test-create_query_data.R:429:3', 'test-create_query_data.R:441:3',
        'test-create_query_data.R:454:3', 'test-create_query_data.R:467:3',
        'test-create_query_data.R:475:3', 'test-create_single_dose_dataset.R:220:3',
        'test-create_single_dose_dataset.R:237:3',
        'test-create_single_dose_dataset.R:261:3',
        'test-create_single_dose_dataset.R:277:3',
        'test-derive_extreme_event.R:620:3', 'test-derive_joined.R:256:3',
        'test-derive_merged.R:146:3', 'test-derive_merged.R:281:3',
        'test-derive_merged.R:296:3', 'test-derive_merged.R:312:3',
        'test-derive_merged.R:325:3', 'test-derive_merged.R:339:3',
        'test-derive_merged.R:405:3', 'test-derive_merged.R:478:3',
        'test-derive_merged.R:513:3', 'test-derive_merged.R:646:3',
        'test-derive_merged.R:659:3', 'test-derive_param_bmi.R:114:3',
        'test-derive_param_bsa.R:305:3', 'test-derive_param_computed.R:477:3',
        'test-derive_param_computed.R:514:3', 'test-derive_param_computed.R:531:3',
        'test-derive_param_computed.R:552:3',
        'test-derive_param_extreme_record.R:32:3', 'test-derive_param_map.R:149:3',
        'test-derive_param_qtc.R:112:3', 'test-derive_param_rr.R:52:3',
        'test-derive_param_tte.R:454:3', 'test-derive_param_tte.R:515:3',
        'test-derive_param_tte.R:576:3', 'test-derive_param_tte.R:635:3',
        'test-derive_param_tte.R:921:3', 'test-derive_param_tte.R:981:3',
        'test-derive_param_tte.R:1122:3', 'test-derive_var_base.R:128:3',
        'test-derive_var_dthcaus.R:32:3', 'test-derive_var_dthcaus.R:664:3',
        'test-derive_var_extreme_date.R:28:3',
        'test-derive_var_extreme_date.R:171:3',
        'test-derive_var_extreme_date.R:325:3',
        'test-derive_var_merged_ef_msrc.R:130:3', 'test-derive_var_ontrtfl.R:419:3',
        'test-derive_var_trtemfl.R:154:3', 'test-derive_var_trtemfl.R:165:3',
        'test-derive_var_trtemfl.R:176:3', 'test-derive_var_trtemfl.R:187:3',
        'test-derive_var_trtemfl.R:210:3', 'test-derive_vars_aage.R:69:3',
        'test-derive_vars_aage.R:86:3', 'test-derive_vars_aage.R:149:3',
        'test-derive_vars_atc.R:83:3', 'test-derive_vars_cat.R:79:3',
        'test-derive_vars_cat.R:331:3', 'test-derive_vars_cat.R:347:3',
        'test-derive_vars_crit_flag.R:76:3', 'test-derive_vars_crit_flag.R:97:3',
        'test-derive_vars_dt.R:181:3', 'test-derive_vars_dt.R:197:3',
        'test-derive_vars_dt.R:502:3', 'test-derive_vars_dt.R:547:3',
        'test-derive_vars_dt.R:566:3', 'test-derive_vars_dtm.R:356:3',
        'test-derive_vars_dtm.R:553:3', 'test-derive_vars_dtm.R:637:3',
        'test-derive_vars_dtm.R:685:3', 'test-derive_vars_dtm.R:705:3',
        'test-derive_vars_dtm.R:785:3', 'test-derive_vars_dy.R:248:3',
        'test-derive_vars_query.R:152:3', 'test-derive_vars_query.R:173:3',
        'test-derive_vars_query.R:247:3', 'test-derive_vars_query.R:263:3',
        'test-derive_vars_transposed.R:66:3', 'test-derive_vars_transposed.R:111:3',
        'test-dt_level.R:42:3', 'test-dt_level.R:49:3', 'test-duplicates.R:43:3',
        'test-get_summary_records.R:25:3', 'test-period_dataset.R:128:3',
        'test-period_dataset.R:151:3', 'test-period_dataset.R:174:3',
        'test-period_dataset.R:321:3', 'test-period_dataset.R:348:3',
        'test-roxygen2.R:20:3', 'test-transform_range.R:28:3',
        'test-transform_range.R:40:3', 'test-user_helpers.R:16:3',
        'test-user_helpers.R:41:3', 'test-user_utils.R:250:3'
      
      [ FAIL 0 | WARN 20 | SKIP 116 | PASS 672 ]
      Error: Tests generated warnings
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.3Mb
      sub-directories of 1Mb or more:
        doc    2.2Mb
        help   1.8Mb
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 12 marked UTF-8 strings
    ```

# dartR.base

<details>

* Version: 0.98
* GitHub: NA
* Source code: https://github.com/cran/dartR.base
* Date/Publication: 2024-09-19 13:20:02 UTC
* Number of recursive dependencies: 288

Run `revdepcheck::cloud_details(, "dartR.base")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is  5.3Mb
      sub-directories of 1Mb or more:
        R      2.0Mb
        help   3.2Mb
    ```

# datacutr

<details>

* Version: 0.2.2
* GitHub: https://github.com/pharmaverse/datacutr
* Source code: https://github.com/cran/datacutr
* Date/Publication: 2025-01-10 10:40:01 UTC
* Number of recursive dependencies: 120

Run `revdepcheck::cloud_details(, "datacutr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(datacutr)
      > 
      > test_check("datacutr")
      [1] "At least 1 patient with missing datacut date."
      [1] "At least 1 patient with missing datacut date, all records will be kept."
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpH0Zoyf/datacut_2025-02-01_185417.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpH0Zoyf/rmarkdown-str198870814437.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpH0Zoyf/datacut_2025-02-01_185418.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpH0Zoyf/rmarkdown-str198858d97351.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpH0Zoyf/datacut_2025-02-01_185419.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpH0Zoyf/rmarkdown-str19882db5e538.html 
      /usr/local/bin/pandoc +RTS -K512m -RTS read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpH0Zoyf/datacut_2025-02-01_185420.html --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter /usr/local/lib/R/site-library/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template /usr/local/lib/R/site-library/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpH0Zoyf/rmarkdown-str198811c4ff6b.html 
      [1] "At least 1 patient with missing datacut date, all records will be kept."
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 58 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-create_dcut.R:42:3'): One observation in DCUT ────────────────
      create_dcut(...) not equal to `expected_dcutna`.
      Component "DCUTDTC": Modes: numeric, logical
      Component "DCUTDTC": target is numeric, current is logical
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 58 ]
      Error: Test failures
      Execution halted
    ```

# gasper

<details>

* Version: 1.1.6
* GitHub: https://github.com/fabnavarro/gasper
* Source code: https://github.com/cran/gasper
* Date/Publication: 2024-02-28 11:10:02 UTC
* Number of recursive dependencies: 68

Run `revdepcheck::cloud_details(, "gasper")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘gasper_vignette.rmd’ using rmarkdown
    tlmgr: package repository https://ctan.tinycomputers.io/tex-archive/systems/texlive/tlnet (verified)
    [1/1, ??:??/??:??] install: makecell [5k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    
    tlmgr: Remote database (revision 73653 of the texlive-scripts package)
    seems to be older than the local installation (rev 73669 of
    texlive-scripts); please use a different mirror and/or wait a day or two.
    
    Warning in system2("tlmgr", args, ...) :
      running command ''tlmgr' search --file --global '/rsfs10(-(Bold|Italic|Regular).*)?[.](tfm|afm|mf|otf|ttf)'' had status 1 and error message 'Function not implemented'
    tlmgr: package repository https://mirror.las.iastate.edu/tex-archive/systems/texlive/tlnet (verified)
    tlmgr install: package already present: texlive-scripts
    
    tlmgr: Remote database (revision 73653 of the texlive-scripts package)
    seems to be older than the local installation (rev 73669 of
    texlive-scripts); please use a different mirror and/or wait a day or two.
    
    Warning in system2("tlmgr", args, ...) :
      running command ''tlmgr' search --file --global '/rsfs10(-(Bold|Italic|Regular).*)?[.](tfm|afm|mf|otf|ttf)'' had status 1 and error message 'Function not implemented'
    ! Font U/rsfs/m/n/12=rsfs10 at 12.0pt not loadable: Metric (TFM) file not found.
    <to be read again> 
                       relax 
    l.170 
    
    ! kpathsea: Running mktextfm rsfs10
    ! /opt/TinyTeX/texmf-dist/web2c/mktexnam: Could not map source abbreviation  for rsfs10.
    ! /opt/TinyTeX/texmf-dist/web2c/mktexnam: Need to update ?
    ! mktextfm: Running mf-nowin -progname=mf \mode:=ljfour; mag:=1; ; nonstopmode; input rsfs10
    ! This is METAFONT, Version 2.71828182 (TeX Live 2024) (preloaded base=mf)
    
    ! /opt/TinyTeX/texmf-dist/web2c/mktexnam: Could not map source abbreviation  for rsfs10.
    ! /opt/TinyTeX/texmf-dist/web2c/mktexnam: Need to update ?
    ! mktextfm: Running mf-nowin -progname=mf \mode:=ljfour; mag:=1; ; nonstopmode; input rsfs10
    ! This is METAFONT, Version 2.71828182 (TeX Live 2024) (preloaded base=mf)
    
    ! /opt/TinyTeX/texmf-dist/web2c/mktexnam: Need to update ?
    ! mktextfm: Running mf-nowin -progname=mf \mode:=ljfour; mag:=1; ; nonstopmode; input rsfs10
    ! This is METAFONT, Version 2.71828182 (TeX Live 2024) (preloaded base=mf)
    
    ! mktextfm: Running mf-nowin -progname=mf \mode:=ljfour; mag:=1; ; nonstopmode; input rsfs10
    ! This is METAFONT, Version 2.71828182 (TeX Live 2024) (preloaded base=mf)
    
    ! This is METAFONT, Version 2.71828182 (TeX Live 2024) (preloaded base=mf)
    
    ! kpathsea: Running mktexmf rsfs10
    
    ! ! I can't find file `rsfs10'.
    ! <*> ...ljfour; mag:=1; ; nonstopmode; input rsfs10
    
    ! <*> ...ljfour; mag:=1; ; nonstopmode; input rsfs10
    
    ! Please type another input file name
    ! ! Emergency stop.
    ! <*> ...ljfour; mag:=1; ; nonstopmode; input rsfs10
    
    ! ! Emergency stop.
    ! <*> ...ljfour; mag:=1; ; nonstopmode; input rsfs10
    
    ! <*> ...ljfour; mag:=1; ; nonstopmode; input rsfs10
    
    ! Transcript written on mfput.log.
    
    ! grep: rsfs10.log: No such file or directory
    
    ! mktextfm: `mf-nowin -progname=mf \mode:=ljfour; mag:=1; ; nonstopmode; input rsfs10' failed to make rsfs10.tfm.
    
    ! kpathsea: Appending font creation commands to missfont.log.
    
    Error: processing vignette 'gasper_vignette.rmd' failed with diagnostics:
    LaTeX failed to compile /tmp/workdir/gasper/new/gasper.Rcheck/vign_test/gasper/vignettes/gasper_vignette.tex. See https://yihui.org/tinytex/r/#debugging for debugging tips. See gasper_vignette.log for more info.
    --- failed re-building ‘gasper_vignette.rmd’
    
    SUMMARY: processing the following file failed:
      ‘gasper_vignette.rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## Newly fixed

*   checking re-building of vignette outputs ... WARNING
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘gasper_vignette.rmd’ using rmarkdown
    tlmgr: package repository https://ctan.mirrors.hoobly.com/systems/texlive/tlnet (verified)
    [1/5, ??:??/??:??] install: eso-pic [4k]
    [2/5, 00:00/00:00] install: grfext [3k]
    [3/5, 00:00/00:00] install: grffile [4k]
    [4/5, 00:00/00:00] install: oberdiek [35k]
    [5/5, 00:00/00:00] install: pdfpages [15k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    tlmgr: package repository https://ctan.tinycomputers.io/tex-archive/systems/texlive/tlnet (verified)
    [1/1, ??:??/??:??] install: doublestroke [66k]
    running mktexlsr ...
    done running mktexlsr.
    running updmap-sys ...
    done running updmap-sys.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    tlmgr: package repository https://ctan.math.utah.edu/ctan/tex-archive/systems/texlive/tlnet (verified)
    [1/1, ??:??/??:??] install: jknapltx [9k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    tlmgr: package repository https://us.mirrors.cicku.me/ctan/systems/texlive/tlnet (verified)
    [1/1, ??:??/??:??] install: multirow [3k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    tlmgr: package repository https://ctan.tinycomputers.io/tex-archive/systems/texlive/tlnet (verified)
    [1/1, ??:??/??:??] install: wrapfig [10k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    tlmgr: package repository https://mirrors.ibiblio.org/pub/mirrors/CTAN/systems/texlive/tlnet (verified)
    [1/1, ??:??/??:??] install: colortbl [4k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    tlmgr: package repository https://ctan.mirrors.hoobly.com/systems/texlive/tlnet (verified)
    [1/1, ??:??/??:??] install: pdflscape [3k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    tlmgr: package repository https://mirror.las.iastate.edu/tex-archive/systems/texlive/tlnet (verified)
    [1/2, ??:??/??:??] install: tabu [24k]
    [2/2, 00:00/00:00] install: varwidth [5k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    tlmgr: package repository https://ctan.math.washington.edu/tex-archive/systems/texlive/tlnet (verified)
    [1/1, ??:??/??:??] install: threeparttable [6k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    tlmgr: package repository https://us.mirrors.cicku.me/ctan/systems/texlive/tlnet (verified)
    [1/1, ??:??/??:??] install: threeparttablex [3k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    tlmgr: package repository https://mirrors.ibiblio.org/pub/mirrors/CTAN/systems/texlive/tlnet (verified)
    [1/2, ??:??/??:??] install: environ [2k]
    [2/2, 00:00/00:00] install: trimspaces [1k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    tlmgr: package repository https://ctan.tinycomputers.io/tex-archive/systems/texlive/tlnet (verified)
    [1/1, ??:??/??:??] install: ulem [7k]
    running mktexlsr ...
    done running mktexlsr.
    tlmgr: package log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr.log
    tlmgr: command log updated: /opt/TinyTeX/texmf-var/web2c/tlmgr-commands.log
    
    tlmgr: Remote database (revision 73653 of the texlive-scripts package)
    seems to be older than the local installation (rev 73669 of
    texlive-scripts); please use a different mirror and/or wait a day or two.
    
    Warning in system2("tlmgr", args, ...) :
      running command ''tlmgr' search --file --global '/makecell.sty'' had status 1 and error message 'Function not implemented'
    ! LaTeX Error: File `makecell.sty' not found.
    
    ! Emergency stop.
    <read *> 
    
    Error: processing vignette 'gasper_vignette.rmd' failed with diagnostics:
    LaTeX failed to compile /tmp/workdir/gasper/old/gasper.Rcheck/vign_test/gasper/vignettes/gasper_vignette.tex. See https://yihui.org/tinytex/r/#debugging for debugging tips. See gasper_vignette.log for more info.
    --- failed re-building ‘gasper_vignette.rmd’
    
    SUMMARY: processing the following file failed:
      ‘gasper_vignette.rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

# handwriterRF

<details>

* Version: 1.1.1
* GitHub: https://github.com/CSAFE-ISU/handwriterRF
* Source code: https://github.com/cran/handwriterRF
* Date/Publication: 2025-01-29 00:20:01 UTC
* Number of recursive dependencies: 127

Run `revdepcheck::cloud_details(, "handwriterRF")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/testing-design.html#sec-tests-files-overview
      > # * https://testthat.r-lib.org/articles/special-files.html
      > 
      > library(testthat)
      > library(handwriterRF)
      > 
      > test_check("handwriterRF")
      Copying samples to project directory > docs...
      
      Estimating writer profiles...
      Listing documents to be processed...
      Creating output directory...
      Directory already exists.
      Processing document w0030_s01_pWOZ_r01.png...
      path in readPNGBinary: /tmp/Rtmps0P7uT/comparison/docs/w0030_s01_pWOZ_r01.png
      Starting Processing...
      Getting Nodes...
      Skeletonizing writing...
      Splitting document into components...
      Merging nodes...
      Finding paths...
      Split paths into graphs...
      Organizing graphs...
      Creating graph lists...
      Adding character features...
      Document processing complete
      Saving processed document w0030_s01_pWOZ_r01.png...
      
      Processing document w0030_s01_pWOZ_r02.png...
      path in readPNGBinary: /tmp/Rtmps0P7uT/comparison/docs/w0030_s01_pWOZ_r02.png
      Starting Processing...
      Getting Nodes...
      Skeletonizing writing...
      Splitting document into components...
      Merging nodes...
      Finding paths...
      Split paths into graphs...
      Organizing graphs...
      Creating graph lists...
      Adding character features...
      Document processing complete
      Saving processed document w0030_s01_pWOZ_r02.png...
      
      All documents were successfully processed...
      
      Loading graphs for w0030_s01_pWOZ_r01_proclist.rds
      Getting cluster assignments for w0030_s01_pWOZ_r01
      Saving cluster assignments for  w0030_s01_pWOZ_r01 
      
      Loading graphs for w0030_s01_pWOZ_r02_proclist.rds
      Getting cluster assignments for w0030_s01_pWOZ_r02
      Saving cluster assignments for  w0030_s01_pWOZ_r02 
      
      Calculating distance between samples...
      Calculating similarity score...
      Calculating distance between samples...
      Calculating similarity score...
      Calculating distance between samples...
      Calculating similarity score...
      Calculating distance between samples...
      Calculating similarity score...
      Calculating SLR...
      Calculating distance between samples...
      Calculating similarity score...
      Calculating SLR...
      Killed
    ```

# iimi

<details>

* Version: 1.2.1
* GitHub: NA
* Source code: https://github.com/cran/iimi
* Date/Publication: 2024-11-01 20:10:01 UTC
* Number of recursive dependencies: 154

Run `revdepcheck::cloud_details(, "iimi")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is  6.7Mb
      sub-directories of 1Mb or more:
        data   6.5Mb
    ```

# immunarch

<details>

* Version: 0.9.1
* GitHub: https://github.com/immunomind/immunarch
* Source code: https://github.com/cran/immunarch
* Date/Publication: 2024-03-18 19:10:06 UTC
* Number of recursive dependencies: 201

Run `revdepcheck::cloud_details(, "immunarch")` for more info

</details>

## Newly broken

*   checking examples ... ERROR
    ```
    Running examples in ‘immunarch-Ex.R’ failed
    The error most likely occurred in:
    
    > ### Name: repSave
    > ### Title: Save immune repertoires to the disk
    > ### Aliases: repSave
    > 
    > ### ** Examples
    > 
    > data(immdata)
    > # Reduce data to save time on examples
    > immdata$data <- purrr::map(immdata$data, ~ .x %>% head(10))
    > dirpath <- tempdir()
    > # Save the list of repertoires
    > repSave(immdata, dirpath)
    Warning: The `path` argument of `write_tsv()` is deprecated as of readr 1.4.0.
    ℹ Please use the `file` argument instead.
    ℹ The deprecated feature was likely used in the immunarch package.
      Please report the issue at <https://github.com/immunomind/immunarch/issues>.
    Warning: The `path` argument of `write_lines()` is deprecated as of readr 1.4.0.
    ℹ Please use the `file` argument instead.
    ℹ The deprecated feature was likely used in the immunarch package.
      Please report the issue at <https://github.com/immunomind/immunarch/issues>.
    > # Load it and check if it is the same
    > new_immdata <- repLoad(dirpath)
    
    == Step 1/3: loading repertoire files... ==
    
    Processing "/tmp/Rtmplg0gIO" ...
      -- [1/14] Parsing "/tmp/Rtmplg0gIO/A2-i129.tsv.gz" -- immunarch
      -- [2/14] Parsing "/tmp/Rtmplg0gIO/A2-i131.tsv.gz" -- immunarch
      -- [3/14] Parsing "/tmp/Rtmplg0gIO/A2-i132.tsv.gz" -- immunarch
      -- [4/14] Parsing "/tmp/Rtmplg0gIO/A2-i133.tsv.gz" -- immunarch
      -- [5/14] Parsing "/tmp/Rtmplg0gIO/A4-i191.tsv.gz" -- immunarch
      -- [6/14] Parsing "/tmp/Rtmplg0gIO/A4-i192.tsv.gz" -- immunarch
      -- [7/14] Parsing "/tmp/Rtmplg0gIO/MS1.tsv.gz" -- immunarch
      -- [8/14] Parsing "/tmp/Rtmplg0gIO/MS2.tsv.gz" -- immunarch
      -- [9/14] Parsing "/tmp/Rtmplg0gIO/MS3.tsv.gz" -- immunarch
      -- [10/14] Parsing "/tmp/Rtmplg0gIO/MS4.tsv.gz" -- immunarch
      -- [11/14] Parsing "/tmp/Rtmplg0gIO/MS5.tsv.gz" -- immunarch
      -- [12/14] Parsing "/tmp/Rtmplg0gIO/MS6.tsv.gz" -- immunarch
      -- [13/14] Parsing "/tmp/Rtmplg0gIO/metadata.txt" -- metadata
      -- [14/14] Parsing "/tmp/Rtmplg0gIO/pdf276b17ae118c" -- unsupported format, skipping
    Processing "/tmp/Rtmplg0gIO/duckplyr" ...
      -- [1/2] Parsing "/tmp/Rtmplg0gIO/duckplyr/duckplyr276b3003082e.duckdb" -- Warning in readLines(f, 1) : line 1 appears to contain an embedded nul
    Warning in readLines(f, 1) :
      incomplete final line found on '/tmp/Rtmplg0gIO/duckplyr/duckplyr276b3003082e.duckdb'
    Error in stri_trim_both(string) : 
      invalid UTF-8 byte sequence detected; try calling stri_enc_toutf8()
    Calls: repLoad ... .detect_format -> ifelse -> str_trim -> stri_trim_both
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  9.7Mb
      sub-directories of 1Mb or more:
        data   5.5Mb
        doc    1.6Mb
    ```

# msigdbr

<details>

* Version: 7.5.1
* GitHub: https://github.com/igordot/msigdbr
* Source code: https://github.com/cran/msigdbr
* Date/Publication: 2022-03-30 07:00:16 UTC
* Number of recursive dependencies: 51

Run `revdepcheck::cloud_details(, "msigdbr")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(msigdbr)
      > 
      > test_check("msigdbr")
      Killed
    ```

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘msigdbr-intro.Rmd’ using rmarkdown
    Killed
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is 13.2Mb
      sub-directories of 1Mb or more:
        R  13.0Mb
    ```

# mtdesign

<details>

* Version: 0.1.2
* GitHub: https://github.com/openpharma/mtdesign
* Source code: https://github.com/cran/mtdesign
* Date/Publication: 2024-11-05 14:10:15 UTC
* Number of recursive dependencies: 59

Run `revdepcheck::cloud_details(, "mtdesign")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(mtdesign)
      > 
      > test_check("mtdesign")
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: One stage sample size is 15.  Search bounds are 20 to 30.
      testthat 2025-02-01 18:59:11 TRACE test_check: Building grid - nTotal, nStage1: 264
      testthat 2025-02-01 18:59:11 TRACE test_check: Building grid - nTotal, nStage1, rTotal: 6710
      testthat 2025-02-01 18:59:11 TRACE test_check: Building grid - nTotal, nStage1, rTotal, rFutility: 26620
      testthat 2025-02-01 18:59:11 TRACE test_check: Building grid - nTotal, nStage1, rTotal, rFutility, rSuccess: 97571
      testthat 2025-02-01 18:59:11 TRACE test_check: Grid has 97571 rows.
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Entry
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      testthat 2025-02-01 18:59:11 DEBUG test_check: Exit
      Killed
    ```

# offsetreg

<details>

* Version: 1.1.0
* GitHub: https://github.com/mattheaphy/offsetreg
* Source code: https://github.com/cran/offsetreg
* Date/Publication: 2024-04-11 14:40:03 UTC
* Number of recursive dependencies: 124

Run `revdepcheck::cloud_details(, "offsetreg")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/testing-design.html#sec-tests-files-overview
      > # * https://testthat.r-lib.org/articles/special-files.html
      > 
      > library(testthat)
      > library(offsetreg)
      > 
      > test_check("offsetreg")
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 42 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-xgboost.R:107:3'): boost_tree_offset() works with recipes ────
      predict(mod, xgtrain) (`actual`) not identical to predict(xgb_off, us_deaths)$.pred (`expected`).
      
           actual  | expected                 
       [1] 18862.6 - 21204.5  [1]             
       [2] 19066.5 - 21433.6  [2]             
       [3] 19277.9 - 21671.3  [3]             
       [4] 19589.9 - 22022.1  [4]             
       [5] 19855.2 - 20815.6  [5]             
       [6] 20072.9 - 21043.9  [6]             
       [7] 20321.9 - 21304.9  [7]             
       [8] 20445.3 - 21434.3  [8]             
       [9] 20530.8 - 21523.9  [9]             
      [10] 22075.8 - 21566.0  [10]            
       ... ...       ...      and 130 more ...
      
      [ FAIL 1 | WARN 0 | SKIP 0 | PASS 42 ]
      Error: Test failures
      Execution halted
    ```

# optic

<details>

* Version: 1.0.1
* GitHub: https://github.com/randcorporation/optic
* Source code: https://github.com/cran/optic
* Date/Publication: 2023-08-08 13:40:02 UTC
* Number of recursive dependencies: 154

Run `revdepcheck::cloud_details(, "optic")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > 
      > 
      > #------------------------------------------------------------------------------#
      > # OPTIC R Package Code Repository
      > # Copyright (C) 2023 by The RAND Corporation
      > # See README.md for information on usage and licensing
      > #------------------------------------------------------------------------------#
      > 
      > # This file is part of the standard setup for testthat.
      > # It is recommended that you do not modify it.
      > #
      > # Where should you do additional test configuration?
      > # Learn more about the roles of various files in:
      > # * https://r-pkgs.org/tests.html
      > # * https://testthat.r-lib.org/reference/test_package.html#special-files
      > 
      > library(testthat)
      > library(optic)
      > 
      > test_check("optic")
      Number of Simulations: 24
      Number of Models: 2
      Iteration per Simulation : 2
      Total number of Iterations to Run: 96
      JOB 1 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      
      Attaching package: 'dplyr'
      
      The following object is masked from 'package:testthat':
      
          matches
      
      The following objects are masked from 'package:stats':
      
          filter, lag
      
      The following objects are masked from 'package:base':
      
          intersect, setdiff, setequal, union
      
      JOB 2 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      JOB 3 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: pos
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      JOB 4 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: pos
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      JOB 5 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      JOB 6 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      JOB 7 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: pos
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      JOB 8 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: pos
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0
                  years_apart: 2
                  ordered: TRUE
      JOB 9 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 10 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 11 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: pos
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 12 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: pos
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 13 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 14 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 15 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: pos
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 16 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: pos
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.5
                  years_apart: 2
                  ordered: TRUE
      JOB 17 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      JOB 18 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      JOB 19 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: pos
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      JOB 20 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: pos
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      JOB 21 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      JOB 22 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      JOB 23 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.455092540172079
                  effect_magnitude2: 0.455092540172079
                  n_units: 10
                  effect_direction: pos
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      JOB 24 OF 24 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude1: 0.22754627008604
                  effect_magnitude2: 0.682638810258119
                  n_units: 10
                  effect_direction: pos
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  rhos: 0.9
                  years_apart: 2
                  ordered: TRUE
      Number of Simulations: 12
      Number of Models: 2
      Iteration per Simulation : 5
      Total number of Iterations to Run: 120
      JOB 1 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: trend
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: small
                  bias_type: linear
      
      Attaching package: 'MASS'
      
      The following object is masked from 'package:dplyr':
      
          select
      
      JOB 2 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: level
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: small
                  bias_type: linear
      JOB 3 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: trend
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: medium
                  bias_type: linear
      JOB 4 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: level
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: medium
                  bias_type: linear
      JOB 5 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: trend
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: large
                  bias_type: linear
      JOB 6 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: level
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: large
                  bias_type: linear
      JOB 7 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: trend
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: small
                  bias_type: nonlinear
      JOB 8 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: level
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: small
                  bias_type: nonlinear
      JOB 9 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: trend
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: medium
                  bias_type: nonlinear
      JOB 10 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: level
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: medium
                  bias_type: nonlinear
      JOB 11 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: trend
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: large
                  bias_type: nonlinear
      JOB 12 OF 12 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: null
                  policy_speed: instant
                  n_implementation_periods: 0
                  prior_control: level
                  treat_var: state
                  conf_var: unemploymentrate
                  bias_size: large
                  bias_type: nonlinear
      Number of Simulations: 8
      Number of Models: 3
      Iteration per Simulation : 5
      Total number of Iterations to Run: 120
      JOB 1 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  treat_var: state
      JOB 2 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 3.97146241830065
                  n_units: 5
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 3
                  prior_control: level
                  treat_var: state
      JOB 3 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  treat_var: state
      JOB 4 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 3.97146241830065
                  n_units: 5
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 3
                  prior_control: level
                  treat_var: state
      JOB 5 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 10
                  prior_control: level
                  treat_var: state
      JOB 6 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 3.97146241830065
                  n_units: 5
                  effect_direction: neg
                  policy_speed: instant
                  n_implementation_periods: 10
                  prior_control: level
                  treat_var: state
      JOB 7 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 0
                  n_units: 5
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 10
                  prior_control: level
                  treat_var: state
      JOB 8 OF 8 DISPATCHED:
              DISPATCH METHOD: parallel (future)
              PARAMS:
                  unit_var: state
                  time_var: year
                  effect_magnitude: 3.97146241830065
                  n_units: 5
                  effect_direction: neg
                  policy_speed: slow
                  n_implementation_periods: 10
                  prior_control: level
                  treat_var: state
      [ FAIL 1 | WARN 1 | SKIP 0 | PASS 4 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-confounding.R:126:3'): confounding simulations work ──────────
      any(is.na(linear_results_df)) is not FALSE
      
      `actual`:   TRUE 
      `expected`: FALSE
      
      [ FAIL 1 | WARN 1 | SKIP 0 | PASS 4 ]
      Error: Test failures
      Execution halted
    ```

# partition

<details>

* Version: 0.2.2
* GitHub: https://github.com/USCbiostats/partition
* Source code: https://github.com/cran/partition
* Date/Publication: 2024-10-09 17:00:02 UTC
* Number of recursive dependencies: 94

Run `revdepcheck::cloud_details(, "partition")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
    --- re-building ‘extending-partition.Rmd’ using rmarkdown
    --- finished re-building ‘extending-partition.Rmd’
    
    --- re-building ‘introduction-to-partition.Rmd’ using rmarkdown
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  8.9Mb
      sub-directories of 1Mb or more:
        libs   6.8Mb
    ```

# PMAPscore

<details>

* Version: 0.1.1
* GitHub: NA
* Source code: https://github.com/cran/PMAPscore
* Date/Publication: 2022-04-12 08:12:37 UTC
* Number of recursive dependencies: 188

Run `revdepcheck::cloud_details(, "PMAPscore")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is  8.5Mb
      sub-directories of 1Mb or more:
        data      6.5Mb
        extdata   1.7Mb
    ```

## In both

*   checking dependencies in R code ... NOTE
    ```
    Namespaces in Imports field not imported from:
      ‘base’ ‘grDevices’
      All declared Imports should be used.
    ```

# pointblank

<details>

* Version: 0.12.2
* GitHub: https://github.com/rstudio/pointblank
* Source code: https://github.com/cran/pointblank
* Date/Publication: 2024-10-23 03:50:02 UTC
* Number of recursive dependencies: 130

Run `revdepcheck::cloud_details(, "pointblank")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(pointblank)
      > library(dittodb)
      Loading required package: DBI
      > test_check("pointblank")
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 1858 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Failure ('test-snip_fns.R:607:3'): the `snip_lowest()` function works ───────
      run_snip(snip_lowest(column = "e"), small_table) not equal to "0".
      1/1 mismatches
      x[1]: "FALSE"
      y[1]: "0"
      ── Failure ('test-snip_fns.R:635:3'): the `snip_highest()` function works ──────
      run_snip(snip_highest(column = "e"), small_table) not equal to "1".
      1/1 mismatches
      x[1]: "TRUE"
      y[1]: "1"
      
      [ FAIL 2 | WARN 0 | SKIP 0 | PASS 1858 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 1 marked UTF-8 string
    ```

# rfars

<details>

* Version: 1.2.0
* GitHub: https://github.com/s87jackson/rfars
* Source code: https://github.com/cran/rfars
* Date/Publication: 2024-04-06 04:40:02 UTC
* Number of recursive dependencies: 140

Run `revdepcheck::cloud_details(, "rfars")` for more info

</details>

## Newly broken

*   checking re-building of vignette outputs ... ERROR
    ```
    Error(s) in re-building vignettes:
      ...
    --- re-building ‘Counts.Rmd’ using rmarkdown
    trying URL 'https://static.nhtsa.gov/nhtsa/downloads/FARS/2021/National/FARS2021NationalSAS.zip'
    Content type 'application/x-zip-compressed' length 49942611 bytes (47.6 MB)
    ==================================================
    downloaded 47.6 MB
    
    Killed
    --- re-building ‘Crash_sequence_of_events.Rmd’ using rmarkdown
    trying URL 'https://static.nhtsa.gov/nhtsa/downloads/CRSS/2021/CRSS2021SAS.zip'
    Content type 'application/x-zip-compressed' length 66718214 bytes (63.6 MB)
    ==================================================
    downloaded 63.6 MB
    
    Killed
    --- re-building ‘Searchable_Codebooks.Rmd’ using rmarkdown
    --- finished re-building ‘Searchable_Codebooks.Rmd’
    
    SUMMARY: processing the following files failed:
      ‘Counts.Rmd’ ‘Crash_sequence_of_events.Rmd’
    
    Error: Vignette re-building failed.
    Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  5.1Mb
      sub-directories of 1Mb or more:
        data   2.0Mb
        help   1.9Mb
    ```

# rWCVP

<details>

* Version: 1.2.4
* GitHub: https://github.com/matildabrown/rWCVP
* Source code: https://github.com/cran/rWCVP
* Date/Publication: 2023-02-16 15:20:02 UTC
* Number of recursive dependencies: 129

Run `revdepcheck::cloud_details(, "rWCVP")` for more info

</details>

## Newly broken

*   checking tests ... ERROR
    ```
      Running ‘testthat.R’
    Running the tests in ‘tests/testthat.R’ failed.
    Complete output:
      > library(testthat)
      > library(rWCVP)
      > 
      > test_check("rWCVP")
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      
      -- Exact matching 7 names --
      
      v Found 4 of 7 names
      
      -- Fuzzy matching 3 names --
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      ! No author information supplied - matching on taxon name only
      
      -- Exact matching  names --
      
      v Found 4 of  names
      
      -- Fuzzy matching 3 names --
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      
      -- Exact matching 7 names --
      
      v Found 4 of 7 names
      
      -- Matching complete! --
      
      v Matched 4 of 7 names
      i Exact (with author): 2
      i Exact (without author): 2
      i No match found: 3
      ! Names with multiple matches: 0
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `genus`, `species`, `infra_rank`, and `infra` columns
      ! No author information supplied - matching on taxon name only
      
      -- Exact matching  names --
      
      v Found 4 of  names
      
      -- Fuzzy matching 3 names --
      
      -- Matching names to WCVP ------------------------------------------------------
      i Using the `scientificName` column
      
      -- Exact matching 7 names --
      
      v Found 4 of 7 names
      
      -- Fuzzy matching 3 names --
      
      i No area specified. Generating global summary.
      i Aggregating occurrence types across input area ("the world") - see `?wcvp_summary()` for details.
      i No area specified. Generating global summary.
      i Matches to input geography found at Continent (Level 1)
      i Aggregating occurrence types across input area ("ASIA-TROPICAL") - see `?wcvp_summary()` for details.
      [ FAIL 9 | WARN 1 | SKIP 0 | PASS 33 ]
      
      ══ Failed tests ════════════════════════════════════════════════════════════════
      ── Error ('test-fuzzy_match.R:4:3'): edit match returns name within correct distance ──
      Error in `nchar(str2)`: invalid multibyte string, element 8
      Backtrace:
          ▆
       1. └─rWCVP:::edit_match_name_(name, lookup_data) at test-fuzzy_match.R:4:3
       2.   └─RecordLinkage::levenshteinSim(name, genus_lookup$taxon_name)
       3.     └─base::pmax(nchar(str1), nchar(str2))
      ── Error ('test-fuzzy_match.R:12:3'): edit match returns name within correct distance when genus mispelled ──
      Error in `nchar(str2)`: invalid multibyte string, element 8
      Backtrace:
          ▆
       1. └─rWCVP:::edit_match_name_(name, lookup_data) at test-fuzzy_match.R:12:3
       2.   └─RecordLinkage::levenshteinSim(name, genus_lookup$taxon_name)
       3.     └─base::pmax(nchar(str1), nchar(str2))
      ── Error ('test-fuzzy_match.R:18:3'): edit match returns expected output ───────
      <dplyr:::mutate_error/rlang_error/error/condition>
      Error in `mutate(.data, ..., .by = {
          {
              .by
          }
      }, .keep = .keep, .before = {
          {
              .before
          }
      }, .after = {
          {
              .after
          }
      })`: i In argument: `match_info = map(...)`.
      Caused by error in `map()`:
      i In index: 1.
      Caused by error in `nchar()`:
      ! invalid multibyte string, element 8
      ── Error ('test-fuzzy_match.R:27:3'): phonetic match returns expected output ───
      <dplyr:::mutate_error/rlang_error/error/condition>
      Error in `mutate(.data, ..., .by = {
          {
              .by
          }
      }, .keep = .keep, .before = {
          {
              .before
          }
      }, .after = {
          {
              .after
          }
      })`: i In argument: `match_similarity = levenshteinSim(.data$sanitised_, .data$taxon_name)`.
      Caused by error in `nchar()`:
      ! invalid multibyte string, element 7
      Backtrace:
           ▆
        1. ├─rWCVP::phonetic_match(match_data, lookup_data, name_col = "scientificName") at test-fuzzy_match.R:27:3
        2. │ └─... %>% ungroup()
        3. ├─dplyr::ungroup(.)
        4. ├─dplyr::mutate(...)
        5. ├─dplyr::rowwise(.)
        6. ├─dplyr::mutate(...)
        7. ├─dplyr:::mutate.data.frame(...)
        8. │ └─dplyr::mutate(...)
        9. │   └─dplyr:::mutate_cols(.data, dplyr_quosures(...), by)
       10. │     ├─base::withCallingHandlers(...)
       11. │     └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
       12. │       └─mask$eval_all_mutate(quo)
       13. │         └─dplyr (local) eval()
       14. ├─RecordLinkage::levenshteinSim(.data$sanitised_, .data$taxon_name)
       15. │ └─base::pmax(nchar(str1), nchar(str2))
       16. └─base::.handleSimpleError(...)
       17.   └─dplyr (local) h(simpleError(msg, call))
       18.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
      ── Error ('test-fuzzy_match.R:36:3'): fuzzy match returns expected output ──────
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_fuzzy(match_data, lookup_data, name_col = "scientificName") at test-fuzzy_match.R:36:3
       2. │ └─... %>% filter(!is.na(.data$wcvp_id))
       3. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       4. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       5.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       6.     └─base::toupper(word)
      ── Error ('test-match_names.R:2:3'): match names with author returns expected output ──
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:2:3
       2. │ └─rWCVP::wcvp_match_fuzzy(...)
       3. │   └─... %>% filter(!is.na(.data$wcvp_id))
       4. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       5. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       6.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       7.     └─base::toupper(word)
      ── Error ('test-match_names.R:16:3'): match names without author returns expected output ──
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:16:3
       2. │ └─rWCVP::wcvp_match_fuzzy(...)
       3. │   └─... %>% filter(!is.na(.data$wcvp_id))
       4. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       5. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       6.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       7.     └─base::toupper(word)
      ── Error ('test-match_names.R:44:3'): match names without taxon name parts returns expected output ──
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:44:3
       2. │ └─rWCVP::wcvp_match_fuzzy(...)
       3. │   └─... %>% filter(!is.na(.data$wcvp_id))
       4. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       5. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       6.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       7.     └─base::toupper(word)
      ── Error ('test-match_names.R:58:3'): match names returns original columns ─────
      Error in `toupper(word)`: invalid input 'bytes Tromostapelia mutabilis var. americana' in 'utf8towcs'
      Backtrace:
          ▆
       1. ├─rWCVP::wcvp_match_names(...) at test-match_names.R:58:3
       2. │ └─rWCVP::wcvp_match_fuzzy(...)
       3. │   └─... %>% filter(!is.na(.data$wcvp_id))
       4. ├─dplyr::filter(., !is.na(.data$wcvp_id))
       5. └─rWCVP::phonetic_match(., wcvp_species, name_col = name_col)
       6.   └─phonics::metaphone(wcvp_names$taxon_name, maxCodeLen = 20, clean = FALSE)
       7.     └─base::toupper(word)
      
      [ FAIL 9 | WARN 1 | SKIP 0 | PASS 33 ]
      Error: Test failures
      Execution halted
    ```

## In both

*   checking installed package size ... NOTE
    ```
      installed size is  9.2Mb
      sub-directories of 1Mb or more:
        data      6.5Mb
        extdata   2.4Mb
    ```

*   checking data for non-ASCII characters ... NOTE
    ```
      Note: found 16 marked UTF-8 strings
    ```

# TKCat

<details>

* Version: 1.1.11
* GitHub: https://github.com/patzaw/TKCat
* Source code: https://github.com/cran/TKCat
* Date/Publication: 2024-07-03 14:50:02 UTC
* Number of recursive dependencies: 123

Run `revdepcheck::cloud_details(, "TKCat")` for more info

</details>

## Newly broken

*   checking installed package size ... NOTE
    ```
      installed size is  5.0Mb
      sub-directories of 1Mb or more:
        R     1.5Mb
        doc   2.7Mb
    ```

