#include <iostream>
#include "Livre_classe.h"
#include <Windows.h>
#include <vector>
#include <cctype>

using namespace std;

Livre::Livre(string titre, string auteur, float dispo) : titre(titre), auteur(auteur), dispo(dispo)
{

}   

static bool enregisterL(vector<Livre>& bib)
{
    string titre, auteur;
    bool dispo;
    cout << "Entrez le titre : ";
    cin >> titre;
    cout << "Entrez l'auteur : ";
    cin >> auteur;
    cout << "Le livre est-il disponible (1 pour oui, 0 pour non) : ";
    do
        cin >> dispo;
    while (dispo != 1 && dispo != 0);

    bib.push_back(Livre(titre, auteur, dispo));
    return true;
}

bool Livre::getDispo(string titre, string auteur, vector < Livre >& bib) const
{
    return true;
}

bool Livre::empruntL(string titre, string auteur, vector < Livre >& bib)
{
    return true;
}
