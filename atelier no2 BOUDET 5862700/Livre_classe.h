#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Livre
{
private:
	string titre;
	string auteur;
	bool dispo;
public:
	Livre(string titre, string auteur, float dispo=true);
	bool enregisterL(vector<Livre>& bib);
	bool empruntL(string titre, string auteur, vector < Livre >& bib);
	bool getDispo(string titre,string auteur, vector < Livre >& bib) const;
};