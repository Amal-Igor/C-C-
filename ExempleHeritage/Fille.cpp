#include "Fille.h"

Fille::Fille()
{
	valeur = 456;
}


void Fille::afficher()
{	
	Mere::afficher();
	cout << "je suis ta fille " << valeur << endl;

}