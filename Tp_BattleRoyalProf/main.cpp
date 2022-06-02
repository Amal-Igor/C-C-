#include "Damier.h"
#include <vector>
#include "Fantassin.h"
#include "Tools.h"
#include <time.h>
using namespace std;


//faire une fonction dans le main pour renvoyer au hasard un fantassin, un chevalier ou un elfe ....





int main()
{
	srand(time(NULL));


	//Damier dam(10,10); 

	//vector <Fantassin*> temp;


	//
	//for (int i = 0; i < 50; i++)
	//{
	//	Fantassin* player = new Fantassin(&dam);
	//	dam.setRandomPerso(player);
	//	temp.push_back(player);
	//	dam.getPersoCible(player);
	//}

	//cout << dam.persoCount() ;

	//for (int i = 0; i < temp.size(); i++)
	//{
	//	dam.getPersoCible(temp[i]);
	//}


	srand(time(NULL));
	Damier* dam = new Damier(10,10);
	vector<Fantassin*> mesFantassins;

	for (int i = 0; i < 50; i++)
	{
		Fantassin* f = new Fantassin(dam);
		dam->setRandomPerso(f);
		mesFantassins.push_back(f);
	}

	int countDead;

	while (dam->persoCount() > 1)
	{
		for (int i = 0; i < mesFantassins.size(); i++)
		{
			mesFantassins[i]->deplacer();
			mesFantassins[i]->attaquer();
			dam->removeDeadPerso();
			dam->persoCount();
		}
			dam->afficher();
		

			//
		
	}

	cout << " On a un champ' !!!!! " << endl;

	//vector< vector<Fantassin*>> mGrille2 = dam.getDamier();
	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		dam.getPersoCible(mGrille2[i][j]);
	//	}
	//}



	return 0;
}