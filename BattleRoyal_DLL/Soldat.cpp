#include "Soldat.h"

extern "C"
{
	Soldat::Soldat(Damier* d) : Fantassin(d)
	{
		mType = "Soldat";
		mRayonDeplacement = 3;
		mVie = 1;
		mAttaque = 130;
		mRayonAttaque = 3;
	}


	void Soldat::infligerDegat(int attaque, string type)
	{
		if (type == "Fantassin")
		{
			mVie = mVie - attaque / 2;
		}
	}


	void Soldat::attaquer()
	{
		vector<Fantassin*> tmp = mDamier->getPersosCible(this);
		for (int i = 0; i < tmp.size(); i++)
			tmp[i]->infligerDegat(mAttaque - 5 * i, mType);
	}
}