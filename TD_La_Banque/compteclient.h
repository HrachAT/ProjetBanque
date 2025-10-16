#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H
#include "comptebancaire.h"
#include "compteepargne.h"
#include "menu.h"
#include <iostream>
#include <string>

using namespace std;

class CompteClient
{
private:
    CompteBancaire *compteBancaire;
    CompteEpargne *compteEpargne;
    string nom;
    int numero;
public:
    CompteClient(const string &_nom, int _numero);
    ~CompteClient();
    void OuvrirCompteEpargne();
    void GererCompteBancaire();
    void GererCompteEpargne();
};

#endif // COMPTECLIENT_H
