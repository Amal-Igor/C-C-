#include "MyPoint.h"
#include "MyPoint.h"
#include <stdio.h>

MyPoint::MyPoint()
{
	mX = 0;
	mY = 0;

}
MyPoint::MyPoint(int x, int y)
{
	mX = x;
	mY = y;
}

MyPoint::MyPoint(MyPoint& pCopie)
{

}
MyPoint::~MyPoint() // Il n'ya qu'un seul destrcuteur
{
	printf("Je passe dans le desctructeur \n");
}

void MyPoint::afficher()
{
	printf("mX = %d mY = %d \n", mX, mY);
}


void MyPoint::deplace(int dx, int dy)
{
	mX += dx;
	mY += dy;
}

void  MyPoint::setmY(int Y)
{
	mY = Y;
}
void  MyPoint::setmX(int X)
{
	mX = X;
}


int MyPoint::getmY()
{
	printf("mY == %d ", mY);
	return mY;
}

int MyPoint::getmX()
{
	printf("mX == %d ", mX);
	return mX;
}

//void setmB(int mA);
