#include <set>
#include <iostream>
#include <map>

using namespace std;


int main()
{	


	set<int> int1;

	int1.insert(75);
	int1.insert(23);
	int1.insert(65);
	int1.insert(42);
	int1.insert(13);
	int1.insert(100);

	set<int>::iterator int1_it = int1.begin();
	for (int1_it; int1_it != int1.end(); int1_it++)
	{
		cout << (*int1_it) << endl;
	}

	cout << endl << endl << endl;

	set<int> int2;

	int2.insert(75);
	int2.insert(23);
	int2.insert(75);
	int2.insert(23);
	int2.insert(13);

	cout << int2.size() << endl;
	set<int>::iterator int2_it = int2.begin();
	//for (int2_it; int2_it != int2.end(); int2_it++)
	//{
	//	cout << (*int2_it) << endl;
	//}

	return 0;
}