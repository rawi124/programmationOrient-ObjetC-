#include <iostream>
using namespace std ;
#include <string>

#include "musique.h"

Musique::Musique()
{
	titre = "";
	auteur = "";
	duree = 0 ;
}
Musique::Musique(string tit, string aut, float dur)
{
	titre = tit ;
	auteur = aut ;
	duree = dur ;
}

Musique::Musique(const Musique &M)
{
	titre = M.titre ;
	auteur = M.auteur ;
	duree = M.duree ;
}
//accesseurs
string Musique::get_titre()const
{
	return titre ;
}
string Musique::get_auteur()const
{
	return auteur ;
}
	
float Musique::get_duree()const
{
	return duree ;
}
float Musique::taille_mem()// calcule et retourne la taille du fichier 	
{
	return 60*192*duree/1000;
}
void Musique::affiche()
{
	float taille = (this)->taille_mem();
	cout<<"l auteur de la chanson "<<titre<<" qui est de duree "<<duree;
	cout<<" et de taille "<<taille<<" est "<<auteur<<endl;
}
	
