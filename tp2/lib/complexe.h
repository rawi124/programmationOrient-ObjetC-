#ifndef COMPLEXE_H
#define COMPLEXE_H
class Complexe {
	private :
           float re ;
           float im ;
	public :
	    Complexe();
	    Complexe(float,float);
	    Complexe(const Complexe &);
	    ~Complexe();
	    void permuter(Complexe&);
	    void Print();
	    Complexe somme(const Complexe&);
	    Complexe produit(const Complexe&);
	    Complexe conjuge();
	    float getRe();
	    float getIm();
	    void Sum1(const Complexe& );
	    Complexe Sum2(const Complexe&);
	    Complexe Sum3(const Complexe&);
	   	Complexe& Sum4(const Complexe&);
	    
	    
}; 

#endif
