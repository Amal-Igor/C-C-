#pragma once
#include <iostream>
#include <vector>
#include "Aeronef.h"
using namespace std;

class Ciel
{

public:
	Ciel();
	void setLargeur(int large);
	void setLongeur(int longe);
	int getLargeur();
	int getLongeur();

	/**
	 * @brief Cette fonction permet de récupérer la liste des tous les objets présents dans le ciel
	 * @return Un vector de pointeurs vers les objets dans celui ci
	*/
	vector <Aeronef*> getAeronef();

	/**
	 * @brief Méthode à appeller pour rajouter les aeronef dans le ciel
	 * @param aeronef L'appareil qui va rejoindre la liste d'aeronef
	*/
	void addAeronef(Aeronef* &aeronef);

	/**
	 * @brief Cette fonction va venir surveiller le ciel et alerter en cas de collisions
	*/
	void collisions();

protected:
	vector<Aeronef*> &tab;
	int largeur;
	int longueur;
};

