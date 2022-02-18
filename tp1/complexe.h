#ifndef COMPLEXE_H
#define COMPLEXE_H
typedef struct {
      float re ;
      float im ;
      unsigned int ident ;
              }complexe ;
              
typedef complexe*ptComplexe ;

void AfficherComplexe(const complexe & a);     

void permuter(complexe & a, complexe & b);

complexe Somme(const complexe & a , const complexe & b);

complexe Produit(const complexe & a , const complexe & b);

float Module(const complexe & a);

complexe Conjuge(const complexe & a);

void Init(complexe&);

complexe Bidon(complexe&);


void CreerComplexe(complexe **a);

void CreerComplexe(ptComplexe&a);

complexe*CreerComplexe();
complexe*CreerVecteurComplexes(unsigned int n );

#endif







