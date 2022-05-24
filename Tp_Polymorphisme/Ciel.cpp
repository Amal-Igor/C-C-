#include "Ciel.h"
#include "Aeronef.h"


Ciel::Ciel()
{

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

void Ciel::addAeronef(Aeronef* aeronef)
{
	tab.push_back(aeronef);
}

void Ciel::afficher()
{


	for (int i = 0; i < tab.size(); i++) {
		tab[i]->displayStatus();
	}

}


void Ciel::initSkyMatrix()
{



}

void Ciel::collisions()
{
	int countCollision = 0;

	for (int i = 0; i < tab.size(); i++) {

		for (int j = 1; j < tab.size(); j++)
		{
			if ((tab[i]->getPosition() == tab[j]->getPosition()) && (i != j)) {
				countCollision++;
				cout << "Il y a eu une collision avec entre les appareils id: " << tab[i]->getId() << " et l'appareil id : " << tab[j]->getId() << endl << " A la position X :: " << tab[i]->getPosition().getX() << " Y :: " << tab[i]->getPosition().getY() << endl;
			}
		}
	}
}