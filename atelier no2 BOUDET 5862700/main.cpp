#include <iostream>
#include "Livre_classe.h"
#include <Windows.h>
#include <vector>

int main()
{
    SetConsoleOutputCP(1252);
    bool quit = false;
    int choix;
    vector < Livre > bib;
    do
    {
        cout << "bienvenue dans le gestionnaire de bibliothèque! que voulez vous faire?" << endl;
        cout << "1-enregistrer un nouveau livre" << endl << "2-vérifier la disponibilité d'un livre" << endl << "3-emprunter un nouveau livre" << "4-Quiter"<<endl;
        cin >> choix;
        switch (choix)
        {
        case 1:
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
            while (dispo!=1 && dispo!=0);
            
            Livre nvLivre(titre, auteur, dispo);
            if (nvLivre.enregisterL(bib))
                cout << "Livre enregistré avec succès !" << endl;
            else
                cout << "Erreur lors de l'enregistrement du livre." << endl;
            break;
        }
        case 2:

        default:
            break;
        }
    } while (quit == false);

    return 0;
}
