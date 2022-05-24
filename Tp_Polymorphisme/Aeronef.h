#pragma once
#include <iostream>
#include "Position.h"
#include "Ciel.h"
using namespace std;

class Aeronef
{
public:
	Aeronef();
	//Aeronef(int randX, int randY);
	int getId();
	//void setId(int id);

	/**
	 * @brief Permet d'assigner un type à un aéronef 
	 * @param type avion/helicopter/montgolfier
	*/
	void setType(string sType);
	string getType();

	void setPosition(int x, int y);
	Position getPosition();


	//Fonction pour que les aeronef soit générés à un endroit différent de façon aléatoire ++  se déplace automatiquement
	int myRand(int min, int max);
	/*{
		return (rand() % (max - min + 1)) + min;
	}*/

	void setLargeurCiel(int larger);
	void setLongeurCiel(int longeur);

	int getLargeurCiel();
	int getLongeurCiel();
	virtual void seDeplacer() = 0;

	/**
	 * @brief Cette fonction va permettre de mettre à jour la position d'un aeronef dans le ciel
	 * @param x Coordonnée x
	 * @param y Coordonnée y
	*/
	virtual void updatePos(int x, int y);
	virtual void updatePosX(int x);
	virtual void updatePosY(int y);

	/**
	 * @brief Cette fonction va renvoyer les informations sur l'objet en cours == afficher()
	*/
	void displayStatus();


protected:
	int largeurCiel;
	int longueurCiel;
	int id;
	static int ID;
	string type;
	Position position;

};

