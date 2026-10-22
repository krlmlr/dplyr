# btw (1.5.0)

* GitHub: <https://github.com/posit-dev/btw>
* Email: <mailto:garrick@adenbuie.com>
* GitHub mirror: <https://github.com/cran/btw>

Run `revdepcheck::revdep_details(, "btw")` for more info

## Newly broken

*   checking examples ... ERROR
     ```
     ...
     ! No NEWS entries found for package 'dplyr' v1.2.1.9999.
     Backtrace:
          ▆
       1. ├─base::withAutoprint(...)
       2. │ └─base::source(...)
       3. │   ├─base::withVisible(eval(ei, envir))
       4. │   └─base::eval(ei, envir)
       5. │     └─base::eval(ei, envir)
       6. └─btw::btw("@news dplyr", clipboard = FALSE)
       7.   ├─btw::btw_this(...)
       8.   └─btw:::btw_this.environment(...)
       9.     └─btw:::btw_tool_env_describe_environment_impl(...)
      10.       └─btw:::map(...)
      11.         └─base::lapply(.x, .f, ...)
      12.           └─btw (local) FUN(X[[i]], ...)
      13.             ├─btw::btw_this(item, caller_env = environment)
      14.             └─btw:::btw_this.character(item, caller_env = environment)
      15.               └─btw:::dispatch_at_command(cmd, caller_env)
      16.                 └─btw (local) btw_this_cmd(cmd$args)
      17.                   ├─base::I(...)
      18.                   │ └─base::unique.default(c("AsIs", oldClass(x)))
      19.                   └─btw:::btw_tool_docs_package_news_impl(package_name, search_term = search_term, version = version)
      20.                     └─cli::cli_abort("No NEWS entries found for package '{package_name}' v{version %||% package_version(package_name)}.")
      21.                       └─rlang::abort(...)
     Execution halted
     ```

*   checking tests ... ERROR
     ```
     ...
         3. |   \-rlang::eval_bare(expr, quo_get_env(quo))
         4. +-ellmer::contents_text(btw("@news dplyr"))
         5. | \-S7::S7_dispatch()
         6. \-btw::btw("@news dplyr")
         7.   +-btw::btw_this(...)
         8.   \-btw:::btw_this.environment(...)
         9.     \-btw:::btw_tool_env_describe_environment_impl(...)
        10.       \-btw:::map(...)
        11.         \-base::lapply(.x, .f, ...)
        12.           \-btw (local) FUN(X[[i]], ...)
        13.             +-btw::btw_this(item, caller_env = environment)
        14.             \-btw:::btw_this.character(item, caller_env = environment)
        15.               \-btw:::dispatch_at_command(cmd, caller_env)
        16.                 \-btw (local) btw_this_cmd(cmd$args)
        17.                   +-base::I(...)
        18.                   | \-base::unique.default(c("AsIs", oldClass(x)))
        19.                   \-btw:::btw_tool_docs_package_news_impl(package_name, search_term = search_term, version = version)
        20.                     \-cli::cli_abort("No NEWS entries found for package '{package_name}' v{version %||% package_version(package_name)}.")
        21.                       \-rlang::abort(...)
       
       [ FAIL 3 | WARN 2 | SKIP 152 | PASS 2122 ]
       Error:
       ! Test failures.
       Execution halted
       Ran 8/8 deferred expressions
     ```

