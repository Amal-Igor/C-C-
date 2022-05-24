#include "CVehicule.h"
#include "CVoiture.h"
#include "CMoto.h"
#include <list>
#include <vector>
#include <iterator>
#include <map>
using namespace std;


int main()
{
	
	//CVehicule veh;
	//veh.afficher();

	//CVoiture voit;
	//voit.afficher();

	//CMoto mot;
	//mot.afficher();

	//CVehicule tab[3];
	//tab[0] = veh;
	//tab[1] = voit;
	//tab[2] = mot;

	//cout << "statique" << endl;

	//for (int i = 0; i < 3; i++)
	//{
	//	tab[i].afficher();
	//}
	//
	//
	//cout << "dynamique" << endl;

	//CVehicule* pVeh = new CVehicule();
	//CVoiture* pVoit = new CVoiture();
	//CMoto* pMoto = new CMoto();

	//list<CVehicule*> maliste;
	//maliste.push_back(pVeh);
	//maliste.push_back(pVoit);
	//maliste.push_back(pMoto);
	//list<CVehicule*>::iterator iterList;
	//for (iterList = maliste.begin(); iterList != maliste.end(); ++iterList)
	//{	
	//	(*iterList)->afficher();
	//}

	//cout << endl << endl;

	//vector<CVehicule*> monVector;
	//monVector.push_back(pVeh);
	//monVector.push_back(pVoit);
	//monVector.push_back(pMoto);
	//vector<CVehicule*>::iterator iter;
	//for (iter = monVector.begin(); iter != monVector.end(); iter++)
	//{
	//	(*iter)->afficher();
	//}
	//cout << endl << endl;

	//for (int i = 0; i < monVector.size(); i++)
	//{
	//	monVector[i]->afficher();
	//}
	

	map<string, int> month_days;
	month_days.insert( pair<string, int>("janvier", 31));
	month_days.insert(pair<string, int>("février", 28));
	month_days.insert(pair<string, int>("mars", 30));
	month_days.insert(pair<string, int>("avril", 31));
	month_days.insert(pair<string, int>("mai", 30));
	month_days.insert(pair<string, int>("juin", 31));
	month_days.insert(pair<string, int>("juillet", 30));
	month_days.insert(pair<string, int>("aout", 31));
	month_days.insert(pair<string, int>("septembre", 30));
	month_days.insert(pair<string, int>("octobre", 31));
	month_days.insert(pair<string, int>("novembre", 30));
	month_days.insert(pair<string, int>("décembre", 31));

	map<string, int>::iterator iteratorMonth = month_days.begin();
	for (iteratorMonth = month_days.begin(); iteratorMonth != month_days.end(); ++iteratorMonth)
	{
		cout << iteratorMonth->first << " => " << iteratorMonth->second << '\n';
	}

	cout << month_days.at("janier") << endl;



	//CVehicule* pTab[3];
	//pTab[0] = pVeh;
	//pTab[1] = pVoit;
	//pTab[2] = pMoto;

	//for (int i = 0; i < 3; i++)
	//{
	//	pTab[i]->stop();
	//}

	//for (int i = 0; i < 3; i++)
	//{
	//	delete pTab[i];
	//}
	
}