#pragma once
#include <iostream>
#include "Position.h"
#include "Ciel.h"
using namespace std;

class Aeronef
{
public:
	Aeronef();
	int getId();

	/**
	 * @brief Permet d'assigner un type à un aéronef 
	 * @param type avion/helicopter/montgolfier
	*/
	void setType(string sType);
	string getType();

	void setPosition(int x, int y);
	Position getPosition();

	void setLargeurCiel(int larger);
	void setLongeurCiel(int longeur);

	int getLargeurCiel();
	int getLongeurCiel();
	virtual void seDeplacer();

	/**
	 * @brief Cette fonction va permettre de mettre à jour la position d'un aeronef dans le ciel
	 * @param x Coordonnée x
	 * @param y Coordonnée y
	*/
	virtual void updatePos(int x, int y);

	/**
	 * @brief Cette fonction va renvoyer les informations sur l'objet en cours == afficher()
	*/
	void displayStatus();


protected:
	int largeurCiel;
	int longueurCiel;
	static int id;
	string type;
	Position position;

};

