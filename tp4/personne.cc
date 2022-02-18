#include <iostream>
using namespace std ;
#include <string>

#include "personne.h"

Personne::Personne(int ag , string name , string pren)
{
  age = ag ;
  nom = name ;
  prenom = pren ;

}

void Personne::affich()
{
  cout <<"l age est " << age;
  cout <<" le nom est " <<nom ;
  cout <<" le prenom est " <<prenom <<endl ;
}

      Personne& Personne::Vieillir()
{
  age = age + 1 ;
  return *this ;
}
