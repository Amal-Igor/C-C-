#include "Tools.h"

extern "C"
{
    int myRand(int min, int max)
    {
        return (rand() % (max - min + 1)) + min;
    }
}

