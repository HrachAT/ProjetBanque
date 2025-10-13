#include "compteepargne.h"

void CompteEpargne::ModifierTaux(float newTauxInteret)
{
    tauxInteret = newTauxInteret;
}

float CompteEpargne::CalculerInterets()
{
    float calcul;
    calcul = solde*tauxInteret;
    return calcul;
}

CompteEpargne::CompteEpargne(float _tauxInteret, float _solde) :
    CompteBancaire(_solde), tauxInteret(_tauxInteret)
{

}
