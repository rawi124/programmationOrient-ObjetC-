#include <string.h>
#include <iostream>
using namespace std ;

#include "article.h"

Article::Article()
{
	reference = 0 ;
	libelle = "" ;
	prix = 0.0 ;
	reduction = 0.0 ;
}

Article::Article(int ref , string lib , float pr)
{
	reference = ref;
	libelle = lib ;
	prix = pr ;
	reduction = 0.0 ;
}
Article::Article(const Article &A)
{
	reference = A.reference ;
	libelle   = A.libelle ;
	prix = A.prix ;
	reduction = 0.0 ;
}
void Article::Affic()
{
	cout<<"l article de reference "<<reference<<", dont le libelle est "<<libelle;
	cout<<", le prix "<<prix<<"qui beneficie d une reduction de "<<reduction<<endl;
}

int Article::Get_reference()
{
	return reference ;
}
string Article::Get_libelle()
{
	return libelle ;
}
float Article::Get_prix()
{
	return prix ;
}
float Article::Get_reduction()
{
	return reduction ;
}
void Article::Put_reference(int ref)
{
	reference = ref ;
}
void Article::Put_libelle(string lib)
{
	libelle = lib ;
}
void Article::Put_prix(float pr)
{
	prix = pr ;
}
void Article::Put_reduction(float red)
{
	reduction = red ;
}





















