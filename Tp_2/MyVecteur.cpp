#include "MyVecteur.h"
#include "MyPoint.h"
#include <stdio.h>

MyVecteur::MyVecteur()
{
	mOrigine = MyPoint();
	mDestination = MyPoint();
	this->mOrigine = *pOrigine;
	this->mDestination = *pDestination;
}

MyVecteur::MyVecteur(MyPoint mOrigine, int xO, int yO, MyPoint mDestination, int xD, int yD)
{
	mOrigine = MyPoint(xO, yO);
	this->mOrigine = *pOrigine;
	this->mDestination = *pDestination;
	mDestination = MyPoint(xD, yD);
}

void setmOrigine(MyPoint *pOrigine, int x, int y)
{	
	pOrigine->setmX(x);
	pOrigine->setmY(y);
}

void setmDestination(MyPoint *pDestination, int x, int y)
{
	pDestination->setmY(y);
	pDestination->setmX(x);
}

void getmOrigine(MyPoint* pOrigine, int& getOriginX, int& getOrigineY)
{
	getOriginX = pOrigine->getmX();
	getOrigineY = pOrigine->getmY();

}
void getmDestination(MyPoint* pDestination, int& getDestX, int& getDestY)
{	
	
	getDestX = pDestination->getmX();
	getDestY = pDestination->getmY();

}