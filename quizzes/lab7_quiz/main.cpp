#include "LLClass.hpp"

int main(void){
    // linked list pedantry
    LLClass L, LL;
    
    std::string s1 = "Hello Linked Lists!";
    std::string s2 = "Hello from List2!";
    
    //create a new list
    
    // push some stuff into the list
    for(char c: s1) L.push(c);    
    //print it out
    L.print();  
    for(char c: s2) LL.push(c);
    LL.print();
    //assign the new list
    LL = L;
    //print the list out again
    LL.print();

}
