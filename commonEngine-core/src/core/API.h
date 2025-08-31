#pragma once
#include "PlatformDetection.h"

#if defined(PLATFORM_WINDOWS)
	#if defined(COMMON_BUILD_DLL)
		#define COMMON_API __declspec(dllexport)
	#else
		#define COMMON_API __declspec(dllimport)
	#endif
#elif defined(PLATFORM_LINUX) || defined(PLATFORM_MAC)
	#if defined(COMMON_BUILD_SO)
		#define COMMON_API __attribute__((visibility("default")))
	#else
		#define COMMON_API
	#endif
#else
	#define COMMON_API
#endif
