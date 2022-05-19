#include "Mere.h"



Mere::Mere()
{	
	nbPas = 0;
	valeur = 12;
}

void Mere::afficher()
{
	cout << "je suis ta mère " <<  valeur << endl;
}

void Mere::secret()
{
	cout << "blablbalbla" << endl;

}

void Mere::marcher()
{
	nbPas++;
}