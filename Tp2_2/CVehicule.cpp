#include "CVehicule.h"

CVehicule::CVehicule()
{
	
}

CVehicule::~CVehicule()
{
	cout << "Je passe dans le destructeur du véhicule !! " << endl;
}

void CVehicule::afficher()
{
	cout << "Je suis un véhicule !!" << endl;
}