main : main.o personne.o professeur.o etudiant1.o etudiant2.o matiere.o
	g++  main.o personne.o professeur.o etudiant1.o etudiant2.o matiere.o -o main

personne.o : personne.cc personne.h
	g++ -c personne.cc

etudiant1.o : etudiant1.cc etudiant1.h personne.h
		g++ -c etudiant1.cc

professeur.o : professeur.cc professeur.h personne.h 
	g++ -c professeur.cc

matiere.o : matiere.cc matiere.h
	g++ -c matiere.cc

etudiant2.o : etudiant2.cc etudiant2.h etudiant1.h matiere.h
	g++ -c etudiant2.cc


main.o : main.cc personne.h professeur.h etudiant1.h matiere.h etudiant2.h
	g++ -c main.cc
