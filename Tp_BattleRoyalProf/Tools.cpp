#include "Tools.h"


int myRand(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}


int getmod(int val, int mod) {
	return ((val % mod) + mod) % mod;
}