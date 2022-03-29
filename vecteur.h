#include <iostream>

#ifndef vecteur_h
#define vecteur_h

using namespace std;

class Vecteur{
  public :
    int x, y;

    Vecteur();
    Vecteur(int x, int y);

    void operator+=(Vecteur const & v);
};

ostream& operator<<(ostream & s, Vecteur const & v);

struct listVecteur{
  listVecteur * suivant;
  listVecteur * precedent;
  Vecteur * valeur;
};

listVecteur * CreerElementVecteur(int x = 0, int y = 0);
void ajouterVecteur(Vecteur * v);
void afficherVecteurs(listVecteur * head);
listVecteur * chercherVecteur(Vecteur * v);
void retirerVecteur(Vecteur * v);

#endif