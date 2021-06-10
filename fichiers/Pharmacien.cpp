#include "Pharmacien.h"
#include<fstream>
#include<string.h>

Pharmacien::Pharmacien(int id,string nom,string prenom){
	Identifiant=id;
	Nom=nom;
	Prenom=prenom;
}
int Pharmacien::getIdentifiant(){
	return Identifiant;
};
string Pharmacien::getNom(){
	return Nom;
};
string Pharmacien::getPrenom(){
	return Prenom;
};

void Pharmacien::setIdentifiant(int I){
Identifiant=I;
};
void Pharmacien::setNom(string n){
Nom=n;
};

void Pharmacien::setPrenom(string p){
Prenom=p;
}; 



void Pharmacien::afficher(){
	cout<<"Identifiant: "<<Identifiant<<endl;
	cout<<"Nom: "<<Nom<<endl;
	cout<<"Prenom: "<<Prenom<<endl;
	
	
	
};

istream &operator>>(istream &p,Pharmacien&g){
	ofstream file("Pharmaciens.txt",ios::app);
	if(file.bad())cout<<"Erreur d'ouverture fichier"<<endl;
	else{
		file<<g.Identifiant<<"/"<<g.Nom<<"/"<<g.Prenom<<endl;
	}
	
	
	
}



void Pharmacien::afficherListeMedicament(){
	ifstream file("medicament.txt",ios::in);
	if(file.bad()){
		cout<<"Erreur d'ouverture de fichier'"<<endl;
		
	}
	else{
		string  line;
		cout<<"code"<<"|"<<"nomc"<<"|"<<"DCI "<<"|"<<"quantite"<<"|"<<"prix_unite"
		<<"|"<<"Posologie"<<"|"<<"date_exp"<<"|"<<"nbrvente"<<endl<<endl;
		while(getline(file,line)){
			cout<<line<<endl;
			
//		  char ligne[200];//On cree une variable tempon
//		  strcpy(ligne,line.c_str());//On convertit line en char et on lui affecte a tempon
//	      char *tempon=strtok(ligne,"|");
//		  cout<<tempon<<"\t\t";
//		  tempon=strtok(NULL,"|");
//		  cout<<tempon<<"\t\t";
//		  tempon=strtok(NULL,"|");
//		  cout<<tempon<<"\t\t";
//		  tempon=strtok(NULL,"|");
//		  cout<<tempon<<"\t\t";
//		  tempon=strtok(NULL,"|");
//		  cout<<tempon<<"\t\t";
//		  tempon=strtok(NULL,"|");
//		  cout<<tempon<<"\t\t";
//		  tempon=strtok(NULL,"|");
//		  cout<<tempon<<"\t\t";
//		  tempon=strtok(NULL,"|");
//		  cout<<tempon<<endl;
		}
		
	}
	file.close();
}
