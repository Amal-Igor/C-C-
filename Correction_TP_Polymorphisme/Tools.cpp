#include "Tools.h"


int Tools::myRand(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}