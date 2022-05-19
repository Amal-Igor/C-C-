#pragma once
#include <iostream>
using namespace std;

class Mere
{
public: 
	Mere();
	virtual void afficher();
	void marcher();

protected:
	int valeur;

private: 
	void secret();
	int nbPas;
};

