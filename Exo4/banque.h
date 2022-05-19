#pragma once
typedef struct
{
	int noCompte;
	char etat;
	char nom[250]; // Pas de string en C
	float solde;
} cpt; 

cpt creerCompteBancaire();

void printCpt(cpt c);

void modifySolde(cpt *c);

void updateEtat(cpt* pC);

