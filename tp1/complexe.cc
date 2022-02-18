#include "complexe.h"
#include <iostream>
using namespace std;
#include <cmath>

//ici const pour dire au compilateur que complexe ne doit pas etre changé a la compilation 
//& c'est une reference 
void AfficherComplexe(const complexe & a)
{
  cout <<"la partie reelle est " << a.re << endl;
  cout <<"la partie imaginaire " << a.im << endl;
  cout <<"ident egale " << a.ident << endl ;
}

complexe Somme(const complexe & a , const complexe & b)
{
	complexe s ;
	s.re = a.re + b.re ;
	s.im = a.im + b.im ;
	return s ;
}
	
complexe Produit(const complexe & a , const complexe & b)
{
	complexe p ;
	p.re = a.re*b.re - a.im*b.im ;
	p.im = a.re*b.im + a.im*b.re ;
	return p ;
}

float Module(const complexe & a)
{
	float mod = sqrt(a.re*a.re + a.im*a.im);
	return mod ;
}	

complexe Conjuge(const complexe & a)
{
	complexe conj ;
	conj.im = -a.im ;
	return conj ;
}

void Init(complexe&a)
{
	static int i = 0 ;
	a.re = 0 ;
	a.im = 0 ;
	a.ident = i++ ;
}
//declarer static est sortir la variable de la pile et la declarer dans le tas
// elle ressemble a une variable globale mais elle ne l'es pas elle n'est visible que par la fonction
//on modifie sa duree de vie et non sa visibilité 

complexe Bidon(complexe&a)
{
	complexe & com = a ;
	return com ;
}

void CreerComplexe(complexe **a)
{
	*a = new complexe;
	//new complexe donne une adresse 
	//a est un complexe** adresse d adresse d complexe
	//*a complexe * : adresse d un complexe
	//**c est un complexe
	Init(**a);
}

	
void CreerComplexe(ptComplexe&a)
{
	a = new complexe ;
	Init(*a);
}

complexe*CreerComplexe()
{
	complexe * t ;
	t = new complexe ;
	Init(*t);
	return t ;
}
complexe*CreerVecteurComplexes(unsigned int n )
{
	complexe * tab ;
	tab = new complexe[n] ;
	for(int i = 0 ; i < n ; i ++)
	{
		Init(tab[i]);
		cout<<&tab[i]<<endl;
	}
	return tab ;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
