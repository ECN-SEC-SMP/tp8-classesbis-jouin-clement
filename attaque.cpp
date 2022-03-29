#include "attaque.h"
#icnlude 'stdlib.h'

srand(time(NULL));

int attaque::getattaque() const{
  return this -> type;
}

//crée une attaque random(0-3)
attaque::attaque(){
  this -> type = random()%3
}

//crée une attaque spécifique
attaque::attaque(int a ){
  this -> type = a;
}

string getNomAttaque() {
  if ((this -> type) == 0){
    return "pierre";}
  else if ((this -> type) == 1){
      return "feuille";}
  else if ((this -> type) == 2){
      return "ciseau";}
}

//Choisi le gagnant 0 :pierre, 1: Feuille, 2: Ciseaux
bool resoudreAttaque(Attaque &a){
  int r;
  if ((this -> type) == 0){
    if (a == 0){
      r = random()%2;
      return r!=0}   
    if (a == 1){
      return true;}
    else if (a==2){
      return false;}
    }
  else if ((this -> type) == 1){
    if (a == 0){
      return false;}
    else if (a == 1){
      r = random()%2;
      return r!=0}   
    else if (a == 2){
      return true;}
  }
  else if ((this -> type) == 2){
    if (a == 0){
      return true;}
    else if (a == 1){
      return false;}
    else if (a == 2){
      r = random()%2;
      return r!=0}   
  }
}