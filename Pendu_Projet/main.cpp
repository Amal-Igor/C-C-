#include "pendu.h"
#include <stdlib.h> //pour aléatoire
#include <time.h>  //pour alétoire
#include <string.h>
/** Ce programme aura pour but de faire deviner à l'utilisateur un mot random extrait à partir d'un fichier texte en maxmimum 10 tentatives.
*/



int main()
{	

	srand(time(NULL));
	FILE* input = fopen("pendu.txt", "r");
	int maxL = getNbmotInFile(input);
	int random = randomNumb(0, maxL-1);
	char* randomWord = (char*)malloc((255) * sizeof(char));
	strcpy(randomWord, extractWordFromTextFile(input, random));
	int taille = strlen(randomWord)-1;
	char* hiddenStr = generateHiddenWord(taille);
	char inputUser;



	for(int i =0; i<=10; i++)
	{
		printf("\n Veuillez rentrez un char pour voir s'il est dans le mot mystère :");
		scanf(" %c", &inputUser);
		afficheMot(randomWord, taille, inputUser, hiddenStr);
		countTry(hiddenStr, randomWord, taille);
	} ;



	return 0;
}