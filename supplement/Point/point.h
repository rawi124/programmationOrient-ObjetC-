#ifndef POINT_H
#define POINT_H

class Point {
  private :
    int x ;
    int y ;
  public :
    Point();
    Point(int , int);
    Point(const Point &);
    ~Point();
    void deplace(int , int );
    void affiche();
    void distance(Point);
};
#endif
