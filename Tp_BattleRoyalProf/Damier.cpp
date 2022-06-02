#include "Damier.h"
//#include "Tools.h"



Damier::Damier()
{
	mLargeur = 0;
	mLongueur = 0;
	mGrille.resize(mLongueur, vector<Fantassin*>(mLargeur, NULL));

}

Damier::Damier(int largeur, int longueur)
{
	mLargeur = largeur;
	mLongueur = longueur;
	mGrille.resize(longueur, vector<Fantassin*>(largeur, NULL));
}

int Damier::getLargeur()
{
	return mLargeur;
}
void Damier::setLargeur(int largeur)
{
	mLargeur = largeur;
}
int Damier::getLongueur()
{
	return mLongueur;
}
void Damier::setLongueur(int longueur)
{
	mLongueur = longueur;
}

vector< vector<Fantassin*>> Damier::getDamier()
{
	return mGrille;
}

bool Damier::setRandomPerso(Fantassin* perso)
{
	bool isAdded = false;

	while (isAdded == false) {

		int row = myRand(0, mLargeur-1);
		int column = myRand(0, mLongueur-1);
		vector<Fantassin*> tmp = mGrille[row];
		//vector<Fantassin*>::iterator it = tmp.begin();
		//if (tmp[column] != NULL)
		//{
		//	//cout << "Pas de place à cet emplacement ::" << endl;
		//	return false;
		//}

		if (tmp[column] == NULL)
		{
			//tmp.insert(it+column, perso);
			tmp.at(column) = perso;
			isAdded = true;
			mGrille[row] = tmp;
			//vérifier si on doit delete l'ancienne ligne ou si  vector remaplce directement au niveau de la mémoire
			return true;
		}
	}
}


Fantassin* Damier::getPersonnage(MyPoint p)
{
	int row = p.getmX();
	int column = p.getmY();

	if (mGrille[row][column] != NULL)
	{
		return mGrille[row][column];
	}

	else
		cout << "Pas de joueurs à cette position" << endl;
		return NULL;
}


MyPoint Damier::getPosition(Fantassin* perso)
{

	MyPoint p;

	for (int i = 0; i < mLargeur; i++)
	{
		for (int j = 0; j < mLongueur; j++)
		{
 			if (mGrille[i][j] == perso)
			{
				p.setmX(i);
				p.setmY(j);
			}
		}
	}
	return p;
}

vector<Fantassin*> Damier::getPersoCible(Fantassin* perso)
{

	MyPoint p = getPosition(perso);
	vector<Fantassin*> tmp;
	int portee = perso->getPortee();
	MyPoint pTmp;
	


	for (int i = 0; i < mLargeur; i++)
	{
		for (int j = 0; j < mLongueur; j++)
		{

			if ((mGrille[i][j] != NULL))
			{
				pTmp = getPosition(mGrille[i][j]);

				if ( (p.getLongueur(pTmp) <= portee) && (mGrille[i][j] != perso))
				{
					tmp.push_back(mGrille[i][j]);
				}
			}
		}
	}
	return tmp;
}

bool Damier::deplacerPerso(Fantassin* perso)
{

	MyPoint p = getPosition(perso);
	vector<MyPoint> tmp;
	MyPoint pTmp;

	for (int i = 0; i < mLargeur; i++)
	{
		for (int j = 0; j < mLongueur; j++)
		{

			if (mGrille[i][j] == NULL && mGrille[i][j]!= perso)
			{
				
				pTmp.setmX(i);
				pTmp.setmY(j);

				if (p.getLongueur(pTmp) <= perso->getMobilite()+1)
				{
					tmp.push_back(pTmp);
				}
			}
		}
	}

	if (tmp.size() == 0)
	{
		return false;
	}

		int randPos = myRand(0, tmp.size() -1);
		MyPoint newPos(tmp[randPos]);
		mGrille[newPos.getmX()][newPos.getmY()] = perso; // vérifier si x/y i/j
		mGrille[p.getmX()][p.getmY()] == NULL;


		return true;
}

void Damier::afficher()
{
	for (int i = 0; i < mLargeur; i++)
	{
		for (int j = 0; j < mLongueur; j++)
		{
			if (mGrille[i][j] != NULL)
			{
				cout << "Il y a un personnage  en i:" << i << " j :: " << j << endl;
			}
		}
	}
}


//bool Damier::deplacerPerso(Fantassin* perso)
//{
//	MyPoint p = getPosition(perso);
//	p.afficher();
//	int mobilite = perso->getMobilite();
//
//	int checkBorderLowX = p.getmX() - mobilite;
//	int checkBorderMaxX = p.getmX() + mobilite;
//
//	int checkBorderLowY = p.getmY() - mobilite;
//	int checkBorderMaxY = p.getmY() + mobilite;
//
//	if (checkBorderLowX < 0)
//		checkBorderLowX = getmod(checkBorderLowX, mLargeur);
//	if (checkBorderLowY < 0)
//		checkBorderLowY = getmod(checkBorderLowY, mLongueur);
//	if (checkBorderMaxX > mLargeur)
//		checkBorderMaxX = getmod(checkBorderMaxX, mLargeur);
//	if (checkBorderMaxY > mLongueur)
//		checkBorderMaxY = getmod(checkBorderMaxY, mLongueur);
//
//	p.setmX(myRand(checkBorderLowX, checkBorderMaxX));
//	p.setmY(myRand(checkBorderLowY, checkBorderMaxY));
//	if (getPersonnage(p) == NULL) // nullptr???
//	{
//		mGrille[p.getmX()][p.getmY()] = perso;
//		p.afficher();
//		return true;
//	}
//}



void Damier::removeDeadPerso()
{
	for (int i = 0; i < mLargeur; i++)
	{
		for (int j = 0; j < mLongueur; j++)
		{
			if (mGrille[i][j] != NULL && mGrille[i][j]->getVie() <= 0)
			{	
				//
				mGrille[i][j] = NULL;
				//delete mGrille[i][j];
			}
		}
	}
}


int Damier::persoCount()
{	
	int count= 0;
	for (int i = 0; i < mLargeur; i++)
	{
		for (int j = 0; j < mLongueur; j++)
		{
			if (mGrille[i][j] != NULL)
			{
				count++;
			}
		}
	}

	return count;
}




/*
vector<Fantassin*> Damier::getPersoCible(Fantassin* perso)
{

	MyPoint p = getPosition(perso);

	//Fantassin *pFant = getPersonnage(p);
	vector<Fantassin*> tmp;
	int portee = perso->getPortee();

	int checkBorderLowX = p.getmX() - portee;
	int checkBorderMaxX = p.getmX() + portee;

	int checkBorderLowY = p.getmY() - portee;
	int checkBorderMaxY = p.getmY() + portee;


	if (checkBorderLowX < 0)
		checkBorderLowX = getmod(checkBorderLowX, mLargeur);
	if (checkBorderLowY < 0)
		checkBorderLowY = getmod(checkBorderLowY, mLongueur);
	if (checkBorderMaxX > mLargeur)
		checkBorderMaxX = getmod(checkBorderMaxX, mLargeur);
	if (checkBorderMaxY > mLongueur)
		checkBorderMaxY = getmod(checkBorderMaxY, mLongueur);


	MyPoint tmpP;

	if (portee >= (mLargeur * mLongueur))
	{
		//vector< vector<Fantassin*> >::iterator row;
		//vector<Fantassin*>::iterator col;
		for (auto i= mGrille.begin(); i < mGrille.end(); i++) {
			for (auto j = i->begin(); j < i->end(); j++) {
				if (*j != perso) {
					tmp.push_back(*j);
				}

			}
		}
	}

	for (int i = min(checkBorderLowX, checkBorderMaxX); i < max(checkBorderLowX, checkBorderMaxX); i++)
	{
		for (int j = min(checkBorderLowY, checkBorderMaxY); j < max(checkBorderLowY, checkBorderMaxY); j++)
		{
			if (mGrille[i][j] != NULL && mGrille[i][j]!= perso)
			{
				tmpP.setmX(i);
				tmpP.setmY(j);
				cout << "NbEnemis a coté :  " << tmp.size() << endl;
				tmp.push_back(getPersonnage(tmpP));
			}
		}
	}




	return tmp;
}*/








