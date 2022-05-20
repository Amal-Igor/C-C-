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

	MyPoint mP1(10, 10);
	MyPoint mP2(10, 10);

	//saisieConsole(mX, mY);
	//mP1.setmX(mX);
	//mP1.setmY(mY);

	//mP1.afficher();
	//mP2.afficher();
	(mP1 + mP2).afficher();

	MyPoint p3 = mP1 + mP2;

	cout << boolalpha << "Résultat booléen : " << (mP1 == mP2) << endl;
	cout << "Le mx de p3 = " << p3.getmX() << " Le mY de p3 = " << p3.getmY() << endl;


	return 0;
}