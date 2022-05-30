#include "Map.h"



Map::Map()
{
	largeur = 0;
	longueur = 0;
}
Map::Map(int tailleLarg, int tailleLongueur)
{
	largeur = tailleLarg;
	longueur = tailleLongueur;
}


int Map::getLargeur()
{
	return largeur;
}


void Map::setLargeur(int inputLarg)
{
	largeur = inputLarg;
}

int Map::getLongeur()
{
	return longueur;
}


void Map::setLongueur(int inputLong)
{
	longueur = inputLong;
}

//void addPersonnage(Personnage* perso);
//vector<MyPoint*> getAvaibleMoves(vector<Personnage*> joueurs);
//vector<MyPoint*> getAvaibleAttack(vector<Personnage*> joueurs);