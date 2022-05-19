#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


void initChaine(char* chaine, int taille)
{
	for (int i = 0; i < taille; i++)
	{
		chaine[i] = '\0';
	}
}

int identique(char* c1, char* c2, int taille)
{	
	int isEq =0;
	for (int i = 0; i < taille; i++)
	{
		isEq += (c1[i] == c2[i]);
	}

	if (isEq == (taille * 1)) {
		return 1;
	}

	else return 0;

}

void reallocC1(char* c1, char* c2)
{
	const size_t c1_b = strlen(c1);
	const size_t c2_b = strlen(c2);
	const size_t c1c2 = c1_b + c2_b;
	(char*)realloc(c1, c1c2);
}

void ajouter(char* c1, int taille1, char* c2, int taille2)
{
	int index1 = 0;
	int index2 = 0;

	for (int i = 0; i < taille1; i++)
	{
		if (c1[i] == '\0') {
			index1 = i;
		}
	}

	for (int j = 0; j < taille2; j++)
	{
		if (c2[j] == '\0') {
			index2 = j;
		}
	}

	int y = 0;
	for (int x = index1; x < (taille2+taille1); x++)
	{
		c1[x] = c2[y];
		y++;
		if (y == (taille2 - 1)) {
			break;
		}
	}

	c1[index1 + index2] = '\0';
	reallocC1(c1, c2);
	printf("%s", c1);
	//if (index1 > index2)
	//{
	//	strcat(c1, c2);
	//	printf("%s", c1);
	//}
	//else
	//{
	//	strcat(c2, c1);
	//	printf("%s", c2);
	//}
}




int main()
{	
	
	char* str1 = (char*)malloc(255 * sizeof(char));
	char* str2 = (char*)malloc(255 * sizeof(char));


	//char nom[255];
	//char* prenom = (char*)malloc(255 * sizeof(char));


	printf("Veuillez rentrer la première chaine de char:");
	scanf("%s", str1);

	printf("Veuillez rentrer la deuxième chaine de char:");
	scanf("%s", str2);

	
	ajouter(str1, 255 ,str2, 255);
	//initChaine(prenom, 255);

	//for (int i = 0; i < 255; i++)
	//{
	//	printf("%d : %c", i, prenom[i]);
	//}

	//printf("Prenom:");
	//scanf("%s", prenom);
	//reallocC1(str1, 255, 255);
	//free(prenom);

	//printf("%");
	free(str1);
	free(str2);

	return 0;
}