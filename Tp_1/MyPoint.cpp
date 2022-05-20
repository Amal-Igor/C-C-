#include "MyPoint.h"



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

MyPoint::MyPoint(const MyPoint& pCopie) 
{
	mX = pCopie.mX;
	mY = pCopie.mY;
}

MyPoint::~MyPoint() // Il n'ya qu'un seul destrcuteur
{
	printf("Je passe dans le desctructeur \n");
}

MyPoint MyPoint::operator+(const MyPoint p) const
{
	//On crée un nouveau point
	MyPoint pResult(mX + p.mX, mY + p.mY);
	return pResult;
}

bool MyPoint::operator==(const MyPoint p) const
{
	if (mX != p.mX)
		return false;
	if (mY != p.mY)
		return false;

	else return true;
}

void MyPoint::afficher() const
{
	cout << "x:" << mX << " y:" << mY << endl;
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


int MyPoint::getmY() const
{
	printf("mY == %d ", mY);
	return mY;
}

int MyPoint::getmX() const
{
	printf("mX == %d ", mX);
	return mX;
}

//void setmB(int mA);
