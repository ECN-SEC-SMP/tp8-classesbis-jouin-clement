#include <iostream>
#include "animal.h"

#ifndef ours_h
#define ours_h

class Ours : public Animal{
public :
  Ours(int maxX, int maxY, int x, int y);
  Ours(int maxX, int maxY);

  void setAttaque();
  void deplacer(int maxX, int maxY);
};

#endif