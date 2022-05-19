#include "banque.h"
#include <stdio.h>
#define MAXCLIENTS 50

void determineArrLength(int a[]) {

}

int main()
{		
		cpt listeClients[3]; //sizeof (cpt)*3
		size_t n = sizeof(listeClients) / sizeof(cpt);

		//printf_s("\n La taille du tableau = %zu", n);
		
		//for (int i = 0; i < (int) n; i++)
		//{
		//	listeClients[i] = creerCompteBancaire();
		//}

		//for (int i = 0; i < (int)n; i++)
		//{
		//	 printCpt(listeClients[i]);
		//}

		for (int i = 0; i < MAXCLIENTS; i++)
		{
			listeClients[i] = creerCompteBancaire();
		}

		for (int i = 0; i < MAXCLIENTS; i++)
		{
			 printCpt(listeClients[i]);
		}




		return 0;
}