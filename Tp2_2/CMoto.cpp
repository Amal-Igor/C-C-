#include "CMoto.h"

CMoto::CMoto()
{

}

CMoto::~CMoto()
{
	cout << "Je passe dans le destructeur de la moto !!" << endl;
}

void CMoto::afficher()
{
	cout << "Je suis une moto !!" << endl;
}