#pragma once
#include "Fantassin.h"
#include <vector>
#include "MyPoint.h"
#include "Tools.h"
using namespace std;
#define DLLEXPORT  __declspec(dllexport)

extern "C"
{
	class Fantassin;

	class DLLEXPORT Damier
	{
	public:
		Damier(int l, int h);
		~Damier();
		bool setRandomPerso(Fantassin* p);
		int getLargeurGrille() { return mLargeur; }
		int getHauteurGrille() { return mHauteur; }
		int persosCount();
		void afficher();
		MyPoint getPosition(Fantassin* p);
		Fantassin* getPersonnage(MyPoint p);
		bool deplacerPerso(Fantassin*);
		vector<Fantassin*> getPersosCible(Fantassin*);
		void takeDeadPerso();


		//vector<vector<Fantassin*>> getGrille() { return mGrille; }

	private:
		vector<vector<Fantassin*>> mGrille;
		int mLargeur;
		int mHauteur;
	};
}
