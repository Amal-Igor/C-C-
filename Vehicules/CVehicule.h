#pragma once
#include <iostream>
using namespace std;

class CVehicule
{
public:
	CVehicule();
	virtual void afficher();
	virtual ~CVehicule();
	virtual void stop();// virtual void stop() = 0; virtuelle pure

protected:
	int nbCV;
};

