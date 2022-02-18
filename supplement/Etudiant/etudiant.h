#ifndef ETUDIANT_H
#define ETUDIANT_H


class Etudiant {
  private :
    char * nom ;
    char * prenom ;
    float * tab_note;
  public :
    Etudiant();
    Etudiant(char * ,char *,float *);
    ~Etudiant();
    void saisie () ;
    void affichage() ;
    float moyenne() ;
    int admis();
};

#endif
