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

#endif