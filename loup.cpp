#include "loup.h"
#include <cstdlib>

Loup::Loup(int maxX, int maxY, int x, int y) : Animal(maxX, maxY, x, y){
  
}
Loup::Loup(int maxX, int maxY) : Animal(maxX, maxY) {
  
}

void Loup::setAttaque(){
  //nothing
}

void Loup::deplacer(int maxX, int maxY){
  int x = rand() % 3 - 1;
  int y = rand() % 3 - 1;
  
  if((this-> position -> x + x) <= maxX && (this-> position -> x + x) >= 0){
    this-> position -> x += x;
  }

  if((this-> position -> y + y ) <= maxY  && (this-> position -> y+ x) >= 0){
    this->position -> y += y;
  }
}