#include "operations.h"


extern "C"
{
	int addition(int a, int b)
	{
		return a + b;
	}

	int soustraction(int a, int b)
	{
		return a - b;
	}

	int multiplication(int a, int b)
	{
		return a * b;
	}

	int division(int a, int b)
	{
		return a / b;
	}
}
