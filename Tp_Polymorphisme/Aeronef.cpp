#include "Aeronef.h"


int Aeronef::ID = 0;


Aeronef::Aeronef()
{	
	id = ID++;
	largeurCiel = 20;
	longueurCiel = 20;
}

//void Aeronef::setId(int id)
//{
//	id = id;
//}

//Aeronef::Aeronef(int randX, int randY)
//{
//	id = id +1;
//	position.setX(randX);
//	position.setY(randY);
//	largeurCiel = 20;
//	longueurCiel = 20;
//}


int Aeronef::getId()
{
	return id;
}
void Aeronef::setType(string sType)
{
	type = sType;
}
string Aeronef::getType()
{
	return type;
}
void Aeronef::setPosition(int x, int y)
{
	position.setX(x);
	position.setY(y);
}

void Aeronef::updatePosX(int x)
{
	position.setX(x);
}
void Aeronef::updatePosY(int x)
{
	position.setY(x);
}


Position Aeronef::getPosition()
{
	return position;
}

void Aeronef::setLargeurCiel(int largeur)
{
	largeurCiel = largeur;
}
void Aeronef::setLongeurCiel(int longeur)
{
	longueurCiel = longeur;
}

int Aeronef::getLargeurCiel()
{
	return largeurCiel;
}
int Aeronef::getLongeurCiel()
{
	return longueurCiel;
}
void Aeronef::seDeplacer() 
{	
	cout << "L'aéronef se déplacer ==> à custom en fonction des classes filles !! appellera updatePos" << endl;
}
int Aeronef::myRand(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

void Aeronef::updatePos(int x, int y)
{
	position.setY(x);
	position.setY(y);
}


void Aeronef::displayStatus()
{
	cout << "La position de l'appareil id = " << this->getId() << " de type: " << getType() << " est x = " << position.getX() << " y = " << position.getY() << endl;
}