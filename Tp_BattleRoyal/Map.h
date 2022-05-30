#include <vector>

#include <map>
using namespace std;


class Personnage;
class MyPoint;

#pragma once
class Map
{		

public:
		Map();
		Map(int tailleLarg, int tailleLongueur);
		int getLargeur();
		void setLargeur(int inputLarg);
		int getLongeur();
		void setLongueur(int inputLong);

		void addPersonnage(Personnage* perso);
		vector<MyPoint*> getAvailableMoves(int mobilite);
		vector<MyPoint*> getAvailableAttacks(int portee);

protected:
		int largeur;
		int longueur;
		vector<Personnage*> joueurs;
		map<int, MyPoint*> playerIdAndPos;
};

