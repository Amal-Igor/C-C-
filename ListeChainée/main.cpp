#include <stdio.h>
#include <stdlib.h>
#include "listeChainee.h"

void exemples()
{
	int* pA = (int*)malloc(sizeof(int));

	pElement e1 = (pElement)malloc(sizeof(struct element));
	e1->valeur = 17;

	pElement e2 = (pElement)malloc(sizeof(struct element));
	e2->valeur = 79;

	pElement e3 = (pElement)malloc(sizeof(struct element));
	e3->valeur = 101;

	e1->pApres = e2;
	e2->pAvant = e1;
	e2->pApres = e3;
	e3->pAvant = e2;


	/* si on veut acceder au 100eme element
	pElement pATrouver = e1;
	for (int i = 0; i < 100; i++)
	{
		pATrouver = pATrouver->pApres;
	}
	*/
}


int main()
{
	pListeInt l = initListe();
	ajouterInt(l, 8888);
	ajouterInt(l, 66);
	ajouterInt(l, 77);
	ajouterInt(l, 525);
	//int v =valeur(l, 1);
	//printf("%d", v);
	//ajouterDebutInt(l, 666);
	//supprInt(l, 3);
	supprliste(l);
	//int v = findByValue(666, l);
	//printf("%d", v);
	//insertValueAtPos(l, 666, 3);
	//findByValue(88, l);
	//exportListe(l);


	//FILE* outputfile = fopen("listeexport.txt", "r");
	//pListeInt newL = importElement(outputfile);
	//afficher(newL);
	return 0;
}