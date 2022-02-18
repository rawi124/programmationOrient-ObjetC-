#include <iostream>
using namespace std ;
#include <string>

#include "musique.h"
#include "albumMP3.h"
#include "musiqueCompressee.h"
	
	
	
	
AlbumMP3::AlbumMP3()
{
	nbtitre = 0 ;
	album = NULL;
}
AlbumMP3::AlbumMP3(int n)//construction d'une instance dont le nombre de morceaux est fourni en paramètre
{
	nbtitre = n ;
	album = new MusiqueCompressee[n] ;
}
	
AlbumMP3::AlbumMP3(MusiqueCompressee* alb, int n)
{
	nbtitre = n ;
	album = new MusiqueCompressee[n];
	for(int i = 0 ; i < n ; i ++)
		album[i] = alb[i];
}

	
AlbumMP3::AlbumMP3(const AlbumMP3 &A)
{
	nbtitre = A.nbtitre ;
	album =  new MusiqueCompressee[A.nbtitre];
	for(int i = 0 ; i < A.nbtitre ; i ++)
		album[i] = A.album[i];
}

	
AlbumMP3::~AlbumMP3()
{
	delete[]album;
}


//surcharge de l'opérateur =

AlbumMP3& AlbumMP3::operator=(const AlbumMP3& A)
{
	if( this != &A)
	{
		delete[]album ;
		nbtitre = A.nbtitre ;
		album =  new MusiqueCompressee[A.nbtitre];
		for(int i = 0 ; i < A.nbtitre ; i ++)
			album[i] = A.album[i];
	}
	return (*this);
}

AlbumMP3 AlbumMP3::operator+(const MusiqueCompressee &A)
{
	int n =(this)->get_nbtitre()+1;
	cout<<n<<endl;
	AlbumMP3 al(n);
	for(int i = 0 ; i < n-1 ; i ++)
		al.album[i] = (this)->album[i];
	al.album[n-1] = A ; 
	return al ;
}












