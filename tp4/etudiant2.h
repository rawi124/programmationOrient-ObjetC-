#ifndef ETUDIANT2_H
#define ETUDIANT2_H

#include "matiere.h"
#include "etudiant1.h"

class Etudiant2 : public Etudiant1
{
  private :
    Matiere * liste_matiere ;
  public :
    Etudiant2(int,string,string,int,Matiere*);
    Etudiant2(const Etudiant2 &);
    ~Etudiant2() ;
    void Affich();
    float Moyenne_finale();
    Etudiant2& operator=(const Etudiant2 &);
};
#endif
