# datacutr (0.2.4)

* GitHub: <https://github.com/pharmaverse/datacutr>
* Email: <mailto:timothy.barnett@roche.com>
* GitHub mirror: <https://github.com/cran/datacutr>

Run `revdepcheck::revdep_details(, "datacutr")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       /usr/bin/pandoc +RTS -K512m -RTS /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/datacut_2026-10-22_170948.html --lua-filter <lib>/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter <lib>/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template <lib>/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/rmarkdown-str2f219bab3dd.html 
       [1] "The ae dataset is empty, no cut will be performed"
       /usr/bin/pandoc +RTS -K512m -RTS /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/datacut_2026-10-22_170949.html --lua-filter <lib>/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter <lib>/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template <lib>/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/rmarkdown-str2f21876bb8d.html 
       [1] "The ae dataset is empty, no cut will be performed"
       /usr/bin/pandoc +RTS -K512m -RTS /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/datacut_2026-10-22_170950.html --lua-filter <lib>/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter <lib>/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template <lib>/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/rmarkdown-str2f241c819a2.html 
       [1] "The ae dataset is empty"
       /usr/bin/pandoc +RTS -K512m -RTS /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/datacut_2026-10-22_170951.html --lua-filter <lib>/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter <lib>/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template <lib>/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/rmarkdown-str2f21ad082b2.html 
       [1] "The dm dataset is empty"
       /usr/bin/pandoc +RTS -K512m -RTS /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/datacut_2026-10-22_170952.html --lua-filter <lib>/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter <lib>/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template <lib>/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/rmarkdown-str2f228b72ee0.html 
       /usr/bin/pandoc +RTS -K512m -RTS /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/datacut_2026-10-22_170954.html --lua-filter <lib>/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter <lib>/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template <lib>/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/rmarkdown-str2f23c146bbc.html 
       /usr/bin/pandoc +RTS -K512m -RTS /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/read_out.knit.md --to html4 --from markdown+autolink_bare_uris+tex_math_single_backslash --output /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/datacut_2026-10-22_170954.html --lua-filter <lib>/rmarkdown/rmarkdown/lua/pagebreak.lua --lua-filter <lib>/rmarkdown/rmarkdown/lua/latex-div.lua --embed-resources --standalone --variable bs3=TRUE --section-divs --template <lib>/rmarkdown/rmd/h/default.html --no-highlight --variable highlightjs=1 --variable theme=bootstrap --mathjax --variable 'mathjax-url=https://mathjax.rstudio.com/latest/MathJax.js?config=TeX-AMS-MML_HTMLorMML' --include-in-header /tmp/RtmpZGE7TX/working_dir/Rtmpc9Kwhm/rmarkdown-str2f24e44d70f.html 
       [1] "At least 1 patient with missing datacut date, all records will be kept."
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 70 ]
       
       ══ Failed tests ════════════════════════════════════════════════════════════════
       ── Failure ('test-create_dcut.R:42:3'): One observation in DCUT ────────────────
       Expected `create_dcut(...)` to equal `expected_dcutna`.
       Differences:
       Component "DCUTDTC": Modes: numeric, logical
       Component "DCUTDTC": target is numeric, current is logical
       
       [ FAIL 1 | WARN 0 | SKIP 0 | PASS 70 ]
       Error:
       ! Test failures.
       Execution halted
     ```

