#include "lion.h"
#include <cstdlib>

Lion::Lion(int maxX, int maxY, int x, int y) : Animal(maxX, maxY, x, y){
  
}
Lion::Lion(int maxX, int maxY) : Animal(maxX, maxY) {
  
}

void Lion::setAttaque(){
  //nothing
}

void Lion::deplacer(int maxX, int maxY){
  int x = rand() % 3 - 1;
  int y = rand() % 3 - 1;
  
  if((this->x + x) <= maxX && (this->x + x) >= 0){
    this->x += x;
  }

  if((this->y + y ) <= maxY  && (this->x + x) >= 0){
    this->y += y;
  }
}