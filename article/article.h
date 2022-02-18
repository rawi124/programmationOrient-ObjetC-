#ifndef ARTICLE_H
#define ARTICLE_H

#include <string.h>

class Article 
{
	private : 
		int reference ;
		string libelle ;
		float prix ;
		float reduction ;
	public :
		Article();
		Article(int , string , float);
		Article(const Article &);
		void Affic();
		int Get_reference();
		string Get_libelle();
		float Get_prix();
		float Get_reduction();
		void Put_reference(int);
		void Put_libelle(string);
		void Put_prix(float);
		void Put_reduction(float);
};

#endif
