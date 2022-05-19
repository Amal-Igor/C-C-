#include "MyPoint.h"
#include <iostream>
using namespace std;



/**
 * @brief Fonction permettant de récupérer des valeur pour les insérée dans l'instance
 *	de classe MyPoint
 * @param x Valeur en abscisse 
 * @param y Valeur en ordonnée 
*/
void saisieConsole(int& x, int& y)
{	
	cout << "Veuillez saisir une valeur pour X ::";
	cin >> x;
	cout << "Veuillez saisir une valeur pour Y ::";
	cin >> y;

}


int main()
{
	int mY, mX;

	MyPoint mP1;
	MyPoint mP2(8, 10);

	saisieConsole(mX, mY);
	mP1.setmX(mX);
	mP1.setmY(mY);

	mP1.afficher();
	mP2.afficher();

	return 0;
}