main :  main.o musique.o musiqueCompressee.o albumMP3.o 
	g++  musique.o main.o musiqueCompressee.o albumMP3.o -o main

musique.o : musique.h musique.cc
	g++ -c musique.cc

musiqueCompresse.o : musique.h musiqueCompressee.cc musiqueCompressee.h
	g++ -c musiqueCompressee.cc


albumMP3.o : albumMP3.h albumMP3.cc
	g++ -c albumMP3.cc
	
	
main.o : main.cc musique.h albumMP3.h musiqueCompressee.h
	g++ -c main.cc

