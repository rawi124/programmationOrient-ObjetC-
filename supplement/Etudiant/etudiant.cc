#include<iostream>
#include <cstdlib>
using namespace std;
#include "etudiant.h"

Etudiant::Etudiant()
{
  nom = new char[50];
  prenom = new char[50];
  tab_note = new float[10];
  for (int i = 0 ; i < 10 ; i++)
    tab_note[i] = 0 ;
}
Etudiant::~Etudiant()
{

}

void Etudiant::affichage()
{
  for(int i = 0 ; i < 10 ; i++)
    cout<<"note  :"<<tab_note[i]<<endl;

}

float Etudiant::moyenne()
{
  float moy  = 0 ;
  for(int i = 0 ; i < 10 ; i ++)
    moy = moy +tab_note[i];
  return moy / 10 ;
}
int Etudiant::admis()
{
  if(moyenne()>=10)
    return 1 ;
  else
    return 0 ;
}
