#pragma once
#include <vector>
#include <iostream>
#include "MyPoint.h"
#include "Tools.h"
#include "Fantassin.h"
#include <math.h>

using namespace std;


class Fantassin;

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

	void afficher();






protected: 
	vector< vector<Fantassin*>> mGrille;
	int mLargeur;
	int mLongueur;

};

