#include "MonTableau.h"

int MonTableau::id = 0; //initialisation obligatoire

MonTableau::MonTableau()
{
	id = id + 1;
	mData = nullptr; //NULL
	mTaille = 0;
	mNom = "Tableau";
}

MonTableau::MonTableau(const MonTableau& copie) //MonTableau b = a;
{												//MonTableau b(a);
	id = id + 1;
	//cout << "constructeur de copie" << endl;
	mTaille = copie.mTaille;
	mNom = copie.mNom;

	int* tmp = new int[mTaille];
	memcpy(tmp, copie.mData, mTaille * sizeof(int));
	mData = tmp;
}

MonTableau::~MonTableau()
{


}

int MonTableau::getTaille() const
{
	return mTaille;
}

void MonTableau::append(int value)
{
	//augmenter la taille de mon tableau mData
	//insérer data à la fin du tableau
	//incrémenter mTaille;
	int nouvelletaille = mTaille + 1;
	int* tmp = new int[nouvelletaille];
	memcpy(tmp, mData, mTaille * sizeof(int));
	tmp[mTaille] = value;//tmp[nouvelletaille-1] = value;
	if (mData != nullptr)
		delete[] mData; //on libere l'espace de l'ancien tableau
	mData = tmp;

	mTaille++; // mTaille = mTaille+1; 
}

void MonTableau::afficher() const
{
	if (mTaille == 0)
	{
		cout << mNom << " est vide" << endl;
	}
	else
	{
		cout << "Donnees de " << mNom << ":" << endl;
		for (int i = 0; i < mTaille; i++)
		{
			cout << i << " -> " << mData[i] << endl;
		}
	}
}

void MonTableau::supprimer(int index)
{
	if (index < 0 || index >= mTaille)
		return;

	int* tmp = new int[mTaille - 1];
	memcpy(tmp, mData, index * sizeof(int));
	//tmp = &tmp[0];
	memcpy(&tmp[index], &mData[index + 1], (mTaille - index) * sizeof(int));
	if (mData != nullptr)
		delete[] mData;
	mData = tmp;
	mTaille--;
}

void MonTableau::inserer(int value, int index)
{
	if (index < 0 || index >= mTaille)
		return;

	int nouvelletaille = mTaille + 1;
	int* tmp = new int[nouvelletaille];
	memcpy(tmp, mData, (index) * sizeof(int));
	tmp[index] = value;
	memcpy(&tmp[index + 1], &mData[index], (mTaille - index + 1) * sizeof(int));

	if (mData != nullptr)
		delete[] mData; //on libere l'espace de l'ancien tableau
	mData = tmp;
	mTaille++; // mTaille = mTaille+1; 
}

void MonTableau::modifier(int value, int index)
{
	if (index < 0 || index >= mTaille)
		return;

	mData[index] = value;
}

int MonTableau::get(int index) const
{
	if (index < 0 || index >= mTaille)
		return numeric_limits<int>::max();

	return mData[index];
}

bool MonTableau::operator==(const MonTableau& tab)const
{
	if (mTaille != tab.getTaille())
		return false;

	for (int i = 0; i < mTaille; i++)
	{
		if (mData[i] != tab.get(i))
			return false;
	}
	return true;
}

MonTableau MonTableau::operator+(const MonTableau tab) const
{
	MonTableau tmp;

	for (int i = 0; i < mTaille; i++)
		tmp.append(mData[i]);

	for (int i = 0; i < tab.getTaille(); i++)
		tmp.append(tab.get(i));

	tmp.setNom(mNom + tab.getNom());

	return tmp;
}


//MonTableau b;
//b.append(3);
//b = a;
MonTableau& MonTableau::operator=(const MonTableau tab)
{
	mTaille = tab.mTaille;
	mNom = tab.mNom;
	int* tmp = new int[mTaille];
	memcpy(tmp, tab.mData, mTaille * sizeof(int));

	if (mData != nullptr)
		delete[] mData; //on libere l'espace de l'ancien tableau

	mData = tmp;
	return *this;
}