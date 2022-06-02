#include <map>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <functional>

using namespace std;


template<class T1, class T2> auto maximum(T1 a, T2 b) -> decltype(a > b ? a : b) 
{ 
	
	return  a > b ?  a :  b; 
}	

function<void(vector<int>)> afficheLesMultiplesDe(int m)
{
	function<void(vector<int>)> f = [m](vector<int> liste)
	{
		for (int a : liste)
			if (a % m == 0)
				return a;
	};
	return f;
}

void sommeDesMultiples()
{
	vector<int> const v = { 7, 1, 4, 0, -5, 10, 58, 50, 48, 51, 56 };

	int result = 0;

	auto f = [&result](vector<int> lst, int mult) 
	{	
		for (const int a : lst)
			if (a % mult == 0)
				result += a;
		; };

	f(v, 3);

	cout << result << endl;
}


enum Couleur {RED, GREEN, BLUE, RED};

int main()
{

	Couleur c = GREEN;
	
	sommeDesMultiples();


	vector<int> v = { 7, 1, 4, 0, -5, 10, 666, 777};
	auto f2 = afficheLesMultiplesDe(2);
	f2(v);



	auto lambdaAnyNeg = find_if(v.begin(), v.end(), [](int i) { return (i < 0); });
	
	if (lambdaAnyNeg != v.end())
	{
		cout << "La liste a un élément négatif" << endl;
	}

	int x = 3;
	
	
	//auto countSupZero = for_each(v.cbegin(), v.cend(), [](int i) { if (i > 0) cout << i << endl; });

	sort(v.begin(), v.end(), [](int i, int j) {return abs(i) < abs(j); });

	for_each(v.cbegin(), v.cend(), [](int i) { cout << i << endl; });

	//for (int i = 0, j = 0; i < 10, j < 5; j++, i++)
	//{
	//	cout << "i: " << i << "j: " << j << endl;
	//}

	//map<string, int>  mymap = { {"one", 1} , { "two", 2 }, { "three", 3} };

	//for (auto el : mymap)
	//{
	//	cout << el.first << el.second << endl;
	//}

	auto ggmin = maximum(13, 12.66);
	return 0;
}