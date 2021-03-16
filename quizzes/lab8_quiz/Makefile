.PHONY: all clean test test1 test2 test3 grade

all: main

main: main.o hex.o
	g++ -g -std=gnu++11 $^ -o $@

%.o: %.cpp
	g++ -g -std=gnu++11 -c $^ -o $@

clean:
	rm -f *.o main test.txt

test: test1 test2 test3

test1: main
	@echo 'Test1'
	printf 'Hello_world!' | ./main  | tee -a test.txt
	@echo ''

test2: main
	@echo 'Test2'
	printf 'The_cake_is_a_lie' | ./main | tee -a test.txt
	@echo ''

test3: main
	@echo 'Test3'
	printf 'All_your_base_are_belong_to_us' | ./main | tee -a test.txt
	@echo ''

grade: test
	@diff -y --suppress-common-lines test.txt output.txt

