CXX=		g++
CXXFLAGS=	-g -Wall -std=gnu++11
SHELL=		bash

all:		solution

solution:	solution.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f solution

test:		test-output1 test-output2 test-output3 test-output4

test-output1:	solution
	@echo Testing input/output 1...
	@diff --suppress-common-lines -y <(./solution < input1) output1

test-output2:   solution
	@echo Testing input/output 2...
	@diff --suppress-common-lines -y <(./solution < input2) output2

test-output3:	solution
	@echo Testing input/output3...
	@diff --suppress-common-lines -y <(./solution < input3) output3
test-output4:   solution
	@echo Testing input/output4...
	@diff --suppress-common-lines -y <(./solution < input4) output4

