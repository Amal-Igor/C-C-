#pragma once
class MyPoint
{
public:
	MyPoint();
	MyPoint(int x, int y);
	MyPoint(MyPoint& pCopie);
	~MyPoint();


	void afficher();
	void deplace(int dx, int dy);


	void setmY(int mY);
	void setmX(int mX);

	int getmY();
	int getmX();



protected:
	int mX;
	int mY; // m ==> membre
};

