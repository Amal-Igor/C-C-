#pragma once
#include <stdio.h>


int plusGrand(int a, int b);
int carre(int a);
void intervertir(int *val1, int  *val2);

int plusGrand(int a, int b)
{

	if (a > b) {
		return a;
	}

	else if (a < b) {
		return b;
	}
}

int carre(int a)
{
	int square = a * a;
	return square;
}

void T(int *val1, int *val2)
{	

	printf_s("Au début de l'opération on avait *val1: %d et *val2: %d \n", *val1, *val2);
	int transitory = *val1;

	*val1 = *val2;
	*val2 = transitory;

	printf_s("Maitenant *val1: %d et *val2: %d", *val1, *val2);

}

void staticEx()
{
	static int val = 0;
	val = val + 1;
	printf_s("val::%d", val);
}

struct maDate
{
	int jour;
	int mois;
	int annee;
};

typedef struct 
{
	int jour;
	int mois;
	int annee;
} maDate2;

typedef struct
{
	int no_compte;
	char etat;
	char nom[80];
	float solde;
} cpt;

void printDate(struct maDate s)
{
	printf_s("PAR STRUCTURE\n");
	printf_s("Le jour est : %d\n", s.jour);
	printf_s("Le mois est : %d\n", s.mois);
	printf_s("Le année est : %d\n", s.annee);
}

void printDate2(maDate2 s)
{
	printf_s("PAR TYPEDEF \n");
	printf_s("Le jour est : %d\n", s.jour);
	printf_s("Le mois est : %d\n", s.mois);
	printf_s("Le année est : %d\n", s.annee);
}

maDate2 addDate(int jour, int mois, int annee) 
{	
	maDate2 tmp;
	tmp.jour = jour;
	tmp.mois = mois;
	tmp.annee = annee;
	return tmp;
}

maDate2 modifyDate(maDate2 s,int jour, int mois, int annee)
{
	s.jour = jour;
	s.mois = mois;
	s.annee = annee;
	return s;
}



int main()
{	

	//int z = plusGrand(7, 8);
	//printf_s("%d\n", z);


	//int x = carre(4);
	//printf_s("%d\n", x);

	// Quand on le passe en paramètre la variable est copiée
	//	int a = 10, b = 14;


	//intervertir(&a, &b);
	//printf("%d", a);
	//int a = 5;
	//a = a + 1;
	//printf_s("%d", a);

	maDate date1;
	date1.jour = 18;
	date1.mois = 05;
	date1.annee = 2022;
	//printDate(date1);

	maDate2 date2;
	date2.jour = 6;
	date2.mois = 6;
	date2.annee = 6;
	//printDate2(date2);

	maDate2 date3 = addDate(666, 666 ,666);
	printDate2(date3);

	maDate2 date4 = addDate(444, 444,444);
	modifyDate(date4, 888, 888, 888);
	printDate2(date4);


	return 0;
}