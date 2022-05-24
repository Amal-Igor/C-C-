#pragma once
#include "CVehicule.h"

class CVoiture :public CVehicule
{
public:
	CVoiture();
	void afficher();
	~CVoiture();

	void stop();
};

