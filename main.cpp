#include <iostream>
#include "loup.h"

#define MAXX 10
#define MAXY 10

using namespace std;

int main(){
  Loup * loup = new Loup(MAXX, MAXY, MAXX/2, MAXY/2);

  for(int i = 0; i < 15; i++){
    loup -> deplacer(MAXX, MAXY);
    cout << "loup position x :" << loup -> getX() << ", y : " << loup -> getY() << endl;
  }
  
  return 0;
}