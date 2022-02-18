#ifndef ETUDIANT1_H
#define ETUDIANT1_H

#include "personne.h"

class Etudiant1 : public Personne
{
  protected :
    int nb_notes ;
    float * notes ;
  public :
    Etudiant1(int,string,string,int);
    Etudiant1(const Etudiant1 &);
    ~Etudiant1();
    void AjouterNotes(float*);
    void affich();
    void affich_np();
    float moyenne();
    Etudiant1& operator=(const Etudiant1 &);

};
#endif
