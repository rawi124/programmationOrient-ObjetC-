#include "Pile.h"
#include <iostream>
using namespace std ;
int main()
{
  int tab[5] = {1,7,5,3,9};
  Pile p(5,tab);
  p.afficher();
  p.empiler(6);
  p.afficher();
  p.depiler();
  p.afficher();
  return 0;
}
