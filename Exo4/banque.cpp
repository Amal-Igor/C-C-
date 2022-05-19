#include "banque.h"
#include <stdio.h>

void printCpt(cpt c)
{
	printf_s("Le numero compte est: %d\n L'état du compte : %c\n Le nom du titulaire du compte: %s\n Le solde du compte est de: %.2f € ", c.noCompte, c.etat, c.nom, c.solde);
}


cpt creerCompteBancaire()
{
	static int numCompte = 0;
	numCompte++;
	cpt tmp;
	tmp.noCompte = numCompte;
	printf_s("\nQuelle est nom du client :");
	scanf_s("%s", tmp.nom, 80);
	//printf_s("\nQuelle est le solde du client :");
	//scanf_s("%f", &tmp.solde);
	modifySolde(&tmp);
	//updateEtat(&tmp);

	//printCpt(tmp);
	
	//printf_s("Voulez vous modifier votre solde?");
	//int i;
	//scanf_s("%d", &i);
	//if (i == 1) {
	//	modifySolde(&tmp);
	//	printCpt(tmp);

	//}


	return tmp;
}

void modifySolde(cpt *c)
{	
	float solde;
	printf_s("\nQuelle est votre solde:");
	scanf_s("%f",  &solde); // Sur le contenu du pointeur il faut récupérer le solde. Paranthèses sont obligatoire sinon il va croire que c'est un pointeur sur c.solde
	//c->solde = i;
	(*c).solde = solde;
	updateEtat(c);

}

void updateEtat(cpt* pC)
{
	if (pC->solde < 0)
		pC->etat = 'C';
	else if (pC->solde > 0 && pC->solde < 100)
		pC->etat = 'L';
	else if (pC->solde > 5000)
		pC->etat = 'E';
	else pC->etat = 'O';
}

