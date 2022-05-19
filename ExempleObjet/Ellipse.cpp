#include "Ellipse.h"
#include <stdio.h>

Ellipse::Ellipse()
{
	mX = 0;
	mY = 0;
	mA = 0;
	mB = 0;
}
Ellipse::Ellipse(int x, int y, int a, int b)
{
	mX = x;
	mY = y;
	mA = a;
	mB = b;
}

Ellipse::~Ellipse() // Il n'ya qu'un seul destrcuteur
{
	printf("Je passe dans le desctructeur \n");
}

void Ellipse::afficher()
{
	printf("mX = %d mY = %d mA = %d mB = %d \n", mX, mY, mA, mB );
}


void Ellipse::deplace(int dx, int dy)
{
	mX += dx;
	mY += dy;
}

void  Ellipse::setmY(int Y)
{
	mY = Y;
}
void  Ellipse::setmX(int X)
{
	mX = X;
}

void Ellipse::setmA(int mA)
{
	mA = mA;
}

void Ellipse::setmB(int mB)
{
	mB = mB;
}

int Ellipse::getmY()
{
	printf("mY == %d ", mY);
	return mY;
}

int Ellipse::getmX()
{
	printf("mX == %d ", mX);
	return mX;
}

int Ellipse::getmA()
{
	printf("mA == %d ", mA);
	return mA;
}

int Ellipse::getmB()
{
	printf("mB == %d ", mB);
	return mB;
}
//void setmB(int mA);
