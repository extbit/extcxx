# extc++
extc++ - the standard C++ library for ExtBit is based on [libc++](http://libcxx.llvm.org/).

* To work with the specific [toolchain](https://github.com/extbit/toolchain).
* No compatibility concerns with other compiler (in order to make the implementation clean & modern).
* No compatibility concerns with old-style C++.
* Modern C++ symtax and no macros if possible in any cases.
  * Avoid preprocessor expansion
  * Avoid preprocessor inclusion model
* Threading is always enabled.
* Built specifically to work for ExtBit.
* Security first.
