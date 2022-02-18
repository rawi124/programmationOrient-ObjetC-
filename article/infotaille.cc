#include <string.h>
#include <iostream>
using namespace std ;

#include "infotaille.h"

	 	
	 	
Infotaille::Infotaille()
{
	code = "";
	quantite = 0 ;
}
Infotaille::Infotaille(string co, int qu)  
{
	code = co;
	quantite = qu ;
}	
Infotaille::Infotaille(const Infotaille & I)
{
	code = I.code;
	quantite = I.quantite ;
}
string Infotaille::Get_Code()
{
	return code ;
}
int Infotaille::Get_Quantite()
{
	return quantite ;
}
void Infotaille::Put_Code(string co)
{
	code = co ;
}
void Infotaille::Put_Quantite(int q)
{
	quantite = q ;
}
ostream& operator<<(ostream& o,const Infotaille & I)
{
	o << I.code <<endl;
	o << I.quantite<<endl ;
	return o ;
}


	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
