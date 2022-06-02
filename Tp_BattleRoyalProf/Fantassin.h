#pragma once
#include "Damier.h"
#include <string>
using namespace std;
class Damier;


class Fantassin
{

public:
;
	Fantassin(Damier* map);
	int getVie();
	void setVie(int hp);

	int getAttack();
	void setAttack(int attack);

	int getPortee();
	void setPortee(int portee);

	int getMobilite();
	void setMobilite(int mob);

	int getBouclier();
	void setBouclier(int defense);

	string getType();
	void setType(string type);

	void afficher();
	void toString();
	 
	void attaquer();
	void deplacer();
	void infligerDegats(int attaque, string type);

protected:
	int mVie;
	int mAttaque;
	int mPortee;
	int mMobilite;
	int mBouclier;
	string mType;
	Damier* mDamier;

};

