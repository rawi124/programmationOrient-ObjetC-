#include <iostream>
using namespace std ;
#include "complexeDef.h"


ComplexeDef::ComplexeDef()
{
	re = 0 ;
	im = 0 ;
}

ComplexeDef::ComplexeDef(float a , float b)
{
	re = a ;
	im = b ;
}

ComplexeDef::ComplexeDef(const ComplexeDef & a)
{
	re = a.re ;
	im = a.im ;
}

void ComplexeDef::Print()
{
  cout <<"la partie reelle est " << re << endl;
  cout <<"la partie imaginaire " << im << endl;
}

ComplexeDef ComplexeDef::operator+(ComplexeDef C)
{
	return ComplexeDef(re+C.re,im+C.im);
}
ComplexeDef ComplexeDef::operator-(ComplexeDef C)
{
	return ComplexeDef(re+C.re,im+C.re);
}

ComplexeDef ComplexeDef::operator*(ComplexeDef C)
{
	return ComplexeDef(C.re*re - C.im*im , C.re*im + C.im*re);
}
ComplexeDef& ComplexeDef::operator*(float f)
{
	re = re * f ;
	im = im * f ;
	return *this ;
}

ComplexeDef operator*(float f ,const ComplexeDef & C )
{
		return ComplexeDef(C.re*f , C.im*f);
}

ostream & operator<<(ostream & o, const ComplexeDef & C)
{
	o << "(" << C.re <<"," << C.im <<")";
	return o ;
}
bool ComplexeDef::operator==(ComplexeDef C)
{
	return (C.re == re) && ( C.im == im);
}
