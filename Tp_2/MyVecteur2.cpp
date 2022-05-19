#include "MyVecteur2.h"






MyVecteur2::MyVecteur2()
{

}

MyVecteur2::MyVecteur2(int xOr, int yOr, int xDes, int yDes)
{
	mOrigine.setmX(xOr);
	mOrigine.setmY(yOr);
	mDestination.setmX(xDes);
	mDestination.setmY(yDes);

	//mOrigine = MyPoint(xOr, yOr); dans ce cas on recréer un Point en mémoire
}

MyVecteur2::MyVecteur2(MyPoint ori, MyPoint dest)
{
	mOrigine = ori;
	mDestination = dest;
}

void MyVecteur2::setOrigine(MyPoint ori)
{
	mOrigine = ori;
}
void MyVecteur2::setDestination(MyPoint dest)
{
	mDestination = dest;
}
MyPoint MyVecteur2::getOrigine()
{
	return mOrigine;
}
MyPoint MyVecteur2::getDestination()
{
	return mDestination;
}
void MyVecteur2::afficher()
{
	cout << "ori: x:" << mOrigine.getmX() << " y:" << mOrigine.getmY() << endl;
	cout << "dest: x:" << mDestination.getmX() << " y:" << mDestination.getmY() << endl;
	cout << "longueur:" << longueur() << " angle:" << angle() << endl;
}

double MyVecteur2::angle(int x1, int x2, int y1, int y2)
{	
	double cosA, angle, dotProd, lengthA, lengthB, Acos;

	dotProd = (x1 * x2) + (y1 * y2);
	lengthA = magnitude(x1, y1);
	lengthB = magnitude(x2, y2);
	cosA = dotProd / (lengthA * lengthB);
	
	Acos = acos(cosA);
	angle = Acos * 180 / 3.14;

	return angle;
}

double MyVecteur2::angle(double dotProd, double lengthA, double lengthB)
{	
	double cosA, angle, cosAlpha;
	cosA = dotProd / (lengthA * lengthB);
	cosAlpha = acos(cosA);
	angle = cosAlpha * 180 / 3.14;
	return angle;
}

double MyVecteur2::angle(MyPoint mOrigine, MyPoint mDestination)
{
	double cosA, angle, cosAlpha, dotP, lengthA, lengthB;

	dotP = calculateDotProd(mOrigine.getmX(), mDestination.getmX(), mOrigine.getmY(), mDestination.getmY());
	lengthA = magnitude(mOrigine.getmX(), mOrigine.getmY());
	lengthB = magnitude(mDestination.getmX(), mDestination.getmY());
	cosA = dotP / (lengthA * lengthB);
	cosAlpha = acos(cosA);
	angle = cosAlpha * 180 / 3.14159;
	return angle;
}

double MyVecteur2::angle()
{	
	int x1, y1, x2, y2;
	double angle;	
	x1 = this->mOrigine.getmX();
	y1 = this->mOrigine.getmY();

	x2 = this->mDestination.getmX();
	y2 = this->mDestination.getmY();

	angle = this->angle(x1, x2, y1, y2);

	return angle;
}
// 
//double MyVecteur2::angle()
//{
//	int x1, y1, x2, y2;
//	double angle;
//	x1 = mOrigine.getmX();
//	y1 = mOrigine.getmY();
//
//	x2 = mDestination.getmX();
//	y2 = mDestination.getmY();
//
//	angle = this->angle(x1, x2, y1, y2);
//
//	return angle;
//}

double MyVecteur2::calculateDotProd(int x1, int x2, int y1, int y2)
{
	double dotProd = (x1 * x2) + (y1 * y2);
	return dotProd;
}

double MyVecteur2::magnitude(int x, int y)
{
	double magnitude;

	magnitude = sqrt((x * x) + (y * y));
	printf("%d ", magnitude);
	return magnitude;
}


void MyVecteur2::longeur(int x1, int x2, int y1, int y2)
{
	double length1 = magnitude(x1 , y1);
	double length2 = magnitude(x2, y2);

}

double MyVecteur2::longeur(int x, int y)
{
	double length = magnitude(x, y);

	return length;
}

float MyVecteur2::longueur()
{
	float y = pow((mDestination.getmY() - mOrigine.getmY()), 2);
	float x = pow((mDestination.getmX() - mOrigine.getmX()), 2);

	return sqrt(x + y);
}