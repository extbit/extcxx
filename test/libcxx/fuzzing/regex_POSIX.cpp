// -*- C++ -*-
//===----------------------- regex_POSIX.cpp ------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// XFAIL

#include "fuzzing.h"
#include <cassert>
#include <cstring> // for strlen

const char * test_cases[] = {
	"",
	"s",
	"b*c",
	"ba?sf"
	"lka*ea",
	"adsf*kas;lnc441[0-9]1r34525234"
	};

const size_t k_num_tests = sizeof(test_cases)/sizeof(test_cases[0]);

int main(int, char**)
{
	for (size_t i = 0; i < k_num_tests; ++i)
		{
		const size_t   size = std::strlen(test_cases[i]);
		const uint8_t *data = (const uint8_t *) test_cases[i];
		assert(0 == fuzzing::regex_POSIX(data, size));
		}
	return 0;
}
