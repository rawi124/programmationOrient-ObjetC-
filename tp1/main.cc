#include <iostream>
using namespace std;
#include "echangiste.h"
#include "complexe.h"

int main(int argc , char*argv[])
{

    int a = 2 , b = 5 ;
    /*cout <<"a = " << a << " b = "<< b << endl;
    permuter(a,b);
    cout <<"a = " << a << " b = "<< b << endl;
    */
    complexe x ;
    Init(x);
    x.re = 2 ;
    x.im = -3 ;
   
    complexe y ;
    Init(y);
    y.re = 2 ;
    y.im = 3 ;
    static complexe t ;
    Init(t);
    complexe s = Bidon(t) ;
    /*
    AfficherComplexe(t);
    AfficherComplexe(s);
    cout <<"adresse static t"<<&t<<endl;
    cout <<"adresse de re "<<&t.re<<endl;
    cout <<"adresse de im "<<&t.im<<endl;
    cout <<"adresse de ident "<<&t.ident<<endl;
	cout <<endl;
    cout <<"adresse s "<<&s<<endl;
    cout <<"adresse de re "<<&s.re<<endl;
    cout <<"adresse de im "<<&s.im<<endl;
    cout <<"adresse de ident "<<&s.ident<<endl;
    /*
    cout <<"adresse static "<<&t<<endl;
    cout <<"adresse de re "<<&t.re<<endl;
    cout <<"adresse de im "<<&t.im<<endl;
    cout <<"adresse de ident "<<&t.ident<<endl;
    complexe & s = t ; 
    cout <<"adresse static "<<&s<<endl;
    cout <<"adresse de re "<<&s.re<<endl;
    cout <<"adresse de im "<<&s.im<<endl;
    cout <<"adresse de ident "<<&s.ident<<endl;
    */
    complexe * pz ;
    //&xpz adresse d un complexe
    CreerComplexe(&pz);
    //ici quand je fais appel a pz c'est de type complexe * , si on ajoute & alors 
    //on aura adresse d adresse de type complexe ** ce qui est le juste demandé 
    ptComplexe ptc ; 
    CreerComplexe(ptc);
    AfficherComplexe(*ptc);
    ptComplexe ptp ; 
    CreerComplexe(ptp);
    AfficherComplexe(*ptp);
    
    complexe * cp ;
    cp = CreerComplexe() ;
    //AfficherComplexe(*cp);
    complexe * cpp ;
    cpp = CreerVecteurComplexes(5) ;
    for (int i = 0 ; i < 5 ; i++)
    {
    	cout<<&cpp[i]<<endl;
    }
    return 0; 
}
