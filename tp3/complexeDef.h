#ifndef COMPLEXEDEF_H
#define COMPLEXEDEF_H

class ComplexeDef {
  private :
    float re ;
    float im ;
  public :
    ComplexeDef();
    ComplexeDef(float,float);
    ComplexeDef(const ComplexeDef &);
    void Print();
    ComplexeDef operator+(ComplexeDef);
    ComplexeDef operator*(ComplexeDef);//complexe*complexe
    ComplexeDef operator-(ComplexeDef);
    ComplexeDef operator/(ComplexeDef);
    friend ComplexeDef operator*(float ,const ComplexeDef &);//float*complexe
    ComplexeDef& operator*(float ); //complexe*float
    bool operator==(ComplexeDef);
    friend ostream & operator<<(ostream & , const ComplexeDef &);


};
#endif
