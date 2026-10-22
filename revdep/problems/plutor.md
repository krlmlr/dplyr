# plutor (0.1.0)

* GitHub: <https://github.com/william-swl/plutor>
* Email: <mailto:william_swl@163.com>
* GitHub mirror: <https://github.com/cran/plutor>

Run `revdepcheck::revdep_details(, "plutor")` for more info

## Newly broken

*   checking tests ... ERROR
     ```
     ...
       Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, position = position, show.legend = show.legend, inherit.aes = inherit.aes, params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, comparisons = comparisons, paired = paired, alternative = alternative, test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, cp_inline = cp_inline,      brackets_widen = brackets_widen, fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, lineend = lineend, ...))`: Problem while converting geom to grob.
       i Error occurred in the 2nd layer.
       Caused by error in `mutate()`:
       i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
       Caused by error:
       ! `yend` must be size 1, not 0.
       ── Error ('test-geom_compare.R:113:3'): geom_compare, cp_ref ───────────────────
       Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, position = position, show.legend = show.legend, inherit.aes = inherit.aes, params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, comparisons = comparisons, paired = paired, alternative = alternative, test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, cp_inline = cp_inline,      brackets_widen = brackets_widen, fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, lineend = lineend, ...))`: Problem while converting geom to grob.
       i Error occurred in the 2nd layer.
       Caused by error in `mutate()`:
       i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
       Caused by error:
       ! `yend` must be size 2 or 1, not 0.
       ── Error ('test-geom_compare.R:178:3'): geom_compare, manual comparisons table ──
       Error in `layer(data = data, mapping = mapping, geom = GeomCompare, stat = stat, position = position, show.legend = show.legend, inherit.aes = inherit.aes, params = list(na.rm = na.rm, lab_pos = lab_pos, step_increase = step_increase, tip_length = tip_length, cp_label = cp_label, ignore_ns = ignore_ns, ns_lineheight_just = ns_lineheight_just, fc_method = fc_method, comparisons = comparisons, paired = paired, alternative = alternative, test_method = test_method, ns_symbol = ns_symbol, cp_ref = cp_ref, cp_inline = cp_inline,      brackets_widen = brackets_widen, fc_digits = fc_digits, cp_result = cp_result, cp_manual = cp_manual, lineend = lineend, ...))`: Problem while converting geom to grob.
       i Error occurred in the 2nd layer.
       Caused by error in `mutate()`:
       i In argument: `yend = y - tip_length * (y_range[2] - y_range[1])`.
       Caused by error:
       ! `yend` must be size 3 or 1, not 0.
       
       [ FAIL 8 | WARN 15 | SKIP 19 | PASS 0 ]
       Error:
       ! Test failures.
       Execution halted
     ```

