#include "point.h"
#include <iostream>
using namespace std ;


int main()
{
  Point p(2,3),y(p),z(7,8);
  z.affiche();
  p.affiche();
  z.distance(p);
  z.affiche();
  p.affiche();
  return 0;
}
