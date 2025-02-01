# prqlr

<details>

* Version: 0.10.0
* GitHub: https://github.com/PRQL/prqlc-r
* Source code: https://github.com/cran/prqlr
* Date/Publication: 2025-01-29 09:30:05 UTC
* Number of recursive dependencies: 70

Run `revdepcheck::cloud_details(, "prqlr")` for more info

</details>

## In both

*   checking whether package ‘prqlr’ can be installed ... ERROR
    ```
    Installation failed.
    See ‘/tmp/workdir/prqlr/new/prqlr.Rcheck/00install.out’ for details.
    ```

## Installation

### Devel

```
* installing *source* package ‘prqlr’ ...
** package ‘prqlr’ successfully unpacked and MD5 sums checked
** using staged installation
--------------------------- [RUST FOUND] ---------------------------
cargo 1.75.0

rustc 1.75.0 (82e1608df 2023-12-21) (built from a source tarball)
binary: rustc
commit-hash: 82e1608dfa6e0b5569232559e3d385fea5a93112
commit-date: 2023-12-21
host: x86_64-unknown-linux-gnu
release: 1.75.0
LLVM version: 17.0.6
--------------------------------------------------------------------
------------------- [NOT SUPPORTED RUST VERSION] -------------------
The MSRV of this package is '1.81.0',
so this installation may fail with the current rustc version '1.75.0'.
If this happens, please install the newer version of rustc
from: https://www.rust-lang.org/tools/install
--------------------------------------------------------------------
** libs
using C compiler: ‘gcc (Ubuntu 13.2.0-23ubuntu4) 13.2.0’
rm -Rf "prqlr.so" "/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/target/x86_64-unknown-linux-gnu/release/libprqlr.a" "init.o"
gcc -I"/opt/R/4.4.0/lib/R/include" -DNDEBUG   -I/usr/local/include    -fpic  -g -O2  -c init.c -o init.o
if [ -f "/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/../tools/libprqlr.a" ]; then \
	mkdir -p "/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/target/x86_64-unknown-linux-gnu/release" ; \
	mv "/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/../tools/libprqlr.a" "/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/target/x86_64-unknown-linux-gnu/release/libprqlr.a" ; \
	exit 0; \
fi && \
if [ -f "/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/vendor.tar.xz" ]; then \
	mkdir -p "/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/vendor" && \
	/usr/bin/tar --extract --xz --file "/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/vendor.tar.xz" -C "/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/vendor" && \
	mkdir -p "/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/.cargo" && \
	cp "/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/vendor-config.toml" "/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/.cargo/config.toml"; \
fi && \
if [ "" != "true" ]; then \
	export CARGO_HOME="/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/.cargo"; \
	export CARGO_BUILD_JOBS=2; \
fi && \
export PATH="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/root/.cargo/bin" && \
if [ "x86_64-unknown-linux-gnu" != "wasm32-unknown-emscripten" ]; then \
  cargo build --lib --manifest-path="/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/Cargo.toml" --target-dir "/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/target" --target="x86_64-unknown-linux-gnu" \
    --profile="release" --features=""; \
else \
  export CC="gcc" && \
  export CFLAGS="-g -O2 " && \
  export CARGO_PROFILE_RELEASE_PANIC="abort" && \
  cargo +nightly build --lib --manifest-path="/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/Cargo.toml" --target-dir "/tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/target" --target="x86_64-unknown-linux-gnu" \
    --profile="release" --features="" -Zbuild-std=panic_abort,std; \
fi
error: package `vergen-gitcl v1.0.5` cannot be built because it requires rustc 1.81.0 or newer, while the currently active rustc version is 1.75.0
Either upgrade to rustc 1.81.0 or newer, or use
cargo update vergen-gitcl@1.0.5 --precise ver
where `ver` is the latest version of `vergen-gitcl` supporting rustc 1.75.0
make: *** [Makevars:19: /tmp/workdir/prqlr/new/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/target/x86_64-unknown-linux-gnu/release/libprqlr.a] Error 101
ERROR: compilation failed for package ‘prqlr’
* removing ‘/tmp/workdir/prqlr/new/prqlr.Rcheck/prqlr’


```
### CRAN

```
* installing *source* package ‘prqlr’ ...
** package ‘prqlr’ successfully unpacked and MD5 sums checked
** using staged installation
--------------------------- [RUST FOUND] ---------------------------
cargo 1.75.0

rustc 1.75.0 (82e1608df 2023-12-21) (built from a source tarball)
binary: rustc
commit-hash: 82e1608dfa6e0b5569232559e3d385fea5a93112
commit-date: 2023-12-21
host: x86_64-unknown-linux-gnu
release: 1.75.0
LLVM version: 17.0.6
--------------------------------------------------------------------
------------------- [NOT SUPPORTED RUST VERSION] -------------------
The MSRV of this package is '1.81.0',
so this installation may fail with the current rustc version '1.75.0'.
If this happens, please install the newer version of rustc
from: https://www.rust-lang.org/tools/install
--------------------------------------------------------------------
** libs
using C compiler: ‘gcc (Ubuntu 13.2.0-23ubuntu4) 13.2.0’
rm -Rf "prqlr.so" "/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/target/x86_64-unknown-linux-gnu/release/libprqlr.a" "init.o"
gcc -I"/opt/R/4.4.0/lib/R/include" -DNDEBUG   -I/usr/local/include    -fpic  -g -O2  -c init.c -o init.o
if [ -f "/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/../tools/libprqlr.a" ]; then \
	mkdir -p "/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/target/x86_64-unknown-linux-gnu/release" ; \
	mv "/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/../tools/libprqlr.a" "/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/target/x86_64-unknown-linux-gnu/release/libprqlr.a" ; \
	exit 0; \
fi && \
if [ -f "/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/vendor.tar.xz" ]; then \
	mkdir -p "/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/vendor" && \
	/usr/bin/tar --extract --xz --file "/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/vendor.tar.xz" -C "/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/vendor" && \
	mkdir -p "/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/.cargo" && \
	cp "/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/vendor-config.toml" "/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/.cargo/config.toml"; \
fi && \
if [ "" != "true" ]; then \
	export CARGO_HOME="/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/.cargo"; \
	export CARGO_BUILD_JOBS=2; \
fi && \
export PATH="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/root/.cargo/bin" && \
if [ "x86_64-unknown-linux-gnu" != "wasm32-unknown-emscripten" ]; then \
  cargo build --lib --manifest-path="/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/Cargo.toml" --target-dir "/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/target" --target="x86_64-unknown-linux-gnu" \
    --profile="release" --features=""; \
else \
  export CC="gcc" && \
  export CFLAGS="-g -O2 " && \
  export CARGO_PROFILE_RELEASE_PANIC="abort" && \
  cargo +nightly build --lib --manifest-path="/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/Cargo.toml" --target-dir "/tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/target" --target="x86_64-unknown-linux-gnu" \
    --profile="release" --features="" -Zbuild-std=panic_abort,std; \
fi
error: package `vergen v9.0.4` cannot be built because it requires rustc 1.81.0 or newer, while the currently active rustc version is 1.75.0
Either upgrade to rustc 1.81.0 or newer, or use
cargo update vergen@9.0.4 --precise ver
where `ver` is the latest version of `vergen` supporting rustc 1.75.0
make: *** [Makevars:19: /tmp/workdir/prqlr/old/prqlr.Rcheck/00_pkg_src/prqlr/src/rust/target/x86_64-unknown-linux-gnu/release/libprqlr.a] Error 101
ERROR: compilation failed for package ‘prqlr’
* removing ‘/tmp/workdir/prqlr/old/prqlr.Rcheck/prqlr’


```
