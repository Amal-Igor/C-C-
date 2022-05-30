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

void MyPoint::saisieConsole()
{
	int X, Y;
	cout << "Veuillez rentrez une valeur pour x: ";
	cin >> X;
	cout << "Veuillez rentrez une valeur pour y: ";
	cin >> Y;

	this->setmX(X);
	this->setmY(Y);
}

bool MyPoint::operator==(const MyPoint p) const
{
	if (mX != p.mX)
		return false;
	if (mY != p.mY)
		return false;

	else return true;
}


double MyPoint::getLongueur(MyPoint destination)
{
	int xA = mX;
	int xB = destination.getmX();

	int yA = mY;
	int yB = destination.getmY();

	double first = pow((yB - yA), 2);
	double second = pow((xB - xA), 2);


	double res = sqrt(first + second);
	return res;
}

int MyPoint::getmY()
{
	//printf("mY == %d ", mY);
	return mY;
}

int MyPoint::getmX()
{
	//printf("mX == %d ", mX);
	return mX;
}

//void setmB(int mA);
