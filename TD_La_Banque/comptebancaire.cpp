#include "comptebancaire.h"

/**
 * @brief CompteBancaire::CompteBancaire
 * @param _solde
 */
CompteBancaire::CompteBancaire(const float _solde):
    solde(_solde)
{

}
/**
 * @brief CompteBancaire::deposer
 * @param _montant
 */
void CompteBancaire::deposer(const float _montant)
{
    if (_montant >= 0){
        solde+=_montant;
    }
}
/**
 * @brief CompteBancaire::retirer
 * @param _montant
 * @return
 */
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
/**
 * @brief CompteBancaire::consulterSolde
 * @return
 */
float CompteBancaire::consulterSolde()
{
    return solde;
}
