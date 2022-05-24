#include <stdlib.h>
#include <time.h>
#include "Ciel.h"
#include "Aeronef.h"
#include "Avion.h"
#include "Montgolfiere.h"
#include "Helicoptere.h"





//cette fonction renvoie une valeur entre min et max inclus
int myRand(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

int main()
{	
	srand(time(NULL)); //exécu

	//Avion* a = new Avion(8, 10);
	Avion* a2 = new Avion();

	Avion* a3 = new Avion();
	//Avion* a4 = new Avion(11, 15);
	//Avion* a4 = new Avion(11, 15);
	Ciel* c = new Ciel();
	bool move = true;


	/*
	Ciel* ciel = new Ciel();

	for (int i = 0; i < 10; i++)
	{
		ObjetVolant* o = new ObjetVolant(10, 10);
		ciel->addObjetVolant(o);
	}

	vector< ObjetVolant*> objets = ciel->objetsVolants();

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < objets.size(); j++)
		{
			objets[j]->updatepos();
		}

		cout << endl << endl;
		ciel->display();
	}

	for (int j = 0; j < objets.size(); j++)
	{
		delete objets[j];
	}

	delete ciel;
	*/

	Helicoptere* helico = new Helicoptere();

	helico->seDeplacer();

	//a3->seDeplacer();
		//c.addAeronef(a2);
		//c.addAeronef(a3);
		c->collisions();
	




	c->afficher();
	//c.collisions();

	//ae3.displayStatus();



	
	


}