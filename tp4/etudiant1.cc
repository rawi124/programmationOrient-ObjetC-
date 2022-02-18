#include <iostream>
using namespace std ;

#include "etudiant1.h"
#include "personne.h"

Etudiant1::Etudiant1(int a,string n,string p,int nb):Personne(a,n,p)
{
  nb_notes = nb ;
  notes = new float[nb_notes];
  for(int i = 0 ; i < nb_notes ; i++)
    notes[i] = 0 ;
}
Etudiant1::Etudiant1(const Etudiant1 & E):Personne(E)
{
  nb_notes = E.nb_notes ;
  notes = new float[nb_notes];
  for(int i = 0 ; i < nb_notes ; i++)
    notes[i] = E.notes[i];
}
Etudiant1::~Etudiant1()
{
  delete[]notes;
}
void Etudiant1::AjouterNotes(float*tab)
{
  for(int i = 0 ; i < nb_notes ; i++)
    notes[i] = tab[i];
}
void Etudiant1::affich()
{
  cout<<"le nom est "<<nom<<" et le prenom est "<<prenom<<endl ;
  for(int i = 0 ; i < nb_notes ; i++)
    cout<<"le note "<<i<<" est "<<notes[i]<<endl ;
}
float Etudiant1::moyenne()
{
  float moy ;
  for(int i = 0 ; i < nb_notes ; i++)
    moy = moy + notes[i];
  return moy /nb_notes ;
}
void Etudiant1::affich_np()
{
  cout<<"le nom est "<<nom<<" et le prenom est "<<prenom<<endl ;
}
Etudiant1& Etudiant1::operator=(const Etudiant1 & E)
{
  if (this != & E)
  {
    delete[]notes;
    nb_notes = E.nb_notes;
    notes = new float[nb_notes];
    for(int i = 0 ; i < nb_notes ; i++)
      notes[i] = E.notes[i];
  }
  return *this ;
}
