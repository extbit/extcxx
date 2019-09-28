# extc++
The standard C++ library for ExtBit.

It is based on [libc++](http://libcxx.llvm.org/).

* To work with the specific [toolchain](https://github.com/extbit/toolchain) well.
* No compatibility concerns with other compiler.
  * To make the implementation clean & modern).
* No compatibility concerns with old-style C++.
  * To reduce legacy code maintainant cost
  * And making code easier to read.
* Modern C++ symtax and no macros if possible in any cases.
  * Avoid preprocessor expansion.
  * Avoid preprocessor inclusion model.
* Exception handling are always enabled (static, no rtti).
  * Automatic propagation/forced errors handling/...
* *Runtime type information are always enabled.
* Threading is always enabled.
* Security first.
* Built specifically to work for ExtBit.
* More extensions...
