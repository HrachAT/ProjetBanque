#include "compteclient.h"

using namespace std;

CompteClient::CompteClient(const string &_nom, int _numero) :
    nom(_nom), numero(_numero), compteEpargne(nullptr)
{
    compteBancaire = new CompteBancaire(0);
}

CompteClient::~CompteClient()
{
    delete compteBancaire;
    delete compteEpargne;
}

void CompteClient::OuvrirCompteEpargne()
{
    if (compteEpargne != nullptr)
    {
        cout << "L'ouverture d'un second compte épargne n'est pas autorisée" << endl;
    }else{
        float soldeDepart;
        cout << "Entrez le solde de départ : " << endl;
        cin >> soldeDepart;

        float tauxDepart;
        cout << "Entrez le taux d'interet : " << endl;
        cin >> tauxDepart;

        compteEpargne = new CompteEpargne(soldeDepart, tauxDepart);
        cout << "Compte épargne ouvert avec succès" << endl;
    }
}

void CompteClient::GererCompteBancaire()
{
    Menu monMenu("compteBancaire.txt");
    int choix;
    do{
        choix = monMenu.Afficher();
        switch (choix) {
        case 1: //Consulter le solde
            cout << "Solde: " << compteBancaire->consulterSolde()<< "€" << endl << endl;
            break;
        case 2: //Effectuer un depot
            float montantDepo;
            cout << "Montant à déposer: ";
            cin >> montantDepo;
            compteBancaire->deposer(montantDepo);
            cout << "Solde: "  << compteBancaire->consulterSolde()<< "€" << endl << endl;
            break;
        case 3: //Effectuer un retrait
            float montantRetrait;
            cout << "Montant à retirer: ";
            cin >> montantRetrait;
            compteBancaire->retirer(montantRetrait);
            cout << "Solde: " <<  compteBancaire->consulterSolde()<< "€"<< endl << endl;
            break;
        default:
            break;
        }
    }while(choix!=4);
}

void CompteClient::GererCompteEpargne()
{
    Menu monMenu("compteEpargne.txt");
    int choix;
    if (compteEpargne != nullptr)
    {
        do{
            choix = monMenu.Afficher();
            switch (choix) {
            case 1: //Consulter le solde
                cout << "Solde: " << compteEpargne->consulterSolde()<< "€" << endl << endl;
                break;
            case 2: //Effectuer un depot
                float montantDepo;
                cout << "Montant à déposer: ";
                cin >> montantDepo;
                compteEpargne->deposer(montantDepo);
                cout << "Solde: "  << compteEpargne->consulterSolde()<< "€" << endl << endl;
                break;
            case 3: //Effectuer un retrait
                float montantRetrait;
                cout << "Montant à retirer: ";
                cin >> montantRetrait;
                compteEpargne->retirer(montantRetrait);
                cout << "Solde: " <<  compteEpargne->consulterSolde()<< "€"<< endl << endl;
                break;
            case 4: //Calcul des interets
                cout << "Interets sur l'année : " << compteEpargne->CalculerInterets()<< endl;
                break;
            case 5:
                compteEpargne->CrediterInteret();
                cout << "Nouveau solde après crédit : " << compteEpargne->consulterSolde() << "€"<< endl;
                break;
            default:
                break;
            }
        }while(choix!=6);
    }
}
