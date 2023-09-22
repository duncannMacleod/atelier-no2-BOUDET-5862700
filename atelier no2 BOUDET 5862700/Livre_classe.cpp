#include <iostream>
#include "Livre_classe.h"
#include <Windows.h>
#include <vector>
#include <cctype>

using namespace std;

Livre::Livre(string titre, string auteur, float dispo) : titre(titre), auteur(auteur), dispo(dispo)
{

}   

bool enregisterL(vector<Livre>& bib)
{
    bib.push_back(*this);
    return true;
}

bool Livre::getDispo(string titre, string auteur, vector < Livre >& bib) const
{
    
}

bool Livre::empruntL(string titre, string auteur, vector < Livre >& bib)
{

}
