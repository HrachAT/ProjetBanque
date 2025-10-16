#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "comptebancaire.h"

class CompteEpargne : public CompteBancaire
{
private:
    float tauxInteret;
public:
    CompteEpargne(float tauxInteret);
    CompteEpargne(float _solde=0.0, float _tauxInteret=0.03);

    void ModifierTaux(float newTauxInteret);
    float CalculerInterets();
    void CrediterInteret();
};

#endif // COMPTEEPARGNE_H
