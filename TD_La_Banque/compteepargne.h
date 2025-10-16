#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "comptebancaire.h"

class CompteEpargne : public CompteBancaire
{
private:
    float tauxInteret;
public:
    CompteEpargne(float _tauxInteret=0.03, float _solde=0.0);

    void ModifierTaux(float newTauxInteret);
    float CalculerInterets();
    void CrediterInteret();
};

#endif // COMPTEEPARGNE_H
