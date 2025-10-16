#include "compteepargne.h"

/**
 * @brief CompteEpargne::ModifierTaux
 * @param newTauxInteret
 */
void CompteEpargne::ModifierTaux(float newTauxInteret)
{
    tauxInteret = newTauxInteret;
}
/**
 * @brief CompteEpargne::CalculerInterets
 * @return
 */
float CompteEpargne::CalculerInterets()
{
    float calcul;
    calcul = solde*tauxInteret;
    return calcul;
}
/**
 * @brief CompteEpargne::CrediterInteret
 */
void CompteEpargne::CrediterInteret()
{
    solde+=CalculerInterets();
}
/**
 * @brief CompteEpargne::CompteEpargne
 * @param _solde
 * @param _tauxInteret
 */
CompteEpargne::CompteEpargne(float _solde, float _tauxInteret) :
    CompteBancaire(_solde), tauxInteret(_tauxInteret)
{

}
