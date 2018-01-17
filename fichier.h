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
void ecrire(){
	string p;
	char rep;
	FILE *f;
	bool reco = true;
	f=fopen("tptxt.txt","w");
	if (f==NULL){
		cout<<"cannot open file"<<endl;
		return;
	}

	do{
		cout<<"voulez vous ecrire un mot\n taper o pour oui"<<endl;
		cin>>rep;
		if (rep=='o'){
			cout<<"ecrire le mot a entrer"<<endl;
			cin>>p;
			p=p+' ';
			fwrite(&p,sizeof(string),1,f);
		}
	}while(rep=='o');
	fclose(f);
}
//void 
#pragma once