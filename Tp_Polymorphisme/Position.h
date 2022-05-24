#pragma once
#include <iostream>
using namespace std;
class Position
{

	public:
		Position();
		Position(int x, int y);
		~Position();

		void afficher();
		//accesseurs
		void setX(int x);
		void setY(int y);
		int getX();
		int getY() ;

		bool operator==(const Position pos) const;
		//bool operator!=(const Position pos) const;
		//Voir si on implémente ou pas
		//bool isNear(const Position p, int precision = 0)const;




	protected:
		int mX;
		int mY;

};

