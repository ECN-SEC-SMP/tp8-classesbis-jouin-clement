#include "loup.h"
#include <cstdlib>

void Loup::setAttaque(){
  //nothing
}

void Loup::deplacer(int maxX, int maxY){
  int x = rand() % 1;
  int y = rand() % 1;
  
  if((this->x + x) <= maxX){
    this->x += x;
  }

  if((this->y + y) <= maxY){
    this->y += y;
  }
}