#include "MonTableau.h"
#include <array>


int MonTableau::id = 0;

MonTableau::MonTableau()
{		//new int**();
	id = id + 1;
	mData = nullptr;
	mTaille = 0;
	mNom = "";
}

MonTableau::~MonTableau()
{	

	// penser à delete chacun des élément et le tableau.
	cout << "Je passe dans le destructeur" << endl;
}


MonTableau::MonTableau(const MonTableau& copie)
{
	
	mData = new int();
	memcpy(mData, copie.mData, copie.mTaille * sizeof(int));
	id++;
	mNom = copie.mNom;
	mTaille = copie.mTaille;
}

int MonTableau::getTaille() const
{	
	return mTaille;

}


void MonTableau::afficher() const
{
	if (mTaille == 0)
	{
		cout << mNom << " est vide " << endl;
	}

	else
	{
		for (int i = 0; i < mTaille; i++)
		{
			//*mData = *(mData + i);
			//cout << *mData << endl;
			cout << i << " -> " << mData[i] << endl;
			
		}
	}
}

void MonTableau::append(int value)
{
	//augmenter la taille de mon tableau mData
	// insérer data à la fin du tableau
	//incrémenter mTaille
	int nouvelletaille = mTaille + 1;
	int* tmp = new int[nouvelletaille];
	memcpy(tmp, mData, mTaille * sizeof(int));

	tmp[mTaille] = value; //tmp nouvelletaille-1 = value
	if (mData != nullptr) // Si tableau pas vide
	{
		delete[] mData;
	}

	mData = tmp;

	mTaille++;


}

string MonTableau::getNom() const
{
	return mNom;
}

void MonTableau::setNom(string n) {

	this->mNom = n;
}


int MonTableau::get(int index) const
{	
	if (index >= mTaille)
	{
		cout << "Il n'y a d'élément à cet index, le tableau contient :: " << getTaille() << " élément" << endl;
	}
	else {
		int tmp;
		for (int i = 0; i <= index; i++)
		{
			*mData = *(mData + i);
			tmp = mData[i];
		}
		int value = *mData;

		return tmp;
	}
	
}

void MonTableau::inserer(int value, int index)
{	
	int nouvelletaille = mTaille + 1;

	int* tmp2 = new int[nouvelletaille]; // nouveau tableau pour contenir le nouvel élément

	for (int i = 0; i < nouvelletaille; i++)
	{
		tmp2[i] = *mData;

		if (i == index)
		{
			*mData = *(mData + i);
			tmp2[index] = value;
		}
		
		*mData = *(mData + i);
	}
	
	mTaille += 1;

	mData = tmp2;
	
}

void MonTableau::supprimer(int index)
{
	int nouvelletaille = mTaille - 1;
	int* tmp = new int[nouvelletaille];
	memcpy(tmp, mData, mTaille * sizeof(int));
	int* tmp2 = new int[nouvelletaille];

	for (int i = 0; i < mTaille; i++)
	{	
		if (i == index) {
			delete(mData[i]);
			i--;
		}
		//*mData = *(mData + i);
		tmp2[i] = mData[i];
	}
	mTaille-=1;
	mData = tmp2;


}

void MonTableau::modifier(int value, int index)
{

	int* tmp = new int[mTaille];
	memcpy(tmp, mData, mTaille * sizeof(int));

	tmp[index] = value;

	mData = tmp;
}


bool MonTableau::operator==(const MonTableau& tab) const
{

	bool isEqual = false;
	if (tab.getTaille() != mTaille)
	{
		isEqual = false;
	}

	else {
		int count =0;
		for (int i = 0; i < mTaille; i++)
		{
			if (mData[i] != tab.mData[i])
			{
				count--;
			}
			count++;
		}
		if (count == mTaille-1) {
			isEqual = true;
		}
	}
	return isEqual;
}


MonTableau MonTableau::operator+(const MonTableau tab) const
{
	MonTableau t_new;
	
	int nouvelletaille = mTaille + tab.getTaille();
	memcpy(t_new.mData, t_new.mData, nouvelletaille * sizeof(int));
	//memcpy(tmp, mData, nouvelletaille * sizeof(int));

	if (mTaille == tab.getTaille())
	{
		for (int i = tab.getTaille(); i < nouvelletaille; i++)
		{
			while (i < mTaille)
			{
				t_new.append(mData[i]) ;
			}

			for (int j = 0; j < tab.getTaille(); j++)
			{
				t_new.append(tab.mData[j]);
			}
		}
	}

	return t_new;
}



//Montableau b;
//b = a
MonTableau& MonTableau::operator=(const MonTableau tab)
{
	//copie taille
	//copie nom
	mTaille = tab.mTaille;
	mNom = tab.mNom;
	int* tmp = new int[mTaille];
	memcpy(tmp, tab.mData, mTaille * sizeof(int));



	mData = tmp;
	return *this;

}