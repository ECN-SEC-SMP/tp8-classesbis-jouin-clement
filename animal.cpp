#include "animal.h"

Animal::Animal(int maxX, int maxY, int x, int y){
  this->position = new Vecteur();
  if(maxX >= x){
    this -> position -> x = x;
  } else {
    this-> position -> x = maxX;
  }

  if(maxY >= y){
    this -> position -> y = y;
  } else {
    this -> position -> y = maxY;
  }

  cout << "position : " << *(this->position) << endl;
}

Animal::Animal(int maxX, int maxY){
  this->position = new Vecteur();
  cout << "position : " << *(this->position) << endl;
}

int Animal::getX() const{
  return this->position->x;    
}

int Animal::getY() const{
    return this->position->y;
}

bool Animal::getVivant() const{
    return this->vivant;
}

void Animal::setVivant(bool v){
  this->vivant = v;
}