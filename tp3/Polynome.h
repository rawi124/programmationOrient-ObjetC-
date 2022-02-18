#ifndef POLYNOME_H
#define POLYNOME_H

class Polynome {
  private :
    int deg ;
    float * coeff ;
  public :
    Polynome();
    Polynome(int,float*);
    Polynome(const Polynome &);
    ~Polynome();
    Polynome & operator=(const Polynome &);

};

#endif
