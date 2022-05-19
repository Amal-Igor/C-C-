#pragma once
class Ellipse
{
	public:
		Ellipse();
		Ellipse(int x, int y, int a, int b);
		~Ellipse();


		void afficher();
		void deplace(int dx, int dy);


		void setmY(int mY);
		void setmX(int mX);
		void setmA(int mA);
		void setmB(int mB);

		int getmY();
		int getmX();
		int getmA();
		int getmB();


	protected:
		int mX;
		int mY; // m ==> membre

		int mA;
		int mB;
};

