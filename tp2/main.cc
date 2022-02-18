#include <iostream>
using namespace std;
#include "complexe.h"

int main(int argc , char*argv[])
{
	/*Complexe c1(1,2) , c2(3,4),c3(c2);

	c1.permuter(c2);
	Complexe c4 = c1.produit(c2) ;
	float x = c4.module() ;
	cout << x << endl ;
	Complexe c5 ;
	c5 = c1.conjuge();
	c5.afficher();
	*/

	Complexe x(1,2);

	Complexe y(3,4);

	Complexe z(y);

	x.Print();

	(x.Sum1(y));

	x.Print();

	(x.Sum2(y)).Print();

	x.Print();

	( (x.Sum2(y)).Sum2(z) ).Print();

	x.Print();

	( (x.Sum3(y)).Sum3(z) ).Print();

	x.Print();

	( (x.Sum4(y)).Sum4(z) ).Print();

	x.Print();
	return 0 ;
}
