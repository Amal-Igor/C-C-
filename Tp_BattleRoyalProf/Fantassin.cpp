#include "Fantassin.h"

Fantassin::Fantassin()
{
	mVie = 0;
	mAttaque = 0;
	mPortee = 10;
	mMobilite =1;
	mBouclier =0;
	mType = "";
	mDamier = NULL;
}


Fantassin::Fantassin(Damier* map)
{
	mVie = 0;
	mAttaque = 0;
	mPortee = 0;
	mMobilite = 0;
	mBouclier = 0;
	mType = "";
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