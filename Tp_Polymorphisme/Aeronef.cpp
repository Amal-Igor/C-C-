#include "Aeronef.h"


int Aeronef::id = 0;

Aeronef::Aeronef()
{
	id++;
	position.setX(0);
	position.setY(0);
}


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
void Aeronef::seDeplacer() //est qu'on mettrait des parametre de sortie?????
{
	cout << "L'aéronef se déplacer ==> à custom en fonction des classes filles !! appellera updatePos" << endl;
}

void Aeronef::updatePos(int x, int y)
{

}


void Aeronef::displayStatus()
{
	cout << "La position de l'appareil id=" << getId() << " de type: " << getType() << "est x = " << position.getX() << " y = " << position.getY() << endl;
}