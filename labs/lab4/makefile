all:	main

main: main.o CardDeck.o 
	g++ main.o CardDeck.o -o main

main.o: main.cpp
	g++ -c main.cpp
C4Col.o:  CardDeck.cpp CardDeck.h
	g++ -c CardDeck.cpp

clean:
	rm -f *.o main
