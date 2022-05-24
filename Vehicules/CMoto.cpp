#include "CMoto.h"


CMoto::CMoto()
{
	nbCV = 100;
	cout << "constructeur moto" << endl;
}
CMoto::~CMoto()
{
	cout << "destructeur moto" << endl;
}
void CMoto::afficher()
{
	cout << "Je suis une moto" << endl;
}

void CMoto::stop()
{
	cout << "Je freine avec la main" << endl;

}