all: main.out

main.out: main.o animal.o loup.o 
	g++ -o main.out main.o animal.o loup.o

main.o: main.cpp
	g++ -c main.cpp

animal.o: animal.cpp
	g++ -c animal.cpp

loup.o: loup.cpp
	g++ -c loup.cpp