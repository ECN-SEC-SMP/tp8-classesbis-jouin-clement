#include <iostream>
#include "animal.h"

#ifndef loup_h
#define loup_h

class Loup : public Animal{
public :
  Loup(int maxX, int maxY, int x, int y);
  Loup(int maxX, int maxY);

  void setAttaque();
  void deplacer(int maxX, int maxY);
};

#endif