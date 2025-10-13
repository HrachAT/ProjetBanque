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
#include "compteepargne.h"

using namespace std;

int main()
{
    Menu monMenu("compteEpargne.txt");
    int choix;
    CompteEpargne monCompte;

    do{
        choix = monMenu.Afficher();
        switch (choix) {
        case 1: //Consulter le solde
            cout << "Solde: " << monCompte.consulterSolde()<< "€" << endl << endl;
            break;
        case 2: //Effectuer un depot
            float montantDepo;
            cout << "Montant à déposer: ";
            cin >> montantDepo;
            monCompte.deposer(montantDepo);
            cout << "Solde: "  << monCompte.consulterSolde()<< "€" << endl << endl;
            break;
        case 3: //Effectuer un retrait
            float montantRetrait;
            cout << "Montant à retirer: ";
            cin >> montantRetrait;
            monCompte.retirer(montantRetrait);
            cout << "Solde: " <<  monCompte.consulterSolde()<< "€"<< endl << endl;
            break;
        case 4: //Calcul des interets
            cout << "Interets sur l'année : " << monCompte.CalculerInterets()<< endl;
        default:
            break;
        }
    }while(choix!=5);
    return 0;
}
