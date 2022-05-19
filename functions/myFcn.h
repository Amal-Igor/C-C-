#pragma once
#include <stdio.h>

int plusGrand(int a, int b);
int carre(int a);
void intervertir(int* val1, int* val2);

int plusGrand(int a, int b)
{
	int max;

	if (a > b) {
		max = a;
		return max;
	}

	else if (a < b) {
		max = b;
		return max;
	}

	else if (a == b) {
		max = a;
		return max;
	}

}

int carre(int a)
{
	int square = a * a;
	return square;
}

void intervertir(int *val1, int *val2)
{	
	printf_s("Au début de l'opération on avait *val1: %d et *val2: %d", val1, val2);
	int* transitory = val1;

	*val1 = *val2;
	*val2 = *transitory;

	printf_s("Maitenant *val1: %d et *val2: %d", val1, val2);

}

