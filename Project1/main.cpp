#include <stdio.h> // Cette ligne correspond librairie

void main()
{
	//int a = 7;
	//printf("valeur: %d", a);

	int age = 0; 
	printf("Quelle jour est vous née :");
	scanf("%d", &age); // _CRT_SECURE_NO_WARNINGS
					  // & ==> Ecrit à l'adresse mémoire de variable age

	printf("Tu es née le %d \n", age);

	if (age > 15)
	{
		printf("Tu es né en fin de mois !!!");
	}
	else if (age == 15) {
		printf("Tu es née pile au milieu du mois!!!!!!!");
	}
	else printf("Tu es née en début de mois !!");

}