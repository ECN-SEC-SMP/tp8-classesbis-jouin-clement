#include <iostream>
#include "loup.h"
#include "lion.h"
#include "ours.h"
#include "vecteur.h"

#define MAXX 10
#define MAXY 10

using namespace std;

int main(){
  Loup * loup = new Loup(MAXX, MAXY, MAXX/2, MAXY/2);
  Lion * lion = new Lion(MAXX, MAXY, MAXX/2, MAXY/2);
  Ours * ours = new Ours(MAXX, MAXY, MAXX/2, MAXY/2);

  for(int i = 0; i < 1; i++){
    loup -> deplacer(MAXX, MAXY);
    cout << "loup position x :" << loup -> getX() << ", y : " << loup -> getY() << endl;

    lion -> deplacer(MAXX, MAXY);
    cout << "lion position x :" << lion -> getX() << ", y : " << lion -> getY() << endl;

    ours -> deplacer(MAXX, MAXY);
    cout << "ours position x :" << ours -> getX() << ", y : " << ours -> getY() << endl;
  }

  Vecteur * v1 = new Vecteur(1,2);
  Vecteur * v2 = new Vecteur(3,4);
  Vecteur * v3 = new Vecteur();

  *v3 += *v1;
  *v3 += *v2;

  cout << "v1 : " << *v1 << ", v2 : " << *v2 << ", v1 + v2 :" << *v3 << endl;
  
  return 0;
}