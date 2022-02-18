#ifndef MATIERE_H
#define MATIERE_H
#include <string>

class Matiere
{
  private :
    string nom ;
    float coef ;
  public :
    Matiere();
    Matiere(string,float);
    void Affich();
    string GetNom();
    float GetCoef();
};

#endif
