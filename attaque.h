#include <iostream>
#include "forme.h"
#include "point.h"

using namespace std;

attaque::attaque{
  private : 
  int type; // 0 :pierre, 1: Feuille, 2: Ciseaux

public : 
//Constructeur
attaque();
attaque(int a);//crée une attque spécifique

//Méthode
bool resoudreAttaque(Attaque &a) const;
string getNomAttaque() const
  
//Getters/Setters
int getAttaque() const;
 };
