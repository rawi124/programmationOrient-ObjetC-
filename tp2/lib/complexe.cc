#include "complexe.h"
#include <iostream>
using namespace std;
#include <cmath>


Complexe::Complexe()
{
	re = 0 ;
	im = 0 ;
	cout<<"appel constructeur par defaut "<<this<<endl;
}

Complexe::Complexe(float a , float b)
{
	re = a ;
	im = b ;
	cout<<"appel constructeur avec param "<<this<<endl;
}

Complexe::Complexe(const Complexe & a)
{
	re = a.re ;
	im = a.im ;
	cout<<"appel constructeur par copie "<<this<<endl;
}

Complexe::~Complexe()
{
	cerr << "appel au destructeur "<<this << endl ;
}

void Complexe::permuter(Complexe&a)
{
	Complexe tmp = a ;
	a.re = re ;
	a.im = im ;
	re = tmp.re ;
	im = tmp.im ;
}

void Complexe::Print()
{
  cout <<"la partie reelle est " << re << endl;
  cout <<"la partie imaginaire " << im << endl;
}

Complexe Complexe::somme(const Complexe&a)
{
	Complexe som ;
	som.re = a.re + re ;
	som.im = a.im + im ;
	return som ;
}

Complexe Complexe::produit(const Complexe&a)
{
	Complexe p ;
	p.re = a.re*re - a.im*im ;
	p.im = a.re*im + a.im*re ;
	return p ;
}


Complexe Complexe::conjuge()
{
	Complexe conj ;
	conj.re = re ;
	conj.im = -im ;
	return conj ;
}


float Complexe::getRe()
{
	return re ;
}

float Complexe::getIm()
{
	return im ;
}
void Complexe::Sum1(const Complexe& z)
{
  cout<<"sum1 "<<endl;
  re = re + z.re;
  im = im + z.im;
}

Complexe Complexe::Sum2(const Complexe& z)
{
  cout<<"sum2 "<<endl;
  return Complexe(re+z.re, im+z.im);
}

Complexe Complexe::Sum3(const Complexe& z)
{
  cout<<"sum3 "<<endl;
  re = re + z.re;
  im = im + z.im;
  return *this;
}
Complexe& Complexe::Sum4(const Complexe& z)
{
  cout<<"sum4 "<<endl;
  re = re + z.re;
  im = im + z.im;
  return *this;
}
