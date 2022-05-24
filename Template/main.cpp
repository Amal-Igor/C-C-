#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include "MyPointTemplate.h"
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
		
	MyPoint<int> p(8, 9);
	MyPoint<int> p2(8, 9);

	MyPoint<int> p3 = p + p2;
	p3.afficher();





	return 0;
}

