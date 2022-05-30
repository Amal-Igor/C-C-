#include <string>
#include <vector>
#include "Map.h"
#include "MyPoint.h"

#pragma once
class Personnage
{
public:		

			Personnage();
			Personnage(Map* carte, MyPoint* pos);
			int getId();
			void setId(int id);


			MyPoint* getPosition();
			void setPosition(MyPoint* posit);

			Map* getMap();
			void setMap(Map* carte);

			Personnage* getPersoById(int inputId);
			Personnage* getPersoByPosition(MyPoint* position);

protected:	
			int id;
			static int ID;
			Map* map;
			MyPoint* position;
			//vector< pair <int, MyPoint> > getIdAndPos;
};

