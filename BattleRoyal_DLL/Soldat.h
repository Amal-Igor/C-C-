#pragma once
#include "Fantassin.h"
#define DLLEXPORT __declspec(dllexport)


extern "C"
{
	class DLLEXPORT Soldat : public Fantassin
	{
	public:
		Soldat(Damier* d);

		virtual void infligerDegat(int attaque, string type);
		virtual void attaquer();
	};
}
