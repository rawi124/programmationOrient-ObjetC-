#ifndef PROFESSEUR_H
#define PROFESSEUR_H
#include "personne.h"

class Professeur : public Personne
{
  private :
     string statut ;
     int heures ;
  public :
    Professeur(int,string,string,string);
    void affich();
    void Travailler(float);


};
#endif
