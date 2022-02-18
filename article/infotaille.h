#ifndef INFOTAILLE_H
#define INFOTAILLE_H

#include <string.h>

class Infotaille 
{
	private :
		string code ;
		int quantite ;
	 public :
	 	Infotaille();
	 	Infotaille(string , int );
	 	Infotaille(const Infotaille &);
	 	string Get_Code();
	 	int Get_Quantite();
	 	void Put_Code(string);
	 	void Put_Quantite(int);
	 	friend ostream& operator<<(ostream& o,const Infotaille & );
};
#endif
	 
