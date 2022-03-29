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

listVecteur * CreerElementVecteur(int x = 0, int y = 0){
  listVecteur * element;
  element -> valeur = new Vecteur(x, y);
  return element;
}

void ajouterVecteur(listVecteur * head, Vecteur * v){
    if(v != nullptr){
      if(head -> suivant != nullptr){
        listVecteur * element = CreerElementVecteur(v -> x, v -> y);
        element -> precedent = head;
        head -> suivant = element;
      } else {
        ajouterVecteur(head -> suivant, v);
      }
    }
}

void afficherVecteurs(listVecteur * head){
 if(head != nullptr){
   cout << "("<< head -> valeur -> x << ", " << head -> valeur -> y <<")";
   if(head -> suivant != nullptr){
     cout <<", ";
     afficherVecteurs(head -> suivant);
   } else {
     cout << endl;
   }
 } 
}

listVecteur * chercherVecteur(listVecteur * head, Vecteur * v){
  if(head != nullptr){
    if(head -> valeur -> x == v -> x && head -> valeur -> y == v -> y ){
      return head;
    } else {
      return chercherVecteur(head -> suivant, v);
    }
  } else {
    return nullptr;
  }
}
void retirerVecteur(listVecteur * head, Vecteur * v){
  listVecteur * element = chercherVecteur(listVecteur)
}