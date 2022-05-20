#pragma once
#include <iostream>
using namespace std;

class MyPoint
{
public:
	MyPoint();
	MyPoint(int x, int y);
	MyPoint(const MyPoint& pCopie);
	~MyPoint();


	void afficher() const;
	void deplace(int dx, int dy);


	void setmY(int mY);
	void setmX(int mX);

	int getmY() const;
	int getmX() const;

	MyPoint operator+(const MyPoint p) const;
	bool  operator==(const MyPoint p) const;




protected:
	int mX;
	int mY; // m ==> membre
};

