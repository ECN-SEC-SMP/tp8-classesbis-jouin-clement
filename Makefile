all: main.out

main.out: main.o animal.o loup.o lion.o ours.o vecteur.o
	g++ -o main.out main.o animal.o loup.o lion.o ours.o vecteur.o

main.o: main.cpp
	g++ -c main.cpp

animal.o: animal.cpp
	g++ -c animal.cpp

loup.o: loup.cpp
	g++ -c loup.cpp

lion.o: lion.cpp
	g++ -c lion.cpp

ours.o: ours.cpp
	g++ -c ours.cpp

vecteur.o: vecteur.cpp
	g++ -c vecteur.cpp
