#include "CVehicule.h"
#include "CVoiture.h"
#include "CMoto.h"



int main()
{
	//CMoto moto; //, *pM = &moto
	//CVehicule vehicule;//, *pVehi = &vehicule
	//CVoiture voiture;//, *pVoit = &voiture


	//moto.afficher();
	//voiture.afficher();
	//vehicule.afficher();

	//CVehicule tabObj[3];
	//tabObj[0] = moto;
	//tabObj[1] = vehicule;
	//tabObj[2] = voiture;

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "Tableau statique : ";
	//	tabObj[i].afficher();
	//}


	CMoto* pM = new CMoto();
	CVoiture* pVoit = new CVoiture();
	CVehicule* pVehi = new CVehicule();


	//CVehicule* nPm = pM;
	//CVehicule* nPvoit = pVoit;
	//CVehicule* nPvehi = pVehi;


	CVehicule** dynArr =  new CVehicule*[3];
	dynArr[0] = pM;
	dynArr[1] = pVoit;
	dynArr[2] = pVehi;

	for (int i = 0; i < 3; i++)
	{
		cout << "Tableau de dynamique :: ";
		dynArr[i]->afficher();
	}

	for (int i = 0; i < 3; i++)
	{
		delete(dynArr[i]);

	}
		

	delete(pM);
	delete(pVoit);
	delete(pVehi);

	//delete(nPm);
	//delete(nPvoit);
	//delete(nPvehi);
;	//getchar();
	pM = 0;
	pVehi = 0;
	pVoit = 0;





	return 0;
}