//===------------------------- cxa_handlers.cpp ---------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//
// This file implements the functionality associated with the terminate_handler,
//   unexpected_handler, and new_handler.
//===----------------------------------------------------------------------===//
#pragma once
#include <__cxxabi_config.h>
#include <exception>

namespace std
{

#if 0
_LIBCXXABI_HIDDEN _LIBCXXABI_NORETURN
void __unexpected(unexpected_handler func);
#endif

_LIBCXXABI_HIDDEN _LIBCXXABI_NORETURN
void __terminate(terminate_handler func) noexcept;

}  // std

extern "C"
{

_LIBCXXABI_DATA_VIS extern void (*__cxa_terminate_handler)();
#if 0
_LIBCXXABI_DATA_VIS extern void (*__cxa_unexpected_handler)();
#endif
_LIBCXXABI_DATA_VIS extern void (*__cxa_new_handler)();

/*

    At some point in the future these three symbols will become
    C++11 atomic variables:

    extern std::atomic<std::terminate_handler>  __cxa_terminate_handler;
    extern std::atomic<std::unexpected_handler> __cxa_unexpected_handler;
    extern std::atomic<std::new_handler>        __cxa_new_handler;

    This change will not impact their ABI.  But it will allow for a
    portable performance optimization.

*/

} // extern "C"
