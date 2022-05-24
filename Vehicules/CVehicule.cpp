#include "CVehicule.h"


CVehicule::CVehicule()
{
	cout << "constructeur vehicule" << endl;

}
CVehicule::~CVehicule()
{
	cout << "destructeur vehicule" << endl;
}
void CVehicule::afficher()
{
	cout << "Je suis un vehicule" << endl;
}

void CVehicule::stop()  //pas d'implementation si virtuelle pure
{

	cout << "Arret" << endl;
}
