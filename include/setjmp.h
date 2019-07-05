// -*- C++ -*-
//===--------------------------- setjmp.h ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
#pragma once
#pragma GCC system_header
/*
    setjmp.h synopsis

Macros:

    setjmp

Types:

    jmp_buf

void longjmp(jmp_buf env, int val);

*/

#include <__config>

#include_next <setjmp.h>

#ifdef __cplusplus

#ifndef setjmp
#define setjmp(env) setjmp(env)
#endif

#endif // __cplusplus
