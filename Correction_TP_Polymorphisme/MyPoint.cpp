#include "MyPoint.h"


MyPoint::MyPoint()
{

}

MyPoint::MyPoint(int x, int y)
{
	mX = x;
	mY = y;
}
bool MyPoint::operator==(const MyPoint p) const
{
	if (mX != p.mX)
		return false;
	if (mY != p.mY)
		return false;
	return true;
}

//bool MyPoint::operator!=(const MyPoint p) const
//{
//	if (mX != p.mX)
//		return false;
//	if (mY != p.mY)
//		return false;
//	return true;
//}

MyPoint::~MyPoint()
{
}
int MyPoint::getX()
{
	return mX;
}
int MyPoint::getY()
{
	return mY;
}
void MyPoint::afficher()
{
	cout << "x:" << mX << " y:" << mY << endl;
}

void MyPoint::setX(int x)
{
	mX = x;
}
void MyPoint::setY(int y)
{
	mY = y;
}