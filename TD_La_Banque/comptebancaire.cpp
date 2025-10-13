#include "comptebancaire.h"


CompteBancaire::CompteBancaire(const float _solde):
    solde(_solde)
{

}

void CompteBancaire::deposer(const float _montant)
{
    if (_montant >= 0){
        solde+=_montant;
    }
}

bool CompteBancaire::retirer(const float _montant)
{
    // bool retour = false;
    // if (solde >= _montant){
    //     solde -= _montant;
    //     retour = true;
    // }
    // return retour;

    bool ok=false;
    if (_montant <= solde && _montant >= 0)
    {
        solde -= _montant;
        ok=true;
    }
    return ok;
}

float CompteBancaire::consulterSolde()
{
    return solde;
}
