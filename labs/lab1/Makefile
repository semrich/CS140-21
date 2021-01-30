CXX=		g++
CXXFLAGS=	-g -Wall -std=gnu++11
SHELL=		bash

all:		toecheck

gold:	toecheck.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f toecheck

test:		test-output1 test-output2 

test-output1:	toecheck
	@echo Testing input/output 1...
	@diff --suppress-common-lines -y <(./toecheck < input1) output1
test-output2:   toecheck
	@echo Testing input/output 2...
	@diff --suppress-common-lines -y <(./toecheck < input2) output2

