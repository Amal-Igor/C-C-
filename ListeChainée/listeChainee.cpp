#include "listeChainee.h"


pListeInt initListe()
{
	pListeInt liste = (pListeInt)malloc(sizeof(struct listeInt));
	liste->tailleListe = 0;
	liste->premierElement = NULL;
	return liste;
}


void ajouterInt(pListeInt liste, int valeur)
{
	pElement e = (pElement)malloc(sizeof(struct element));
	e->valeur = valeur;

	if (liste->tailleListe == 0)
	{
		e->pApres = e;
		e->pAvant = e;
		liste->premierElement = e;
	}
	else
	{
		pElement next = liste->premierElement;
		pElement before = liste->premierElement->pAvant;

		e->pApres = next;
		e->pAvant = before;

		next->pAvant = e;
		before->pApres = e;

	}
	liste->tailleListe += 1;
}


int valeur(pListeInt liste, int pos)
{
	pElement e = liste->premierElement;

	for (int i = 1; i < pos % liste->tailleListe; i++) // le modulo permet d'être sur que l'input pos soit vraiment dans la liste poru éiter de dépasser
	{
		e = e->pApres;
	}
	return e->valeur;
}


void afficher(pListeInt liste)
{
	
	int length = liste->tailleListe;
	
	pElement e = liste->premierElement;
	for (int i = 0; i < length; i++)
	{
		printf("%d \n", e->valeur);
		e = e->pApres;
	}
}



void ajouterDebutInt(pListeInt liste, int valeur)
{
	pElement e = (pElement)malloc(sizeof(struct element));
	e->valeur = valeur;
	e->pAvant = liste->premierElement->pAvant;
	e->pApres = liste->premierElement;
	liste->premierElement = e;
	
	liste->tailleListe += 1;
}


// void ajouterDebutInt(pListeInt liste, int valeur)
//{
//	pElement e = (pElement)malloc(sizeof(struct element));
//	e->valeur = valeur;
//
//	if (liste->tailleListe == 0)
//	{
//		e->pApres = e;
//		e->pAvant = e;
//		liste->premierElement = e;
//	}
//	else
//	{
//		pElement next = liste->premierElement;
//		pElement before = liste->premierElement->pAvant;
//
//		e->pApres = next;
//		e->pAvant = before;
//
//		next->pAvant = e;
//		before->pApres = e;
//
//	}
//	liste->tailleListe += 1;
//}


void supprInt(pListeInt liste, int pos)
{	

	if (pos > liste->tailleListe) {
		printf("La liste n'a pas d'élément à la position : %d ", pos);
	}
	else
	{
		pElement e = liste->premierElement;

		for (int i = 1; i < pos; i++)
		{
			e = e->pApres;
		}

		pElement e_1 = e->pAvant;
		e_1->pApres = e->pApres;

		pElement e_2 = e->pApres;
		e_2->pAvant = e->pAvant;

		liste->tailleListe -= 1;
		free(e);
	}
	
}

void supprliste(pListeInt liste)
{	
	pElement e = liste->premierElement;
	pElement e_1 = e->pAvant;
	for (int i = 0; i < liste->tailleListe; i++)
	{
		e = e->pApres;
		e_1 = e->pAvant;
		free(e_1);
		liste->tailleListe -= 1;
	}
	free(liste);
}


int findByValue(int val, pListeInt liste)
{
	int length = liste->tailleListe;
	pElement e = liste->premierElement;
	int pos = 0, count = 0;
	for (int i = 0; i < length; i++)
	{
		if (e->valeur == val)
		{	
			count++;
			printf("Nous avons touver la valeur à l'index : %d", pos);
			return pos;
		}
		else
		{
			pos++;
			count++;
			e = e->pApres;	
		}
	}
	if (count == length)
	{
		printf("Nous n'avons pas trouvé la valeur que vous cherchez dans la liste");
	}	
}



void insertValueAtPos(pListeInt liste, int val, int pos)
{
	pElement e_toInsert = (pElement)malloc(sizeof(struct element));
	e_toInsert->valeur = val;
	pElement e = liste->premierElement;

	if (pos > liste->tailleListe)
	{
		ajouterInt(liste, val);
	}
	else
	{
		for (int i = 0; i < pos; i++)
		{
			e = e->pApres;
		}
	}	
	pElement e_avant = e->pAvant;
	e_avant->pApres = e_toInsert;
	pElement e_apres = e;
	e_apres->pAvant = e_toInsert;
	e_toInsert->pAvant = e_avant;
	e_toInsert->pApres = e_apres;
	liste->tailleListe++;
	afficher(liste);

}


void exportListe(pListeInt liste)
{
	FILE* outputfile = fopen("listeexport.txt", "w");
	int length = liste->tailleListe;
	pElement e = liste->premierElement;

	if (outputfile != NULL)
	{
		for (int i = 0; i < length; i++)
		{
			fprintf(outputfile, "%d ", e->valeur);
			e = e->pApres;
		}
	}
	fclose(outputfile);
}

pListeInt importElement(FILE* input)
{	
	pListeInt newListe = initListe();
	int numToAdd;
	while (!feof(input))
	{
		fscanf(input, "%d ", &numToAdd);
		ajouterInt(newListe, numToAdd);
	}
	
	fclose(input);
	return newListe;
}

