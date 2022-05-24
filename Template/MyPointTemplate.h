#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;


template<class T>
class MyPoint
{
public:
	MyPoint<T>(T x=0, T y=0);
	MyPoint(const MyPoint<T>& pCopie);
	~MyPoint() {};


	void afficher() const;
	void deplace(T dx, T dy);
	void saisieConsole();


	void setmY(T y) { mY = y; };
	void setmX(T x) { mX = x; };

	 T getmY() const;
	 T getmX() const;

	 MyPoint<T> operator+(const MyPoint<T> p) const;
	 bool  operator==(const MyPoint<T> p) const;

protected:
	T mX;
	T mY;
};


template<class T>
MyPoint<T>::MyPoint(T x, T y)
{
	mX = x;
	mY = y;
}

template<class T>
void MyPoint<T>::afficher() const
{
	cout << "x:" << mX << " y:" << mY << endl;
}

template<class T>
T MyPoint<T>::getmX() const
{
	return  mX;
}

template<class T>
T MyPoint<T>::getmY() const
{
	return mY;
}

template<class T>
MyPoint<T> MyPoint<T>::operator+(const MyPoint<T> p) const
{
	MyPoint pResult(mX + p.getmX(), mY + p.getmY());
	return pResult;
}


template <class T>
bool MyPoint<T>::operator==(const MyPoint<T> p) const
{
	if (mX != p.mX)
		return false;
	if (mY != p.mY)
		return false;
	return true;
}

