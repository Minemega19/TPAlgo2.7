#include <iostream>
#include <fstream>

using namespace std;

int CreerFich()
{
	ifstream fichier("tptxt.txt", ios::in);

	if (fichier)
	{
		cout << "Fichier ouvert avec succes"<< endl;
		system("PAUSE");
		fichier.close();
	}
	else 
		cout << "Impossible d'ouvrir le fichier !" << endl;
	return 0;
}
int LireFich() {
	return 0;
}
#pragma once
