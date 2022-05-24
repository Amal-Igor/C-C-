#pragma once
#include "ObjetVolant.h"
#include <vector>


class Ciel
{
public:
	Ciel();
	
	void addObjetVolant(ObjetVolant* o);
	vector<ObjetVolant*> collision();
	void display();

private:
	vector<ObjetVolant*> mObjetsVolants;
};

