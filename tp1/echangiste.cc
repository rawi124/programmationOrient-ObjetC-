#include "complexe.h"
#include <iostream>
using namespace std;

void permuter(int & a ,int & b)
{
      int tmp = a;
      a = b ;
      b = tmp ; 
}

void permuter(complexe & a, complexe & b)
{
    complexe tmp ;
    tmp = a;
    a = b ;
    b = tmp ; 

//si dans la fonction permuter on ne fait de reference 
//alors a et b ne seront pas permutés 
}
