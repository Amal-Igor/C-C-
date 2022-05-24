#pragma once
#include <string>
#include "MyPoint.h"
#include "Tools.h"

using namespace std;


using namespace std;

class ObjetVolant
{

public:
	ObjetVolant();
	void updatepos();
	void displaystatus();


private: 
	int mID;
	string type;
	MyPoint mCoords;
	int  mLargeurCiel;
	int mLongueurCiel;
};

