all:	main

CXX= g++
CXXFLAGS= -g -std=gnu++11 -Wall -Wextra -pedantic

SHELL= /bin/bash

main: LLClass.o main.o
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o main *.out
	
test: main
	@echo "Testing output"
	@diff --suppress-common-lines -y <(./main) output.txt
	
