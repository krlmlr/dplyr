# accelEE (0.3.2)

* GitHub: <https://github.com/paulhibbing/accelEE>
* Email: <mailto:paulhibbing@gmail.com>
* GitHub mirror: <https://github.com/cran/accelEE>

Run `revdepcheck::revdep_details(, "accelEE")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
      36. ├─tidyr::unpack(., dplyr::matches("Classification$"), names_sep = "_")
      37. │ └─tidyr:::check_data_frame(data, call = error_call)
      38. │   └─base::is.data.frame(x)
      39. ├─dplyr::summarise(...)
      40. ├─dplyr::group_by(...)
      41. ├─dplyr:::group_by.data.frame(...)
      42. │ └─dplyr::group_by(.data, ..., .add = .add, .drop = .drop)
      43. │   └─dplyr::group_by_prepare(.data, ..., .add = .add, error_call = current_env())
      44. │     └─dplyr:::add_computed_columns(.data, new_groups, error_call = error_call)
      45. │       └─dplyr:::mutate_cols(...)
      46. │         ├─base::withCallingHandlers(...)
      47. │         └─dplyr:::mutate_col(dots[[i]], data, mask, new_columns)
      48. │           └─mask$eval_all_mutate(quo)
      49. │             └─dplyr (local) eval()
      50. ├─lubridate::floor_date(time, unit)
      51. │ └─timechange::time_floor(x, unit = unit, week_start = as_week_start(week_start))
      52. │   ├─timechange:::from_posixct(...)
      53. │   ├─timechange:::C_time_floor(...)
      54. │   └─timechange:::to_posixct(time)
      55. │     └─timechange:::unsupported_date_time(time)
      56. │       └─base::stop(...)
      57. └─base::.handleSimpleError(...)
      58.   └─dplyr (local) h(simpleError(msg, call))
      59.     └─rlang::abort(message, class = error_class, parent = parent, call = error_call)
     Execution halted
     ```

