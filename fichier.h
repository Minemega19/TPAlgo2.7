#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

void EcrireFichier() {
	string p;
	char rep;
	FILE *fic = fopen("tptxt.txt", "w"); // Ouverture du fichier et lecture ("w")
	bool reco = true;
	if (fic == NULL) {
		cout << "cannot open file" << endl;
		exit(1);
	}
	do {
		cout << "voulez vous ecrire un mot\n taper o pour oui" << endl;
		cin >> rep;
		if (rep == 'o') {
			cout << "ecrire le mot a entrer" << endl;
			cin >> p;
			p = p + ' ';
			fwrite(&p, sizeof(string), 1, fic);
		}
	} while (rep == 'o');
	fclose(fic);
}

void LireFichier() {
	FILE *fic = fopen("tptxt.txt", "r"); // Ouverture du fichier et lecture ("r")
	int lettre = 0;
	int i = 0;

	if (fic == NULL) {
		cout << "Le fichier n a pas pu etre lu"<<endl;
		system("PAUSE");
		exit(1); // Le code d erreur si le fichier ne peux pas etre lu
	}
	while (lettre != EOF) { // EOF correspond à la fin du fichier
		lettre = fgetc(fic); // lettre prend le caractere lu par fgetc dans le fichier
		printf("%c", lettre);
	}
	fclose(fic);
}
#pragma once