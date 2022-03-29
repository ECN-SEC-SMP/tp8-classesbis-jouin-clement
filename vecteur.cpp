#include "vecteur.h"

Vecteur::Vecteur(){
  this->x = 0;
  this->y = 0;
}

Vecteur::Vecteur(int x, int y){
  this->x = x;
  this->y = y;
}

void Vecteur::operator+=(Vecteur const & v){
  this->x += v.x;
  this->y += v.y;
}

ostream& operator<<(ostream & s, Vecteur const & v){
  s << "(" << v.x << ", " << v.y << ")";
  return s;
}