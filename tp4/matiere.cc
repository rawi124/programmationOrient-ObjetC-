#include <iostream>
using namespace std ;

#include "matiere.h"

Matiere::Matiere()
{
  nom = "" ;
  coef = 0 ;
}
Matiere::Matiere(string name,float co)
{
  nom = name ;
  coef = co ;
}
void Matiere::Affich()
{
  cout<<"la matiere "<<nom<<" a un coefficient "<<coef<<endl;
}
string Matiere::GetNom()
{
  return nom;
}
float Matiere::GetCoef()
{
  return coef;
}
