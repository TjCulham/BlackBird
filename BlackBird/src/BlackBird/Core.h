#pragma once

#ifdef BB_PLATFORM_WINDOWS
	#ifdef BLACKBIRD_BUILD_DLL
		#define BLACKBIRD_API __declspec(dllexport)
	#else
		#define BLACKBIRD_API __declspec(dllimport) 
	#endif 
#else 
	#error BlackBird only supports Windows
#endif