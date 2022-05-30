#pragma once
#pragma once
#include <iostream>
#include <string>
#include <limits>
#include <type_traits>
using namespace std;


template<class T>
class MonTableau
{
	//new delete memcpy sizeof

public:
	MonTableau(); //1
	~MonTableau();
	MonTableau(const MonTableau<T>& copie);//

	int getTaille() const; //2
	string getNom() const; //
	void setNom(string n); //
	void append(T value); //3
	void afficher() const; //
	void supprimer(int index);
	void inserer(T value, int index);//
	void modifier(T value, int index); //
	T get(int index, bool* ret) const; //
	bool operator==(const MonTableau<T>& tab) const; //
	MonTableau<T> operator+(const MonTableau<T> tab) const;
	MonTableau<T>& operator= (const MonTableau<T> tab);


private:
	T* mData;//0x555222111
	int mTaille;
	string mNom;

	static int id; //variable statique partagée entre tous les objets de type MonTableau
};

template<class T>
int MonTableau<T>::id = 0;

template<class T>
MonTableau<T>::MonTableau()
{
	id = id + 1;
	mData = nullptr; //NULL
	mTaille = 0;
	mNom = "Tableau";
}

template<class T>
MonTableau<T>::MonTableau(const MonTableau<T>& copie) //MonTableau b = a;
{												//MonTableau b(a);
	id = id + 1;
	//cout << "constructeur de copie" << endl;
	mTaille = copie.mTaille;
	mNom = copie.mNom;

	T* tmp = new T[mTaille];
	memcpy(tmp, copie.mData, mTaille * sizeof(T));
	mData = tmp;
}

template<class T>
MonTableau<T>::~MonTableau()
{		
		//T *var;
		//for (int i = 0; i < mTaille; i++) {
		//  var = *this->get(i);
		//  delete[] var;
		//}
		
	cout << "Je passe dans le destructeur !!" << endl;
}

template<class T>
int MonTableau<T>::getTaille() const
{
	return mTaille;
}

template<class T>
string MonTableau<T>::getNom() const
{
	return mNom;
}

template<class T>
void  MonTableau<T>::setNom(string n)
{
	mNom = n;
}

template<class T>
void MonTableau<T>::append(T value)
{
	//augmenter la taille de mon tableau mData
	//insérer data à la fin du tableau
	//incrémenter mTaille;
	int nouvelletaille = mTaille + 1;
	T* tmp = new T[nouvelletaille];
	memcpy(tmp, mData, mTaille * sizeof(T));
	tmp[mTaille] = value;//tmp[nouvelletaille-1] = value;
	if (mData != nullptr)
		delete[] mData; //on libere l'espace de l'ancien tableau
	mData = tmp;

	mTaille++; // mTaille = mTaille+1; 
}

template<class T>
void MonTableau<T>::afficher() const
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

template<class T>
void MonTableau<T>::supprimer(int index)
{
	if (index < 0 || index >= mTaille)
		return;

	T* tmp = new T[mTaille - 1];
	memcpy(tmp, mData, index * sizeof(T));
	//tmp = &tmp[0];
	memcpy(&tmp[index], &mData[index + 1], (mTaille - index) * sizeof(T));
	if (mData != nullptr)
		delete[] mData;
	mData = tmp;
	mTaille--;
}

template<class T>
void MonTableau<T>::inserer(T value, int index)
{
	if (index < 0 || index >= mTaille)
		return;

	int nouvelletaille = mTaille + 1;
	T* tmp = new T[nouvelletaille];
	memcpy(tmp, mData, (index) * sizeof(T));
	tmp[index] = value;
	memcpy(&tmp[index + 1], &mData[index], (mTaille - index + 1) * sizeof(T));

	if (mData != nullptr)
		delete[] mData; //on libere l'espace de l'ancien tableau
	mData = tmp;
	mTaille++; // mTaille = mTaille+1; 
}

template<class T>
void MonTableau<T>::modifier(T value, int index)
{
	if (index < 0 || index >= mTaille)
		return;

	mData[index] = value;
}	

template <class T>
T MonTableau<T>::get(int index, bool* ret) const
{
	if (index < 0 || index >= mTaille)
	{
		if (ret != NULL)
			*ret = false;
		if (is_arithmetic_v<T>)
			return 0;
		else
			return T();//choix    return CVehicule()    return double()
	}

	if (ret != NULL)
		*ret = true;
	return mData[index];
}

template<class T>
bool MonTableau<T>::operator==(const MonTableau<T>& tab)const
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

template<class T>
MonTableau<T> MonTableau<T>::operator+(const MonTableau<T> tab) const
{
	MonTableau<T> tmp;

	for (int i = 0; i < mTaille; i++)
		tmp.append(mData[i]);

	for (int i = 0; i < tab.getTaille(); i++)
		tmp.append(tab.get(i));

	tmp.setNom(mNom + tab.getNom());

	return tmp;
}

template<class T>
MonTableau<T>& MonTableau<T>::operator=(const MonTableau<T> tab)
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
