#include "Mere.h"
#include "Fille.h"

int main()
{
	Mere m;

	m.afficher();
	//m.valeur = 70;
	//m.seccret();

	Fille f;
	f.afficher();

	Mere* pM = new Mere();
	Fille* pF = new Fille();

	Mere* tab[2];
	tab[0] = pM;
	tab[1] = pF;

	for (int i = 0; i < 2; i++)
		tab[i]->afficher();

	return 0;
}