#include <iostream>
using namespace std ;

#include "professeur.h"
#include "personne.h"


Professeur::Professeur(int ag , string name , string pren,string stat):Personne(ag,name,pren)
{
  heures = 0 ;
  statut = stat;
}
void Professeur::affich()
{
  Personne::affich();
  cout<<"le statut est : "<<statut<<" et le nombre d'heures est "<<heures<<endl;


}
void Professeur::Travailler(float h)
{
  heures = heures + h ;
}
