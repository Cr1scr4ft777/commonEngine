#pragma once

#include "PlatformDetection.h"
#include "API.h"
#include "CommonEnginePCH.h"



#define BIT(x) (1 << x)

#define METHOD_1(x) std::bind(x, this, std::placeholders::_1)
#define METHOD(x) METHOD_1(x)

#ifdef COMMON_DEBUG
	#define COMMON_ASSERT(x,...) if(!(X)){ __debugbreak(); }
#else
	#define COMMON_ASSERT(x, ...)
#endif
