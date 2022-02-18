#include <string>
#include <iostream>
using namespace std ;


#include "personne.h"
#include "etudiant1.h"
#include "professeur.h"
#include "matiere.h"
#include "etudiant2.h"

int main()
{
  Personne D(30,"Dorian","Gray");
  D = D.Vieillir();
  D.affich();
  Professeur S(50,"severus","Rogue","titulaire");
  S.Travailler(200);
  S.affich();
  Etudiant1 H(15,"Harry","Potter",4);
  float tab[4] = {12,9,15,14};
  Matiere M("Magie",3) , P("Potion",2) , d("Divination", 4), I("Info",1) ;
  Matiere mat[4] ;
  mat[0] = M ;
  mat[1] = P ;
  mat[2] = d ;
  mat[3] = I ;
  Etudiant2 ET(15,"Harry","Potter",4,mat);
  ET.AjouterNotes(tab);
  float m = ET.Moyenne_finale();
  cout<<"la moyenne finale est "<<m<<endl;
}
