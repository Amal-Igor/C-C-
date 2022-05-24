#pragma once
#include "CVehicule.h"

class CMoto:public CVehicule
{
public:
	CMoto();
	~CMoto();
	void afficher();
	void stop();


protected:
	int bequilleCentrale;
};

