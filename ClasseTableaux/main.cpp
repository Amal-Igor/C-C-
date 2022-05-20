#include "MonTableau.h"


int main()
{
	MonTableau t;
	MonTableau t2;
	t.setNom("Michel");
	t.append(5);
	t.append(16);
	t.append(32);
	t.append(50);


	t2.append(555);
	t2.append(16);
	t2.append(32);
	t2.append(50);
	cout << endl << endl;	cout << endl << endl;
	MonTableau t4;
	t4 = t + t2;
	t4.afficher();
	//t4.afficher();
	cout << endl << endl;	cout << endl << endl;


	//t.afficher();
	//cout << t.get(0) << endl;
	//t.afficher();
	//t.get(0);
	t.inserer(666, 1);
	//t.afficher();
	//t.supprimer(0);
	//t.afficher();

	//t.modifier(55, 0);
	t.afficher();

	cout << endl << endl;

	cout << (t == t2);

	cout << endl << endl;
	return 0;
}