#pragma once

#define DLLEXPORT __declspec(dllexport)

extern "C"
{
	DLLEXPORT int addition(int a, int b);

	DLLEXPORT int soustraction(int a, int b);

	DLLEXPORT int multiplication(int a, int b);

	DLLEXPORT int division(int a, int b);
}