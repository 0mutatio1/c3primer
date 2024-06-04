#pragma once
#include "library.h"

namespace test_library_ {
#ifdef __cplusplus
	extern "C" {
#endif
		__declspec(dllimport) int library_add(int, int);
		__declspec(dllimport) int value;
#ifdef __cplusplus
	}
#endif
	int test_library_1();
	int test_library_2();
}
