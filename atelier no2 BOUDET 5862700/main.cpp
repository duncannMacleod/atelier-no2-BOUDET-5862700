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
            Livre::enregisterL(bib);
            break;
        }
        case 2:

        default:
            break;
        }
    } while (quit == false);

    return 0;
}
