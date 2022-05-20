#include <stdlib.h>
#include <time.h>




//cette fonction renvoie une valeur entre min et max inclus
int myRand(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

int main()
{
		srand(time(NULL)); //exécu


}