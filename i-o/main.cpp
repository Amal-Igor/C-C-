#include <stdio.h>
#include <stdlib.h> //pour aléatoire
#include <time.h>  //pour alétoire


#define MAX 100
#define MIN 0
#define LENGTH 50

void insertInt(FILE* fEcriture, int input[]) {
	if (fEcriture != NULL)
	{	
		for (int i = 0; i < LENGTH; i++) 
		{
			fprintf(fEcriture, "%d ", input[i]);	
		}
		fclose(fEcriture);
	}
}


void readFile(FILE* fLecture, int input[])
{
	if (fLecture != NULL) // rajouter feoff
	{
		for (int i = 0; i < LENGTH; i++) 
		{
			fscanf(fLecture, "%d ", &input[i]);
		}

		fclose(fLecture);
		for (int i = 0; i < LENGTH; i++)
		{
			printf("Lecture des données à partir du fichier :: %d \n", input[i]);
		}
	}
}

void renitialize(int m, int n, int **arr)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			arr[i][j] = 0;
			printf("%d", arr[i][j]);
		}
	}
}
void testArr(int m, int n)
{	
	int** arr;
	arr = new int* [m];
	arr = new int* [n];

	renitialize(m, n, arr);
}

	//void fillArr(int arr[][], int x, int y)
	//{

	//	for (int i = 0; i < x; i++) 
	//	{	
	//		for (int j = 0; j < y; j++)
	//		{
	//			(&arr)[i][j] = 0;
	//			printf("Valeur indice i :: %d, index j : %d == valeur %d \n", i, j, (arr)[i][j]);
	//		}
	//	}
	//}


int main()
{	
	int resultArr[LENGTH], arr[LENGTH];
	srand(time(NULL)); // On initialise une valeur aléatoire => time(NULL) ce qui renvoit une valeur qu'on appelle le temps Unix (i.e. le temps que s'est écoulé de puis 1er janvier 1970)

	int tableau2D[7][9];
	testArr(7,9);
	//printARr(7, 7);
	//fillArr((int**)tableau2D, 7, 9);

	// Pour remplir un objet en deux 2D
	//for (int i = 0; i < 7; i++)
	//{
	//	for (int j = 0; i < 9; j++)
	//	{
	//	tableau2D[i][j] = (rand() % (MAX - MIN + 1)) + MIN;
	//	printf("%d \n", tableau2D[i][j]);
	//	}
	//}


	//for (int i = 0; i < LENGTH; i++) {
	//	int random = (rand() % (MAX - MIN + 1)) + MIN; //!< Cette variable permet de générer un nom aléatoire entre 1 et 1000
	//	arr[i] = random;
	//	//printf("\nValeur indice %d === %d", i, arr[i]);
	//}


	//FILE* fLecture	
	//FILE* fEcriture = fEcriture = fopen("monfichier.txt", "w");

	//insertInt(fEcriture, arr);
	//readFile(fLecture, resultArr);
	
}