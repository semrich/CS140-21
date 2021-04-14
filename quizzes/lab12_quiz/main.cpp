#include "LLClass.hpp"

int main(void) {
  // linked list pedantry
  LLClass L, LL;

  std::string s1 = "Hello Doubly Linked Lists!";
  std::string s2 = "TACOCAT";

  // create a new list

  // push some stuff into the list
  for (char c : s1)
    L.push_back(c);
  // print it out
  L.print(1);
  printf("\n");

  printf("But backwards:\n");
  L.print(2);
  printf("\n");
  for (char c : s2)
    LL.push_front(c);
  LL.print(1);
  printf(" spelled backwards is ");
  LL.print(2);
  printf("\n");

  // call copy cons
  LLClass LL3(LL);
  // should print "TACOCAT"
  LL3.print(1);
  printf("\n");
  // assign the new list
  LL = L;
  // print the list out again
  // should print "Hello Doubly ..."
  LL.print(1);
  printf("\n");

  for(int i = 0; i <6; i++){
      char c = LL.pop_front();
      printf("%c", c);
  }
  printf("\n");
  //Should print "Doubly Linked Lists!"
  LL.print(1);
  printf("\n");


  LL = LL3;
  // should print TACOCAT
  LL.print(1);
  printf("\n");
}
