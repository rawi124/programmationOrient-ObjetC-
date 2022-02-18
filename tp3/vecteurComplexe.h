#ifndef VECTEUR_COMPLEXE_H
#define VECTEUR_COMPLEXE_H

#include <fstream>
using namespace std ;

#include "complexeDef.h"

class VecteurComplexe
{
  private :
    ComplexeDef * VecComp ;
    unsigned short n ;
  public :
    VecteurComplexe ();
    VecteurComplexe (const ComplexeDef* , unsigned short);
    VecteurComplexe(const VecteurComplexe &);
    VecteurComplexe& operator = (const  VecteurComplexe&);
    ~VecteurComplexe();
    VecteurComplexe(ifstream&);
};


#endif
