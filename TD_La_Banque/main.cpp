/**
    @file main.cpp
    @brief Utilistation du menu
    @version 1.0
    @author Hrach ATOMYAN
    @date 10/10/2025
*/

#include <iostream>
#include "menu.h"
#include "comptebancaire.h"

using namespace std;

int main()
{
    Menu monMenu("compteBancaire.txt");
    int choix;
    CompteBancaire monCompte(0);

    do{
        choix = monMenu.Afficher();
        switch (choix) {
        case 1:
            cout << "Solde: " << monCompte.consulterSolde()<< "€" << endl << endl;
            break;
        case 2:
            float montantDepo;
            cout << "Montant à déposer: ";
            cin >> montantDepo;
            monCompte.deposer(montantDepo);
            cout << "Solde: "  << monCompte.consulterSolde()<< "€" << endl << endl;
            break;
        case 3:
            float montantRetrait;
            cout << "Montant à retirer: ";
            cin >> montantRetrait;
            monCompte.retirer(montantRetrait);
            cout << "Solde: " <<  monCompte.consulterSolde()<< "€"<< endl << endl;
            break;
        default:
            break;
        }
    }while(choix!=4);
    return 0;
}
