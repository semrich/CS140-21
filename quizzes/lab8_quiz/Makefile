all: main


main: main.o hex.o
	g++ -g -std=gnu++11 $^ -o $@

%.o: %.cpp
	g++ -g -std=gnu++11 -c $^ -o $@

test: main
	printf "Hello World!" | ./main

clean:
	rm -f *.o main
