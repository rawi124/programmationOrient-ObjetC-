#include <iostream>
using namespace std;

#include "Polynome.h"
#include "complexeDef.h"
#include "vecteurComplexe.h"
//static global , visible que dans fonction , interdit dans autre module
//static Complexe d(4,8);//variable locale a un fichier
//Complexe c(2,3) ;//variable global
int main(int argc , char*argv[])
{
  //static Complexe m(1,8);//variable locale a une fonction
  //Complexe t(5,4);//variable locale au main

  //float n = 5 , m = 1 ;
  //Complexe comp(n,m);
  //Complexe  C(comp);
  //float tab[5]={1,7,2,6,9};
  //Polynome p(4,tab);
  //cout<<comp.re<<endl;// on ne peut pas le faire c'est privé
  //cout<<C.re<<endl;// on ne peut pas le faire c'est privé
  ComplexeDef P(2,3),Q(2,3),R ;
  bool i = P == Q ;
  cout<<i<<endl;
  ComplexeDef r[2] ;
  r[0] = P ;
  r[1] = Q ;
  VecteurComplexe v(r,2);
  VecteurComplexe t(v);
  ifstream fic("data.txt");
  vecteurComplexe(fic);
  return 0 ;
}

/*
quand on fait Complexe c(2,3) en global et ensuite en fait la meme chose
Complexe c(2,3) en local a l interieur du main ,
la variable local a l interieur du main masque la global
comme python local global interne
*/
