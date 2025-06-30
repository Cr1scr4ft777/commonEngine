#pragma once

// Windows
#if defined(_WIN32) || defined(_WIN64) /*se activa para win32 y win64*/
	#define PLATFORM_WINDOWS
#elif defined(__linux__)
	#define PLATFORM_LINUX
#elif defined(__APPLE__) && defined(__MACH__)
	#define PLATFORM_MAC
#else
	#error "Plataforma no soportada"
#endif

