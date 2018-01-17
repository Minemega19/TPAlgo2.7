#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int CreerFich()
{
	string mon_fichier = "tptxt.txt";
	ifstream fichier(mon_fichier.c_str(), ios::in);
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
int EcrireFich() {
	ofstream fichier("tptxt.txt", ios::in | ios::trunc);
	string MaChaine;

	if (fichier)
	{
		cout << "Ajouter un mot" << endl;
		cin >> MaChaine;
		fichier << MaChaine;
		fichier.close();
	}
	else{
		cerr << "Impossible d'ouvrir le fichier !" << endl;
	}
	return 0;
}
#pragma once