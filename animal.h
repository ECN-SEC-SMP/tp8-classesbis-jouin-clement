#include <iostream>
#include "vecteur.h"

#ifndef animal_h
#define animal_h

class Animal{
protected:
  Vecteur * position;
  bool vivant;

public:
  Animal(int maxX, int maxY, int x, int y);
  Animal(int maxX, int maxY);

  int getX() const;
  int getY() const;
  bool getVivant() const;

  void setVivant(bool v);
  bool attaque(Animal &a);
  virtual void setAttaque()=0;
  virtual void deplacer(int maxX, int maxY)=0;
};

#endif