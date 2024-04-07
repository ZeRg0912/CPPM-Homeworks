#pragma once
#include <iostream>
#include <string>

#ifdef LEAVER_EXPORTS
#define LEAVER_LIBRARY_API __declspec(dllexport)
#else
#define LEAVER_LIBRARY_API __declspec(dllimport)
#endif

class LEAVER_LIBRARY_API Leaver {
public:
	std::string leave(std::string in);
};