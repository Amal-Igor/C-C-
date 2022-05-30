#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include "MyPointTemplate.h"
#include "MonTableau.h"
using namespace std;


//addition
//soustraction

template <class T> T addition(T tA, T tB)
{
	T tRes = tA+tB;

	return tRes;
}

template <class T> T soustraction(T tA, T tB)
{
	T tRes = tA - tB;

	return tRes;
}


int main()
{	
	MonTableau<double> p;
	MonTableau<double> *p2= new MonTableau<double>();


	p.append(8.88);
	p2->append(8.88);
	bool test;

	cout << boolalpha << test << endl;
	//p2 = nullptr;
	//cout << boolalpha << (p2 == p) << endl;

	return 0;
}

