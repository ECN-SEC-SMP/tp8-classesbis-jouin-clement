#include <iostream>

#ifndef animal_h
#define animal_h

class Animal{
private:
  int x, y; //position
  bool vivant;

public:
  Animal(int maxX, int maxY, int a, int b);
  Aniaml(int maxX, int maxY);

  int getX() const;
  int getY() const;
  bool getVivant() const;

  void setVivant(bool v);
  bool attaque(Animal &a);
  virtual void setAttaque();
  virtual void deplacer(int maxX, int maxY);
};

#endif