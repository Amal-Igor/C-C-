#include "Ciel.h"



Ciel::Ciel()
{
	vector<Aeronef*> *temp;
	tab = temp;
	largeur = 0;
	longueur = 0;

}
void Ciel::setLargeur(int large)
{
	largeur = large;
}
void Ciel::setLongeur(int longe)
{
	longueur = longe;
}
int Ciel::getLargeur()
{
	return largeur;
}
int Ciel::getLongeur()
{
	return longueur;
}


vector<Aeronef*> Ciel::getAeronef()
{
	return nullptr;
}


void Ciel::addAeronef(Aeronef* aeronef)
{

}


void Ciel::collisions()
{

}