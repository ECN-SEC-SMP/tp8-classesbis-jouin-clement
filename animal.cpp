#include "animal.h"

Aniaml::Animal(int maxX, int maxY, int x, int y){
  if(maxX >= x){
    this->x = x;
  } else {
    this->x = maxX;
  }

  if(maxY >= y){
    this->y = y;
  } else {
    this->y = maxY;
  }
}

Aniaml::Aniaml(int maxX, int maxY){
  this->x = 0;
  this->y = 0;
}

int Aniaml::getX() const{
  return this->x;    
}

int Aniaml::getY() const{
    return this->y;
}

bool Aniaml::getVivant() const{
    return this->vivant;
}

void Animal::setVivant(bool v){
  this->vivant = v;
}