#pragma once
#include <iostream>
#include <vector>
using namespace std;
//#include "Aeronef.h"



class Aeronef;
//class Avion;
//class Helicopter;
//class Montgolfiere;

class Ciel
{

public:
	Ciel();
	void setLargeur(int large);
	void setLongeur(int longe);
	int getLargeur();
	int getLongeur();

	///**
	// * @brief Cette fonction permet de récupérer la liste des tous les objets présents dans le ciel
	// * @return Un vector de pointeurs vers les objets dans celui ci
	//*/
	//Aeronef* getAeronef(int index);

	/**
	 * @brief Méthode à appeller pour rajouter les aeronef dans le ciel
	 * @param aeronef L'appareil qui va rejoindre la liste d'aeronef
	*/

	void addAeronef(Aeronef* aeronef);
	//void addAeronef(Avion* avion);
	//void addAeronef(Helicoptere* helicoptere);
	//void addAeronef(Montgolfiere* montgolfiere);

	//void addAeronef(Aeronef* aeronef);

	/**
	 * @brief Cette fonction va venir surveiller le ciel et alerter en cas de collisions
	*/
	void collisions();

	void afficher();

	void initSkyMatrix();

protected:
	vector<Aeronef*> tab;
	vector< vector<Aeronef*>> tab3;

	//vector<vector<int>> tab2(Aeronef*, vector<int>(CC));

	//vector<vector<Aeronef*> > matrix(int rows);


	int largeur;
	int longueur;
};

