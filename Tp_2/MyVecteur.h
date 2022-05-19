#pragma once
#include "MyPoint.h"

class MyVecteur
{
public:
	MyVecteur();
	MyVecteur(MyPoint mOrigine, int xO, int yO, MyPoint mDestination, int xD, int yD);



	void afficher();

	void setmOrigine(MyPoint* pOrigine, int x, int y);
	void setmDestination(MyPoint* pDestination, int x, int y);

	void getmOrigine(MyPoint* pOrigine, int& getOriginX, int& getOrigineY);
	void getmDestination(MyPoint* pDestination, int& getDestX, int& getDestY);



protected:
	MyPoint mOrigine, *pOrigine;
	MyPoint mDestination, *pDestination; // m ==> membre

};

