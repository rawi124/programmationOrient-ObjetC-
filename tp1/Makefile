prog : main.o echangiste.o complexe.o
	g++ main.o echangiste.o complexe.o -o prog
main.o : main.cc 
	g++ -c main.cc
echangiste.o : echangiste.cc echangiste.h
	g++ -c  echangiste.cc
complexe.o : complexe.cc complexe.h 
	g++ -c -lm complexe.cc
