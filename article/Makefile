main : main.o article.o infotaille.o vetement.o
	g++  main.o article.o infotaille.o  vetement.o -o main

article.o : article.cc article.h
	g++ -c article.cc
	
infotaille.o : infotaille.cc infotaille.h
	g++ -c infotaille.cc
	
vetement.o : vetement.cc vetement.h
	g++ -c vetement.cc

main.o : main.cc 
	g++ -c main.cc
