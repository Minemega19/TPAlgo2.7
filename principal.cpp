#include <iostream>
#include "outils.h"
#include "declaration.h"
using namespace std;
int main()
{
	int exo;
	void bibliotheque2();
	void gestionListe();
	void gestionFichier();

	do {
		saisirControleEntierBorne("\n1 -Bibliotheque \n2 -Liste \n3 -Fichier \n4 -Quitter", 0,54, exo);
		switch (exo)
		{
		case 1:
			bibliotheque2();
			break;
		case 2:
			gestionListe();
			break;
		case 3:
			gestionFichier();
			break;
		case 4:
			cout << "Quitter" << endl;
			break;

		default:
			cout << "Quitter" << endl;
			break;
		}
	} while (exo != 3);
	system("pause");
	return 0;
}