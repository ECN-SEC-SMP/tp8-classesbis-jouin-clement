#include "ours.h"
#include <cstdlib>

Ours::Ours(int maxX, int maxY, int x, int y) : Animal(maxX, maxY, x, y){
  
}
Ours::Ours(int maxX, int maxY) : Animal(maxX, maxY) {
  
}

void Ours::setAttaque(){
  //nothing
}

void Ours::deplacer(int maxX, int maxY){
  int x = rand() % 3 - 1;
  int y = rand() % 3 - 1;
  
  if((this->x + x) <= maxX && (this->x + x) >= 0){
    this->x += x;
  }

  if((this->y + y ) <= maxY  && (this->x + x) >= 0){
    this->y += y;
  }
}