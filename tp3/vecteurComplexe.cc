#include <iostream>
using namespace std ;
#include "vecteurComplexe.h"
#include "complexeDef.h"


VecteurComplexe::VecteurComplexe ()
{
  VecComp = NULL;
  n = 0 ;
}
VecteurComplexe & VecteurComplexe::operator =(const  VecteurComplexe& C)
{
  if (this != &C)
  {
    delete[]VecComp;
    n = C.n ;
    VecComp = new ComplexeDef[n];
    for(int i = 0 ; i < n ; i++)
      VecComp[i] = C.VecComp[i];
    }
    return (*this) ;
}

VecteurComplexe::VecteurComplexe(const ComplexeDef * r, unsigned short l)
{
  n = l ;
  VecComp = new ComplexeDef[n];
  for(int i = 0 ; i < n ; i++)
    VecComp[i] = r[i];
}

VecteurComplexe::VecteurComplexe(const VecteurComplexe & T)
{
  n = T.n ;
  VecComp = new ComplexeDef[n];
  for(int i = 0 ; i < n ; i++)
    VecComp[i] = T.VecComp[i];
}

VecteurComplexe::~VecteurComplexe()
{
  delete[]VecComp;
}

VecteurComplexe::VecteurComplexe(ifstream & f)
{
  f >> n ;
  vec = new ComplexeDef[n];
  float a , b ;
  for (int i = 0 ; i < n ; i++)
  {
    f >> a ;
    f >> b ;
    VecComp[i] = ComplexeDef(a,b);
  }
}
