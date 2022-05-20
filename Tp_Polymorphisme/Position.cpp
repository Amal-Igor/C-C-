#include "Position.h"


Position::Position()
{
	mX = 0;
	mY = 0;

}

//Position::Position(int x, int y)
//{
//	mX = x;
//	mY = y;
//}
bool Position::operator==(const Position p) const
{
	if (mX != p.mX)
		return false;
	if (mY != p.mY)
		return false;
	return true;
}

Position::~Position()
{
}
int Position::getX()
{
	return mX;
}
int Position::getY()
{
	return mY;
}
void Position::afficher()
{
	cout << "x:" << mX << " y:" << mY << endl;
}

void Position::setX(int x)
{
	mX = x;
}
void Position::setY(int y)
{
	mY = y;
}