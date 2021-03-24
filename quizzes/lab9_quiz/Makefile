.PHONY: all clean test test1 test2 test3 grade

all: main

main: main.o eu_gcd.o
	g++ -g -std=gnu++11 $^ -o $@

%.o: %.cpp
	g++ -g -std=gnu++11 -c $^ -o $@

clean:
	rm -f *.o main output*

test: test1 test2 test3 test4

test1: main
	@echo 'Test1'
	printf '144 55' | ./main | tee output1
	@echo 'Diff output: '
	@diff --suppress-common-lines -y output1 correct1
	@echo ''

test2: main
	@echo 'Test2'
	printf '45 72' | ./main | tee output2 
	@echo 'Diff output: '
	@diff --suppress-common-lines -y output2 correct2
	@echo ''

test3: main
	@echo 'Test3'
	printf '121 99' | ./main | tee output3
	@echo 'Diff output: '
	@diff --suppress-common-lines -y output3 correct3
	@echo ''

test4: main
	@echo 'Test4'
	printf '110880 45360' | ./main | tee output4
	@echo 'Diff output: '
	@diff --suppress-common-lines -y output4 correct4
	@echo ''