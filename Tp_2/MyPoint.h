#pragma once
#include <stdio.h>
#include <iostream>
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



protected:
	int mX;
	int mY; // m ==> membre
};

