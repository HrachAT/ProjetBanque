#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H


class CompteBancaire
{
protected:
    /** Le solde du compte bancaire */
    float solde;
public:
    CompteBancaire(const float _solde);
    void deposer(const float _montant);
    bool retirer(const float _montant);
    float consulterSolde();
};

#endif // COMPTEBANCAIRE_H
