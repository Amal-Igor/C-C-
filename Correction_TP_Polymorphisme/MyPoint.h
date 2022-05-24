#pragma once
#include <iostream>
using namespace std;
class MyPoint
{

public:
	MyPoint();
	MyPoint(int x, int y);
	~MyPoint();

	void afficher();
	//accesseurs
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();

	bool operator==(const MyPoint pos) const;
	//bool operator!=(const MyPoint pos) const;
	//Voir si on implémente ou pas
	//bool isNear(const MyPoint p, int precision = 0)const;




protected:
	int mX;
	int mY;

};

