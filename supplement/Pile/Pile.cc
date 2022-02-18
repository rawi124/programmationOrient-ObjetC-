#include "Pile.h"
#include <iostream>
using namespace std;

Pile::Pile()
{
  taille = 0 ;
  pil = NULL;
}

Pile::Pile(int n , int * tab)
{
  taille = n;
  pil = new int[n];
  for(int i = 0 ; i < taille ; i++)
    pil[i] = tab[i] ;
}
Pile::Pile(const Pile & P)
{
  taille = P.taille ;
  pil = new int[taille];
  for(int i = 0 ; i < taille ; i ++)
  {
    pil[i] = P.pil[i];
  }
}
Pile::~Pile()
{
  delete[]pil ;
}

void Pile::afficher()
{
  cout<<taille<<endl;
  for(int i = 0 ; i < taille ; i++)
    cout<<pil[i]<<" ";
  cout<<endl;
}

void Pile::empiler(int s)
{
  int * tmp = new int[taille+1];
  for(int i = 0 ; i < taille ; i++)
    tmp[i] = pil[i];
  tmp[taille] = s ;
  delete[]pil;
  taille = taille+1 ;
  pil = tmp ;
}

void Pile::depiler()
{
  int*tmp = new int[taille-1];
  for(int i = 0 ; i < taille-1 ; i++)
    tmp[i] = pil[i];
  delete[]pil;
  taille = taille - 1 ;
  pil = tmp ;
}
