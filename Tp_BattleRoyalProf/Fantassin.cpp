#include "Fantassin.h"

//Fantassin::Fantassin()
//{
//	mVie = 0;
//	mAttaque = 0;
//	mPortee = 3;
//	mMobilite =1;
//	mBouclier =0;
//	mType = "Fantassin";
//	mDamier = NULL;
//}


Fantassin::Fantassin(Damier* map)
{
	mVie = 10;
	mAttaque = 3;
	mPortee = 3;
	mMobilite = 3;
	mBouclier = 0;
	mType = "Fantassin";
	mDamier = map;
}

int Fantassin::getVie()
{
	return mVie;
}
void Fantassin::setVie(int hp)
{
	mVie = hp;
}

int Fantassin::getAttack()
{
	return mAttaque;
}

void Fantassin::setAttack(int attack)
{
	mAttaque = attack;
}

int Fantassin::getPortee()
{
	return mPortee;
}
void Fantassin::setPortee(int portee)
{
	mPortee = portee;
}

int Fantassin::getMobilite()
{
	return mMobilite;
}
void Fantassin::setMobilite(int mob)
{
	mMobilite = mob;
}

int Fantassin::getBouclier()
{
	return mBouclier;
}
void Fantassin::setBouclier(int defense)
{
	mBouclier = defense;
}

string Fantassin::getType()
{
	return mType;
}
void Fantassin::setType(string type)
{
	mType = type;
}

void  Fantassin::attaquer()
{
	Fantassin* p = this;
	vector<Fantassin*> targets = mDamier->getPersoCible(p);
	int dmg = getAttack();


	if(targets.size() > 0)
	{ 
		for (int i = 0; i < targets.size(); i++)
		{	
			targets[i]->infligerDegats(dmg, "");

			cout << "J'attaque !!" << endl;
		}
	}
	
	else {
		cout << "Pas d'enemis je ne peux pas attaquer  !!!" << endl;
	}

}

void  Fantassin::deplacer()
{	

	//Fantassin* p = this;
	mDamier->deplacerPerso(this);
	cout << "Je me déplace !!" << endl;
}

void  Fantassin::infligerDegats(int attaque, string type)
{	

	this->setVie(getVie() - attaque);

}