#include <iostream>
using namespace std ;
#include <string>

#include "musique.h"
#include "musiqueCompressee.h"

MusiqueCompressee::MusiqueCompressee()
{
	perte = false ;
	algo = "";
	taux = 0 ;
}
//par défaut pas de compression
MusiqueCompressee::MusiqueCompressee(string tit, string aut, float dur, bool per, string al , float tx):Musique(tit,aut,dur)
{
	perte = per ;
	algo = al ;
	taux = tx ;
}
	
MusiqueCompressee::MusiqueCompressee(const MusiqueCompressee &M):Musique(M)
{
	perte = M.perte ;
	algo = M.algo ;
	taux = M.taux ;
}
	
	//polymorphisme 
float MusiqueCompressee::taille_mem()const// calcule la taille du fichier
{
	
	return (this)->get_duree()*60*taux/1000 ;
}
	
//surcharge de l'opérateur <<

ostream & operator<<(ostream & o, const MusiqueCompressee & C)
{
    string aut = C.get_auteur(); 
    //on  met les :: que s il ya la meme methode dans plusiuers classes
    string tit = C.get_titre();
    float dur = C.get_duree();
    float tail = C.MusiqueCompressee::taille_mem();
	o << "(" << aut <<"," << tit << ","<<dur<<","<<tail<<")"<<endl;
	return o ;
}

