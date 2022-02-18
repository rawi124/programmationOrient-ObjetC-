#include <iostream>
using namespace std ;

#include"etudiant1.h"
#include"etudiant2.h"
#include"matiere.h"

Etudiant2::Etudiant2(int a ,string fname,string name,int n,Matiere * mat):Etudiant1(a,fname,name,n)
{
  liste_matiere = new Matiere[n] ;
  for(int i = 0 ; i < n ; i++)
    liste_matiere[i] = mat[i];
}
Etudiant2::Etudiant2(const Etudiant2 & P):Etudiant1(P)
{
  liste_matiere = new Matiere[P.nb_notes] ;
  for(int i = 0 ; i < P.nb_notes ; i++)
    liste_matiere[i] = P.liste_matiere[i];
}
Etudiant2::~Etudiant2()
{
  delete[]liste_matiere;
}
 void Etudiant2::Affich()
 {
   Etudiant1::affich_np();
   string ch ;
   for(int i = 0 ; i < nb_notes ; i++)
   {
    ch=liste_matiere[i].GetNom();
    cout<<"tu as obtenue a la matiere "<<ch<<" une note de "<<notes[i]<<endl;
   }
 }
float Etudiant2::Moyenne_finale()
{
  float moy = 0 ;
  float co ;
  float sCoe = 0 ;
  for(int i = 0 ; i < nb_notes ; i++)
  {
    co = liste_matiere[i].GetCoef();
    moy = moy + notes[i]*co ;
    sCoe = sCoe + co ;
  }
  return moy/sCoe ;
}
Etudiant2& Etudiant2::operator=(const Etudiant2 &E)
{
  if(this != &E)
  {
    delete[]liste_matiere ;
    liste_matiere = new Matiere[E.nb_notes];
    for(int i = 0 ; i < E.nb_notes;i++)
      liste_matiere[i] = E.liste_matiere[i];
  }
  return *this ;
}
