#include "CVoiture.h"
CVoiture::CVoiture()
{
	cout << "constructeur voiture" << endl;
}

CVoiture::~CVoiture()
{
	cout << "destructeur voiture" << endl;
}
void CVoiture::afficher()
{
	cout << "Je suis une voiture" << endl;
}

void CVoiture::stop()
{
	cout << "Je tire le frein à main" << endl;

}