//#include <stdio.h>
//
//typedef struct
//{
//	static int noCompte;
//	char etat;
//	char nom[80];
//	float solde;
//} cpt;
//
//void printCpt(cpt c)
//{
//	printf_s("Le numero compte est: %d\n L'état du compte : %c\n Le nom du titulaire du compte: %s\n Le solde du compte est de: %f € ", c.noCompte, c.etat, c.nom, c.solde);
//}
//
//cpt createAccount(char nom[80], float solde)
//{
//	cpt tmp;
//	tmp.noCompte = tmp.noCompte++;
//	*tmp.nom = nom[80];
//	tmp.solde = solde;
//	
//	if (solde < 0) tmp.etat = 'C';
//	else if (solde <= 0 && solde <= 100) tmp.etat = 'L';
//	else tmp.etat = 'E';
//}
//
//int main()
//{
//	printf_s("Bonjour bienvenu sur maBanque\n");
//	printf_s("Veuillez renseigner votre nom:\n");
//	char nom[80];
//	scanf("%s", &nom);
//	printf_s("\n Veuillez renseigner votre solde:\n");
//	float solde;
//	scanf("%f", &solde);
//
//	cpt newAcc = createAccount(nom, solde);
//	printCpt(newAcc);
//	return 0;
//}