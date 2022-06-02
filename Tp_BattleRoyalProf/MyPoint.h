#pragma once
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

class MyPoint
{
public:
	MyPoint();
	MyPoint(int x, int y);
	~MyPoint();


	void afficher();
	void deplace(int dx, int dy);
	void saisieConsole();


	void setmY(int mY);
	void setmX(int mX);

	int getmY();
	int getmX();

	//double getLongueur(MyPoint destination);
	int getLongueur(MyPoint destination);

	bool  operator==(const MyPoint p) const;




protected:
	int mX;
	int mY; // m ==> membre
};

