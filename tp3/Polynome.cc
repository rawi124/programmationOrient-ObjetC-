#include <iostream>
using namespace std ;
#include "Polynome.h"


Polynome::Polynome()
{
  deg = 0 ;
  coeff = NULL;
}
Polynome::Polynome(int d, float*t)
{
  deg = d+1 ;
  coeff = new float[deg];
  for(int i = 0 ; i < deg ; i++)
  {
    coeff[i] = t[i] ;
  }
}
Polynome::Polynome(const Polynome & P)
{
  deg = P.deg +1 ;
  //on fait ici P.deg +1 car un polynome de degre 5 par exemple
  // contient 6 element
  //exemple deg = 1
  //P(x) = a*x + a0 ; P contient 2 elements
  //sachant que son degre est 1
  coeff = new float[deg];
  for(int i = 0 ; i < deg ; i++)
      coeff[i] = P.coeff[i];
}

Polynome::~Polynome()
{
  delete[]coeff;
}

Polynome& Polynome::operator = (const Polynome & P)
{
  if(this != &P)
  {
    delete[]coeff;
    coeff = P.coeff +1 ;
    coeff = new float[deg];
    for(int i = 0 ; i < deg ; i++)
        coeff[i] = P.coeff[i];
  }
  return *this ;
}
