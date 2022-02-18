#include <iostream>
using namespace std ;

#include <string.h>

#include "article.h"
#include "infotaille.h"
#include "vetement.h"



Vetement::Vetement():Article()
{
	nt = 0 ;
	vt = NULL ;
}
Vetement::Vetement(int ref , string lib , float pri , float red , int n ,Infotaille * v ):Article(ref,lib,pri)
{
	Article::Put_reduction(red);
	nt = n ;
	vt = new Infotaille[nt];
	for(int i = 0 ; i < n ; i++)
		vt[i] = v[i];
}
Vetement::Vetement(const Vetement & V):Article(V)
{
	nt = V.nt ;
	vt = new Infotaille[nt];
	for(int i = 0 ; i < nt ; i++)
		vt[i] = V.vt[i];
}
	
Vetement::~Vetement()
{
	delete[]vt;
}

void Vetement::Affic()
{
	Article::Affic();
	for(int i = 0 ; i < nt ; i++)
		cout << vt[i] ;
}

Vetement& Vetement::operator=(const Vetement & V)
{
	if (this != &V)
	{
		
		delete[]vt ;
		vt = new Infotaille[V.nt];
		nt = V.nt ;
		this->Article::operator=(V);
		for(int i = 0 ; i < nt ; i++)
			vt[i] = V.vt[i];
	}
	return (*this);
}

float Vetement::vente(string cod)
{
	for(int i = 0 ; i < nt ; i++)
	{
		if ( vt[i].Get_Code() == cod )
		{
			int nb = vt[i].Get_Quantite() ;
			int pri = Article::Get_prix() ;
			return nb* pri ;
		}
	}
	return 0 ;
}
			

















