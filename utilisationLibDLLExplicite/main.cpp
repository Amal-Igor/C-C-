#include <iostream>
#include <Windows.h>

typedef int (*Add) (int, int); // On pose les pointeurs vers les fonctions qui nous intéressent
typedef int (*Sous) (int, int);

using namespace std;

int main()
{

	Add _Addition; // type == * sur fonction
	Sous _Soustraction;
	HINSTANCE hInstLibrary = LoadLibrary(L"LibrairieDynamique.dll");

	if (hInstLibrary != NULL)
	{
		_Addition = (Add)GetProcAddress(hInstLibrary, "addition"); // GetProcAdress prends le pointeur vers la DLL et le nom de la fonction en param
		_Soustraction = (Sous)GetProcAddress(hInstLibrary, "soustraction");

	
	if (_Addition != NULL) // Vérifier si il y a bien quelque chose
	{
		cout << "23 = 43 = ";
		cout << _Addition(23, 43);
		cout << endl;
	}
	if (_Soustraction != NULL)
	{	
		cout << _Soustraction(8, 4);
	}
	FreeLibrary(hInstLibrary); // Pour libérer la mémoire
	hInstLibrary = nullptr;
	}
	else
	{
		cout << "DLL Failed To Load!" << endl;
	}
}



