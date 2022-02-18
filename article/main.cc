#include <iostream>
using namespace std ;

#include <string.h>

#include "article.h"
#include "vetement.h"
#include "infotaille.h"


int main()
{
  Article a(3,"Chocolat",1.2);
  a.Affic();
  int ref = a.Get_reference();
  cout<<ref<<endl;
  Infotaille I("taille M",10) ,M(I) , S();
  I.Put_Code("taille L");
  cout<<I.Get_Code()<<endl;
  cout <<M ;
  Infotaille  inf[2] = {I,M};
  Vetement V(5 ,"FRAISE",30 , 0.1 , 2 ,inf );
  Vetement T(7 ,"FRAMBOISE ",15 , 0.2 , 2 ,inf );
  Vetement C();
  cout<<"*********************test vetemebt****************************"<<endl;
  V.Affic();
  float x = V.vente("taille M");
  cout<<x<<endl;

  return 0 ;
}
