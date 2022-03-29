#include <iostream>
#include "animal.h"

#ifndef loup_h
#define loup_h

class Loup : public Animal{
public :
  void setAttaque();
  void deplacer(int maxX, int maxY);
}

#endif