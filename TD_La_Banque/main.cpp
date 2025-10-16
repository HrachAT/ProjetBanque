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
#include "compteclient.h"

using namespace std;

int main()
{
    //     Menu monMenu("compteEpargne.txt");
    //     int choix;
    //     CompteEpargne monCompte;

    // }
    //     do{
    //         choix = monMenu.Afficher();
    //         switch (choix) {
    //         case 1: //Consulter le solde
    //             cout << "Solde: " << monCompte.consulterSolde()<< "€" << endl << endl;
    //             break;
    //         case 2: //Effectuer un depot
    //             float montantDepo;
    //             cout << "Montant à déposer: ";
    //             cin >> montantDepo;
    //             monCompte.deposer(montantDepo);
    //             cout << "Solde: "  << monCompte.consulterSolde()<< "€" << endl << endl;
    //             break;
    //         case 3: //Effectuer un retrait
    //             float montantRetrait;
    //             cout << "Montant à retirer: ";
    //             cin >> montantRetrait;
    //             monCompte.retirer(montantRetrait);
    //             cout << "Solde: " <<  monCompte.consulterSolde()<< "€"<< endl << endl;
    //             break;
    //         case 4: //Calcul des interets
    //             cout << "Interets sur l'année : " << monCompte.CalculerInterets()<< endl;
    //             break;
    //         case 5:
    //             monCompte.CrediterInteret();
    //             cout << "Nouveau solde après crédit : " << monCompte.consulterSolde() << "€"<< endl;
    //             break;
    //         default:
    //             break;
    //         }
    //     }while(choix!=6);
    //     return 0;

    Menu monMenu("compteClient.txt");
    int choix;
    CompteClient Albert("Albert", 1);
    do{
        choix = monMenu.Afficher();
        switch (choix) {
        case 1://Ouvrir un compte Epargne
            Albert.OuvrirCompteEpargne();
            Menu::AttendreAppuiTouche();
            break;
        case 2://Gerer le compte Bancaire
            Albert.GererCompteBancaire();
            Menu::AttendreAppuiTouche();
            break;
        case 3://Gerer le compte Epargne
            Albert.GererCompteEpargne();
            Menu::AttendreAppuiTouche();
            break;
        case 4:
            break;
        }
    }while(choix!=4);
    return 0;
}
