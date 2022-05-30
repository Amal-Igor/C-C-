#include "Damier.h"
#include <vector>
#include "Fantassin.h"
#include "Tools.h"
using namespace std;

int main()
{
	srand(time(NULL));


	Damier dam(10,10); 

	vector <Fantassin*> temp;


	
	for (int i = 0; i < 50; i++)
	{
		Fantassin* player = new Fantassin();
		temp.push_back(player);
	}
	vector<Fantassin*>::iterator it;
	for (it = temp.begin(); it != temp.end(); ++it)
	{
		it->
	}



	return 0;
}