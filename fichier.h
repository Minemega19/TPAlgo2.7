#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

using namespace std;

void EcrireFichier() {
	string p;
	char rep = 'o';
	string nomfic = "tptxt.txt";
	bool reco = true;
	FILE *fic = fopen(nomfic.c_str(), "w"); // Ouverture du fichier en ecriture ("w")
	if (fic == NULL) {
		cout << "Impossible d ouvrir le fichier" << endl;
		exit(1);
	}
	do {
		if (rep == 'o' || rep == 'O')
		{
			cout << "Ecrire un mot : "<<endl;
			cin >> p;
			p = p + ' ';
			fwrite(&p, sizeof(string), 1, fic);

			cout << endl << "Encore un mot ? (o/n) : ";
			cin >> rep;
		}
	} while (rep == 'o' || rep == 'O');
	fclose(fic);
}

void LireFichier() {
	string nomfic = "tptxt.txt";
	FILE *fic = fopen(nomfic.c_str(), "r"); // Ouverture du fichier en lecture
	string p;

	if (fic == NULL) {
		cout << "Le fichier n a pas pu etre lu"<<endl;
		system("PAUSE");
		exit(1); // Le code d erreur si le fichier ne peux pas etre lu
	}
	while (feof(fic) == false) // feof correspond à la fin du fichier
	{
		fread(&p, sizeof(string), 1, fic);
		cout << p;
	}
	fclose(fic);
}
#pragma once