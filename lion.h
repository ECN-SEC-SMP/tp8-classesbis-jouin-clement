#include <iostream>
#include "animal.h"

#ifndef lion_h
#define lion_h

class Lion : public Animal{
public :
  Lion(int maxX, int maxY, int x, int y);
  Lion(int maxX, int maxY);

  void setAttaque();
  void deplacer(int maxX, int maxY);
};

#endif