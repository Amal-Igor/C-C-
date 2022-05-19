#pragma once
#include "MyVecteur2.h"
#include "MyPoint.h"
#include <stdio.h>
#include <valarray> 
#include <math.h>

class MyVecteur2
{
public:
	MyVecteur2();
	MyVecteur2(MyPoint ori, MyPoint dest);
	MyVecteur2(int xOr, int yOr, int xDes, int yDes);


	void setOrigine(MyPoint ori);
	void setDestination(MyPoint dest);
	MyPoint getOrigine();
	MyPoint getDestination();
	//~MyVecteur2();

	void afficher();

	double angle(int x1, int x2, int y1, int y2);
	double angle(MyPoint mOrigine, MyPoint mDestination);
	double angle(double dotProd, double lengthA, double lengthB);
	double angle();


	double magnitude(int x, int y);

	float longueur();
	void longeur(int x1, int x2, int y1, int y2);
	double longeur(int x, int y);


	double calculateDotProd(int x1, int x2, int y1, int y2);


protected:
	MyPoint mOrigine;
	MyPoint mDestination;


	

};

