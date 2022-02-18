#ifndef PILE_H
#define PILE_H

class Pile {
  private :
    int taille ;
    int * pil ;
  public :
    Pile();
    Pile(int,int*);
    Pile(const Pile &);
    ~Pile();
    void afficher();
    void empiler(int);
    void depiler();

};
#endif
