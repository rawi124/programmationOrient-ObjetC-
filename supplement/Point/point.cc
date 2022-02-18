#include "point.h"
#include <iostream>
using namespace std ;

Point::Point()
{
  x = 0 ; y = 0 ;
}
Point::Point(int a, int b)
{
  x = a ; y = b ;
}
Point::Point(const Point & z)
{
  x = z.x ; y = z.y ;
}
Point::~Point()
{

}
void Point::deplace(int a, int b )
{
  x = x + a ;
  y = y + b ;
}
void Point::affiche()
{
  cout<<"x = "<<x<<endl;
  cout<<"y = "<<y<<endl;
}
void Point::distance(Point a)
{
  x = x - a.x ;
  y = y - a.y ;
}
