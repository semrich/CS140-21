.PHONY: all clean test test1 test2 test3 grade

all: main

main: main.o kmoves.o
	g++ -g -std=gnu++11 $^ -o $@

%.o: %.cpp
	g++ -g -std=gnu++11 -c $^ -o $@

clean:
	rm -f *.o main output*

