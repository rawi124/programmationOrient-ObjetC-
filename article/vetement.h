#ifndef VETEMENT_H
#define VETEMENT_H

#include <string.h>

#include "article.h"
#include "infotaille.h"


class Vetement : public Article 
{
	private : 
		int nt ;
		Infotaille * vt ;
	public :
		Vetement();
		Vetement(int ref , string lib , float pri , float red , int n ,Infotaille * v );
		Vetement(const Vetement & );
		~Vetement();
		void Affic();
		Vetement& operator=(const Vetement & V);
		float vente(string cod);
		
};
#endif
