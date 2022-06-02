#pragma once
#include <stdlib.h>
#define DLLEXPORT __declspec(dllexport)

extern "C"
{
	DLLEXPORT int myRand(int min, int max);

}