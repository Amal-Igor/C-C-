#include "Ellipse.h"



int main()
{	

	Ellipse* pE = new Ellipse(0, 4, 5, 6); // On va avoir accès à tous les attributs/méthodes objet
	pE->afficher();

	Ellipse c, a;
	c.afficher();
	a.setmX(8);
	a.afficher();
	c.afficher();
	a.deplace(10, 20);
	a.afficher();
	Ellipse b(8, 9, 10, 25);
	b.afficher();
	


	delete pE;
	return 0;
}