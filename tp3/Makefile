test : test.o Polynome.o complexeDef.o vecteurComplexe.o
	g++ test.o Polynome.o complexeDef.o vecteurComplexe.o -o test
Polynome.o : Polynome.cc Polynome.h
	g++ -c Polynome.cc
complexeDef.o : complexeDef.cc complexeDef.h
	g++ -c complexeDef.cc
vecteurComplexe.o : vecteurComplexe.cc vecteurComplexe.h complexeDef.h
		g++ -c vecteurComplexe.cc
test.o : test.cc Polynome.h  complexeDef.h vecteurComplexe.h
	g++ -c test.cc 
