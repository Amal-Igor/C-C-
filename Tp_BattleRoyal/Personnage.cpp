#include "Personnage.h"

int Personnage::ID = 0;


Personnage::Personnage()
{
	id = ID++;
	Map* map = nullptr;
	MyPoint* position = nullptr;
	
}

Personnage::Personnage(Map* carte, MyPoint* pos)
{
	id = ID++;
	map = carte;
	position = pos;

}


int Personnage::getId()
{
	return id;
}

void Personnage::setId(int inputId)
{
	id = inputId;
}

Personnage* Personnage::getPersoById(int id)
{	
	Personnage* p = new Personnage();

	//à récupérer via le pointer veurs la map

	return p;
}


Personnage* Personnage::getPersoByPosition(MyPoint* position)
{
	//méthode à définir dans la classe map pour pouvoir récupérer id et positiion de chaque joueurs
}



MyPoint* Personnage::getPosition()
{
	return position;
}

void Personnage::setPosition(MyPoint* posit)
{
	position = posit;
}