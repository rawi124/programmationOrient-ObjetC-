#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>

class Personne
{
  protected :
    string nom ;
    string prenom ;
    int age ;
  public :
    Personne(int,string,string);
    void affich();
    Personne& Vieillir();
};

#endif
