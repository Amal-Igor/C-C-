#include <stdio.h>


void modifyTableau(int* tab, int index, int valeur)
{
	tab[index] = valeur;
}

void countLength(int* tab)
{
	int i = 0;


}

int main()
{
	int intArr[8];
	int autresInt[4] = { 1,2,3,4 }; // autreInt == adresse du début du tableau

	int premierevaleur = autresInt[0];
	

	// Pour afficher les valeurs d'un tableaux on passe par une boucle for
	//for (int i = 0; i < 4; i++)
	//{
	//	printf_s("Valeur num %d = %d \n", i, autresInt[i]);
	//}

	//for (int i = 0; i < 32; i++)
	//{
	//	intArr[i] = i+1;
	//	printf_s("Valeur num %d = %d \n", i, intArr[i]);

	//}

	printf_s("Sizeof %d \n", sizeof(autresInt)/4);


	return 0;
}