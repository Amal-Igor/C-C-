#include <vector>
#include <iostream>
#include "MyPoint.h"
#include "Fantassin.h"
#include <math.h>

using namespace std;
#pragma once

//class Fantassin;

class Damier
{

public: 
	Damier();
	Damier(int largeur, int longueur);

	int getLargeur();
	void setLargeur(int largeur);
	int getLongueur();
	void setLongueur(int longueur);

	vector< vector<Fantassin*>> getDamier();
	bool setRandomPerso(Fantassin* perso);

	Fantassin* getPersonnage(MyPoint p);
	MyPoint getPosition(Fantassin* perso);
	vector<Fantassin*> getPersoCible(Fantassin* perso);

	bool deplacerPerso(Fantassin* perso);
	void removeDeadPerso();
	int persoCount();






protected: 
	vector< vector<Fantassin*>> mGrille;
	int mLargeur;
	int mLongueur;

};

